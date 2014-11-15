/*
 * Simple16.hpp
 *
 *  Created on: 2010-11-11
 *      Author: shandd
 */

#ifndef SIMPLE16_HPP_
#define SIMPLE16_HPP_
#include "Compressor.hpp"
#include <stdint.h>
namespace paradise {
namespace index {
class Simple16: public Compressor {
public:
	Simple16() {
	}
	virtual ~Simple16() {
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
	static int s16_encode(uint32_t* des, const T* src, int left);

	template<typename T>
	static int s16_decode(T* des, uint32_t src);
	virtual std::string getCompressorName() {
		return "simple16";
	}
	virtual Compressor* clone();
private:
	static uint8_t bitSizeArr[16][28];
	static uint8_t codeNum[16];
};

template<typename T>
int Simple16::encode(char* des, const T* src, uint32_t encodeNum) {
	uint32_t* desInt = (uint32_t *) des;
	int left = encodeNum;
	int ret;
	while (left > 0) {
		ret = s16_encode(desInt, src, left);
		src += ret;
		left -= ret;
		desInt++;
	}
	return (char*) desInt - des;
}

template<typename T>
int Simple16::decode(T* des, const char* src, int decodeNum) {
	int num;
	uint32_t* input = (uint32_t*) src;
	int left = decodeNum;
	while (left > 0) {
		num = s16_decode(des, *input);
		input++;
		left -= num;
		des += num;
	}
	return (char*) input - src;
}
template<typename T>
int Simple16::s16_encode(uint32_t* des, const T* src, int left) {
	uint32_t pos, num2code, shift;
	bool succ = false;
	for (int bitNum = 0; bitNum < 16; bitNum++) {
		(*des) = bitNum << 28;
		if (left < codeNum[bitNum]) {
			continue;
		}
		num2code = codeNum[bitNum];
		for (pos = 0, shift = 0; (pos < num2code) && (*(src + pos) < (1
				<< bitSizeArr[bitNum][pos]));) {
			(*des) += ((*(src + pos)) << shift);
			shift += bitSizeArr[bitNum][pos];
			pos++;
		}
		if (pos == num2code) {
			succ = true;
			(src) += num2code;
			break;
		}
	}
	if (!succ) {
		//large number that can respresnet by 28bit
	}
	return num2code;
}
template<typename T>
int Simple16::s16_decode(T* des, uint32_t src) {
	int num = (src) >> 28;
	switch (num) {
	case 0:
		*des = (src) & 1;
		des++;
		*des = (src >> 1) & 1;
		des++;
		*des = (src >> 2) & 1;
		des++;
		*des = (src >> 3) & 1;
		des++;
		*des = (src >> 4) & 1;
		des++;
		*des = (src >> 5) & 1;
		des++;
		*des = (src >> 6) & 1;
		des++;
		*des = (src >> 7) & 1;
		des++;
		*des = (src >> 8) & 1;
		des++;
		*des = (src >> 9) & 1;
		des++;
		*des = (src >> 10) & 1;
		des++;
		*des = (src >> 11) & 1;
		des++;
		*des = (src >> 12) & 1;
		des++;
		*des = (src >> 13) & 1;
		des++;
		*des = (src >> 14) & 1;
		des++;
		*des = (src >> 15) & 1;
		des++;
		*des = (src >> 16) & 1;
		des++;
		*des = (src >> 17) & 1;
		des++;
		*des = (src >> 18) & 1;
		des++;
		*des = (src >> 19) & 1;
		des++;
		*des = (src >> 20) & 1;
		des++;
		*des = (src >> 21) & 1;
		des++;
		*des = (src >> 22) & 1;
		des++;
		*des = (src >> 23) & 1;
		des++;
		*des = (src >> 24) & 1;
		des++;
		*des = (src >> 25) & 1;
		des++;
		*des = (src >> 26) & 1;
		des++;
		*des = (src >> 27) & 1;
		des++;
		break;
	case 1:
		*des = (src) & 3;
		des++;
		*des = (src >> 2) & 3;
		des++;
		*des = (src >> 4) & 3;
		des++;
		*des = (src >> 6) & 3;
		des++;
		*des = (src >> 8) & 3;
		des++;
		*des = (src >> 10) & 3;
		des++;
		*des = (src >> 12) & 3;
		des++;
		*des = (src >> 14) & 1;
		des++;
		*des = (src >> 15) & 1;
		des++;
		*des = (src >> 16) & 1;
		des++;
		*des = (src >> 17) & 1;
		des++;
		*des = (src >> 18) & 1;
		des++;
		*des = (src >> 19) & 1;
		des++;
		*des = (src >> 20) & 1;
		des++;
		*des = (src >> 21) & 1;
		des++;
		*des = (src >> 22) & 1;
		des++;
		*des = (src >> 23) & 1;
		des++;
		*des = (src >> 24) & 1;
		des++;
		*des = (src >> 25) & 1;
		des++;
		*des = (src >> 26) & 1;
		des++;
		*des = (src >> 27) & 1;
		des++;
		break;
	case 2:
		*des = (src) & 1;
		des++;
		*des = (src >> 1) & 1;
		des++;
		*des = (src >> 2) & 1;
		des++;
		*des = (src >> 3) & 1;
		des++;
		*des = (src >> 4) & 1;
		des++;
		*des = (src >> 5) & 1;
		des++;
		*des = (src >> 6) & 1;
		des++;
		*des = (src >> 7) & 3;
		des++;
		*des = (src >> 9) & 3;
		des++;
		*des = (src >> 11) & 3;
		des++;
		*des = (src >> 13) & 3;
		des++;
		*des = (src >> 15) & 3;
		des++;
		*des = (src >> 17) & 3;
		des++;
		*des = (src >> 19) & 3;
		des++;
		*des = (src >> 21) & 1;
		des++;
		*des = (src >> 22) & 1;
		des++;
		*des = (src >> 23) & 1;
		des++;
		*des = (src >> 24) & 1;
		des++;
		*des = (src >> 25) & 1;
		des++;
		*des = (src >> 26) & 1;
		des++;
		*des = (src >> 27) & 1;
		des++;
		break;
	case 3:
		*des = (src) & 1;
		des++;
		*des = (src >> 1) & 1;
		des++;
		*des = (src >> 2) & 1;
		des++;
		*des = (src >> 3) & 1;
		des++;
		*des = (src >> 4) & 1;
		des++;
		*des = (src >> 5) & 1;
		des++;
		*des = (src >> 6) & 1;
		des++;
		*des = (src >> 7) & 1;
		des++;
		*des = (src >> 8) & 1;
		des++;
		*des = (src >> 9) & 1;
		des++;
		*des = (src >> 10) & 1;
		des++;
		*des = (src >> 11) & 1;
		des++;
		*des = (src >> 12) & 1;
		des++;
		*des = (src >> 13) & 1;
		des++;
		*des = (src >> 14) & 3;
		des++;
		*des = (src >> 16) & 3;
		des++;
		*des = (src >> 18) & 3;
		des++;
		*des = (src >> 20) & 3;
		des++;
		*des = (src >> 22) & 3;
		des++;
		*des = (src >> 24) & 3;
		des++;
		*des = (src >> 26) & 3;
		des++;
		break;
	case 4:
		*des = (src) & 3;
		des++;
		*des = (src >> 2) & 3;
		des++;
		*des = (src >> 4) & 3;
		des++;
		*des = (src >> 6) & 3;
		des++;
		*des = (src >> 8) & 3;
		des++;
		*des = (src >> 10) & 3;
		des++;
		*des = (src >> 12) & 3;
		des++;
		*des = (src >> 14) & 3;
		des++;
		*des = (src >> 16) & 3;
		des++;
		*des = (src >> 18) & 3;
		des++;
		*des = (src >> 20) & 3;
		des++;
		*des = (src >> 22) & 3;
		des++;
		*des = (src >> 24) & 3;
		des++;
		*des = (src >> 26) & 3;
		des++;
		break;
	case 5:
		*des = (src) & 15;
		des++;
		*des = (src >> 4) & 7;
		des++;
		*des = (src >> 7) & 7;
		des++;
		*des = (src >> 10) & 7;
		des++;
		*des = (src >> 13) & 7;
		des++;
		*des = (src >> 16) & 7;
		des++;
		*des = (src >> 19) & 7;
		des++;
		*des = (src >> 22) & 7;
		des++;
		*des = (src >> 25) & 7;
		des++;
		break;
	case 6:
		*des = (src) & 7;
		des++;
		*des = (src >> 3) & 15;
		des++;
		*des = (src >> 7) & 15;
		des++;
		*des = (src >> 11) & 15;
		des++;
		*des = (src >> 15) & 15;
		des++;
		*des = (src >> 19) & 7;
		des++;
		*des = (src >> 22) & 7;
		des++;
		*des = (src >> 25) & 7;
		des++;
		break;
	case 7:
		*des = (src) & 15;
		des++;
		*des = (src >> 4) & 15;
		des++;
		*des = (src >> 8) & 15;
		des++;
		*des = (src >> 12) & 15;
		des++;
		*des = (src >> 16) & 15;
		des++;
		*des = (src >> 20) & 15;
		des++;
		*des = (src >> 24) & 15;
		des++;
		break;
	case 8:
		*des = (src) & 31;
		des++;
		*des = (src >> 5) & 31;
		des++;
		*des = (src >> 10) & 31;
		des++;
		*des = (src >> 15) & 31;
		des++;
		*des = (src >> 20) & 15;
		des++;
		*des = (src >> 24) & 15;
		des++;
		break;
	case 9:
		*des = (src) & 15;
		des++;
		*des = (src >> 4) & 15;
		des++;
		*des = (src >> 8) & 31;
		des++;
		*des = (src >> 13) & 31;
		des++;
		*des = (src >> 18) & 31;
		des++;
		*des = (src >> 23) & 31;
		des++;
		break;
	case 10:
		*des = (src) & 63;
		des++;
		*des = (src >> 6) & 63;
		des++;
		*des = (src >> 12) & 63;
		des++;
		*des = (src >> 18) & 31;
		des++;
		*des = (src >> 23) & 31;
		des++;
		break;
	case 11:
		*des = (src) & 31;
		des++;
		*des = (src >> 5) & 31;
		des++;
		*des = (src >> 10) & 63;
		des++;
		*des = (src >> 16) & 63;
		des++;
		*des = (src >> 22) & 63;
		des++;
		break;
	case 12:
		*des = (src) & 127;
		des++;
		*des = (src >> 7) & 127;
		des++;
		*des = (src >> 14) & 127;
		des++;
		*des = (src >> 21) & 127;
		des++;
		break;
	case 13:
		*des = (src) & 1023;
		des++;
		*des = (src >> 10) & 511;
		des++;
		*des = (src >> 19) & 511;
		des++;
		break;
	case 14:
		*des = (src) & 16383;
		des++;
		*des = (src >> 14) & 16383;
		des++;
		break;
	case 15:
		*des = (src) & ((1 << 28) - 1);
		des++;
		break;
	}
	return codeNum[num];
}

}
}

#endif /* SIMPLE16_HPP_ */
