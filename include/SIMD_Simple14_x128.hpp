/*
 * SIMD_Simple14_x128.hpp
 *
 *  Created on: 2012-8-30
 *      Author: zxd
 */

#ifndef SIMD_SIMPLE14_X128_HPP_
#define SIMD_SIMPLE14_X128_HPP_

#include "Compressor.hpp"
#include "VarByte.hpp"
#include <stdint.h>
namespace paradise {
namespace index {

static const struct unpack_simple14_x128_shfl_1_0{
int8_t a[16];
}unpack_simple14_x128_shfl_1_0 __attribute__((aligned(16))) = {{0,0xff,0xff,0xff,0,0xff,0xff,0xff,0,0xff,0xff,0xff,0,0xff,0xff,0xff},};
static const struct unpack_simple14_x128_mul_1_0{
uint32_t a[4];
}unpack_simple14_x128_mul_1_0 __attribute__((aligned(16))) = {{0x80000000, 0x40000000, 0x20000000, 0x10000000},};
static const struct unpack_simple14_x128_shfl_2_0{
int8_t a[16];
}unpack_simple14_x128_shfl_2_0 __attribute__((aligned(16))) = {{0,0xff,0xff,0xff,0,0xff,0xff,0xff,0,0xff,0xff,0xff,0,0xff,0xff,0xff},};
static const struct unpack_simple14_x128_mul_2_0{
uint32_t a[4];
}unpack_simple14_x128_mul_2_0 __attribute__((aligned(16))) = {{0x40000000, 0x10000000, 0x4000000, 0x1000000},};
static const struct unpack_simple14_x128_shfl_3_0{
int8_t a[16];
}unpack_simple14_x128_shfl_3_0 __attribute__((aligned(16))) = {{0,1,0xff,0xff,0,1,0xff,0xff,0,1,0xff,0xff,0,1,0xff,0xff},};
static const struct unpack_simple14_x128_mul_3_0{
uint32_t a[4];
}unpack_simple14_x128_mul_3_0 __attribute__((aligned(16))) = {{0x20000000, 0x4000000, 0x800000, 0x100000},};
static const struct unpack_simple14_x128_shfl_4_0{
int8_t a[16];
}unpack_simple14_x128_shfl_4_0 __attribute__((aligned(16))) = {{0,1,0xff,0xff,0,1,0xff,0xff,0,1,0xff,0xff,0,1,0xff,0xff},};
static const struct unpack_simple14_x128_mul_4_0{
uint32_t a[4];
}unpack_simple14_x128_mul_4_0 __attribute__((aligned(16))) = {{0x10000000, 0x1000000, 0x100000, 0x10000},};
static const struct unpack_simple14_x128_shfl_5_0{
int8_t a[16];
}unpack_simple14_x128_shfl_5_0 __attribute__((aligned(16))) = {{0,1,2,0xff,0,1,2,0xff,0,1,2,0xff,0,1,2,0xff},};
static const struct unpack_simple14_x128_mul_5_0{
uint32_t a[4];
}unpack_simple14_x128_mul_5_0 __attribute__((aligned(16))) = {{0x8000000, 0x400000, 0x20000, 0x1000},};
static const struct unpack_simple14_x128_shfl_6_0{
int8_t a[16];
}unpack_simple14_x128_shfl_6_0 __attribute__((aligned(16))) = {{0,1,2,0xff,0,1,2,0xff,0,1,2,0xff,0,1,2,0xff},};
static const struct unpack_simple14_x128_mul_6_0{
uint32_t a[4];
}unpack_simple14_x128_mul_6_0 __attribute__((aligned(16))) = {{0x4000000, 0x100000, 0x4000, 0x100},};
static const struct unpack_simple14_x128_shfl_8_0{
int8_t a[16];
}unpack_simple14_x128_shfl_8_0 __attribute__((aligned(16))) = {{0,1,2,3,0,1,2,3,0,1,2,3,0,1,2,3},};
static const struct unpack_simple14_x128_mul_8_0{
uint32_t a[4];
}unpack_simple14_x128_mul_8_0 __attribute__((aligned(16))) = {{0x1000000, 0x10000, 0x100, 0x1},};


class SIMD_Simple14_x128: public Compressor {
public:
	SIMD_Simple14_x128() {
	}
	virtual ~SIMD_Simple14_x128() {
	}

public:
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

	template<typename T>
	static int encode(char* des, const T* src, uint32_t length);

	template<typename T>
	static int decode(T* des, const char* src, int length);

	template<typename T>
	static int s14_encode(uint64_t* des, const T* src, int left);

	template<typename T>
	static int s14_decode(T* des, const uint64_t *src);
	virtual std::string getCompressorName() {
		return "simd_simple14_x128";
	}
	virtual Compressor* clone();
private:
	static uint8_t bitSizeArr[16];
	static uint8_t codeNum[16];
	static uint64_t maskArr[16];

};

template<typename T>
int SIMD_Simple14_x128::encode(char* des, const T* src, uint32_t encodeNum) {
	uint64_t* desInt = (uint64_t *) des;
	int left = encodeNum;
	const int threshold = 3;
	if (encodeNum > threshold) {
		left = encodeNum - threshold;
		int ret;
		while (left > 0) {
			ret = s14_encode(desInt, src, left);
			src += ret;
			left -= ret;
			desInt += 2;
		}
		char *newDes = (char*)desInt;

		int residual = VarByte::encode(newDes, src, threshold);

		return newDes + residual - des;
	} else {
		return VarByte::encode(des, src, encodeNum);
	}
}

template<typename T>
int SIMD_Simple14_x128::decode(T* des, const char* src, int decodeNum) {
	// load shuffle and multiply register into xmm register
	__asm__("movdqa %0,%%xmm0\n"//shfl_1
			"movdqa %1,%%xmm1\n"//mul_1
			"movdqa %2,%%xmm2\n"//shfl_2
			"movdqa %3,%%xmm3\n"//mul_2
			"movdqa %4,%%xmm4\n"//shfl_3
			"movdqa %5,%%xmm5\n"//mul_3
			"movdqa %6,%%xmm6\n"//shfl_4
			"movdqa %7,%%xmm7\n"//mul_4
			"movdqa %8,%%xmm8\n"//shfl_5
			"movdqa %9,%%xmm9\n"//mul_5
			 ::"m" (unpack_simple14_x128_shfl_1_0),"m" (unpack_simple14_x128_mul_1_0),
			  "m" (unpack_simple14_x128_shfl_2_0),"m" (unpack_simple14_x128_mul_2_0),
			  "m" (unpack_simple14_x128_shfl_3_0),"m" (unpack_simple14_x128_mul_3_0),
			  "m" (unpack_simple14_x128_shfl_4_0),"m" (unpack_simple14_x128_mul_4_0),
			  "m" (unpack_simple14_x128_shfl_5_0),"m" (unpack_simple14_x128_mul_5_0)
			 :"memory");

	__asm__("movdqa %0,%%xmm10\n"//shfl_6
			"movdqa %1,%%xmm11\n"//mul_6
			"movdqa %2,%%xmm12\n"//shfl_8
			"movdqa %3,%%xmm13\n"//mul_8
			 ::"m" (unpack_simple14_x128_shfl_6_0),"m" (unpack_simple14_x128_mul_6_0),
			  "m" (unpack_simple14_x128_shfl_8_0),"m" (unpack_simple14_x128_mul_8_0)
			 :"memory");


	const int threshold = 3;
	if (decodeNum > threshold) {
		int num;
		uint64_t* input = (uint64_t*) src;
		int left = decodeNum - threshold;
		while (left > 0) {
			num = s14_decode(des, input);
			input += 2;
			left -= num;
			des += num;
		}
		char *newSrc = (char*) input;

		int residual = VarByte::decode(des, newSrc, threshold);

		return newSrc + residual - src;
	} else {
		return VarByte::decode(des, src, decodeNum);
	}
}

template<typename T>
int SIMD_Simple14_x128::s14_encode(uint64_t* des, const T* src, int left) {
	uint32_t pos, num2code;
	uint64_t maskVal = 1, tmpVal;
	for (uint64_t bitNum = 0; bitNum < 14; bitNum++) {
		des[0] = 0;
		des[1] = bitNum << 60;	// put the selector in the highest 4 bit of the 128-bit word
		if (left < codeNum[bitNum]) {
			continue;
		}
		num2code = codeNum[bitNum];
		int bitSize = bitSizeArr[bitNum];
		int pos = 0;
		int curOffset = 0;
		uint32_t mask = maskArr[bitNum];
		for (pos = 0; (pos < num2code) && (*(src + pos) <= mask); pos++) {
			if (curOffset < 64) {
				des[0] |= ((uint64_t)(*(src + pos))) << curOffset;
				if (curOffset + bitSize > 64)
					des[1] |= ((uint64_t)(*(src + pos))) >> (64 - curOffset);
			} else {
				des[1] |= ((uint64_t)(*(src + pos))) << (curOffset - 64);
			}
			curOffset += bitSize;
		}
		if (pos == num2code) {//说明能被压缩
			src += num2code;
			break;
		}

	}
	return num2code;
}
template<typename T>
int SIMD_Simple14_x128::s14_decode(T* des, const uint64_t *src) {

#define SINGLE_UNPACK_SIMPLE14_X64(DES, IDX, SHFL_REG, MUL_REG, RIGHT_OFFSET) \
__asm__("movdqa %%xmm14,%%xmm15\n"	\
		"pshufb %%xmm"#SHFL_REG",%%xmm15\n"	\
		"pmulld %%xmm"#MUL_REG",%%xmm15\n"	\
		"psrld $"#RIGHT_OFFSET",%%xmm15\n"	\
		"movdqu %%xmm15, %0\n"	\
		:"=m" (DES[IDX])	\
		::"memory");

#define READ_FROM(SRC, XMM)	\
__asm__("movdqu %0, %%xmm"#XMM"\n"	\
		::"m" (SRC)	\
		:"memory");

#define SHIFT_RIGHT(XMM, OFFSET)	\
__asm__("psrlq $"#OFFSET", %%xmm"#XMM"\n":::);

#define SHIFT_RIGHT_BY_BYTES(XMM, BYTE_OFFSET) \
__asm__("psrldq $"#BYTE_OFFSET", %%xmm"#XMM"\n":::);

/*
 *  put the MEM data with OFFSET1 into first 64 bit of REG1, require OFFSET2 = 64 - OFFSET1
 */
#define GET_MED_64BIT_DATA(MEM, REG1, REG2, OFFSET1, OFFSET2)	\
__asm__("movdqu %0, %%xmm"#REG1"\n"	\
		"movdqa %%xmm"#REG1", %%xmm"#REG2"\n"	\
		"psrlq $"#OFFSET1", %%xmm"#REG1"\n"	\
		"movhlps %%xmm"#REG2", %%xmm"#REG2"\n"	\
		"psllq $"#OFFSET2", %%xmm"#REG2"\n"	\
		"por %%xmm"#REG2", %%xmm"#REG1"\n"	\
		::"m" (MEM)	\
		:"memory");

	__asm__ volatile("prefetchnta %0"::"m" (src[0]));

	uint8_t num = (src[1]) >> 60;

	switch (num) {
	case 0: {
		READ_FROM(src[0], 14)
		SINGLE_UNPACK_SIMPLE14_X64(des, 0, 0, 1, 31)
		SHIFT_RIGHT(14, 4)
		SINGLE_UNPACK_SIMPLE14_X64(des, 4, 0, 1, 31)
		SHIFT_RIGHT(14, 4)
		SINGLE_UNPACK_SIMPLE14_X64(des, 8, 0, 1, 31)
		SHIFT_RIGHT(14, 4)
		SINGLE_UNPACK_SIMPLE14_X64(des, 12, 0, 1, 31)
		SHIFT_RIGHT(14, 4)
		SINGLE_UNPACK_SIMPLE14_X64(des, 16, 0, 1, 31)
		SHIFT_RIGHT(14, 4)
		SINGLE_UNPACK_SIMPLE14_X64(des, 20, 0, 1, 31)
		SHIFT_RIGHT(14, 4)
		SINGLE_UNPACK_SIMPLE14_X64(des, 24, 0, 1, 31)
		SHIFT_RIGHT(14, 4)
		SINGLE_UNPACK_SIMPLE14_X64(des, 28, 0, 1, 31)
		SHIFT_RIGHT(14, 4)
		SINGLE_UNPACK_SIMPLE14_X64(des, 32, 0, 1, 31)
		SHIFT_RIGHT(14, 4)
		SINGLE_UNPACK_SIMPLE14_X64(des, 36, 0, 1, 31)
		SHIFT_RIGHT(14, 4)
		SINGLE_UNPACK_SIMPLE14_X64(des, 40, 0, 1, 31)
		SHIFT_RIGHT(14, 4)
		SINGLE_UNPACK_SIMPLE14_X64(des, 44, 0, 1, 31)
		SHIFT_RIGHT(14, 4)
		SINGLE_UNPACK_SIMPLE14_X64(des, 48, 0, 1, 31)
		SHIFT_RIGHT(14, 4)
		SINGLE_UNPACK_SIMPLE14_X64(des, 52, 0, 1, 31)
		SHIFT_RIGHT(14, 4)
		SINGLE_UNPACK_SIMPLE14_X64(des, 56, 0, 1, 31)
		SHIFT_RIGHT(14, 4)
		SINGLE_UNPACK_SIMPLE14_X64(des, 60, 0, 1, 31)

		READ_FROM(src[1], 14)
		SINGLE_UNPACK_SIMPLE14_X64(des, 64, 0, 1, 31)
		SHIFT_RIGHT(14, 4)
		SINGLE_UNPACK_SIMPLE14_X64(des, 68, 0, 1, 31)
		SHIFT_RIGHT(14, 4)
		SINGLE_UNPACK_SIMPLE14_X64(des, 72, 0, 1, 31)
		SHIFT_RIGHT(14, 4)
		SINGLE_UNPACK_SIMPLE14_X64(des, 76, 0, 1, 31)
		SHIFT_RIGHT(14, 4)
		SINGLE_UNPACK_SIMPLE14_X64(des, 80, 0, 1, 31)
		SHIFT_RIGHT(14, 4)
		SINGLE_UNPACK_SIMPLE14_X64(des, 84, 0, 1, 31)
		SHIFT_RIGHT(14, 4)
		SINGLE_UNPACK_SIMPLE14_X64(des, 88, 0, 1, 31)
		SHIFT_RIGHT(14, 4)
		SINGLE_UNPACK_SIMPLE14_X64(des, 92, 0, 1, 31)
		SHIFT_RIGHT(14, 4)
		SINGLE_UNPACK_SIMPLE14_X64(des, 96, 0, 1, 31)
		SHIFT_RIGHT(14, 4)
		SINGLE_UNPACK_SIMPLE14_X64(des, 100, 0, 1, 31)
		SHIFT_RIGHT(14, 4)
		SINGLE_UNPACK_SIMPLE14_X64(des, 104, 0, 1, 31)
		SHIFT_RIGHT(14, 4)
		SINGLE_UNPACK_SIMPLE14_X64(des, 108, 0, 1, 31)
		SHIFT_RIGHT(14, 4)
		SINGLE_UNPACK_SIMPLE14_X64(des, 112, 0, 1, 31)
		SHIFT_RIGHT(14, 4)
		SINGLE_UNPACK_SIMPLE14_X64(des, 116, 0, 1, 31)
		SHIFT_RIGHT(14, 4)
		SINGLE_UNPACK_SIMPLE14_X64(des, 120, 0, 1, 31)

		des += 124;
		/*
		for (int i = 0; i < 64; ++i) {
			*des = (src[0] >> i) & 1;
			++des;
		}
		for (int i = 0; i < 60; ++i) {
			*des = (src[1] >> i) & 1;
			++des;
		}
		*/
		break;
	}
	case 1: {
		READ_FROM(src[0], 14)
		SINGLE_UNPACK_SIMPLE14_X64(des, 0, 2, 3, 30)
		SHIFT_RIGHT(14, 8)
		SINGLE_UNPACK_SIMPLE14_X64(des, 4, 2, 3, 30)
		SHIFT_RIGHT(14, 8)
		SINGLE_UNPACK_SIMPLE14_X64(des, 8, 2, 3, 30)
		SHIFT_RIGHT(14, 8)
		SINGLE_UNPACK_SIMPLE14_X64(des, 12, 2, 3, 30)
		SHIFT_RIGHT(14, 8)
		SINGLE_UNPACK_SIMPLE14_X64(des, 16, 2, 3, 30)
		SHIFT_RIGHT(14, 8)
		SINGLE_UNPACK_SIMPLE14_X64(des, 20, 2, 3, 30)
		SHIFT_RIGHT(14, 8)
		SINGLE_UNPACK_SIMPLE14_X64(des, 24, 2, 3, 30)
		SHIFT_RIGHT(14, 8)
		SINGLE_UNPACK_SIMPLE14_X64(des, 28, 2, 3, 30)

		READ_FROM(src[1], 14)
		SINGLE_UNPACK_SIMPLE14_X64(des, 32, 2, 3, 30)
		SHIFT_RIGHT(14, 8)
		SINGLE_UNPACK_SIMPLE14_X64(des, 36, 2, 3, 30)
		SHIFT_RIGHT(14, 8)
		SINGLE_UNPACK_SIMPLE14_X64(des, 40, 2, 3, 30)
		SHIFT_RIGHT(14, 8)
		SINGLE_UNPACK_SIMPLE14_X64(des, 44, 2, 3, 30)
		SHIFT_RIGHT(14, 8)
		SINGLE_UNPACK_SIMPLE14_X64(des, 48, 2, 3, 30)
		SHIFT_RIGHT(14, 8)
		SINGLE_UNPACK_SIMPLE14_X64(des, 52, 2, 3, 30)
		SHIFT_RIGHT(14, 8)
		SINGLE_UNPACK_SIMPLE14_X64(des, 56, 2, 3, 30)
		SHIFT_RIGHT(14, 8)
		SINGLE_UNPACK_SIMPLE14_X64(des, 60, 2, 3, 30)

		des += 62;

		/*
		for (int i = 0; i < 64; i = i + 2) {
			*des = (src[0] >> i) & 3;
			++des;
		}
		for (int i = 0; i < 60; i = i + 2) {
			*des = (src[1] >> i) & 3;
			++des;
		}
		*/
		break;
	}
	case 2: {
		READ_FROM(src[0], 14)
		SINGLE_UNPACK_SIMPLE14_X64(des, 0, 4, 5, 29)
		SHIFT_RIGHT(14, 12)
		SINGLE_UNPACK_SIMPLE14_X64(des, 4, 4, 5, 29)
		SHIFT_RIGHT(14, 12)
		SINGLE_UNPACK_SIMPLE14_X64(des, 8, 4, 5, 29)
		SHIFT_RIGHT(14, 12)
		SINGLE_UNPACK_SIMPLE14_X64(des, 12, 4, 5, 29)
		SHIFT_RIGHT(14, 12)
		SINGLE_UNPACK_SIMPLE14_X64(des, 16, 4, 5, 29)

		GET_MED_64BIT_DATA(src[0], 14, 15, 60, 4)
		SINGLE_UNPACK_SIMPLE14_X64(des, 20, 4, 5, 29)
		SHIFT_RIGHT(14, 12)
		SINGLE_UNPACK_SIMPLE14_X64(des, 24, 4, 5, 29)
		SHIFT_RIGHT(14, 12)
		SINGLE_UNPACK_SIMPLE14_X64(des, 28, 4, 5, 29)
		SHIFT_RIGHT(14, 12)
		SINGLE_UNPACK_SIMPLE14_X64(des, 32, 4, 5, 29)
		SHIFT_RIGHT(14, 12)
		SINGLE_UNPACK_SIMPLE14_X64(des, 36, 4, 5, 29)
		SHIFT_RIGHT(14, 12)
		SINGLE_UNPACK_SIMPLE14_X64(des, 40, 4, 5, 29)

		des += 41;
		/*
		for (int i = 0; i < 63; i = i + 3) {
			*des = (src[0] >> i) & 7;
			++des;
		}

		*des = (src[0] >> 63) & 7;
		*des |= (src[1] << 1) & 7;
		++des;

		for (int i = 2; i < 59; i = i + 3) {
			*des = (src[1] >> i) & 7;
			++des;
		}
		*/
		break;
	}
	case 3: {
		READ_FROM(src[0], 14)
		SINGLE_UNPACK_SIMPLE14_X64(des, 0, 6, 7, 28)
		SHIFT_RIGHT(14, 16)
		SINGLE_UNPACK_SIMPLE14_X64(des, 4, 6, 7, 28)
		SHIFT_RIGHT(14, 16)
		SINGLE_UNPACK_SIMPLE14_X64(des, 8, 6, 7, 28)
		SHIFT_RIGHT(14, 16)
		SINGLE_UNPACK_SIMPLE14_X64(des, 12, 6, 7, 28)

		READ_FROM(src[1], 14)
		SINGLE_UNPACK_SIMPLE14_X64(des, 16, 6, 7, 28)
		SHIFT_RIGHT(14, 16)
		SINGLE_UNPACK_SIMPLE14_X64(des, 20, 6, 7, 28)
		SHIFT_RIGHT(14, 16)
		SINGLE_UNPACK_SIMPLE14_X64(des, 24, 6, 7, 28)
		SHIFT_RIGHT(14, 16)
		SINGLE_UNPACK_SIMPLE14_X64(des, 28, 6, 7, 28)

		des += 31;

		/*
		for (int i = 0; i < 64; i += 4) {
			*des = (src[0] >> i) & 0xf;
			++des;
		}
		for (int i = 0; i < 60; i += 4) {
			*des = (src[1] >> i) & 0xf;
			++des;
		}
		*/
		break;
	}
	case 4:
		READ_FROM(src[0], 14)
		SINGLE_UNPACK_SIMPLE14_X64(des, 0, 8, 9, 27)
		SHIFT_RIGHT(14, 20)
		SINGLE_UNPACK_SIMPLE14_X64(des, 4, 8, 9, 27)
		SHIFT_RIGHT(14, 20)
		SINGLE_UNPACK_SIMPLE14_X64(des, 8, 8, 9, 27)

		GET_MED_64BIT_DATA(src[0], 14, 15, 60, 4)
		SINGLE_UNPACK_SIMPLE14_X64(des, 12, 8, 9, 27)
		SHIFT_RIGHT(14, 20)
		SINGLE_UNPACK_SIMPLE14_X64(des, 16, 8, 9, 27)
		SHIFT_RIGHT(14, 20)
		SINGLE_UNPACK_SIMPLE14_X64(des, 20, 8, 9, 27)

		des += 24;
		/*
		*des++ = src[0] & 0x1f;
		*des++ = (src[0] >> 5) & 0x1f;
		*des++ = (src[0] >> 10) & 0x1f;
		*des++ = (src[0] >> 15) & 0x1f;
		*des++ = (src[0] >> 20) & 0x1f;
		*des++ = (src[0] >> 25) & 0x1f;
		*des++ = (src[0] >> 30) & 0x1f;
		*des++ = (src[0] >> 35) & 0x1f;
		*des++ = (src[0] >> 40) & 0x1f;
		*des++ = (src[0] >> 45) & 0x1f;
		*des++ = (src[0] >> 50) & 0x1f;
		*des++ = (src[0] >> 55) & 0x1f;

		*des = (src[0] >> 60) & 0x1f;
		*des |= (src[1] << 4) & 0x1f;
		des++;

		*des++ = (src[1] >> 1) & 0x1f;
		*des++ = (src[1] >> 6) & 0x1f;
		*des++ = (src[1] >> 11) & 0x1f;
		*des++ = (src[1] >> 16) & 0x1f;
		*des++ = (src[1] >> 21) & 0x1f;
		*des++ = (src[1] >> 26) & 0x1f;
		*des++ = (src[1] >> 31) & 0x1f;
		*des++ = (src[1] >> 36) & 0x1f;
		*des++ = (src[1] >> 41) & 0x1f;
		*des++ = (src[1] >> 46) & 0x1f;
		*des++ = (src[1] >> 51) & 0x1f;
		*/
		break;
	case 5:
		READ_FROM(src[0], 14)
		SINGLE_UNPACK_SIMPLE14_X64(des, 0, 10, 11, 26)
		SHIFT_RIGHT(14, 24)
		SINGLE_UNPACK_SIMPLE14_X64(des, 4, 10, 11, 26)
		SHIFT_RIGHT(14, 24)
		SINGLE_UNPACK_SIMPLE14_X64(des, 8, 10, 11, 26)	// only write 2 integers

		GET_MED_64BIT_DATA(src[0], 14, 15, 60, 4)
		SINGLE_UNPACK_SIMPLE14_X64(des, 10, 10, 11, 26)
		SHIFT_RIGHT(14, 24)
		SINGLE_UNPACK_SIMPLE14_X64(des, 14, 10, 11, 26)
		SHIFT_RIGHT(14, 24)
		SINGLE_UNPACK_SIMPLE14_X64(des, 18, 10, 11, 26)

		des += 20;
		/*
		*des++ = src[0] & 0x3f;
		*des++ = (src[0] >> 6) & 0x3f;
		*des++ = (src[0] >> 12) & 0x3f;
		*des++ = (src[0] >> 18) & 0x3f;
		*des++ = (src[0] >> 24) & 0x3f;
		*des++ = (src[0] >> 30) & 0x3f;
		*des++ = (src[0] >> 36) & 0x3f;
		*des++ = (src[0] >> 42) & 0x3f;
		*des++ = (src[0] >> 48) & 0x3f;
		*des++ = (src[0] >> 54) & 0x3f;

		*des = (src[0] >> 60) & 0x3f;
		*des |= (src[1] << 4) & 0x3f;
		des++;

		*des++ = (src[1] >> 2) & 0x3f;
		*des++ = (src[1] >> 8) & 0x3f;
		*des++ = (src[1] >> 14) & 0x3f;
		*des++ = (src[1] >> 20) & 0x3f;
		*des++ = (src[1] >> 26) & 0x3f;
		*des++ = (src[1] >> 32) & 0x3f;
		*des++ = (src[1] >> 38) & 0x3f;
		*des++ = (src[1] >> 44) & 0x3f;
		*des++ = (src[1] >> 50) & 0x3f;
		*/
		break;
	case 6:
		READ_FROM(src[0], 14)
		SINGLE_UNPACK_SIMPLE14_X64(des, 0, 12, 13, 24)
		SHIFT_RIGHT(14, 32)
		SINGLE_UNPACK_SIMPLE14_X64(des, 4, 12, 13, 24)

		READ_FROM(src[1], 14)
		SINGLE_UNPACK_SIMPLE14_X64(des, 8, 12, 13, 24)
		SHIFT_RIGHT(14, 32)
		SINGLE_UNPACK_SIMPLE14_X64(des, 12, 12, 13, 24)

		des += 15;
		/*
		*des++ = src[0] & 0xff;
		*des++ = (src[0] >> 8) & 0xff;
		*des++ = (src[0] >> 16) & 0xff;
		*des++ = (src[0] >> 24) & 0xff;
		*des++ = (src[0] >> 32) & 0xff;
		*des++ = (src[0] >> 40) & 0xff;
		*des++ = (src[0] >> 48) & 0xff;
		*des++ = (src[0] >> 56) & 0xff;

		*des++ = src[1] & 0xff;
		*des++ = (src[1] >> 8) & 0xff;
		*des++ = (src[1] >> 16) & 0xff;
		*des++ = (src[1] >> 24) & 0xff;
		*des++ = (src[1] >> 32) & 0xff;
		*des++ = (src[1] >> 40) & 0xff;
		*des++ = (src[1] >> 48) & 0xff;
		*/
		break;
	case 7:
		*des++ = src[0] & 0x3ff;
		*des++ = (src[0] >> 10) & 0x3ff;
		*des++ = (src[0] >> 20) & 0x3ff;
		*des++ = (src[0] >> 30) & 0x3ff;
		*des++ = (src[0] >> 40) & 0x3ff;
		*des++ = (src[0] >> 50) & 0x3ff;

		*des = (src[0] >> 60) & 0x3ff;
		*des |= (src[1] << 4) & 0x3ff;
		des++;

		*des++ = (src[1] >> 6) & 0x3ff;
		*des++ = (src[1] >> 16) & 0x3ff;
		*des++ = (src[1] >> 26) & 0x3ff;
		*des++ = (src[1] >> 36) & 0x3ff;
		*des++ = (src[1] >> 46) & 0x3ff;
		break;
	case 8:
		*des++ = src[0] & 0xfff;
		*des++ = (src[0] >> 12) & 0xfff;
		*des++ = (src[0] >> 24) & 0xfff;
		*des++ = (src[0] >> 36) & 0xfff;
		*des++ = (src[0] >> 48) & 0xfff;

		*des = (src[0] >> 60) & 0xfff;
		*des |= (src[1] << 4) & 0xfff;
		des++;

		*des++ = (src[1] >> 8) & 0xfff;
		*des++ = (src[1] >> 20) & 0xfff;
		*des++ = (src[1] >> 32) & 0xfff;
		*des++ = (src[1] >> 44) & 0xfff;
		break;
	case 9:
		*des++ = src[0] & 0x7fff;
		*des++ = (src[0] >> 15) & 0x7fff;
		*des++ = (src[0] >> 30) & 0x7fff;
		*des++ = (src[0] >> 45) & 0x7fff;

		*des = (src[0] >> 60) & 0x7fff;
		*des |= (src[1] << 4) & 0x7fff;
		des++;

		*des++ = (src[1] >> 11) & 0x7fff;
		*des++ = (src[1] >> 26) & 0x7fff;
		*des++ = (src[1] >> 41) & 0x7fff;
		break;
	case 10:
		*des++ = src[0] & 0xfffff;
		*des++ = (src[0] >> 20) & 0xfffff;
		*des++ = (src[0] >> 40) & 0xfffff;

		*des = (src[0] >> 60) & 0xfffff;
		*des |= (src[1] << 4) & 0xfffff;
		des++;

		*des++ = (src[1] >> 16) & 0xfffff;
		*des++ = (src[1] >> 36) & 0xfffff;
		break;
	case 11:
		*des++ = src[0] & 0x7fffffff;
		*des++ = (src[0] >> 31) & 0x7fffffff;

		*des = (src[0] >> 62) & 0x7fffffff;
		*des |= (src[1] << 2) & 0x7fffffff;
		des++;

		*des++ = (src[1] >> 29) & 0x7fffffff;
		break;
	case 12:
		*des++ = src[0] & 0x3fffffffffffffff;
		*des = (src[0] >> 62) & 0x3fffffffffffffff;
		*des |= (src[1] << 2) & 0x3fffffffffffffff;
		des++;
		break;
	case 13:
		*des++ = src[0];
		break;
	}
	return codeNum[num];
}

}
}


#endif /* SIMD_SIMPLE14_X128_HPP_ */
