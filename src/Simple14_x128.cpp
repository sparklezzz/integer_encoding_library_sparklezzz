/*
 * Simple14_x128.cpp
 *
 *  Created on: 2012-8-30
 *      Author: zxd
 */

#include "Simple14_x128.hpp"
using namespace paradise::index;
uint8_t Simple14_x128::codeNum[16] = { 124, 62, 41, 31, 24, 20, 15, 12, 10, 8, 6, 4, 2, 1, 0, 0 };
uint8_t Simple14_x128::bitSizeArr[16] = { 1, 2, 3, 4, 5, 6, 8, 10, 12, 15, 20, 31, 62, 64, 0, 0};
uint64_t Simple14_x128::maskArr[16] = { 0x1, 0x3, 0x7, 0xf, 0x1f, 0x3f, 0xff, 0x3ff, 0xfff,
		0x7fff, 0xfffff, 0x7fffffff, 0x3fffffffffffffff, 0xffffffffffffffff, 0, 0};

int Simple14_x128::encodeUint32(char* des, const uint32_t* src, uint32_t encodeNum) {
	return encode<uint32_t> (des, src, encodeNum);
}
int Simple14_x128::decodeUint32(uint32_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint32_t> (des, src, decodeNum);
}

int Simple14_x128::encodeUint16(char* des, const uint16_t* src, uint32_t encodeNum) {
	return encode<uint16_t> (des, src, encodeNum);
}
int Simple14_x128::decodeUint16(uint16_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint16_t> (des, src, decodeNum);
}

int Simple14_x128::encodeUint8(char* des, const uint8_t* src, uint32_t encodeNum) {
	return encode<uint8_t> (des, src, encodeNum);
}
int Simple14_x128::decodeUint8(uint8_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint8_t> (des, src, decodeNum);
}
Compressor* Simple14_x128::clone() {
	Compressor* pNewComp = new Simple14_x128(*this);
	return pNewComp;
}




