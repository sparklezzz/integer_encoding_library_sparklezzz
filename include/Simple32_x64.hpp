/*
 * Simple32_X64.hpp
 *
 *  Created on: 2010-12-1
 *      Author: shandd
 */

#ifndef SIMPLE32_X64_HPP_
#define SIMPLE32_X64_HPP_

#include "Compressor.hpp"
#include <stdint.h>
namespace paradise {
namespace index {
class Simple32_x64: public Compressor {
public:
	Simple32_x64() {
	}
	virtual ~Simple32_x64() {
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
	static int s32_encode(uint64_t* des, const T* src, int left);

	template<typename T>
	static int s32_decode(T* des, uint64_t src);
	virtual std::string getCompressorName() {
		return "Simple32_x64";
	}
	virtual Compressor* clone();
private:
	static uint8_t bitSizeArr[32][59];
	static uint8_t codeNum[32];
};

template<typename T>
int Simple32_x64::encode(char* des, const T* src, uint32_t encodeNum) {
	uint64_t* desInt = (uint64_t *) des;
	int left = encodeNum;
	int ret;
	while (left > 0) {
		ret = s32_encode(desInt, src, left);
		src += ret;
		left -= ret;
		desInt++;
	}
	return (char*) desInt - des;
}

template<typename T>
int Simple32_x64::decode(T* des, const char* src, int decodeNum) {
	int num;
	uint64_t* input = (uint64_t*) src;
	int left = decodeNum;
	while (left > 0) {
		num = s32_decode(des, *input);
		input++;
		left -= num;
		des += num;
	}
	return (char*) input - src;
}
template<typename T>
int Simple32_x64::s32_encode(uint64_t* des, const T* src, int left) {
	uint32_t pos, num2code, shift;
	uint64_t maskVal = 1, tmpVal;
	for (uint64_t bitNum = 0; bitNum < 32; bitNum++) {
		(*des) = bitNum << 59;
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
int Simple32_x64::s32_decode(T* des, uint64_t src) {
	/*
	uint8_t num = (src) >> 59;
	int enNum = codeNum[num];
	uint8_t * decodeArr = bitSizeArr[num];
	uint8_t bitPos = 0;
	for (int i = 0; i < enNum; i++) {
		*des = (src >> bitPos) & ((1U << decodeArr[i]) - 1);
		++des;
		bitPos += decodeArr[i];
	}
	return enNum;
	*/
	uint8_t num = (src) >> 59;
	switch (num) {
	 case 0: {
	 for (int i = 0; i < 59; ++i) {
	 *des = (src >> i) & 1;
	 ++des;
	 }
	 break;
	 }

	 case 1: {
	 int i = 0;
	 for (; i < 19; ++i) {
	 *des = (src >> i) & 1;
	 ++des;
	 }
	 for (; i < 59; i = i + 2) {
	 *des = (src >> i) & 3;
	 ++des;
	 }
	 break;
	 }

	 case 2: {
	 int i = 0;
	 for (; i < 40; i = i + 2) {
	 *des = (src >> i) & 3;
	 ++des;
	 }
	 for (; i < 59; ++i) {
	 *des = (src >> i) & 1;
	 ++des;
	 }
	 break;
	 }

	 case 3: {
	 int i = 0;
	 for (; i < 56; i = i + 2) {
	 *des = (src >> i) & 3;
	 ++des;
	 }
	 *des = (src >> 56) & 7;
	 ++des;
	 break;
	 }

	 case 4: {
	 int i = 0;
	 for (; i < 20; i = i + 2) {
	 *des = (src >> i) & 3;
	 ++des;
	 }
	 for (; i < 59; i = i + 3) {
	 *des = (src >> i) & 7;
	 ++des;
	 }
	 break;
	 }

	 case 5: {
	 int i = 0;
	 for (; i < 39; i = i + 3) {
	 *des = (src >> i) & 7;
	 ++des;
	 }
	 for (; i < 59; i = i + 2) {
	 	 *des = (src >> i) & 3;
	 	 ++des;
	 }
	 break;
	 }

	 case 6: {
		 int i = 0;
		 for (; i < 8; i = i + 4) {
		 	 *des = (src >> i) & 15;
		 	 ++des;
		 	 }
		 for (; i < 59; i = i + 3) {
			 *des = (src >> i) & 7;
			 ++des;
		 }
	 break;
	 }

	 case 7: {
		 int i = 0;
		 for (; i < 32; i = i + 4) {
			 *des = (src >> i) & 15;
			 ++des;
			 }
		 for (; i < 59; i = i + 3) {
			 *des = (src >> i) & 7;
			 ++des;
		 }
	 break;
	 }

	 case 8: {
		 int i = 0;
		 for (; i < 27; i = i + 3) {
			 *des = (src >> i) & 7;
			 ++des;
		 }
		 for (; i < 59; i = i + 4) {
			 *des = (src >> i) & 15;
			 ++des;
		 }
	 break;
	 }

	 case 9: {
		 int i = 0;
		 for (; i < 15; i = i + 5) {
			 *des = (src >> i) & 31;
			 ++des;
		 }
		 for (; i < 59; i = i + 4) {
			 *des = (src >> i) & 15;
			 ++des;
		 }
	 break;
	 }

	 case 10: {
		 int i = 0;
		 for (; i < 16; i = i + 4) {
			 *des = (src >> i) & 15;
			 ++des;
		 }
		 for (; i < 31; i = i + 5) {
			 *des = (src >> i) & 31;
			 ++des;
		 }
		 for (; i < 59; i = i + 4) {
			 *des = (src >> i) & 15;
			 ++des;
		 }
	 break;
	 }

	 case 11: {
		 int i = 0;
		 for (; i < 32; i = i + 4) {
			 *des = (src >> i) & 15;
			 ++des;
		 }
		 for (; i < 47; i = i + 5) {
			 *des = (src >> i) & 31;
			 ++des;
		 }
		 for (; i < 59; i = i + 4) {
			 *des = (src >> i) & 15;
			 ++des;
		 }
	 break;
	 }

	 case 12:
	 *des = (src) & 15;
	 ++des;
	 *des = (src >> 4) & 15;
	 ++des;
	 *des = (src >> 8) & 15;
	 ++des;
	 *des = (src >> 12) & 15;
	 ++des;
	 *des = (src >> 16) & 15;
	 ++des;
	 *des = (src >> 20) & 15;
	 ++des;
	 *des = (src >> 24) & 31;
	 ++des;
	 *des = (src >> 29) & 31;
	 ++des;
	 *des = (src >> 34) & 31;
	 ++des;
	 *des = (src >> 39) & 31;
	 ++des;
	 *des = (src >> 44) & 31;
	 ++des;
	 *des = (src >> 49) & 31;
	 ++des;
	 *des = (src >> 54) & 31;
	 ++des;
	 break;

	 case 13:
	 *des = (src) & 31;
	 ++des;
	 *des = (src >> 5) & 31;
	 ++des;
	 *des = (src >> 10) & 31;
	 ++des;
	 *des = (src >> 15) & 31;
	 ++des;
	 *des = (src >> 20) & 31;
	 ++des;
	 *des = (src >> 25) & 31;
	 ++des;
	 *des = (src >> 30) & 31;
	 ++des;
	 *des = (src >> 35) & 31;
	 ++des;
	 *des = (src >> 40) & 31;
	 ++des;
	 *des = (src >> 45) & 31;
	 ++des;
	 *des = (src >> 50) & 31;
	 ++des;
	 *des = (src >> 55) & 15;
	 ++des;
	 break;

	 case 14:
	 *des = (src) & 31;
	 ++des;
	 *des = (src >> 5) & 31;
	 ++des;
	 *des = (src >> 10) & 31;
	 ++des;
	 *des = (src >> 15) & 31;
	 ++des;
	 *des = (src >> 20) & 31;
	 ++des;
	 *des = (src >> 25) & 31;
	 ++des;
	 *des = (src >> 30) & 31;
	 ++des;
	 *des = (src >> 35) & 63;
	 ++des;
	 *des = (src >> 41) & 63;
	 ++des;
	 *des = (src >> 47) & 63;
	 ++des;
	 *des = (src >> 53) & 63;
	 ++des;
	 break;

	 case 15:
	 *des = (src) & 63;
	 ++des;
	 *des = (src >> 6) & 63;
	 ++des;
	 *des = (src >> 12) & 63;
	 ++des;
	 *des = (src >> 18) & 63;
	 ++des;
	 *des = (src >> 24) & 63;
	 ++des;
	 *des = (src >> 30) & 63;
	 ++des;
	 *des = (src >> 36) & 63;
	 ++des;
	 *des = (src >> 42) & 63;
	 ++des;
	 *des = (src >> 48) & 63;
	 ++des;
	 *des = (src >> 54) & 31;
	 ++des;
	 break;

	 case 16:
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
	 *des = (src >> 35) & 63;
	 ++des;
	 *des = (src >> 41) & 63;
	 ++des;
	 *des = (src >> 47) & 63;
	 ++des;
	 *des = (src >> 53) & 63;
	 ++des;
	 break;

	 case 17:
	 *des = (src) & 63;
	 ++des;
	 *des = (src >> 6) & 63;
	 ++des;
	 *des = (src >> 12) & 63;
	 ++des;
	 *des = (src >> 18) & 63;
	 ++des;
	 *des = (src >> 24) & 127;
	 ++des;
	 *des = (src >> 31) & 127;
	 ++des;
	 *des = (src >> 38) & 127;
	 ++des;
	 *des = (src >> 45) & 127;
	 ++des;
	 *des = (src >> 52) & 127;
	 ++des;
	 break;

	 case 18:
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
	 *des = (src >> 35) & 255;
	 ++des;
	 *des = (src >> 43) & 255;
	 ++des;
	 *des = (src >> 51) & 255;
	 ++des;
	 break;

	 case 19:
	 *des = (src) & 255;
	 ++des;
	 *des = (src >> 8) & 255;
	 ++des;
	 *des = (src >> 16) & 255;
	 ++des;
	 *des = (src >> 24) & 127;
	 ++des;
	 *des = (src >> 31) & 127;
	 ++des;
	 *des = (src >> 38) & 127;
	 ++des;
	 *des = (src >> 45) & 127;
	 ++des;
	 *des = (src >> 52) & 127;
	 ++des;
	 break;

	 case 20:
	 *des = (src) & 255;
	 ++des;
	 *des = (src >> 8) & 255;
	 ++des;
	 *des = (src >> 16) & 255;
	 ++des;
	 *des = (src >> 24) & 255;
	 ++des;
	 *des = (src >> 32) & 511;
	 ++des;
	 *des = (src >> 41) & 511;
	 ++des;
	 *des = (src >> 50) & 511;
	 ++des;
	 break;

	 case 21:
	 *des = (src) & 511;
	 ++des;
	 *des = (src >> 9) & 511;
	 ++des;
	 *des = (src >> 18) & 511;
	 ++des;
	 *des = (src >> 27) & 255;
	 ++des;
	 *des = (src >> 35) & 255;
	 ++des;
	 *des = (src >> 43) & 255;
	 ++des;
	 *des = (src >> 51) & 255;
	 ++des;
	 break;

	 case 22:
	 *des = (src) & 1023;
	 ++des;
	 *des = (src >> 10) & 1023;
	 ++des;
	 *des = (src >> 20) & 1023;
	 ++des;
	 *des = (src >> 30) & 1023;
	 ++des;
	 *des = (src >> 40) & 1023;
	 ++des;
	 *des = (src >> 50) & 511;
	 ++des;
	 break;

	 case 23:
	 *des = (src) & 2047;
	 ++des;
	 *des = (src >> 11) & 2047;
	 ++des;
	 *des = (src >> 22) & 4095;
	 ++des;
	 *des = (src >> 34) & 4095;
	 ++des;
	 *des = (src >> 46) & 8191;
	 ++des;
	 break;

	 case 24:
	 *des = (src) & 8191;
	 ++des;
	 *des = (src >> 13) & 4095;
	 ++des;
	 *des = (src >> 25) & 4095;
	 ++des;
	 *des = (src >> 37) & 2047;
	 ++des;
	 *des = (src >> 48) & 2047;
	 ++des;
	 break;

	 case 25:
	 *des = (src) & 16383;
	 ++des;
	 *des = (src >> 14) & 16383;
	 ++des;
	 *des = (src >> 28) & 32767;
	 ++des;
	 *des = (src >> 43) & 65535;
	 ++des;
	 break;

	 case 26:
	 *des = (src) & 65535;
	 ++des;
	 *des = (src >> 16) & 32767;
	 ++des;
	 *des = (src >> 31) & 16383;
	 ++des;
	 *des = (src >> 45) & 16383;
	 ++des;
	 break;

	 case 27:
	 *des = (src) & ((1 << 20) - 1);
	 ++des;
	 *des = (src >> 20) & ((1 << 20) - 1);
	 ++des;
	 *des = (src >> 40) & ((1 << 19) - 1);
	 ++des;
	 break;

	 case 28:
	 *des = (src) & ((1 << 30) - 1);
	 ++des;
	 *des = (src >> 30) & ((1 << 29) - 1);
	 ++des;
	 break;

	 case 29:
	 *des = (src) & ((1LL << 59) - 1);
	 ++des;
	 break;
	 }
	return codeNum[num];
}

}
}

#endif /* SIMPLE32_X64_HPP_ */