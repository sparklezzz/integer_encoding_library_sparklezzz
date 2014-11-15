/*
 * Simple14_x64.hpp
 *
 *  Created on: 2012-8-30
 *      Author: zxd
 */

#ifndef SIMPLE14_X64_HPP_
#define SIMPLE14_X64_HPP_

#include "Compressor.hpp"
#include <stdint.h>
namespace paradise {
namespace index {
class Simple14_x64: public Compressor {
public:
	Simple14_x64() {
	}
	virtual ~Simple14_x64() {
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

	template<typename T>
	static int encode(char* des, const T* src, uint32_t length);

	template<typename T>
	static int decode(T* des, const char* src, int length);

	template<typename T>
	static int s14_encode(uint64_t* des, const T* src, int left);

	template<typename T>
	static int s14_decode(T* des, uint64_t src);
	virtual std::string getCompressorName() {
		return "simple14_x64";
	}
	virtual Compressor* clone();
private:
	static uint8_t bitSizeArr[16][60];
	static uint8_t codeNum[16];
};

template<typename T>
int Simple14_x64::encode(char* des, const T* src, uint32_t encodeNum) {
	uint64_t* desInt = (uint64_t *) des;
	int left = encodeNum;
	int ret;
	while (left > 0) {
		ret = s14_encode(desInt, src, left);
		src += ret;
		left -= ret;
		desInt++;
	}
	return (char*) desInt - des;
}

template<typename T>
int Simple14_x64::decode(T* des, const char* src, int decodeNum) {
	int num;
	uint64_t* input = (uint64_t*) src;
	int left = decodeNum;
	while (left > 0) {
		num = s14_decode(des, *input);
		input++;
		left -= num;
		des += num;
	}
	return (char*) input - src;
}
template<typename T>
int Simple14_x64::s14_encode(uint64_t* des, const T* src, int left) {
	uint32_t pos, num2code, shift;
	uint64_t maskVal = 1, tmpVal;
	for (uint64_t bitNum = 0; bitNum < 16; bitNum++) {
		(*des) = bitNum << 60;
		if (left < codeNum[bitNum]) {
			continue;
		}
		num2code = codeNum[bitNum];
		for (pos = 0, shift = 0; (pos < num2code) && ((tmpVal = *(src + pos))
				< (maskVal << bitSizeArr[bitNum][pos]));) {
			(*des) += (tmpVal << shift);
			shift += bitSizeArr[bitNum][pos];
			pos++;

		}
		if (pos == num2code) {
			(src) += num2code;
			break;
		}
	}
	return num2code;
}
template<typename T>
int Simple14_x64::s14_decode(T* des, uint64_t src) {
	uint8_t num = (src) >> 60;
	switch (num) {
	case 0: {
		for (int i = 0; i < 60; ++i) {
			*des = (src >> i) & 1;
			++des;
		}
		break;
	}
	case 1: {
		for (int i = 0; i < 60; i = i + 2) {
			*des = (src >> i) & 3;
			++des;
		}
		break;
	}
	case 2: {
		for (int i = 0; i < 60; i = i + 3) {
			*des = (src >> i) & 7;
			++des;
		}
		break;
	}
	case 3: {
		for (int i = 0; i < 60; i = i + 4) {
			*des = (src >> i) & 15;
			++des;
		}
		break;
	}
	case 4:
		for (int i = 0; i < 60; i = i + 5) {
			*des = (src >> i) & 31;
			++des;
		}
		break;
	case 5:
		for (int i = 0; i < 60; i = i + 6) {
			*des = (src >> i) & 63;
			++des;
		}
		break;
	case 6:
		*des = (src) & 127;
		++des;
		*des = (src >> 7) & 127;
		++des;
		*des = (src >> 14) & 127;
		++des;
		*des = (src >> 21) & 127;
		++des;
		*des = (src >> 28) & 127;
		++des;
		*des = (src >> 35) & 127;
		++des;
		*des = (src >> 42) & 127;
		++des;
		*des = (src >> 49) & 127;
		++des;
		break;
	case 7:
		*des = (src) & 255;
		des++;
		*des = (src >> 8) & 255;
		des++;
		*des = (src >> 16) & 255;
		des++;
		*des = (src >> 24) & 255;
		des++;
		*des = (src >> 32) & 255;
		des++;
		*des = (src >> 40) & 255;
		des++;
		*des = (src >> 48) & 255;
		des++;
		break;
	case 8:
		*des = (src) & 1023;
		des++;
		*des = (src >> 10) & 1023;
		des++;
		*des = (src >> 20) & 1023;
		des++;
		*des = (src >> 30) & 1023;
		des++;
		*des = (src >> 40) & 1023;
		des++;
		*des = (src >> 50) & 1023;
		des++;
		break;
	case 9:
		*des = (src) & 4095;
		des++;
		*des = (src >> 12) & 4095;
		des++;
		*des = (src >> 24) & 4095;
		des++;
		*des = (src >> 36) & 4095;
		des++;
		*des = (src >> 48) & 4095;
		des++;
		break;
	case 10:
		*des = (src) & 32767;
		++des;
		*des = (src >> 15) & 32767;
		++des;
		*des = (src >> 30) & 32767;
		++des;
		*des = (src >> 45) & 32767;
		++des;
		break;
	case 11:
		*des = (src) & ((1 << 20) - 1);
		++des;
		*des = (src >> 20) & ((1 << 20) - 1);
		++des;
		*des = (src >> 40) & ((1 << 20) - 1);
		++des;
		break;
	case 12:
		*des = (src) & ((1 << 30) - 1);
		++des;
		*des = (src >> 30) & ((1 << 30) - 1);
		++des;
		break;
	case 13:
		*des = (src) & ((1LL << 60) - 1);
		++des;
		break;
	}
	return codeNum[num];
}

}
}


#endif /* SIMPLE14_X64_HPP_ */
