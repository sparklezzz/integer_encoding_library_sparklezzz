/*
 * SIMD_KScheme_2Bit_CU.hpp
 *
 *  SIMD_KScheme_2Bit_Complete Unary
 *
 *  Created on: 2013-3-2
 *      Author: zxd
 */

#ifndef SIMD_KSCHEME_2BIT_CU_HPP_
#define SIMD_KSCHEME_2BIT_CU_HPP_

#ifdef USE_SSE_INSTRUCTION

#include <stdint.h>
#include <cmath>
#include <assert.h>
#include <string.h>
#include "Compressor.hpp"
#include "VarByte.hpp"
#include <iostream>
#include "simd_kscheme_2bit_cu_unpack.hpp"

using namespace std;

namespace paradise {
namespace index {

class SIMD_KScheme_2Bit_CU: public Compressor {
public:
	SIMD_KScheme_2Bit_CU() {
	}
	virtual ~SIMD_KScheme_2Bit_CU() {
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
		return "SIMD_KScheme_2Bit_CU";
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
};

template<typename T>
int SIMD_KScheme_2Bit_CU::encode(char* des, const T* src, uint32_t encodeNum) {
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
int SIMD_KScheme_2Bit_CU::decode(T* des, const char* src, uint32_t decodeNum) {
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
int SIMD_KScheme_2Bit_CU::encodeBlock(char* des, const T* src, uint32_t encodeNum) {
	const static uint16_t unary_code[17] = {-1, 0, 0x1, 0x3, 0x7, 0xf, 0x1f, 0x3f, 0x7f,	// INVALID, 0, 01, 011, 0111, 01111, 011111, 0111111, 01111111
										0xff, 0x1ff, 0x3ff, 0x7ff, 0xfff,		// 011111111,...
										0x1fff, 0x3fff, 0x7fff};

	uint32_t quadEncodeNum = encodeNum / 4;
	uint16_t *tmpModeSegBeg = new uint16_t[quadEncodeNum];	//max control bit for one int: 4
	uint16_t *tmpModeSegIdx = tmpModeSegBeg;
	memset(tmpModeSegBeg, 0, quadEncodeNum * sizeof(uint16_t));

	char *desBeg = des;
	uint32_t *desInt = (uint32_t*)des;
	char *dataSegBeg = des + 4;	//leave first 4 byte to record the begin position of data segment
	uint32_t *dataSegPosInt = (uint32_t*)dataSegBeg;

	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__("pxor %%xmm0,%%xmm0\n":::);

	int k = 0;
	uint32_t curBitOffset = 0;	//range from 0 to 4
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
		char twoBitCount = 0;
		while (quadMaxInt > 0) {
			quadMaxInt >>= 2;
			twoBitCount ++;
		}

		// step3: record the unary descriptor
		if (controlBitOffset + twoBitCount > 16) {	//start new mode and new data seg
			// pad the descriptor with all 1
			uint16_t pad = (0xffff >> controlBitOffset) << controlBitOffset;
			*tmpModeSegIdx |= pad;
			tmpModeSegIdx ++;

			controlBitOffset = controlBitOffset + twoBitCount - 16;
			*tmpModeSegIdx |= unary_code[controlBitOffset];
		}
		else {
			*tmpModeSegIdx |= unary_code[twoBitCount] << controlBitOffset;
			controlBitOffset += twoBitCount;
		}

		// step4: encode group of 4 ints
		uint32_t bitLeftInUInt = 32 - curBitOffset;
		uint32_t bitCount = twoBitCount * 2;
		if (bitLeftInUInt < bitCount) {	//new data should cross uint boundary
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
			uint32_t bitUnwritten = bitCount - bitLeftInUInt;
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

			curBitOffset = bitUnwritten;
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

			curBitOffset += bitCount;
		}

		src += 4;
	}

	__asm__("movdqu %%xmm0,%0\n"
			:"=m" (dataSegPosInt[0])
			::"memory");

	// pad the descriptor
	uint16_t pad = (0xffff >> controlBitOffset) << controlBitOffset;
	*tmpModeSegIdx |= pad;
	tmpModeSegIdx ++;
	dataSegPosInt += 4;

	// record the start offset of mode segment
	*desInt = 4 + ((char*)dataSegPosInt - dataSegBeg);

	// append the mode seg to the end of data seg
	char *modeSegBeg = (char*)dataSegPosInt;
	uint32_t modeSegSize = (tmpModeSegIdx - tmpModeSegBeg) * sizeof(uint16_t);
	memcpy(modeSegBeg, tmpModeSegBeg, modeSegSize);

	delete [] tmpModeSegBeg;

	return (modeSegBeg - desBeg) + modeSegSize;
}

template<typename T>
int SIMD_KScheme_2Bit_CU::decodeBlock(T* des, const char* src, uint32_t decodeNum) {

	const uint32_t *srcInt = (const uint32_t*)src;

	uint32_t modeSegOffset = *srcInt;
	const uint8_t *dataSegPos = (uint8_t*)src + 4;
	const uint8_t *modeSegBeg = (uint8_t*)(src + modeSegOffset);	//note that we still use 8 bit for mode seg here!
	const uint8_t *modeSegPos = modeSegBeg;
	const uint32_t *wordPos = (const uint32_t*)dataSegPos;

	simd_kscheme_2bit_cu_unpack_prepare<T>();

	uint32_t decoded = 0;
	uint32_t groupFullBitOffset = 0;

	while (decoded < decodeNum) {
		// get a valid unary descriptor

		const SIMDK2CUUnpackInfo &unpackInfo = SIMDK2CUUnpackInfoArr[*modeSegPos];

		unpackInfo.m_subFunc((uint32_t*)des, wordPos);

		modeSegPos ++;
		des += unpackInfo.m_intNum;
		decoded += unpackInfo.m_intNum;
		wordPos += ((groupFullBitOffset + 16) >> 5) << 2;
		groupFullBitOffset = (groupFullBitOffset + 16) & 0x1f;

	}

	uint32_t modeSegSize = modeSegPos - modeSegBeg;
	if (modeSegSize % 2 != 0)	//note that the original unit of mode seg is 16 bit
		modeSegPos ++;

	if (groupFullBitOffset != 0)
		wordPos += 4;

	return (char*)modeSegPos - src;
}

}
}

#endif

#endif /* SIMD_KSCHEME_2BIT_CU_HPP_ */
