/*
 * KVarByte_CU.hpp
 *
 *  KVarByte_Complete Unary
 *
 *  Created on: 2013-3-2
 *      Author: zxd
 */

#ifndef KVARBYTE_CU_HPP_
#define KVARBYTE_CU_HPP_

#include <stdint.h>
#include <cmath>
#include <assert.h>
#include <string.h>
#include "Compressor.hpp"
#include "VarByte.hpp"
#include <iostream>
#include "kscheme_8bit_cu_unpack.hpp"

using namespace std;

namespace paradise {
namespace index {

class KVarByte_CU: public Compressor {
public:
	KVarByte_CU() {
	}
	virtual ~KVarByte_CU() {
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
		return "KVarByte_CU";
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
int KVarByte_CU::encode(char* des, const T* src, uint32_t encodeNum) {
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
int KVarByte_CU::decode(T* des, const char* src, uint32_t decodeNum) {
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
int KVarByte_CU::encodeBlock(char* des, const T* src, uint32_t encodeNum) {
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

	if (encodeNum > 0)
		memset(dataSegPosInt, 0, 4 * sizeof(uint32_t));

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
		while (quadMaxInt > 0) {
			quadMaxInt >>= 8;
			byteCount ++;
		}

		// step3: record the unary descriptor
		if (controlBitOffset + byteCount > 8) {	//start new mode and new data seg
			// pad the descriptor with all 1
			uint8_t pad = (0xff >> controlBitOffset) << controlBitOffset;
			*tmpModeSegIdx |= pad;
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
		if (byteLeftInUInt >= byteCount) {	//new data should cross uint boundary
			// write data with effective bit length of the max val
			for (uint32_t k=0; k<4; k++) {
				*(dataSegPosInt + k) |= (src[k] & byte_mask_map[byteCount]) << (curByteOffset<<3);
			}
			curByteOffset += byteCount;
		}
		else {
			// write data with effective bit length of the max val
			for (uint32_t k=0; k<4; k++) {
				*(dataSegPosInt + k) |= (src[k] & byte_mask_map[byteLeftInUInt]) << (curByteOffset<<3);
			}
			//start a new group and left val
			dataSegPosInt += 4;
			uint32_t byteUnwritten = byteCount - byteLeftInUInt;
			for (uint32_t k=0; k<4; k++) {
				*(dataSegPosInt + k) = (src[k] >> (byteLeftInUInt<<3)) & byte_mask_map[byteUnwritten] ;
			}
			curByteOffset = byteUnwritten;
		}

		src += 4;
	}

	// pad the descriptor
	uint8_t pad = (0xff >> controlBitOffset) << controlBitOffset;
	*tmpModeSegIdx |= pad;
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

template<typename T>
int KVarByte_CU::decodeBlock(T* des, const char* src, uint32_t decodeNum) {

	const static uint32_t byte_mask_map[5] = {0, 0xff, 0xffff, 0xffffff, 0xffffffff};

	const uint32_t *srcInt = (const uint32_t*)src;

	uint32_t modeSegOffset = *srcInt;
	const uint8_t *dataSegPos = (uint8_t*)src + 4;
	const uint8_t *modeSegPos = (uint8_t*)src + modeSegOffset;
	const uint32_t *wordPos = (const uint32_t*)dataSegPos;

	uint32_t decoded = 0;
	uint32_t curByteOffset = 0;
	uint32_t lastStatus = 0;

	while (decoded < decodeNum) {
		// get a valid unary descriptor
		int unpackIdx = (lastStatus << 8) + (*modeSegPos);
		const KS8CUUnpackInfo &unpackInfo = KS8CUUnpackInfoArr[unpackIdx];

		int validControlBitNum = unpackInfo.m_intNum >> 2;
		const uint32_t *oriWordPos = wordPos;

		for (int i=0; i<validControlBitNum; i++) {
			uint32_t byteCount = unpackInfo.m_byteCountArr[i];
			uint32_t curBitOffset = curByteOffset << 3;
			uint32_t byteLeftInUInt = 4 - curByteOffset;
			uint32_t bitLeftInUInt = byteLeftInUInt << 3;
			for	(uint32_t k=0; k<4; k++) {
				*(des+k) = (*(wordPos+k) >> curBitOffset) & byte_mask_map[byteCount];
			}

			wordPos += ((curByteOffset + byteCount) >> 2) << 2;
			curByteOffset = (curByteOffset + byteCount) & 0x3;

			if (byteLeftInUInt < byteCount) {	//start to read a new group
				uint32_t restByteCount = byteCount - byteLeftInUInt;

				for (uint32_t k=0; k<4; k++) {
					*(des+k) |= (*(wordPos+k) & byte_mask_map[restByteCount]) << bitLeftInUInt;
				}
			}
			des += 4;
		}

		modeSegPos ++;
		decoded += unpackInfo.m_intNum;
		wordPos = oriWordPos + unpackInfo.m_codewordSkipped;
		lastStatus = unpackInfo.m_statusGen;
	}

	if (lastStatus != 0 && lastStatus != 4)
		wordPos += 4;

	return (char*)modeSegPos - src;
}

/*
template<typename T>
int KVarByte_CU::decodeBlock(T* des, const char* src, uint32_t decodeNum) {

	const static uint32_t byte_mask_map[5] = {0, 0xff, 0xffff, 0xffffff, 0xffffffff};

	const uint32_t *srcInt = (const uint32_t*)src;

	uint32_t modeSegOffset = *srcInt;
	const uint8_t *dataSegPos = (uint8_t*)src + 4;
	const uint8_t *modeSegPos = (uint8_t*)src + modeSegOffset;
	const uint32_t *wordPos = (const uint32_t*)dataSegPos;

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

		uint32_t curBitOffset = curByteOffset << 3;
		uint32_t byteLeftInUInt = 4 - curByteOffset;
		uint32_t bitLeftInUInt = byteLeftInUInt << 3;
		for	(uint32_t k=0; k<4; k++) {
			*(des+k) = (*(wordPos+k) >> curBitOffset) & byte_mask_map[byteCount];
		}

		wordPos += ((curByteOffset + byteCount) >> 2) << 2;
		curByteOffset = (curByteOffset + byteCount) & 0x3;

		if (byteLeftInUInt < byteCount) {	//start to read a new group
			uint32_t restByteCount = byteCount - byteLeftInUInt;

			for (uint32_t k=0; k<4; k++) {
				*(des+k) |= (*(wordPos+k) & byte_mask_map[restByteCount]) << bitLeftInUInt;
			}
		}

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


#endif /* KVARBYTE_CU_HPP_ */
