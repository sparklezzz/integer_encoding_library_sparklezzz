/*
 * EliasGamma_opt.cpp
 *
 *  Created on: 2013-2-25
 *      Author: zxd
 */

#include "EliasGamma_opt.hpp"
using namespace paradise::index;

int EliasGamma_opt::encodeUint32(char* des, const uint32_t* src, uint32_t encodeNum) {
	return encode<uint32_t> (des, src, encodeNum);
}
int EliasGamma_opt::decodeUint32(uint32_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint32_t> (des, src, decodeNum);
}

int EliasGamma_opt::encodeUint16(char* des, const uint16_t* src, uint32_t encodeNum) {
	return encode<uint16_t> (des, src, encodeNum);
}
int EliasGamma_opt::decodeUint16(uint16_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint16_t> (des, src, decodeNum);
}

int EliasGamma_opt::encodeUint8(char* des, const uint8_t* src, uint32_t encodeNum) {
	return encode<uint8_t> (des, src, encodeNum);
}
int EliasGamma_opt::decodeUint8(uint8_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint8_t> (des, src, decodeNum);
}
Compressor* EliasGamma_opt::clone() {
	Compressor* pNewComp = new EliasGamma_opt(*this);
	return pNewComp;
}


