/*
 * GroupVBCompUnary.cpp
 *
 *  Created on: 2013-1-24
 *      Author: zxd
 */

#include "GroupVBCompUnary.hpp"

using namespace paradise::index;

int GroupVBCompUnary::encodeUint32(char* des, const uint32_t* src,
		uint32_t encodeNum) {
	return encode<uint32_t> (des, src, encodeNum);
}
int GroupVBCompUnary::decodeUint32(uint32_t* des, const char* src,
		uint32_t decodeNum) {
	return decode<uint32_t> (des, src, decodeNum);
}

int GroupVBCompUnary::encodeUint16(char* des, const uint16_t* src,
		uint32_t encodeNum) {
	return encode<uint16_t> (des, src, encodeNum);
}
int GroupVBCompUnary::decodeUint16(uint16_t* des, const char* src,
		uint32_t decodeNum) {
	return decode<uint16_t> (des, src, decodeNum);
}

int GroupVBCompUnary::encodeUint8(char* des, const uint8_t* src, uint32_t encodeNum) {
	return encode<uint8_t> (des, src, encodeNum);
}
int GroupVBCompUnary::decodeUint8(uint8_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint8_t> (des, src, decodeNum);
}
Compressor* GroupVBCompUnary::clone() {
	Compressor* pNewComp = new GroupVBCompUnary(*this);
	return pNewComp;
}



