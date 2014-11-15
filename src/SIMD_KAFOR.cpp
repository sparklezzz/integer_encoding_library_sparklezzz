/**
 * filename:SIMD_KAFOR.cpp
 * @brief:
 * @data:2013-11-18
 * @author:zxd
 */

#ifdef USE_SSE_INSTRUCTION

#include "SIMD_KAFOR.hpp"

using namespace paradise::index;

SIMD_KAFOR::SIMD_KAFOR() {

}
int SIMD_KAFOR::encodeUint32(char* des, const uint32_t* src, uint32_t encodeNum) {
	return encode<uint32_t> (des, src, encodeNum);
}
int SIMD_KAFOR::decodeUint32(uint32_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint32_t> (des, src, decodeNum);
}
int SIMD_KAFOR::encodeUint16(char* des, const uint16_t* src, uint32_t encodeNum) {
	return encode<uint16_t> (des, src, encodeNum);
}
int SIMD_KAFOR::decodeUint16(uint16_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint16_t> (des, src, decodeNum);
}
int SIMD_KAFOR::encodeUint8(char* des, const uint8_t* src, uint32_t encodeNum) {
	return encode<uint8_t> (des, src, encodeNum);
}
int SIMD_KAFOR::decodeUint8(uint8_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint8_t> (des, src, decodeNum);
}

Compressor* SIMD_KAFOR::clone() {
	Compressor* pNewComp = new SIMD_KAFOR(*this);
	return pNewComp;
}

#endif

