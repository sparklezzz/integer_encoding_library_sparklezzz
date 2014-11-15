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

#ifndef __VSENCODINGSIMPLE_HPP__
#define __VSENCODINGSIMPLE_HPP__

#include "Compressor.hpp"
#include "VSEncodingDP.hpp"
#include "BitWriter.hpp"
#include <iostream>

namespace paradise {
namespace index {

/* Unpacker: 0 */
inline void VSESIMPLE_UNPACK0_1(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	(*out)[0] = 0;
	*out += 1;
}

inline void VSESIMPLE_UNPACK0_2(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	(*out)[0] = 0;
	(*out)[1] = 0;
	*out += 2;
}

inline void VSESIMPLE_UNPACK0_3(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	(*out)[0] = 0;
	(*out)[1] = 0;
	(*out)[2] = 0;
	*out += 3;
}

inline void VSESIMPLE_UNPACK0_4(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	ZMEMCPY128(*out);
	*out += 4;
}

inline void VSESIMPLE_UNPACK0_5(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	ZMEMCPY128(*out);
	(*out)[4] = 0;
	*out += 5;
}

inline void VSESIMPLE_UNPACK0_6(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	ZMEMCPY128(*out);
	(*out)[4] = 0;
	(*out)[5] = 0;
	*out += 6;
}

inline void VSESIMPLE_UNPACK0_7(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	ZMEMCPY128(*out);
	(*out)[4] = 0;
	(*out)[5] = 0;
	(*out)[6] = 0;
	*out += 7;
}

inline void VSESIMPLE_UNPACK0_8(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	ZMEMCPY128(*out);
	ZMEMCPY128(*out + 4);
	*out += 8;
}

inline void VSESIMPLE_UNPACK0_9(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	ZMEMCPY128(*out);
	ZMEMCPY128(*out + 4);
	(*out)[8] = 0;
	*out += 9;
}

inline void VSESIMPLE_UNPACK0_10(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	ZMEMCPY128(*out);
	ZMEMCPY128(*out + 4);
	(*out)[8] = 0;
	(*out)[9] = 0;
	*out += 10;
}

inline void VSESIMPLE_UNPACK0_11(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	ZMEMCPY128(*out);
	ZMEMCPY128(*out + 4);
	(*out)[8] = 0;
	(*out)[9] = 0;
	(*out)[10] = 0;
	*out += 11;
}

inline void VSESIMPLE_UNPACK0_12(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	ZMEMCPY128(*out);
	ZMEMCPY128(*out + 4);
	ZMEMCPY128(*out + 8);
	*out += 12;
}

inline void VSESIMPLE_UNPACK0_14(uint32_t ** restrict out,
		const uint32_t ** restrict in) {

	ZMEMCPY128(*out);
	ZMEMCPY128(*out + 4);
	ZMEMCPY128(*out + 8);
	(*out)[12] = 0;
	(*out)[13] = 0;
	*out += 14;
}

inline void VSESIMPLE_UNPACK0_16(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	ZMEMCPY128(*out);
	ZMEMCPY128(*out + 4);
	ZMEMCPY128(*out + 8);
	ZMEMCPY128(*out + 12);
	*out += 16;
}

inline void VSESIMPLE_UNPACK0_32(uint32_t ** restrict out,
		const uint32_t ** restrict in) {

	ZMEMCPY128(*out);
	ZMEMCPY128(*out + 4);
	ZMEMCPY128(*out + 8);
	ZMEMCPY128(*out + 12);
	ZMEMCPY128(*out + 16);
	ZMEMCPY128(*out + 20);
	ZMEMCPY128(*out + 24);
	ZMEMCPY128(*out + 28);
	*out += 32;
}

inline void VSESIMPLE_UNPACK0_64(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	ZMEMCPY128(*out);
	ZMEMCPY128(*out + 4);
	ZMEMCPY128(*out + 8);
	ZMEMCPY128(*out + 12);
	ZMEMCPY128(*out + 16);
	ZMEMCPY128(*out + 20);
	ZMEMCPY128(*out + 24);
	ZMEMCPY128(*out + 28);
	ZMEMCPY128(*out + 32);
	ZMEMCPY128(*out + 36);
	ZMEMCPY128(*out + 40);
	ZMEMCPY128(*out + 44);
	ZMEMCPY128(*out + 48);
	ZMEMCPY128(*out + 52);
	ZMEMCPY128(*out + 56);
	ZMEMCPY128(*out + 60);
	*out += 64;
}

/* UNPACKER: 1 */
inline void VSESIMPLE_UNPACK1_1(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x1;
	*in += 1, *out += 1;
}

inline void VSESIMPLE_UNPACK1_2(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x1;
	(*out)[1] = (val >> 1) & 0x1;
	*in += 1, *out += 2;
}

inline void VSESIMPLE_UNPACK1_3(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x1;
	(*out)[1] = (val >> 1) & 0x1;
	(*out)[2] = (val >> 2) & 0x1;
	*in += 1, *out += 3;
}

inline void VSESIMPLE_UNPACK1_4(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x1;
	(*out)[1] = (val >> 1) & 0x1;
	(*out)[2] = (val >> 2) & 0x1;
	(*out)[3] = (val >> 3) & 0x1;
	*in += 1, *out += 4;
}

inline void VSESIMPLE_UNPACK1_5(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x1;
	(*out)[1] = (val >> 1) & 0x1;
	(*out)[2] = (val >> 2) & 0x1;
	(*out)[3] = (val >> 3) & 0x1;
	(*out)[4] = (val >> 4) & 0x1;
	*in += 1, *out += 5;
}

inline void VSESIMPLE_UNPACK1_6(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x1;
	(*out)[1] = (val >> 1) & 0x1;
	(*out)[2] = (val >> 2) & 0x1;
	(*out)[3] = (val >> 3) & 0x1;
	(*out)[4] = (val >> 4) & 0x1;
	(*out)[5] = (val >> 5) & 0x1;
	*in += 1, *out += 6;
}

inline void VSESIMPLE_UNPACK1_7(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x1;
	(*out)[1] = (val >> 1) & 0x1;
	(*out)[2] = (val >> 2) & 0x1;
	(*out)[3] = (val >> 3) & 0x1;
	(*out)[4] = (val >> 4) & 0x1;
	(*out)[5] = (val >> 5) & 0x1;
	(*out)[6] = (val >> 6) & 0x1;
	*in += 1, *out += 7;
}

inline void VSESIMPLE_UNPACK1_8(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x1;
	(*out)[1] = (val >> 1) & 0x1;
	(*out)[2] = (val >> 2) & 0x1;
	(*out)[3] = (val >> 3) & 0x1;
	(*out)[4] = (val >> 4) & 0x1;
	(*out)[5] = (val >> 5) & 0x1;
	(*out)[6] = (val >> 6) & 0x1;
	(*out)[7] = (val >> 7) & 0x1;
	*in += 1, *out += 8;
}

inline void VSESIMPLE_UNPACK1_9(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x1;
	(*out)[1] = (val >> 1) & 0x1;
	(*out)[2] = (val >> 2) & 0x1;
	(*out)[3] = (val >> 3) & 0x1;
	(*out)[4] = (val >> 4) & 0x1;
	(*out)[5] = (val >> 5) & 0x1;
	(*out)[6] = (val >> 6) & 0x1;
	(*out)[7] = (val >> 7) & 0x1;
	(*out)[8] = (val >> 8) & 0x1;
	*in += 1, *out += 9;
}

inline void VSESIMPLE_UNPACK1_10(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x1;
	(*out)[1] = (val >> 1) & 0x1;
	(*out)[2] = (val >> 2) & 0x1;
	(*out)[3] = (val >> 3) & 0x1;
	(*out)[4] = (val >> 4) & 0x1;
	(*out)[5] = (val >> 5) & 0x1;
	(*out)[6] = (val >> 6) & 0x1;
	(*out)[7] = (val >> 7) & 0x1;
	(*out)[8] = (val >> 8) & 0x1;
	(*out)[9] = (val >> 9) & 0x1;
	*in += 1, *out += 10;
}

inline void VSESIMPLE_UNPACK1_11(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x1;
	(*out)[1] = (val >> 1) & 0x1;
	(*out)[2] = (val >> 2) & 0x1;
	(*out)[3] = (val >> 3) & 0x1;
	(*out)[4] = (val >> 4) & 0x1;
	(*out)[5] = (val >> 5) & 0x1;
	(*out)[6] = (val >> 6) & 0x1;
	(*out)[7] = (val >> 7) & 0x1;
	(*out)[8] = (val >> 8) & 0x1;
	(*out)[9] = (val >> 9) & 0x1;
	(*out)[10] = (val >> 10) & 0x1;
	*in += 1, *out += 11;
}

inline void VSESIMPLE_UNPACK1_12(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x1;
	(*out)[1] = (val >> 1) & 0x1;
	(*out)[2] = (val >> 2) & 0x1;
	(*out)[3] = (val >> 3) & 0x1;
	(*out)[4] = (val >> 4) & 0x1;
	(*out)[5] = (val >> 5) & 0x1;
	(*out)[6] = (val >> 6) & 0x1;
	(*out)[7] = (val >> 7) & 0x1;
	(*out)[8] = (val >> 8) & 0x1;
	(*out)[9] = (val >> 9) & 0x1;
	(*out)[10] = (val >> 10) & 0x1;
	(*out)[11] = (val >> 11) & 0x1;
	*in += 1, *out += 12;
}

inline void VSESIMPLE_UNPACK1_14(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x1;
	(*out)[1] = (val >> 1) & 0x1;
	(*out)[2] = (val >> 2) & 0x1;
	(*out)[3] = (val >> 3) & 0x1;
	(*out)[4] = (val >> 4) & 0x1;
	(*out)[5] = (val >> 5) & 0x1;
	(*out)[6] = (val >> 6) & 0x1;
	(*out)[7] = (val >> 7) & 0x1;
	(*out)[8] = (val >> 8) & 0x1;
	(*out)[9] = (val >> 9) & 0x1;
	(*out)[10] = (val >> 10) & 0x1;
	(*out)[11] = (val >> 11) & 0x1;
	(*out)[12] = (val >> 12) & 0x1;
	(*out)[13] = (val >> 13) & 0x1;
	*in += 1, *out += 14;
}

inline void VSESIMPLE_UNPACK1_16(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x1;
	(*out)[1] = (val >> 1) & 0x1;
	(*out)[2] = (val >> 2) & 0x1;
	(*out)[3] = (val >> 3) & 0x1;
	(*out)[4] = (val >> 4) & 0x1;
	(*out)[5] = (val >> 5) & 0x1;
	(*out)[6] = (val >> 6) & 0x1;
	(*out)[7] = (val >> 7) & 0x1;
	(*out)[8] = (val >> 8) & 0x1;
	(*out)[9] = (val >> 9) & 0x1;
	(*out)[10] = (val >> 10) & 0x1;
	(*out)[11] = (val >> 11) & 0x1;
	(*out)[12] = (val >> 12) & 0x1;
	(*out)[13] = (val >> 13) & 0x1;
	(*out)[14] = (val >> 14) & 0x1;
	(*out)[15] = (val >> 15) & 0x1;
	*in += 1, *out += 16;
}

inline void VSESIMPLE_UNPACK1_32(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x1;
	(*out)[1] = (val >> 1) & 0x1;
	(*out)[2] = (val >> 2) & 0x1;
	(*out)[3] = (val >> 3) & 0x1;
	(*out)[4] = (val >> 4) & 0x1;
	(*out)[5] = (val >> 5) & 0x1;
	(*out)[6] = (val >> 6) & 0x1;
	(*out)[7] = (val >> 7) & 0x1;
	(*out)[8] = (val >> 8) & 0x1;
	(*out)[9] = (val >> 9) & 0x1;
	(*out)[10] = (val >> 10) & 0x1;
	(*out)[11] = (val >> 11) & 0x1;
	(*out)[12] = (val >> 12) & 0x1;
	(*out)[13] = (val >> 13) & 0x1;
	(*out)[14] = (val >> 14) & 0x1;
	(*out)[15] = (val >> 15) & 0x1;
	(*out)[16] = (val >> 16) & 0x1;
	(*out)[17] = (val >> 17) & 0x1;
	(*out)[18] = (val >> 18) & 0x1;
	(*out)[19] = (val >> 19) & 0x1;
	(*out)[20] = (val >> 20) & 0x1;
	(*out)[21] = (val >> 21) & 0x1;
	(*out)[22] = (val >> 22) & 0x1;
	(*out)[23] = (val >> 23) & 0x1;
	(*out)[24] = (val >> 24) & 0x1;
	(*out)[25] = (val >> 25) & 0x1;
	(*out)[26] = (val >> 26) & 0x1;
	(*out)[27] = (val >> 27) & 0x1;
	(*out)[28] = (val >> 28) & 0x1;
	(*out)[29] = (val >> 29) & 0x1;
	(*out)[30] = (val >> 30) & 0x1;
	(*out)[31] = (val >> 31) & 0x1;
	*in += 1, *out += 32;
}

inline void VSESIMPLE_UNPACK1_64(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x1;
	(*out)[1] = (val >> 1) & 0x1;
	(*out)[2] = (val >> 2) & 0x1;
	(*out)[3] = (val >> 3) & 0x1;
	(*out)[4] = (val >> 4) & 0x1;
	(*out)[5] = (val >> 5) & 0x1;
	(*out)[6] = (val >> 6) & 0x1;
	(*out)[7] = (val >> 7) & 0x1;
	(*out)[8] = (val >> 8) & 0x1;
	(*out)[9] = (val >> 9) & 0x1;
	(*out)[10] = (val >> 10) & 0x1;
	(*out)[11] = (val >> 11) & 0x1;
	(*out)[12] = (val >> 12) & 0x1;
	(*out)[13] = (val >> 13) & 0x1;
	(*out)[14] = (val >> 14) & 0x1;
	(*out)[15] = (val >> 15) & 0x1;
	(*out)[16] = (val >> 16) & 0x1;
	(*out)[17] = (val >> 17) & 0x1;
	(*out)[18] = (val >> 18) & 0x1;
	(*out)[19] = (val >> 19) & 0x1;
	(*out)[20] = (val >> 20) & 0x1;
	(*out)[21] = (val >> 21) & 0x1;
	(*out)[22] = (val >> 22) & 0x1;
	(*out)[23] = (val >> 23) & 0x1;
	(*out)[24] = (val >> 24) & 0x1;
	(*out)[25] = (val >> 25) & 0x1;
	(*out)[26] = (val >> 26) & 0x1;
	(*out)[27] = (val >> 27) & 0x1;
	(*out)[28] = (val >> 28) & 0x1;
	(*out)[29] = (val >> 29) & 0x1;
	(*out)[30] = (val >> 30) & 0x1;
	(*out)[31] = (val >> 31) & 0x1;
	val = LOAD32(*in + 1);
	(*out)[32] = (val) & 0x1;
	(*out)[33] = (val >> 1) & 0x1;
	(*out)[34] = (val >> 2) & 0x1;
	(*out)[35] = (val >> 3) & 0x1;
	(*out)[36] = (val >> 4) & 0x1;
	(*out)[37] = (val >> 5) & 0x1;
	(*out)[38] = (val >> 6) & 0x1;
	(*out)[39] = (val >> 7) & 0x1;
	(*out)[40] = (val >> 8) & 0x1;
	(*out)[41] = (val >> 9) & 0x1;
	(*out)[42] = (val >> 10) & 0x1;
	(*out)[43] = (val >> 11) & 0x1;
	(*out)[44] = (val >> 12) & 0x1;
	(*out)[45] = (val >> 13) & 0x1;
	(*out)[46] = (val >> 14) & 0x1;
	(*out)[47] = (val >> 15) & 0x1;
	(*out)[48] = (val >> 16) & 0x1;
	(*out)[49] = (val >> 17) & 0x1;
	(*out)[50] = (val >> 18) & 0x1;
	(*out)[51] = (val >> 19) & 0x1;
	(*out)[52] = (val >> 20) & 0x1;
	(*out)[53] = (val >> 21) & 0x1;
	(*out)[54] = (val >> 22) & 0x1;
	(*out)[55] = (val >> 23) & 0x1;
	(*out)[56] = (val >> 24) & 0x1;
	(*out)[57] = (val >> 25) & 0x1;
	(*out)[58] = (val >> 26) & 0x1;
	(*out)[59] = (val >> 27) & 0x1;
	(*out)[60] = (val >> 28) & 0x1;
	(*out)[61] = (val >> 29) & 0x1;
	(*out)[62] = (val >> 30) & 0x1;
	(*out)[63] = (val >> 31) & 0x1;
	*in += 2, *out += 64;
}

/* UNPACKER: 2 */
inline void VSESIMPLE_UNPACK2_1(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x3;
	*in += 1, *out += 1;
}

inline void VSESIMPLE_UNPACK2_2(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x3;
	(*out)[1] = (val >> 2) & 0x3;
	*in += 1, *out += 2;
}

inline void VSESIMPLE_UNPACK2_3(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x3;
	(*out)[1] = (val >> 2) & 0x3;
	(*out)[2] = (val >> 4) & 0x3;
	*in += 1, *out += 3;
}

inline void VSESIMPLE_UNPACK2_4(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x3;
	(*out)[1] = (val >> 2) & 0x3;
	(*out)[2] = (val >> 4) & 0x3;
	(*out)[3] = (val >> 6) & 0x3;
	*in += 1, *out += 4;
}

inline void VSESIMPLE_UNPACK2_5(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x3;
	(*out)[1] = (val >> 2) & 0x3;
	(*out)[2] = (val >> 4) & 0x3;
	(*out)[3] = (val >> 6) & 0x3;
	(*out)[4] = (val >> 8) & 0x3;
	*in += 1, *out += 5;
}

inline void VSESIMPLE_UNPACK2_6(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x3;
	(*out)[1] = (val >> 2) & 0x3;
	(*out)[2] = (val >> 4) & 0x3;
	(*out)[3] = (val >> 6) & 0x3;
	(*out)[4] = (val >> 8) & 0x3;
	(*out)[5] = (val >> 10) & 0x3;
	*in += 1, *out += 6;
}

inline void VSESIMPLE_UNPACK2_7(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x3;
	(*out)[1] = (val >> 2) & 0x3;
	(*out)[2] = (val >> 4) & 0x3;
	(*out)[3] = (val >> 6) & 0x3;
	(*out)[4] = (val >> 8) & 0x3;
	(*out)[5] = (val >> 10) & 0x3;
	(*out)[6] = (val >> 12) & 0x3;
	*in += 1, *out += 7;
}

inline void VSESIMPLE_UNPACK2_8(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x3;
	(*out)[1] = (val >> 2) & 0x3;
	(*out)[2] = (val >> 4) & 0x3;
	(*out)[3] = (val >> 6) & 0x3;
	(*out)[4] = (val >> 8) & 0x3;
	(*out)[5] = (val >> 10) & 0x3;
	(*out)[6] = (val >> 12) & 0x3;
	(*out)[7] = (val >> 14) & 0x3;
	*in += 1, *out += 8;
}

inline void VSESIMPLE_UNPACK2_9(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x3;
	(*out)[1] = (val >> 2) & 0x3;
	(*out)[2] = (val >> 4) & 0x3;
	(*out)[3] = (val >> 6) & 0x3;
	(*out)[4] = (val >> 8) & 0x3;
	(*out)[5] = (val >> 10) & 0x3;
	(*out)[6] = (val >> 12) & 0x3;
	(*out)[7] = (val >> 14) & 0x3;
	(*out)[8] = (val >> 16) & 0x3;
	*in += 1, *out += 9;
}

inline void VSESIMPLE_UNPACK2_10(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x3;
	(*out)[1] = (val >> 2) & 0x3;
	(*out)[2] = (val >> 4) & 0x3;
	(*out)[3] = (val >> 6) & 0x3;
	(*out)[4] = (val >> 8) & 0x3;
	(*out)[5] = (val >> 10) & 0x3;
	(*out)[6] = (val >> 12) & 0x3;
	(*out)[7] = (val >> 14) & 0x3;
	(*out)[8] = (val >> 16) & 0x3;
	(*out)[9] = (val >> 18) & 0x3;
	*in += 1, *out += 10;
}

inline void VSESIMPLE_UNPACK2_11(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x3;
	(*out)[1] = (val >> 2) & 0x3;
	(*out)[2] = (val >> 4) & 0x3;
	(*out)[3] = (val >> 6) & 0x3;
	(*out)[4] = (val >> 8) & 0x3;
	(*out)[5] = (val >> 10) & 0x3;
	(*out)[6] = (val >> 12) & 0x3;
	(*out)[7] = (val >> 14) & 0x3;
	(*out)[8] = (val >> 16) & 0x3;
	(*out)[9] = (val >> 18) & 0x3;
	(*out)[10] = (val >> 20) & 0x3;
	*in += 1, *out += 11;
}

inline void VSESIMPLE_UNPACK2_12(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x3;
	(*out)[1] = (val >> 2) & 0x3;
	(*out)[2] = (val >> 4) & 0x3;
	(*out)[3] = (val >> 6) & 0x3;
	(*out)[4] = (val >> 8) & 0x3;
	(*out)[5] = (val >> 10) & 0x3;
	(*out)[6] = (val >> 12) & 0x3;
	(*out)[7] = (val >> 14) & 0x3;
	(*out)[8] = (val >> 16) & 0x3;
	(*out)[9] = (val >> 18) & 0x3;
	(*out)[10] = (val >> 20) & 0x3;
	(*out)[11] = (val >> 22) & 0x3;
	*in += 1, *out += 12;
}

inline void VSESIMPLE_UNPACK2_14(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x3;
	(*out)[1] = (val >> 2) & 0x3;
	(*out)[2] = (val >> 4) & 0x3;
	(*out)[3] = (val >> 6) & 0x3;
	(*out)[4] = (val >> 8) & 0x3;
	(*out)[5] = (val >> 10) & 0x3;
	(*out)[6] = (val >> 12) & 0x3;
	(*out)[7] = (val >> 14) & 0x3;
	(*out)[8] = (val >> 16) & 0x3;
	(*out)[9] = (val >> 18) & 0x3;
	(*out)[10] = (val >> 20) & 0x3;
	(*out)[11] = (val >> 22) & 0x3;
	(*out)[12] = (val >> 24) & 0x3;
	(*out)[13] = (val >> 26) & 0x3;
	*in += 1, *out += 14;
}

inline void VSESIMPLE_UNPACK2_16(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x3;
	(*out)[1] = (val >> 2) & 0x3;
	(*out)[2] = (val >> 4) & 0x3;
	(*out)[3] = (val >> 6) & 0x3;
	(*out)[4] = (val >> 8) & 0x3;
	(*out)[5] = (val >> 10) & 0x3;
	(*out)[6] = (val >> 12) & 0x3;
	(*out)[7] = (val >> 14) & 0x3;
	(*out)[8] = (val >> 16) & 0x3;
	(*out)[9] = (val >> 18) & 0x3;
	(*out)[10] = (val >> 20) & 0x3;
	(*out)[11] = (val >> 22) & 0x3;
	(*out)[12] = (val >> 24) & 0x3;
	(*out)[13] = (val >> 26) & 0x3;
	(*out)[14] = (val >> 28) & 0x3;
	(*out)[15] = (val >> 30) & 0x3;
	*in += 1, *out += 16;
}

inline void VSESIMPLE_UNPACK2_32(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x3;
	(*out)[1] = (val >> 2) & 0x3;
	(*out)[2] = (val >> 4) & 0x3;
	(*out)[3] = (val >> 6) & 0x3;
	(*out)[4] = (val >> 8) & 0x3;
	(*out)[5] = (val >> 10) & 0x3;
	(*out)[6] = (val >> 12) & 0x3;
	(*out)[7] = (val >> 14) & 0x3;
	(*out)[8] = (val >> 16) & 0x3;
	(*out)[9] = (val >> 18) & 0x3;
	(*out)[10] = (val >> 20) & 0x3;
	(*out)[11] = (val >> 22) & 0x3;
	(*out)[12] = (val >> 24) & 0x3;
	(*out)[13] = (val >> 26) & 0x3;
	(*out)[14] = (val >> 28) & 0x3;
	(*out)[15] = (val >> 30) & 0x3;
	val = LOAD32(*in + 1);
	(*out)[16] = (val) & 0x3;
	(*out)[17] = (val >> 2) & 0x3;
	(*out)[18] = (val >> 4) & 0x3;
	(*out)[19] = (val >> 6) & 0x3;
	(*out)[20] = (val >> 8) & 0x3;
	(*out)[21] = (val >> 10) & 0x3;
	(*out)[22] = (val >> 12) & 0x3;
	(*out)[23] = (val >> 14) & 0x3;
	(*out)[24] = (val >> 16) & 0x3;
	(*out)[25] = (val >> 18) & 0x3;
	(*out)[26] = (val >> 20) & 0x3;
	(*out)[27] = (val >> 22) & 0x3;
	(*out)[28] = (val >> 24) & 0x3;
	(*out)[29] = (val >> 26) & 0x3;
	(*out)[30] = (val >> 28) & 0x3;
	(*out)[31] = (val >> 30) & 0x3;
	*in += 2, *out += 32;
}

inline void VSESIMPLE_UNPACK2_64(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x3;
	(*out)[1] = (val >> 2) & 0x3;
	(*out)[2] = (val >> 4) & 0x3;
	(*out)[3] = (val >> 6) & 0x3;
	(*out)[4] = (val >> 8) & 0x3;
	(*out)[5] = (val >> 10) & 0x3;
	(*out)[6] = (val >> 12) & 0x3;
	(*out)[7] = (val >> 14) & 0x3;
	(*out)[8] = (val >> 16) & 0x3;
	(*out)[9] = (val >> 18) & 0x3;
	(*out)[10] = (val >> 20) & 0x3;
	(*out)[11] = (val >> 22) & 0x3;
	(*out)[12] = (val >> 24) & 0x3;
	(*out)[13] = (val >> 26) & 0x3;
	(*out)[14] = (val >> 28) & 0x3;
	(*out)[15] = (val >> 30) & 0x3;
	val = LOAD32(*in + 1);
	(*out)[16] = (val) & 0x3;
	(*out)[17] = (val >> 2) & 0x3;
	(*out)[18] = (val >> 4) & 0x3;
	(*out)[19] = (val >> 6) & 0x3;
	(*out)[20] = (val >> 8) & 0x3;
	(*out)[21] = (val >> 10) & 0x3;
	(*out)[22] = (val >> 12) & 0x3;
	(*out)[23] = (val >> 14) & 0x3;
	(*out)[24] = (val >> 16) & 0x3;
	(*out)[25] = (val >> 18) & 0x3;
	(*out)[26] = (val >> 20) & 0x3;
	(*out)[27] = (val >> 22) & 0x3;
	(*out)[28] = (val >> 24) & 0x3;
	(*out)[29] = (val >> 26) & 0x3;
	(*out)[30] = (val >> 28) & 0x3;
	(*out)[31] = (val >> 30) & 0x3;
	val = LOAD32(*in + 2);
	(*out)[32] = (val) & 0x3;
	(*out)[33] = (val >> 2) & 0x3;
	(*out)[34] = (val >> 4) & 0x3;
	(*out)[35] = (val >> 6) & 0x3;
	(*out)[36] = (val >> 8) & 0x3;
	(*out)[37] = (val >> 10) & 0x3;
	(*out)[38] = (val >> 12) & 0x3;
	(*out)[39] = (val >> 14) & 0x3;
	(*out)[40] = (val >> 16) & 0x3;
	(*out)[41] = (val >> 18) & 0x3;
	(*out)[42] = (val >> 20) & 0x3;
	(*out)[43] = (val >> 22) & 0x3;
	(*out)[44] = (val >> 24) & 0x3;
	(*out)[45] = (val >> 26) & 0x3;
	(*out)[46] = (val >> 28) & 0x3;
	(*out)[47] = (val >> 30) & 0x3;
	val = LOAD32(*in + 3);
	(*out)[48] = (val) & 0x3;
	(*out)[49] = (val >> 2) & 0x3;
	(*out)[50] = (val >> 4) & 0x3;
	(*out)[51] = (val >> 6) & 0x3;
	(*out)[52] = (val >> 8) & 0x3;
	(*out)[53] = (val >> 10) & 0x3;
	(*out)[54] = (val >> 12) & 0x3;
	(*out)[55] = (val >> 14) & 0x3;
	(*out)[56] = (val >> 16) & 0x3;
	(*out)[57] = (val >> 18) & 0x3;
	(*out)[58] = (val >> 20) & 0x3;
	(*out)[59] = (val >> 22) & 0x3;
	(*out)[60] = (val >> 24) & 0x3;
	(*out)[61] = (val >> 26) & 0x3;
	(*out)[62] = (val >> 28) & 0x3;
	(*out)[63] = (val >> 30) & 0x3;
	*in += 4, *out += 64;
}

/* UNPACKER: 3 */
inline void VSESIMPLE_UNPACK3_1(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x7;
	*in += 1, *out += 1;
}

inline void VSESIMPLE_UNPACK3_2(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x7;
	(*out)[1] = (val >> 3) & 0x7;
	*in += 1, *out += 2;
}

inline void VSESIMPLE_UNPACK3_3(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x7;
	(*out)[1] = (val >> 3) & 0x7;
	(*out)[2] = (val >> 6) & 0x7;
	*in += 1, *out += 3;
}

inline void VSESIMPLE_UNPACK3_4(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x7;
	(*out)[1] = (val >> 3) & 0x7;
	(*out)[2] = (val >> 6) & 0x7;
	(*out)[3] = (val >> 9) & 0x7;
	*in += 1, *out += 4;
}

inline void VSESIMPLE_UNPACK3_5(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x7;
	(*out)[1] = (val >> 3) & 0x7;
	(*out)[2] = (val >> 6) & 0x7;
	(*out)[3] = (val >> 9) & 0x7;
	(*out)[4] = (val >> 12) & 0x7;
	*in += 1, *out += 5;
}

inline void VSESIMPLE_UNPACK3_6(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x7;
	(*out)[1] = (val >> 3) & 0x7;
	(*out)[2] = (val >> 6) & 0x7;
	(*out)[3] = (val >> 9) & 0x7;
	(*out)[4] = (val >> 12) & 0x7;
	(*out)[5] = (val >> 15) & 0x7;
	*in += 1, *out += 6;
}

inline void VSESIMPLE_UNPACK3_7(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x7;
	(*out)[1] = (val >> 3) & 0x7;
	(*out)[2] = (val >> 6) & 0x7;
	(*out)[3] = (val >> 9) & 0x7;
	(*out)[4] = (val >> 12) & 0x7;
	(*out)[5] = (val >> 15) & 0x7;
	(*out)[6] = (val >> 18) & 0x7;
	*in += 1, *out += 7;
}

inline void VSESIMPLE_UNPACK3_8(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x7;
	(*out)[1] = (val >> 3) & 0x7;
	(*out)[2] = (val >> 6) & 0x7;
	(*out)[3] = (val >> 9) & 0x7;
	(*out)[4] = (val >> 12) & 0x7;
	(*out)[5] = (val >> 15) & 0x7;
	(*out)[6] = (val >> 18) & 0x7;
	(*out)[7] = (val >> 21) & 0x7;
	*in += 1, *out += 8;
}

inline void VSESIMPLE_UNPACK3_9(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x7;
	(*out)[1] = (val >> 3) & 0x7;
	(*out)[2] = (val >> 6) & 0x7;
	(*out)[3] = (val >> 9) & 0x7;
	(*out)[4] = (val >> 12) & 0x7;
	(*out)[5] = (val >> 15) & 0x7;
	(*out)[6] = (val >> 18) & 0x7;
	(*out)[7] = (val >> 21) & 0x7;
	(*out)[8] = (val >> 24) & 0x7;
	*in += 1, *out += 9;
}

inline void VSESIMPLE_UNPACK3_10(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x7;
	(*out)[1] = (val >> 3) & 0x7;
	(*out)[2] = (val >> 6) & 0x7;
	(*out)[3] = (val >> 9) & 0x7;
	(*out)[4] = (val >> 12) & 0x7;
	(*out)[5] = (val >> 15) & 0x7;
	(*out)[6] = (val >> 18) & 0x7;
	(*out)[7] = (val >> 21) & 0x7;
	(*out)[8] = (val >> 24) & 0x7;
	(*out)[9] = (val >> 27) & 0x7;
	*in += 1, *out += 10;
}

inline void VSESIMPLE_UNPACK3_11(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x7;
	(*out)[1] = (val >> 3) & 0x7;
	(*out)[2] = (val >> 6) & 0x7;
	(*out)[3] = (val >> 9) & 0x7;
	(*out)[4] = (val >> 12) & 0x7;
	(*out)[5] = (val >> 15) & 0x7;
	(*out)[6] = (val >> 18) & 0x7;
	(*out)[7] = (val >> 21) & 0x7;
	(*out)[8] = (val >> 24) & 0x7;
	(*out)[9] = (val >> 27) & 0x7;
	(*out)[10] = (val >> 30) & 0x7;
	val = LOAD32(*in + 1);
	(*out)[10] |= (val << 2) & 0x7;
	*in += 2, *out += 11;
}

inline void VSESIMPLE_UNPACK3_12(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x7;
	(*out)[1] = (val >> 3) & 0x7;
	(*out)[2] = (val >> 6) & 0x7;
	(*out)[3] = (val >> 9) & 0x7;
	(*out)[4] = (val >> 12) & 0x7;
	(*out)[5] = (val >> 15) & 0x7;
	(*out)[6] = (val >> 18) & 0x7;
	(*out)[7] = (val >> 21) & 0x7;
	(*out)[8] = (val >> 24) & 0x7;
	(*out)[9] = (val >> 27) & 0x7;
	(*out)[10] = (val >> 30) & 0x7;
	val = LOAD32(*in + 1);
	(*out)[10] |= (val << 2) & 0x7;
	(*out)[11] = (val >> 1) & 0x7;
	*in += 2, *out += 12;
}

inline void VSESIMPLE_UNPACK3_14(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x7;
	(*out)[1] = (val >> 3) & 0x7;
	(*out)[2] = (val >> 6) & 0x7;
	(*out)[3] = (val >> 9) & 0x7;
	(*out)[4] = (val >> 12) & 0x7;
	(*out)[5] = (val >> 15) & 0x7;
	(*out)[6] = (val >> 18) & 0x7;
	(*out)[7] = (val >> 21) & 0x7;
	(*out)[8] = (val >> 24) & 0x7;
	(*out)[9] = (val >> 27) & 0x7;
	(*out)[10] = (val >> 30) & 0x7;
	val = LOAD32(*in + 1);
	(*out)[10] |= (val << 2) & 0x7;
	(*out)[11] = (val >> 1) & 0x7;
	(*out)[12] = (val >> 4) & 0x7;
	(*out)[13] = (val >> 7) & 0x7;
	*in += 2, *out += 14;
}

inline void VSESIMPLE_UNPACK3_16(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x7;
	(*out)[1] = (val >> 3) & 0x7;
	(*out)[2] = (val >> 6) & 0x7;
	(*out)[3] = (val >> 9) & 0x7;
	(*out)[4] = (val >> 12) & 0x7;
	(*out)[5] = (val >> 15) & 0x7;
	(*out)[6] = (val >> 18) & 0x7;
	(*out)[7] = (val >> 21) & 0x7;
	(*out)[8] = (val >> 24) & 0x7;
	(*out)[9] = (val >> 27) & 0x7;
	(*out)[10] = (val >> 30) & 0x7;
	val = LOAD32(*in + 1);
	(*out)[10] |= (val << 2) & 0x7;
	(*out)[11] = (val >> 1) & 0x7;
	(*out)[12] = (val >> 4) & 0x7;
	(*out)[13] = (val >> 7) & 0x7;
	(*out)[14] = (val >> 10) & 0x7;
	(*out)[15] = (val >> 13) & 0x7;
	*in += 2, *out += 16;
}

inline void VSESIMPLE_UNPACK3_32(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x7;
	(*out)[1] = (val >> 3) & 0x7;
	(*out)[2] = (val >> 6) & 0x7;
	(*out)[3] = (val >> 9) & 0x7;
	(*out)[4] = (val >> 12) & 0x7;
	(*out)[5] = (val >> 15) & 0x7;
	(*out)[6] = (val >> 18) & 0x7;
	(*out)[7] = (val >> 21) & 0x7;
	(*out)[8] = (val >> 24) & 0x7;
	(*out)[9] = (val >> 27) & 0x7;
	(*out)[10] = (val >> 30) & 0x7;
	val = LOAD32(*in + 1);
	(*out)[10] |= (val << 2) & 0x7;
	(*out)[11] = (val >> 1) & 0x7;
	(*out)[12] = (val >> 4) & 0x7;
	(*out)[13] = (val >> 7) & 0x7;
	(*out)[14] = (val >> 10) & 0x7;
	(*out)[15] = (val >> 13) & 0x7;
	(*out)[16] = (val >> 16) & 0x7;
	(*out)[17] = (val >> 19) & 0x7;
	(*out)[18] = (val >> 22) & 0x7;
	(*out)[19] = (val >> 25) & 0x7;
	(*out)[20] = (val >> 28) & 0x7;
	(*out)[21] = (val >> 31) & 0x7;
	val = LOAD32(*in + 2);
	(*out)[21] |= (val << 1) & 0x7;
	(*out)[22] = (val >> 2) & 0x7;
	(*out)[23] = (val >> 5) & 0x7;
	(*out)[24] = (val >> 8) & 0x7;
	(*out)[25] = (val >> 11) & 0x7;
	(*out)[26] = (val >> 14) & 0x7;
	(*out)[27] = (val >> 17) & 0x7;
	(*out)[28] = (val >> 20) & 0x7;
	(*out)[29] = (val >> 23) & 0x7;
	(*out)[30] = (val >> 26) & 0x7;
	(*out)[31] = (val >> 29) & 0x7;
	*in += 3, *out += 32;
}

inline void VSESIMPLE_UNPACK3_64(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x7;
	(*out)[1] = (val >> 3) & 0x7;
	(*out)[2] = (val >> 6) & 0x7;
	(*out)[3] = (val >> 9) & 0x7;
	(*out)[4] = (val >> 12) & 0x7;
	(*out)[5] = (val >> 15) & 0x7;
	(*out)[6] = (val >> 18) & 0x7;
	(*out)[7] = (val >> 21) & 0x7;
	(*out)[8] = (val >> 24) & 0x7;
	(*out)[9] = (val >> 27) & 0x7;
	(*out)[10] = (val >> 30) & 0x7;
	val = LOAD32(*in + 1);
	(*out)[10] |= (val << 2) & 0x7;
	(*out)[11] = (val >> 1) & 0x7;
	(*out)[12] = (val >> 4) & 0x7;
	(*out)[13] = (val >> 7) & 0x7;
	(*out)[14] = (val >> 10) & 0x7;
	(*out)[15] = (val >> 13) & 0x7;
	(*out)[16] = (val >> 16) & 0x7;
	(*out)[17] = (val >> 19) & 0x7;
	(*out)[18] = (val >> 22) & 0x7;
	(*out)[19] = (val >> 25) & 0x7;
	(*out)[20] = (val >> 28) & 0x7;
	(*out)[21] = (val >> 31) & 0x7;
	val = LOAD32(*in + 2);
	(*out)[21] |= (val << 1) & 0x7;
	(*out)[22] = (val >> 2) & 0x7;
	(*out)[23] = (val >> 5) & 0x7;
	(*out)[24] = (val >> 8) & 0x7;
	(*out)[25] = (val >> 11) & 0x7;
	(*out)[26] = (val >> 14) & 0x7;
	(*out)[27] = (val >> 17) & 0x7;
	(*out)[28] = (val >> 20) & 0x7;
	(*out)[29] = (val >> 23) & 0x7;
	(*out)[30] = (val >> 26) & 0x7;
	(*out)[31] = (val >> 29) & 0x7;
	val = LOAD32(*in + 3);
	(*out)[32] = (val) & 0x7;
	(*out)[33] = (val >> 3) & 0x7;
	(*out)[34] = (val >> 6) & 0x7;
	(*out)[35] = (val >> 9) & 0x7;
	(*out)[36] = (val >> 12) & 0x7;
	(*out)[37] = (val >> 15) & 0x7;
	(*out)[38] = (val >> 18) & 0x7;
	(*out)[39] = (val >> 21) & 0x7;
	(*out)[40] = (val >> 24) & 0x7;
	(*out)[41] = (val >> 27) & 0x7;
	(*out)[42] = (val >> 30) & 0x7;
	val = LOAD32(*in + 4);
	(*out)[42] |= (val << 2) & 0x7;
	(*out)[43] = (val >> 1) & 0x7;
	(*out)[44] = (val >> 4) & 0x7;
	(*out)[45] = (val >> 7) & 0x7;
	(*out)[46] = (val >> 10) & 0x7;
	(*out)[47] = (val >> 13) & 0x7;
	(*out)[48] = (val >> 16) & 0x7;
	(*out)[49] = (val >> 19) & 0x7;
	(*out)[50] = (val >> 22) & 0x7;
	(*out)[51] = (val >> 25) & 0x7;
	(*out)[52] = (val >> 28) & 0x7;
	(*out)[53] = (val >> 31) & 0x7;
	val = LOAD32(*in + 5);
	(*out)[53] |= (val << 1) & 0x7;
	(*out)[54] = (val >> 2) & 0x7;
	(*out)[55] = (val >> 5) & 0x7;
	(*out)[56] = (val >> 8) & 0x7;
	(*out)[57] = (val >> 11) & 0x7;
	(*out)[58] = (val >> 14) & 0x7;
	(*out)[59] = (val >> 17) & 0x7;
	(*out)[60] = (val >> 20) & 0x7;
	(*out)[61] = (val >> 23) & 0x7;
	(*out)[62] = (val >> 26) & 0x7;
	(*out)[63] = (val >> 29) & 0x7;
	*in += 6, *out += 64;
}

/* UNPACKER: 4 */
inline void VSESIMPLE_UNPACK4_1(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xf;
	*in += 1, *out += 1;
}

inline void VSESIMPLE_UNPACK4_2(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xf;
	(*out)[1] = (val >> 4) & 0xf;
	*in += 1, *out += 2;
}

inline void VSESIMPLE_UNPACK4_3(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xf;
	(*out)[1] = (val >> 4) & 0xf;
	(*out)[2] = (val >> 8) & 0xf;
	*in += 1, *out += 3;
}

inline void VSESIMPLE_UNPACK4_4(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xf;
	(*out)[1] = (val >> 4) & 0xf;
	(*out)[2] = (val >> 8) & 0xf;
	(*out)[3] = (val >> 12) & 0xf;
	*in += 1, *out += 4;
}

inline void VSESIMPLE_UNPACK4_5(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xf;
	(*out)[1] = (val >> 4) & 0xf;
	(*out)[2] = (val >> 8) & 0xf;
	(*out)[3] = (val >> 12) & 0xf;
	(*out)[4] = (val >> 16) & 0xf;
	*in += 1, *out += 5;
}

inline void VSESIMPLE_UNPACK4_6(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xf;
	(*out)[1] = (val >> 4) & 0xf;
	(*out)[2] = (val >> 8) & 0xf;
	(*out)[3] = (val >> 12) & 0xf;
	(*out)[4] = (val >> 16) & 0xf;
	(*out)[5] = (val >> 20) & 0xf;
	*in += 1, *out += 6;
}

inline void VSESIMPLE_UNPACK4_7(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xf;
	(*out)[1] = (val >> 4) & 0xf;
	(*out)[2] = (val >> 8) & 0xf;
	(*out)[3] = (val >> 12) & 0xf;
	(*out)[4] = (val >> 16) & 0xf;
	(*out)[5] = (val >> 20) & 0xf;
	(*out)[6] = (val >> 24) & 0xf;
	*in += 1, *out += 7;
}

inline void VSESIMPLE_UNPACK4_8(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xf;
	(*out)[1] = (val >> 4) & 0xf;
	(*out)[2] = (val >> 8) & 0xf;
	(*out)[3] = (val >> 12) & 0xf;
	(*out)[4] = (val >> 16) & 0xf;
	(*out)[5] = (val >> 20) & 0xf;
	(*out)[6] = (val >> 24) & 0xf;
	(*out)[7] = (val >> 28) & 0xf;
	*in += 1, *out += 8;
}

inline void VSESIMPLE_UNPACK4_9(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xf;
	(*out)[1] = (val >> 4) & 0xf;
	(*out)[2] = (val >> 8) & 0xf;
	(*out)[3] = (val >> 12) & 0xf;
	(*out)[4] = (val >> 16) & 0xf;
	(*out)[5] = (val >> 20) & 0xf;
	(*out)[6] = (val >> 24) & 0xf;
	(*out)[7] = (val >> 28) & 0xf;
	val = LOAD32(*in + 1);
	(*out)[8] = (val) & 0xf;
	*in += 2, *out += 9;
}

inline void VSESIMPLE_UNPACK4_10(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xf;
	(*out)[1] = (val >> 4) & 0xf;
	(*out)[2] = (val >> 8) & 0xf;
	(*out)[3] = (val >> 12) & 0xf;
	(*out)[4] = (val >> 16) & 0xf;
	(*out)[5] = (val >> 20) & 0xf;
	(*out)[6] = (val >> 24) & 0xf;
	(*out)[7] = (val >> 28) & 0xf;
	val = LOAD32(*in + 1);
	(*out)[8] = (val) & 0xf;
	(*out)[9] = (val >> 4) & 0xf;
	*in += 2, *out += 10;
}

inline void VSESIMPLE_UNPACK4_11(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xf;
	(*out)[1] = (val >> 4) & 0xf;
	(*out)[2] = (val >> 8) & 0xf;
	(*out)[3] = (val >> 12) & 0xf;
	(*out)[4] = (val >> 16) & 0xf;
	(*out)[5] = (val >> 20) & 0xf;
	(*out)[6] = (val >> 24) & 0xf;
	(*out)[7] = (val >> 28) & 0xf;
	val = LOAD32(*in + 1);
	(*out)[8] = (val) & 0xf;
	(*out)[9] = (val >> 4) & 0xf;
	(*out)[10] = (val >> 8) & 0xf;
	*in += 2, *out += 11;
}

inline void VSESIMPLE_UNPACK4_12(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xf;
	(*out)[1] = (val >> 4) & 0xf;
	(*out)[2] = (val >> 8) & 0xf;
	(*out)[3] = (val >> 12) & 0xf;
	(*out)[4] = (val >> 16) & 0xf;
	(*out)[5] = (val >> 20) & 0xf;
	(*out)[6] = (val >> 24) & 0xf;
	(*out)[7] = (val >> 28) & 0xf;
	val = LOAD32(*in + 1);
	(*out)[8] = (val) & 0xf;
	(*out)[9] = (val >> 4) & 0xf;
	(*out)[10] = (val >> 8) & 0xf;
	(*out)[11] = (val >> 12) & 0xf;
	*in += 2, *out += 12;
}

inline void VSESIMPLE_UNPACK4_14(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xf;
	(*out)[1] = (val >> 4) & 0xf;
	(*out)[2] = (val >> 8) & 0xf;
	(*out)[3] = (val >> 12) & 0xf;
	(*out)[4] = (val >> 16) & 0xf;
	(*out)[5] = (val >> 20) & 0xf;
	(*out)[6] = (val >> 24) & 0xf;
	(*out)[7] = (val >> 28) & 0xf;
	val = LOAD32(*in + 1);
	(*out)[8] = (val) & 0xf;
	(*out)[9] = (val >> 4) & 0xf;
	(*out)[10] = (val >> 8) & 0xf;
	(*out)[11] = (val >> 12) & 0xf;
	(*out)[12] = (val >> 16) & 0xf;
	(*out)[13] = (val >> 20) & 0xf;
	*in += 2, *out += 14;
}

inline void VSESIMPLE_UNPACK4_16(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xf;
	(*out)[1] = (val >> 4) & 0xf;
	(*out)[2] = (val >> 8) & 0xf;
	(*out)[3] = (val >> 12) & 0xf;
	(*out)[4] = (val >> 16) & 0xf;
	(*out)[5] = (val >> 20) & 0xf;
	(*out)[6] = (val >> 24) & 0xf;
	(*out)[7] = (val >> 28) & 0xf;
	val = LOAD32(*in + 1);
	(*out)[8] = (val) & 0xf;
	(*out)[9] = (val >> 4) & 0xf;
	(*out)[10] = (val >> 8) & 0xf;
	(*out)[11] = (val >> 12) & 0xf;
	(*out)[12] = (val >> 16) & 0xf;
	(*out)[13] = (val >> 20) & 0xf;
	(*out)[14] = (val >> 24) & 0xf;
	(*out)[15] = (val >> 28) & 0xf;
	*in += 2, *out += 16;
}

inline void VSESIMPLE_UNPACK4_32(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xf;
	(*out)[1] = (val >> 4) & 0xf;
	(*out)[2] = (val >> 8) & 0xf;
	(*out)[3] = (val >> 12) & 0xf;
	(*out)[4] = (val >> 16) & 0xf;
	(*out)[5] = (val >> 20) & 0xf;
	(*out)[6] = (val >> 24) & 0xf;
	(*out)[7] = (val >> 28) & 0xf;
	val = LOAD32(*in + 1);
	(*out)[8] = (val) & 0xf;
	(*out)[9] = (val >> 4) & 0xf;
	(*out)[10] = (val >> 8) & 0xf;
	(*out)[11] = (val >> 12) & 0xf;
	(*out)[12] = (val >> 16) & 0xf;
	(*out)[13] = (val >> 20) & 0xf;
	(*out)[14] = (val >> 24) & 0xf;
	(*out)[15] = (val >> 28) & 0xf;
	val = LOAD32(*in + 2);
	(*out)[16] = (val) & 0xf;
	(*out)[17] = (val >> 4) & 0xf;
	(*out)[18] = (val >> 8) & 0xf;
	(*out)[19] = (val >> 12) & 0xf;
	(*out)[20] = (val >> 16) & 0xf;
	(*out)[21] = (val >> 20) & 0xf;
	(*out)[22] = (val >> 24) & 0xf;
	(*out)[23] = (val >> 28) & 0xf;
	val = LOAD32(*in + 3);
	(*out)[24] = (val) & 0xf;
	(*out)[25] = (val >> 4) & 0xf;
	(*out)[26] = (val >> 8) & 0xf;
	(*out)[27] = (val >> 12) & 0xf;
	(*out)[28] = (val >> 16) & 0xf;
	(*out)[29] = (val >> 20) & 0xf;
	(*out)[30] = (val >> 24) & 0xf;
	(*out)[31] = (val >> 28) & 0xf;
	*in += 4, *out += 32;
}

inline void VSESIMPLE_UNPACK4_64(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xf;
	(*out)[1] = (val >> 4) & 0xf;
	(*out)[2] = (val >> 8) & 0xf;
	(*out)[3] = (val >> 12) & 0xf;
	(*out)[4] = (val >> 16) & 0xf;
	(*out)[5] = (val >> 20) & 0xf;
	(*out)[6] = (val >> 24) & 0xf;
	(*out)[7] = (val >> 28) & 0xf;
	val = LOAD32(*in + 1);
	(*out)[8] = (val) & 0xf;
	(*out)[9] = (val >> 4) & 0xf;
	(*out)[10] = (val >> 8) & 0xf;
	(*out)[11] = (val >> 12) & 0xf;
	(*out)[12] = (val >> 16) & 0xf;
	(*out)[13] = (val >> 20) & 0xf;
	(*out)[14] = (val >> 24) & 0xf;
	(*out)[15] = (val >> 28) & 0xf;
	val = LOAD32(*in + 2);
	(*out)[16] = (val) & 0xf;
	(*out)[17] = (val >> 4) & 0xf;
	(*out)[18] = (val >> 8) & 0xf;
	(*out)[19] = (val >> 12) & 0xf;
	(*out)[20] = (val >> 16) & 0xf;
	(*out)[21] = (val >> 20) & 0xf;
	(*out)[22] = (val >> 24) & 0xf;
	(*out)[23] = (val >> 28) & 0xf;
	val = LOAD32(*in + 3);
	(*out)[24] = (val) & 0xf;
	(*out)[25] = (val >> 4) & 0xf;
	(*out)[26] = (val >> 8) & 0xf;
	(*out)[27] = (val >> 12) & 0xf;
	(*out)[28] = (val >> 16) & 0xf;
	(*out)[29] = (val >> 20) & 0xf;
	(*out)[30] = (val >> 24) & 0xf;
	(*out)[31] = (val >> 28) & 0xf;
	val = LOAD32(*in + 4);
	(*out)[32] = (val) & 0xf;
	(*out)[33] = (val >> 4) & 0xf;
	(*out)[34] = (val >> 8) & 0xf;
	(*out)[35] = (val >> 12) & 0xf;
	(*out)[36] = (val >> 16) & 0xf;
	(*out)[37] = (val >> 20) & 0xf;
	(*out)[38] = (val >> 24) & 0xf;
	(*out)[39] = (val >> 28) & 0xf;
	val = LOAD32(*in + 5);
	(*out)[40] = (val) & 0xf;
	(*out)[41] = (val >> 4) & 0xf;
	(*out)[42] = (val >> 8) & 0xf;
	(*out)[43] = (val >> 12) & 0xf;
	(*out)[44] = (val >> 16) & 0xf;
	(*out)[45] = (val >> 20) & 0xf;
	(*out)[46] = (val >> 24) & 0xf;
	(*out)[47] = (val >> 28) & 0xf;
	val = LOAD32(*in + 6);
	(*out)[48] = (val) & 0xf;
	(*out)[49] = (val >> 4) & 0xf;
	(*out)[50] = (val >> 8) & 0xf;
	(*out)[51] = (val >> 12) & 0xf;
	(*out)[52] = (val >> 16) & 0xf;
	(*out)[53] = (val >> 20) & 0xf;
	(*out)[54] = (val >> 24) & 0xf;
	(*out)[55] = (val >> 28) & 0xf;
	val = LOAD32(*in + 7);
	(*out)[56] = (val) & 0xf;
	(*out)[57] = (val >> 4) & 0xf;
	(*out)[58] = (val >> 8) & 0xf;
	(*out)[59] = (val >> 12) & 0xf;
	(*out)[60] = (val >> 16) & 0xf;
	(*out)[61] = (val >> 20) & 0xf;
	(*out)[62] = (val >> 24) & 0xf;
	(*out)[63] = (val >> 28) & 0xf;
	*in += 8, *out += 64;
}

/* UNPACKER: 5 */
inline void VSESIMPLE_UNPACK5_1(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x1f;
	*in += 1, *out += 1;
}

inline void VSESIMPLE_UNPACK5_2(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x1f;
	(*out)[1] = (val >> 5) & 0x1f;
	*in += 1, *out += 2;
}

inline void VSESIMPLE_UNPACK5_3(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x1f;
	(*out)[1] = (val >> 5) & 0x1f;
	(*out)[2] = (val >> 10) & 0x1f;
	*in += 1, *out += 3;
}

inline void VSESIMPLE_UNPACK5_4(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x1f;
	(*out)[1] = (val >> 5) & 0x1f;
	(*out)[2] = (val >> 10) & 0x1f;
	(*out)[3] = (val >> 15) & 0x1f;
	*in += 1, *out += 4;
}

inline void VSESIMPLE_UNPACK5_5(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x1f;
	(*out)[1] = (val >> 5) & 0x1f;
	(*out)[2] = (val >> 10) & 0x1f;
	(*out)[3] = (val >> 15) & 0x1f;
	(*out)[4] = (val >> 20) & 0x1f;
	*in += 1, *out += 5;
}

inline void VSESIMPLE_UNPACK5_6(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x1f;
	(*out)[1] = (val >> 5) & 0x1f;
	(*out)[2] = (val >> 10) & 0x1f;
	(*out)[3] = (val >> 15) & 0x1f;
	(*out)[4] = (val >> 20) & 0x1f;
	(*out)[5] = (val >> 25) & 0x1f;
	*in += 1, *out += 6;
}

inline void VSESIMPLE_UNPACK5_7(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x1f;
	(*out)[1] = (val >> 5) & 0x1f;
	(*out)[2] = (val >> 10) & 0x1f;
	(*out)[3] = (val >> 15) & 0x1f;
	(*out)[4] = (val >> 20) & 0x1f;
	(*out)[5] = (val >> 25) & 0x1f;
	(*out)[6] = (val >> 30) & 0x1f;
	val = LOAD32(*in + 1);
	(*out)[6] |= (val << 2) & 0x1f;
	*in += 2, *out += 7;
}

inline void VSESIMPLE_UNPACK5_8(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x1f;
	(*out)[1] = (val >> 5) & 0x1f;
	(*out)[2] = (val >> 10) & 0x1f;
	(*out)[3] = (val >> 15) & 0x1f;
	(*out)[4] = (val >> 20) & 0x1f;
	(*out)[5] = (val >> 25) & 0x1f;
	(*out)[6] = (val >> 30) & 0x1f;
	val = LOAD32(*in + 1);
	(*out)[6] |= (val << 2) & 0x1f;
	(*out)[7] = (val >> 3) & 0x1f;
	*in += 2, *out += 8;
}

inline void VSESIMPLE_UNPACK5_9(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x1f;
	(*out)[1] = (val >> 5) & 0x1f;
	(*out)[2] = (val >> 10) & 0x1f;
	(*out)[3] = (val >> 15) & 0x1f;
	(*out)[4] = (val >> 20) & 0x1f;
	(*out)[5] = (val >> 25) & 0x1f;
	(*out)[6] = (val >> 30) & 0x1f;
	val = LOAD32(*in + 1);
	(*out)[6] |= (val << 2) & 0x1f;
	(*out)[7] = (val >> 3) & 0x1f;
	(*out)[8] = (val >> 8) & 0x1f;
	*in += 2, *out += 9;
}

inline void VSESIMPLE_UNPACK5_10(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x1f;
	(*out)[1] = (val >> 5) & 0x1f;
	(*out)[2] = (val >> 10) & 0x1f;
	(*out)[3] = (val >> 15) & 0x1f;
	(*out)[4] = (val >> 20) & 0x1f;
	(*out)[5] = (val >> 25) & 0x1f;
	(*out)[6] = (val >> 30) & 0x1f;
	val = LOAD32(*in + 1);
	(*out)[6] |= (val << 2) & 0x1f;
	(*out)[7] = (val >> 3) & 0x1f;
	(*out)[8] = (val >> 8) & 0x1f;
	(*out)[9] = (val >> 13) & 0x1f;
	*in += 2, *out += 10;
}

inline void VSESIMPLE_UNPACK5_11(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x1f;
	(*out)[1] = (val >> 5) & 0x1f;
	(*out)[2] = (val >> 10) & 0x1f;
	(*out)[3] = (val >> 15) & 0x1f;
	(*out)[4] = (val >> 20) & 0x1f;
	(*out)[5] = (val >> 25) & 0x1f;
	(*out)[6] = (val >> 30) & 0x1f;
	val = LOAD32(*in + 1);
	(*out)[6] |= (val << 2) & 0x1f;
	(*out)[7] = (val >> 3) & 0x1f;
	(*out)[8] = (val >> 8) & 0x1f;
	(*out)[9] = (val >> 13) & 0x1f;
	(*out)[10] = (val >> 18) & 0x1f;
	*in += 2, *out += 11;
}

inline void VSESIMPLE_UNPACK5_12(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x1f;
	(*out)[1] = (val >> 5) & 0x1f;
	(*out)[2] = (val >> 10) & 0x1f;
	(*out)[3] = (val >> 15) & 0x1f;
	(*out)[4] = (val >> 20) & 0x1f;
	(*out)[5] = (val >> 25) & 0x1f;
	(*out)[6] = (val >> 30) & 0x1f;
	val = LOAD32(*in + 1);
	(*out)[6] |= (val << 2) & 0x1f;
	(*out)[7] = (val >> 3) & 0x1f;
	(*out)[8] = (val >> 8) & 0x1f;
	(*out)[9] = (val >> 13) & 0x1f;
	(*out)[10] = (val >> 18) & 0x1f;
	(*out)[11] = (val >> 23) & 0x1f;
	*in += 2, *out += 12;
}

inline void VSESIMPLE_UNPACK5_14(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x1f;
	(*out)[1] = (val >> 5) & 0x1f;
	(*out)[2] = (val >> 10) & 0x1f;
	(*out)[3] = (val >> 15) & 0x1f;
	(*out)[4] = (val >> 20) & 0x1f;
	(*out)[5] = (val >> 25) & 0x1f;
	(*out)[6] = (val >> 30) & 0x1f;
	val = LOAD32(*in + 1);
	(*out)[6] |= (val << 2) & 0x1f;
	(*out)[7] = (val >> 3) & 0x1f;
	(*out)[8] = (val >> 8) & 0x1f;
	(*out)[9] = (val >> 13) & 0x1f;
	(*out)[10] = (val >> 18) & 0x1f;
	(*out)[11] = (val >> 23) & 0x1f;
	(*out)[12] = (val >> 28) & 0x1f;
	val = LOAD32(*in + 2);
	(*out)[12] |= (val << 4) & 0x1f;
	(*out)[13] = (val >> 1) & 0x1f;
	*in += 3, *out += 14;
}

inline void VSESIMPLE_UNPACK5_16(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x1f;
	(*out)[1] = (val >> 5) & 0x1f;
	(*out)[2] = (val >> 10) & 0x1f;
	(*out)[3] = (val >> 15) & 0x1f;
	(*out)[4] = (val >> 20) & 0x1f;
	(*out)[5] = (val >> 25) & 0x1f;
	(*out)[6] = (val >> 30) & 0x1f;
	val = LOAD32(*in + 1);
	(*out)[6] |= (val << 2) & 0x1f;
	(*out)[7] = (val >> 3) & 0x1f;
	(*out)[8] = (val >> 8) & 0x1f;
	(*out)[9] = (val >> 13) & 0x1f;
	(*out)[10] = (val >> 18) & 0x1f;
	(*out)[11] = (val >> 23) & 0x1f;
	(*out)[12] = (val >> 28) & 0x1f;
	val = LOAD32(*in + 2);
	(*out)[12] |= (val << 4) & 0x1f;
	(*out)[13] = (val >> 1) & 0x1f;
	(*out)[14] = (val >> 6) & 0x1f;
	(*out)[15] = (val >> 11) & 0x1f;
	*in += 3, *out += 16;
}

inline void VSESIMPLE_UNPACK5_32(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x1f;
	(*out)[1] = (val >> 5) & 0x1f;
	(*out)[2] = (val >> 10) & 0x1f;
	(*out)[3] = (val >> 15) & 0x1f;
	(*out)[4] = (val >> 20) & 0x1f;
	(*out)[5] = (val >> 25) & 0x1f;
	(*out)[6] = (val >> 30) & 0x1f;
	val = LOAD32(*in + 1);
	(*out)[6] |= (val << 2) & 0x1f;
	(*out)[7] = (val >> 3) & 0x1f;
	(*out)[8] = (val >> 8) & 0x1f;
	(*out)[9] = (val >> 13) & 0x1f;
	(*out)[10] = (val >> 18) & 0x1f;
	(*out)[11] = (val >> 23) & 0x1f;
	(*out)[12] = (val >> 28) & 0x1f;
	val = LOAD32(*in + 2);
	(*out)[12] |= (val << 4) & 0x1f;
	(*out)[13] = (val >> 1) & 0x1f;
	(*out)[14] = (val >> 6) & 0x1f;
	(*out)[15] = (val >> 11) & 0x1f;
	(*out)[16] = (val >> 16) & 0x1f;
	(*out)[17] = (val >> 21) & 0x1f;
	(*out)[18] = (val >> 26) & 0x1f;
	(*out)[19] = (val >> 31) & 0x1f;
	val = LOAD32(*in + 3);
	(*out)[19] |= (val << 1) & 0x1f;
	(*out)[20] = (val >> 4) & 0x1f;
	(*out)[21] = (val >> 9) & 0x1f;
	(*out)[22] = (val >> 14) & 0x1f;
	(*out)[23] = (val >> 19) & 0x1f;
	(*out)[24] = (val >> 24) & 0x1f;
	(*out)[25] = (val >> 29) & 0x1f;
	val = LOAD32(*in + 4);
	(*out)[25] |= (val << 3) & 0x1f;
	(*out)[26] = (val >> 2) & 0x1f;
	(*out)[27] = (val >> 7) & 0x1f;
	(*out)[28] = (val >> 12) & 0x1f;
	(*out)[29] = (val >> 17) & 0x1f;
	(*out)[30] = (val >> 22) & 0x1f;
	(*out)[31] = (val >> 27) & 0x1f;
	*in += 5, *out += 32;
}

inline void VSESIMPLE_UNPACK5_64(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x1f;
	(*out)[1] = (val >> 5) & 0x1f;
	(*out)[2] = (val >> 10) & 0x1f;
	(*out)[3] = (val >> 15) & 0x1f;
	(*out)[4] = (val >> 20) & 0x1f;
	(*out)[5] = (val >> 25) & 0x1f;
	(*out)[6] = (val >> 30) & 0x1f;
	val = LOAD32(*in + 1);
	(*out)[6] |= (val << 2) & 0x1f;
	(*out)[7] = (val >> 3) & 0x1f;
	(*out)[8] = (val >> 8) & 0x1f;
	(*out)[9] = (val >> 13) & 0x1f;
	(*out)[10] = (val >> 18) & 0x1f;
	(*out)[11] = (val >> 23) & 0x1f;
	(*out)[12] = (val >> 28) & 0x1f;
	val = LOAD32(*in + 2);
	(*out)[12] |= (val << 4) & 0x1f;
	(*out)[13] = (val >> 1) & 0x1f;
	(*out)[14] = (val >> 6) & 0x1f;
	(*out)[15] = (val >> 11) & 0x1f;
	(*out)[16] = (val >> 16) & 0x1f;
	(*out)[17] = (val >> 21) & 0x1f;
	(*out)[18] = (val >> 26) & 0x1f;
	(*out)[19] = (val >> 31) & 0x1f;
	val = LOAD32(*in + 3);
	(*out)[19] |= (val << 1) & 0x1f;
	(*out)[20] = (val >> 4) & 0x1f;
	(*out)[21] = (val >> 9) & 0x1f;
	(*out)[22] = (val >> 14) & 0x1f;
	(*out)[23] = (val >> 19) & 0x1f;
	(*out)[24] = (val >> 24) & 0x1f;
	(*out)[25] = (val >> 29) & 0x1f;
	val = LOAD32(*in + 4);
	(*out)[25] |= (val << 3) & 0x1f;
	(*out)[26] = (val >> 2) & 0x1f;
	(*out)[27] = (val >> 7) & 0x1f;
	(*out)[28] = (val >> 12) & 0x1f;
	(*out)[29] = (val >> 17) & 0x1f;
	(*out)[30] = (val >> 22) & 0x1f;
	(*out)[31] = (val >> 27) & 0x1f;
	val = LOAD32(*in + 5);
	(*out)[32] = (val) & 0x1f;
	(*out)[33] = (val >> 5) & 0x1f;
	(*out)[34] = (val >> 10) & 0x1f;
	(*out)[35] = (val >> 15) & 0x1f;
	(*out)[36] = (val >> 20) & 0x1f;
	(*out)[37] = (val >> 25) & 0x1f;
	(*out)[38] = (val >> 30) & 0x1f;
	val = LOAD32(*in + 6);
	(*out)[38] |= (val << 2) & 0x1f;
	(*out)[39] = (val >> 3) & 0x1f;
	(*out)[40] = (val >> 8) & 0x1f;
	(*out)[41] = (val >> 13) & 0x1f;
	(*out)[42] = (val >> 18) & 0x1f;
	(*out)[43] = (val >> 23) & 0x1f;
	(*out)[44] = (val >> 28) & 0x1f;
	val = LOAD32(*in + 7);
	(*out)[44] |= (val << 4) & 0x1f;
	(*out)[45] = (val >> 1) & 0x1f;
	(*out)[46] = (val >> 6) & 0x1f;
	(*out)[47] = (val >> 11) & 0x1f;
	(*out)[48] = (val >> 16) & 0x1f;
	(*out)[49] = (val >> 21) & 0x1f;
	(*out)[50] = (val >> 26) & 0x1f;
	(*out)[51] = (val >> 31) & 0x1f;
	val = LOAD32(*in + 8);
	(*out)[51] |= (val << 1) & 0x1f;
	(*out)[52] = (val >> 4) & 0x1f;
	(*out)[53] = (val >> 9) & 0x1f;
	(*out)[54] = (val >> 14) & 0x1f;
	(*out)[55] = (val >> 19) & 0x1f;
	(*out)[56] = (val >> 24) & 0x1f;
	(*out)[57] = (val >> 29) & 0x1f;
	val = LOAD32(*in + 9);
	(*out)[57] |= (val << 3) & 0x1f;
	(*out)[58] = (val >> 2) & 0x1f;
	(*out)[59] = (val >> 7) & 0x1f;
	(*out)[60] = (val >> 12) & 0x1f;
	(*out)[61] = (val >> 17) & 0x1f;
	(*out)[62] = (val >> 22) & 0x1f;
	(*out)[63] = (val >> 27) & 0x1f;
	*in += 10, *out += 64;
}

/* UNPACKER: 6 */
inline void VSESIMPLE_UNPACK6_1(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x3f;
	*in += 1, *out += 1;
}

inline void VSESIMPLE_UNPACK6_2(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x3f;
	(*out)[1] = (val >> 6) & 0x3f;
	*in += 1, *out += 2;
}

inline void VSESIMPLE_UNPACK6_3(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x3f;
	(*out)[1] = (val >> 6) & 0x3f;
	(*out)[2] = (val >> 12) & 0x3f;
	*in += 1, *out += 3;
}

inline void VSESIMPLE_UNPACK6_4(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x3f;
	(*out)[1] = (val >> 6) & 0x3f;
	(*out)[2] = (val >> 12) & 0x3f;
	(*out)[3] = (val >> 18) & 0x3f;
	*in += 1, *out += 4;
}

inline void VSESIMPLE_UNPACK6_5(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x3f;
	(*out)[1] = (val >> 6) & 0x3f;
	(*out)[2] = (val >> 12) & 0x3f;
	(*out)[3] = (val >> 18) & 0x3f;
	(*out)[4] = (val >> 24) & 0x3f;
	*in += 1, *out += 5;
}

inline void VSESIMPLE_UNPACK6_6(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x3f;
	(*out)[1] = (val >> 6) & 0x3f;
	(*out)[2] = (val >> 12) & 0x3f;
	(*out)[3] = (val >> 18) & 0x3f;
	(*out)[4] = (val >> 24) & 0x3f;
	(*out)[5] = (val >> 30) & 0x3f;
	val = LOAD32(*in + 1);
	(*out)[5] |= (val << 2) & 0x3f;
	*in += 2, *out += 6;
}

inline void VSESIMPLE_UNPACK6_7(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x3f;
	(*out)[1] = (val >> 6) & 0x3f;
	(*out)[2] = (val >> 12) & 0x3f;
	(*out)[3] = (val >> 18) & 0x3f;
	(*out)[4] = (val >> 24) & 0x3f;
	(*out)[5] = (val >> 30) & 0x3f;
	val = LOAD32(*in + 1);
	(*out)[5] |= (val << 2) & 0x3f;
	(*out)[6] = (val >> 4) & 0x3f;
	*in += 2, *out += 7;
}

inline void VSESIMPLE_UNPACK6_8(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x3f;
	(*out)[1] = (val >> 6) & 0x3f;
	(*out)[2] = (val >> 12) & 0x3f;
	(*out)[3] = (val >> 18) & 0x3f;
	(*out)[4] = (val >> 24) & 0x3f;
	(*out)[5] = (val >> 30) & 0x3f;
	val = LOAD32(*in + 1);
	(*out)[5] |= (val << 2) & 0x3f;
	(*out)[6] = (val >> 4) & 0x3f;
	(*out)[7] = (val >> 10) & 0x3f;
	*in += 2, *out += 8;
}

inline void VSESIMPLE_UNPACK6_9(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x3f;
	(*out)[1] = (val >> 6) & 0x3f;
	(*out)[2] = (val >> 12) & 0x3f;
	(*out)[3] = (val >> 18) & 0x3f;
	(*out)[4] = (val >> 24) & 0x3f;
	(*out)[5] = (val >> 30) & 0x3f;
	val = LOAD32(*in + 1);
	(*out)[5] |= (val << 2) & 0x3f;
	(*out)[6] = (val >> 4) & 0x3f;
	(*out)[7] = (val >> 10) & 0x3f;
	(*out)[8] = (val >> 16) & 0x3f;
	*in += 2, *out += 9;
}

inline void VSESIMPLE_UNPACK6_10(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x3f;
	(*out)[1] = (val >> 6) & 0x3f;
	(*out)[2] = (val >> 12) & 0x3f;
	(*out)[3] = (val >> 18) & 0x3f;
	(*out)[4] = (val >> 24) & 0x3f;
	(*out)[5] = (val >> 30) & 0x3f;
	val = LOAD32(*in + 1);
	(*out)[5] |= (val << 2) & 0x3f;
	(*out)[6] = (val >> 4) & 0x3f;
	(*out)[7] = (val >> 10) & 0x3f;
	(*out)[8] = (val >> 16) & 0x3f;
	(*out)[9] = (val >> 22) & 0x3f;
	*in += 2, *out += 10;
}

inline void VSESIMPLE_UNPACK6_11(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x3f;
	(*out)[1] = (val >> 6) & 0x3f;
	(*out)[2] = (val >> 12) & 0x3f;
	(*out)[3] = (val >> 18) & 0x3f;
	(*out)[4] = (val >> 24) & 0x3f;
	(*out)[5] = (val >> 30) & 0x3f;
	val = LOAD32(*in + 1);
	(*out)[5] |= (val << 2) & 0x3f;
	(*out)[6] = (val >> 4) & 0x3f;
	(*out)[7] = (val >> 10) & 0x3f;
	(*out)[8] = (val >> 16) & 0x3f;
	(*out)[9] = (val >> 22) & 0x3f;
	(*out)[10] = (val >> 28) & 0x3f;
	val = LOAD32(*in + 2);
	(*out)[10] |= (val << 4) & 0x3f;
	*in += 3, *out += 11;
}

inline void VSESIMPLE_UNPACK6_12(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x3f;
	(*out)[1] = (val >> 6) & 0x3f;
	(*out)[2] = (val >> 12) & 0x3f;
	(*out)[3] = (val >> 18) & 0x3f;
	(*out)[4] = (val >> 24) & 0x3f;
	(*out)[5] = (val >> 30) & 0x3f;
	val = LOAD32(*in + 1);
	(*out)[5] |= (val << 2) & 0x3f;
	(*out)[6] = (val >> 4) & 0x3f;
	(*out)[7] = (val >> 10) & 0x3f;
	(*out)[8] = (val >> 16) & 0x3f;
	(*out)[9] = (val >> 22) & 0x3f;
	(*out)[10] = (val >> 28) & 0x3f;
	val = LOAD32(*in + 2);
	(*out)[10] |= (val << 4) & 0x3f;
	(*out)[11] = (val >> 2) & 0x3f;
	*in += 3, *out += 12;
}

inline void VSESIMPLE_UNPACK6_14(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x3f;
	(*out)[1] = (val >> 6) & 0x3f;
	(*out)[2] = (val >> 12) & 0x3f;
	(*out)[3] = (val >> 18) & 0x3f;
	(*out)[4] = (val >> 24) & 0x3f;
	(*out)[5] = (val >> 30) & 0x3f;
	val = LOAD32(*in + 1);
	(*out)[5] |= (val << 2) & 0x3f;
	(*out)[6] = (val >> 4) & 0x3f;
	(*out)[7] = (val >> 10) & 0x3f;
	(*out)[8] = (val >> 16) & 0x3f;
	(*out)[9] = (val >> 22) & 0x3f;
	(*out)[10] = (val >> 28) & 0x3f;
	val = LOAD32(*in + 2);
	(*out)[10] |= (val << 4) & 0x3f;
	(*out)[11] = (val >> 2) & 0x3f;
	(*out)[12] = (val >> 8) & 0x3f;
	(*out)[13] = (val >> 14) & 0x3f;
	*in += 3, *out += 14;
}

inline void VSESIMPLE_UNPACK6_16(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x3f;
	(*out)[1] = (val >> 6) & 0x3f;
	(*out)[2] = (val >> 12) & 0x3f;
	(*out)[3] = (val >> 18) & 0x3f;
	(*out)[4] = (val >> 24) & 0x3f;
	(*out)[5] = (val >> 30) & 0x3f;
	val = LOAD32(*in + 1);
	(*out)[5] |= (val << 2) & 0x3f;
	(*out)[6] = (val >> 4) & 0x3f;
	(*out)[7] = (val >> 10) & 0x3f;
	(*out)[8] = (val >> 16) & 0x3f;
	(*out)[9] = (val >> 22) & 0x3f;
	(*out)[10] = (val >> 28) & 0x3f;
	val = LOAD32(*in + 2);
	(*out)[10] |= (val << 4) & 0x3f;
	(*out)[11] = (val >> 2) & 0x3f;
	(*out)[12] = (val >> 8) & 0x3f;
	(*out)[13] = (val >> 14) & 0x3f;
	(*out)[14] = (val >> 20) & 0x3f;
	(*out)[15] = (val >> 26) & 0x3f;
	*in += 3, *out += 16;
}

inline void VSESIMPLE_UNPACK6_32(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x3f;
	(*out)[1] = (val >> 6) & 0x3f;
	(*out)[2] = (val >> 12) & 0x3f;
	(*out)[3] = (val >> 18) & 0x3f;
	(*out)[4] = (val >> 24) & 0x3f;
	(*out)[5] = (val >> 30) & 0x3f;
	val = LOAD32(*in + 1);
	(*out)[5] |= (val << 2) & 0x3f;
	(*out)[6] = (val >> 4) & 0x3f;
	(*out)[7] = (val >> 10) & 0x3f;
	(*out)[8] = (val >> 16) & 0x3f;
	(*out)[9] = (val >> 22) & 0x3f;
	(*out)[10] = (val >> 28) & 0x3f;
	val = LOAD32(*in + 2);
	(*out)[10] |= (val << 4) & 0x3f;
	(*out)[11] = (val >> 2) & 0x3f;
	(*out)[12] = (val >> 8) & 0x3f;
	(*out)[13] = (val >> 14) & 0x3f;
	(*out)[14] = (val >> 20) & 0x3f;
	(*out)[15] = (val >> 26) & 0x3f;
	val = LOAD32(*in + 3);
	(*out)[16] = (val) & 0x3f;
	(*out)[17] = (val >> 6) & 0x3f;
	(*out)[18] = (val >> 12) & 0x3f;
	(*out)[19] = (val >> 18) & 0x3f;
	(*out)[20] = (val >> 24) & 0x3f;
	(*out)[21] = (val >> 30) & 0x3f;
	val = LOAD32(*in + 4);
	(*out)[21] |= (val << 2) & 0x3f;
	(*out)[22] = (val >> 4) & 0x3f;
	(*out)[23] = (val >> 10) & 0x3f;
	(*out)[24] = (val >> 16) & 0x3f;
	(*out)[25] = (val >> 22) & 0x3f;
	(*out)[26] = (val >> 28) & 0x3f;
	val = LOAD32(*in + 5);
	(*out)[26] |= (val << 4) & 0x3f;
	(*out)[27] = (val >> 2) & 0x3f;
	(*out)[28] = (val >> 8) & 0x3f;
	(*out)[29] = (val >> 14) & 0x3f;
	(*out)[30] = (val >> 20) & 0x3f;
	(*out)[31] = (val >> 26) & 0x3f;
	*in += 6, *out += 32;
}

inline void VSESIMPLE_UNPACK6_64(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x3f;
	(*out)[1] = (val >> 6) & 0x3f;
	(*out)[2] = (val >> 12) & 0x3f;
	(*out)[3] = (val >> 18) & 0x3f;
	(*out)[4] = (val >> 24) & 0x3f;
	(*out)[5] = (val >> 30) & 0x3f;
	val = LOAD32(*in + 1);
	(*out)[5] |= (val << 2) & 0x3f;
	(*out)[6] = (val >> 4) & 0x3f;
	(*out)[7] = (val >> 10) & 0x3f;
	(*out)[8] = (val >> 16) & 0x3f;
	(*out)[9] = (val >> 22) & 0x3f;
	(*out)[10] = (val >> 28) & 0x3f;
	val = LOAD32(*in + 2);
	(*out)[10] |= (val << 4) & 0x3f;
	(*out)[11] = (val >> 2) & 0x3f;
	(*out)[12] = (val >> 8) & 0x3f;
	(*out)[13] = (val >> 14) & 0x3f;
	(*out)[14] = (val >> 20) & 0x3f;
	(*out)[15] = (val >> 26) & 0x3f;
	val = LOAD32(*in + 3);
	(*out)[16] = (val) & 0x3f;
	(*out)[17] = (val >> 6) & 0x3f;
	(*out)[18] = (val >> 12) & 0x3f;
	(*out)[19] = (val >> 18) & 0x3f;
	(*out)[20] = (val >> 24) & 0x3f;
	(*out)[21] = (val >> 30) & 0x3f;
	val = LOAD32(*in + 4);
	(*out)[21] |= (val << 2) & 0x3f;
	(*out)[22] = (val >> 4) & 0x3f;
	(*out)[23] = (val >> 10) & 0x3f;
	(*out)[24] = (val >> 16) & 0x3f;
	(*out)[25] = (val >> 22) & 0x3f;
	(*out)[26] = (val >> 28) & 0x3f;
	val = LOAD32(*in + 5);
	(*out)[26] |= (val << 4) & 0x3f;
	(*out)[27] = (val >> 2) & 0x3f;
	(*out)[28] = (val >> 8) & 0x3f;
	(*out)[29] = (val >> 14) & 0x3f;
	(*out)[30] = (val >> 20) & 0x3f;
	(*out)[31] = (val >> 26) & 0x3f;
	val = LOAD32(*in + 6);
	(*out)[32] = (val) & 0x3f;
	(*out)[33] = (val >> 6) & 0x3f;
	(*out)[34] = (val >> 12) & 0x3f;
	(*out)[35] = (val >> 18) & 0x3f;
	(*out)[36] = (val >> 24) & 0x3f;
	(*out)[37] = (val >> 30) & 0x3f;
	val = LOAD32(*in + 7);
	(*out)[37] |= (val << 2) & 0x3f;
	(*out)[38] = (val >> 4) & 0x3f;
	(*out)[39] = (val >> 10) & 0x3f;
	(*out)[40] = (val >> 16) & 0x3f;
	(*out)[41] = (val >> 22) & 0x3f;
	(*out)[42] = (val >> 28) & 0x3f;
	val = LOAD32(*in + 8);
	(*out)[42] |= (val << 4) & 0x3f;
	(*out)[43] = (val >> 2) & 0x3f;
	(*out)[44] = (val >> 8) & 0x3f;
	(*out)[45] = (val >> 14) & 0x3f;
	(*out)[46] = (val >> 20) & 0x3f;
	(*out)[47] = (val >> 26) & 0x3f;
	val = LOAD32(*in + 9);
	(*out)[48] = (val) & 0x3f;
	(*out)[49] = (val >> 6) & 0x3f;
	(*out)[50] = (val >> 12) & 0x3f;
	(*out)[51] = (val >> 18) & 0x3f;
	(*out)[52] = (val >> 24) & 0x3f;
	(*out)[53] = (val >> 30) & 0x3f;
	val = LOAD32(*in + 10);
	(*out)[53] |= (val << 2) & 0x3f;
	(*out)[54] = (val >> 4) & 0x3f;
	(*out)[55] = (val >> 10) & 0x3f;
	(*out)[56] = (val >> 16) & 0x3f;
	(*out)[57] = (val >> 22) & 0x3f;
	(*out)[58] = (val >> 28) & 0x3f;
	val = LOAD32(*in + 11);
	(*out)[58] |= (val << 4) & 0x3f;
	(*out)[59] = (val >> 2) & 0x3f;
	(*out)[60] = (val >> 8) & 0x3f;
	(*out)[61] = (val >> 14) & 0x3f;
	(*out)[62] = (val >> 20) & 0x3f;
	(*out)[63] = (val >> 26) & 0x3f;
	*in += 12, *out += 64;
}

/* UNPACKER: 7 */
inline void VSESIMPLE_UNPACK7_1(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x7f;
	*in += 1, *out += 1;
}

inline void VSESIMPLE_UNPACK7_2(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x7f;
	(*out)[1] = (val >> 7) & 0x7f;
	*in += 1, *out += 2;
}

inline void VSESIMPLE_UNPACK7_3(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x7f;
	(*out)[1] = (val >> 7) & 0x7f;
	(*out)[2] = (val >> 14) & 0x7f;
	*in += 1, *out += 3;
}

inline void VSESIMPLE_UNPACK7_4(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x7f;
	(*out)[1] = (val >> 7) & 0x7f;
	(*out)[2] = (val >> 14) & 0x7f;
	(*out)[3] = (val >> 21) & 0x7f;
	*in += 1, *out += 4;
}

inline void VSESIMPLE_UNPACK7_5(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x7f;
	(*out)[1] = (val >> 7) & 0x7f;
	(*out)[2] = (val >> 14) & 0x7f;
	(*out)[3] = (val >> 21) & 0x7f;
	(*out)[4] = (val >> 28) & 0x7f;
	val = LOAD32(*in + 1);
	(*out)[4] |= (val << 4) & 0x7f;
	*in += 2, *out += 5;
}

inline void VSESIMPLE_UNPACK7_6(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x7f;
	(*out)[1] = (val >> 7) & 0x7f;
	(*out)[2] = (val >> 14) & 0x7f;
	(*out)[3] = (val >> 21) & 0x7f;
	(*out)[4] = (val >> 28) & 0x7f;
	val = LOAD32(*in + 1);
	(*out)[4] |= (val << 4) & 0x7f;
	(*out)[5] = (val >> 3) & 0x7f;
	*in += 2, *out += 6;
}

inline void VSESIMPLE_UNPACK7_7(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x7f;
	(*out)[1] = (val >> 7) & 0x7f;
	(*out)[2] = (val >> 14) & 0x7f;
	(*out)[3] = (val >> 21) & 0x7f;
	(*out)[4] = (val >> 28) & 0x7f;
	val = LOAD32(*in + 1);
	(*out)[4] |= (val << 4) & 0x7f;
	(*out)[5] = (val >> 3) & 0x7f;
	(*out)[6] = (val >> 10) & 0x7f;
	*in += 2, *out += 7;
}

inline void VSESIMPLE_UNPACK7_8(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x7f;
	(*out)[1] = (val >> 7) & 0x7f;
	(*out)[2] = (val >> 14) & 0x7f;
	(*out)[3] = (val >> 21) & 0x7f;
	(*out)[4] = (val >> 28) & 0x7f;
	val = LOAD32(*in + 1);
	(*out)[4] |= (val << 4) & 0x7f;
	(*out)[5] = (val >> 3) & 0x7f;
	(*out)[6] = (val >> 10) & 0x7f;
	(*out)[7] = (val >> 17) & 0x7f;
	*in += 2, *out += 8;
}

inline void VSESIMPLE_UNPACK7_9(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x7f;
	(*out)[1] = (val >> 7) & 0x7f;
	(*out)[2] = (val >> 14) & 0x7f;
	(*out)[3] = (val >> 21) & 0x7f;
	(*out)[4] = (val >> 28) & 0x7f;
	val = LOAD32(*in + 1);
	(*out)[4] |= (val << 4) & 0x7f;
	(*out)[5] = (val >> 3) & 0x7f;
	(*out)[6] = (val >> 10) & 0x7f;
	(*out)[7] = (val >> 17) & 0x7f;
	(*out)[8] = (val >> 24) & 0x7f;
	*in += 2, *out += 9;
}

inline void VSESIMPLE_UNPACK7_10(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x7f;
	(*out)[1] = (val >> 7) & 0x7f;
	(*out)[2] = (val >> 14) & 0x7f;
	(*out)[3] = (val >> 21) & 0x7f;
	(*out)[4] = (val >> 28) & 0x7f;
	val = LOAD32(*in + 1);
	(*out)[4] |= (val << 4) & 0x7f;
	(*out)[5] = (val >> 3) & 0x7f;
	(*out)[6] = (val >> 10) & 0x7f;
	(*out)[7] = (val >> 17) & 0x7f;
	(*out)[8] = (val >> 24) & 0x7f;
	(*out)[9] = (val >> 31) & 0x7f;
	val = LOAD32(*in + 2);
	(*out)[9] |= (val << 1) & 0x7f;
	*in += 3, *out += 10;
}

inline void VSESIMPLE_UNPACK7_11(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x7f;
	(*out)[1] = (val >> 7) & 0x7f;
	(*out)[2] = (val >> 14) & 0x7f;
	(*out)[3] = (val >> 21) & 0x7f;
	(*out)[4] = (val >> 28) & 0x7f;
	val = LOAD32(*in + 1);
	(*out)[4] |= (val << 4) & 0x7f;
	(*out)[5] = (val >> 3) & 0x7f;
	(*out)[6] = (val >> 10) & 0x7f;
	(*out)[7] = (val >> 17) & 0x7f;
	(*out)[8] = (val >> 24) & 0x7f;
	(*out)[9] = (val >> 31) & 0x7f;
	val = LOAD32(*in + 2);
	(*out)[9] |= (val << 1) & 0x7f;
	(*out)[10] = (val >> 6) & 0x7f;
	*in += 3, *out += 11;
}

inline void VSESIMPLE_UNPACK7_12(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x7f;
	(*out)[1] = (val >> 7) & 0x7f;
	(*out)[2] = (val >> 14) & 0x7f;
	(*out)[3] = (val >> 21) & 0x7f;
	(*out)[4] = (val >> 28) & 0x7f;
	val = LOAD32(*in + 1);
	(*out)[4] |= (val << 4) & 0x7f;
	(*out)[5] = (val >> 3) & 0x7f;
	(*out)[6] = (val >> 10) & 0x7f;
	(*out)[7] = (val >> 17) & 0x7f;
	(*out)[8] = (val >> 24) & 0x7f;
	(*out)[9] = (val >> 31) & 0x7f;
	val = LOAD32(*in + 2);
	(*out)[9] |= (val << 1) & 0x7f;
	(*out)[10] = (val >> 6) & 0x7f;
	(*out)[11] = (val >> 13) & 0x7f;
	*in += 3, *out += 12;
}

inline void VSESIMPLE_UNPACK7_14(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x7f;
	(*out)[1] = (val >> 7) & 0x7f;
	(*out)[2] = (val >> 14) & 0x7f;
	(*out)[3] = (val >> 21) & 0x7f;
	(*out)[4] = (val >> 28) & 0x7f;
	val = LOAD32(*in + 1);
	(*out)[4] |= (val << 4) & 0x7f;
	(*out)[5] = (val >> 3) & 0x7f;
	(*out)[6] = (val >> 10) & 0x7f;
	(*out)[7] = (val >> 17) & 0x7f;
	(*out)[8] = (val >> 24) & 0x7f;
	(*out)[9] = (val >> 31) & 0x7f;
	val = LOAD32(*in + 2);
	(*out)[9] |= (val << 1) & 0x7f;
	(*out)[10] = (val >> 6) & 0x7f;
	(*out)[11] = (val >> 13) & 0x7f;
	(*out)[12] = (val >> 20) & 0x7f;
	(*out)[13] = (val >> 27) & 0x7f;
	val = LOAD32(*in + 3);
	(*out)[13] |= (val << 5) & 0x7f;
	*in += 4, *out += 14;
}

inline void VSESIMPLE_UNPACK7_16(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x7f;
	(*out)[1] = (val >> 7) & 0x7f;
	(*out)[2] = (val >> 14) & 0x7f;
	(*out)[3] = (val >> 21) & 0x7f;
	(*out)[4] = (val >> 28) & 0x7f;
	val = LOAD32(*in + 1);
	(*out)[4] |= (val << 4) & 0x7f;
	(*out)[5] = (val >> 3) & 0x7f;
	(*out)[6] = (val >> 10) & 0x7f;
	(*out)[7] = (val >> 17) & 0x7f;
	(*out)[8] = (val >> 24) & 0x7f;
	(*out)[9] = (val >> 31) & 0x7f;
	val = LOAD32(*in + 2);
	(*out)[9] |= (val << 1) & 0x7f;
	(*out)[10] = (val >> 6) & 0x7f;
	(*out)[11] = (val >> 13) & 0x7f;
	(*out)[12] = (val >> 20) & 0x7f;
	(*out)[13] = (val >> 27) & 0x7f;
	val = LOAD32(*in + 3);
	(*out)[13] |= (val << 5) & 0x7f;
	(*out)[14] = (val >> 2) & 0x7f;
	(*out)[15] = (val >> 9) & 0x7f;
	*in += 4, *out += 16;
}

inline void VSESIMPLE_UNPACK7_32(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x7f;
	(*out)[1] = (val >> 7) & 0x7f;
	(*out)[2] = (val >> 14) & 0x7f;
	(*out)[3] = (val >> 21) & 0x7f;
	(*out)[4] = (val >> 28) & 0x7f;
	val = LOAD32(*in + 1);
	(*out)[4] |= (val << 4) & 0x7f;
	(*out)[5] = (val >> 3) & 0x7f;
	(*out)[6] = (val >> 10) & 0x7f;
	(*out)[7] = (val >> 17) & 0x7f;
	(*out)[8] = (val >> 24) & 0x7f;
	(*out)[9] = (val >> 31) & 0x7f;
	val = LOAD32(*in + 2);
	(*out)[9] |= (val << 1) & 0x7f;
	(*out)[10] = (val >> 6) & 0x7f;
	(*out)[11] = (val >> 13) & 0x7f;
	(*out)[12] = (val >> 20) & 0x7f;
	(*out)[13] = (val >> 27) & 0x7f;
	val = LOAD32(*in + 3);
	(*out)[13] |= (val << 5) & 0x7f;
	(*out)[14] = (val >> 2) & 0x7f;
	(*out)[15] = (val >> 9) & 0x7f;
	(*out)[16] = (val >> 16) & 0x7f;
	(*out)[17] = (val >> 23) & 0x7f;
	(*out)[18] = (val >> 30) & 0x7f;
	val = LOAD32(*in + 4);
	(*out)[18] |= (val << 2) & 0x7f;
	(*out)[19] = (val >> 5) & 0x7f;
	(*out)[20] = (val >> 12) & 0x7f;
	(*out)[21] = (val >> 19) & 0x7f;
	(*out)[22] = (val >> 26) & 0x7f;
	val = LOAD32(*in + 5);
	(*out)[22] |= (val << 6) & 0x7f;
	(*out)[23] = (val >> 1) & 0x7f;
	(*out)[24] = (val >> 8) & 0x7f;
	(*out)[25] = (val >> 15) & 0x7f;
	(*out)[26] = (val >> 22) & 0x7f;
	(*out)[27] = (val >> 29) & 0x7f;
	val = LOAD32(*in + 6);
	(*out)[27] |= (val << 3) & 0x7f;
	(*out)[28] = (val >> 4) & 0x7f;
	(*out)[29] = (val >> 11) & 0x7f;
	(*out)[30] = (val >> 18) & 0x7f;
	(*out)[31] = (val >> 25) & 0x7f;
	*in += 7, *out += 32;
}

inline void VSESIMPLE_UNPACK7_64(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x7f;
	(*out)[1] = (val >> 7) & 0x7f;
	(*out)[2] = (val >> 14) & 0x7f;
	(*out)[3] = (val >> 21) & 0x7f;
	(*out)[4] = (val >> 28) & 0x7f;
	val = LOAD32(*in + 1);
	(*out)[4] |= (val << 4) & 0x7f;
	(*out)[5] = (val >> 3) & 0x7f;
	(*out)[6] = (val >> 10) & 0x7f;
	(*out)[7] = (val >> 17) & 0x7f;
	(*out)[8] = (val >> 24) & 0x7f;
	(*out)[9] = (val >> 31) & 0x7f;
	val = LOAD32(*in + 2);
	(*out)[9] |= (val << 1) & 0x7f;
	(*out)[10] = (val >> 6) & 0x7f;
	(*out)[11] = (val >> 13) & 0x7f;
	(*out)[12] = (val >> 20) & 0x7f;
	(*out)[13] = (val >> 27) & 0x7f;
	val = LOAD32(*in + 3);
	(*out)[13] |= (val << 5) & 0x7f;
	(*out)[14] = (val >> 2) & 0x7f;
	(*out)[15] = (val >> 9) & 0x7f;
	(*out)[16] = (val >> 16) & 0x7f;
	(*out)[17] = (val >> 23) & 0x7f;
	(*out)[18] = (val >> 30) & 0x7f;
	val = LOAD32(*in + 4);
	(*out)[18] |= (val << 2) & 0x7f;
	(*out)[19] = (val >> 5) & 0x7f;
	(*out)[20] = (val >> 12) & 0x7f;
	(*out)[21] = (val >> 19) & 0x7f;
	(*out)[22] = (val >> 26) & 0x7f;
	val = LOAD32(*in + 5);
	(*out)[22] |= (val << 6) & 0x7f;
	(*out)[23] = (val >> 1) & 0x7f;
	(*out)[24] = (val >> 8) & 0x7f;
	(*out)[25] = (val >> 15) & 0x7f;
	(*out)[26] = (val >> 22) & 0x7f;
	(*out)[27] = (val >> 29) & 0x7f;
	val = LOAD32(*in + 6);
	(*out)[27] |= (val << 3) & 0x7f;
	(*out)[28] = (val >> 4) & 0x7f;
	(*out)[29] = (val >> 11) & 0x7f;
	(*out)[30] = (val >> 18) & 0x7f;
	(*out)[31] = (val >> 25) & 0x7f;
	val = LOAD32(*in + 7);
	(*out)[32] = (val) & 0x7f;
	(*out)[33] = (val >> 7) & 0x7f;
	(*out)[34] = (val >> 14) & 0x7f;
	(*out)[35] = (val >> 21) & 0x7f;
	(*out)[36] = (val >> 28) & 0x7f;
	val = LOAD32(*in + 8);
	(*out)[36] |= (val << 4) & 0x7f;
	(*out)[37] = (val >> 3) & 0x7f;
	(*out)[38] = (val >> 10) & 0x7f;
	(*out)[39] = (val >> 17) & 0x7f;
	(*out)[40] = (val >> 24) & 0x7f;
	(*out)[41] = (val >> 31) & 0x7f;
	val = LOAD32(*in + 9);
	(*out)[41] |= (val << 1) & 0x7f;
	(*out)[42] = (val >> 6) & 0x7f;
	(*out)[43] = (val >> 13) & 0x7f;
	(*out)[44] = (val >> 20) & 0x7f;
	(*out)[45] = (val >> 27) & 0x7f;
	val = LOAD32(*in + 10);
	(*out)[45] |= (val << 5) & 0x7f;
	(*out)[46] = (val >> 2) & 0x7f;
	(*out)[47] = (val >> 9) & 0x7f;
	(*out)[48] = (val >> 16) & 0x7f;
	(*out)[49] = (val >> 23) & 0x7f;
	(*out)[50] = (val >> 30) & 0x7f;
	val = LOAD32(*in + 11);
	(*out)[50] |= (val << 2) & 0x7f;
	(*out)[51] = (val >> 5) & 0x7f;
	(*out)[52] = (val >> 12) & 0x7f;
	(*out)[53] = (val >> 19) & 0x7f;
	(*out)[54] = (val >> 26) & 0x7f;
	val = LOAD32(*in + 12);
	(*out)[54] |= (val << 6) & 0x7f;
	(*out)[55] = (val >> 1) & 0x7f;
	(*out)[56] = (val >> 8) & 0x7f;
	(*out)[57] = (val >> 15) & 0x7f;
	(*out)[58] = (val >> 22) & 0x7f;
	(*out)[59] = (val >> 29) & 0x7f;
	val = LOAD32(*in + 13);
	(*out)[59] |= (val << 3) & 0x7f;
	(*out)[60] = (val >> 4) & 0x7f;
	(*out)[61] = (val >> 11) & 0x7f;
	(*out)[62] = (val >> 18) & 0x7f;
	(*out)[63] = (val >> 25) & 0x7f;
	*in += 14, *out += 64;
}

/* UNPACKER: 8 */
inline void VSESIMPLE_UNPACK8_1(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xff;
	*in += 1, *out += 1;
}

inline void VSESIMPLE_UNPACK8_2(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xff;
	(*out)[1] = (val >> 8) & 0xff;
	*in += 1, *out += 2;
}

inline void VSESIMPLE_UNPACK8_3(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xff;
	(*out)[1] = (val >> 8) & 0xff;
	(*out)[2] = (val >> 16) & 0xff;
	*in += 1, *out += 3;
}

inline void VSESIMPLE_UNPACK8_4(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xff;
	(*out)[1] = (val >> 8) & 0xff;
	(*out)[2] = (val >> 16) & 0xff;
	(*out)[3] = (val >> 24) & 0xff;
	*in += 1, *out += 4;
}

inline void VSESIMPLE_UNPACK8_5(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xff;
	(*out)[1] = (val >> 8) & 0xff;
	(*out)[2] = (val >> 16) & 0xff;
	(*out)[3] = (val >> 24) & 0xff;
	val = LOAD32(*in + 1);
	(*out)[4] = (val) & 0xff;
	*in += 2, *out += 5;
}

inline void VSESIMPLE_UNPACK8_6(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xff;
	(*out)[1] = (val >> 8) & 0xff;
	(*out)[2] = (val >> 16) & 0xff;
	(*out)[3] = (val >> 24) & 0xff;
	val = LOAD32(*in + 1);
	(*out)[4] = (val) & 0xff;
	(*out)[5] = (val >> 8) & 0xff;
	*in += 2, *out += 6;
}

inline void VSESIMPLE_UNPACK8_7(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xff;
	(*out)[1] = (val >> 8) & 0xff;
	(*out)[2] = (val >> 16) & 0xff;
	(*out)[3] = (val >> 24) & 0xff;
	val = LOAD32(*in + 1);
	(*out)[4] = (val) & 0xff;
	(*out)[5] = (val >> 8) & 0xff;
	(*out)[6] = (val >> 16) & 0xff;
	*in += 2, *out += 7;
}

inline void VSESIMPLE_UNPACK8_8(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xff;
	(*out)[1] = (val >> 8) & 0xff;
	(*out)[2] = (val >> 16) & 0xff;
	(*out)[3] = (val >> 24) & 0xff;
	val = LOAD32(*in + 1);
	(*out)[4] = (val) & 0xff;
	(*out)[5] = (val >> 8) & 0xff;
	(*out)[6] = (val >> 16) & 0xff;
	(*out)[7] = (val >> 24) & 0xff;
	*in += 2, *out += 8;
}

inline void VSESIMPLE_UNPACK8_9(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xff;
	(*out)[1] = (val >> 8) & 0xff;
	(*out)[2] = (val >> 16) & 0xff;
	(*out)[3] = (val >> 24) & 0xff;
	val = LOAD32(*in + 1);
	(*out)[4] = (val) & 0xff;
	(*out)[5] = (val >> 8) & 0xff;
	(*out)[6] = (val >> 16) & 0xff;
	(*out)[7] = (val >> 24) & 0xff;
	val = LOAD32(*in + 2);
	(*out)[8] = (val) & 0xff;
	*in += 3, *out += 9;
}

inline void VSESIMPLE_UNPACK8_10(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xff;
	(*out)[1] = (val >> 8) & 0xff;
	(*out)[2] = (val >> 16) & 0xff;
	(*out)[3] = (val >> 24) & 0xff;
	val = LOAD32(*in + 1);
	(*out)[4] = (val) & 0xff;
	(*out)[5] = (val >> 8) & 0xff;
	(*out)[6] = (val >> 16) & 0xff;
	(*out)[7] = (val >> 24) & 0xff;
	val = LOAD32(*in + 2);
	(*out)[8] = (val) & 0xff;
	(*out)[9] = (val >> 8) & 0xff;
	*in += 3, *out += 10;
}

inline void VSESIMPLE_UNPACK8_11(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xff;
	(*out)[1] = (val >> 8) & 0xff;
	(*out)[2] = (val >> 16) & 0xff;
	(*out)[3] = (val >> 24) & 0xff;
	val = LOAD32(*in + 1);
	(*out)[4] = (val) & 0xff;
	(*out)[5] = (val >> 8) & 0xff;
	(*out)[6] = (val >> 16) & 0xff;
	(*out)[7] = (val >> 24) & 0xff;
	val = LOAD32(*in + 2);
	(*out)[8] = (val) & 0xff;
	(*out)[9] = (val >> 8) & 0xff;
	(*out)[10] = (val >> 16) & 0xff;
	*in += 3, *out += 11;
}

inline void VSESIMPLE_UNPACK8_12(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xff;
	(*out)[1] = (val >> 8) & 0xff;
	(*out)[2] = (val >> 16) & 0xff;
	(*out)[3] = (val >> 24) & 0xff;
	val = LOAD32(*in + 1);
	(*out)[4] = (val) & 0xff;
	(*out)[5] = (val >> 8) & 0xff;
	(*out)[6] = (val >> 16) & 0xff;
	(*out)[7] = (val >> 24) & 0xff;
	val = LOAD32(*in + 2);
	(*out)[8] = (val) & 0xff;
	(*out)[9] = (val >> 8) & 0xff;
	(*out)[10] = (val >> 16) & 0xff;
	(*out)[11] = (val >> 24) & 0xff;
	*in += 3, *out += 12;
}

inline void VSESIMPLE_UNPACK8_14(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xff;
	(*out)[1] = (val >> 8) & 0xff;
	(*out)[2] = (val >> 16) & 0xff;
	(*out)[3] = (val >> 24) & 0xff;
	val = LOAD32(*in + 1);
	(*out)[4] = (val) & 0xff;
	(*out)[5] = (val >> 8) & 0xff;
	(*out)[6] = (val >> 16) & 0xff;
	(*out)[7] = (val >> 24) & 0xff;
	val = LOAD32(*in + 2);
	(*out)[8] = (val) & 0xff;
	(*out)[9] = (val >> 8) & 0xff;
	(*out)[10] = (val >> 16) & 0xff;
	(*out)[11] = (val >> 24) & 0xff;
	val = LOAD32(*in + 3);
	(*out)[12] = (val) & 0xff;
	(*out)[13] = (val >> 8) & 0xff;
	*in += 4, *out += 14;
}

inline void VSESIMPLE_UNPACK8_16(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xff;
	(*out)[1] = (val >> 8) & 0xff;
	(*out)[2] = (val >> 16) & 0xff;
	(*out)[3] = (val >> 24) & 0xff;
	val = LOAD32(*in + 1);
	(*out)[4] = (val) & 0xff;
	(*out)[5] = (val >> 8) & 0xff;
	(*out)[6] = (val >> 16) & 0xff;
	(*out)[7] = (val >> 24) & 0xff;
	val = LOAD32(*in + 2);
	(*out)[8] = (val) & 0xff;
	(*out)[9] = (val >> 8) & 0xff;
	(*out)[10] = (val >> 16) & 0xff;
	(*out)[11] = (val >> 24) & 0xff;
	val = LOAD32(*in + 3);
	(*out)[12] = (val) & 0xff;
	(*out)[13] = (val >> 8) & 0xff;
	(*out)[14] = (val >> 16) & 0xff;
	(*out)[15] = (val >> 24) & 0xff;
	*in += 4, *out += 16;
}

inline void VSESIMPLE_UNPACK8_32(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xff;
	(*out)[1] = (val >> 8) & 0xff;
	(*out)[2] = (val >> 16) & 0xff;
	(*out)[3] = (val >> 24) & 0xff;
	val = LOAD32(*in + 1);
	(*out)[4] = (val) & 0xff;
	(*out)[5] = (val >> 8) & 0xff;
	(*out)[6] = (val >> 16) & 0xff;
	(*out)[7] = (val >> 24) & 0xff;
	val = LOAD32(*in + 2);
	(*out)[8] = (val) & 0xff;
	(*out)[9] = (val >> 8) & 0xff;
	(*out)[10] = (val >> 16) & 0xff;
	(*out)[11] = (val >> 24) & 0xff;
	val = LOAD32(*in + 3);
	(*out)[12] = (val) & 0xff;
	(*out)[13] = (val >> 8) & 0xff;
	(*out)[14] = (val >> 16) & 0xff;
	(*out)[15] = (val >> 24) & 0xff;
	val = LOAD32(*in + 4);
	(*out)[16] = (val) & 0xff;
	(*out)[17] = (val >> 8) & 0xff;
	(*out)[18] = (val >> 16) & 0xff;
	(*out)[19] = (val >> 24) & 0xff;
	val = LOAD32(*in + 5);
	(*out)[20] = (val) & 0xff;
	(*out)[21] = (val >> 8) & 0xff;
	(*out)[22] = (val >> 16) & 0xff;
	(*out)[23] = (val >> 24) & 0xff;
	val = LOAD32(*in + 6);
	(*out)[24] = (val) & 0xff;
	(*out)[25] = (val >> 8) & 0xff;
	(*out)[26] = (val >> 16) & 0xff;
	(*out)[27] = (val >> 24) & 0xff;
	val = LOAD32(*in + 7);
	(*out)[28] = (val) & 0xff;
	(*out)[29] = (val >> 8) & 0xff;
	(*out)[30] = (val >> 16) & 0xff;
	(*out)[31] = (val >> 24) & 0xff;
	*in += 8, *out += 32;
}

inline void VSESIMPLE_UNPACK8_64(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xff;
	(*out)[1] = (val >> 8) & 0xff;
	(*out)[2] = (val >> 16) & 0xff;
	(*out)[3] = (val >> 24) & 0xff;
	val = LOAD32(*in + 1);
	(*out)[4] = (val) & 0xff;
	(*out)[5] = (val >> 8) & 0xff;
	(*out)[6] = (val >> 16) & 0xff;
	(*out)[7] = (val >> 24) & 0xff;
	val = LOAD32(*in + 2);
	(*out)[8] = (val) & 0xff;
	(*out)[9] = (val >> 8) & 0xff;
	(*out)[10] = (val >> 16) & 0xff;
	(*out)[11] = (val >> 24) & 0xff;
	val = LOAD32(*in + 3);
	(*out)[12] = (val) & 0xff;
	(*out)[13] = (val >> 8) & 0xff;
	(*out)[14] = (val >> 16) & 0xff;
	(*out)[15] = (val >> 24) & 0xff;
	val = LOAD32(*in + 4);
	(*out)[16] = (val) & 0xff;
	(*out)[17] = (val >> 8) & 0xff;
	(*out)[18] = (val >> 16) & 0xff;
	(*out)[19] = (val >> 24) & 0xff;
	val = LOAD32(*in + 5);
	(*out)[20] = (val) & 0xff;
	(*out)[21] = (val >> 8) & 0xff;
	(*out)[22] = (val >> 16) & 0xff;
	(*out)[23] = (val >> 24) & 0xff;
	val = LOAD32(*in + 6);
	(*out)[24] = (val) & 0xff;
	(*out)[25] = (val >> 8) & 0xff;
	(*out)[26] = (val >> 16) & 0xff;
	(*out)[27] = (val >> 24) & 0xff;
	val = LOAD32(*in + 7);
	(*out)[28] = (val) & 0xff;
	(*out)[29] = (val >> 8) & 0xff;
	(*out)[30] = (val >> 16) & 0xff;
	(*out)[31] = (val >> 24) & 0xff;
	val = LOAD32(*in + 8);
	(*out)[32] = (val) & 0xff;
	(*out)[33] = (val >> 8) & 0xff;
	(*out)[34] = (val >> 16) & 0xff;
	(*out)[35] = (val >> 24) & 0xff;
	val = LOAD32(*in + 9);
	(*out)[36] = (val) & 0xff;
	(*out)[37] = (val >> 8) & 0xff;
	(*out)[38] = (val >> 16) & 0xff;
	(*out)[39] = (val >> 24) & 0xff;
	val = LOAD32(*in + 10);
	(*out)[40] = (val) & 0xff;
	(*out)[41] = (val >> 8) & 0xff;
	(*out)[42] = (val >> 16) & 0xff;
	(*out)[43] = (val >> 24) & 0xff;
	val = LOAD32(*in + 11);
	(*out)[44] = (val) & 0xff;
	(*out)[45] = (val >> 8) & 0xff;
	(*out)[46] = (val >> 16) & 0xff;
	(*out)[47] = (val >> 24) & 0xff;
	val = LOAD32(*in + 12);
	(*out)[48] = (val) & 0xff;
	(*out)[49] = (val >> 8) & 0xff;
	(*out)[50] = (val >> 16) & 0xff;
	(*out)[51] = (val >> 24) & 0xff;
	val = LOAD32(*in + 13);
	(*out)[52] = (val) & 0xff;
	(*out)[53] = (val >> 8) & 0xff;
	(*out)[54] = (val >> 16) & 0xff;
	(*out)[55] = (val >> 24) & 0xff;
	val = LOAD32(*in + 14);
	(*out)[56] = (val) & 0xff;
	(*out)[57] = (val >> 8) & 0xff;
	(*out)[58] = (val >> 16) & 0xff;
	(*out)[59] = (val >> 24) & 0xff;
	val = LOAD32(*in + 15);
	(*out)[60] = (val) & 0xff;
	(*out)[61] = (val >> 8) & 0xff;
	(*out)[62] = (val >> 16) & 0xff;
	(*out)[63] = (val >> 24) & 0xff;
	*in += 16, *out += 64;
}

/* UNPACKER: 9 */
inline void VSESIMPLE_UNPACK9_1(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x1ff;
	*in += 1, *out += 1;
}

inline void VSESIMPLE_UNPACK9_2(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x1ff;
	(*out)[1] = (val >> 9) & 0x1ff;
	*in += 1, *out += 2;
}

inline void VSESIMPLE_UNPACK9_3(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x1ff;
	(*out)[1] = (val >> 9) & 0x1ff;
	(*out)[2] = (val >> 18) & 0x1ff;
	*in += 1, *out += 3;
}

inline void VSESIMPLE_UNPACK9_4(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x1ff;
	(*out)[1] = (val >> 9) & 0x1ff;
	(*out)[2] = (val >> 18) & 0x1ff;
	(*out)[3] = (val >> 27) & 0x1ff;
	val = LOAD32(*in + 1);
	(*out)[3] |= (val << 5) & 0x1ff;
	*in += 2, *out += 4;
}

inline void VSESIMPLE_UNPACK9_5(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x1ff;
	(*out)[1] = (val >> 9) & 0x1ff;
	(*out)[2] = (val >> 18) & 0x1ff;
	(*out)[3] = (val >> 27) & 0x1ff;
	val = LOAD32(*in + 1);
	(*out)[3] |= (val << 5) & 0x1ff;
	(*out)[4] = (val >> 4) & 0x1ff;
	*in += 2, *out += 5;
}

inline void VSESIMPLE_UNPACK9_6(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x1ff;
	(*out)[1] = (val >> 9) & 0x1ff;
	(*out)[2] = (val >> 18) & 0x1ff;
	(*out)[3] = (val >> 27) & 0x1ff;
	val = LOAD32(*in + 1);
	(*out)[3] |= (val << 5) & 0x1ff;
	(*out)[4] = (val >> 4) & 0x1ff;
	(*out)[5] = (val >> 13) & 0x1ff;
	*in += 2, *out += 6;
}

inline void VSESIMPLE_UNPACK9_7(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x1ff;
	(*out)[1] = (val >> 9) & 0x1ff;
	(*out)[2] = (val >> 18) & 0x1ff;
	(*out)[3] = (val >> 27) & 0x1ff;
	val = LOAD32(*in + 1);
	(*out)[3] |= (val << 5) & 0x1ff;
	(*out)[4] = (val >> 4) & 0x1ff;
	(*out)[5] = (val >> 13) & 0x1ff;
	(*out)[6] = (val >> 22) & 0x1ff;
	*in += 2, *out += 7;
}

inline void VSESIMPLE_UNPACK9_8(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x1ff;
	(*out)[1] = (val >> 9) & 0x1ff;
	(*out)[2] = (val >> 18) & 0x1ff;
	(*out)[3] = (val >> 27) & 0x1ff;
	val = LOAD32(*in + 1);
	(*out)[3] |= (val << 5) & 0x1ff;
	(*out)[4] = (val >> 4) & 0x1ff;
	(*out)[5] = (val >> 13) & 0x1ff;
	(*out)[6] = (val >> 22) & 0x1ff;
	(*out)[7] = (val >> 31) & 0x1ff;
	val = LOAD32(*in + 2);
	(*out)[7] |= (val << 1) & 0x1ff;
	*in += 3, *out += 8;
}

inline void VSESIMPLE_UNPACK9_9(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x1ff;
	(*out)[1] = (val >> 9) & 0x1ff;
	(*out)[2] = (val >> 18) & 0x1ff;
	(*out)[3] = (val >> 27) & 0x1ff;
	val = LOAD32(*in + 1);
	(*out)[3] |= (val << 5) & 0x1ff;
	(*out)[4] = (val >> 4) & 0x1ff;
	(*out)[5] = (val >> 13) & 0x1ff;
	(*out)[6] = (val >> 22) & 0x1ff;
	(*out)[7] = (val >> 31) & 0x1ff;
	val = LOAD32(*in + 2);
	(*out)[7] |= (val << 1) & 0x1ff;
	(*out)[8] = (val >> 8) & 0x1ff;
	*in += 3, *out += 9;
}

inline void VSESIMPLE_UNPACK9_10(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x1ff;
	(*out)[1] = (val >> 9) & 0x1ff;
	(*out)[2] = (val >> 18) & 0x1ff;
	(*out)[3] = (val >> 27) & 0x1ff;
	val = LOAD32(*in + 1);
	(*out)[3] |= (val << 5) & 0x1ff;
	(*out)[4] = (val >> 4) & 0x1ff;
	(*out)[5] = (val >> 13) & 0x1ff;
	(*out)[6] = (val >> 22) & 0x1ff;
	(*out)[7] = (val >> 31) & 0x1ff;
	val = LOAD32(*in + 2);
	(*out)[7] |= (val << 1) & 0x1ff;
	(*out)[8] = (val >> 8) & 0x1ff;
	(*out)[9] = (val >> 17) & 0x1ff;
	*in += 3, *out += 10;
}

inline void VSESIMPLE_UNPACK9_11(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x1ff;
	(*out)[1] = (val >> 9) & 0x1ff;
	(*out)[2] = (val >> 18) & 0x1ff;
	(*out)[3] = (val >> 27) & 0x1ff;
	val = LOAD32(*in + 1);
	(*out)[3] |= (val << 5) & 0x1ff;
	(*out)[4] = (val >> 4) & 0x1ff;
	(*out)[5] = (val >> 13) & 0x1ff;
	(*out)[6] = (val >> 22) & 0x1ff;
	(*out)[7] = (val >> 31) & 0x1ff;
	val = LOAD32(*in + 2);
	(*out)[7] |= (val << 1) & 0x1ff;
	(*out)[8] = (val >> 8) & 0x1ff;
	(*out)[9] = (val >> 17) & 0x1ff;
	(*out)[10] = (val >> 26) & 0x1ff;
	val = LOAD32(*in + 3);
	(*out)[10] |= (val << 6) & 0x1ff;
	*in += 4, *out += 11;
}

inline void VSESIMPLE_UNPACK9_12(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x1ff;
	(*out)[1] = (val >> 9) & 0x1ff;
	(*out)[2] = (val >> 18) & 0x1ff;
	(*out)[3] = (val >> 27) & 0x1ff;
	val = LOAD32(*in + 1);
	(*out)[3] |= (val << 5) & 0x1ff;
	(*out)[4] = (val >> 4) & 0x1ff;
	(*out)[5] = (val >> 13) & 0x1ff;
	(*out)[6] = (val >> 22) & 0x1ff;
	(*out)[7] = (val >> 31) & 0x1ff;
	val = LOAD32(*in + 2);
	(*out)[7] |= (val << 1) & 0x1ff;
	(*out)[8] = (val >> 8) & 0x1ff;
	(*out)[9] = (val >> 17) & 0x1ff;
	(*out)[10] = (val >> 26) & 0x1ff;
	val = LOAD32(*in + 3);
	(*out)[10] |= (val << 6) & 0x1ff;
	(*out)[11] = (val >> 3) & 0x1ff;
	*in += 4, *out += 12;
}

inline void VSESIMPLE_UNPACK9_14(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x1ff;
	(*out)[1] = (val >> 9) & 0x1ff;
	(*out)[2] = (val >> 18) & 0x1ff;
	(*out)[3] = (val >> 27) & 0x1ff;
	val = LOAD32(*in + 1);
	(*out)[3] |= (val << 5) & 0x1ff;
	(*out)[4] = (val >> 4) & 0x1ff;
	(*out)[5] = (val >> 13) & 0x1ff;
	(*out)[6] = (val >> 22) & 0x1ff;
	(*out)[7] = (val >> 31) & 0x1ff;
	val = LOAD32(*in + 2);
	(*out)[7] |= (val << 1) & 0x1ff;
	(*out)[8] = (val >> 8) & 0x1ff;
	(*out)[9] = (val >> 17) & 0x1ff;
	(*out)[10] = (val >> 26) & 0x1ff;
	val = LOAD32(*in + 3);
	(*out)[10] |= (val << 6) & 0x1ff;
	(*out)[11] = (val >> 3) & 0x1ff;
	(*out)[12] = (val >> 12) & 0x1ff;
	(*out)[13] = (val >> 21) & 0x1ff;
	*in += 4, *out += 14;
}

inline void VSESIMPLE_UNPACK9_16(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x1ff;
	(*out)[1] = (val >> 9) & 0x1ff;
	(*out)[2] = (val >> 18) & 0x1ff;
	(*out)[3] = (val >> 27) & 0x1ff;
	val = LOAD32(*in + 1);
	(*out)[3] |= (val << 5) & 0x1ff;
	(*out)[4] = (val >> 4) & 0x1ff;
	(*out)[5] = (val >> 13) & 0x1ff;
	(*out)[6] = (val >> 22) & 0x1ff;
	(*out)[7] = (val >> 31) & 0x1ff;
	val = LOAD32(*in + 2);
	(*out)[7] |= (val << 1) & 0x1ff;
	(*out)[8] = (val >> 8) & 0x1ff;
	(*out)[9] = (val >> 17) & 0x1ff;
	(*out)[10] = (val >> 26) & 0x1ff;
	val = LOAD32(*in + 3);
	(*out)[10] |= (val << 6) & 0x1ff;
	(*out)[11] = (val >> 3) & 0x1ff;
	(*out)[12] = (val >> 12) & 0x1ff;
	(*out)[13] = (val >> 21) & 0x1ff;
	(*out)[14] = (val >> 30) & 0x1ff;
	val = LOAD32(*in + 4);
	(*out)[14] |= (val << 2) & 0x1ff;
	(*out)[15] = (val >> 7) & 0x1ff;
	*in += 5, *out += 16;
}

inline void VSESIMPLE_UNPACK9_32(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x1ff;
	(*out)[1] = (val >> 9) & 0x1ff;
	(*out)[2] = (val >> 18) & 0x1ff;
	(*out)[3] = (val >> 27) & 0x1ff;
	val = LOAD32(*in + 1);
	(*out)[3] |= (val << 5) & 0x1ff;
	(*out)[4] = (val >> 4) & 0x1ff;
	(*out)[5] = (val >> 13) & 0x1ff;
	(*out)[6] = (val >> 22) & 0x1ff;
	(*out)[7] = (val >> 31) & 0x1ff;
	val = LOAD32(*in + 2);
	(*out)[7] |= (val << 1) & 0x1ff;
	(*out)[8] = (val >> 8) & 0x1ff;
	(*out)[9] = (val >> 17) & 0x1ff;
	(*out)[10] = (val >> 26) & 0x1ff;
	val = LOAD32(*in + 3);
	(*out)[10] |= (val << 6) & 0x1ff;
	(*out)[11] = (val >> 3) & 0x1ff;
	(*out)[12] = (val >> 12) & 0x1ff;
	(*out)[13] = (val >> 21) & 0x1ff;
	(*out)[14] = (val >> 30) & 0x1ff;
	val = LOAD32(*in + 4);
	(*out)[14] |= (val << 2) & 0x1ff;
	(*out)[15] = (val >> 7) & 0x1ff;
	(*out)[16] = (val >> 16) & 0x1ff;
	(*out)[17] = (val >> 25) & 0x1ff;
	val = LOAD32(*in + 5);
	(*out)[17] |= (val << 7) & 0x1ff;
	(*out)[18] = (val >> 2) & 0x1ff;
	(*out)[19] = (val >> 11) & 0x1ff;
	(*out)[20] = (val >> 20) & 0x1ff;
	(*out)[21] = (val >> 29) & 0x1ff;
	val = LOAD32(*in + 6);
	(*out)[21] |= (val << 3) & 0x1ff;
	(*out)[22] = (val >> 6) & 0x1ff;
	(*out)[23] = (val >> 15) & 0x1ff;
	(*out)[24] = (val >> 24) & 0x1ff;
	val = LOAD32(*in + 7);
	(*out)[24] |= (val << 8) & 0x1ff;
	(*out)[25] = (val >> 1) & 0x1ff;
	(*out)[26] = (val >> 10) & 0x1ff;
	(*out)[27] = (val >> 19) & 0x1ff;
	(*out)[28] = (val >> 28) & 0x1ff;
	val = LOAD32(*in + 8);
	(*out)[28] |= (val << 4) & 0x1ff;
	(*out)[29] = (val >> 5) & 0x1ff;
	(*out)[30] = (val >> 14) & 0x1ff;
	(*out)[31] = (val >> 23) & 0x1ff;
	*in += 9, *out += 32;
}

inline void VSESIMPLE_UNPACK9_64(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x1ff;
	(*out)[1] = (val >> 9) & 0x1ff;
	(*out)[2] = (val >> 18) & 0x1ff;
	(*out)[3] = (val >> 27) & 0x1ff;
	val = LOAD32(*in + 1);
	(*out)[3] |= (val << 5) & 0x1ff;
	(*out)[4] = (val >> 4) & 0x1ff;
	(*out)[5] = (val >> 13) & 0x1ff;
	(*out)[6] = (val >> 22) & 0x1ff;
	(*out)[7] = (val >> 31) & 0x1ff;
	val = LOAD32(*in + 2);
	(*out)[7] |= (val << 1) & 0x1ff;
	(*out)[8] = (val >> 8) & 0x1ff;
	(*out)[9] = (val >> 17) & 0x1ff;
	(*out)[10] = (val >> 26) & 0x1ff;
	val = LOAD32(*in + 3);
	(*out)[10] |= (val << 6) & 0x1ff;
	(*out)[11] = (val >> 3) & 0x1ff;
	(*out)[12] = (val >> 12) & 0x1ff;
	(*out)[13] = (val >> 21) & 0x1ff;
	(*out)[14] = (val >> 30) & 0x1ff;
	val = LOAD32(*in + 4);
	(*out)[14] |= (val << 2) & 0x1ff;
	(*out)[15] = (val >> 7) & 0x1ff;
	(*out)[16] = (val >> 16) & 0x1ff;
	(*out)[17] = (val >> 25) & 0x1ff;
	val = LOAD32(*in + 5);
	(*out)[17] |= (val << 7) & 0x1ff;
	(*out)[18] = (val >> 2) & 0x1ff;
	(*out)[19] = (val >> 11) & 0x1ff;
	(*out)[20] = (val >> 20) & 0x1ff;
	(*out)[21] = (val >> 29) & 0x1ff;
	val = LOAD32(*in + 6);
	(*out)[21] |= (val << 3) & 0x1ff;
	(*out)[22] = (val >> 6) & 0x1ff;
	(*out)[23] = (val >> 15) & 0x1ff;
	(*out)[24] = (val >> 24) & 0x1ff;
	val = LOAD32(*in + 7);
	(*out)[24] |= (val << 8) & 0x1ff;
	(*out)[25] = (val >> 1) & 0x1ff;
	(*out)[26] = (val >> 10) & 0x1ff;
	(*out)[27] = (val >> 19) & 0x1ff;
	(*out)[28] = (val >> 28) & 0x1ff;
	val = LOAD32(*in + 8);
	(*out)[28] |= (val << 4) & 0x1ff;
	(*out)[29] = (val >> 5) & 0x1ff;
	(*out)[30] = (val >> 14) & 0x1ff;
	(*out)[31] = (val >> 23) & 0x1ff;
	val = LOAD32(*in + 9);
	(*out)[32] = (val) & 0x1ff;
	(*out)[33] = (val >> 9) & 0x1ff;
	(*out)[34] = (val >> 18) & 0x1ff;
	(*out)[35] = (val >> 27) & 0x1ff;
	val = LOAD32(*in + 10);
	(*out)[35] |= (val << 5) & 0x1ff;
	(*out)[36] = (val >> 4) & 0x1ff;
	(*out)[37] = (val >> 13) & 0x1ff;
	(*out)[38] = (val >> 22) & 0x1ff;
	(*out)[39] = (val >> 31) & 0x1ff;
	val = LOAD32(*in + 11);
	(*out)[39] |= (val << 1) & 0x1ff;
	(*out)[40] = (val >> 8) & 0x1ff;
	(*out)[41] = (val >> 17) & 0x1ff;
	(*out)[42] = (val >> 26) & 0x1ff;
	val = LOAD32(*in + 12);
	(*out)[42] |= (val << 6) & 0x1ff;
	(*out)[43] = (val >> 3) & 0x1ff;
	(*out)[44] = (val >> 12) & 0x1ff;
	(*out)[45] = (val >> 21) & 0x1ff;
	(*out)[46] = (val >> 30) & 0x1ff;
	val = LOAD32(*in + 13);
	(*out)[46] |= (val << 2) & 0x1ff;
	(*out)[47] = (val >> 7) & 0x1ff;
	(*out)[48] = (val >> 16) & 0x1ff;
	(*out)[49] = (val >> 25) & 0x1ff;
	val = LOAD32(*in + 14);
	(*out)[49] |= (val << 7) & 0x1ff;
	(*out)[50] = (val >> 2) & 0x1ff;
	(*out)[51] = (val >> 11) & 0x1ff;
	(*out)[52] = (val >> 20) & 0x1ff;
	(*out)[53] = (val >> 29) & 0x1ff;
	val = LOAD32(*in + 15);
	(*out)[53] |= (val << 3) & 0x1ff;
	(*out)[54] = (val >> 6) & 0x1ff;
	(*out)[55] = (val >> 15) & 0x1ff;
	(*out)[56] = (val >> 24) & 0x1ff;
	val = LOAD32(*in + 16);
	(*out)[56] |= (val << 8) & 0x1ff;
	(*out)[57] = (val >> 1) & 0x1ff;
	(*out)[58] = (val >> 10) & 0x1ff;
	(*out)[59] = (val >> 19) & 0x1ff;
	(*out)[60] = (val >> 28) & 0x1ff;
	val = LOAD32(*in + 17);
	(*out)[60] |= (val << 4) & 0x1ff;
	(*out)[61] = (val >> 5) & 0x1ff;
	(*out)[62] = (val >> 14) & 0x1ff;
	(*out)[63] = (val >> 23) & 0x1ff;
	*in += 18, *out += 64;
}

/* UNPACKER: 10 */
inline void VSESIMPLE_UNPACK10_1(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x3ff;
	*in += 1, *out += 1;
}

inline void VSESIMPLE_UNPACK10_2(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x3ff;
	(*out)[1] = (val >> 10) & 0x3ff;
	*in += 1, *out += 2;
}

inline void VSESIMPLE_UNPACK10_3(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x3ff;
	(*out)[1] = (val >> 10) & 0x3ff;
	(*out)[2] = (val >> 20) & 0x3ff;
	*in += 1, *out += 3;
}

inline void VSESIMPLE_UNPACK10_4(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x3ff;
	(*out)[1] = (val >> 10) & 0x3ff;
	(*out)[2] = (val >> 20) & 0x3ff;
	(*out)[3] = (val >> 30) & 0x3ff;
	val = LOAD32(*in + 1);
	(*out)[3] |= (val << 2) & 0x3ff;
	*in += 2, *out += 4;
}

inline void VSESIMPLE_UNPACK10_5(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x3ff;
	(*out)[1] = (val >> 10) & 0x3ff;
	(*out)[2] = (val >> 20) & 0x3ff;
	(*out)[3] = (val >> 30) & 0x3ff;
	val = LOAD32(*in + 1);
	(*out)[3] |= (val << 2) & 0x3ff;
	(*out)[4] = (val >> 8) & 0x3ff;
	*in += 2, *out += 5;
}

inline void VSESIMPLE_UNPACK10_6(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x3ff;
	(*out)[1] = (val >> 10) & 0x3ff;
	(*out)[2] = (val >> 20) & 0x3ff;
	(*out)[3] = (val >> 30) & 0x3ff;
	val = LOAD32(*in + 1);
	(*out)[3] |= (val << 2) & 0x3ff;
	(*out)[4] = (val >> 8) & 0x3ff;
	(*out)[5] = (val >> 18) & 0x3ff;
	*in += 2, *out += 6;
}

inline void VSESIMPLE_UNPACK10_7(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x3ff;
	(*out)[1] = (val >> 10) & 0x3ff;
	(*out)[2] = (val >> 20) & 0x3ff;
	(*out)[3] = (val >> 30) & 0x3ff;
	val = LOAD32(*in + 1);
	(*out)[3] |= (val << 2) & 0x3ff;
	(*out)[4] = (val >> 8) & 0x3ff;
	(*out)[5] = (val >> 18) & 0x3ff;
	(*out)[6] = (val >> 28) & 0x3ff;
	val = LOAD32(*in + 2);
	(*out)[6] |= (val << 4) & 0x3ff;
	*in += 3, *out += 7;
}

inline void VSESIMPLE_UNPACK10_8(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x3ff;
	(*out)[1] = (val >> 10) & 0x3ff;
	(*out)[2] = (val >> 20) & 0x3ff;
	(*out)[3] = (val >> 30) & 0x3ff;
	val = LOAD32(*in + 1);
	(*out)[3] |= (val << 2) & 0x3ff;
	(*out)[4] = (val >> 8) & 0x3ff;
	(*out)[5] = (val >> 18) & 0x3ff;
	(*out)[6] = (val >> 28) & 0x3ff;
	val = LOAD32(*in + 2);
	(*out)[6] |= (val << 4) & 0x3ff;
	(*out)[7] = (val >> 6) & 0x3ff;
	*in += 3, *out += 8;
}

inline void VSESIMPLE_UNPACK10_9(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x3ff;
	(*out)[1] = (val >> 10) & 0x3ff;
	(*out)[2] = (val >> 20) & 0x3ff;
	(*out)[3] = (val >> 30) & 0x3ff;
	val = LOAD32(*in + 1);
	(*out)[3] |= (val << 2) & 0x3ff;
	(*out)[4] = (val >> 8) & 0x3ff;
	(*out)[5] = (val >> 18) & 0x3ff;
	(*out)[6] = (val >> 28) & 0x3ff;
	val = LOAD32(*in + 2);
	(*out)[6] |= (val << 4) & 0x3ff;
	(*out)[7] = (val >> 6) & 0x3ff;
	(*out)[8] = (val >> 16) & 0x3ff;
	*in += 3, *out += 9;
}

inline void VSESIMPLE_UNPACK10_10(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x3ff;
	(*out)[1] = (val >> 10) & 0x3ff;
	(*out)[2] = (val >> 20) & 0x3ff;
	(*out)[3] = (val >> 30) & 0x3ff;
	val = LOAD32(*in + 1);
	(*out)[3] |= (val << 2) & 0x3ff;
	(*out)[4] = (val >> 8) & 0x3ff;
	(*out)[5] = (val >> 18) & 0x3ff;
	(*out)[6] = (val >> 28) & 0x3ff;
	val = LOAD32(*in + 2);
	(*out)[6] |= (val << 4) & 0x3ff;
	(*out)[7] = (val >> 6) & 0x3ff;
	(*out)[8] = (val >> 16) & 0x3ff;
	(*out)[9] = (val >> 26) & 0x3ff;
	val = LOAD32(*in + 3);
	(*out)[9] |= (val << 6) & 0x3ff;
	*in += 4, *out += 10;
}

inline void VSESIMPLE_UNPACK10_11(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x3ff;
	(*out)[1] = (val >> 10) & 0x3ff;
	(*out)[2] = (val >> 20) & 0x3ff;
	(*out)[3] = (val >> 30) & 0x3ff;
	val = LOAD32(*in + 1);
	(*out)[3] |= (val << 2) & 0x3ff;
	(*out)[4] = (val >> 8) & 0x3ff;
	(*out)[5] = (val >> 18) & 0x3ff;
	(*out)[6] = (val >> 28) & 0x3ff;
	val = LOAD32(*in + 2);
	(*out)[6] |= (val << 4) & 0x3ff;
	(*out)[7] = (val >> 6) & 0x3ff;
	(*out)[8] = (val >> 16) & 0x3ff;
	(*out)[9] = (val >> 26) & 0x3ff;
	val = LOAD32(*in + 3);
	(*out)[9] |= (val << 6) & 0x3ff;
	(*out)[10] = (val >> 4) & 0x3ff;
	*in += 4, *out += 11;
}

inline void VSESIMPLE_UNPACK10_12(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x3ff;
	(*out)[1] = (val >> 10) & 0x3ff;
	(*out)[2] = (val >> 20) & 0x3ff;
	(*out)[3] = (val >> 30) & 0x3ff;
	val = LOAD32(*in + 1);
	(*out)[3] |= (val << 2) & 0x3ff;
	(*out)[4] = (val >> 8) & 0x3ff;
	(*out)[5] = (val >> 18) & 0x3ff;
	(*out)[6] = (val >> 28) & 0x3ff;
	val = LOAD32(*in + 2);
	(*out)[6] |= (val << 4) & 0x3ff;
	(*out)[7] = (val >> 6) & 0x3ff;
	(*out)[8] = (val >> 16) & 0x3ff;
	(*out)[9] = (val >> 26) & 0x3ff;
	val = LOAD32(*in + 3);
	(*out)[9] |= (val << 6) & 0x3ff;
	(*out)[10] = (val >> 4) & 0x3ff;
	(*out)[11] = (val >> 14) & 0x3ff;
	*in += 4, *out += 12;
}

inline void VSESIMPLE_UNPACK10_14(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x3ff;
	(*out)[1] = (val >> 10) & 0x3ff;
	(*out)[2] = (val >> 20) & 0x3ff;
	(*out)[3] = (val >> 30) & 0x3ff;
	val = LOAD32(*in + 1);
	(*out)[3] |= (val << 2) & 0x3ff;
	(*out)[4] = (val >> 8) & 0x3ff;
	(*out)[5] = (val >> 18) & 0x3ff;
	(*out)[6] = (val >> 28) & 0x3ff;
	val = LOAD32(*in + 2);
	(*out)[6] |= (val << 4) & 0x3ff;
	(*out)[7] = (val >> 6) & 0x3ff;
	(*out)[8] = (val >> 16) & 0x3ff;
	(*out)[9] = (val >> 26) & 0x3ff;
	val = LOAD32(*in + 3);
	(*out)[9] |= (val << 6) & 0x3ff;
	(*out)[10] = (val >> 4) & 0x3ff;
	(*out)[11] = (val >> 14) & 0x3ff;
	(*out)[12] = (val >> 24) & 0x3ff;
	val = LOAD32(*in + 4);
	(*out)[12] |= (val << 8) & 0x3ff;
	(*out)[13] = (val >> 2) & 0x3ff;
	*in += 5, *out += 14;
}

inline void VSESIMPLE_UNPACK10_16(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x3ff;
	(*out)[1] = (val >> 10) & 0x3ff;
	(*out)[2] = (val >> 20) & 0x3ff;
	(*out)[3] = (val >> 30) & 0x3ff;
	val = LOAD32(*in + 1);
	(*out)[3] |= (val << 2) & 0x3ff;
	(*out)[4] = (val >> 8) & 0x3ff;
	(*out)[5] = (val >> 18) & 0x3ff;
	(*out)[6] = (val >> 28) & 0x3ff;
	val = LOAD32(*in + 2);
	(*out)[6] |= (val << 4) & 0x3ff;
	(*out)[7] = (val >> 6) & 0x3ff;
	(*out)[8] = (val >> 16) & 0x3ff;
	(*out)[9] = (val >> 26) & 0x3ff;
	val = LOAD32(*in + 3);
	(*out)[9] |= (val << 6) & 0x3ff;
	(*out)[10] = (val >> 4) & 0x3ff;
	(*out)[11] = (val >> 14) & 0x3ff;
	(*out)[12] = (val >> 24) & 0x3ff;
	val = LOAD32(*in + 4);
	(*out)[12] |= (val << 8) & 0x3ff;
	(*out)[13] = (val >> 2) & 0x3ff;
	(*out)[14] = (val >> 12) & 0x3ff;
	(*out)[15] = (val >> 22) & 0x3ff;
	*in += 5, *out += 16;
}

inline void VSESIMPLE_UNPACK10_32(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x3ff;
	(*out)[1] = (val >> 10) & 0x3ff;
	(*out)[2] = (val >> 20) & 0x3ff;
	(*out)[3] = (val >> 30) & 0x3ff;
	val = LOAD32(*in + 1);
	(*out)[3] |= (val << 2) & 0x3ff;
	(*out)[4] = (val >> 8) & 0x3ff;
	(*out)[5] = (val >> 18) & 0x3ff;
	(*out)[6] = (val >> 28) & 0x3ff;
	val = LOAD32(*in + 2);
	(*out)[6] |= (val << 4) & 0x3ff;
	(*out)[7] = (val >> 6) & 0x3ff;
	(*out)[8] = (val >> 16) & 0x3ff;
	(*out)[9] = (val >> 26) & 0x3ff;
	val = LOAD32(*in + 3);
	(*out)[9] |= (val << 6) & 0x3ff;
	(*out)[10] = (val >> 4) & 0x3ff;
	(*out)[11] = (val >> 14) & 0x3ff;
	(*out)[12] = (val >> 24) & 0x3ff;
	val = LOAD32(*in + 4);
	(*out)[12] |= (val << 8) & 0x3ff;
	(*out)[13] = (val >> 2) & 0x3ff;
	(*out)[14] = (val >> 12) & 0x3ff;
	(*out)[15] = (val >> 22) & 0x3ff;
	val = LOAD32(*in + 5);
	(*out)[16] = (val) & 0x3ff;
	(*out)[17] = (val >> 10) & 0x3ff;
	(*out)[18] = (val >> 20) & 0x3ff;
	(*out)[19] = (val >> 30) & 0x3ff;
	val = LOAD32(*in + 6);
	(*out)[19] |= (val << 2) & 0x3ff;
	(*out)[20] = (val >> 8) & 0x3ff;
	(*out)[21] = (val >> 18) & 0x3ff;
	(*out)[22] = (val >> 28) & 0x3ff;
	val = LOAD32(*in + 7);
	(*out)[22] |= (val << 4) & 0x3ff;
	(*out)[23] = (val >> 6) & 0x3ff;
	(*out)[24] = (val >> 16) & 0x3ff;
	(*out)[25] = (val >> 26) & 0x3ff;
	val = LOAD32(*in + 8);
	(*out)[25] |= (val << 6) & 0x3ff;
	(*out)[26] = (val >> 4) & 0x3ff;
	(*out)[27] = (val >> 14) & 0x3ff;
	(*out)[28] = (val >> 24) & 0x3ff;
	val = LOAD32(*in + 9);
	(*out)[28] |= (val << 8) & 0x3ff;
	(*out)[29] = (val >> 2) & 0x3ff;
	(*out)[30] = (val >> 12) & 0x3ff;
	(*out)[31] = (val >> 22) & 0x3ff;
	*in += 10, *out += 32;
}

inline void VSESIMPLE_UNPACK10_64(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x3ff;
	(*out)[1] = (val >> 10) & 0x3ff;
	(*out)[2] = (val >> 20) & 0x3ff;
	(*out)[3] = (val >> 30) & 0x3ff;
	val = LOAD32(*in + 1);
	(*out)[3] |= (val << 2) & 0x3ff;
	(*out)[4] = (val >> 8) & 0x3ff;
	(*out)[5] = (val >> 18) & 0x3ff;
	(*out)[6] = (val >> 28) & 0x3ff;
	val = LOAD32(*in + 2);
	(*out)[6] |= (val << 4) & 0x3ff;
	(*out)[7] = (val >> 6) & 0x3ff;
	(*out)[8] = (val >> 16) & 0x3ff;
	(*out)[9] = (val >> 26) & 0x3ff;
	val = LOAD32(*in + 3);
	(*out)[9] |= (val << 6) & 0x3ff;
	(*out)[10] = (val >> 4) & 0x3ff;
	(*out)[11] = (val >> 14) & 0x3ff;
	(*out)[12] = (val >> 24) & 0x3ff;
	val = LOAD32(*in + 4);
	(*out)[12] |= (val << 8) & 0x3ff;
	(*out)[13] = (val >> 2) & 0x3ff;
	(*out)[14] = (val >> 12) & 0x3ff;
	(*out)[15] = (val >> 22) & 0x3ff;
	val = LOAD32(*in + 5);
	(*out)[16] = (val) & 0x3ff;
	(*out)[17] = (val >> 10) & 0x3ff;
	(*out)[18] = (val >> 20) & 0x3ff;
	(*out)[19] = (val >> 30) & 0x3ff;
	val = LOAD32(*in + 6);
	(*out)[19] |= (val << 2) & 0x3ff;
	(*out)[20] = (val >> 8) & 0x3ff;
	(*out)[21] = (val >> 18) & 0x3ff;
	(*out)[22] = (val >> 28) & 0x3ff;
	val = LOAD32(*in + 7);
	(*out)[22] |= (val << 4) & 0x3ff;
	(*out)[23] = (val >> 6) & 0x3ff;
	(*out)[24] = (val >> 16) & 0x3ff;
	(*out)[25] = (val >> 26) & 0x3ff;
	val = LOAD32(*in + 8);
	(*out)[25] |= (val << 6) & 0x3ff;
	(*out)[26] = (val >> 4) & 0x3ff;
	(*out)[27] = (val >> 14) & 0x3ff;
	(*out)[28] = (val >> 24) & 0x3ff;
	val = LOAD32(*in + 9);
	(*out)[28] |= (val << 8) & 0x3ff;
	(*out)[29] = (val >> 2) & 0x3ff;
	(*out)[30] = (val >> 12) & 0x3ff;
	(*out)[31] = (val >> 22) & 0x3ff;
	val = LOAD32(*in + 10);
	(*out)[32] = (val) & 0x3ff;
	(*out)[33] = (val >> 10) & 0x3ff;
	(*out)[34] = (val >> 20) & 0x3ff;
	(*out)[35] = (val >> 30) & 0x3ff;
	val = LOAD32(*in + 11);
	(*out)[35] |= (val << 2) & 0x3ff;
	(*out)[36] = (val >> 8) & 0x3ff;
	(*out)[37] = (val >> 18) & 0x3ff;
	(*out)[38] = (val >> 28) & 0x3ff;
	val = LOAD32(*in + 12);
	(*out)[38] |= (val << 4) & 0x3ff;
	(*out)[39] = (val >> 6) & 0x3ff;
	(*out)[40] = (val >> 16) & 0x3ff;
	(*out)[41] = (val >> 26) & 0x3ff;
	val = LOAD32(*in + 13);
	(*out)[41] |= (val << 6) & 0x3ff;
	(*out)[42] = (val >> 4) & 0x3ff;
	(*out)[43] = (val >> 14) & 0x3ff;
	(*out)[44] = (val >> 24) & 0x3ff;
	val = LOAD32(*in + 14);
	(*out)[44] |= (val << 8) & 0x3ff;
	(*out)[45] = (val >> 2) & 0x3ff;
	(*out)[46] = (val >> 12) & 0x3ff;
	(*out)[47] = (val >> 22) & 0x3ff;
	val = LOAD32(*in + 15);
	(*out)[48] = (val) & 0x3ff;
	(*out)[49] = (val >> 10) & 0x3ff;
	(*out)[50] = (val >> 20) & 0x3ff;
	(*out)[51] = (val >> 30) & 0x3ff;
	val = LOAD32(*in + 16);
	(*out)[51] |= (val << 2) & 0x3ff;
	(*out)[52] = (val >> 8) & 0x3ff;
	(*out)[53] = (val >> 18) & 0x3ff;
	(*out)[54] = (val >> 28) & 0x3ff;
	val = LOAD32(*in + 17);
	(*out)[54] |= (val << 4) & 0x3ff;
	(*out)[55] = (val >> 6) & 0x3ff;
	(*out)[56] = (val >> 16) & 0x3ff;
	(*out)[57] = (val >> 26) & 0x3ff;
	val = LOAD32(*in + 18);
	(*out)[57] |= (val << 6) & 0x3ff;
	(*out)[58] = (val >> 4) & 0x3ff;
	(*out)[59] = (val >> 14) & 0x3ff;
	(*out)[60] = (val >> 24) & 0x3ff;
	val = LOAD32(*in + 19);
	(*out)[60] |= (val << 8) & 0x3ff;
	(*out)[61] = (val >> 2) & 0x3ff;
	(*out)[62] = (val >> 12) & 0x3ff;
	(*out)[63] = (val >> 22) & 0x3ff;
	*in += 20, *out += 64;
}

/* UNPACKER: 11 */
inline void VSESIMPLE_UNPACK11_1(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x7ff;
	*in += 1, *out += 1;
}

inline void VSESIMPLE_UNPACK11_2(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x7ff;
	(*out)[1] = (val >> 11) & 0x7ff;
	*in += 1, *out += 2;
}

inline void VSESIMPLE_UNPACK11_3(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x7ff;
	(*out)[1] = (val >> 11) & 0x7ff;
	(*out)[2] = (val >> 22) & 0x7ff;
	val = LOAD32(*in + 1);
	(*out)[2] |= (val << 10) & 0x7ff;
	*in += 2, *out += 3;
}

inline void VSESIMPLE_UNPACK11_4(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x7ff;
	(*out)[1] = (val >> 11) & 0x7ff;
	(*out)[2] = (val >> 22) & 0x7ff;
	val = LOAD32(*in + 1);
	(*out)[2] |= (val << 10) & 0x7ff;
	(*out)[3] = (val >> 1) & 0x7ff;
	*in += 2, *out += 4;
}

inline void VSESIMPLE_UNPACK11_5(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x7ff;
	(*out)[1] = (val >> 11) & 0x7ff;
	(*out)[2] = (val >> 22) & 0x7ff;
	val = LOAD32(*in + 1);
	(*out)[2] |= (val << 10) & 0x7ff;
	(*out)[3] = (val >> 1) & 0x7ff;
	(*out)[4] = (val >> 12) & 0x7ff;
	*in += 2, *out += 5;
}

inline void VSESIMPLE_UNPACK11_6(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x7ff;
	(*out)[1] = (val >> 11) & 0x7ff;
	(*out)[2] = (val >> 22) & 0x7ff;
	val = LOAD32(*in + 1);
	(*out)[2] |= (val << 10) & 0x7ff;
	(*out)[3] = (val >> 1) & 0x7ff;
	(*out)[4] = (val >> 12) & 0x7ff;
	(*out)[5] = (val >> 23) & 0x7ff;
	val = LOAD32(*in + 2);
	(*out)[5] |= (val << 9) & 0x7ff;
	*in += 3, *out += 6;
}

inline void VSESIMPLE_UNPACK11_7(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x7ff;
	(*out)[1] = (val >> 11) & 0x7ff;
	(*out)[2] = (val >> 22) & 0x7ff;
	val = LOAD32(*in + 1);
	(*out)[2] |= (val << 10) & 0x7ff;
	(*out)[3] = (val >> 1) & 0x7ff;
	(*out)[4] = (val >> 12) & 0x7ff;
	(*out)[5] = (val >> 23) & 0x7ff;
	val = LOAD32(*in + 2);
	(*out)[5] |= (val << 9) & 0x7ff;
	(*out)[6] = (val >> 2) & 0x7ff;
	*in += 3, *out += 7;
}

inline void VSESIMPLE_UNPACK11_8(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x7ff;
	(*out)[1] = (val >> 11) & 0x7ff;
	(*out)[2] = (val >> 22) & 0x7ff;
	val = LOAD32(*in + 1);
	(*out)[2] |= (val << 10) & 0x7ff;
	(*out)[3] = (val >> 1) & 0x7ff;
	(*out)[4] = (val >> 12) & 0x7ff;
	(*out)[5] = (val >> 23) & 0x7ff;
	val = LOAD32(*in + 2);
	(*out)[5] |= (val << 9) & 0x7ff;
	(*out)[6] = (val >> 2) & 0x7ff;
	(*out)[7] = (val >> 13) & 0x7ff;
	*in += 3, *out += 8;
}

inline void VSESIMPLE_UNPACK11_9(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x7ff;
	(*out)[1] = (val >> 11) & 0x7ff;
	(*out)[2] = (val >> 22) & 0x7ff;
	val = LOAD32(*in + 1);
	(*out)[2] |= (val << 10) & 0x7ff;
	(*out)[3] = (val >> 1) & 0x7ff;
	(*out)[4] = (val >> 12) & 0x7ff;
	(*out)[5] = (val >> 23) & 0x7ff;
	val = LOAD32(*in + 2);
	(*out)[5] |= (val << 9) & 0x7ff;
	(*out)[6] = (val >> 2) & 0x7ff;
	(*out)[7] = (val >> 13) & 0x7ff;
	(*out)[8] = (val >> 24) & 0x7ff;
	val = LOAD32(*in + 3);
	(*out)[8] |= (val << 8) & 0x7ff;
	*in += 4, *out += 9;
}

inline void VSESIMPLE_UNPACK11_10(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x7ff;
	(*out)[1] = (val >> 11) & 0x7ff;
	(*out)[2] = (val >> 22) & 0x7ff;
	val = LOAD32(*in + 1);
	(*out)[2] |= (val << 10) & 0x7ff;
	(*out)[3] = (val >> 1) & 0x7ff;
	(*out)[4] = (val >> 12) & 0x7ff;
	(*out)[5] = (val >> 23) & 0x7ff;
	val = LOAD32(*in + 2);
	(*out)[5] |= (val << 9) & 0x7ff;
	(*out)[6] = (val >> 2) & 0x7ff;
	(*out)[7] = (val >> 13) & 0x7ff;
	(*out)[8] = (val >> 24) & 0x7ff;
	val = LOAD32(*in + 3);
	(*out)[8] |= (val << 8) & 0x7ff;
	(*out)[9] = (val >> 3) & 0x7ff;
	*in += 4, *out += 10;
}

inline void VSESIMPLE_UNPACK11_11(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x7ff;
	(*out)[1] = (val >> 11) & 0x7ff;
	(*out)[2] = (val >> 22) & 0x7ff;
	val = LOAD32(*in + 1);
	(*out)[2] |= (val << 10) & 0x7ff;
	(*out)[3] = (val >> 1) & 0x7ff;
	(*out)[4] = (val >> 12) & 0x7ff;
	(*out)[5] = (val >> 23) & 0x7ff;
	val = LOAD32(*in + 2);
	(*out)[5] |= (val << 9) & 0x7ff;
	(*out)[6] = (val >> 2) & 0x7ff;
	(*out)[7] = (val >> 13) & 0x7ff;
	(*out)[8] = (val >> 24) & 0x7ff;
	val = LOAD32(*in + 3);
	(*out)[8] |= (val << 8) & 0x7ff;
	(*out)[9] = (val >> 3) & 0x7ff;
	(*out)[10] = (val >> 14) & 0x7ff;
	*in += 4, *out += 11;
}

inline void VSESIMPLE_UNPACK11_12(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x7ff;
	(*out)[1] = (val >> 11) & 0x7ff;
	(*out)[2] = (val >> 22) & 0x7ff;
	val = LOAD32(*in + 1);
	(*out)[2] |= (val << 10) & 0x7ff;
	(*out)[3] = (val >> 1) & 0x7ff;
	(*out)[4] = (val >> 12) & 0x7ff;
	(*out)[5] = (val >> 23) & 0x7ff;
	val = LOAD32(*in + 2);
	(*out)[5] |= (val << 9) & 0x7ff;
	(*out)[6] = (val >> 2) & 0x7ff;
	(*out)[7] = (val >> 13) & 0x7ff;
	(*out)[8] = (val >> 24) & 0x7ff;
	val = LOAD32(*in + 3);
	(*out)[8] |= (val << 8) & 0x7ff;
	(*out)[9] = (val >> 3) & 0x7ff;
	(*out)[10] = (val >> 14) & 0x7ff;
	(*out)[11] = (val >> 25) & 0x7ff;
	val = LOAD32(*in + 4);
	(*out)[11] |= (val << 7) & 0x7ff;
	*in += 5, *out += 12;
}

inline void VSESIMPLE_UNPACK11_14(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x7ff;
	(*out)[1] = (val >> 11) & 0x7ff;
	(*out)[2] = (val >> 22) & 0x7ff;
	val = LOAD32(*in + 1);
	(*out)[2] |= (val << 10) & 0x7ff;
	(*out)[3] = (val >> 1) & 0x7ff;
	(*out)[4] = (val >> 12) & 0x7ff;
	(*out)[5] = (val >> 23) & 0x7ff;
	val = LOAD32(*in + 2);
	(*out)[5] |= (val << 9) & 0x7ff;
	(*out)[6] = (val >> 2) & 0x7ff;
	(*out)[7] = (val >> 13) & 0x7ff;
	(*out)[8] = (val >> 24) & 0x7ff;
	val = LOAD32(*in + 3);
	(*out)[8] |= (val << 8) & 0x7ff;
	(*out)[9] = (val >> 3) & 0x7ff;
	(*out)[10] = (val >> 14) & 0x7ff;
	(*out)[11] = (val >> 25) & 0x7ff;
	val = LOAD32(*in + 4);
	(*out)[11] |= (val << 7) & 0x7ff;
	(*out)[12] = (val >> 4) & 0x7ff;
	(*out)[13] = (val >> 15) & 0x7ff;
	*in += 5, *out += 14;
}

inline void VSESIMPLE_UNPACK11_16(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x7ff;
	(*out)[1] = (val >> 11) & 0x7ff;
	(*out)[2] = (val >> 22) & 0x7ff;
	val = LOAD32(*in + 1);
	(*out)[2] |= (val << 10) & 0x7ff;
	(*out)[3] = (val >> 1) & 0x7ff;
	(*out)[4] = (val >> 12) & 0x7ff;
	(*out)[5] = (val >> 23) & 0x7ff;
	val = LOAD32(*in + 2);
	(*out)[5] |= (val << 9) & 0x7ff;
	(*out)[6] = (val >> 2) & 0x7ff;
	(*out)[7] = (val >> 13) & 0x7ff;
	(*out)[8] = (val >> 24) & 0x7ff;
	val = LOAD32(*in + 3);
	(*out)[8] |= (val << 8) & 0x7ff;
	(*out)[9] = (val >> 3) & 0x7ff;
	(*out)[10] = (val >> 14) & 0x7ff;
	(*out)[11] = (val >> 25) & 0x7ff;
	val = LOAD32(*in + 4);
	(*out)[11] |= (val << 7) & 0x7ff;
	(*out)[12] = (val >> 4) & 0x7ff;
	(*out)[13] = (val >> 15) & 0x7ff;
	(*out)[14] = (val >> 26) & 0x7ff;
	val = LOAD32(*in + 5);
	(*out)[14] |= (val << 6) & 0x7ff;
	(*out)[15] = (val >> 5) & 0x7ff;
	*in += 6, *out += 16;
}

inline void VSESIMPLE_UNPACK11_32(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x7ff;
	(*out)[1] = (val >> 11) & 0x7ff;
	(*out)[2] = (val >> 22) & 0x7ff;
	val = LOAD32(*in + 1);
	(*out)[2] |= (val << 10) & 0x7ff;
	(*out)[3] = (val >> 1) & 0x7ff;
	(*out)[4] = (val >> 12) & 0x7ff;
	(*out)[5] = (val >> 23) & 0x7ff;
	val = LOAD32(*in + 2);
	(*out)[5] |= (val << 9) & 0x7ff;
	(*out)[6] = (val >> 2) & 0x7ff;
	(*out)[7] = (val >> 13) & 0x7ff;
	(*out)[8] = (val >> 24) & 0x7ff;
	val = LOAD32(*in + 3);
	(*out)[8] |= (val << 8) & 0x7ff;
	(*out)[9] = (val >> 3) & 0x7ff;
	(*out)[10] = (val >> 14) & 0x7ff;
	(*out)[11] = (val >> 25) & 0x7ff;
	val = LOAD32(*in + 4);
	(*out)[11] |= (val << 7) & 0x7ff;
	(*out)[12] = (val >> 4) & 0x7ff;
	(*out)[13] = (val >> 15) & 0x7ff;
	(*out)[14] = (val >> 26) & 0x7ff;
	val = LOAD32(*in + 5);
	(*out)[14] |= (val << 6) & 0x7ff;
	(*out)[15] = (val >> 5) & 0x7ff;
	(*out)[16] = (val >> 16) & 0x7ff;
	(*out)[17] = (val >> 27) & 0x7ff;
	val = LOAD32(*in + 6);
	(*out)[17] |= (val << 5) & 0x7ff;
	(*out)[18] = (val >> 6) & 0x7ff;
	(*out)[19] = (val >> 17) & 0x7ff;
	(*out)[20] = (val >> 28) & 0x7ff;
	val = LOAD32(*in + 7);
	(*out)[20] |= (val << 4) & 0x7ff;
	(*out)[21] = (val >> 7) & 0x7ff;
	(*out)[22] = (val >> 18) & 0x7ff;
	(*out)[23] = (val >> 29) & 0x7ff;
	val = LOAD32(*in + 8);
	(*out)[23] |= (val << 3) & 0x7ff;
	(*out)[24] = (val >> 8) & 0x7ff;
	(*out)[25] = (val >> 19) & 0x7ff;
	(*out)[26] = (val >> 30) & 0x7ff;
	val = LOAD32(*in + 9);
	(*out)[26] |= (val << 2) & 0x7ff;
	(*out)[27] = (val >> 9) & 0x7ff;
	(*out)[28] = (val >> 20) & 0x7ff;
	(*out)[29] = (val >> 31) & 0x7ff;
	val = LOAD32(*in + 10);
	(*out)[29] |= (val << 1) & 0x7ff;
	(*out)[30] = (val >> 10) & 0x7ff;
	(*out)[31] = (val >> 21) & 0x7ff;
	*in += 11, *out += 32;
}

inline void VSESIMPLE_UNPACK11_64(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0x7ff;
	(*out)[1] = (val >> 11) & 0x7ff;
	(*out)[2] = (val >> 22) & 0x7ff;
	val = LOAD32(*in + 1);
	(*out)[2] |= (val << 10) & 0x7ff;
	(*out)[3] = (val >> 1) & 0x7ff;
	(*out)[4] = (val >> 12) & 0x7ff;
	(*out)[5] = (val >> 23) & 0x7ff;
	val = LOAD32(*in + 2);
	(*out)[5] |= (val << 9) & 0x7ff;
	(*out)[6] = (val >> 2) & 0x7ff;
	(*out)[7] = (val >> 13) & 0x7ff;
	(*out)[8] = (val >> 24) & 0x7ff;
	val = LOAD32(*in + 3);
	(*out)[8] |= (val << 8) & 0x7ff;
	(*out)[9] = (val >> 3) & 0x7ff;
	(*out)[10] = (val >> 14) & 0x7ff;
	(*out)[11] = (val >> 25) & 0x7ff;
	val = LOAD32(*in + 4);
	(*out)[11] |= (val << 7) & 0x7ff;
	(*out)[12] = (val >> 4) & 0x7ff;
	(*out)[13] = (val >> 15) & 0x7ff;
	(*out)[14] = (val >> 26) & 0x7ff;
	val = LOAD32(*in + 5);
	(*out)[14] |= (val << 6) & 0x7ff;
	(*out)[15] = (val >> 5) & 0x7ff;
	(*out)[16] = (val >> 16) & 0x7ff;
	(*out)[17] = (val >> 27) & 0x7ff;
	val = LOAD32(*in + 6);
	(*out)[17] |= (val << 5) & 0x7ff;
	(*out)[18] = (val >> 6) & 0x7ff;
	(*out)[19] = (val >> 17) & 0x7ff;
	(*out)[20] = (val >> 28) & 0x7ff;
	val = LOAD32(*in + 7);
	(*out)[20] |= (val << 4) & 0x7ff;
	(*out)[21] = (val >> 7) & 0x7ff;
	(*out)[22] = (val >> 18) & 0x7ff;
	(*out)[23] = (val >> 29) & 0x7ff;
	val = LOAD32(*in + 8);
	(*out)[23] |= (val << 3) & 0x7ff;
	(*out)[24] = (val >> 8) & 0x7ff;
	(*out)[25] = (val >> 19) & 0x7ff;
	(*out)[26] = (val >> 30) & 0x7ff;
	val = LOAD32(*in + 9);
	(*out)[26] |= (val << 2) & 0x7ff;
	(*out)[27] = (val >> 9) & 0x7ff;
	(*out)[28] = (val >> 20) & 0x7ff;
	(*out)[29] = (val >> 31) & 0x7ff;
	val = LOAD32(*in + 10);
	(*out)[29] |= (val << 1) & 0x7ff;
	(*out)[30] = (val >> 10) & 0x7ff;
	(*out)[31] = (val >> 21) & 0x7ff;
	val = LOAD32(*in + 11);
	(*out)[32] = (val) & 0x7ff;
	(*out)[33] = (val >> 11) & 0x7ff;
	(*out)[34] = (val >> 22) & 0x7ff;
	val = LOAD32(*in + 12);
	(*out)[34] |= (val << 10) & 0x7ff;
	(*out)[35] = (val >> 1) & 0x7ff;
	(*out)[36] = (val >> 12) & 0x7ff;
	(*out)[37] = (val >> 23) & 0x7ff;
	val = LOAD32(*in + 13);
	(*out)[37] |= (val << 9) & 0x7ff;
	(*out)[38] = (val >> 2) & 0x7ff;
	(*out)[39] = (val >> 13) & 0x7ff;
	(*out)[40] = (val >> 24) & 0x7ff;
	val = LOAD32(*in + 14);
	(*out)[40] |= (val << 8) & 0x7ff;
	(*out)[41] = (val >> 3) & 0x7ff;
	(*out)[42] = (val >> 14) & 0x7ff;
	(*out)[43] = (val >> 25) & 0x7ff;
	val = LOAD32(*in + 15);
	(*out)[43] |= (val << 7) & 0x7ff;
	(*out)[44] = (val >> 4) & 0x7ff;
	(*out)[45] = (val >> 15) & 0x7ff;
	(*out)[46] = (val >> 26) & 0x7ff;
	val = LOAD32(*in + 16);
	(*out)[46] |= (val << 6) & 0x7ff;
	(*out)[47] = (val >> 5) & 0x7ff;
	(*out)[48] = (val >> 16) & 0x7ff;
	(*out)[49] = (val >> 27) & 0x7ff;
	val = LOAD32(*in + 17);
	(*out)[49] |= (val << 5) & 0x7ff;
	(*out)[50] = (val >> 6) & 0x7ff;
	(*out)[51] = (val >> 17) & 0x7ff;
	(*out)[52] = (val >> 28) & 0x7ff;
	val = LOAD32(*in + 18);
	(*out)[52] |= (val << 4) & 0x7ff;
	(*out)[53] = (val >> 7) & 0x7ff;
	(*out)[54] = (val >> 18) & 0x7ff;
	(*out)[55] = (val >> 29) & 0x7ff;
	val = LOAD32(*in + 19);
	(*out)[55] |= (val << 3) & 0x7ff;
	(*out)[56] = (val >> 8) & 0x7ff;
	(*out)[57] = (val >> 19) & 0x7ff;
	(*out)[58] = (val >> 30) & 0x7ff;
	val = LOAD32(*in + 20);
	(*out)[58] |= (val << 2) & 0x7ff;
	(*out)[59] = (val >> 9) & 0x7ff;
	(*out)[60] = (val >> 20) & 0x7ff;
	(*out)[61] = (val >> 31) & 0x7ff;
	val = LOAD32(*in + 21);
	(*out)[61] |= (val << 1) & 0x7ff;
	(*out)[62] = (val >> 10) & 0x7ff;
	(*out)[63] = (val >> 21) & 0x7ff;
	*in += 22, *out += 64;
}

/* UNPACKER: 12 */
inline void VSESIMPLE_UNPACK12_1(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xfff;
	*in += 1, *out += 1;
}

inline void VSESIMPLE_UNPACK12_2(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xfff;
	(*out)[1] = (val >> 12) & 0xfff;
	*in += 1, *out += 2;
}

inline void VSESIMPLE_UNPACK12_3(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xfff;
	(*out)[1] = (val >> 12) & 0xfff;
	(*out)[2] = (val >> 24) & 0xfff;
	val = LOAD32(*in + 1);
	(*out)[2] |= (val << 8) & 0xfff;
	*in += 2, *out += 3;
}

inline void VSESIMPLE_UNPACK12_4(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xfff;
	(*out)[1] = (val >> 12) & 0xfff;
	(*out)[2] = (val >> 24) & 0xfff;
	val = LOAD32(*in + 1);
	(*out)[2] |= (val << 8) & 0xfff;
	(*out)[3] = (val >> 4) & 0xfff;
	*in += 2, *out += 4;
}

inline void VSESIMPLE_UNPACK12_5(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xfff;
	(*out)[1] = (val >> 12) & 0xfff;
	(*out)[2] = (val >> 24) & 0xfff;
	val = LOAD32(*in + 1);
	(*out)[2] |= (val << 8) & 0xfff;
	(*out)[3] = (val >> 4) & 0xfff;
	(*out)[4] = (val >> 16) & 0xfff;
	*in += 2, *out += 5;
}

inline void VSESIMPLE_UNPACK12_6(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xfff;
	(*out)[1] = (val >> 12) & 0xfff;
	(*out)[2] = (val >> 24) & 0xfff;
	val = LOAD32(*in + 1);
	(*out)[2] |= (val << 8) & 0xfff;
	(*out)[3] = (val >> 4) & 0xfff;
	(*out)[4] = (val >> 16) & 0xfff;
	(*out)[5] = (val >> 28) & 0xfff;
	val = LOAD32(*in + 2);
	(*out)[5] |= (val << 4) & 0xfff;
	*in += 3, *out += 6;
}

inline void VSESIMPLE_UNPACK12_7(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xfff;
	(*out)[1] = (val >> 12) & 0xfff;
	(*out)[2] = (val >> 24) & 0xfff;
	val = LOAD32(*in + 1);
	(*out)[2] |= (val << 8) & 0xfff;
	(*out)[3] = (val >> 4) & 0xfff;
	(*out)[4] = (val >> 16) & 0xfff;
	(*out)[5] = (val >> 28) & 0xfff;
	val = LOAD32(*in + 2);
	(*out)[5] |= (val << 4) & 0xfff;
	(*out)[6] = (val >> 8) & 0xfff;
	*in += 3, *out += 7;
}

inline void VSESIMPLE_UNPACK12_8(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xfff;
	(*out)[1] = (val >> 12) & 0xfff;
	(*out)[2] = (val >> 24) & 0xfff;
	val = LOAD32(*in + 1);
	(*out)[2] |= (val << 8) & 0xfff;
	(*out)[3] = (val >> 4) & 0xfff;
	(*out)[4] = (val >> 16) & 0xfff;
	(*out)[5] = (val >> 28) & 0xfff;
	val = LOAD32(*in + 2);
	(*out)[5] |= (val << 4) & 0xfff;
	(*out)[6] = (val >> 8) & 0xfff;
	(*out)[7] = (val >> 20) & 0xfff;
	*in += 3, *out += 8;
}

inline void VSESIMPLE_UNPACK12_9(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xfff;
	(*out)[1] = (val >> 12) & 0xfff;
	(*out)[2] = (val >> 24) & 0xfff;
	val = LOAD32(*in + 1);
	(*out)[2] |= (val << 8) & 0xfff;
	(*out)[3] = (val >> 4) & 0xfff;
	(*out)[4] = (val >> 16) & 0xfff;
	(*out)[5] = (val >> 28) & 0xfff;
	val = LOAD32(*in + 2);
	(*out)[5] |= (val << 4) & 0xfff;
	(*out)[6] = (val >> 8) & 0xfff;
	(*out)[7] = (val >> 20) & 0xfff;
	val = LOAD32(*in + 3);
	(*out)[8] = (val) & 0xfff;
	*in += 4, *out += 9;
}

inline void VSESIMPLE_UNPACK12_10(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xfff;
	(*out)[1] = (val >> 12) & 0xfff;
	(*out)[2] = (val >> 24) & 0xfff;
	val = LOAD32(*in + 1);
	(*out)[2] |= (val << 8) & 0xfff;
	(*out)[3] = (val >> 4) & 0xfff;
	(*out)[4] = (val >> 16) & 0xfff;
	(*out)[5] = (val >> 28) & 0xfff;
	val = LOAD32(*in + 2);
	(*out)[5] |= (val << 4) & 0xfff;
	(*out)[6] = (val >> 8) & 0xfff;
	(*out)[7] = (val >> 20) & 0xfff;
	val = LOAD32(*in + 3);
	(*out)[8] = (val) & 0xfff;
	(*out)[9] = (val >> 12) & 0xfff;
	*in += 4, *out += 10;
}

inline void VSESIMPLE_UNPACK12_11(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xfff;
	(*out)[1] = (val >> 12) & 0xfff;
	(*out)[2] = (val >> 24) & 0xfff;
	val = LOAD32(*in + 1);
	(*out)[2] |= (val << 8) & 0xfff;
	(*out)[3] = (val >> 4) & 0xfff;
	(*out)[4] = (val >> 16) & 0xfff;
	(*out)[5] = (val >> 28) & 0xfff;
	val = LOAD32(*in + 2);
	(*out)[5] |= (val << 4) & 0xfff;
	(*out)[6] = (val >> 8) & 0xfff;
	(*out)[7] = (val >> 20) & 0xfff;
	val = LOAD32(*in + 3);
	(*out)[8] = (val) & 0xfff;
	(*out)[9] = (val >> 12) & 0xfff;
	(*out)[10] = (val >> 24) & 0xfff;
	val = LOAD32(*in + 4);
	(*out)[10] |= (val << 8) & 0xfff;
	*in += 5, *out += 11;
}

inline void VSESIMPLE_UNPACK12_12(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xfff;
	(*out)[1] = (val >> 12) & 0xfff;
	(*out)[2] = (val >> 24) & 0xfff;
	val = LOAD32(*in + 1);
	(*out)[2] |= (val << 8) & 0xfff;
	(*out)[3] = (val >> 4) & 0xfff;
	(*out)[4] = (val >> 16) & 0xfff;
	(*out)[5] = (val >> 28) & 0xfff;
	val = LOAD32(*in + 2);
	(*out)[5] |= (val << 4) & 0xfff;
	(*out)[6] = (val >> 8) & 0xfff;
	(*out)[7] = (val >> 20) & 0xfff;
	val = LOAD32(*in + 3);
	(*out)[8] = (val) & 0xfff;
	(*out)[9] = (val >> 12) & 0xfff;
	(*out)[10] = (val >> 24) & 0xfff;
	val = LOAD32(*in + 4);
	(*out)[10] |= (val << 8) & 0xfff;
	(*out)[11] = (val >> 4) & 0xfff;
	*in += 5, *out += 12;
}

inline void VSESIMPLE_UNPACK12_14(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xfff;
	(*out)[1] = (val >> 12) & 0xfff;
	(*out)[2] = (val >> 24) & 0xfff;
	val = LOAD32(*in + 1);
	(*out)[2] |= (val << 8) & 0xfff;
	(*out)[3] = (val >> 4) & 0xfff;
	(*out)[4] = (val >> 16) & 0xfff;
	(*out)[5] = (val >> 28) & 0xfff;
	val = LOAD32(*in + 2);
	(*out)[5] |= (val << 4) & 0xfff;
	(*out)[6] = (val >> 8) & 0xfff;
	(*out)[7] = (val >> 20) & 0xfff;
	val = LOAD32(*in + 3);
	(*out)[8] = (val) & 0xfff;
	(*out)[9] = (val >> 12) & 0xfff;
	(*out)[10] = (val >> 24) & 0xfff;
	val = LOAD32(*in + 4);
	(*out)[10] |= (val << 8) & 0xfff;
	(*out)[11] = (val >> 4) & 0xfff;
	(*out)[12] = (val >> 16) & 0xfff;
	(*out)[13] = (val >> 28) & 0xfff;
	val = LOAD32(*in + 5);
	(*out)[13] |= (val << 4) & 0xfff;
	*in += 6, *out += 14;
}

inline void VSESIMPLE_UNPACK12_16(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xfff;
	(*out)[1] = (val >> 12) & 0xfff;
	(*out)[2] = (val >> 24) & 0xfff;
	val = LOAD32(*in + 1);
	(*out)[2] |= (val << 8) & 0xfff;
	(*out)[3] = (val >> 4) & 0xfff;
	(*out)[4] = (val >> 16) & 0xfff;
	(*out)[5] = (val >> 28) & 0xfff;
	val = LOAD32(*in + 2);
	(*out)[5] |= (val << 4) & 0xfff;
	(*out)[6] = (val >> 8) & 0xfff;
	(*out)[7] = (val >> 20) & 0xfff;
	val = LOAD32(*in + 3);
	(*out)[8] = (val) & 0xfff;
	(*out)[9] = (val >> 12) & 0xfff;
	(*out)[10] = (val >> 24) & 0xfff;
	val = LOAD32(*in + 4);
	(*out)[10] |= (val << 8) & 0xfff;
	(*out)[11] = (val >> 4) & 0xfff;
	(*out)[12] = (val >> 16) & 0xfff;
	(*out)[13] = (val >> 28) & 0xfff;
	val = LOAD32(*in + 5);
	(*out)[13] |= (val << 4) & 0xfff;
	(*out)[14] = (val >> 8) & 0xfff;
	(*out)[15] = (val >> 20) & 0xfff;
	*in += 6, *out += 16;
}

inline void VSESIMPLE_UNPACK12_32(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xfff;
	(*out)[1] = (val >> 12) & 0xfff;
	(*out)[2] = (val >> 24) & 0xfff;
	val = LOAD32(*in + 1);
	(*out)[2] |= (val << 8) & 0xfff;
	(*out)[3] = (val >> 4) & 0xfff;
	(*out)[4] = (val >> 16) & 0xfff;
	(*out)[5] = (val >> 28) & 0xfff;
	val = LOAD32(*in + 2);
	(*out)[5] |= (val << 4) & 0xfff;
	(*out)[6] = (val >> 8) & 0xfff;
	(*out)[7] = (val >> 20) & 0xfff;
	val = LOAD32(*in + 3);
	(*out)[8] = (val) & 0xfff;
	(*out)[9] = (val >> 12) & 0xfff;
	(*out)[10] = (val >> 24) & 0xfff;
	val = LOAD32(*in + 4);
	(*out)[10] |= (val << 8) & 0xfff;
	(*out)[11] = (val >> 4) & 0xfff;
	(*out)[12] = (val >> 16) & 0xfff;
	(*out)[13] = (val >> 28) & 0xfff;
	val = LOAD32(*in + 5);
	(*out)[13] |= (val << 4) & 0xfff;
	(*out)[14] = (val >> 8) & 0xfff;
	(*out)[15] = (val >> 20) & 0xfff;
	val = LOAD32(*in + 6);
	(*out)[16] = (val) & 0xfff;
	(*out)[17] = (val >> 12) & 0xfff;
	(*out)[18] = (val >> 24) & 0xfff;
	val = LOAD32(*in + 7);
	(*out)[18] |= (val << 8) & 0xfff;
	(*out)[19] = (val >> 4) & 0xfff;
	(*out)[20] = (val >> 16) & 0xfff;
	(*out)[21] = (val >> 28) & 0xfff;
	val = LOAD32(*in + 8);
	(*out)[21] |= (val << 4) & 0xfff;
	(*out)[22] = (val >> 8) & 0xfff;
	(*out)[23] = (val >> 20) & 0xfff;
	val = LOAD32(*in + 9);
	(*out)[24] = (val) & 0xfff;
	(*out)[25] = (val >> 12) & 0xfff;
	(*out)[26] = (val >> 24) & 0xfff;
	val = LOAD32(*in + 10);
	(*out)[26] |= (val << 8) & 0xfff;
	(*out)[27] = (val >> 4) & 0xfff;
	(*out)[28] = (val >> 16) & 0xfff;
	(*out)[29] = (val >> 28) & 0xfff;
	val = LOAD32(*in + 11);
	(*out)[29] |= (val << 4) & 0xfff;
	(*out)[30] = (val >> 8) & 0xfff;
	(*out)[31] = (val >> 20) & 0xfff;
	*in += 12, *out += 32;
}

inline void VSESIMPLE_UNPACK12_64(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xfff;
	(*out)[1] = (val >> 12) & 0xfff;
	(*out)[2] = (val >> 24) & 0xfff;
	val = LOAD32(*in + 1);
	(*out)[2] |= (val << 8) & 0xfff;
	(*out)[3] = (val >> 4) & 0xfff;
	(*out)[4] = (val >> 16) & 0xfff;
	(*out)[5] = (val >> 28) & 0xfff;
	val = LOAD32(*in + 2);
	(*out)[5] |= (val << 4) & 0xfff;
	(*out)[6] = (val >> 8) & 0xfff;
	(*out)[7] = (val >> 20) & 0xfff;
	val = LOAD32(*in + 3);
	(*out)[8] = (val) & 0xfff;
	(*out)[9] = (val >> 12) & 0xfff;
	(*out)[10] = (val >> 24) & 0xfff;
	val = LOAD32(*in + 4);
	(*out)[10] |= (val << 8) & 0xfff;
	(*out)[11] = (val >> 4) & 0xfff;
	(*out)[12] = (val >> 16) & 0xfff;
	(*out)[13] = (val >> 28) & 0xfff;
	val = LOAD32(*in + 5);
	(*out)[13] |= (val << 4) & 0xfff;
	(*out)[14] = (val >> 8) & 0xfff;
	(*out)[15] = (val >> 20) & 0xfff;
	val = LOAD32(*in + 6);
	(*out)[16] = (val) & 0xfff;
	(*out)[17] = (val >> 12) & 0xfff;
	(*out)[18] = (val >> 24) & 0xfff;
	val = LOAD32(*in + 7);
	(*out)[18] |= (val << 8) & 0xfff;
	(*out)[19] = (val >> 4) & 0xfff;
	(*out)[20] = (val >> 16) & 0xfff;
	(*out)[21] = (val >> 28) & 0xfff;
	val = LOAD32(*in + 8);
	(*out)[21] |= (val << 4) & 0xfff;
	(*out)[22] = (val >> 8) & 0xfff;
	(*out)[23] = (val >> 20) & 0xfff;
	val = LOAD32(*in + 9);
	(*out)[24] = (val) & 0xfff;
	(*out)[25] = (val >> 12) & 0xfff;
	(*out)[26] = (val >> 24) & 0xfff;
	val = LOAD32(*in + 10);
	(*out)[26] |= (val << 8) & 0xfff;
	(*out)[27] = (val >> 4) & 0xfff;
	(*out)[28] = (val >> 16) & 0xfff;
	(*out)[29] = (val >> 28) & 0xfff;
	val = LOAD32(*in + 11);
	(*out)[29] |= (val << 4) & 0xfff;
	(*out)[30] = (val >> 8) & 0xfff;
	(*out)[31] = (val >> 20) & 0xfff;
	val = LOAD32(*in + 12);
	(*out)[32] = (val) & 0xfff;
	(*out)[33] = (val >> 12) & 0xfff;
	(*out)[34] = (val >> 24) & 0xfff;
	val = LOAD32(*in + 13);
	(*out)[34] |= (val << 8) & 0xfff;
	(*out)[35] = (val >> 4) & 0xfff;
	(*out)[36] = (val >> 16) & 0xfff;
	(*out)[37] = (val >> 28) & 0xfff;
	val = LOAD32(*in + 14);
	(*out)[37] |= (val << 4) & 0xfff;
	(*out)[38] = (val >> 8) & 0xfff;
	(*out)[39] = (val >> 20) & 0xfff;
	val = LOAD32(*in + 15);
	(*out)[40] = (val) & 0xfff;
	(*out)[41] = (val >> 12) & 0xfff;
	(*out)[42] = (val >> 24) & 0xfff;
	val = LOAD32(*in + 16);
	(*out)[42] |= (val << 8) & 0xfff;
	(*out)[43] = (val >> 4) & 0xfff;
	(*out)[44] = (val >> 16) & 0xfff;
	(*out)[45] = (val >> 28) & 0xfff;
	val = LOAD32(*in + 17);
	(*out)[45] |= (val << 4) & 0xfff;
	(*out)[46] = (val >> 8) & 0xfff;
	(*out)[47] = (val >> 20) & 0xfff;
	val = LOAD32(*in + 18);
	(*out)[48] = (val) & 0xfff;
	(*out)[49] = (val >> 12) & 0xfff;
	(*out)[50] = (val >> 24) & 0xfff;
	val = LOAD32(*in + 19);
	(*out)[50] |= (val << 8) & 0xfff;
	(*out)[51] = (val >> 4) & 0xfff;
	(*out)[52] = (val >> 16) & 0xfff;
	(*out)[53] = (val >> 28) & 0xfff;
	val = LOAD32(*in + 20);
	(*out)[53] |= (val << 4) & 0xfff;
	(*out)[54] = (val >> 8) & 0xfff;
	(*out)[55] = (val >> 20) & 0xfff;
	val = LOAD32(*in + 21);
	(*out)[56] = (val) & 0xfff;
	(*out)[57] = (val >> 12) & 0xfff;
	(*out)[58] = (val >> 24) & 0xfff;
	val = LOAD32(*in + 22);
	(*out)[58] |= (val << 8) & 0xfff;
	(*out)[59] = (val >> 4) & 0xfff;
	(*out)[60] = (val >> 16) & 0xfff;
	(*out)[61] = (val >> 28) & 0xfff;
	val = LOAD32(*in + 23);
	(*out)[61] |= (val << 4) & 0xfff;
	(*out)[62] = (val >> 8) & 0xfff;
	(*out)[63] = (val >> 20) & 0xfff;
	*in += 24, *out += 64;
}

/* UNPACKER: 16 */
inline void VSESIMPLE_UNPACK16_1(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xffff;
	*in += 1, *out += 1;
}

inline void VSESIMPLE_UNPACK16_2(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xffff;
	(*out)[1] = (val >> 16) & 0xffff;
	*in += 1, *out += 2;
}

inline void VSESIMPLE_UNPACK16_3(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xffff;
	(*out)[1] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 1);
	(*out)[2] = (val) & 0xffff;
	*in += 2, *out += 3;
}

inline void VSESIMPLE_UNPACK16_4(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xffff;
	(*out)[1] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 1);
	(*out)[2] = (val) & 0xffff;
	(*out)[3] = (val >> 16) & 0xffff;
	*in += 2, *out += 4;
}

inline void VSESIMPLE_UNPACK16_5(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xffff;
	(*out)[1] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 1);
	(*out)[2] = (val) & 0xffff;
	(*out)[3] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 2);
	(*out)[4] = (val) & 0xffff;
	*in += 3, *out += 5;
}

inline void VSESIMPLE_UNPACK16_6(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xffff;
	(*out)[1] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 1);
	(*out)[2] = (val) & 0xffff;
	(*out)[3] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 2);
	(*out)[4] = (val) & 0xffff;
	(*out)[5] = (val >> 16) & 0xffff;
	*in += 3, *out += 6;
}

inline void VSESIMPLE_UNPACK16_7(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xffff;
	(*out)[1] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 1);
	(*out)[2] = (val) & 0xffff;
	(*out)[3] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 2);
	(*out)[4] = (val) & 0xffff;
	(*out)[5] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 3);
	(*out)[6] = (val) & 0xffff;
	*in += 4, *out += 7;
}

inline void VSESIMPLE_UNPACK16_8(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xffff;
	(*out)[1] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 1);
	(*out)[2] = (val) & 0xffff;
	(*out)[3] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 2);
	(*out)[4] = (val) & 0xffff;
	(*out)[5] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 3);
	(*out)[6] = (val) & 0xffff;
	(*out)[7] = (val >> 16) & 0xffff;
	*in += 4, *out += 8;
}

inline void VSESIMPLE_UNPACK16_9(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xffff;
	(*out)[1] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 1);
	(*out)[2] = (val) & 0xffff;
	(*out)[3] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 2);
	(*out)[4] = (val) & 0xffff;
	(*out)[5] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 3);
	(*out)[6] = (val) & 0xffff;
	(*out)[7] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 4);
	(*out)[8] = (val) & 0xffff;
	*in += 5, *out += 9;
}

inline void VSESIMPLE_UNPACK16_10(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xffff;
	(*out)[1] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 1);
	(*out)[2] = (val) & 0xffff;
	(*out)[3] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 2);
	(*out)[4] = (val) & 0xffff;
	(*out)[5] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 3);
	(*out)[6] = (val) & 0xffff;
	(*out)[7] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 4);
	(*out)[8] = (val) & 0xffff;
	(*out)[9] = (val >> 16) & 0xffff;
	*in += 5, *out += 10;
}

inline void VSESIMPLE_UNPACK16_11(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xffff;
	(*out)[1] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 1);
	(*out)[2] = (val) & 0xffff;
	(*out)[3] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 2);
	(*out)[4] = (val) & 0xffff;
	(*out)[5] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 3);
	(*out)[6] = (val) & 0xffff;
	(*out)[7] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 4);
	(*out)[8] = (val) & 0xffff;
	(*out)[9] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 5);
	(*out)[10] = (val) & 0xffff;
	*in += 6, *out += 11;
}

inline void VSESIMPLE_UNPACK16_12(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xffff;
	(*out)[1] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 1);
	(*out)[2] = (val) & 0xffff;
	(*out)[3] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 2);
	(*out)[4] = (val) & 0xffff;
	(*out)[5] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 3);
	(*out)[6] = (val) & 0xffff;
	(*out)[7] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 4);
	(*out)[8] = (val) & 0xffff;
	(*out)[9] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 5);
	(*out)[10] = (val) & 0xffff;
	(*out)[11] = (val >> 16) & 0xffff;
	*in += 6, *out += 12;
}

inline void VSESIMPLE_UNPACK16_14(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xffff;
	(*out)[1] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 1);
	(*out)[2] = (val) & 0xffff;
	(*out)[3] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 2);
	(*out)[4] = (val) & 0xffff;
	(*out)[5] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 3);
	(*out)[6] = (val) & 0xffff;
	(*out)[7] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 4);
	(*out)[8] = (val) & 0xffff;
	(*out)[9] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 5);
	(*out)[10] = (val) & 0xffff;
	(*out)[11] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 6);
	(*out)[12] = (val) & 0xffff;
	(*out)[13] = (val >> 16) & 0xffff;
	*in += 7, *out += 14;
}

inline void VSESIMPLE_UNPACK16_16(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xffff;
	(*out)[1] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 1);
	(*out)[2] = (val) & 0xffff;
	(*out)[3] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 2);
	(*out)[4] = (val) & 0xffff;
	(*out)[5] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 3);
	(*out)[6] = (val) & 0xffff;
	(*out)[7] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 4);
	(*out)[8] = (val) & 0xffff;
	(*out)[9] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 5);
	(*out)[10] = (val) & 0xffff;
	(*out)[11] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 6);
	(*out)[12] = (val) & 0xffff;
	(*out)[13] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 7);
	(*out)[14] = (val) & 0xffff;
	(*out)[15] = (val >> 16) & 0xffff;
	*in += 8, *out += 16;
}

inline void VSESIMPLE_UNPACK16_32(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xffff;
	(*out)[1] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 1);
	(*out)[2] = (val) & 0xffff;
	(*out)[3] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 2);
	(*out)[4] = (val) & 0xffff;
	(*out)[5] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 3);
	(*out)[6] = (val) & 0xffff;
	(*out)[7] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 4);
	(*out)[8] = (val) & 0xffff;
	(*out)[9] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 5);
	(*out)[10] = (val) & 0xffff;
	(*out)[11] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 6);
	(*out)[12] = (val) & 0xffff;
	(*out)[13] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 7);
	(*out)[14] = (val) & 0xffff;
	(*out)[15] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 8);
	(*out)[16] = (val) & 0xffff;
	(*out)[17] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 9);
	(*out)[18] = (val) & 0xffff;
	(*out)[19] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 10);
	(*out)[20] = (val) & 0xffff;
	(*out)[21] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 11);
	(*out)[22] = (val) & 0xffff;
	(*out)[23] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 12);
	(*out)[24] = (val) & 0xffff;
	(*out)[25] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 13);
	(*out)[26] = (val) & 0xffff;
	(*out)[27] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 14);
	(*out)[28] = (val) & 0xffff;
	(*out)[29] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 15);
	(*out)[30] = (val) & 0xffff;
	(*out)[31] = (val >> 16) & 0xffff;
	*in += 16, *out += 32;
}

inline void VSESIMPLE_UNPACK16_64(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xffff;
	(*out)[1] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 1);
	(*out)[2] = (val) & 0xffff;
	(*out)[3] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 2);
	(*out)[4] = (val) & 0xffff;
	(*out)[5] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 3);
	(*out)[6] = (val) & 0xffff;
	(*out)[7] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 4);
	(*out)[8] = (val) & 0xffff;
	(*out)[9] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 5);
	(*out)[10] = (val) & 0xffff;
	(*out)[11] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 6);
	(*out)[12] = (val) & 0xffff;
	(*out)[13] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 7);
	(*out)[14] = (val) & 0xffff;
	(*out)[15] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 8);
	(*out)[16] = (val) & 0xffff;
	(*out)[17] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 9);
	(*out)[18] = (val) & 0xffff;
	(*out)[19] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 10);
	(*out)[20] = (val) & 0xffff;
	(*out)[21] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 11);
	(*out)[22] = (val) & 0xffff;
	(*out)[23] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 12);
	(*out)[24] = (val) & 0xffff;
	(*out)[25] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 13);
	(*out)[26] = (val) & 0xffff;
	(*out)[27] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 14);
	(*out)[28] = (val) & 0xffff;
	(*out)[29] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 15);
	(*out)[30] = (val) & 0xffff;
	(*out)[31] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 16);
	(*out)[32] = (val) & 0xffff;
	(*out)[33] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 17);
	(*out)[34] = (val) & 0xffff;
	(*out)[35] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 18);
	(*out)[36] = (val) & 0xffff;
	(*out)[37] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 19);
	(*out)[38] = (val) & 0xffff;
	(*out)[39] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 20);
	(*out)[40] = (val) & 0xffff;
	(*out)[41] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 21);
	(*out)[42] = (val) & 0xffff;
	(*out)[43] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 22);
	(*out)[44] = (val) & 0xffff;
	(*out)[45] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 23);
	(*out)[46] = (val) & 0xffff;
	(*out)[47] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 24);
	(*out)[48] = (val) & 0xffff;
	(*out)[49] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 25);
	(*out)[50] = (val) & 0xffff;
	(*out)[51] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 26);
	(*out)[52] = (val) & 0xffff;
	(*out)[53] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 27);
	(*out)[54] = (val) & 0xffff;
	(*out)[55] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 28);
	(*out)[56] = (val) & 0xffff;
	(*out)[57] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 29);
	(*out)[58] = (val) & 0xffff;
	(*out)[59] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 30);
	(*out)[60] = (val) & 0xffff;
	(*out)[61] = (val >> 16) & 0xffff;
	val = LOAD32(*in + 31);
	(*out)[62] = (val) & 0xffff;
	(*out)[63] = (val >> 16) & 0xffff;
	*in += 32, *out += 64;
}

/* UNPACKER: 20 */
inline void VSESIMPLE_UNPACK20_1(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xfffff;
	*in += 1, *out += 1;
}

inline void VSESIMPLE_UNPACK20_2(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xfffff;
	(*out)[1] = (val >> 20) & 0xfffff;
	val = LOAD32(*in + 1);
	(*out)[1] |= (val << 12) & 0xfffff;
	*in += 2, *out += 2;
}

inline void VSESIMPLE_UNPACK20_3(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xfffff;
	(*out)[1] = (val >> 20) & 0xfffff;
	val = LOAD32(*in + 1);
	(*out)[1] |= (val << 12) & 0xfffff;
	(*out)[2] = (val >> 8) & 0xfffff;
	*in += 2, *out += 3;
}

inline void VSESIMPLE_UNPACK20_4(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xfffff;
	(*out)[1] = (val >> 20) & 0xfffff;
	val = LOAD32(*in + 1);
	(*out)[1] |= (val << 12) & 0xfffff;
	(*out)[2] = (val >> 8) & 0xfffff;
	(*out)[3] = (val >> 28) & 0xfffff;
	val = LOAD32(*in + 2);
	(*out)[3] |= (val << 4) & 0xfffff;
	*in += 3, *out += 4;
}

inline void VSESIMPLE_UNPACK20_5(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xfffff;
	(*out)[1] = (val >> 20) & 0xfffff;
	val = LOAD32(*in + 1);
	(*out)[1] |= (val << 12) & 0xfffff;
	(*out)[2] = (val >> 8) & 0xfffff;
	(*out)[3] = (val >> 28) & 0xfffff;
	val = LOAD32(*in + 2);
	(*out)[3] |= (val << 4) & 0xfffff;
	(*out)[4] = (val >> 16) & 0xfffff;
	val = LOAD32(*in + 3);
	(*out)[4] |= (val << 16) & 0xfffff;
	*in += 4, *out += 5;
}

inline void VSESIMPLE_UNPACK20_6(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xfffff;
	(*out)[1] = (val >> 20) & 0xfffff;
	val = LOAD32(*in + 1);
	(*out)[1] |= (val << 12) & 0xfffff;
	(*out)[2] = (val >> 8) & 0xfffff;
	(*out)[3] = (val >> 28) & 0xfffff;
	val = LOAD32(*in + 2);
	(*out)[3] |= (val << 4) & 0xfffff;
	(*out)[4] = (val >> 16) & 0xfffff;
	val = LOAD32(*in + 3);
	(*out)[4] |= (val << 16) & 0xfffff;
	(*out)[5] = (val >> 4) & 0xfffff;
	*in += 4, *out += 6;
}

inline void VSESIMPLE_UNPACK20_7(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xfffff;
	(*out)[1] = (val >> 20) & 0xfffff;
	val = LOAD32(*in + 1);
	(*out)[1] |= (val << 12) & 0xfffff;
	(*out)[2] = (val >> 8) & 0xfffff;
	(*out)[3] = (val >> 28) & 0xfffff;
	val = LOAD32(*in + 2);
	(*out)[3] |= (val << 4) & 0xfffff;
	(*out)[4] = (val >> 16) & 0xfffff;
	val = LOAD32(*in + 3);
	(*out)[4] |= (val << 16) & 0xfffff;
	(*out)[5] = (val >> 4) & 0xfffff;
	(*out)[6] = (val >> 24) & 0xfffff;
	val = LOAD32(*in + 4);
	(*out)[6] |= (val << 8) & 0xfffff;
	*in += 5, *out += 7;
}

inline void VSESIMPLE_UNPACK20_8(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xfffff;
	(*out)[1] = (val >> 20) & 0xfffff;
	val = LOAD32(*in + 1);
	(*out)[1] |= (val << 12) & 0xfffff;
	(*out)[2] = (val >> 8) & 0xfffff;
	(*out)[3] = (val >> 28) & 0xfffff;
	val = LOAD32(*in + 2);
	(*out)[3] |= (val << 4) & 0xfffff;
	(*out)[4] = (val >> 16) & 0xfffff;
	val = LOAD32(*in + 3);
	(*out)[4] |= (val << 16) & 0xfffff;
	(*out)[5] = (val >> 4) & 0xfffff;
	(*out)[6] = (val >> 24) & 0xfffff;
	val = LOAD32(*in + 4);
	(*out)[6] |= (val << 8) & 0xfffff;
	(*out)[7] = (val >> 12) & 0xfffff;
	*in += 5, *out += 8;
}

inline void VSESIMPLE_UNPACK20_9(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xfffff;
	(*out)[1] = (val >> 20) & 0xfffff;
	val = LOAD32(*in + 1);
	(*out)[1] |= (val << 12) & 0xfffff;
	(*out)[2] = (val >> 8) & 0xfffff;
	(*out)[3] = (val >> 28) & 0xfffff;
	val = LOAD32(*in + 2);
	(*out)[3] |= (val << 4) & 0xfffff;
	(*out)[4] = (val >> 16) & 0xfffff;
	val = LOAD32(*in + 3);
	(*out)[4] |= (val << 16) & 0xfffff;
	(*out)[5] = (val >> 4) & 0xfffff;
	(*out)[6] = (val >> 24) & 0xfffff;
	val = LOAD32(*in + 4);
	(*out)[6] |= (val << 8) & 0xfffff;
	(*out)[7] = (val >> 12) & 0xfffff;
	val = LOAD32(*in + 5);
	(*out)[8] = (val) & 0xfffff;
	*in += 6, *out += 9;
}

inline void VSESIMPLE_UNPACK20_10(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xfffff;
	(*out)[1] = (val >> 20) & 0xfffff;
	val = LOAD32(*in + 1);
	(*out)[1] |= (val << 12) & 0xfffff;
	(*out)[2] = (val >> 8) & 0xfffff;
	(*out)[3] = (val >> 28) & 0xfffff;
	val = LOAD32(*in + 2);
	(*out)[3] |= (val << 4) & 0xfffff;
	(*out)[4] = (val >> 16) & 0xfffff;
	val = LOAD32(*in + 3);
	(*out)[4] |= (val << 16) & 0xfffff;
	(*out)[5] = (val >> 4) & 0xfffff;
	(*out)[6] = (val >> 24) & 0xfffff;
	val = LOAD32(*in + 4);
	(*out)[6] |= (val << 8) & 0xfffff;
	(*out)[7] = (val >> 12) & 0xfffff;
	val = LOAD32(*in + 5);
	(*out)[8] = (val) & 0xfffff;
	(*out)[9] = (val >> 20) & 0xfffff;
	val = LOAD32(*in + 6);
	(*out)[9] |= (val << 12) & 0xfffff;
	*in += 7, *out += 10;
}

inline void VSESIMPLE_UNPACK20_11(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xfffff;
	(*out)[1] = (val >> 20) & 0xfffff;
	val = LOAD32(*in + 1);
	(*out)[1] |= (val << 12) & 0xfffff;
	(*out)[2] = (val >> 8) & 0xfffff;
	(*out)[3] = (val >> 28) & 0xfffff;
	val = LOAD32(*in + 2);
	(*out)[3] |= (val << 4) & 0xfffff;
	(*out)[4] = (val >> 16) & 0xfffff;
	val = LOAD32(*in + 3);
	(*out)[4] |= (val << 16) & 0xfffff;
	(*out)[5] = (val >> 4) & 0xfffff;
	(*out)[6] = (val >> 24) & 0xfffff;
	val = LOAD32(*in + 4);
	(*out)[6] |= (val << 8) & 0xfffff;
	(*out)[7] = (val >> 12) & 0xfffff;
	val = LOAD32(*in + 5);
	(*out)[8] = (val) & 0xfffff;
	(*out)[9] = (val >> 20) & 0xfffff;
	val = LOAD32(*in + 6);
	(*out)[9] |= (val << 12) & 0xfffff;
	(*out)[10] = (val >> 8) & 0xfffff;
	*in += 7, *out += 11;
}

inline void VSESIMPLE_UNPACK20_12(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xfffff;
	(*out)[1] = (val >> 20) & 0xfffff;
	val = LOAD32(*in + 1);
	(*out)[1] |= (val << 12) & 0xfffff;
	(*out)[2] = (val >> 8) & 0xfffff;
	(*out)[3] = (val >> 28) & 0xfffff;
	val = LOAD32(*in + 2);
	(*out)[3] |= (val << 4) & 0xfffff;
	(*out)[4] = (val >> 16) & 0xfffff;
	val = LOAD32(*in + 3);
	(*out)[4] |= (val << 16) & 0xfffff;
	(*out)[5] = (val >> 4) & 0xfffff;
	(*out)[6] = (val >> 24) & 0xfffff;
	val = LOAD32(*in + 4);
	(*out)[6] |= (val << 8) & 0xfffff;
	(*out)[7] = (val >> 12) & 0xfffff;
	val = LOAD32(*in + 5);
	(*out)[8] = (val) & 0xfffff;
	(*out)[9] = (val >> 20) & 0xfffff;
	val = LOAD32(*in + 6);
	(*out)[9] |= (val << 12) & 0xfffff;
	(*out)[10] = (val >> 8) & 0xfffff;
	(*out)[11] = (val >> 28) & 0xfffff;
	val = LOAD32(*in + 7);
	(*out)[11] |= (val << 4) & 0xfffff;
	*in += 8, *out += 12;
}

inline void VSESIMPLE_UNPACK20_14(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xfffff;
	(*out)[1] = (val >> 20) & 0xfffff;
	val = LOAD32(*in + 1);
	(*out)[1] |= (val << 12) & 0xfffff;
	(*out)[2] = (val >> 8) & 0xfffff;
	(*out)[3] = (val >> 28) & 0xfffff;
	val = LOAD32(*in + 2);
	(*out)[3] |= (val << 4) & 0xfffff;
	(*out)[4] = (val >> 16) & 0xfffff;
	val = LOAD32(*in + 3);
	(*out)[4] |= (val << 16) & 0xfffff;
	(*out)[5] = (val >> 4) & 0xfffff;
	(*out)[6] = (val >> 24) & 0xfffff;
	val = LOAD32(*in + 4);
	(*out)[6] |= (val << 8) & 0xfffff;
	(*out)[7] = (val >> 12) & 0xfffff;
	val = LOAD32(*in + 5);
	(*out)[8] = (val) & 0xfffff;
	(*out)[9] = (val >> 20) & 0xfffff;
	val = LOAD32(*in + 6);
	(*out)[9] |= (val << 12) & 0xfffff;
	(*out)[10] = (val >> 8) & 0xfffff;
	(*out)[11] = (val >> 28) & 0xfffff;
	val = LOAD32(*in + 7);
	(*out)[11] |= (val << 4) & 0xfffff;
	(*out)[12] = (val >> 16) & 0xfffff;
	val = LOAD32(*in + 8);
	(*out)[12] |= (val << 16) & 0xfffff;
	(*out)[13] = (val >> 4) & 0xfffff;
	*in += 9, *out += 14;
}

inline void VSESIMPLE_UNPACK20_16(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xfffff;
	(*out)[1] = (val >> 20) & 0xfffff;
	val = LOAD32(*in + 1);
	(*out)[1] |= (val << 12) & 0xfffff;
	(*out)[2] = (val >> 8) & 0xfffff;
	(*out)[3] = (val >> 28) & 0xfffff;
	val = LOAD32(*in + 2);
	(*out)[3] |= (val << 4) & 0xfffff;
	(*out)[4] = (val >> 16) & 0xfffff;
	val = LOAD32(*in + 3);
	(*out)[4] |= (val << 16) & 0xfffff;
	(*out)[5] = (val >> 4) & 0xfffff;
	(*out)[6] = (val >> 24) & 0xfffff;
	val = LOAD32(*in + 4);
	(*out)[6] |= (val << 8) & 0xfffff;
	(*out)[7] = (val >> 12) & 0xfffff;
	val = LOAD32(*in + 5);
	(*out)[8] = (val) & 0xfffff;
	(*out)[9] = (val >> 20) & 0xfffff;
	val = LOAD32(*in + 6);
	(*out)[9] |= (val << 12) & 0xfffff;
	(*out)[10] = (val >> 8) & 0xfffff;
	(*out)[11] = (val >> 28) & 0xfffff;
	val = LOAD32(*in + 7);
	(*out)[11] |= (val << 4) & 0xfffff;
	(*out)[12] = (val >> 16) & 0xfffff;
	val = LOAD32(*in + 8);
	(*out)[12] |= (val << 16) & 0xfffff;
	(*out)[13] = (val >> 4) & 0xfffff;
	(*out)[14] = (val >> 24) & 0xfffff;
	val = LOAD32(*in + 9);
	(*out)[14] |= (val << 8) & 0xfffff;
	(*out)[15] = (val >> 12) & 0xfffff;
	*in += 10, *out += 16;
}

inline void VSESIMPLE_UNPACK20_32(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xfffff;
	(*out)[1] = (val >> 20) & 0xfffff;
	val = LOAD32(*in + 1);
	(*out)[1] |= (val << 12) & 0xfffff;
	(*out)[2] = (val >> 8) & 0xfffff;
	(*out)[3] = (val >> 28) & 0xfffff;
	val = LOAD32(*in + 2);
	(*out)[3] |= (val << 4) & 0xfffff;
	(*out)[4] = (val >> 16) & 0xfffff;
	val = LOAD32(*in + 3);
	(*out)[4] |= (val << 16) & 0xfffff;
	(*out)[5] = (val >> 4) & 0xfffff;
	(*out)[6] = (val >> 24) & 0xfffff;
	val = LOAD32(*in + 4);
	(*out)[6] |= (val << 8) & 0xfffff;
	(*out)[7] = (val >> 12) & 0xfffff;
	val = LOAD32(*in + 5);
	(*out)[8] = (val) & 0xfffff;
	(*out)[9] = (val >> 20) & 0xfffff;
	val = LOAD32(*in + 6);
	(*out)[9] |= (val << 12) & 0xfffff;
	(*out)[10] = (val >> 8) & 0xfffff;
	(*out)[11] = (val >> 28) & 0xfffff;
	val = LOAD32(*in + 7);
	(*out)[11] |= (val << 4) & 0xfffff;
	(*out)[12] = (val >> 16) & 0xfffff;
	val = LOAD32(*in + 8);
	(*out)[12] |= (val << 16) & 0xfffff;
	(*out)[13] = (val >> 4) & 0xfffff;
	(*out)[14] = (val >> 24) & 0xfffff;
	val = LOAD32(*in + 9);
	(*out)[14] |= (val << 8) & 0xfffff;
	(*out)[15] = (val >> 12) & 0xfffff;
	val = LOAD32(*in + 10);
	(*out)[16] = (val) & 0xfffff;
	(*out)[17] = (val >> 20) & 0xfffff;
	val = LOAD32(*in + 11);
	(*out)[17] |= (val << 12) & 0xfffff;
	(*out)[18] = (val >> 8) & 0xfffff;
	(*out)[19] = (val >> 28) & 0xfffff;
	val = LOAD32(*in + 12);
	(*out)[19] |= (val << 4) & 0xfffff;
	(*out)[20] = (val >> 16) & 0xfffff;
	val = LOAD32(*in + 13);
	(*out)[20] |= (val << 16) & 0xfffff;
	(*out)[21] = (val >> 4) & 0xfffff;
	(*out)[22] = (val >> 24) & 0xfffff;
	val = LOAD32(*in + 14);
	(*out)[22] |= (val << 8) & 0xfffff;
	(*out)[23] = (val >> 12) & 0xfffff;
	val = LOAD32(*in + 15);
	(*out)[24] = (val) & 0xfffff;
	(*out)[25] = (val >> 20) & 0xfffff;
	val = LOAD32(*in + 16);
	(*out)[25] |= (val << 12) & 0xfffff;
	(*out)[26] = (val >> 8) & 0xfffff;
	(*out)[27] = (val >> 28) & 0xfffff;
	val = LOAD32(*in + 17);
	(*out)[27] |= (val << 4) & 0xfffff;
	(*out)[28] = (val >> 16) & 0xfffff;
	val = LOAD32(*in + 18);
	(*out)[28] |= (val << 16) & 0xfffff;
	(*out)[29] = (val >> 4) & 0xfffff;
	(*out)[30] = (val >> 24) & 0xfffff;
	val = LOAD32(*in + 19);
	(*out)[30] |= (val << 8) & 0xfffff;
	(*out)[31] = (val >> 12) & 0xfffff;
	*in += 20, *out += 32;
}

inline void VSESIMPLE_UNPACK20_64(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	uint32_t val;
	val = LOAD32(*in);
	(*out)[0] = (val) & 0xfffff;
	(*out)[1] = (val >> 20) & 0xfffff;
	val = LOAD32(*in + 1);
	(*out)[1] |= (val << 12) & 0xfffff;
	(*out)[2] = (val >> 8) & 0xfffff;
	(*out)[3] = (val >> 28) & 0xfffff;
	val = LOAD32(*in + 2);
	(*out)[3] |= (val << 4) & 0xfffff;
	(*out)[4] = (val >> 16) & 0xfffff;
	val = LOAD32(*in + 3);
	(*out)[4] |= (val << 16) & 0xfffff;
	(*out)[5] = (val >> 4) & 0xfffff;
	(*out)[6] = (val >> 24) & 0xfffff;
	val = LOAD32(*in + 4);
	(*out)[6] |= (val << 8) & 0xfffff;
	(*out)[7] = (val >> 12) & 0xfffff;
	val = LOAD32(*in + 5);
	(*out)[8] = (val) & 0xfffff;
	(*out)[9] = (val >> 20) & 0xfffff;
	val = LOAD32(*in + 6);
	(*out)[9] |= (val << 12) & 0xfffff;
	(*out)[10] = (val >> 8) & 0xfffff;
	(*out)[11] = (val >> 28) & 0xfffff;
	val = LOAD32(*in + 7);
	(*out)[11] |= (val << 4) & 0xfffff;
	(*out)[12] = (val >> 16) & 0xfffff;
	val = LOAD32(*in + 8);
	(*out)[12] |= (val << 16) & 0xfffff;
	(*out)[13] = (val >> 4) & 0xfffff;
	(*out)[14] = (val >> 24) & 0xfffff;
	val = LOAD32(*in + 9);
	(*out)[14] |= (val << 8) & 0xfffff;
	(*out)[15] = (val >> 12) & 0xfffff;
	val = LOAD32(*in + 10);
	(*out)[16] = (val) & 0xfffff;
	(*out)[17] = (val >> 20) & 0xfffff;
	val = LOAD32(*in + 11);
	(*out)[17] |= (val << 12) & 0xfffff;
	(*out)[18] = (val >> 8) & 0xfffff;
	(*out)[19] = (val >> 28) & 0xfffff;
	val = LOAD32(*in + 12);
	(*out)[19] |= (val << 4) & 0xfffff;
	(*out)[20] = (val >> 16) & 0xfffff;
	val = LOAD32(*in + 13);
	(*out)[20] |= (val << 16) & 0xfffff;
	(*out)[21] = (val >> 4) & 0xfffff;
	(*out)[22] = (val >> 24) & 0xfffff;
	val = LOAD32(*in + 14);
	(*out)[22] |= (val << 8) & 0xfffff;
	(*out)[23] = (val >> 12) & 0xfffff;
	val = LOAD32(*in + 15);
	(*out)[24] = (val) & 0xfffff;
	(*out)[25] = (val >> 20) & 0xfffff;
	val = LOAD32(*in + 16);
	(*out)[25] |= (val << 12) & 0xfffff;
	(*out)[26] = (val >> 8) & 0xfffff;
	(*out)[27] = (val >> 28) & 0xfffff;
	val = LOAD32(*in + 17);
	(*out)[27] |= (val << 4) & 0xfffff;
	(*out)[28] = (val >> 16) & 0xfffff;
	val = LOAD32(*in + 18);
	(*out)[28] |= (val << 16) & 0xfffff;
	(*out)[29] = (val >> 4) & 0xfffff;
	(*out)[30] = (val >> 24) & 0xfffff;
	val = LOAD32(*in + 19);
	(*out)[30] |= (val << 8) & 0xfffff;
	(*out)[31] = (val >> 12) & 0xfffff;
	val = LOAD32(*in + 20);
	(*out)[32] = (val) & 0xfffff;
	(*out)[33] = (val >> 20) & 0xfffff;
	val = LOAD32(*in + 21);
	(*out)[33] |= (val << 12) & 0xfffff;
	(*out)[34] = (val >> 8) & 0xfffff;
	(*out)[35] = (val >> 28) & 0xfffff;
	val = LOAD32(*in + 22);
	(*out)[35] |= (val << 4) & 0xfffff;
	(*out)[36] = (val >> 16) & 0xfffff;
	val = LOAD32(*in + 23);
	(*out)[36] |= (val << 16) & 0xfffff;
	(*out)[37] = (val >> 4) & 0xfffff;
	(*out)[38] = (val >> 24) & 0xfffff;
	val = LOAD32(*in + 24);
	(*out)[38] |= (val << 8) & 0xfffff;
	(*out)[39] = (val >> 12) & 0xfffff;
	val = LOAD32(*in + 25);
	(*out)[40] = (val) & 0xfffff;
	(*out)[41] = (val >> 20) & 0xfffff;
	val = LOAD32(*in + 26);
	(*out)[41] |= (val << 12) & 0xfffff;
	(*out)[42] = (val >> 8) & 0xfffff;
	(*out)[43] = (val >> 28) & 0xfffff;
	val = LOAD32(*in + 27);
	(*out)[43] |= (val << 4) & 0xfffff;
	(*out)[44] = (val >> 16) & 0xfffff;
	val = LOAD32(*in + 28);
	(*out)[44] |= (val << 16) & 0xfffff;
	(*out)[45] = (val >> 4) & 0xfffff;
	(*out)[46] = (val >> 24) & 0xfffff;
	val = LOAD32(*in + 29);
	(*out)[46] |= (val << 8) & 0xfffff;
	(*out)[47] = (val >> 12) & 0xfffff;
	val = LOAD32(*in + 30);
	(*out)[48] = (val) & 0xfffff;
	(*out)[49] = (val >> 20) & 0xfffff;
	val = LOAD32(*in + 31);
	(*out)[49] |= (val << 12) & 0xfffff;
	(*out)[50] = (val >> 8) & 0xfffff;
	(*out)[51] = (val >> 28) & 0xfffff;
	val = LOAD32(*in + 32);
	(*out)[51] |= (val << 4) & 0xfffff;
	(*out)[52] = (val >> 16) & 0xfffff;
	val = LOAD32(*in + 33);
	(*out)[52] |= (val << 16) & 0xfffff;
	(*out)[53] = (val >> 4) & 0xfffff;
	(*out)[54] = (val >> 24) & 0xfffff;
	val = LOAD32(*in + 34);
	(*out)[54] |= (val << 8) & 0xfffff;
	(*out)[55] = (val >> 12) & 0xfffff;
	val = LOAD32(*in + 35);
	(*out)[56] = (val) & 0xfffff;
	(*out)[57] = (val >> 20) & 0xfffff;
	val = LOAD32(*in + 36);
	(*out)[57] |= (val << 12) & 0xfffff;
	(*out)[58] = (val >> 8) & 0xfffff;
	(*out)[59] = (val >> 28) & 0xfffff;
	val = LOAD32(*in + 37);
	(*out)[59] |= (val << 4) & 0xfffff;
	(*out)[60] = (val >> 16) & 0xfffff;
	val = LOAD32(*in + 38);
	(*out)[60] |= (val << 16) & 0xfffff;
	(*out)[61] = (val >> 4) & 0xfffff;
	(*out)[62] = (val >> 24) & 0xfffff;
	val = LOAD32(*in + 39);
	(*out)[62] |= (val << 8) & 0xfffff;
	(*out)[63] = (val >> 12) & 0xfffff;
	*in += 40, *out += 64;
}

/* UNPACKER: 32 */
inline void VSESIMPLE_UNPACK32_1(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	(*out)[0] = LOAD32(*in);
	*in += 1, *out += 1;
}

inline void VSESIMPLE_UNPACK32_2(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	for (uint32_t i = 0; i < 2; i++, *in += 1, *out += 1)
		(*out)[0] = LOAD32(*in);
}

inline void VSESIMPLE_UNPACK32_3(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	for (uint32_t i = 0; i < 3; i++, *in += 1, *out += 1)
		(*out)[0] = LOAD32(*in);
}

inline void VSESIMPLE_UNPACK32_4(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	for (uint32_t i = 0; i < 4; i++, *in += 1, *out += 1)
		(*out)[0] = LOAD32(*in);
}

inline void VSESIMPLE_UNPACK32_5(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	for (uint32_t i = 0; i < 5; i++, *in += 1, *out += 1)
		(*out)[0] = LOAD32(*in);
}

inline void VSESIMPLE_UNPACK32_6(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	for (uint32_t i = 0; i < 6; i++, *in += 1, *out += 1)
		(*out)[0] = LOAD32(*in);
}

inline void VSESIMPLE_UNPACK32_7(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	for (uint32_t i = 0; i < 7; i++, *in += 1, *out += 1)
		(*out)[0] = LOAD32(*in);
}

inline void VSESIMPLE_UNPACK32_8(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	for (uint32_t i = 0; i < 8; i++, *in += 1, *out += 1)
		(*out)[0] = LOAD32(*in);
}

inline void VSESIMPLE_UNPACK32_9(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	for (uint32_t i = 0; i < 9; i++, *in += 1, *out += 1)
		(*out)[0] = LOAD32(*in);

}

inline void VSESIMPLE_UNPACK32_10(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	for (uint32_t i = 0; i < 10; i++, *in += 1, *out += 1)
		(*out)[0] = LOAD32(*in);
}

inline void VSESIMPLE_UNPACK32_11(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	for (uint32_t i = 0; i < 11; i++, *in += 1, *out += 1)
		(*out)[0] = LOAD32(*in);
}

inline void VSESIMPLE_UNPACK32_12(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	for (uint32_t i = 0; i < 12; i++, *in += 1, *out += 1)
		(*out)[0] = LOAD32(*in);
}

inline void VSESIMPLE_UNPACK32_14(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	for (uint32_t i = 0; i < 14; i++, *in += 1, *out += 1)
		(*out)[0] = LOAD32(*in);
}

inline void VSESIMPLE_UNPACK32_16(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	for (uint32_t i = 0; i < 16; i++, *in += 1, *out += 1)
		(*out)[0] = LOAD32(*in);
}

inline void VSESIMPLE_UNPACK32_32(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	for (uint32_t i = 0; i < 32; i++, *in += 1, *out += 1)
		(*out)[0] = LOAD32(*in);
}

inline void VSESIMPLE_UNPACK32_64(uint32_t ** restrict out,
		const uint32_t ** restrict in) {
	for (uint32_t i = 0; i < 64; i++, *in += 1, *out += 1)
		(*out)[0] = LOAD32(*in);
}

/*
 * NOTE: This has two following improved things
 * as compared th other alternative:
 *
 * 1. each partition determined by the dynamic
 * programming is layouted with 32-bit alignments
 * for performance reasons. It has the advantage of
 * less coping stuffs caused by VSEncodingBlocks,
 * but increases wasteful padding areas exploited
 * by VSEncodingRest.
 *
 * 2. a direct threading technique known in VM
 * domins is employed to dispacth unpacking
 * functions correspoinding to compressed
 * partitions, and it cound reduce the penalty
 * of indirect jumps.
 */
class VSEncodingSimple: public Compressor {

public:
	VSEncodingSimple();
	~VSEncodingSimple();

	virtual int
	encodeUint32(char* des, const uint32_t* src, uint32_t encodeNum);
	virtual int
	decodeUint32(uint32_t* des, const char* src, uint32_t decodeNum);

	virtual int
	encodeUint16(char* des, const uint16_t* src, uint32_t encodeNum);
	virtual int
	decodeUint16(uint16_t* des, const char* src, uint32_t decodeNum);

	virtual int encodeUint8(char* des, const uint8_t* src, uint32_t encodeNum);
	virtual int decodeUint8(uint8_t* des, const char* src, uint32_t decodeNum);
	virtual std::string getCompressorName() {
		return "vse_simple";
	}
	virtual Compressor* clone();

private:

	template<typename T>
	int encode(char* des, const T* src, uint32_t length);

	template<typename T>
	int decode(T* des, const char* src, uint32_t length);

	const static uint32_t VSESIMPLE_LOGLEN;
	const static uint32_t VSESIMPLE_LOGLOG;

	const static uint32_t VSESIMPLE_LOGDESC;

	const static uint32_t VSESIMPLE_LENS_LEN;
	const static uint32_t VSESIMPLE_LOGS_LEN;
	const static uint32_t VSESIMPLE_LEN;

	const static uint32_t VSESIMPLE_LENS[16];

	const static uint32_t VSESIMPLE_REMAPLOGS[33];

	const static uint32_t VSESIMPLE_CODELOGS[33];

	VSEncodingDP *vdp_; 
	void **jtable_;
	//std::tr1::shared_ptr<void *> jtable_;
	//std::tr1::shared_ptr<VSEncodingDP> vdp_;

};
/* VSEncodingSimple */

template<typename T>
int VSEncodingSimple::encode(char* des, const T* src, uint32_t length) {
	const uint32_t *in = (const uint32_t *) src;
	uint32_t *out = (uint32_t*) des;
	uint64_t len = length;

	if (in == NULL)
	THROW_ENCODING_EXCEPTION("Invalid input: in");
	if (len == 0)
	THROW_ENCODING_EXCEPTION("Invalid input: len");
	if (out == NULL)
	THROW_ENCODING_EXCEPTION("Invalid input: out");

	/* Compute optimal partition */
	std::vector<uint32_t> logs;
	std::vector<uint32_t> parts;

	for (uint64_t i = 0; i < len; i++)
	logs.push_back(VSESIMPLE_REMAPLOGS[32 - MSB32(in[i])]);

	ASSERT(logs.size() == len);
	ASSERT(parts.size() == 0);

	vdp_->computePartition(logs, &parts, VSESIMPLE_LOGLEN + VSESIMPLE_LOGLOG);
	ASSERT(parts.size() > 1);

	uint32_t num = parts.size() - 1;
	STORE32(out, num);
	uint32_t *nvalue = out + 1;

	out += 2;

	uint64_t offset = DIV_ROUNDUP(num, 4);

	/* Ready to write data */
	BitWriter wt1(out, offset);
	BitWriter wt2(out + offset);

	for (uint64_t i = 0; i < num; i++) {
		/* Compute max B in the block */
		uint32_t maxB = 0;

		for (uint64_t j = parts[i]; j < parts[i + 1]; j++) {
			if (maxB < logs[j])
			maxB = logs[j];
		}

		/* Compute the code for the block length */
		uint32_t idx = 0;

		for (; idx < ARRAYSIZE(VSESIMPLE_LENS); idx++) {
			if (parts[i + 1] - parts[i] == VSESIMPLE_LENS[idx])
			break;
		}

		/* Write integers */
		for (uint64_t j = parts[i]; j < parts[i + 1]; j++)
		wt2.putBinary(in[j], maxB);

		/* Align to 32-bit */
		wt2.alignTo32Bit();

		/* Write the value of K and B */
		wt1.putBinary(idx, VSESIMPLE_LOGLEN); //K
		wt1.putBinary(VSESIMPLE_CODELOGS[maxB], VSESIMPLE_LOGLOG); //B
	}

	wt1.alignTo32Bit();
	STORE32 (nvalue, 2 * sizeof(uint32_t) + wt1.getByteLenWritten() + wt2.getByteLenWritten());
	return *nvalue;
}

template<typename T>
int VSEncodingSimple::decode(T* des, const char* src, uint32_t length) {
	const uint32_t *in = (const uint32_t *) src;
	uint32_t *out = (uint32_t *) des;
	//uint64_t len = length;
	uint32_t decoded = 0;

	if (in == NULL)
		THROW_ENCODING_EXCEPTION("Invalid input: in");
	if (out == NULL)
		THROW_ENCODING_EXCEPTION("Invalid input: out");

	/* Get a working space */
	void **jtable = jtable_;

	static void *VSESIMPLE_UNPACK[VSESIMPLE_LEN] = {
	/* UNPACKER: 0 */
	&&VSESIMPLE_U0_1, &&VSESIMPLE_U0_2,
	&&VSESIMPLE_U0_3, &&VSESIMPLE_U0_4,
	&&VSESIMPLE_U0_5, &&VSESIMPLE_U0_6,
	&&VSESIMPLE_U0_7, &&VSESIMPLE_U0_8,
	&&VSESIMPLE_U0_9, &&VSESIMPLE_U0_10,
	&&VSESIMPLE_U0_11, &&VSESIMPLE_U0_12,
	&&VSESIMPLE_U0_14, &&VSESIMPLE_U0_16,
	&&VSESIMPLE_U0_32, &&VSESIMPLE_U0_64,

	/* UNPACKER: 1 */
	&&VSESIMPLE_U1_1, &&VSESIMPLE_U1_2,
	&&VSESIMPLE_U1_3, &&VSESIMPLE_U1_4,
	&&VSESIMPLE_U1_5, &&VSESIMPLE_U1_6,
	&&VSESIMPLE_U1_7, &&VSESIMPLE_U1_8,
	&&VSESIMPLE_U1_9, &&VSESIMPLE_U1_10,
	&&VSESIMPLE_U1_11, &&VSESIMPLE_U1_12,
	&&VSESIMPLE_U1_14, &&VSESIMPLE_U1_16,
	&&VSESIMPLE_U1_32, &&VSESIMPLE_U1_64,

	/* UNPACKER: 2 */
	&&VSESIMPLE_U2_1, &&VSESIMPLE_U2_2,
	&&VSESIMPLE_U2_3, &&VSESIMPLE_U2_4,
	&&VSESIMPLE_U2_5, &&VSESIMPLE_U2_6,
	&&VSESIMPLE_U2_7, &&VSESIMPLE_U2_8,
	&&VSESIMPLE_U2_9, &&VSESIMPLE_U2_10,
	&&VSESIMPLE_U2_11, &&VSESIMPLE_U2_12,
	&&VSESIMPLE_U2_14, &&VSESIMPLE_U2_16,
	&&VSESIMPLE_U2_32, &&VSESIMPLE_U2_64,

	/* UNPACKER: 3 */
	&&VSESIMPLE_U3_1, &&VSESIMPLE_U3_2,
	&&VSESIMPLE_U3_3, &&VSESIMPLE_U3_4,
	&&VSESIMPLE_U3_5, &&VSESIMPLE_U3_6,
	&&VSESIMPLE_U3_7, &&VSESIMPLE_U3_8,
	&&VSESIMPLE_U3_9, &&VSESIMPLE_U3_10,
	&&VSESIMPLE_U3_11, &&VSESIMPLE_U3_12,
	&&VSESIMPLE_U3_14, &&VSESIMPLE_U3_16,
	&&VSESIMPLE_U3_32, &&VSESIMPLE_U3_64,

	/* UNPACKER: 4 */
	&&VSESIMPLE_U4_1, &&VSESIMPLE_U4_2,
	&&VSESIMPLE_U4_3, &&VSESIMPLE_U4_4,
	&&VSESIMPLE_U4_5, &&VSESIMPLE_U4_6,
	&&VSESIMPLE_U4_7, &&VSESIMPLE_U4_8,
	&&VSESIMPLE_U4_9, &&VSESIMPLE_U4_10,
	&&VSESIMPLE_U4_11, &&VSESIMPLE_U4_12,
	&&VSESIMPLE_U4_14, &&VSESIMPLE_U4_16,
	&&VSESIMPLE_U4_32, &&VSESIMPLE_U4_64,

	/* UNPACKER: 5 */
	&&VSESIMPLE_U5_1, &&VSESIMPLE_U5_2,
	&&VSESIMPLE_U5_3, &&VSESIMPLE_U5_4,
	&&VSESIMPLE_U5_5, &&VSESIMPLE_U5_6,
	&&VSESIMPLE_U5_7, &&VSESIMPLE_U5_8,
	&&VSESIMPLE_U5_9, &&VSESIMPLE_U5_10,
	&&VSESIMPLE_U5_11, &&VSESIMPLE_U5_12,
	&&VSESIMPLE_U5_14, &&VSESIMPLE_U5_16,
	&&VSESIMPLE_U5_32, &&VSESIMPLE_U5_64,

	/* UNPACKER: 6 */
	&&VSESIMPLE_U6_1, &&VSESIMPLE_U6_2,
	&&VSESIMPLE_U6_3, &&VSESIMPLE_U6_4,
	&&VSESIMPLE_U6_5, &&VSESIMPLE_U6_6,
	&&VSESIMPLE_U6_7, &&VSESIMPLE_U6_8,
	&&VSESIMPLE_U6_9, &&VSESIMPLE_U6_10,
	&&VSESIMPLE_U6_11, &&VSESIMPLE_U6_12,
	&&VSESIMPLE_U6_14, &&VSESIMPLE_U6_16,
	&&VSESIMPLE_U6_32, &&VSESIMPLE_U6_64,

	/* UNPACKER: 7 */
	&&VSESIMPLE_U7_1, &&VSESIMPLE_U7_2,
	&&VSESIMPLE_U7_3, &&VSESIMPLE_U7_4,
	&&VSESIMPLE_U7_5, &&VSESIMPLE_U7_6,
	&&VSESIMPLE_U7_7, &&VSESIMPLE_U7_8,
	&&VSESIMPLE_U7_9, &&VSESIMPLE_U7_10,
	&&VSESIMPLE_U7_11, &&VSESIMPLE_U7_12,
	&&VSESIMPLE_U7_14, &&VSESIMPLE_U7_16,
	&&VSESIMPLE_U7_32, &&VSESIMPLE_U7_64,

	/* UNPACKER: 8 */
	&&VSESIMPLE_U8_1, &&VSESIMPLE_U8_2,
	&&VSESIMPLE_U8_3, &&VSESIMPLE_U8_4,
	&&VSESIMPLE_U8_5, &&VSESIMPLE_U8_6,
	&&VSESIMPLE_U8_7, &&VSESIMPLE_U8_8,
	&&VSESIMPLE_U8_9, &&VSESIMPLE_U8_10,
	&&VSESIMPLE_U8_11, &&VSESIMPLE_U8_12,
	&&VSESIMPLE_U8_14, &&VSESIMPLE_U8_16,
	&&VSESIMPLE_U8_32, &&VSESIMPLE_U8_64,

	/* UNPACKER: 9 */
	&&VSESIMPLE_U9_1, &&VSESIMPLE_U9_2,
	&&VSESIMPLE_U9_3, &&VSESIMPLE_U9_4,
	&&VSESIMPLE_U9_5, &&VSESIMPLE_U9_6,
	&&VSESIMPLE_U9_7, &&VSESIMPLE_U9_8,
	&&VSESIMPLE_U9_9, &&VSESIMPLE_U9_10,
	&&VSESIMPLE_U9_11, &&VSESIMPLE_U9_12,
	&&VSESIMPLE_U9_14, &&VSESIMPLE_U9_16,
	&&VSESIMPLE_U9_32, &&VSESIMPLE_U9_64,

	/* UNPACKER: 10 */
	&&VSESIMPLE_U10_1, &&VSESIMPLE_U10_2,
	&&VSESIMPLE_U10_3, &&VSESIMPLE_U10_4,
	&&VSESIMPLE_U10_5, &&VSESIMPLE_U10_6,
	&&VSESIMPLE_U10_7, &&VSESIMPLE_U10_8,
	&&VSESIMPLE_U10_9, &&VSESIMPLE_U10_10,
	&&VSESIMPLE_U10_11, &&VSESIMPLE_U10_12,
	&&VSESIMPLE_U10_14, &&VSESIMPLE_U10_16,
	&&VSESIMPLE_U10_32, &&VSESIMPLE_U10_64,

	/* UNPACKER: 11 */
	&&VSESIMPLE_U11_1, &&VSESIMPLE_U11_2,
	&&VSESIMPLE_U11_3, &&VSESIMPLE_U11_4,
	&&VSESIMPLE_U11_5, &&VSESIMPLE_U11_6,
	&&VSESIMPLE_U11_7, &&VSESIMPLE_U11_8,
	&&VSESIMPLE_U11_9, &&VSESIMPLE_U11_10,
	&&VSESIMPLE_U11_11, &&VSESIMPLE_U11_12,
	&&VSESIMPLE_U11_14, &&VSESIMPLE_U11_16,
	&&VSESIMPLE_U11_32, &&VSESIMPLE_U11_64,

	/* UNPACKER: 12 */
	&&VSESIMPLE_U12_1, &&VSESIMPLE_U12_2,
	&&VSESIMPLE_U12_3, &&VSESIMPLE_U12_4,
	&&VSESIMPLE_U12_5, &&VSESIMPLE_U12_6,
	&&VSESIMPLE_U12_7, &&VSESIMPLE_U12_8,
	&&VSESIMPLE_U12_9, &&VSESIMPLE_U12_10,
	&&VSESIMPLE_U12_11, &&VSESIMPLE_U12_12,
	&&VSESIMPLE_U12_14, &&VSESIMPLE_U12_16,
	&&VSESIMPLE_U12_32, &&VSESIMPLE_U12_64,

	/* UNPACKER: 16 */
	&&VSESIMPLE_U16_1, &&VSESIMPLE_U16_2,
	&&VSESIMPLE_U16_3, &&VSESIMPLE_U16_4,
	&&VSESIMPLE_U16_5, &&VSESIMPLE_U16_6,
	&&VSESIMPLE_U16_7, &&VSESIMPLE_U16_8,
	&&VSESIMPLE_U16_9, &&VSESIMPLE_U16_10,
	&&VSESIMPLE_U16_11, &&VSESIMPLE_U16_12,
	&&VSESIMPLE_U16_14, &&VSESIMPLE_U16_16,
	&&VSESIMPLE_U16_32, &&VSESIMPLE_U16_64,

	/* UNPACKER: 20 */
	&&VSESIMPLE_U20_1, &&VSESIMPLE_U20_2,
	&&VSESIMPLE_U20_3, &&VSESIMPLE_U20_4,
	&&VSESIMPLE_U20_5, &&VSESIMPLE_U20_6,
	&&VSESIMPLE_U20_7, &&VSESIMPLE_U20_8,
	&&VSESIMPLE_U20_9, &&VSESIMPLE_U20_10,
	&&VSESIMPLE_U20_11, &&VSESIMPLE_U20_12,
	&&VSESIMPLE_U20_14, &&VSESIMPLE_U20_16,
	&&VSESIMPLE_U20_32, &&VSESIMPLE_U20_64,

	/* UNPACKER: 32 */
	&&VSESIMPLE_U32_1, &&VSESIMPLE_U32_2,
	&&VSESIMPLE_U32_3, &&VSESIMPLE_U32_4,
	&&VSESIMPLE_U32_5, &&VSESIMPLE_U32_6,
	&&VSESIMPLE_U32_7, &&VSESIMPLE_U32_8,
	&&VSESIMPLE_U32_9, &&VSESIMPLE_U32_10,
	&&VSESIMPLE_U32_11, &&VSESIMPLE_U32_12,
	&&VSESIMPLE_U32_14, &&VSESIMPLE_U32_16,
	&&VSESIMPLE_U32_32, &&VSESIMPLE_U32_64
};


uint32_t num = LOAD32(in);
uint32_t compByteLen = LOAD32(in + 1);
uint64_t offset = DIV_ROUNDUP(num, 4);
const uint32_t *iterm = in + DIV_ROUNDUP(compByteLen, 4);
uint32_t *oterm = out + length;

const uint32_t *data = in + offset + 2;
in += 2;

uint64_t numBlocks = num / 4;

#define VSESIMPLE_DESC(__val__, __offset__) \
    (((__val__) >> VSESIMPLE_LOGDESC * __offset__) & (VSESIMPLE_LEN - 1))

for (uint64_t i = 0; i < numBlocks; i++, in++) {
    uint32_t val = LOAD32(in);

    jtable[i * 4] =
        VSESIMPLE_UNPACK[VSESIMPLE_DESC(val, 0)];
    jtable[i * 4 + 1] =
        VSESIMPLE_UNPACK[VSESIMPLE_DESC(val, 1)];
    jtable[i * 4 + 2] =
        VSESIMPLE_UNPACK[VSESIMPLE_DESC(val, 2)];
    jtable[i * 4 + 3] =
        VSESIMPLE_UNPACK[VSESIMPLE_DESC(val, 3)];
}

uint32_t rem = num % 4;

if (rem != 0) {
    uint32_t val = LOAD32(in);

    switch (rem) {
      case 3: {
        jtable[4 * numBlocks + 2] =
            VSESIMPLE_UNPACK[VSESIMPLE_DESC(val, 2)];
      }

      case 2: {
        jtable[4 * numBlocks + 1] =
            VSESIMPLE_UNPACK[VSESIMPLE_DESC(val, 1)];
      }

      case 1: {
        jtable[4 * numBlocks] =
            VSESIMPLE_UNPACK[VSESIMPLE_DESC(val, 0)];
	}
    }
}

jtable[4 * numBlocks + rem] = &&VSESIMPLE_RET;

#define NEXT  \
  if (UNLIKELY(out > oterm || data > iterm)) { \
    std::cout << "wrong decoding!" << std::endl;\
    return compByteLen; }\
  goto **jtable++

/* Start point for decompression */
NEXT;

/* UNAPCK 0 */
VSESIMPLE_U0_1:
VSESIMPLE_UNPACK0_1(&out, &data); NEXT;
VSESIMPLE_U0_2:
VSESIMPLE_UNPACK0_2(&out, &data); NEXT;
VSESIMPLE_U0_3:
VSESIMPLE_UNPACK0_3(&out, &data); NEXT;
VSESIMPLE_U0_4:
VSESIMPLE_UNPACK0_4(&out, &data); NEXT;
VSESIMPLE_U0_5:
VSESIMPLE_UNPACK0_5(&out, &data); NEXT;
VSESIMPLE_U0_6:
VSESIMPLE_UNPACK0_6(&out, &data); NEXT;
VSESIMPLE_U0_7:
VSESIMPLE_UNPACK0_7(&out, &data); NEXT;
VSESIMPLE_U0_8:
VSESIMPLE_UNPACK0_8(&out, &data); NEXT;
VSESIMPLE_U0_9:
VSESIMPLE_UNPACK0_9(&out, &data); NEXT;
VSESIMPLE_U0_10:
VSESIMPLE_UNPACK0_10(&out, &data); NEXT;
VSESIMPLE_U0_11:
VSESIMPLE_UNPACK0_11(&out, &data); NEXT;
VSESIMPLE_U0_12:
VSESIMPLE_UNPACK0_12(&out, &data); NEXT;
VSESIMPLE_U0_14:
VSESIMPLE_UNPACK0_14(&out, &data); NEXT;
VSESIMPLE_U0_16:
VSESIMPLE_UNPACK0_16(&out, &data); NEXT;
VSESIMPLE_U0_32:
VSESIMPLE_UNPACK0_32(&out, &data); NEXT;
VSESIMPLE_U0_64:
VSESIMPLE_UNPACK0_64(&out, &data); NEXT;

/* UNAPCK 1 */
VSESIMPLE_U1_1:
VSESIMPLE_UNPACK1_1(&out, &data); NEXT;
VSESIMPLE_U1_2:
VSESIMPLE_UNPACK1_2(&out, &data); NEXT;
VSESIMPLE_U1_3:
VSESIMPLE_UNPACK1_3(&out, &data); NEXT;
VSESIMPLE_U1_4:
VSESIMPLE_UNPACK1_4(&out, &data); NEXT;
VSESIMPLE_U1_5:
VSESIMPLE_UNPACK1_5(&out, &data); NEXT;
VSESIMPLE_U1_6:
VSESIMPLE_UNPACK1_6(&out, &data); NEXT;
VSESIMPLE_U1_7:
VSESIMPLE_UNPACK1_7(&out, &data); NEXT;
VSESIMPLE_U1_8:
VSESIMPLE_UNPACK1_8(&out, &data); NEXT;
VSESIMPLE_U1_9:
VSESIMPLE_UNPACK1_9(&out, &data); NEXT;
VSESIMPLE_U1_10:
VSESIMPLE_UNPACK1_10(&out, &data); NEXT;
VSESIMPLE_U1_11:
VSESIMPLE_UNPACK1_11(&out, &data); NEXT;
VSESIMPLE_U1_12:
VSESIMPLE_UNPACK1_12(&out, &data); NEXT;
VSESIMPLE_U1_14:
VSESIMPLE_UNPACK1_14(&out, &data); NEXT;
VSESIMPLE_U1_16:
VSESIMPLE_UNPACK1_16(&out, &data); NEXT;
VSESIMPLE_U1_32:
VSESIMPLE_UNPACK1_32(&out, &data); NEXT;
VSESIMPLE_U1_64:
VSESIMPLE_UNPACK1_64(&out, &data); NEXT;

/* UNAPCK 2 */
VSESIMPLE_U2_1:
VSESIMPLE_UNPACK2_1(&out, &data); NEXT;
VSESIMPLE_U2_2:
VSESIMPLE_UNPACK2_2(&out, &data); NEXT;
VSESIMPLE_U2_3:
VSESIMPLE_UNPACK2_3(&out, &data); NEXT;
VSESIMPLE_U2_4:
VSESIMPLE_UNPACK2_4(&out, &data); NEXT;
VSESIMPLE_U2_5:
VSESIMPLE_UNPACK2_5(&out, &data); NEXT;
VSESIMPLE_U2_6:
VSESIMPLE_UNPACK2_6(&out, &data); NEXT;
VSESIMPLE_U2_7:
VSESIMPLE_UNPACK2_7(&out, &data); NEXT;
VSESIMPLE_U2_8:
VSESIMPLE_UNPACK2_8(&out, &data); NEXT;
VSESIMPLE_U2_9:
VSESIMPLE_UNPACK2_9(&out, &data); NEXT;
VSESIMPLE_U2_10:
VSESIMPLE_UNPACK2_10(&out, &data); NEXT;
VSESIMPLE_U2_11:
VSESIMPLE_UNPACK2_11(&out, &data); NEXT;
VSESIMPLE_U2_12:
VSESIMPLE_UNPACK2_12(&out, &data); NEXT;
VSESIMPLE_U2_14:
VSESIMPLE_UNPACK2_14(&out, &data); NEXT;
VSESIMPLE_U2_16:
VSESIMPLE_UNPACK2_16(&out, &data); NEXT;
VSESIMPLE_U2_32:
VSESIMPLE_UNPACK2_32(&out, &data); NEXT;
VSESIMPLE_U2_64:
VSESIMPLE_UNPACK2_64(&out, &data); NEXT;

/* UNAPCK 3 */
VSESIMPLE_U3_1:
VSESIMPLE_UNPACK3_1(&out, &data); NEXT;
VSESIMPLE_U3_2:
VSESIMPLE_UNPACK3_2(&out, &data); NEXT;
VSESIMPLE_U3_3:
VSESIMPLE_UNPACK3_3(&out, &data); NEXT;
VSESIMPLE_U3_4:
VSESIMPLE_UNPACK3_4(&out, &data); NEXT;
VSESIMPLE_U3_5:
VSESIMPLE_UNPACK3_5(&out, &data); NEXT;
VSESIMPLE_U3_6:
VSESIMPLE_UNPACK3_6(&out, &data); NEXT;
VSESIMPLE_U3_7:
VSESIMPLE_UNPACK3_7(&out, &data); NEXT;
VSESIMPLE_U3_8:
VSESIMPLE_UNPACK3_8(&out, &data); NEXT;
VSESIMPLE_U3_9:
VSESIMPLE_UNPACK3_9(&out, &data); NEXT;
VSESIMPLE_U3_10:
VSESIMPLE_UNPACK3_10(&out, &data); NEXT;
VSESIMPLE_U3_11:
VSESIMPLE_UNPACK3_11(&out, &data); NEXT;
VSESIMPLE_U3_12:
VSESIMPLE_UNPACK3_12(&out, &data); NEXT;
VSESIMPLE_U3_14:
VSESIMPLE_UNPACK3_14(&out, &data); NEXT;
VSESIMPLE_U3_16:
VSESIMPLE_UNPACK3_16(&out, &data); NEXT;
VSESIMPLE_U3_32:
VSESIMPLE_UNPACK3_32(&out, &data); NEXT;
VSESIMPLE_U3_64:
VSESIMPLE_UNPACK3_64(&out, &data); NEXT;

/* UNAPCK 4 */
VSESIMPLE_U4_1:
VSESIMPLE_UNPACK4_1(&out, &data); NEXT;
VSESIMPLE_U4_2:
VSESIMPLE_UNPACK4_2(&out, &data); NEXT;
VSESIMPLE_U4_3:
VSESIMPLE_UNPACK4_3(&out, &data); NEXT;
VSESIMPLE_U4_4:
VSESIMPLE_UNPACK4_4(&out, &data); NEXT;
VSESIMPLE_U4_5:
VSESIMPLE_UNPACK4_5(&out, &data); NEXT;
VSESIMPLE_U4_6:
VSESIMPLE_UNPACK4_6(&out, &data); NEXT;
VSESIMPLE_U4_7:
VSESIMPLE_UNPACK4_7(&out, &data); NEXT;
VSESIMPLE_U4_8:
VSESIMPLE_UNPACK4_8(&out, &data); NEXT;
VSESIMPLE_U4_9:
VSESIMPLE_UNPACK4_9(&out, &data); NEXT;
VSESIMPLE_U4_10:
VSESIMPLE_UNPACK4_10(&out, &data); NEXT;
VSESIMPLE_U4_11:
VSESIMPLE_UNPACK4_11(&out, &data); NEXT;
VSESIMPLE_U4_12:
VSESIMPLE_UNPACK4_12(&out, &data); NEXT;
VSESIMPLE_U4_14:
VSESIMPLE_UNPACK4_14(&out, &data); NEXT;
VSESIMPLE_U4_16:
VSESIMPLE_UNPACK4_16(&out, &data); NEXT;
VSESIMPLE_U4_32:
VSESIMPLE_UNPACK4_32(&out, &data); NEXT;
VSESIMPLE_U4_64:
VSESIMPLE_UNPACK4_64(&out, &data); NEXT;

/* UNAPCK 5 */
VSESIMPLE_U5_1:
VSESIMPLE_UNPACK5_1(&out, &data); NEXT;
VSESIMPLE_U5_2:
VSESIMPLE_UNPACK5_2(&out, &data); NEXT;
VSESIMPLE_U5_3:
VSESIMPLE_UNPACK5_3(&out, &data); NEXT;
VSESIMPLE_U5_4:
VSESIMPLE_UNPACK5_4(&out, &data); NEXT;
VSESIMPLE_U5_5:
VSESIMPLE_UNPACK5_5(&out, &data); NEXT;
VSESIMPLE_U5_6:
VSESIMPLE_UNPACK5_6(&out, &data); NEXT;
VSESIMPLE_U5_7:
VSESIMPLE_UNPACK5_7(&out, &data); NEXT;
VSESIMPLE_U5_8:
VSESIMPLE_UNPACK5_8(&out, &data); NEXT;
VSESIMPLE_U5_9:
VSESIMPLE_UNPACK5_9(&out, &data); NEXT;
VSESIMPLE_U5_10:
VSESIMPLE_UNPACK5_10(&out, &data); NEXT;
VSESIMPLE_U5_11:
VSESIMPLE_UNPACK5_11(&out, &data); NEXT;
VSESIMPLE_U5_12:
VSESIMPLE_UNPACK5_12(&out, &data); NEXT;
VSESIMPLE_U5_14:
VSESIMPLE_UNPACK5_14(&out, &data); NEXT;
VSESIMPLE_U5_16:
VSESIMPLE_UNPACK5_16(&out, &data); NEXT;
VSESIMPLE_U5_32:
VSESIMPLE_UNPACK5_32(&out, &data); NEXT;
VSESIMPLE_U5_64:
VSESIMPLE_UNPACK5_64(&out, &data); NEXT;

/* UNAPCK 6 */
VSESIMPLE_U6_1:
VSESIMPLE_UNPACK6_1(&out, &data); NEXT;
VSESIMPLE_U6_2:
VSESIMPLE_UNPACK6_2(&out, &data); NEXT;
VSESIMPLE_U6_3:
VSESIMPLE_UNPACK6_3(&out, &data); NEXT;
VSESIMPLE_U6_4:
VSESIMPLE_UNPACK6_4(&out, &data); NEXT;
VSESIMPLE_U6_5:
VSESIMPLE_UNPACK6_5(&out, &data); NEXT;
VSESIMPLE_U6_6:
VSESIMPLE_UNPACK6_6(&out, &data); NEXT;
VSESIMPLE_U6_7:
VSESIMPLE_UNPACK6_7(&out, &data); NEXT;
VSESIMPLE_U6_8:
VSESIMPLE_UNPACK6_8(&out, &data); NEXT;
VSESIMPLE_U6_9:
VSESIMPLE_UNPACK6_9(&out, &data); NEXT;
VSESIMPLE_U6_10:
VSESIMPLE_UNPACK6_10(&out, &data); NEXT;
VSESIMPLE_U6_11:
VSESIMPLE_UNPACK6_11(&out, &data); NEXT;
VSESIMPLE_U6_12:
VSESIMPLE_UNPACK6_12(&out, &data); NEXT;
VSESIMPLE_U6_14:
VSESIMPLE_UNPACK6_14(&out, &data); NEXT;
VSESIMPLE_U6_16:
VSESIMPLE_UNPACK6_16(&out, &data); NEXT;
VSESIMPLE_U6_32:
VSESIMPLE_UNPACK6_32(&out, &data); NEXT;
VSESIMPLE_U6_64:
VSESIMPLE_UNPACK6_64(&out, &data); NEXT;

/* UNAPCK 7 */
VSESIMPLE_U7_1:
VSESIMPLE_UNPACK7_1(&out, &data); NEXT;
VSESIMPLE_U7_2:
VSESIMPLE_UNPACK7_2(&out, &data); NEXT;
VSESIMPLE_U7_3:
VSESIMPLE_UNPACK7_3(&out, &data); NEXT;
VSESIMPLE_U7_4:
VSESIMPLE_UNPACK7_4(&out, &data); NEXT;
VSESIMPLE_U7_5:
VSESIMPLE_UNPACK7_5(&out, &data); NEXT;
VSESIMPLE_U7_6:
VSESIMPLE_UNPACK7_6(&out, &data); NEXT;
VSESIMPLE_U7_7:
VSESIMPLE_UNPACK7_7(&out, &data); NEXT;
VSESIMPLE_U7_8:
VSESIMPLE_UNPACK7_8(&out, &data); NEXT;
VSESIMPLE_U7_9:
VSESIMPLE_UNPACK7_9(&out, &data); NEXT;
VSESIMPLE_U7_10:
VSESIMPLE_UNPACK7_10(&out, &data); NEXT;
VSESIMPLE_U7_11:
VSESIMPLE_UNPACK7_11(&out, &data); NEXT;
VSESIMPLE_U7_12:
VSESIMPLE_UNPACK7_12(&out, &data); NEXT;
VSESIMPLE_U7_14:
VSESIMPLE_UNPACK7_14(&out, &data); NEXT;
VSESIMPLE_U7_16:
VSESIMPLE_UNPACK7_16(&out, &data); NEXT;
VSESIMPLE_U7_32:
VSESIMPLE_UNPACK7_32(&out, &data); NEXT;
VSESIMPLE_U7_64:
VSESIMPLE_UNPACK7_64(&out, &data); NEXT;

/* UNAPCK 8 */
VSESIMPLE_U8_1:
VSESIMPLE_UNPACK8_1(&out, &data); NEXT;
VSESIMPLE_U8_2:
VSESIMPLE_UNPACK8_2(&out, &data); NEXT;
VSESIMPLE_U8_3:
VSESIMPLE_UNPACK8_3(&out, &data); NEXT;
VSESIMPLE_U8_4:
VSESIMPLE_UNPACK8_4(&out, &data); NEXT;
VSESIMPLE_U8_5:
VSESIMPLE_UNPACK8_5(&out, &data); NEXT;
VSESIMPLE_U8_6:
VSESIMPLE_UNPACK8_6(&out, &data); NEXT;
VSESIMPLE_U8_7:
VSESIMPLE_UNPACK8_7(&out, &data); NEXT;
VSESIMPLE_U8_8:
VSESIMPLE_UNPACK8_8(&out, &data); NEXT;
VSESIMPLE_U8_9:
VSESIMPLE_UNPACK8_9(&out, &data); NEXT;
VSESIMPLE_U8_10:
VSESIMPLE_UNPACK8_10(&out, &data); NEXT;
VSESIMPLE_U8_11:
VSESIMPLE_UNPACK8_11(&out, &data); NEXT;
VSESIMPLE_U8_12:
VSESIMPLE_UNPACK8_12(&out, &data); NEXT;
VSESIMPLE_U8_14:
VSESIMPLE_UNPACK8_14(&out, &data); NEXT;
VSESIMPLE_U8_16:
VSESIMPLE_UNPACK8_16(&out, &data); NEXT;
VSESIMPLE_U8_32:
VSESIMPLE_UNPACK8_32(&out, &data); NEXT;
VSESIMPLE_U8_64:
VSESIMPLE_UNPACK8_64(&out, &data); NEXT;

/* UNAPCK 9 */
VSESIMPLE_U9_1:
VSESIMPLE_UNPACK9_1(&out, &data); NEXT;
VSESIMPLE_U9_2:
VSESIMPLE_UNPACK9_2(&out, &data); NEXT;
VSESIMPLE_U9_3:
VSESIMPLE_UNPACK9_3(&out, &data); NEXT;
VSESIMPLE_U9_4:
VSESIMPLE_UNPACK9_4(&out, &data); NEXT;
VSESIMPLE_U9_5:
VSESIMPLE_UNPACK9_5(&out, &data); NEXT;
VSESIMPLE_U9_6:
VSESIMPLE_UNPACK9_6(&out, &data); NEXT;
VSESIMPLE_U9_7:
VSESIMPLE_UNPACK9_7(&out, &data); NEXT;
VSESIMPLE_U9_8:
VSESIMPLE_UNPACK9_8(&out, &data); NEXT;
VSESIMPLE_U9_9:
VSESIMPLE_UNPACK9_9(&out, &data); NEXT;
VSESIMPLE_U9_10:
VSESIMPLE_UNPACK9_10(&out, &data); NEXT;
VSESIMPLE_U9_11:
VSESIMPLE_UNPACK9_11(&out, &data); NEXT;
VSESIMPLE_U9_12:
VSESIMPLE_UNPACK9_12(&out, &data); NEXT;
VSESIMPLE_U9_14:
VSESIMPLE_UNPACK9_14(&out, &data); NEXT;
VSESIMPLE_U9_16:
VSESIMPLE_UNPACK9_16(&out, &data); NEXT;
VSESIMPLE_U9_32:
VSESIMPLE_UNPACK9_32(&out, &data); NEXT;
VSESIMPLE_U9_64:
VSESIMPLE_UNPACK9_64(&out, &data); NEXT;

/* UNAPCK 10 */
VSESIMPLE_U10_1:
VSESIMPLE_UNPACK10_1(&out, &data); NEXT;
VSESIMPLE_U10_2:
VSESIMPLE_UNPACK10_2(&out, &data); NEXT;
VSESIMPLE_U10_3:
VSESIMPLE_UNPACK10_3(&out, &data); NEXT;
VSESIMPLE_U10_4:
VSESIMPLE_UNPACK10_4(&out, &data); NEXT;
VSESIMPLE_U10_5:
VSESIMPLE_UNPACK10_5(&out, &data); NEXT;
VSESIMPLE_U10_6:
VSESIMPLE_UNPACK10_6(&out, &data); NEXT;
VSESIMPLE_U10_7:
VSESIMPLE_UNPACK10_7(&out, &data); NEXT;
VSESIMPLE_U10_8:
VSESIMPLE_UNPACK10_8(&out, &data); NEXT;
VSESIMPLE_U10_9:
VSESIMPLE_UNPACK10_9(&out, &data); NEXT;
VSESIMPLE_U10_10:
VSESIMPLE_UNPACK10_10(&out, &data); NEXT;
VSESIMPLE_U10_11:
VSESIMPLE_UNPACK10_11(&out, &data); NEXT;
VSESIMPLE_U10_12:
VSESIMPLE_UNPACK10_12(&out, &data); NEXT;
VSESIMPLE_U10_14:
VSESIMPLE_UNPACK10_14(&out, &data); NEXT;
VSESIMPLE_U10_16:
VSESIMPLE_UNPACK10_16(&out, &data); NEXT;
VSESIMPLE_U10_32:
VSESIMPLE_UNPACK10_32(&out, &data); NEXT;
VSESIMPLE_U10_64:
VSESIMPLE_UNPACK10_64(&out, &data); NEXT;

/* UNAPCK 11 */
VSESIMPLE_U11_1:
VSESIMPLE_UNPACK11_1(&out, &data); NEXT;
VSESIMPLE_U11_2:
VSESIMPLE_UNPACK11_2(&out, &data); NEXT;
VSESIMPLE_U11_3:
VSESIMPLE_UNPACK11_3(&out, &data); NEXT;
VSESIMPLE_U11_4:
VSESIMPLE_UNPACK11_4(&out, &data); NEXT;
VSESIMPLE_U11_5:
VSESIMPLE_UNPACK11_5(&out, &data); NEXT;
VSESIMPLE_U11_6:
VSESIMPLE_UNPACK11_6(&out, &data); NEXT;
VSESIMPLE_U11_7:
VSESIMPLE_UNPACK11_7(&out, &data); NEXT;
VSESIMPLE_U11_8:
VSESIMPLE_UNPACK11_8(&out, &data); NEXT;
VSESIMPLE_U11_9:
VSESIMPLE_UNPACK11_9(&out, &data); NEXT;
VSESIMPLE_U11_10:
VSESIMPLE_UNPACK11_10(&out, &data); NEXT;
VSESIMPLE_U11_11:
VSESIMPLE_UNPACK11_11(&out, &data); NEXT;
VSESIMPLE_U11_12:
VSESIMPLE_UNPACK11_12(&out, &data); NEXT;
VSESIMPLE_U11_14:
VSESIMPLE_UNPACK11_14(&out, &data); NEXT;
VSESIMPLE_U11_16:
VSESIMPLE_UNPACK11_16(&out, &data); NEXT;
VSESIMPLE_U11_32:
VSESIMPLE_UNPACK11_32(&out, &data); NEXT;
VSESIMPLE_U11_64:
VSESIMPLE_UNPACK11_64(&out, &data); NEXT;

/* UNAPCK 12 */
VSESIMPLE_U12_1:
VSESIMPLE_UNPACK12_1(&out, &data); NEXT;
VSESIMPLE_U12_2:
VSESIMPLE_UNPACK12_2(&out, &data); NEXT;
VSESIMPLE_U12_3:
VSESIMPLE_UNPACK12_3(&out, &data); NEXT;
VSESIMPLE_U12_4:
VSESIMPLE_UNPACK12_4(&out, &data); NEXT;
VSESIMPLE_U12_5:
VSESIMPLE_UNPACK12_5(&out, &data); NEXT;
VSESIMPLE_U12_6:
VSESIMPLE_UNPACK12_6(&out, &data); NEXT;
VSESIMPLE_U12_7:
VSESIMPLE_UNPACK12_7(&out, &data); NEXT;
VSESIMPLE_U12_8:
VSESIMPLE_UNPACK12_8(&out, &data); NEXT;
VSESIMPLE_U12_9:
VSESIMPLE_UNPACK12_9(&out, &data); NEXT;
VSESIMPLE_U12_10:
VSESIMPLE_UNPACK12_10(&out, &data); NEXT;
VSESIMPLE_U12_11:
VSESIMPLE_UNPACK12_11(&out, &data); NEXT;
VSESIMPLE_U12_12:
VSESIMPLE_UNPACK12_12(&out, &data); NEXT;
VSESIMPLE_U12_14:
VSESIMPLE_UNPACK12_14(&out, &data); NEXT;
VSESIMPLE_U12_16:
VSESIMPLE_UNPACK12_16(&out, &data); NEXT;
VSESIMPLE_U12_32:
VSESIMPLE_UNPACK12_32(&out, &data); NEXT;
VSESIMPLE_U12_64:
VSESIMPLE_UNPACK12_64(&out, &data); NEXT;

/* UNAPCK 16 */
VSESIMPLE_U16_1:
VSESIMPLE_UNPACK16_1(&out, &data); NEXT;
VSESIMPLE_U16_2:
VSESIMPLE_UNPACK16_2(&out, &data); NEXT;
VSESIMPLE_U16_3:
VSESIMPLE_UNPACK16_3(&out, &data); NEXT;
VSESIMPLE_U16_4:
VSESIMPLE_UNPACK16_4(&out, &data); NEXT;
VSESIMPLE_U16_5:
VSESIMPLE_UNPACK16_5(&out, &data); NEXT;
VSESIMPLE_U16_6:
VSESIMPLE_UNPACK16_6(&out, &data); NEXT;
VSESIMPLE_U16_7:
VSESIMPLE_UNPACK16_7(&out, &data); NEXT;
VSESIMPLE_U16_8:
VSESIMPLE_UNPACK16_8(&out, &data); NEXT;
VSESIMPLE_U16_9:
VSESIMPLE_UNPACK16_9(&out, &data); NEXT;
VSESIMPLE_U16_10:
VSESIMPLE_UNPACK16_10(&out, &data); NEXT;
VSESIMPLE_U16_11:
VSESIMPLE_UNPACK16_11(&out, &data); NEXT;
VSESIMPLE_U16_12:
VSESIMPLE_UNPACK16_12(&out, &data); NEXT;
VSESIMPLE_U16_14:
VSESIMPLE_UNPACK16_14(&out, &data); NEXT;
VSESIMPLE_U16_16:
VSESIMPLE_UNPACK16_16(&out, &data); NEXT;
VSESIMPLE_U16_32:
VSESIMPLE_UNPACK16_32(&out, &data); NEXT;
VSESIMPLE_U16_64:
VSESIMPLE_UNPACK16_64(&out, &data); NEXT;

/* UNAPCK 20 */
VSESIMPLE_U20_1:
VSESIMPLE_UNPACK20_1(&out, &data); NEXT;
VSESIMPLE_U20_2:
VSESIMPLE_UNPACK20_2(&out, &data); NEXT;
VSESIMPLE_U20_3:
VSESIMPLE_UNPACK20_3(&out, &data); NEXT;
VSESIMPLE_U20_4:
VSESIMPLE_UNPACK20_4(&out, &data); NEXT;
VSESIMPLE_U20_5:
VSESIMPLE_UNPACK20_5(&out, &data); NEXT;
VSESIMPLE_U20_6:
VSESIMPLE_UNPACK20_6(&out, &data); NEXT;
VSESIMPLE_U20_7:
VSESIMPLE_UNPACK20_7(&out, &data); NEXT;
VSESIMPLE_U20_8:
VSESIMPLE_UNPACK20_8(&out, &data); NEXT;
VSESIMPLE_U20_9:
VSESIMPLE_UNPACK20_9(&out, &data); NEXT;
VSESIMPLE_U20_10:
VSESIMPLE_UNPACK20_10(&out, &data); NEXT;
VSESIMPLE_U20_11:
VSESIMPLE_UNPACK20_11(&out, &data); NEXT;
VSESIMPLE_U20_12:
VSESIMPLE_UNPACK20_12(&out, &data); NEXT;
VSESIMPLE_U20_14:
VSESIMPLE_UNPACK20_14(&out, &data); NEXT;
VSESIMPLE_U20_16:
VSESIMPLE_UNPACK20_16(&out, &data); NEXT;
VSESIMPLE_U20_32:
VSESIMPLE_UNPACK20_32(&out, &data); NEXT;
VSESIMPLE_U20_64:
VSESIMPLE_UNPACK20_64(&out, &data); NEXT;

/* UNAPCK 32 */
VSESIMPLE_U32_1:
VSESIMPLE_UNPACK32_1(&out, &data); NEXT;
VSESIMPLE_U32_2:
VSESIMPLE_UNPACK32_2(&out, &data); NEXT;
VSESIMPLE_U32_3:
VSESIMPLE_UNPACK32_3(&out, &data); NEXT;
VSESIMPLE_U32_4:
VSESIMPLE_UNPACK32_4(&out, &data); NEXT;
VSESIMPLE_U32_5:
VSESIMPLE_UNPACK32_5(&out, &data); NEXT;
VSESIMPLE_U32_6:
VSESIMPLE_UNPACK32_6(&out, &data); NEXT;
VSESIMPLE_U32_7:
VSESIMPLE_UNPACK32_7(&out, &data); NEXT;
VSESIMPLE_U32_8:
VSESIMPLE_UNPACK32_8(&out, &data); NEXT;
VSESIMPLE_U32_9:
VSESIMPLE_UNPACK32_9(&out, &data); NEXT;
VSESIMPLE_U32_10:
VSESIMPLE_UNPACK32_10(&out, &data); NEXT;
VSESIMPLE_U32_11:
VSESIMPLE_UNPACK32_11(&out, &data); NEXT;
VSESIMPLE_U32_12:
VSESIMPLE_UNPACK32_12(&out, &data); NEXT;
VSESIMPLE_U32_14:
VSESIMPLE_UNPACK32_14(&out, &data); NEXT;
VSESIMPLE_U32_16:
VSESIMPLE_UNPACK32_16(&out, &data); NEXT;
VSESIMPLE_U32_32:
VSESIMPLE_UNPACK32_32(&out, &data); NEXT;
VSESIMPLE_U32_64:
VSESIMPLE_UNPACK32_64(&out, &data); NEXT;

/* Terminal point of threading */
VSESIMPLE_RET:
	if (out != oterm || data != iterm) {
		std::cout << "wrong decode!" << std::endl;
	}
	return compByteLen;
}



}
}

#endif /* __VSENCODINGSIMPLE_HPP__ */


/*
 *
#include <iostream>
#include <sstream>
#include <string>
#include <stdint.h>

using namespace std;

const uint32_t VSESIMPLE_LENS[16] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,
		10, 11, 12, 14, 16, 32, 64 };
const uint32_t VSESIMPLE_LOGS[16] = { 0, 1, 2, 3, 4, 5, 6,
		7, 8, 9, 10, 11, 12, 16, 20, 32 };

string Int2Str(int num) {
	ostringstream oss;
	oss << num;
	return oss.str();
}


string GenCode() {
	ostringstream oss;

	for (int idx1=0; idx1<16; idx1++) {
		int i = VSESIMPLE_LOGS[idx1];   //bitwidth
		if (i==0 || i==32)	continue;	// skip 0 bitwidth


	for (int idx2=0; idx2<16; idx2++) {
		int num = VSESIMPLE_LENS[idx2];	//num of integers

		oss << "inline void VSESIMPLE_UNPACK" << i << "_" << num << "(uint32_t ** restrict out," << endl;
		oss << "\t\tconst uint32_t ** restrict in) {" << endl;

		int offsetInWord = 0;
		int curWordIdx = 0;
		int j = 0;
		uint32_t mask  = (1LL << i) - 1;

		oss << "\tuint32_t val;" << endl;
		while (j < num) {
			if (offsetInWord == 0) {
				oss << "\tval = LOAD32(*in";
				if (curWordIdx > 0) {
					oss << " + " << curWordIdx;
				}
				oss << ");" << endl;
			}
			ostringstream tmp1;
			tmp1 << "\t" << "(*out)[" << j << "] = (val";
			if (offsetInWord > 0)
				tmp1 << " >> " << offsetInWord;
			tmp1 << ")";
			if (i < 32)
				tmp1 << " & " << hex << "0x" << mask << dec;
			tmp1 << ";" << endl;
			oss << tmp1.str();

			if (offsetInWord + i > 32) {
				ostringstream tmp2;
				tmp2 << "\tval = LOAD32(*in + " << curWordIdx + 1 << ");" << endl;
				tmp2 << "\t" << "(*out)[" << j << "] |= (val";
				tmp2 << " << " << 32 - offsetInWord;
				tmp2 << ")";
				if (i < 32)
					tmp2 << " & "  << hex << "0x" << mask << dec;
				tmp2 << ";" << endl;
                        	oss << tmp2.str();
			}

			curWordIdx += (offsetInWord + i) / 32;
			offsetInWord = (offsetInWord + i) % 32;
			j++;
		}

		if (offsetInWord > 0)
			curWordIdx ++;
		oss << "\t*in += " << curWordIdx << ", *out += " << num << ";" << endl;
		oss << "}" << endl;
		oss << endl;

	}
	}
	return oss.str();

}


int main() {
	cout << GenCode();
	return 0;
}
 *
 */
