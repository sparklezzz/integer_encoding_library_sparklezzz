/*
 * Simple9.cpp
 */
#include "Simple9.hpp"
using namespace paradise::index;
uint8_t Simple9::bitSizeArr[9] = { 1, 2, 3, 4, 5, 7, 9, 14, 28 };
uint8_t Simple9::codeNum[9] = { 28, 14, 9, 7, 5, 4, 3, 2, 1 };
uint32_t Simple9::maskArr[9] = { 0x1, 0x3, 0x7, 0xf, 0x1f, 0x7f, 0x1ff, 0x3fff, 0xfffffff };

int Simple9::encodeUint32(char* des, const uint32_t* src, uint32_t encodeNum) {
	return encode<uint32_t> (des, src, encodeNum);
}
int Simple9::decodeUint32(uint32_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint32_t> (des, src, decodeNum);
}

int Simple9::encodeUint16(char* des, const uint16_t* src, uint32_t encodeNum) {
	return encode<uint16_t> (des, src, encodeNum);
}
int Simple9::decodeUint16(uint16_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint16_t> (des, src, decodeNum);
}

int Simple9::encodeUint8(char* des, const uint8_t* src, uint32_t encodeNum) {
	return encode<uint8_t> (des, src, encodeNum);
}
int Simple9::decodeUint8(uint8_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint8_t> (des, src, decodeNum);
}

Compressor* Simple9::clone() {
	Compressor* pNewComp = new Simple9(*this);
	return pNewComp;
}
