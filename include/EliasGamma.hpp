/*
 * EliasGamma.hpp
 *
 *  Created on: 2013-2-25
 *      Author: zxd
 */

#ifndef ELIASGAMMA_HPP_
#define ELIASGAMMA_HPP_

#include <stdint.h>
#include <cmath>
#include <assert.h>
#include <iostream>
#include "Compressor.hpp"
#include "BitReader.hpp"
#include "BitWriter.hpp"

namespace paradise {
namespace index {

class EliasGamma: public Compressor {
public:
	EliasGamma() {
	}
	virtual ~EliasGamma() {
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
		return "gamma";
	}
	virtual Compressor* clone();
private:
	template<typename T>
	int encode(char* des, const T* src, uint32_t length);

	template<typename T>
	int decode(T* des, const char* src, uint32_t length);
};

template<typename T>
int EliasGamma::encode(char* des, const T* src, uint32_t encodeNum) {

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
			bw.putBit(1);
			ebl ++;
			tmp >>= 1;
		}
		//mark the end of 1s
		bw.putBit(0);

		for (int a=0; a<=ebl-2; a++) { //Write the bits as plain binary(from low bit)
			if (num & (1 << a)) {
				bw.putBit(1);
			}
			else {
				bw.putBit(0);
			}
		}
	}
	size = bw.getByteLenWritten();
	return size;
}

template<typename T>
int EliasGamma::decode(T* des, const char* src, uint32_t decodeNum) {
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
			for (int a=0; a<=numBits-2; a++) {	//Read numBits bits
				bool bit = br.getBit();
				if (bit)
					current |= bit << a;
			}
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


#endif /* ELIASGAMMA_HPP_ */
