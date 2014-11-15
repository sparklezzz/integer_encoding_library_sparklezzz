/*
 * SIMD_KVarByte.cpp
 *
 *  Created on: 2013-2-25
 *      Author: zxd
 */

#ifdef USE_SSE_INSTRUCTION

#include "SIMD_KVarByte.hpp"
using namespace paradise::index;

int SIMD_KVarByte::encodeUint32(char* des, const uint32_t* src, uint32_t encodeNum) {
	return encode<uint32_t> (des, src, encodeNum);
}
int SIMD_KVarByte::decodeUint32(uint32_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint32_t> (des, src, decodeNum);
}

int SIMD_KVarByte::encodeUint16(char* des, const uint16_t* src, uint32_t encodeNum) {
	return encode<uint16_t> (des, src, encodeNum);
}
int SIMD_KVarByte::decodeUint16(uint16_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint16_t> (des, src, decodeNum);
}

int SIMD_KVarByte::encodeUint8(char* des, const uint8_t* src, uint32_t encodeNum) {
	return encode<uint8_t> (des, src, encodeNum);
}
int SIMD_KVarByte::decodeUint8(uint8_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint8_t> (des, src, decodeNum);
}
Compressor* SIMD_KVarByte::clone() {
	Compressor* pNewComp = new SIMD_KVarByte(*this);
	return pNewComp;
}

#endif
