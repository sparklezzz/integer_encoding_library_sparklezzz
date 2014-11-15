/*
 * simd_pack_vl.hpp
 *
 *  Created on: 2013-5-3
 *      Author: zxd
 */

#ifndef SIMD_PACK_VL_HPP_
#define SIMD_PACK_VL_HPP_

#ifdef USE_SSE_INSTRUCTION

namespace paradise {
namespace index {

template<typename T>
void simd_pack_vl0(uint32_t * des, const T *src, int blockSize) {

}


#define SINGLE_PACK_VL_LEFT(SRC, IDX, OFFSET) \
__asm__("movdqu %0, %%xmm1\n"	\
		"pand %%xmm0, %%xmm1\n"	\
		"pslld $"#OFFSET", %%xmm1\n"	\
		"por %%xmm1, %%xmm2\n"	\
		::"m" (SRC[IDX])	\
		:"memory");

#define SINGLE_PACK_VL_RIGHT(SRC, IDX, OFFSET) \
__asm__("movdqu %0, %%xmm1\n"	\
		"pand %%xmm0, %%xmm1\n"	\
		"psrld $"#OFFSET", %%xmm1\n"	\
		"por %%xmm1, %%xmm2\n"	\
		::"m" (SRC[IDX])	\
		:"memory");

#define WRITE_BACK(XMM, DES, IDX)	\
__asm__("movdqu %%"#XMM", %0\n"	\
		:"=m" (DES[IDX])	\
		::"memory");

#define ZERO(XMM) \
__asm__ ("pxor %%"#XMM", %%"#XMM"\n":::);


static const struct pack_vl_and_1_0{
int16_t a[8];
}pack_vl_and_1_0 __attribute__((aligned(16))) = {{0x1,0,0x1,0,0x1,0,0x1,0},};
static const struct pack_vl_and_2_0{
int16_t a[8];
}pack_vl_and_2_0 __attribute__((aligned(16))) = {{0x3,0,0x3,0,0x3,0,0x3,0},};
static const struct pack_vl_and_3_0{
int16_t a[8];
}pack_vl_and_3_0 __attribute__((aligned(16))) = {{0x7,0,0x7,0,0x7,0,0x7,0},};
static const struct pack_vl_and_4_0{
int16_t a[8];
}pack_vl_and_4_0 __attribute__((aligned(16))) = {{0xf,0,0xf,0,0xf,0,0xf,0},};
static const struct pack_vl_and_5_0{
int16_t a[8];
}pack_vl_and_5_0 __attribute__((aligned(16))) = {{0x1f,0,0x1f,0,0x1f,0,0x1f,0},};
static const struct pack_vl_and_6_0{
int16_t a[8];
}pack_vl_and_6_0 __attribute__((aligned(16))) = {{0x3f,0,0x3f,0,0x3f,0,0x3f,0},};
static const struct pack_vl_and_7_0{
int16_t a[8];
}pack_vl_and_7_0 __attribute__((aligned(16))) = {{0x7f,0,0x7f,0,0x7f,0,0x7f,0},};
static const struct pack_vl_and_8_0{
int16_t a[8];
}pack_vl_and_8_0 __attribute__((aligned(16))) = {{0xff,0,0xff,0,0xff,0,0xff,0},};


template<typename T>
void simd_pack_vl1(uint32_t * des, const T *src, int blockSize) {

	__asm__("movdqa %0,%%xmm0\n"//and_0
				 ::"m" (pack_vl_and_1_0.a[0]));
	int i;
	for (i = 0; i < blockSize; i += 128, src += 128, des += 4) {
			// deal with a0-d3
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		ZERO(xmm2)
		SINGLE_PACK_VL_LEFT(src, 0, 0)
		SINGLE_PACK_VL_LEFT(src, 4, 1)
		SINGLE_PACK_VL_LEFT(src, 8, 2)
		SINGLE_PACK_VL_LEFT(src, 12, 3)
		SINGLE_PACK_VL_LEFT(src, 16, 4)
		SINGLE_PACK_VL_LEFT(src, 20, 5)
		SINGLE_PACK_VL_LEFT(src, 24, 6)
		SINGLE_PACK_VL_LEFT(src, 28, 7)
		SINGLE_PACK_VL_LEFT(src, 32, 8)
		SINGLE_PACK_VL_LEFT(src, 36, 9)
		SINGLE_PACK_VL_LEFT(src, 40, 10)
		SINGLE_PACK_VL_LEFT(src, 44, 11)
		SINGLE_PACK_VL_LEFT(src, 48, 12)
		SINGLE_PACK_VL_LEFT(src, 52, 13)
		SINGLE_PACK_VL_LEFT(src, 56, 14)
		SINGLE_PACK_VL_LEFT(src, 60, 15)
		SINGLE_PACK_VL_LEFT(src, 64, 16)
		SINGLE_PACK_VL_LEFT(src, 68, 17)
		SINGLE_PACK_VL_LEFT(src, 72, 18)
		SINGLE_PACK_VL_LEFT(src, 76, 19)
		SINGLE_PACK_VL_LEFT(src, 80, 20)
		SINGLE_PACK_VL_LEFT(src, 84, 21)
		SINGLE_PACK_VL_LEFT(src, 88, 22)
		SINGLE_PACK_VL_LEFT(src, 92, 23)
		SINGLE_PACK_VL_LEFT(src, 96, 24)
		SINGLE_PACK_VL_LEFT(src, 100, 25)
		SINGLE_PACK_VL_LEFT(src, 104, 26)
		SINGLE_PACK_VL_LEFT(src, 108, 27)
		SINGLE_PACK_VL_LEFT(src, 112, 28)
		SINGLE_PACK_VL_LEFT(src, 116, 29)
		SINGLE_PACK_VL_LEFT(src, 120, 30)
		SINGLE_PACK_VL_LEFT(src, 124, 31)
		WRITE_BACK(xmm2, des, 0)
	}
}

template<typename T>
void simd_pack_vl2(uint32_t * des, const T *src, int blockSize) {
	__asm__("movdqa %0,%%xmm0\n"//and_0
				 ::"m" (pack_vl_and_2_0.a[0]));

	int i;
	for (i = 0; i < blockSize; i += 128, src += 128, des += 8) {
			// deal with a0-d3
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		ZERO(xmm2)
		SINGLE_PACK_VL_LEFT(src, 0, 0)
		SINGLE_PACK_VL_LEFT(src, 4, 2)
		SINGLE_PACK_VL_LEFT(src, 8, 4)
		SINGLE_PACK_VL_LEFT(src, 12, 6)
		SINGLE_PACK_VL_LEFT(src, 16, 8)
		SINGLE_PACK_VL_LEFT(src, 20, 10)
		SINGLE_PACK_VL_LEFT(src, 24, 12)
		SINGLE_PACK_VL_LEFT(src, 28, 14)
		SINGLE_PACK_VL_LEFT(src, 32, 16)
		SINGLE_PACK_VL_LEFT(src, 36, 18)
		SINGLE_PACK_VL_LEFT(src, 40, 20)
		SINGLE_PACK_VL_LEFT(src, 44, 22)
		SINGLE_PACK_VL_LEFT(src, 48, 24)
		SINGLE_PACK_VL_LEFT(src, 52, 26)
		SINGLE_PACK_VL_LEFT(src, 56, 28)
		SINGLE_PACK_VL_LEFT(src, 60, 30)
		WRITE_BACK(xmm2, des, 0)

		ZERO(xmm2)
		SINGLE_PACK_VL_LEFT(src, 64, 0)
		SINGLE_PACK_VL_LEFT(src, 68, 2)
		SINGLE_PACK_VL_LEFT(src, 72, 4)
		SINGLE_PACK_VL_LEFT(src, 76, 6)
		SINGLE_PACK_VL_LEFT(src, 80, 8)
		SINGLE_PACK_VL_LEFT(src, 84, 10)
		SINGLE_PACK_VL_LEFT(src, 88, 12)
		SINGLE_PACK_VL_LEFT(src, 92, 14)
		SINGLE_PACK_VL_LEFT(src, 96, 16)
		SINGLE_PACK_VL_LEFT(src, 100, 18)
		SINGLE_PACK_VL_LEFT(src, 104, 20)
		SINGLE_PACK_VL_LEFT(src, 108, 22)
		SINGLE_PACK_VL_LEFT(src, 112, 24)
		SINGLE_PACK_VL_LEFT(src, 116, 26)
		SINGLE_PACK_VL_LEFT(src, 120, 28)
		SINGLE_PACK_VL_LEFT(src, 124, 30)
		WRITE_BACK(xmm2, des, 4)
	}
}

template<typename T>
void simd_pack_vl3(uint32_t * des, const T *src, int blockSize) {
	__asm__("movdqa %0,%%xmm0\n"//and_0
				 ::"m" (pack_vl_and_3_0.a[0]));
	int i;
	for (i = 0; i < blockSize; i += 128, src += 128, des += 12) {
			// deal with a0-d3
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		ZERO(xmm2)
		SINGLE_PACK_VL_LEFT(src, 0, 0)
		SINGLE_PACK_VL_LEFT(src, 4, 3)
		SINGLE_PACK_VL_LEFT(src, 8, 6)
		SINGLE_PACK_VL_LEFT(src, 12, 9)
		SINGLE_PACK_VL_LEFT(src, 16, 12)
		SINGLE_PACK_VL_LEFT(src, 20, 15)
		SINGLE_PACK_VL_LEFT(src, 24, 18)
		SINGLE_PACK_VL_LEFT(src, 28, 21)
		SINGLE_PACK_VL_LEFT(src, 32, 24)
		SINGLE_PACK_VL_LEFT(src, 36, 27)
		SINGLE_PACK_VL_LEFT(src, 40, 30)
		WRITE_BACK(xmm2, des, 0)

		ZERO(xmm2)
		SINGLE_PACK_VL_RIGHT(src, 40, 2)
		SINGLE_PACK_VL_LEFT(src, 44, 1)
		SINGLE_PACK_VL_LEFT(src, 48, 4)
		SINGLE_PACK_VL_LEFT(src, 52, 7)
		SINGLE_PACK_VL_LEFT(src, 56, 10)
		SINGLE_PACK_VL_LEFT(src, 60, 13)
		SINGLE_PACK_VL_LEFT(src, 64, 16)
		SINGLE_PACK_VL_LEFT(src, 68, 19)
		SINGLE_PACK_VL_LEFT(src, 72, 22)
		SINGLE_PACK_VL_LEFT(src, 76, 25)
		SINGLE_PACK_VL_LEFT(src, 80, 28)
		SINGLE_PACK_VL_LEFT(src, 84, 31)
		WRITE_BACK(xmm2, des, 4)

		ZERO(xmm2)
		SINGLE_PACK_VL_RIGHT(src, 84, 1)
		SINGLE_PACK_VL_LEFT(src, 88, 2)
		SINGLE_PACK_VL_LEFT(src, 92, 5)
		SINGLE_PACK_VL_LEFT(src, 96, 8)
		SINGLE_PACK_VL_LEFT(src, 100, 11)
		SINGLE_PACK_VL_LEFT(src, 104, 14)
		SINGLE_PACK_VL_LEFT(src, 108, 17)
		SINGLE_PACK_VL_LEFT(src, 112, 20)
		SINGLE_PACK_VL_LEFT(src, 116, 23)
		SINGLE_PACK_VL_LEFT(src, 120, 26)
		SINGLE_PACK_VL_LEFT(src, 124, 29)
		WRITE_BACK(xmm2, des, 8)
	}
}

template<typename T>
void simd_pack_vl4(uint32_t * des, const T *src, int blockSize) {
	__asm__("movdqa %0,%%xmm0\n"//and_0
				 ::"m" (pack_vl_and_4_0.a[0]));
	int i;
	for (i = 0; i < blockSize; i += 128, src += 128, des += 16) {
			// deal with a0-d3
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		ZERO(xmm2)
		SINGLE_PACK_VL_LEFT(src, 0, 0)
		SINGLE_PACK_VL_LEFT(src, 4, 4)
		SINGLE_PACK_VL_LEFT(src, 8, 8)
		SINGLE_PACK_VL_LEFT(src, 12, 12)
		SINGLE_PACK_VL_LEFT(src, 16, 16)
		SINGLE_PACK_VL_LEFT(src, 20, 20)
		SINGLE_PACK_VL_LEFT(src, 24, 24)
		SINGLE_PACK_VL_LEFT(src, 28, 28)
		WRITE_BACK(xmm2, des, 0)

		ZERO(xmm2)
		SINGLE_PACK_VL_LEFT(src, 32, 0)
		SINGLE_PACK_VL_LEFT(src, 36, 4)
		SINGLE_PACK_VL_LEFT(src, 40, 8)
		SINGLE_PACK_VL_LEFT(src, 44, 12)
		SINGLE_PACK_VL_LEFT(src, 48, 16)
		SINGLE_PACK_VL_LEFT(src, 52, 20)
		SINGLE_PACK_VL_LEFT(src, 56, 24)
		SINGLE_PACK_VL_LEFT(src, 60, 28)
		WRITE_BACK(xmm2, des, 4)

		ZERO(xmm2)
		SINGLE_PACK_VL_LEFT(src, 64, 0)
		SINGLE_PACK_VL_LEFT(src, 68, 4)
		SINGLE_PACK_VL_LEFT(src, 72, 8)
		SINGLE_PACK_VL_LEFT(src, 76, 12)
		SINGLE_PACK_VL_LEFT(src, 80, 16)
		SINGLE_PACK_VL_LEFT(src, 84, 20)
		SINGLE_PACK_VL_LEFT(src, 88, 24)
		SINGLE_PACK_VL_LEFT(src, 92, 28)
		WRITE_BACK(xmm2, des, 8)

		ZERO(xmm2)
		SINGLE_PACK_VL_LEFT(src, 96, 0)
		SINGLE_PACK_VL_LEFT(src, 100, 4)
		SINGLE_PACK_VL_LEFT(src, 104, 8)
		SINGLE_PACK_VL_LEFT(src, 108, 12)
		SINGLE_PACK_VL_LEFT(src, 112, 16)
		SINGLE_PACK_VL_LEFT(src, 116, 20)
		SINGLE_PACK_VL_LEFT(src, 120, 24)
		SINGLE_PACK_VL_LEFT(src, 124, 28)
		WRITE_BACK(xmm2, des, 12)
	}
}

template<typename T>
void simd_pack_vl5(uint32_t * des, const T *src, int blockSize) {
	__asm__("movdqa %0,%%xmm0\n"//and_0
				 ::"m" (pack_vl_and_5_0.a[0]));
	int i;
	for (i = 0; i < blockSize; i += 128, src += 128, des += 20) {
			// deal with a0-d3
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		ZERO(xmm2)
		SINGLE_PACK_VL_LEFT(src, 0, 0)
		SINGLE_PACK_VL_LEFT(src, 4, 5)
		SINGLE_PACK_VL_LEFT(src, 8, 10)
		SINGLE_PACK_VL_LEFT(src, 12, 15)
		SINGLE_PACK_VL_LEFT(src, 16, 20)
		SINGLE_PACK_VL_LEFT(src, 20, 25)
		SINGLE_PACK_VL_LEFT(src, 24, 30)
		WRITE_BACK(xmm2, des, 0)

		ZERO(xmm2)
		SINGLE_PACK_VL_RIGHT(src, 24, 2)
		SINGLE_PACK_VL_LEFT(src, 28, 3)
		SINGLE_PACK_VL_LEFT(src, 32, 8)
		SINGLE_PACK_VL_LEFT(src, 36, 13)
		SINGLE_PACK_VL_LEFT(src, 40, 18)
		SINGLE_PACK_VL_LEFT(src, 44, 23)
		SINGLE_PACK_VL_LEFT(src, 48, 28)
		WRITE_BACK(xmm2, des, 4)

		ZERO(xmm2)
		SINGLE_PACK_VL_RIGHT(src, 48, 4)
		SINGLE_PACK_VL_LEFT(src, 52, 1)
		SINGLE_PACK_VL_LEFT(src, 56, 6)
		SINGLE_PACK_VL_LEFT(src, 60, 11)
		SINGLE_PACK_VL_LEFT(src, 64, 16)
		SINGLE_PACK_VL_LEFT(src, 68, 21)
		SINGLE_PACK_VL_LEFT(src, 72, 26)
		SINGLE_PACK_VL_LEFT(src, 76, 31)
		WRITE_BACK(xmm2, des, 8)

		ZERO(xmm2)
		SINGLE_PACK_VL_RIGHT(src, 76, 1)
		SINGLE_PACK_VL_LEFT(src, 80, 4)
		SINGLE_PACK_VL_LEFT(src, 84, 9)
		SINGLE_PACK_VL_LEFT(src, 88, 14)
		SINGLE_PACK_VL_LEFT(src, 92, 19)
		SINGLE_PACK_VL_LEFT(src, 96, 24)
		SINGLE_PACK_VL_LEFT(src, 100, 29)
		WRITE_BACK(xmm2, des, 12)

		ZERO(xmm2)
		SINGLE_PACK_VL_RIGHT(src, 100, 3)
		SINGLE_PACK_VL_LEFT(src, 104, 2)
		SINGLE_PACK_VL_LEFT(src, 108, 7)
		SINGLE_PACK_VL_LEFT(src, 112, 12)
		SINGLE_PACK_VL_LEFT(src, 116, 17)
		SINGLE_PACK_VL_LEFT(src, 120, 22)
		SINGLE_PACK_VL_LEFT(src, 124, 27)
		WRITE_BACK(xmm2, des, 16)
	}
}



template<typename T>
void simd_pack_vl6(uint32_t * des, const T *src, int blockSize) {
	__asm__("movdqa %0,%%xmm0\n"//and_0
				 ::"m" (pack_vl_and_6_0.a[0]));
	int i;
	for (i = 0; i < blockSize; i += 128, src += 128, des += 24) {
			// deal with a0-d3
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		ZERO(xmm2)
		SINGLE_PACK_VL_LEFT(src, 0, 0)
		SINGLE_PACK_VL_LEFT(src, 4, 6)
		SINGLE_PACK_VL_LEFT(src, 8, 12)
		SINGLE_PACK_VL_LEFT(src, 12, 18)
		SINGLE_PACK_VL_LEFT(src, 16, 24)
		SINGLE_PACK_VL_LEFT(src, 20, 30)
		WRITE_BACK(xmm2, des, 0)

		ZERO(xmm2)
		SINGLE_PACK_VL_RIGHT(src, 20, 2)
		SINGLE_PACK_VL_LEFT(src, 24, 4)
		SINGLE_PACK_VL_LEFT(src, 28, 10)
		SINGLE_PACK_VL_LEFT(src, 32, 16)
		SINGLE_PACK_VL_LEFT(src, 36, 22)
		SINGLE_PACK_VL_LEFT(src, 40, 28)
		WRITE_BACK(xmm2, des, 4)

		ZERO(xmm2)
		SINGLE_PACK_VL_RIGHT(src, 40, 4)
		SINGLE_PACK_VL_LEFT(src, 44, 2)
		SINGLE_PACK_VL_LEFT(src, 48, 8)
		SINGLE_PACK_VL_LEFT(src, 52, 14)
		SINGLE_PACK_VL_LEFT(src, 56, 20)
		SINGLE_PACK_VL_LEFT(src, 60, 26)
		WRITE_BACK(xmm2, des, 8)

		ZERO(xmm2)
		SINGLE_PACK_VL_LEFT(src, 64, 0)
		SINGLE_PACK_VL_LEFT(src, 68, 6)
		SINGLE_PACK_VL_LEFT(src, 72, 12)
		SINGLE_PACK_VL_LEFT(src, 76, 18)
		SINGLE_PACK_VL_LEFT(src, 80, 24)
		SINGLE_PACK_VL_LEFT(src, 84, 30)
		WRITE_BACK(xmm2, des, 12)

		ZERO(xmm2)
		SINGLE_PACK_VL_RIGHT(src, 84, 2)
		SINGLE_PACK_VL_LEFT(src, 88, 4)
		SINGLE_PACK_VL_LEFT(src, 92, 10)
		SINGLE_PACK_VL_LEFT(src, 96, 16)
		SINGLE_PACK_VL_LEFT(src, 100, 22)
		SINGLE_PACK_VL_LEFT(src, 104, 28)
		WRITE_BACK(xmm2, des, 16)

		ZERO(xmm2)
		SINGLE_PACK_VL_RIGHT(src, 104, 4)
		SINGLE_PACK_VL_LEFT(src, 108, 2)
		SINGLE_PACK_VL_LEFT(src, 112, 8)
		SINGLE_PACK_VL_LEFT(src, 116, 14)
		SINGLE_PACK_VL_LEFT(src, 120, 20)
		SINGLE_PACK_VL_LEFT(src, 124, 26)
		WRITE_BACK(xmm2, des, 20)
	}
}

template<typename T>
void simd_pack_vl7(uint32_t * des, const T *src, int blockSize) {
	__asm__("movdqa %0,%%xmm0\n"//and_0
				 ::"m" (pack_vl_and_7_0.a[0]));
	int i;
	for (i = 0; i < blockSize; i += 128, src += 128, des += 28) {
			// deal with a0-d3
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		ZERO(xmm2)
		SINGLE_PACK_VL_LEFT(src, 0, 0)
		SINGLE_PACK_VL_LEFT(src, 4, 7)
		SINGLE_PACK_VL_LEFT(src, 8, 14)
		SINGLE_PACK_VL_LEFT(src, 12, 21)
		SINGLE_PACK_VL_LEFT(src, 16, 28)
		WRITE_BACK(xmm2, des, 0)

		ZERO(xmm2)
		SINGLE_PACK_VL_RIGHT(src, 16, 4)
		SINGLE_PACK_VL_LEFT(src, 20, 3)
		SINGLE_PACK_VL_LEFT(src, 24, 10)
		SINGLE_PACK_VL_LEFT(src, 28, 17)
		SINGLE_PACK_VL_LEFT(src, 32, 24)
		SINGLE_PACK_VL_LEFT(src, 36, 31)
		WRITE_BACK(xmm2, des, 4)

		ZERO(xmm2)
		SINGLE_PACK_VL_RIGHT(src, 36, 1)
		SINGLE_PACK_VL_LEFT(src, 40, 6)
		SINGLE_PACK_VL_LEFT(src, 44, 13)
		SINGLE_PACK_VL_LEFT(src, 48, 20)
		SINGLE_PACK_VL_LEFT(src, 52, 27)
		WRITE_BACK(xmm2, des, 8)

		ZERO(xmm2)
		SINGLE_PACK_VL_RIGHT(src, 52, 5)
		SINGLE_PACK_VL_LEFT(src, 56, 2)
		SINGLE_PACK_VL_LEFT(src, 60, 9)
		SINGLE_PACK_VL_LEFT(src, 64, 16)
		SINGLE_PACK_VL_LEFT(src, 68, 23)
		SINGLE_PACK_VL_LEFT(src, 72, 30)
		WRITE_BACK(xmm2, des, 12)

		ZERO(xmm2)
		SINGLE_PACK_VL_RIGHT(src, 72, 2)
		SINGLE_PACK_VL_LEFT(src, 76, 5)
		SINGLE_PACK_VL_LEFT(src, 80, 12)
		SINGLE_PACK_VL_LEFT(src, 84, 19)
		SINGLE_PACK_VL_LEFT(src, 88, 26)
		WRITE_BACK(xmm2, des, 16)

		ZERO(xmm2)
		SINGLE_PACK_VL_RIGHT(src, 88, 6)
		SINGLE_PACK_VL_LEFT(src, 92, 1)
		SINGLE_PACK_VL_LEFT(src, 96, 8)
		SINGLE_PACK_VL_LEFT(src, 100, 15)
		SINGLE_PACK_VL_LEFT(src, 104, 22)
		SINGLE_PACK_VL_LEFT(src, 108, 29)
		WRITE_BACK(xmm2, des, 20)

		ZERO(xmm2)
		SINGLE_PACK_VL_RIGHT(src, 108, 3)
		SINGLE_PACK_VL_LEFT(src, 112, 4)
		SINGLE_PACK_VL_LEFT(src, 116, 11)
		SINGLE_PACK_VL_LEFT(src, 120, 18)
		SINGLE_PACK_VL_LEFT(src, 124, 25)
		WRITE_BACK(xmm2, des, 24)
	}
}

template<typename T>
void simd_pack_vl8(uint32_t * des, const T *src, int blockSize) {
	__asm__("movdqa %0,%%xmm0\n"//and_0
				 ::"m" (pack_vl_and_8_0.a[0]));
	int i;
	for (i = 0; i < blockSize; i += 128, src += 128, des += 32) {
			// deal with a0-d3
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		ZERO(xmm2)
		SINGLE_PACK_VL_LEFT(src, 0, 0)
		SINGLE_PACK_VL_LEFT(src, 4, 8)
		SINGLE_PACK_VL_LEFT(src, 8, 16)
		SINGLE_PACK_VL_LEFT(src, 12, 24)
		WRITE_BACK(xmm2, des, 0)
		ZERO(xmm2)
		SINGLE_PACK_VL_LEFT(src, 16, 0)
		SINGLE_PACK_VL_LEFT(src, 20, 8)
		SINGLE_PACK_VL_LEFT(src, 24, 16)
		SINGLE_PACK_VL_LEFT(src, 28, 24)
		WRITE_BACK(xmm2, des, 4)
		ZERO(xmm2)
		SINGLE_PACK_VL_LEFT(src, 32, 0)
		SINGLE_PACK_VL_LEFT(src, 36, 8)
		SINGLE_PACK_VL_LEFT(src, 40, 16)
		SINGLE_PACK_VL_LEFT(src, 44, 24)
		WRITE_BACK(xmm2, des, 8)
		ZERO(xmm2)
		SINGLE_PACK_VL_LEFT(src, 48, 0)
		SINGLE_PACK_VL_LEFT(src, 52, 8)
		SINGLE_PACK_VL_LEFT(src, 56, 16)
		SINGLE_PACK_VL_LEFT(src, 60, 24)
		WRITE_BACK(xmm2, des, 12)
		ZERO(xmm2)
		SINGLE_PACK_VL_LEFT(src, 64, 0)
		SINGLE_PACK_VL_LEFT(src, 68, 8)
		SINGLE_PACK_VL_LEFT(src, 72, 16)
		SINGLE_PACK_VL_LEFT(src, 76, 24)
		WRITE_BACK(xmm2, des, 16)
		ZERO(xmm2)
		SINGLE_PACK_VL_LEFT(src, 80, 0)
		SINGLE_PACK_VL_LEFT(src, 84, 8)
		SINGLE_PACK_VL_LEFT(src, 88, 16)
		SINGLE_PACK_VL_LEFT(src, 92, 24)
		WRITE_BACK(xmm2, des, 20)
		ZERO(xmm2)
		SINGLE_PACK_VL_LEFT(src, 96, 0)
		SINGLE_PACK_VL_LEFT(src, 100, 8)
		SINGLE_PACK_VL_LEFT(src, 104, 16)
		SINGLE_PACK_VL_LEFT(src, 108, 24)
		WRITE_BACK(xmm2, des, 24)
		ZERO(xmm2)
		SINGLE_PACK_VL_LEFT(src, 112, 0)
		SINGLE_PACK_VL_LEFT(src, 116, 8)
		SINGLE_PACK_VL_LEFT(src, 120, 16)
		SINGLE_PACK_VL_LEFT(src, 124, 24)
		WRITE_BACK(xmm2, des, 28)
	}
}


}
}

#endif

#endif /* SIMD_PACK_VL_HPP_ */
