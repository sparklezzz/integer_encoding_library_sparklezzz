/*
 * SIMD_KVarByte_CU.cpp
 *
 *  Created on: 2013-2-25
 *      Author: zxd
 */

#ifdef USE_SSE_INSTRUCTION

#include "SIMD_KVarByte_CU.hpp"
using namespace paradise::index;

int SIMD_KVarByte_CU::encodeUint32(char* des, const uint32_t* src, uint32_t encodeNum) {
	return encode<uint32_t> (des, src, encodeNum);
}
int SIMD_KVarByte_CU::decodeUint32(uint32_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint32_t> (des, src, decodeNum);
}

int SIMD_KVarByte_CU::encodeUint16(char* des, const uint16_t* src, uint32_t encodeNum) {
	return encode<uint16_t> (des, src, encodeNum);
}
int SIMD_KVarByte_CU::decodeUint16(uint16_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint16_t> (des, src, decodeNum);
}

int SIMD_KVarByte_CU::encodeUint8(char* des, const uint8_t* src, uint32_t encodeNum) {
	return encode<uint8_t> (des, src, encodeNum);
}
int SIMD_KVarByte_CU::decodeUint8(uint8_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint8_t> (des, src, decodeNum);
}
Compressor* SIMD_KVarByte_CU::clone() {
	Compressor* pNewComp = new SIMD_KVarByte_CU(*this);
	return pNewComp;
}

#endif
