/*
 * KScheme_1Bit_Binary.hpp
 *
 *  Created on: 2013-3-2
 *      Author: zxd
 */

#ifndef KSCHEME_1BIT_BINARY_HPP_
#define KSCHEME_1BIT_BINARY_HPP_

#include <stdint.h>
#include <cmath>
#include <assert.h>
#include <string.h>
#include "Compressor.hpp"
#include "VarByte.hpp"
#include <iostream>

using namespace std;

namespace paradise {
namespace index {

class KScheme_1Bit_Binary: public Compressor {
public:
	KScheme_1Bit_Binary() {
	}
	virtual ~KScheme_1Bit_Binary() {
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
		return "KScheme_1Bit_Binary";
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
int KScheme_1Bit_Binary::encode(char* des, const T* src, uint32_t encodeNum) {
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
int KScheme_1Bit_Binary::decode(T* des, const char* src, uint32_t decodeNum) {
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
int KScheme_1Bit_Binary::encodeBlock(char* des, const T* src, uint32_t encodeNum) {

	uint32_t quadEncodeNum = encodeNum / 4;
	char *desBeg = des;
	uint32_t *desInt = (uint32_t*)des;
	uint16_t *modeSegPos = (uint16_t*)(des + 4);	//leave first 4 byte to record the begin position of data segment
	int modeSegSize = (quadEncodeNum + 2) / 3 * sizeof(uint16_t);
	char *dataSegPos = (char*)modeSegPos + modeSegSize;
	uint32_t *dataSegPosInt = (uint32_t*)dataSegPos;

	memset(modeSegPos, 0, modeSegSize);
	*desInt = 4 + modeSegSize;	// record the begin position of data segment

	if (encodeNum > 0)
		memset(dataSegPosInt, 0, 4 * sizeof(uint32_t));

	int k = 0;
	uint32_t quadIdx = 0;
	uint32_t curBitOffset = 0;
	for (uint32_t i=0; i<encodeNum; i+=4) {
		// step1: get quad max int
		T quadMaxInt = src[0];
		for (uint32_t j=1; j<4; j++) {
			quadMaxInt |= src[j];
		}

		// step2: get number of 2 bits needed for quad max int
		if (quadMaxInt == 0)
			quadMaxInt ++;
		char bitCount = 0;
		while (quadMaxInt > 0) {
			quadMaxInt >>= 1;
			bitCount ++;
		}
		*modeSegPos |= (bitCount-1) << ((quadIdx % 3) * 5);
		quadIdx ++;
		if (!(quadIdx % 3)) {
			modeSegPos ++;
		}

		// step3: encode group of 4 ints
		uint32_t bitLeftInUInt = 32 - curBitOffset;
		if (bitLeftInUInt < bitCount) {	//new data should cross uint boundary
			// write data with effective bit length of the max val
			for (uint32_t k=0; k<4; k++) {
				*(dataSegPosInt + k) |= (src[k] & mask_map[bitLeftInUInt]) << curBitOffset;
				//*(dataSegPosInt + k) |= src[k] << curBitOffset;
			}
			//start a new group and left val
			dataSegPosInt += 4;
			uint32_t bitUnwritten = bitCount - bitLeftInUInt;
			for (uint32_t k=0; k<4; k++) {
				*(dataSegPosInt + k) = (src[k] >> bitLeftInUInt) & mask_map[bitUnwritten] ;
				//*(dataSegPosInt + k) = (src[k] & mask_map[bitCount]) >> bitLeftInUInt;
			}
			curBitOffset = bitUnwritten;
		}
		else {
			// write data with effective bit length of the max val
			for (uint32_t k=0; k<4; k++) {
				*(dataSegPosInt + k) |= (src[k] & mask_map[bitCount]) << curBitOffset;
			}
			curBitOffset += bitCount;
		}

		src += 4;
	}
	dataSegPosInt += 4;

	return (char*)dataSegPosInt - desBeg;
}

template<typename T>
int KScheme_1Bit_Binary::decodeBlock(T* des, const char* src, uint32_t decodeNum) {

	const uint32_t *srcInt = (const uint32_t*)src;

	uint32_t dataSegOffset = *srcInt;
	const uint16_t *modeSegPos = (const uint16_t*)(src + 4);
	const uint8_t *dataSegPos = (const uint8_t*)src + dataSegOffset;
	const uint32_t *wordPos = (const uint32_t*)dataSegPos;

	uint32_t decoded = 0;
	uint32_t curBitOffset = 0;

	while (decoded < decodeNum) {
		for (int i=0; i<3 && decoded < decodeNum; i++) {
			uint32_t bitCount = 1 + (((*modeSegPos) >> (i * 5)) & 0x1f);
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

		modeSegPos ++;
	}

	if (curBitOffset > 0)
		wordPos += 4;

	if ((const uint8_t*)modeSegPos > dataSegPos) {
		cerr << "mode decode error!" << endl;
	}

	return (char*)wordPos - src;
}

}
}


#endif /* KSCHEME_1BIT_BINARY_HPP_ */
