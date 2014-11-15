/*-----------------------------------------------------------------------------
 *  VSEncodingNaive.hpp - A compact-oriented implementation of VSEncoding
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
 *
 *  Modified by Xudong Zhang
 *  Date: 2013/11/29
 *
 *-----------------------------------------------------------------------------
 */

#include "VSEncodingNaive.hpp"

using namespace paradise::index;

const uint32_t VSEncodingNaive::VSENAIVE_LOGLEN = 3;
const uint32_t VSEncodingNaive::VSENAIVE_LOGLOG = 4;

const uint32_t VSEncodingNaive::VSENAIVE_LENS_LEN = 1U
		<< VSEncodingNaive::VSENAIVE_LOGLEN;

const uint32_t VSEncodingNaive::VSENAIVE_LENS[] = { 1, 2, 4, 6, 8, 16, 32, 64 };

const uint32_t VSEncodingNaive::VSENAIVE_LOGS[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8,
		9, 10, 11, 12, 16, 20, 32 };

const uint32_t VSEncodingNaive::VSENAIVE_REMAPLOGS[] = { 0, 1, 2, 3, 4, 5, 6, 7,
		8, 9, 10, 11, 12, 16, 16, 16, 16, 20, 20, 20, 20, 32, 32, 32, 32, 32,
		32, 32, 32, 32, 32, 32, 32 };

const uint32_t VSEncodingNaive::VSENAIVE_CODELENS[] = { 0, 0, 1, 0, 2, 0, 3, 0,
		4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 7 };

const uint32_t VSEncodingNaive::VSENAIVE_CODELOGS[] = { 0, 1, 2, 3, 4, 5, 6, 7,
		8, 9, 10, 11, 12, 13, 13, 13, 13, 14, 14, 14, 14, 15, 15, 15, 15, 15,
		15, 15, 15, 15, 15, 15, 15 };

VSEncodingNaive::VSEncodingNaive() :
		vdp_(
				new VSEncodingDP(VSENAIVE_LENS, NULL, ARRAYSIZE(VSENAIVE_LENS),
						false)) {
}

VSEncodingNaive::~VSEncodingNaive() {
	if (NULL != vdp_) {
		delete vdp_;
		vdp_ = NULL;
	}
}

int VSEncodingNaive::encodeUint32(char* des, const uint32_t* src,
		uint32_t encodeNum) {
	return encode<uint32_t>(des, src, encodeNum);
}
int VSEncodingNaive::decodeUint32(uint32_t* des, const char* src,
		uint32_t decodeNum) {
	return decode<uint32_t>(des, src, decodeNum);
}

int VSEncodingNaive::encodeUint16(char* des, const uint16_t* src,
		uint32_t encodeNum) {
	return encode<uint16_t>(des, src, encodeNum);
}
int VSEncodingNaive::decodeUint16(uint16_t* des, const char* src,
		uint32_t decodeNum) {
	return decode<uint16_t>(des, src, decodeNum);
}

int VSEncodingNaive::encodeUint8(char* des, const uint8_t* src,
		uint32_t encodeNum) {
	return encode<uint8_t>(des, src, encodeNum);
}
int VSEncodingNaive::decodeUint8(uint8_t* des, const char* src,
		uint32_t decodeNum) {
	return decode<uint8_t>(des, src, decodeNum);
}
Compressor* VSEncodingNaive::clone() {
	Compressor* pNewComp = new VSEncodingNaive(*this);
	return pNewComp;
}

