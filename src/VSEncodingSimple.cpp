/*-----------------------------------------------------------------------------
 *  VSEncodingSimple.hpp - A speed-oriented implementation of VSEncoding
 *
 *  Coding-Style: google-styleguide
 *      https://code.google.com/p/google-styleguide/
 *
 *  Authors:
 *      Takeshi Yamamuro <linguin.m.s_at_gmail.com>
 *      Fabrizio Silvestri <fabrizio.silvestri_at_isti.cnr.it>
 *      Rossano Venturini <rossano.venturini_at_isti.cnr.it>
 *
 *  Copyright 2012 Integer Encoding Library <integerencoding_at_isti.cnr.it>
 *      http://integerencoding.ist.cnr.it/
 *-----------------------------------------------------------------------------
 */

#include "VSEncodingSimple.hpp"

using namespace paradise::index;

const uint32_t VSEncodingSimple::VSESIMPLE_LOGLEN = 4;
const uint32_t VSEncodingSimple::VSESIMPLE_LOGLOG = 4;

const uint32_t VSEncodingSimple::VSESIMPLE_LOGDESC =
		VSEncodingSimple::VSESIMPLE_LOGLEN + VSEncodingSimple::VSESIMPLE_LOGLOG;

const uint32_t VSEncodingSimple::VSESIMPLE_LENS_LEN = 1U
		<< VSEncodingSimple::VSESIMPLE_LOGLEN;
const uint32_t VSEncodingSimple::VSESIMPLE_LOGS_LEN = 1U
		<< VSEncodingSimple::VSESIMPLE_LOGLOG;
const uint32_t VSEncodingSimple::VSESIMPLE_LEN = 1U
		<< VSEncodingSimple::VSESIMPLE_LOGDESC;

const uint32_t VSEncodingSimple::VSESIMPLE_LENS[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,
		10, 11, 12, 14, 16, 32, 64 };

const uint32_t VSEncodingSimple::VSESIMPLE_REMAPLOGS[] = { 0, 1, 2, 3, 4, 5, 6,
		7, 8, 9, 10, 11, 12, 16, 16, 16, 16, 20, 20, 20, 20, 32, 32, 32, 32, 32,
		32, 32, 32, 32, 32, 32, 32 };

const uint32_t VSEncodingSimple::VSESIMPLE_CODELOGS[] = { 0, 1, 2, 3, 4, 5, 6,
		7, 8, 9, 10, 11, 12, 13, 13, 13, 13, 14, 14, 14, 14, 15, 15, 15, 15, 15,
		15, 15, 15, 15, 15, 15, 15 };

const uint64_t MAXLEN = 100000000;

VSEncodingSimple::VSEncodingSimple() :
		vdp_(
				new VSEncodingDP(VSESIMPLE_LENS, NULL,
						ARRAYSIZE(VSESIMPLE_LENS), true)) {
	jtable_ = new void*[MAXLEN];
}

VSEncodingSimple::~VSEncodingSimple() {
	if (NULL != vdp_) {
			delete vdp_;
			vdp_ = NULL;
	}
	if (NULL != jtable_) {
		delete [] jtable_;
		jtable_ = NULL;
	}
}


int VSEncodingSimple::encodeUint32(char* des, const uint32_t* src,
		uint32_t encodeNum) {
	return encode<uint32_t>(des, src, encodeNum);
}
int VSEncodingSimple::decodeUint32(uint32_t* des, const char* src,
		uint32_t decodeNum) {
	return decode<uint32_t>(des, src, decodeNum);
}

int VSEncodingSimple::encodeUint16(char* des, const uint16_t* src,
		uint32_t encodeNum) {
	return encode<uint16_t>(des, src, encodeNum);
}
int VSEncodingSimple::decodeUint16(uint16_t* des, const char* src,
		uint32_t decodeNum) {
	return decode<uint16_t>(des, src, decodeNum);
}

int VSEncodingSimple::encodeUint8(char* des, const uint8_t* src,
		uint32_t encodeNum) {
	return encode<uint8_t>(des, src, encodeNum);
}
int VSEncodingSimple::decodeUint8(uint8_t* des, const char* src,
		uint32_t decodeNum) {
	return decode<uint8_t>(des, src, decodeNum);
}
Compressor* VSEncodingSimple::clone() {
	Compressor* pNewComp = new VSEncodingSimple(*this);
	return pNewComp;

}
