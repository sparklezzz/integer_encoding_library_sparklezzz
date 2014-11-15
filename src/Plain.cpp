/*
 * Plain.cpp
 */

#include "Plain.hpp"
using namespace paradise::index;
int Plain::encodeUint64(char* des, const uint64_t* src, uint32_t encodeNum) {
	return encode<uint64_t> (des, src, encodeNum);
}
int Plain::decodeUint64(uint64_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint64_t> (des, src, decodeNum);
}

int Plain::encodeUint32(char* des, const uint32_t* src, uint32_t encodeNum) {
	return encode<uint32_t> (des, src, encodeNum);
}
int Plain::decodeUint32(uint32_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint32_t> (des, src, decodeNum);
}

int Plain::encodeUint16(char* des, const uint16_t* src, uint32_t encodeNum) {
	return encode<uint16_t> (des, src, encodeNum);
}
int Plain::decodeUint16(uint16_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint16_t> (des, src, decodeNum);
}

int Plain::encodeUint8(char* des, const uint8_t* src, uint32_t encodeNum) {
	return encode<uint8_t> (des, src, encodeNum);
}
int Plain::decodeUint8(uint8_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint8_t> (des, src, decodeNum);
}
Compressor* Plain::clone() {
	Compressor* pNewComp = new Plain(*this);
	return pNewComp;
}
