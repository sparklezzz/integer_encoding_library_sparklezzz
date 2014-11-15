/*
 * KSimple.cpp
 */
#include "KSimple.hpp"
using namespace paradise::index;
uint8_t KSimple::bitSizeArr[10] = { 1, 2, 3, 4, 5, 6, 8, 10, 16, 32 };
uint8_t KSimple::codeNum[10] = { 32, 16, 10, 8, 6, 5, 4, 3, 2, 1 };
uint32_t KSimple::maskArr[10] = { 0x1, 0x3, 0x7, 0xf, 0x1f, 0x3f, 0xff, 0x3ff, 0xffff, 0xffffffff};

int KSimple::encodeUint32(char* des, const uint32_t* src, uint32_t encodeNum) {
	return encode<uint32_t> (des, src, encodeNum);
}
int KSimple::decodeUint32(uint32_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint32_t> (des, src, decodeNum);
}

int KSimple::encodeUint16(char* des, const uint16_t* src, uint32_t encodeNum) {
	return encode<uint16_t> (des, src, encodeNum);
}
int KSimple::decodeUint16(uint16_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint16_t> (des, src, decodeNum);
}

int KSimple::encodeUint8(char* des, const uint8_t* src, uint32_t encodeNum) {
	return encode<uint8_t> (des, src, encodeNum);
}
int KSimple::decodeUint8(uint8_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint8_t> (des, src, decodeNum);
}

Compressor* KSimple::clone() {
	Compressor* pNewComp = new KSimple(*this);
	return pNewComp;
}
