/*
 * SIMD_Simple14_x64.hpp
 *
 *  Created on: 2012-8-30
 *      Author: zxd
 */

#ifndef SIMD_SIMPLE14_X64_HPP_
#define SIMD_SIMPLE14_X64_HPP_

#define USE_SSE_INSTRUCTION

#include "Compressor.hpp"
#include "VarByte.hpp"
#include <stdint.h>
namespace paradise {
namespace index {

static const struct unpack_simple14_x64_shfl_1_0{
int8_t a[16];
}unpack_simple14_x64_shfl_1_0 __attribute__((aligned(16))) = {{0,0xff,0xff,0xff,0,0xff,0xff,0xff,0,0xff,0xff,0xff,0,0xff,0xff,0xff},};
static const struct unpack_simple14_x64_mul_1_0{
uint32_t a[4];
}unpack_simple14_x64_mul_1_0 __attribute__((aligned(16))) = {{0x80000000, 0x40000000, 0x20000000, 0x10000000},};
static const struct unpack_simple14_x64_shfl_2_0{
int8_t a[16];
}unpack_simple14_x64_shfl_2_0 __attribute__((aligned(16))) = {{0,0xff,0xff,0xff,0,0xff,0xff,0xff,0,0xff,0xff,0xff,0,0xff,0xff,0xff},};
static const struct unpack_simple14_x64_mul_2_0{
uint32_t a[4];
}unpack_simple14_x64_mul_2_0 __attribute__((aligned(16))) = {{0x40000000, 0x10000000, 0x4000000, 0x1000000},};
static const struct unpack_simple14_x64_shfl_3_0{
int8_t a[16];
}unpack_simple14_x64_shfl_3_0 __attribute__((aligned(16))) = {{0,1,0xff,0xff,0,1,0xff,0xff,0,1,0xff,0xff,0,1,0xff,0xff},};
static const struct unpack_simple14_x64_mul_3_0{
uint32_t a[4];
}unpack_simple14_x64_mul_3_0 __attribute__((aligned(16))) = {{0x20000000, 0x4000000, 0x800000, 0x100000},};
static const struct unpack_simple14_x64_shfl_4_0{
int8_t a[16];
}unpack_simple14_x64_shfl_4_0 __attribute__((aligned(16))) = {{0,1,0xff,0xff,0,1,0xff,0xff,0,1,0xff,0xff,0,1,0xff,0xff},};
static const struct unpack_simple14_x64_mul_4_0{
uint32_t a[4];
}unpack_simple14_x64_mul_4_0 __attribute__((aligned(16))) = {{0x10000000, 0x1000000, 0x100000, 0x10000},};
static const struct unpack_simple14_x64_shfl_5_0{
int8_t a[16];
}unpack_simple14_x64_shfl_5_0 __attribute__((aligned(16))) = {{0,1,2,0xff,0,1,2,0xff,0,1,2,0xff,0,1,2,0xff},};
static const struct unpack_simple14_x64_mul_5_0{
uint32_t a[4];
}unpack_simple14_x64_mul_5_0 __attribute__((aligned(16))) = {{0x8000000, 0x400000, 0x20000, 0x1000},};
static const struct unpack_simple14_x64_shfl_6_0{
int8_t a[16];
}unpack_simple14_x64_shfl_6_0 __attribute__((aligned(16))) = {{0,1,2,0xff,0,1,2,0xff,0,1,2,0xff,0,1,2,0xff},};
static const struct unpack_simple14_x64_mul_6_0{
uint32_t a[4];
}unpack_simple14_x64_mul_6_0 __attribute__((aligned(16))) = {{0x4000000, 0x100000, 0x4000, 0x100},};
static const struct unpack_simple14_x64_shfl_7_0{
int8_t a[16];
}unpack_simple14_x64_shfl_7_0 __attribute__((aligned(16))) = {{0,1,2,3,0,1,2,3,0,1,2,3,0,1,2,3},};
static const struct unpack_simple14_x64_mul_7_0{
uint32_t a[4];
}unpack_simple14_x64_mul_7_0 __attribute__((aligned(16))) = {{0x2000000, 0x40000, 0x800, 0x10},};


class SIMD_Simple14_x64: public Compressor {
public:
	SIMD_Simple14_x64() {
	}
	virtual ~SIMD_Simple14_x64() {
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
	static int s14_decode(T* des, uint64_t src);
	virtual std::string getCompressorName() {
		return "simd_simple14_x64";
	}
	virtual Compressor* clone();
private:
	static uint8_t bitSizeArr[16][60];
	static uint8_t codeNum[16];
};

template<typename T>
int SIMD_Simple14_x64::encode(char* des, const T* src, uint32_t encodeNum) {
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
			desInt++;
		}
		char *newDes = (char*)desInt;

		int residual = VarByte::encode(newDes, src, threshold);

		return newDes + residual - des;
	} else {
		return VarByte::encode(des, src, encodeNum);
	}
}

template<typename T>
int SIMD_Simple14_x64::decode(T* des, const char* src, int decodeNum) {
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
			 ::"m" (unpack_simple14_x64_shfl_1_0),"m" (unpack_simple14_x64_mul_1_0),
			  "m" (unpack_simple14_x64_shfl_2_0),"m" (unpack_simple14_x64_mul_2_0),
			  "m" (unpack_simple14_x64_shfl_3_0),"m" (unpack_simple14_x64_mul_3_0),
			  "m" (unpack_simple14_x64_shfl_4_0),"m" (unpack_simple14_x64_mul_4_0),
			  "m" (unpack_simple14_x64_shfl_5_0),"m" (unpack_simple14_x64_mul_5_0)
			 :"memory");

	__asm__("movdqa %0,%%xmm10\n"//shfl_6
			"movdqa %1,%%xmm11\n"//mul_6
			"movdqa %2,%%xmm12\n"//shfl_7
			"movdqa %3,%%xmm13\n"//mul_7
			 ::"m" (unpack_simple14_x64_shfl_6_0),"m" (unpack_simple14_x64_mul_6_0),
			  "m" (unpack_simple14_x64_shfl_7_0),"m" (unpack_simple14_x64_mul_7_0)
			 :"memory");

	const int threshold = 3;
	if (decodeNum > threshold) {
		int num;
		uint64_t* input = (uint64_t*) src;
		int left = decodeNum - threshold;
		while (left > 0) {
			num = s14_decode(des, *input);
			input++;
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
int SIMD_Simple14_x64::s14_encode(uint64_t* des, const T* src, int left) {
	uint32_t pos, num2code, shift;
	uint64_t maskVal = 1, tmpVal;
	for (uint64_t bitNum = 0; bitNum < 16; bitNum++) {
		(*des) = bitNum << 60;
		if (left < codeNum[bitNum]) {
			continue;
		}
		num2code = codeNum[bitNum];
		for (pos = 0, shift = 0; (pos < num2code) && ((tmpVal = *(src + pos))
				< (maskVal << bitSizeArr[bitNum][pos]));) {
			(*des) += (tmpVal << shift);
			shift += bitSizeArr[bitNum][pos];
			pos++;

		}
		if (pos == num2code) {
			(src) += num2code;
			break;
		}
	}
	return num2code;
}
template<typename T>
int SIMD_Simple14_x64::s14_decode(T* des, uint64_t src) {

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


	__asm__ volatile("prefetchnta %0"::"m" (src));

	uint8_t num = (src) >> 60;
	switch (num) {
	case 0: {
		READ_FROM(src, 14)
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
		des += 60;
/*
		for (int i = 0; i < 60; ++i) {
			*des = (src >> i) & 1;
			++des;
		}
*/
		break;
	}
	case 1: {
		READ_FROM(src, 14)
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
		des += 30;
		/*
		for (int i = 0; i < 60; i = i + 2) {
			*des = (src >> i) & 3;
			++des;
		}
		*/
		break;
	}
	case 2: {
		READ_FROM(src, 14)
		SINGLE_UNPACK_SIMPLE14_X64(des, 0, 4, 5, 29)
		SHIFT_RIGHT(14, 12)
		SINGLE_UNPACK_SIMPLE14_X64(des, 4, 4, 5, 29)
		SHIFT_RIGHT(14, 12)
		SINGLE_UNPACK_SIMPLE14_X64(des, 8, 4, 5, 29)
		SHIFT_RIGHT(14, 12)
		SINGLE_UNPACK_SIMPLE14_X64(des, 12, 4, 5, 29)
		SHIFT_RIGHT(14, 12)
		SINGLE_UNPACK_SIMPLE14_X64(des, 16, 4, 5, 29)
		des += 20;
		/*
		for (int i = 0; i < 60; i = i + 3) {
			*des = (src >> i) & 7;
			++des;
		}
		*/
		break;
	}
	case 3: {
		READ_FROM(src, 14)
		SINGLE_UNPACK_SIMPLE14_X64(des, 0, 6, 7, 28)
		SHIFT_RIGHT(14, 16)
		SINGLE_UNPACK_SIMPLE14_X64(des, 4, 6, 7, 28)
		SHIFT_RIGHT(14, 16)
		SINGLE_UNPACK_SIMPLE14_X64(des, 8, 6, 7, 28)
		SHIFT_RIGHT(14, 16)
		SINGLE_UNPACK_SIMPLE14_X64(des, 12, 6, 7, 28)
		des += 15;
		/*
		for (int i = 0; i < 60; i = i + 4) {
			*des = (src >> i) & 15;
			++des;
		}
		*/
		break;
	}
	case 4:
		READ_FROM(src, 14)
		SINGLE_UNPACK_SIMPLE14_X64(des, 0, 8, 9, 27)
		SHIFT_RIGHT(14, 20)
		SINGLE_UNPACK_SIMPLE14_X64(des, 4, 8, 9, 27)
		SHIFT_RIGHT(14, 20)
		SINGLE_UNPACK_SIMPLE14_X64(des, 8, 8, 9, 27)
		des += 12;
		/*
		for (int i = 0; i < 60; i = i + 5) {
			*des = (src >> i) & 31;
			++des;
		}
		*/
		break;
	case 5:
		READ_FROM(src, 14)
		SINGLE_UNPACK_SIMPLE14_X64(des, 0, 10, 11, 26)
		SHIFT_RIGHT(14, 24)
		SINGLE_UNPACK_SIMPLE14_X64(des, 4, 10, 11, 26)
		SHIFT_RIGHT(14, 24)
		SINGLE_UNPACK_SIMPLE14_X64(des, 8, 10, 11, 26)
		des += 10;
		/*
		for (int i = 0; i < 60; i = i + 6) {
			*des = (src >> i) & 63;
			++des;
		}
		*/
		break;
	case 6:
		READ_FROM(src, 14)
		SINGLE_UNPACK_SIMPLE14_X64(des, 0, 12, 13, 25)
		SHIFT_RIGHT(14, 28)
		SINGLE_UNPACK_SIMPLE14_X64(des, 4, 12, 13, 25)
		des += 8;
		/*
		*des = (src) & 127;
		++des;
		*des = (src >> 7) & 127;
		++des;
		*des = (src >> 14) & 127;
		++des;
		*des = (src >> 21) & 127;
		++des;
		*des = (src >> 28) & 127;
		++des;
		*des = (src >> 35) & 127;
		++des;
		*des = (src >> 42) & 127;
		++des;
		*des = (src >> 49) & 127;
		++des;
		*/
		break;
	case 7:
		*des = (src) & 255;
		des++;
		*des = (src >> 8) & 255;
		des++;
		*des = (src >> 16) & 255;
		des++;
		*des = (src >> 24) & 255;
		des++;
		*des = (src >> 32) & 255;
		des++;
		*des = (src >> 40) & 255;
		des++;
		*des = (src >> 48) & 255;
		des++;
		break;
	case 8:
		*des = (src) & 1023;
		des++;
		*des = (src >> 10) & 1023;
		des++;
		*des = (src >> 20) & 1023;
		des++;
		*des = (src >> 30) & 1023;
		des++;
		*des = (src >> 40) & 1023;
		des++;
		*des = (src >> 50) & 1023;
		des++;
		break;
	case 9:
		*des = (src) & 4095;
		des++;
		*des = (src >> 12) & 4095;
		des++;
		*des = (src >> 24) & 4095;
		des++;
		*des = (src >> 36) & 4095;
		des++;
		*des = (src >> 48) & 4095;
		des++;
		break;
	case 10:
		*des = (src) & 32767;
		++des;
		*des = (src >> 15) & 32767;
		++des;
		*des = (src >> 30) & 32767;
		++des;
		*des = (src >> 45) & 32767;
		++des;
		break;
	case 11:
		*des = (src) & ((1 << 20) - 1);
		++des;
		*des = (src >> 20) & ((1 << 20) - 1);
		++des;
		*des = (src >> 40) & ((1 << 20) - 1);
		++des;
		break;
	case 12:
		*des = (src) & ((1 << 30) - 1);
		++des;
		*des = (src >> 30) & ((1 << 30) - 1);
		++des;
		break;
	case 13:
		*des = (src) & ((1LL << 60) - 1);
		++des;
		break;
	}
	return codeNum[num];
}

}
}


#endif /* SIMD_SIMPLE14_X64_HPP_ */
