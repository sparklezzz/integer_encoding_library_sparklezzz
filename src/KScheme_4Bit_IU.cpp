/*
 * KScheme_4Bit_IU.cpp
 *
 *  Created on: 2013-2-25
 *      Author: zxd
 */

#include "KScheme_4Bit_IU.hpp"
using namespace paradise::index;

int KScheme_4Bit_IU::encodeUint32(char* des, const uint32_t* src, uint32_t encodeNum) {
	return encode<uint32_t> (des, src, encodeNum);
}
int KScheme_4Bit_IU::decodeUint32(uint32_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint32_t> (des, src, decodeNum);
}

int KScheme_4Bit_IU::encodeUint16(char* des, const uint16_t* src, uint32_t encodeNum) {
	return encode<uint16_t> (des, src, encodeNum);
}
int KScheme_4Bit_IU::decodeUint16(uint16_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint16_t> (des, src, decodeNum);
}

int KScheme_4Bit_IU::encodeUint8(char* des, const uint8_t* src, uint32_t encodeNum) {
	return encode<uint8_t> (des, src, encodeNum);
}
int KScheme_4Bit_IU::decodeUint8(uint8_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint8_t> (des, src, decodeNum);
}
Compressor* KScheme_4Bit_IU::clone() {
	Compressor* pNewComp = new KScheme_4Bit_IU(*this);
	return pNewComp;
}


