/*
 * SIMD_Simple9.hpp
 */

#ifndef SIMD_SIMPLE9_HPP_
#define SIMD_SIMPLE9_HPP_

#ifdef USE_SSE_INSTRUCTION

#include "Compressor.hpp"
#include "VarByte.hpp"
#include <stdint.h>

namespace paradise {
namespace index {

static const struct unpack_simple9_shfl_1_0{
int8_t a[16];
}unpack_simple9_shfl_1_0 __attribute__((aligned(16))) = {{0,0xff,0xff,0xff,0,0xff,0xff,0xff,0,0xff,0xff,0xff,0,0xff,0xff,0xff},};
static const struct unpack_simple9_mul_1_0{
uint32_t a[4];
}unpack_simple9_mul_1_0 __attribute__((aligned(16))) = {{0x80000000, 0x40000000, 0x20000000, 0x10000000},};
static const struct unpack_simple9_shfl_2_0{
int8_t a[16];
}unpack_simple9_shfl_2_0 __attribute__((aligned(16))) = {{0,0xff,0xff,0xff,0,0xff,0xff,0xff,0,0xff,0xff,0xff,0,0xff,0xff,0xff},};
static const struct unpack_simple9_mul_2_0{
uint32_t a[4];
}unpack_simple9_mul_2_0 __attribute__((aligned(16))) = {{0x40000000, 0x10000000, 0x4000000, 0x1000000},};
static const struct unpack_simple9_shfl_3_0{
int8_t a[16];
}unpack_simple9_shfl_3_0 __attribute__((aligned(16))) = {{0,1,0xff,0xff,0,1,0xff,0xff,0,1,0xff,0xff,0,1,0xff,0xff},};
static const struct unpack_simple9_mul_3_0{
uint32_t a[4];
}unpack_simple9_mul_3_0 __attribute__((aligned(16))) = {{0x20000000, 0x4000000, 0x800000, 0x100000},};
static const struct unpack_simple9_shfl_4_0{
int8_t a[16];
}unpack_simple9_shfl_4_0 __attribute__((aligned(16))) = {{0,1,0xff,0xff,0,1,0xff,0xff,0,1,0xff,0xff,0,1,0xff,0xff},};
static const struct unpack_simple9_mul_4_0{
uint32_t a[4];
}unpack_simple9_mul_4_0 __attribute__((aligned(16))) = {{0x10000000, 0x1000000, 0x100000, 0x10000},};
static const struct unpack_simple9_shfl_5_0{
int8_t a[16];
}unpack_simple9_shfl_5_0 __attribute__((aligned(16))) = {{0,1,2,0xff,0,1,2,0xff,0,1,2,0xff,0,1,2,0xff},};
static const struct unpack_simple9_mul_5_0{
uint32_t a[4];
}unpack_simple9_mul_5_0 __attribute__((aligned(16))) = {{0x8000000, 0x400000, 0x20000, 0x1000},};
static const struct unpack_simple9_shfl_6_0{
int8_t a[16];
}unpack_simple9_shfl_6_0 __attribute__((aligned(16))) = {{0,1,2,0xff,0,1,2,0xff,0,1,2,0xff,0,1,2,0xff},};
static const struct unpack_simple9_mul_6_0{
uint32_t a[4];
}unpack_simple9_mul_6_0 __attribute__((aligned(16))) = {{0x4000000, 0x100000, 0x4000, 0x100},};
static const struct unpack_simple9_shfl_7_0{
int8_t a[16];
}unpack_simple9_shfl_7_0 __attribute__((aligned(16))) = {{0,1,2,3,0,1,2,3,0,1,2,3,0,1,2,3},};
static const struct unpack_simple9_mul_7_0{
uint32_t a[4];
}unpack_simple9_mul_7_0 __attribute__((aligned(16))) = {{0x2000000, 0x40000, 0x800, 0x10},};

class SIMD_Simple9: public Compressor {
public:
	SIMD_Simple9() {
	}
	virtual ~SIMD_Simple9() {
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
	virtual std::string getCompressorName() {
		return "simd_simple9";
	}
	virtual Compressor* clone();
private:
	template<typename T>
	static int s9_encode(uint32_t* des, const T* src, int left);

	template<typename T>
	static int s9_decode(T* des, uint32_t val);
private:
	static uint8_t bitSizeArr[9];
	static uint8_t codeNum[9];
	static uint32_t maskArr[9];
};

template<typename T>
int SIMD_Simple9::encode(char* des, const T* src, uint32_t encodeNum) {
	uint32_t* desInt = (uint32_t *) des;
	int left = encodeNum;
	const int threshold = 3;
	if (encodeNum > threshold) {
		left = encodeNum - threshold;
		int ret;
		while (left > 0) {
			ret = s9_encode(desInt, src, left);
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
int SIMD_Simple9::decode(T* des, const char* src, int decodeNum) {
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
			 ::"m" (unpack_simple9_shfl_1_0),"m" (unpack_simple9_mul_1_0),
			  "m" (unpack_simple9_shfl_2_0),"m" (unpack_simple9_mul_2_0),
			  "m" (unpack_simple9_shfl_3_0),"m" (unpack_simple9_mul_3_0),
			  "m" (unpack_simple9_shfl_4_0),"m" (unpack_simple9_mul_4_0),
			  "m" (unpack_simple9_shfl_5_0),"m" (unpack_simple9_mul_5_0)
			 :"memory");

	__asm__("movdqa %0,%%xmm10\n"//shfl_7
			"movdqa %1,%%xmm11\n"//mul_7
			 ::"m" (unpack_simple9_shfl_7_0),"m" (unpack_simple9_mul_7_0)
			 :"memory");

	const int threshold = 3;
	if (decodeNum > threshold) {
		int num;
		uint32_t* input = (uint32_t*) src;
		int left = decodeNum - threshold;
		while (left > 0) {
			num = s9_decode(des, *input);
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
int SIMD_Simple9::s9_encode(uint32_t* des, const T* src, int left) {
	int num2code;
	bool succ = false;
	for (int bitNum = 0; bitNum < 9; bitNum++) {
		if (left < codeNum[bitNum]) {
			continue;
		}
		num2code = codeNum[bitNum];
		int bitSize = bitSizeArr[bitNum];
		*des = bitNum << 28;
		int pos = 0;
		int curOffset = 0;
		uint32_t mask = maskArr[bitNum];
		for (pos = 0; (pos < num2code) && (*(src + pos) <= mask); pos++) {
			*des |= (*(src + pos)) << curOffset;
			curOffset += bitSize;
		}
		if (pos == num2code) {//说明能被压缩
			succ = true;
			src += num2code;
			break;
		}
	}
	if (!succ) {
		//large number that can respresnet by 28bit
	}
	return num2code;
}
template<typename T>
int SIMD_Simple9::s9_decode(T* des, uint32_t src) {

#define SINGLE_UNPACK_SIMPLE9(DES, IDX, SHFL_REG, MUL_REG, RIGHT_OFFSET) \
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
__asm__("psrld $"#OFFSET", %%xmm"#XMM"\n":::);

	__asm__ volatile("prefetchnta %0"::"m" (src));

	int num;
	num = (src) >> 28;
	switch (num) {
	case 0:
		READ_FROM(src, 14)
		SINGLE_UNPACK_SIMPLE9(des, 0, 0, 1, 31)
		SHIFT_RIGHT(14, 4)
		SINGLE_UNPACK_SIMPLE9(des, 4, 0, 1, 31)
		SHIFT_RIGHT(14, 4)
		SINGLE_UNPACK_SIMPLE9(des, 8, 0, 1, 31)
		SHIFT_RIGHT(14, 4)
		SINGLE_UNPACK_SIMPLE9(des, 12, 0, 1, 31)
		SHIFT_RIGHT(14, 4)
		SINGLE_UNPACK_SIMPLE9(des, 16, 0, 1, 31)
		SHIFT_RIGHT(14, 4)
		SINGLE_UNPACK_SIMPLE9(des, 20, 0, 1, 31)
		SHIFT_RIGHT(14, 4)
		SINGLE_UNPACK_SIMPLE9(des, 24, 0, 1, 31)
		des += 28;

		/*
		*des = (src) & 1;
		des++;
		*des = (src >> 1) & 1;
		des++;
		*des = (src >> 2) & 1;
		des++;
		*des = (src >> 3) & 1;
		des++;
		*des = (src >> 4) & 1;
		des++;
		*des = (src >> 5) & 1;
		des++;
		*des = (src >> 6) & 1;
		des++;
		*des = (src >> 7) & 1;
		des++;
		*des = (src >> 8) & 1;
		des++;
		*des = (src >> 9) & 1;
		des++;
		*des = (src >> 10) & 1;
		des++;
		*des = (src >> 11) & 1;
		des++;
		*des = (src >> 12) & 1;
		des++;
		*des = (src >> 13) & 1;
		des++;
		*des = (src >> 14) & 1;
		des++;
		*des = (src >> 15) & 1;
		des++;
		*des = (src >> 16) & 1;
		des++;
		*des = (src >> 17) & 1;
		des++;
		*des = (src >> 18) & 1;
		des++;
		*des = (src >> 19) & 1;
		des++;
		*des = (src >> 20) & 1;
		des++;
		*des = (src >> 21) & 1;
		des++;
		*des = (src >> 22) & 1;
		des++;
		*des = (src >> 23) & 1;
		des++;
		*des = (src >> 24) & 1;
		des++;
		*des = (src >> 25) & 1;
		des++;
		*des = (src >> 26) & 1;
		des++;
		*des = (src >> 27) & 1;
		des++;
		*/
		break;
	case 1:
		READ_FROM(src, 14)
		SINGLE_UNPACK_SIMPLE9(des, 0, 2, 3, 30)
		SHIFT_RIGHT(14, 8)
		SINGLE_UNPACK_SIMPLE9(des, 4, 2, 3, 30)
		SHIFT_RIGHT(14, 8)
		SINGLE_UNPACK_SIMPLE9(des, 8, 2, 3, 30)
		SHIFT_RIGHT(14, 8)
		SINGLE_UNPACK_SIMPLE9(des, 12, 2, 3, 30)
		des += 14;
		/*
		*des = (src) & 3;
		des++;
		*des = (src >> 2) & 3;
		des++;
		*des = (src >> 4) & 3;
		des++;
		*des = (src >> 6) & 3;
		des++;
		*des = (src >> 8) & 3;
		des++;
		*des = (src >> 10) & 3;
		des++;
		*des = (src >> 12) & 3;
		des++;
		*des = (src >> 14) & 3;
		des++;
		*des = (src >> 16) & 3;
		des++;
		*des = (src >> 18) & 3;
		des++;
		*des = (src >> 20) & 3;
		des++;
		*des = (src >> 22) & 3;
		des++;
		*des = (src >> 24) & 3;
		des++;
		*des = (src >> 26) & 3;
		des++;
		*/
		break;
	case 2:
		READ_FROM(src, 14)
		SINGLE_UNPACK_SIMPLE9(des, 0, 4, 5, 29)
		SHIFT_RIGHT(14, 12)
		SINGLE_UNPACK_SIMPLE9(des, 4, 4, 5, 29)
		SHIFT_RIGHT(14, 12)
		SINGLE_UNPACK_SIMPLE9(des, 8, 4, 5, 29)
		des += 9;
		/*
		*des = (src) & 7;
		des++;
		*des = (src >> 3) & 7;
		des++;
		*des = (src >> 6) & 7;
		des++;
		*des = (src >> 9) & 7;
		des++;
		*des = (src >> 12) & 7;
		des++;
		*des = (src >> 15) & 7;
		des++;
		*des = (src >> 18) & 7;
		des++;
		*des = (src >> 21) & 7;
		des++;
		*des = (src >> 24) & 7;
		des++;
		*/
		break;
	case 3:
		READ_FROM(src, 14)
		SINGLE_UNPACK_SIMPLE9(des, 0, 6, 7, 28)
		SHIFT_RIGHT(14, 16)
		SINGLE_UNPACK_SIMPLE9(des, 4, 6, 7, 28)
		des += 7;
		/*
		*des = (src) & 15;
		des++;
		*des = (src >> 4) & 15;
		des++;
		*des = (src >> 8) & 15;
		des++;
		*des = (src >> 12) & 15;
		des++;
		*des = (src >> 16) & 15;
		des++;
		*des = (src >> 20) & 15;
		des++;
		*des = (src >> 24) & 15;
		des++;
		*/
		break;
	case 4:
		READ_FROM(src, 14)
		SINGLE_UNPACK_SIMPLE9(des, 0, 8, 9, 27)
		SHIFT_RIGHT(14, 20)
		SINGLE_UNPACK_SIMPLE9(des, 4, 8, 9, 27)
		des += 5;
		/*
		*des = (src) & 31;
		des++;
		*des = (src >> 5) & 31;
		des++;
		*des = (src >> 10) & 31;
		des++;
		*des = (src >> 15) & 31;
		des++;
		*des = (src >> 20) & 31;
		des++;
		*/
		break;
	case 5:
		READ_FROM(src, 14)
		SINGLE_UNPACK_SIMPLE9(des, 0, 10, 11, 25)
		des += 4;
		/*
		*des = (src) & 127;
		des++;
		*des = (src >> 7) & 127;
		des++;
		*des = (src >> 14) & 127;
		des++;
		*des = (src >> 21) & 127;
		des++;
		*/
		break;
	case 6:
		*des = (src) & 511;
		des++;
		*des = (src >> 9) & 511;
		des++;
		*des = (src >> 18) & 511;
		des++;
		break;
	case 7:
		*des = (src) & 16383;
		des++;
		*des = (src >> 14) & 16383;
		des++;
		break;
	case 8:
		*des = (src) & ((1 << 28) - 1);
		des++;
		break;
	}
	return codeNum[num];
}

}
}

#endif

#endif /* SIMD_SIMPLE9_HPP_ */
