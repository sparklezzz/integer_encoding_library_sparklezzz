/*
 * SIMD_KVarByte_CU_opt.hpp
 *
 *  SIMD_KVarByte_Complete Unary
 *
 *  Created on: 2013-3-2
 *      Author: zxd
 */

#ifndef SIMD_KVARBYTE_CU_OPT_HPP_
#define SIMD_KVARBYTE_CU_OPT_HPP_

#ifdef USE_SSE_INSTRUCTION

#include <stdint.h>
#include <cmath>
#include <assert.h>
#include <string.h>
#include "Compressor.hpp"
#include "VarByte.hpp"
#include <iostream>
#include <immintrin.h>
#include <nmmintrin.h>
#include "simd_kvint_unpack_4ints.hpp"
#include "simd_kvint_cu_unpack.hpp"

using namespace std;

namespace paradise {
namespace index {

class SIMD_KVarByte_CU_opt: public Compressor {
public:
	SIMD_KVarByte_CU_opt() {
	}
	virtual ~SIMD_KVarByte_CU_opt() {
	}

public:
	virtual int
	encodeUint32(char* des, const uint32_t* src, uint32_t encodeNum);
	virtual int
	decodeUint32(uint32_t* des, const char* src, uint32_t decodeNum);

	virtual int
	encodeUint16(char* des, const uint16_t* src, uint32_t encodeNum);
	virtual int
	decodeUint16(uint16_t* des, const char* src, uint32_t decodeNum);

	virtual int encodeUint8(char* des, const uint8_t* src, uint32_t encodeNum);
	virtual int decodeUint8(uint8_t* des, const char* src, uint32_t decodeNum);
	virtual std::string getCompressorName() {
		return "SIMD_KVarByte_CU_opt";
	}
	virtual Compressor* clone();
private:
	template<typename T>
	int encode(char* des, const T* src, uint32_t length);

	template<typename T>
	int decode(T* des, const char* src, uint32_t length);

	template<typename T>
	int encodeBlock(char* des, const T* src, uint32_t size);

	template<typename T>
	int decodeBlock(T* des, const char* src, uint32_t size);

	template<typename T>
	static int genModeArr(char* des, const T* maxQuadIntArr, uint8_t* modeArr,
			uint32_t quadEncodeNum);

	template<typename T>
	static int encodeAllGroups(char* des, const T* src, uint32_t encodeNum,
			const uint8_t* modeArr, uint32_t totalIntsNeeded);
};

template<typename T>
int SIMD_KVarByte_CU_opt::encode(char* des, const T* src, uint32_t encodeNum) {
	if (encodeNum < 4) {
		return VarByte::encode(des, src, encodeNum);
	}

	int compLen = 0;
	int left = encodeNum % 4;
	if (left > 0) {
		compLen = encodeBlock(des, src, encodeNum - left);
		compLen += VarByte::encode(des + compLen, src + encodeNum - left, left);
	} else {
		compLen = encodeBlock(des, src, encodeNum);
	}
	return compLen;
}

template<typename T>
int SIMD_KVarByte_CU_opt::decode(T* des, const char* src, uint32_t decodeNum) {
	if (decodeNum < 4) {
		return VarByte::decode(des, src, decodeNum);
	}	

	int decodeLen = 0;
	int left = decodeNum % 4;
	if (left > 0) {
		decodeLen = decodeBlock(des, src, decodeNum - left);
		decodeLen += VarByte::decode(des + decodeNum - left, src + decodeLen,
				left);
	} else {
		decodeLen = decodeBlock(des, src, decodeNum);
	}

	return decodeLen;
}
template<typename T>
int SIMD_KVarByte_CU_opt::encodeBlock(char* des, const T* src, uint32_t encodeNum) {
	const static uint32_t byte_mask_map[5] = {0, 0xff, 0xffff, 0xffffff, 0xffffffff};
	const static uint8_t unary_code[5] = {-1, 0, 1, 3, 7};	// INVALID, 0, 01, 011, 0111

	uint32_t quadEncodeNum = encodeNum / 4;
	uint8_t *tmpModeSegBeg = new uint8_t[(quadEncodeNum+1)/2];	//max control bit for one int: 4
	uint8_t *tmpModeSegIdx = tmpModeSegBeg;
	memset(tmpModeSegBeg, 0, (quadEncodeNum+1)/2);

	char *desBeg = des;
	uint32_t *desInt = (uint32_t*)des;
	char *dataSegBeg = des + 4;	//leave first 4 byte to record the begin position of data segment
	uint32_t *dataSegPosInt = (uint32_t*)dataSegBeg;

	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__("pxor %%xmm0,%%xmm0\n":::);

	int k = 0;
	uint32_t curByteOffset = 0;	//range from 0 to 4
	uint32_t controlBitOffset = 0;	//range from 0 to 7
	for (uint32_t i=0; i<encodeNum; i+=4) {
		// step1: get quad max int
		T quadMaxInt = src[0];
		for (uint32_t j=1; j<4; j++) {
			quadMaxInt |= src[j];
		}

		// step2: get bytes needed for quad max int
		if (quadMaxInt == 0)
			quadMaxInt ++;
		char byteCount = 0;
		int r = __builtin_clz(quadMaxInt);
		byteCount = (39 - r) >> 3;
		//while (quadMaxInt > 0) {
		//	quadMaxInt >>= 8;
		//	byteCount ++;
		//}

		// step3: record the unary descriptor
		if (controlBitOffset + byteCount > 8) {	//start new mode and new data seg
			// pad the descriptor with all 1
			uint8_t pad = (0xff >> controlBitOffset) << controlBitOffset;
			*tmpModeSegIdx |= pad;
			*tmpModeSegIdx = ~(*tmpModeSegIdx);   //set not e.g. 01101 -> 10010
			tmpModeSegIdx ++;

			controlBitOffset = controlBitOffset + byteCount - 8;
			*tmpModeSegIdx |= unary_code[controlBitOffset];
		}
		else {
			*tmpModeSegIdx |= unary_code[byteCount] << controlBitOffset;
			controlBitOffset += byteCount;
		}

		// step4: encode group of 4 ints
		uint32_t byteLeftInUInt = 4 - curByteOffset;
		uint32_t curBitOffset = curByteOffset << 3;
		uint32_t bitCount = byteCount << 3;
		if (byteLeftInUInt < byteCount) {	//new data should cross uint boundary
			// write data with effective bit length of the max val
			//for (uint32_t k=0; k<4; k++) {
			//	*(dataSegPosInt + k) |= (src[k] & byte_mask_map[byteLeftInUInt]) << (curByteOffset<<3);
			//}
			__asm__("movdqu %1,%%xmm3\n"                            //src[0]->xmm0
					"movdqa %%xmm3,%%xmm4\n"						//backup for next codeword
					"movd %2,%%xmm1\n"								//shiftLeft->xmm1
					"pslld %%xmm1,%%xmm3\n"							//shift left->xmm0					"psrld %%xmm2,%%xmm0\n"							//shift right->xmm
					"por %%xmm3,%%xmm0\n"
					"movdqu %%xmm0,%0\n"							//write back codeword
					:"=m" (dataSegPosInt[0])
					:"m" (src[0]),"m" (curBitOffset)
					:"memory");

			//start a new group and left val
			dataSegPosInt += 4;
			uint32_t byteUnwritten = byteCount - byteLeftInUInt;
			uint32_t bitUnwritten = byteUnwritten << 3;
			//for (uint32_t k=0; k<4; k++) {
			//	*(dataSegPosInt + k) = (src[k] >> (byteLeftInUInt<<3)) & byte_mask_map[byteUnwritten] ;
			//}
			uint32_t shiftLeft = 32 - bitCount;
			uint32_t shiftRight = 32 - bitUnwritten;
	        __asm__("movdqa %%xmm4,%%xmm0\n"
	        		"movd %0,%%xmm1\n"								//shiftLeft->xmm1
	        		"movd %1,%%xmm2\n"								//shiftRight->xmm2
	        		"pslld %%xmm1,%%xmm0\n"							//shift left->xmm0
	        		"psrld %%xmm2,%%xmm0\n"							//shift right->xmm0
					::"m" (shiftLeft),"m" (shiftRight)
					:"memory");

			curByteOffset = byteUnwritten;
		}
		else {
			// write data with effective bit length of the max val
			//for (uint32_t k=0; k<4; k++) {
			//	*(dataSegPosInt + k) |= (src[k] & byte_mask_map[byteCount]) << (curByteOffset<<3);
			//}
			uint32_t shiftLeft = 32 - bitCount;
			uint32_t shiftRight = shiftLeft - curBitOffset;
			__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	        __asm__("movdqu %0,%%xmm3\n"                            //src[0]->xmm3
	        		"movd %1,%%xmm1\n"								//shiftLeft->xmm1
	        		"movd %2,%%xmm2\n"								//shiftRight->xmm2
	        		"pslld %%xmm1,%%xmm3\n"							//shift left->xmm0
	        		"psrld %%xmm2,%%xmm3\n"							//shift right->xmm0
	        		"por %%xmm3,%%xmm0\n"
					::"m" (src[0]),"m" (shiftLeft),"m" (shiftRight)
					:"memory");

			curByteOffset += byteCount;
		}

		src += 4;
	}

	__asm__("movdqu %%xmm0,%0\n"
			:"=m" (dataSegPosInt[0])
			::"memory");

	// pad the descriptor
	uint8_t pad = (0xff >> controlBitOffset) << controlBitOffset;
	*tmpModeSegIdx |= pad;
	*tmpModeSegIdx = ~(*tmpModeSegIdx); // set not
	tmpModeSegIdx ++;
	dataSegPosInt += 4;

	// record the start offset of mode segment
	*desInt = 4 + ((char*)dataSegPosInt - dataSegBeg);

	// append the mode seg to the end of data seg
	char *modeSegBeg = (char*)dataSegPosInt;
	uint32_t modeSegSize = tmpModeSegIdx - tmpModeSegBeg;
	memcpy(modeSegBeg, tmpModeSegBeg, modeSegSize);

	delete [] tmpModeSegBeg;

	return (modeSegBeg - desBeg) + modeSegSize;
}
/*
template<typename T>
int SIMD_KVarByte_CU_opt::decodeBlock(T* des, const char* src, uint32_t decodeNum) {
	const uint32_t *srcInt = (const uint32_t*)src;

	uint32_t modeSegOffset = *srcInt;
	const uint8_t *dataSegPos = (uint8_t*)src + 4;
	const uint8_t *modeSegPos = (uint8_t*)src + modeSegOffset;
	const uint32_t *wordPos = (const uint32_t*)dataSegPos;

	simd_kvint_cu_unpack_prepare<T>();

	uint32_t decoded = 0;
	int lastStatus = 0;
	while (decoded < decodeNum) {
		// get a pack of unary descriptor
		int unpackIdx = (lastStatus << 8) + (*modeSegPos);
		const KVIntCUUnpackInfo &unpackInfo = KVIntCUUnpackInfoArr[unpackIdx];

		unpackInfo.m_subFunc((uint32_t*)des, wordPos);

		decoded += unpackInfo.m_intNum;
		des += unpackInfo.m_intNum;

		modeSegPos ++;
		wordPos += unpackInfo.m_codewordSkipped;
		lastStatus = unpackInfo.m_statusGen;
	}

	// note that lastStatus of 4 indicates the last word and we should not move wordPos forward
	if (lastStatus != 0 && lastStatus != 4)
		wordPos += 4;

	return (char*)modeSegPos - src;
}
*/


template<typename T>
int SIMD_KVarByte_CU_opt::decodeBlock(T* des, const char* src, uint32_t decodeNum) {

	typedef void (*simd_kvint_unpackFun)(T *des, const uint32_t *src);
	static simd_kvint_unpackFun simd_kvint_unpackFuns_4ints[16] = {
			simd_kvint_unpack_0_0<T>,simd_kvint_unpack_0_1<T>,simd_kvint_unpack_0_2<T>,simd_kvint_unpack_0_3<T>,
			simd_kvint_unpack_1_0<T>,simd_kvint_unpack_1_1<T>,simd_kvint_unpack_1_2<T>,simd_kvint_unpack_1_3<T>,
			simd_kvint_unpack_2_0<T>,simd_kvint_unpack_2_1<T>,simd_kvint_unpack_2_2<T>,simd_kvint_unpack_2_3<T>,
			simd_kvint_unpack_3_0<T>,simd_kvint_unpack_3_1<T>,simd_kvint_unpack_3_2<T>,simd_kvint_unpack_3_3<T>
	};

	const uint32_t *srcInt = (const uint32_t*)src;

	uint32_t modeSegOffset = *srcInt;
	const uint8_t *dataSegPos = (uint8_t*)src + 4;
	const uint8_t *modeSegPos = (uint8_t*)src + modeSegOffset;
	const uint32_t *wordPos = (const uint32_t*)dataSegPos;

	simd_kvint_unpack_prepare<T>();

	uint32_t decoded = 0;
	uint32_t curByteOffset = 0;
	uint32_t controlBitOffset = 0;
	uint8_t modeBitSet = *modeSegPos;
	while (decoded < decodeNum) {
		// get a valid unary descriptor
		uint32_t byteCount = 0;
		if (modeBitSet != 0) {
			byteCount = __builtin_ctz(modeBitSet);
			byteCount ++;
			controlBitOffset += byteCount;
			modeBitSet = (uint64_t)(modeBitSet) >> byteCount;
		} else {
			byteCount = 9 - controlBitOffset;
			controlBitOffset = 9;
		}
		//while (((*modeSegPos) >> controlBitOffset) & 0x1) {
		//	controlBitOffset ++;
		//	byteCount ++;
		//}
		//byteCount ++;
		//controlBitOffset ++;
		if (controlBitOffset == 8) {
			modeSegPos ++;
			modeBitSet = *modeSegPos;
			controlBitOffset = 0;
		}
		else if (controlBitOffset > 8) {
			modeSegPos ++;
			modeBitSet = *modeSegPos;
			controlBitOffset = 0;
			// read from new mode seg idx
			int r = __builtin_ctz(modeBitSet);
			controlBitOffset += r + 1; 
			byteCount += r;
			modeBitSet >>= controlBitOffset;
			//while (((*modeSegPos) >> controlBitOffset) & 0x1) {
			//	controlBitOffset ++;
			//	byteCount ++;
			//}
			//controlBitOffset ++;	// only increment the control bit offset
		}

		uint32_t bitCount = byteCount << 3;
		uint32_t curBitOffset = curByteOffset << 3;
		uint32_t byteLeftInUInt = 4 - curByteOffset;
		uint32_t bitLeftInUInt = byteLeftInUInt << 3;
		//for	(uint32_t k=0; k<4; k++) {
		//	*(des+k) = (*(wordPos+k) >> curBitOffset) & byte_mask_map[byteCount];
		//}

		if (byteLeftInUInt < byteCount) {	//start to read a new group
			uint32_t shiftRight = 32 - bitLeftInUInt;
			__asm__ volatile("prefetchnta %0"::"m" (wordPos[0]));
			__asm__("movdqu %0,%%xmm0\n"
					"movd %1,%%xmm1\n"								//shiftLeft->xmm1
					"psrld %%xmm1,%%xmm0\n"							//shift right->xmm0
					::"m" (wordPos[0]),"m" (shiftRight)
					:"memory");

			wordPos += 4;
			uint32_t restByteCount = byteCount - byteLeftInUInt;
			uint32_t restBitCount = restByteCount << 3;
			//for (uint32_t k=0; k<4; k++) {
			//	*(des+k) |= (*(wordPos+k) & byte_mask_map[restByteCount]) << bitLeftInUInt;
			//}
			uint32_t newShiftLeft = 32 - restBitCount;
			uint32_t newShiftRight = newShiftLeft - bitLeftInUInt;

			__asm__ volatile("prefetchnta %0"::"m" (wordPos[0]));
			__asm__("movdqu %0,%%xmm3\n"                            //srcInt[0]->xmm3
					"movd %1,%%xmm1\n"								//newShiftLeft->xmm1's low 32bit
					"movd %2,%%xmm2\n"								//newShiftRight->xmm2's low 32bit
					"pslld %%xmm1,%%xmm3\n"							//shift left->xmm3
					"psrld %%xmm2,%%xmm3\n"							//shift right->xmm3
					"por %%xmm3,%%xmm0\n"							//or xmm3->xmm0

					::"m" (wordPos[0]),"m" (newShiftLeft),"m" (newShiftRight)
					:"memory");

			curByteOffset = restByteCount;
		}
		else {
			uint32_t shiftRight = 32 - bitCount;
			uint32_t shiftLeft = shiftRight - curBitOffset;
			__asm__ volatile("prefetchnta %0"::"m" (wordPos[0]));
			__asm__("movdqu %0,%%xmm0\n"
					"movd %1,%%xmm1\n"								//shiftLeft->xmm1
					"movd %2,%%xmm2\n"								//shiftRight->xmm2
					"pslld %%xmm1,%%xmm0\n"							//shift left->xmm0
					"psrld %%xmm2,%%xmm0\n"							//shift right->xmm0
					::"m" (wordPos[0]),"m" (shiftLeft),"m" (shiftRight)
					:"memory");

			curByteOffset += byteCount;
		}


		__asm__("movdqu %%xmm0,%0\n"
				:"=m" (des[0])
				::"memory");

		decoded += 4;
		des += 4;
	}

	if (controlBitOffset > 0)
		modeSegPos ++;

	if (curByteOffset > 0)
		wordPos += 4;

	return (char*)modeSegPos - src;
}

/*
template<typename T>
int SIMD_KVarByte_CU_opt::decodeBlock(T* des, const char* src, uint32_t decodeNum) {

	typedef void (*simd_kvint_unpackFun)(T *des, const uint32_t *src);
	static simd_kvint_unpackFun simd_kvint_unpackFuns_4ints[16] = {
			simd_kvint_unpack_0_0<T>,simd_kvint_unpack_0_1<T>,simd_kvint_unpack_0_2<T>,simd_kvint_unpack_0_3<T>,
			simd_kvint_unpack_1_0<T>,simd_kvint_unpack_1_1<T>,simd_kvint_unpack_1_2<T>,simd_kvint_unpack_1_3<T>,
			simd_kvint_unpack_2_0<T>,simd_kvint_unpack_2_1<T>,simd_kvint_unpack_2_2<T>,simd_kvint_unpack_2_3<T>,
			simd_kvint_unpack_3_0<T>,simd_kvint_unpack_3_1<T>,simd_kvint_unpack_3_2<T>,simd_kvint_unpack_3_3<T>
	};

	const uint32_t *srcInt = (const uint32_t*)src;

	uint32_t modeSegOffset = *srcInt;
	const uint8_t *dataSegPos = (uint8_t*)src + 4;
	const uint8_t *modeSegPos = (uint8_t*)src + modeSegOffset;
	const uint32_t *wordPos = (const uint32_t*)dataSegPos;

	simd_kvint_unpack_prepare<T>();

	uint32_t decoded = 0;
	uint32_t curByteOffset = 0;
	uint32_t controlBitOffset = 0;
	while (decoded < decodeNum) {
		// get a valid unary descriptor
		uint32_t byteCount = 0;
		while (((*modeSegPos) >> controlBitOffset) & 0x1) {
			controlBitOffset ++;
			byteCount ++;
		}
		byteCount ++;
		controlBitOffset ++;
		if (controlBitOffset == 8) {
			modeSegPos ++;
			controlBitOffset = 0;
		}
		else if (controlBitOffset > 8) {
			modeSegPos ++;
			controlBitOffset = 0;
			// read from new mode seg idx
			while (((*modeSegPos) >> controlBitOffset) & 0x1) {
				controlBitOffset ++;
				byteCount ++;
			}
			controlBitOffset ++;	// only increment the control bit offset
		}

		uint32_t unpackFunIdx = (curByteOffset << 2) + byteCount - 1;
		(simd_kvint_unpackFuns_4ints[unpackFunIdx])(des, wordPos);

		wordPos += ((curByteOffset + byteCount) >> 2) << 2;
		curByteOffset = (curByteOffset + byteCount) & 0x3;

		decoded += 4;
		des += 4;
	}

	if (controlBitOffset > 0)
		modeSegPos ++;

	if (curByteOffset > 0)
		wordPos += 4;

	return (char*)modeSegPos - src;
}
*/
}
}

#endif

#endif /* SIMD_KVARBYTE_CU_OPT_HPP_ */
