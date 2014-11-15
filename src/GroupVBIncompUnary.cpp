/*
 * GroupVBIncompUnary.cpp
 *
 *  Created on: 2013-1-22
 *      Author: zxd
 */

#include "GroupVBIncompUnary.hpp"

using namespace paradise::index;

int GroupVBIncompUnary::encodeUint32(char* des, const uint32_t* src,
		uint32_t encodeNum) {
	return encode<uint32_t> (des, src, encodeNum);
}
int GroupVBIncompUnary::decodeUint32(uint32_t* des, const char* src,
		uint32_t decodeNum) {
	return decode<uint32_t> (des, src, decodeNum);
}

int GroupVBIncompUnary::encodeUint16(char* des, const uint16_t* src,
		uint32_t encodeNum) {
	return encode<uint16_t> (des, src, encodeNum);
}
int GroupVBIncompUnary::decodeUint16(uint16_t* des, const char* src,
		uint32_t decodeNum) {
	return decode<uint16_t> (des, src, decodeNum);
}

int GroupVBIncompUnary::encodeUint8(char* des, const uint8_t* src, uint32_t encodeNum) {
	return encode<uint8_t> (des, src, encodeNum);
}
int GroupVBIncompUnary::decodeUint8(uint8_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint8_t> (des, src, decodeNum);
}
Compressor* GroupVBIncompUnary::clone() {
	Compressor* pNewComp = new GroupVBIncompUnary(*this);
	return pNewComp;
}
