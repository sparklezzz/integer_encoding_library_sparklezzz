/*
 * EliasGamma_opt.hpp
 *
 *  Created on: 2013-2-25
 *      Author: zxd
 */

#ifndef ELIASGAMMA_OPT_HPP_
#define ELIASGAMMA_OPT_HPP_

#include <stdint.h>
#include <cmath>
#include <assert.h>
#include <iostream>
#include "Compressor.hpp"
#include "BitReader.hpp"
#include "BitWriter.hpp"

namespace paradise {
namespace index {

class EliasGamma_opt: public Compressor {
public:
	EliasGamma_opt() {
	}
	virtual ~EliasGamma_opt() {
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
		return "gamma_opt";
	}
	virtual Compressor* clone();
private:
	template<typename T>
	int encode(char* des, const T* src, uint32_t length);

	template<typename T>
	int decode(T* des, const char* src, uint32_t length);

};

template<typename T>
int EliasGamma_opt::encode(char* des, const T* src, uint32_t encodeNum) {

	BitWriter bw((uint32_t*)des);

	// we have to encode integer 0
	// 0->0, 1->10, 2->110 0, 3->110 1, 4->1110 00
	int size = 0;
	for (int i = 0; i < encodeNum; i++) {
		uint32_t num = src[i];

		// get effective bit length = 0->0, 1->1, 2/3->2, 4/5/6/7->3
		uint32_t tmp = num;
		int ebl = 0;
		while (tmp > 0) {
			ebl ++;
			tmp >>= 1;
		}
		bw.putUnary(true, ebl);
		//mark the end of 1s
		bw.putBit(0);

		if (ebl > 1) {
			bw.putBinary(num, ebl - 1);	//use ebl - 1 to ignore leading 1
		}

	}
	size = bw.getByteLenWritten();
	return size;
}

template<typename T>
int EliasGamma_opt::decode(T* des, const char* src, uint32_t decodeNum) {
	BitReader br((uint32_t*)src);
	int decoded = 0;
	int size = 0;

	// 0->0, 1->10, 2->110 0, 3->110 1, 4->1110 00
	while (decoded < decodeNum && br.hasLeft()) {
		int numBits = 0;
		while (br.getBit() && br.hasLeft()) {
			numBits++;	//keep on reading until we fetch a one...
		}

		switch (numBits) {
		case 0: des[decoded] = 0; break;
		case 1: des[decoded] = 1; break;
		default: {
			uint32_t current = 0;

			current = br.getBinary(numBits - 1);

			current |= 1 << (numBits-1); //leading 1 isn't encoded
			des[decoded] = current;
			break;
		}
		}

		decoded ++;
	}

	size = br.getByteLenRead();
	return size;
}


}
}


#endif /* ELIASGAMMA_OPT_HPP_ */
