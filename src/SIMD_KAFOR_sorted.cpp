/**
 * filename:SIMD_KAFOR_sorted.cpp
 * @brief:
 * @data:2013-11-18
 * @author:zxd
 */

#ifdef USE_SSE_INSTRUCTION

#include "SIMD_KAFOR_sorted.hpp"

using namespace paradise::index;

const struct SIMD_KAFOR_sorted::mode_mask_0 SIMD_KAFOR_sorted::mode_mask_0 __attribute__((aligned(16))) = {{0x1,0x1,0x1,0x1},};

SIMD_KAFOR_sorted::SIMD_KAFOR_sorted() {

}
int SIMD_KAFOR_sorted::encodeUint32(char* des, const uint32_t* src, uint32_t encodeNum) {
	return encode<uint32_t> (des, src, encodeNum);
}
int SIMD_KAFOR_sorted::decodeUint32(uint32_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint32_t> (des, src, decodeNum);
}
int SIMD_KAFOR_sorted::encodeUint16(char* des, const uint16_t* src, uint32_t encodeNum) {
	return encode<uint16_t> (des, src, encodeNum);
}
int SIMD_KAFOR_sorted::decodeUint16(uint16_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint16_t> (des, src, decodeNum);
}
int SIMD_KAFOR_sorted::encodeUint8(char* des, const uint8_t* src, uint32_t encodeNum) {
	return encode<uint8_t> (des, src, encodeNum);
}
int SIMD_KAFOR_sorted::decodeUint8(uint8_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint8_t> (des, src, decodeNum);
}

Compressor* SIMD_KAFOR_sorted::clone() {
	Compressor* pNewComp = new SIMD_KAFOR_sorted(*this);
	return pNewComp;
}

#endif

