/**
 * filename:SIMD_KVSEncoding.cpp
 * @brief:
 * @data:2013-12-09
 * @author:zxd
 */

#ifdef USE_SSE_INSTRUCTION

#include "SIMD_KVSEncoding.hpp"

using namespace paradise::index;

const uint32_t SIMD_KVSEncoding::SIMD_KVSE_LOGLEN = 4;
const uint32_t SIMD_KVSEncoding::SIMD_KVSE_LOGLOG = 4;

const uint32_t SIMD_KVSEncoding::SIMD_KVSE_LOGDESC =
		SIMD_KVSEncoding::SIMD_KVSE_LOGLEN + SIMD_KVSEncoding::SIMD_KVSE_LOGLOG;

const uint32_t SIMD_KVSEncoding::SIMD_KVSE_LENS_LEN = 1U
		<< SIMD_KVSEncoding::SIMD_KVSE_LOGLEN;
const uint32_t SIMD_KVSEncoding::SIMD_KVSE_LOGS_LEN = 1U
		<< SIMD_KVSEncoding::SIMD_KVSE_LOGLOG;
const uint32_t SIMD_KVSEncoding::SIMD_KVSE_LEN = 1U
		<< SIMD_KVSEncoding::SIMD_KVSE_LOGDESC;

//const uint32_t SIMD_KVSEncoding::SIMD_KVSE_LENS[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,
//		10, 11, 12, 14, 16, 32, 64 };
const uint32_t SIMD_KVSEncoding::SIMD_KVSE_LENS[] = { 1, 2, 4, 8, 12, 16, 32, 64 };

// -1 means invalid value
//const uint32_t SIMD_KVSEncoding::SIMD_KVSE_CODELENS[65] = { -1, 0, 1, 2, 3, 4, 5, 6,
//			7, 8, 9, 10, 11, -1, 12, -1, 13, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
//			14, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
//			-1, -1, -1, -1, -1, -1, -1, -1, 15 };
const uint32_t SIMD_KVSEncoding::SIMD_KVSE_CODELENS[65] = { -1, 0, 1, -1, 2, -1, -1, -1,
			3, -1, -1, -1, 4, -1, -1, -1, 5, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
			6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
			-1, -1, -1, -1, -1, -1, -1, -1, 7 };

const uint32_t SIMD_KVSEncoding::SIMD_KVSE_REMAPLOGS[] = { 0, 1, 2, 3, 4, 5, 6,
		7, 8, 9, 10, 11, 12, 16, 16, 16, 16, 20, 20, 20, 20, 32, 32, 32, 32, 32,
		32, 32, 32, 32, 32, 32, 32 };

const uint32_t SIMD_KVSEncoding::SIMD_KVSE_CODELOGS[] = { 0, 1, 2, 3, 4, 5, 6,
		7, 8, 9, 10, 11, 12, 13, 13, 13, 13, 14, 14, 14, 14, 15, 15, 15, 15, 15,
		15, 15, 15, 15, 15, 15, 15 };


const uint64_t MAXLEN = 100000000;

SIMD_KVSEncoding::SIMD_KVSEncoding() :
		vdp_(
						new KVSEncodingDP(SIMD_KVSE_LENS, NULL,
								ARRAYSIZE(SIMD_KVSE_LENS), true)){

}

SIMD_KVSEncoding::~SIMD_KVSEncoding() {
	if (NULL != vdp_) {
			delete vdp_;
			vdp_ = NULL;
	}
}

int SIMD_KVSEncoding::encodeUint32(char* des, const uint32_t* src, uint32_t encodeNum) {
	return encode<uint32_t> (des, src, encodeNum);
}
int SIMD_KVSEncoding::decodeUint32(uint32_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint32_t> (des, src, decodeNum);
}
int SIMD_KVSEncoding::encodeUint16(char* des, const uint16_t* src, uint32_t encodeNum) {
	return encode<uint16_t> (des, src, encodeNum);
}
int SIMD_KVSEncoding::decodeUint16(uint16_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint16_t> (des, src, decodeNum);
}
int SIMD_KVSEncoding::encodeUint8(char* des, const uint8_t* src, uint32_t encodeNum) {
	return encode<uint8_t> (des, src, encodeNum);
}
int SIMD_KVSEncoding::decodeUint8(uint8_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint8_t> (des, src, decodeNum);
}

Compressor* SIMD_KVSEncoding::clone() {
	Compressor* pNewComp = new SIMD_KVSEncoding(*this);
	return pNewComp;
}

#endif
