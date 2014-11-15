/*
 * SIMD_KGamma.hpp
 *
 *  Created on: 2013-3-5
 *      Author: zxd
 */

#ifndef SIMD_KGAMMA_HPP_
#define SIMD_KGAMMA_HPP_

#ifdef USE_SSE_INSTRUCTION

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

class SIMD_KGamma: public Compressor {
public:
	SIMD_KGamma() {
	}
	virtual ~SIMD_KGamma() {
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
		return "SIMD_KGamma";
	}
	virtual Compressor* clone();
private:
	template<typename T>
	int encode(char* des, const T* src, uint32_t length);

	template<typename T>
	int decode(T* des, const char* src, uint32_t length);

	template<typename T>
	int encodeBlock(char* des, const T* src, uint32_t size);

	int encodeBlock(char* des, const uint32_t* src, uint32_t size);

	template<typename T>
	int decodeBlock(T* des, const char* src, uint32_t size);

	int decodeBlock(uint32_t* des, const char* src, uint32_t decodeNum);
};

template<typename T>
int SIMD_KGamma::encode(char* des, const T* src, uint32_t encodeNum) {
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
int SIMD_KGamma::decode(T* des, const char* src, uint32_t decodeNum) {
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
int SIMD_KGamma::encodeBlock(char* des, const T* src, uint32_t size) {
	uint32_t curBitOffset = 0;
	uint32_t *desIntBeg = (uint32_t*)des;
	uint32_t *desInt = desIntBeg;
	if (size == 0) {
		return 0;
	}
	memset(desInt, 0, sizeof(uint32_t) * 5);

	for (uint32_t i=0; i<size; i+=4) {
		//T maxVal = 0;
		//for (uint32_t j=i; j<i+4; j++) {
			//T val = src[j];
			//if (maxVal < val) {
			//	maxVal = val;
			//}
		//}
		T maxVal = src[i];
		for (uint32_t j=i+1; j<i+4; j++) {
			maxVal |= src[j];
		}

		// get effective bit length
		T tmp = maxVal;
		uint32_t ebl = 0;
		while (tmp > 0) {
			ebl ++;
			tmp >>= 1;
		}
		if (ebl == 0) {	//encode 0
			ebl = 1;
		}

		uint32_t bitLeftInUInt = 32 - curBitOffset;
		if (bitLeftInUInt < ebl) {	//new data should cross uint boundary
			// write incomplete shared prefix: 1->1, 2->11, 3->111...
			*desInt |= mask_map[bitLeftInUInt] << curBitOffset;
			// write data with effective bit length of the max val
			for (uint32_t k=1, j=i; k<=4; k++, j++) {
				*(desInt + k) |= (src[j] & mask_map[bitLeftInUInt]) << curBitOffset;
			}

			//start a new group and left val
			desInt += 5;
			curBitOffset = 0;
			memset(desInt, 0, sizeof(uint32_t) * 5);
			uint32_t bitUnwritten = ebl - bitLeftInUInt;
			// write shared prefix: 1->0, 2->10, 3->110...
			*desInt |= mask_map[bitUnwritten - 1];
			for (uint32_t k=1, j=i; k<=4; k++, j++) {
				*(desInt + k) |= (src[j] >> bitLeftInUInt) & mask_map[bitUnwritten] ;
			}
			curBitOffset = bitUnwritten;

		}
		else {
			// write shared prefix: 1->0, 2->10, 3->110...
			*desInt |= mask_map[ebl - 1] << curBitOffset;
			// write data with effective bit length of the max val
			for (uint32_t k=1, j=i; k<=4; k++, j++) {
				*(desInt + k) |= (src[j] & mask_map[ebl]) << curBitOffset;
			}
			curBitOffset += ebl;
		}
	}

	desInt += 5;
	return (desInt - desIntBeg) * 4;
}

template<typename T>
int SIMD_KGamma::decodeBlock(T* des, const char* src, uint32_t size) {
	const uint32_t *srcIntBeg = (const uint32_t*)src;
	const uint32_t *srcInt = srcIntBeg;

	if (size == 0) {
		return 0;
	}

	int decoded = 0;
	uint32_t curBitOffset = 0;

	while (decoded < size) {
		uint32_t ebl = 0;
		uint32_t newBitOffset = curBitOffset;
		bool completeInt = false;
		while (newBitOffset < 32) {	//get shared prefix
			ebl++;
			if ((*srcInt >> newBitOffset) & 1) {
				newBitOffset ++;
				continue;
			}
			else {
				completeInt = true;
				break;
			}
		}
		for	(uint32_t k=0, j=1; j<=4; k++, j++) {
			*(des+k) = (*(srcInt+j) >> curBitOffset) & mask_map[ebl];
		}
		curBitOffset += ebl;

		if (!completeInt) {	//start to read a new group
			assert (curBitOffset == 32);
			srcInt += 5;
			curBitOffset = 0;
			uint32_t restebl = 0;
			while (restebl < 32) {
				if (!((*srcInt >> restebl) & 1)) {
					restebl ++;
					break;
				}
				restebl ++;
			}

			for (uint32_t k=0, j=1; j<=4; k++, j++) {
				*(des+k) |= (*(srcInt+j) & mask_map[restebl]) << ebl;
			}
			curBitOffset = restebl;
		}

		des += 4;
		decoded += 4;
	}

	srcInt += 5;
	return (srcInt - srcIntBeg) * 4;
}

}
}

#endif

#endif /* SIMD_KGAMMA_HPP_ */
