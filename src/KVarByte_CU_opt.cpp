/*
 * KVarByte_CU_opt.cpp
 *
 *  Created on: 2013-2-25
 *      Author: zxd
 */

#include "KVarByte_CU_opt.hpp"
using namespace paradise::index;

int KVarByte_CU_opt::encodeUint32(char* des, const uint32_t* src, uint32_t encodeNum) {
	return encode<uint32_t> (des, src, encodeNum);
}
int KVarByte_CU_opt::decodeUint32(uint32_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint32_t> (des, src, decodeNum);
}

int KVarByte_CU_opt::encodeUint16(char* des, const uint16_t* src, uint32_t encodeNum) {
	return encode<uint16_t> (des, src, encodeNum);
}
int KVarByte_CU_opt::decodeUint16(uint16_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint16_t> (des, src, decodeNum);
}

int KVarByte_CU_opt::encodeUint8(char* des, const uint8_t* src, uint32_t encodeNum) {
	return encode<uint8_t> (des, src, encodeNum);
}
int KVarByte_CU_opt::decodeUint8(uint8_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint8_t> (des, src, decodeNum);
}
Compressor* KVarByte_CU_opt::clone() {
	Compressor* pNewComp = new KVarByte_CU_opt(*this);
	return pNewComp;
}


