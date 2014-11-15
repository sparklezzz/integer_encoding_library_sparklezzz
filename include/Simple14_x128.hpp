/*
 * Simple14_x128.hpp
 *
 *  Created on: 2012-8-30
 *      Author: zxd
 */

#ifndef SIMPLE14_X128_HPP_
#define SIMPLE14_X128_HPP_

#include "Compressor.hpp"
#include <stdint.h>
namespace paradise {
namespace index {
class Simple14_x128: public Compressor {
public:
	Simple14_x128() {
	}
	virtual ~Simple14_x128() {
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
	static int s14_decode(T* des, const uint64_t *src);
	virtual std::string getCompressorName() {
		return "simple14_x128";
	}
	virtual Compressor* clone();
private:
	static uint8_t bitSizeArr[16];
	static uint8_t codeNum[16];
	static uint64_t maskArr[16];

};

template<typename T>
int Simple14_x128::encode(char* des, const T* src, uint32_t encodeNum) {
	uint64_t* desInt = (uint64_t *) des;
	int left = encodeNum;
	int ret;
	while (left > 0) {
		ret = s14_encode(desInt, src, left);
		src += ret;
		left -= ret;
		desInt += 2;
	}
	return (char*) desInt - des;
}

template<typename T>
int Simple14_x128::decode(T* des, const char* src, int decodeNum) {
	int num;
	uint64_t* input = (uint64_t*) src;
	int left = decodeNum;
	while (left > 0) {
		num = s14_decode(des, input);
		input += 2;
		left -= num;
		des += num;
	}
	return (char*) input - src;
}
template<typename T>
int Simple14_x128::s14_encode(uint64_t* des, const T* src, int left) {
	uint32_t pos, num2code;
	uint64_t maskVal = 1, tmpVal;
	for (uint64_t bitNum = 0; bitNum < 14; bitNum++) {
		des[0] = 0;
		des[1] = bitNum << 60;	// put the selector in the highest 4 bit of the 128-bit word
		if (left < codeNum[bitNum]) {
			continue;
		}
		num2code = codeNum[bitNum];
		int bitSize = bitSizeArr[bitNum];
		int pos = 0;
		int curOffset = 0;
		uint32_t mask = maskArr[bitNum];
		for (pos = 0; (pos < num2code) && (*(src + pos) <= mask); pos++) {
			if (curOffset < 64) {
				des[0] |= ((uint64_t)(*(src + pos))) << curOffset;
				if (curOffset + bitSize > 64)
					des[1] |= ((uint64_t)(*(src + pos))) >> (64 - curOffset);
			} else {
				des[1] |= ((uint64_t)(*(src + pos))) << (curOffset - 64);
			}
			curOffset += bitSize;
		}
		if (pos == num2code) {//说明能被压缩
			src += num2code;
			break;
		}

	}
	return num2code;
}
template<typename T>
int Simple14_x128::s14_decode(T* des, const uint64_t *src) {
	uint8_t num = (src[1]) >> 60;
	uint64_t val1 = src[0];
	uint64_t val2 = src[1];

	switch (num) {
	case 0: {
		for (int i = 0; i < 64; ++i) {
			*des = (val1 >> i) & 1;
			++des;
		}
		for (int i = 0; i < 60; ++i) {
			*des = (val2 >> i) & 1;
			++des;
		}
		break;
	}
	case 1: {
		for (int i = 0; i < 64; i = i + 2) {
			*des = (val1 >> i) & 3;
			++des;
		}
		for (int i = 0; i < 60; i = i + 2) {
			*des = (val2 >> i) & 3;
			++des;
		}
		break;
	}
	case 2: {
		for (int i = 0; i < 63; i = i + 3) {
			*des = (val1 >> i) & 7;
			++des;
		}

		*des = (val1 >> 63) & 7;
		*des |= (val2 << 1) & 7;
		++des;

		for (int i = 2; i < 59; i = i + 3) {
			*des = (val2 >> i) & 7;
			++des;
		}
		break;
	}
	case 3: {
		for (int i = 0; i < 64; i += 4) {
			*des = (val1 >> i) & 0xf;
			++des;
		}
		for (int i = 0; i < 60; i += 4) {
			*des = (val2 >> i) & 0xf;
			++des;
		}
		break;
	}
	case 4:
		*des++ = val1 & 0x1f;
		*des++ = (val1 >> 5) & 0x1f;
		*des++ = (val1 >> 10) & 0x1f;
		*des++ = (val1 >> 15) & 0x1f;
		*des++ = (val1 >> 20) & 0x1f;
		*des++ = (val1 >> 25) & 0x1f;
		*des++ = (val1 >> 30) & 0x1f;
		*des++ = (val1 >> 35) & 0x1f;
		*des++ = (val1 >> 40) & 0x1f;
		*des++ = (val1 >> 45) & 0x1f;
		*des++ = (val1 >> 50) & 0x1f;
		*des++ = (val1 >> 55) & 0x1f;

		*des = (val1 >> 60) & 0x1f;
		*des |= (val2 << 4) & 0x1f;
		des++;

		*des++ = (val2 >> 1) & 0x1f;
		*des++ = (val2 >> 6) & 0x1f;
		*des++ = (val2 >> 11) & 0x1f;
		*des++ = (val2 >> 16) & 0x1f;
		*des++ = (val2 >> 21) & 0x1f;
		*des++ = (val2 >> 26) & 0x1f;
		*des++ = (val2 >> 31) & 0x1f;
		*des++ = (val2 >> 36) & 0x1f;
		*des++ = (val2 >> 41) & 0x1f;
		*des++ = (val2 >> 46) & 0x1f;
		*des++ = (val2 >> 51) & 0x1f;
		break;
	case 5:
		*des++ = val1 & 0x3f;
		*des++ = (val1 >> 6) & 0x3f;
		*des++ = (val1 >> 12) & 0x3f;
		*des++ = (val1 >> 18) & 0x3f;
		*des++ = (val1 >> 24) & 0x3f;
		*des++ = (val1 >> 30) & 0x3f;
		*des++ = (val1 >> 36) & 0x3f;
		*des++ = (val1 >> 42) & 0x3f;
		*des++ = (val1 >> 48) & 0x3f;
		*des++ = (val1 >> 54) & 0x3f;

		*des = (val1 >> 60) & 0x3f;
		*des |= (val2 << 4) & 0x3f;
		des++;

		*des++ = (val2 >> 2) & 0x3f;
		*des++ = (val2 >> 8) & 0x3f;
		*des++ = (val2 >> 14) & 0x3f;
		*des++ = (val2 >> 20) & 0x3f;
		*des++ = (val2 >> 26) & 0x3f;
		*des++ = (val2 >> 32) & 0x3f;
		*des++ = (val2 >> 38) & 0x3f;
		*des++ = (val2 >> 44) & 0x3f;
		*des++ = (val2 >> 50) & 0x3f;
		break;
	case 6:
		*des++ = val1 & 0xff;
		*des++ = (val1 >> 8) & 0xff;
		*des++ = (val1 >> 16) & 0xff;
		*des++ = (val1 >> 24) & 0xff;
		*des++ = (val1 >> 32) & 0xff;
		*des++ = (val1 >> 40) & 0xff;
		*des++ = (val1 >> 48) & 0xff;
		*des++ = (val1 >> 56) & 0xff;

		*des++ = val2 & 0xff;
		*des++ = (val2 >> 8) & 0xff;
		*des++ = (val2 >> 16) & 0xff;
		*des++ = (val2 >> 24) & 0xff;
		*des++ = (val2 >> 32) & 0xff;
		*des++ = (val2 >> 40) & 0xff;
		*des++ = (val2 >> 48) & 0xff;
		break;
	case 7:
		*des++ = val1 & 0x3ff;
		*des++ = (val1 >> 10) & 0x3ff;
		*des++ = (val1 >> 20) & 0x3ff;
		*des++ = (val1 >> 30) & 0x3ff;
		*des++ = (val1 >> 40) & 0x3ff;
		*des++ = (val1 >> 50) & 0x3ff;

		*des = (val1 >> 60) & 0x3ff;
		*des |= (val2 << 4) & 0x3ff;
		des++;

		*des++ = (val2 >> 6) & 0x3ff;
		*des++ = (val2 >> 16) & 0x3ff;
		*des++ = (val2 >> 26) & 0x3ff;
		*des++ = (val2 >> 36) & 0x3ff;
		*des++ = (val2 >> 46) & 0x3ff;
		break;
	case 8:
		*des++ = val1 & 0xfff;
		*des++ = (val1 >> 12) & 0xfff;
		*des++ = (val1 >> 24) & 0xfff;
		*des++ = (val1 >> 36) & 0xfff;
		*des++ = (val1 >> 48) & 0xfff;

		*des = (val1 >> 60) & 0xfff;
		*des |= (val2 << 4) & 0xfff;
		des++;

		*des++ = (val2 >> 8) & 0xfff;
		*des++ = (val2 >> 20) & 0xfff;
		*des++ = (val2 >> 32) & 0xfff;
		*des++ = (val2 >> 44) & 0xfff;
		break;
	case 9:
		*des++ = val1 & 0x7fff;
		*des++ = (val1 >> 15) & 0x7fff;
		*des++ = (val1 >> 30) & 0x7fff;
		*des++ = (val1 >> 45) & 0x7fff;

		*des = (val1 >> 60) & 0x7fff;
		*des |= (val2 << 4) & 0x7fff;
		des++;

		*des++ = (val2 >> 11) & 0x7fff;
		*des++ = (val2 >> 26) & 0x7fff;
		*des++ = (val2 >> 41) & 0x7fff;
		break;
	case 10:
		*des++ = val1 & 0xfffff;
		*des++ = (val1 >> 20) & 0xfffff;
		*des++ = (val1 >> 40) & 0xfffff;

		*des = (val1 >> 60) & 0xfffff;
		*des |= (val2 << 4) & 0xfffff;
		des++;

		*des++ = (val2 >> 16) & 0xfffff;
		*des++ = (val2 >> 36) & 0xfffff;
		break;
	case 11:
		*des++ = val1 & 0x7fffffff;
		*des++ = (val1 >> 31) & 0x7fffffff;

		*des = (val1 >> 62) & 0x7fffffff;
		*des |= (val2 << 2) & 0x7fffffff;
		des++;

		*des++ = (val2 >> 29) & 0x7fffffff;
		break;
	case 12:
		*des++ = val1 & 0x3fffffffffffffff;
		*des = (val1 >> 62) & 0x3fffffffffffffff;
		*des |= (val2 << 2) & 0x3fffffffffffffff;
		des++;
		break;
	case 13:
		*des++ = val1;
		break;
	}
	return codeNum[num];
}

}
}


#endif /* SIMPLE14_X128_HPP_ */
