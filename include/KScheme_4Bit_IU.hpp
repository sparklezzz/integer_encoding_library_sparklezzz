/*
 * KScheme_4Bit_IU.hpp
 *
 *  KScheme_4Bit_Incomplete Unary
 *
 *  Created on: 2013-3-2
 *      Author: zxd
 */

#ifndef KSCHEME_4BIT_IU_HPP_
#define KSCHEME_4BIT_IU_HPP_

#include <stdint.h>
#include <cmath>
#include <assert.h>
#include <string.h>
#include "Compressor.hpp"
#include "VarByte.hpp"
#include <iostream>
#include "kscheme_4bit_iu_unpack.hpp"

using namespace std;

namespace paradise {
namespace index {

class KScheme_4Bit_IU: public Compressor {
public:
	KScheme_4Bit_IU() {
	}
	virtual ~KScheme_4Bit_IU() {
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
		return "KScheme_4Bit_IU";
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
int KScheme_4Bit_IU::encode(char* des, const T* src, uint32_t encodeNum) {
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
int KScheme_4Bit_IU::decode(T* des, const char* src, uint32_t decodeNum) {
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
int KScheme_4Bit_IU::encodeBlock(char* des, const T* src, uint32_t encodeNum) {
	const static uint8_t unary_code[9] = {-1, 0, 0x1, 0x3, 0x7, 0xf, 0x1f, 0x3f, 0x7f};	// INVALID, 0, 01, 011, 0111, 01111, 011111, 0111111, 01111111

	uint32_t quadEncodeNum = encodeNum / 4;
	// preserved bytes for modeseg: 2 * quadEncodeNum
	uint8_t *tmpModeSegBeg = new uint8_t[2 * quadEncodeNum];	//max control bit for one int: 8
	uint8_t *tmpModeSegIdx = tmpModeSegBeg;
	memset(tmpModeSegBeg, 0, 2 * quadEncodeNum);

	char *desBeg = des;
	uint32_t *desInt = (uint32_t*)des;
	char *dataSegBeg = des + 4;	//leave first 4 byte to record the begin position of data segment
	uint32_t *dataSegPosInt = (uint32_t*)dataSegBeg;

	if (encodeNum > 0)
		memset(dataSegPosInt, 0, 4 * sizeof(uint32_t));

	int k = 0;
	uint32_t curBitOffset = 0;	//range from 0 to 7
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
		char fourBitCount = 0;
		while (quadMaxInt > 0) {
			quadMaxInt >>= 4;
			fourBitCount ++;
		}

		// step3: record the unary descriptor
		if (controlBitOffset + fourBitCount > 8) {	//start new mode and new data seg
			// pad the descriptor
			uint8_t pad = (0xff >> controlBitOffset) << controlBitOffset;
			*tmpModeSegIdx |= pad;
			tmpModeSegIdx ++;
			dataSegPosInt += 4;
			curBitOffset = 0;
			controlBitOffset = 0;
			memset(dataSegPosInt, 0, 4 * sizeof(uint32_t));
		}
		*tmpModeSegIdx |= unary_code[fourBitCount] << controlBitOffset;
		controlBitOffset += fourBitCount;

		uint32_t bitCount = fourBitCount * 4;

		// step4: encode group of 4 ints
		uint32_t bitLeftInUInt = 32 - curBitOffset;
		if (bitLeftInUInt >= bitCount) {	//new data should cross uint boundary
			// write data with effective bit length of the max val
			for (uint32_t k=0; k<4; k++) {
				*(dataSegPosInt + k) |= (src[k] & mask_map[bitCount]) << curBitOffset;
			}
			curBitOffset += bitCount;
		}
		else {
			// write data with effective bit length of the max val
			for (uint32_t k=0; k<4; k++) {
				*(dataSegPosInt + k) |= (src[k] & mask_map[bitLeftInUInt]) << curBitOffset;
			}
			//start a new group and left val
			dataSegPosInt += 4;
			uint32_t bitUnwritten = bitCount - bitLeftInUInt;
			for (uint32_t k=0; k<4; k++) {
				*(dataSegPosInt + k) = (src[k] >> bitLeftInUInt) & mask_map[bitUnwritten] ;
			}
			curBitOffset = bitUnwritten;
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

// optimization
template<typename T>
int KScheme_4Bit_IU::decodeBlock(T* des, const char* src, uint32_t decodeNum) {
	const uint32_t *srcInt = (const uint32_t*)src;

	uint32_t modeSegOffset = *srcInt;
	const uint8_t *dataSegPos = (uint8_t*)src + 4;
	const uint8_t *modeSegPos = (uint8_t*)src + modeSegOffset;
	const uint32_t *wordPos = (const uint32_t*)dataSegPos;

	uint32_t decoded = 0;
	while (decoded < decodeNum) {
		// get a valid unary descriptor

		const KS4IUUnpackInfo &unpackInfo = KS4IUUnpackInfoArr[*modeSegPos];

		int validControlBitNum = unpackInfo.intNum >> 2;

		for (int i=0; i<validControlBitNum; i++) {
			for	(uint32_t k=0; k<4; k++) {
				*(des+k) = (*(wordPos+k) >> unpackInfo.offsetArr[i]) & unpackInfo.maskArr[i];
			}
			des += 4;
		}

		wordPos += 4;
		decoded += unpackInfo.intNum;
		modeSegPos ++;
	}

	return (char*)modeSegPos - src;
}

/*
template<typename T>
int KScheme_4Bit_IU::decodeBlock(T* des, const char* src, uint32_t decodeNum) {

	const uint32_t *srcInt = (const uint32_t*)src;

	uint32_t modeSegOffset = *srcInt;
	const uint8_t *dataSegPos = (uint8_t*)src + 4;
	const uint8_t *modeSegPos = (uint8_t*)src + modeSegOffset;
	const uint32_t *wordPos = (const uint32_t*)dataSegPos;

	uint32_t decoded = 0;
	uint32_t curBitOffset = 0;
	uint32_t controlBitOffset = 0;
	while (decoded < decodeNum) {
		// get a valid unary descriptor
		uint32_t fourBitCount = 0;
		while (((*modeSegPos) >> controlBitOffset) & 0x1) {
			controlBitOffset ++;
			fourBitCount ++;
		}
		fourBitCount ++;
		controlBitOffset ++;
		if (controlBitOffset <= 8) {
			modeSegPos += controlBitOffset >> 3;
			controlBitOffset = controlBitOffset & 7;

			uint32_t bitCount = fourBitCount * 4;
			uint32_t bitLeftInUInt = 32 - curBitOffset;
			for	(uint32_t k=0; k<4; k++) {
				*(des+k) = (*(wordPos+k) >> curBitOffset) & mask_map[bitCount];
			}

			wordPos += ((curBitOffset + bitCount) >> 5) << 2;
			curBitOffset = (curBitOffset + bitCount) & 0x1f;

			if (bitLeftInUInt < bitCount) {	//start to read a new group
				uint32_t restBitCount = bitCount - bitLeftInUInt;

				for (uint32_t k=0; k<4; k++) {
					*(des+k) |= (*(wordPos+k) & mask_map[restBitCount]) << bitLeftInUInt;
				}
			}

			decoded += 4;
			des += 4;
		}
		else {	// encounter the pad of descriptor byte, skip it
			modeSegPos ++;
			controlBitOffset = 0;
			curBitOffset = 0;
			wordPos += 4;
		}
	}

	if (controlBitOffset > 0)
		modeSegPos ++;

	if (curBitOffset > 0)
		wordPos += 4;

	return (char*)modeSegPos - src;
}
*/

}
}


#endif /* KSCHEME_4BIT_IU_HPP_ */
