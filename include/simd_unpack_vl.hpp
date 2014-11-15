/*
 * simd_unpack_vl.hpp
 * block的块解压，每次解压32个数
 *
 */

#ifndef SIMD_UNPACK_VL_HPP_
#define SIMD_UNPACK_VL_HPP_

#ifdef USE_SSE_INSTRUCTION

namespace paradise {
namespace index {

template<typename T>
void simd_unpack_vl0(T * des, const uint32_t *src, int blockSize) {
	int i;
	for (i = 0; i < blockSize; i++)
		des[i] = 0;
}

#define SINGLE_UNPACK_VL_RIGHT(OFFSET) \
__asm__("movdqa %%xmm1, %%xmm2\n"	\
		"psrld $"#OFFSET", %%xmm2\n"	\
		:::);

#define SINGLE_UNPACK_VL_LEFT(OFFSET) \
__asm__("movdqa %%xmm1, %%xmm3\n"	\
		"pslld $"#OFFSET", %%xmm3\n"	\
		"por %%xmm3, %%xmm2\n"	\
		"pand %%xmm0, %%xmm2\n"	\
		:::);

#define SINGLE_UNPACK_VL_RIGHT_WRITE(DES, IDX, OFFSET) \
__asm__("movdqa %%xmm1, %%xmm2\n"	\
		"psrld $"#OFFSET", %%xmm2\n"	\
		"pand %%xmm0, %%xmm2\n"	\
		"movdqu %%xmm2, %0\n"	\
		:"=m" (DES[IDX])	\
		::"memory");

#define READ_FROM(SRC, IDX, XMM)	\
__asm__("movdqu %0, %%"#XMM"\n"	\
		::"m" (SRC[IDX])	\
		:"memory");

#define WRITE_TO(DES, IDX, XMM) \
__asm__("movdqu %%"#XMM", %0\n"	\
		::"m" (DES[IDX])	\
		:"memory");

#define ZERO(XMM) \
__asm__ ("pxor %%"#XMM", %%"#XMM"\n":::);

static const struct unpack_vl_and_1_0{
int16_t a[8];
}unpack_vl_and_1_0 __attribute__((aligned(16))) = {{0x1,0,0x1,0,0x1,0,0x1,0},};
static const struct unpack_vl_and_2_0{
int16_t a[8];
}unpack_vl_and_2_0 __attribute__((aligned(16))) = {{0x3,0,0x3,0,0x3,0,0x3,0},};
static const struct unpack_vl_and_3_0{
int16_t a[8];
}unpack_vl_and_3_0 __attribute__((aligned(16))) = {{0x7,0,0x7,0,0x7,0,0x7,0},};
static const struct unpack_vl_and_4_0{
int16_t a[8];
}unpack_vl_and_4_0 __attribute__((aligned(16))) = {{0xf,0,0xf,0,0xf,0,0xf,0},};
static const struct unpack_vl_and_5_0{
int16_t a[8];
}unpack_vl_and_5_0 __attribute__((aligned(16))) = {{0x1f,0,0x1f,0,0x1f,0,0x1f,0},};
static const struct unpack_vl_and_6_0{
int16_t a[8];
}unpack_vl_and_6_0 __attribute__((aligned(16))) = {{0x3f,0,0x3f,0,0x3f,0,0x3f,0},};
static const struct unpack_vl_and_7_0{
int16_t a[8];
}unpack_vl_and_7_0 __attribute__((aligned(16))) = {{0x7f,0,0x7f,0,0x7f,0,0x7f,0},};
static const struct unpack_vl_and_8_0{
int16_t a[8];
}unpack_vl_and_8_0 __attribute__((aligned(16))) = {{0xff,0,0xff,0,0xff,0,0xff,0},};


template<typename T>
void simd_unpack_vl1(T * des, const uint32_t *src, int blockSize) {
	__asm__("movdqa %0,%%xmm0\n"//and_0
				 ::"m" (unpack_vl_and_1_0.a[0]));	
	int i;
	for (i = 0; i < blockSize; i += 128, src += 4, des += 128) {
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		READ_FROM(src, 0, xmm1)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 0, 0)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 4, 1)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 8, 2)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 12, 3)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 16, 4)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 20, 5)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 24, 6)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 28, 7)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 32, 8)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 36, 9)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 40, 10)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 44, 11)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 48, 12)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 52, 13)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 56, 14)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 60, 15)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 64, 16)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 68, 17)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 72, 18)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 76, 19)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 80, 20)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 84, 21)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 88, 22)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 92, 23)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 96, 24)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 100, 25)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 104, 26)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 108, 27)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 112, 28)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 116, 29)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 120, 30)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 124, 31)
	}
}

template<typename T>
void simd_unpack_vl2(T * des, const uint32_t *src, int blockSize) {
	__asm__("movdqa %0,%%xmm0\n"//and_0
				 ::"m" (unpack_vl_and_2_0.a[0]));
	int i;
	for (i = 0; i < blockSize; i += 128, src += 8, des += 128) {
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		READ_FROM(src, 0, xmm1)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 0, 0)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 4, 2)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 8, 4)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 12, 6)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 16, 8)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 20, 10)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 24, 12)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 28, 14)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 32, 16)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 36, 18)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 40, 20)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 44, 22)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 48, 24)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 52, 26)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 56, 28)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 60, 30)

		READ_FROM(src, 4, xmm1)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 64, 0)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 68, 2)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 72, 4)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 76, 6)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 80, 8)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 84, 10)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 88, 12)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 92, 14)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 96, 16)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 100, 18)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 104, 20)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 108, 22)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 112, 24)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 116, 26)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 120, 28)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 124, 30)
	}
}

template<typename T>
void simd_unpack_vl3(T * des, const uint32_t *src, int blockSize) {
	__asm__("movdqa %0,%%xmm0\n"//and_0
				 ::"m" (unpack_vl_and_3_0.a[0]));
	int i;
	for (i = 0; i < blockSize; i += 128, src += 12, des += 128) {
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		READ_FROM(src, 0, xmm1)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 0, 0)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 4, 3)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 8, 6)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 12, 9)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 16, 12)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 20, 15)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 24, 18)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 28, 21)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 32, 24)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 36, 27)

		SINGLE_UNPACK_VL_RIGHT(30)
		READ_FROM(src, 4, xmm1)
		SINGLE_UNPACK_VL_LEFT(2)
		WRITE_TO(des, 40, xmm2)

		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 44, 1)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 48, 4)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 52, 7)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 56, 10)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 60, 13)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 64, 16)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 68, 19)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 72, 22)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 76, 25)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 80, 28)

		SINGLE_UNPACK_VL_RIGHT(31)
		READ_FROM(src, 8, xmm1)
		SINGLE_UNPACK_VL_LEFT(1)
		WRITE_TO(des, 84, xmm2)

		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 88, 2)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 92, 5)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 96, 8)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 100, 11)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 104, 14)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 108, 17)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 112, 20)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 116, 23)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 120, 26)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 124, 29)
	}
}

template<typename T>
void simd_unpack_vl4(T * des, const uint32_t *src, int blockSize) {
	__asm__("movdqa %0,%%xmm0\n"//and_0
				 ::"m" (unpack_vl_and_4_0.a[0]));
	int i;
	for (i = 0; i < blockSize; i += 128, src += 16, des += 128) {
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		READ_FROM(src, 0, xmm1)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 0, 0)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 4, 4)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 8, 8)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 12, 12)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 16, 16)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 20, 20)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 24, 24)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 28, 28)

		READ_FROM(src, 4, xmm1)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 32, 0)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 36, 4)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 40, 8)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 44, 12)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 48, 16)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 52, 20)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 56, 24)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 60, 28)

		READ_FROM(src, 8, xmm1)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 64, 0)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 68, 4)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 72, 8)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 76, 12)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 80, 16)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 84, 20)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 88, 24)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 92, 28)

		READ_FROM(src, 12, xmm1)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 96, 0)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 100, 4)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 104, 8)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 108, 12)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 112, 16)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 116, 20)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 120, 24)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 124, 28)
	}
}

template<typename T>
void simd_unpack_vl5(T * des, const uint32_t *src, int blockSize) {
	__asm__("movdqa %0,%%xmm0\n"//and_0
				 ::"m" (unpack_vl_and_5_0.a[0]));
	int i;
	for (i = 0; i < blockSize; i += 128, src += 20, des += 128) {
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		READ_FROM(src, 0, xmm1)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 0, 0)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 4, 5)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 8, 10)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 12, 15)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 16, 20)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 20, 25)

		SINGLE_UNPACK_VL_RIGHT(30)
		READ_FROM(src, 4, xmm1)
		SINGLE_UNPACK_VL_LEFT(2)
		WRITE_TO(des, 24, xmm2)

		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 28, 3)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 32, 8)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 36, 13)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 40, 18)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 44, 23)

		SINGLE_UNPACK_VL_RIGHT(28)
		READ_FROM(src, 8, xmm1)
		SINGLE_UNPACK_VL_LEFT(4)
		WRITE_TO(des, 48, xmm2)

		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 52, 1)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 56, 6)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 60, 11)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 64, 16)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 68, 21)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 72, 26)

		SINGLE_UNPACK_VL_RIGHT(31)
		READ_FROM(src, 12, xmm1)
		SINGLE_UNPACK_VL_LEFT(1)
		WRITE_TO(des, 76, xmm2)

		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 80, 4)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 84, 9)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 88, 14)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 92, 19)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 96, 24)

		SINGLE_UNPACK_VL_RIGHT(29)
		READ_FROM(src, 16, xmm1)
		SINGLE_UNPACK_VL_LEFT(3)
		WRITE_TO(des, 100, xmm2)

		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 104, 2)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 108, 7)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 112, 12)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 116, 17)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 120, 22)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 124, 27)
	}
}

template<typename T>
void simd_unpack_vl6(T * des, const uint32_t *src, int blockSize) {
	__asm__("movdqa %0,%%xmm0\n"//and_0
				 ::"m" (unpack_vl_and_6_0.a[0]));
	int i;
	for (i = 0; i < blockSize; i += 128, src += 24, des += 128) {
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		READ_FROM(src, 0, xmm1)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 0, 0)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 4, 6)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 8, 12)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 12, 18)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 16, 24)

		SINGLE_UNPACK_VL_RIGHT(30)
		READ_FROM(src, 4, xmm1)
		SINGLE_UNPACK_VL_LEFT(2)
		WRITE_TO(des, 20, xmm2)

		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 24, 4)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 28, 10)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 32, 16)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 36, 22)

		SINGLE_UNPACK_VL_RIGHT(28)
		READ_FROM(src, 8, xmm1)
		SINGLE_UNPACK_VL_LEFT(4)
		WRITE_TO(des, 40, xmm2)

		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 44, 2)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 48, 8)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 52, 14)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 56, 20)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 60, 26)

		READ_FROM(src, 12, xmm1)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 64, 0)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 68, 6)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 72, 12)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 76, 18)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 80, 24)

		SINGLE_UNPACK_VL_RIGHT(30)
		READ_FROM(src, 16, xmm1)
		SINGLE_UNPACK_VL_LEFT(2)
		WRITE_TO(des, 84, xmm2)

		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 88, 4)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 92, 10)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 96, 16)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 100, 22)

		SINGLE_UNPACK_VL_RIGHT(28)
		READ_FROM(src, 20, xmm1)
		SINGLE_UNPACK_VL_LEFT(4)
		WRITE_TO(des, 104, xmm2)

		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 108, 2)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 112, 8)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 116, 14)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 120, 20)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 124, 26)
	}
}

template<typename T>
void simd_unpack_vl7(T * des, const uint32_t *src, int blockSize) {
	__asm__("movdqa %0,%%xmm0\n"//and_0
				 ::"m" (unpack_vl_and_7_0.a[0]));
	int i;
	for (i = 0; i < blockSize; i += 128, src += 28, des += 128) {
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		READ_FROM(src, 0, xmm1)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 0, 0)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 4, 7)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 8, 14)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 12, 21)

		SINGLE_UNPACK_VL_RIGHT(28)
		READ_FROM(src, 4, xmm1)
		SINGLE_UNPACK_VL_LEFT(4)
		WRITE_TO(des, 16, xmm2)

		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 20, 3)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 24, 10)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 28, 17)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 32, 24)

		SINGLE_UNPACK_VL_RIGHT(31)
		READ_FROM(src, 8, xmm1)
		SINGLE_UNPACK_VL_LEFT(1)
		WRITE_TO(des, 36, xmm2)

		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 40, 6)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 44, 13)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 48, 20)

		SINGLE_UNPACK_VL_RIGHT(27)
		READ_FROM(src, 12, xmm1)
		SINGLE_UNPACK_VL_LEFT(5)
		WRITE_TO(des, 52, xmm2)

		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 56, 2)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 60, 9)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 64, 16)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 68, 23)

		SINGLE_UNPACK_VL_RIGHT(30)
		READ_FROM(src, 16, xmm1)
		SINGLE_UNPACK_VL_LEFT(2)
		WRITE_TO(des, 72, xmm2)

		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 76, 5)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 80, 12)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 84, 19)

		SINGLE_UNPACK_VL_RIGHT(26)
		READ_FROM(src, 20, xmm1)
		SINGLE_UNPACK_VL_LEFT(6)
		WRITE_TO(des, 88, xmm2)

		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 92, 1)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 96, 8)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 100, 15)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 104, 22)

		SINGLE_UNPACK_VL_RIGHT(29)
		READ_FROM(src, 24, xmm1)
		SINGLE_UNPACK_VL_LEFT(3)
		WRITE_TO(des, 108, xmm2)

		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 112, 4)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 116, 11)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 120, 18)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 124, 25)
	}
}

template<typename T>
void simd_unpack_vl8(T * des, const uint32_t *src, int blockSize) {
	__asm__("movdqa %0,%%xmm0\n"//and_0
				 ::"m" (unpack_vl_and_8_0.a[0]));
	int i;
	for (i = 0; i < blockSize; i += 128, src += 32, des += 128) {
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		READ_FROM(src, 0, xmm1)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 0, 0)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 4, 8)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 8, 16)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 12, 24)
		READ_FROM(src, 4, xmm1)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 16, 0)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 20, 8)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 24, 16)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 28, 24)
		READ_FROM(src, 8, xmm1)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 32, 0)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 36, 8)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 40, 16)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 44, 24)
		READ_FROM(src, 12, xmm1)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 48, 0)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 52, 8)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 56, 16)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 60, 24)
		READ_FROM(src, 16, xmm1)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 64, 0)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 68, 8)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 72, 16)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 76, 24)
		READ_FROM(src, 20, xmm1)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 80, 0)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 84, 8)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 88, 16)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 92, 24)
		READ_FROM(src, 24, xmm1)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 96, 0)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 100, 8)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 104, 16)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 108, 24)
		READ_FROM(src, 28, xmm1)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 112, 0)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 116, 8)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 120, 16)
		SINGLE_UNPACK_VL_RIGHT_WRITE(des, 124, 24)
	}
}

template<typename T>
void simd_unpack_vl9(T * des, const uint32_t *src, int blockSize) {
	int i;
	for (i = 0; i < blockSize; i += 32, des += 32, src += 9) {
		des[0] = (src[0] >> 23);
		des[1] = (src[0] >> 14) & 511;
		des[2] = (src[0] >> 5) & 511;
		des[3] = (src[0] << 4) & 511;
		des[3] |= src[1] >> 28;
		des[4] = (src[1] >> 19) & 511;
		des[5] = (src[1] >> 10) & 511;
		des[6] = (src[1] >> 1) & 511;
		des[7] = (src[1] << 8) & 511;
		des[7] |= src[2] >> 24;
		des[8] = (src[2] >> 15) & 511;
		des[9] = (src[2] >> 6) & 511;
		des[10] = (src[2] << 3) & 511;
		des[10] |= src[3] >> 29;
		des[11] = (src[3] >> 20) & 511;
		des[12] = (src[3] >> 11) & 511;
		des[13] = (src[3] >> 2) & 511;
		des[14] = (src[3] << 7) & 511;
		des[14] |= src[4] >> 25;
		des[15] = (src[4] >> 16) & 511;
		des[16] = (src[4] >> 7) & 511;
		des[17] = (src[4] << 2) & 511;
		des[17] |= src[5] >> 30;
		des[18] = (src[5] >> 21) & 511;
		des[19] = (src[5] >> 12) & 511;
		des[20] = (src[5] >> 3) & 511;
		des[21] = (src[5] << 6) & 511;
		des[21] |= src[6] >> 26;
		des[22] = (src[6] >> 17) & 511;
		des[23] = (src[6] >> 8) & 511;
		des[24] = (src[6] << 1) & 511;
		des[24] |= src[7] >> 31;
		des[25] = (src[7] >> 22) & 511;
		des[26] = (src[7] >> 13) & 511;
		des[27] = (src[7] >> 4) & 511;
		des[28] = (src[7] << 5) & 511;
		des[28] |= src[8] >> 27;
		des[29] = (src[8] >> 18) & 511;
		des[30] = (src[8] >> 9) & 511;
		des[31] = src[8] & 511;
	}
}
template<typename T>
void simd_unpack_vl10(T * des, const uint32_t *src, int blockSize) {
	int i;
	for (i = 0; i < blockSize; i += 32, des += 32, src += 10) {
		des[0] = (src[0] >> 22);
		des[1] = (src[0] >> 12) & 1023;
		des[2] = (src[0] >> 2) & 1023;
		des[3] = (src[0] << 8) & 1023;
		des[3] |= src[1] >> 24;
		des[4] = (src[1] >> 14) & 1023;
		des[5] = (src[1] >> 4) & 1023;
		des[6] = (src[1] << 6) & 1023;
		des[6] |= src[2] >> 26;
		des[7] = (src[2] >> 16) & 1023;
		des[8] = (src[2] >> 6) & 1023;
		des[9] = (src[2] << 4) & 1023;
		des[9] |= src[3] >> 28;
		des[10] = (src[3] >> 18) & 1023;
		des[11] = (src[3] >> 8) & 1023;
		des[12] = (src[3] << 2) & 1023;
		des[12] |= src[4] >> 30;
		des[13] = (src[4] >> 20) & 1023;
		des[14] = (src[4] >> 10) & 1023;
		des[15] = src[4] & 1023;
		des[16] = (src[5] >> 22);
		des[17] = (src[5] >> 12) & 1023;
		des[18] = (src[5] >> 2) & 1023;
		des[19] = (src[5] << 8) & 1023;
		des[19] |= src[6] >> 24;
		des[20] = (src[6] >> 14) & 1023;
		des[21] = (src[6] >> 4) & 1023;
		des[22] = (src[6] << 6) & 1023;
		des[22] |= src[7] >> 26;
		des[23] = (src[7] >> 16) & 1023;
		des[24] = (src[7] >> 6) & 1023;
		des[25] = (src[7] << 4) & 1023;
		des[25] |= src[8] >> 28;
		des[26] = (src[8] >> 18) & 1023;
		des[27] = (src[8] >> 8) & 1023;
		des[28] = (src[8] << 2) & 1023;
		des[28] |= src[9] >> 30;
		des[29] = (src[9] >> 20) & 1023;
		des[30] = (src[9] >> 10) & 1023;
		des[31] = src[9] & 1023;
	}
}
template<typename T>
void simd_unpack_vl11(T * des, const uint32_t *src, int blockSize) {
	int i;
	for (i = 0; i < blockSize; i += 32, des += 32, src += 11) {
		des[0] = (src[0] >> 21);
		des[1] = (src[0] >> 10) & 2047;
		des[2] = (src[0] << 1) & 2047;
		des[2] |= src[1] >> 31;
		des[3] = (src[1] >> 20) & 2047;
		des[4] = (src[1] >> 9) & 2047;
		des[5] = (src[1] << 2) & 2047;
		des[5] |= src[2] >> 30;
		des[6] = (src[2] >> 19) & 2047;
		des[7] = (src[2] >> 8) & 2047;
		des[8] = (src[2] << 3) & 2047;
		des[8] |= src[3] >> 29;
		des[9] = (src[3] >> 18) & 2047;
		des[10] = (src[3] >> 7) & 2047;
		des[11] = (src[3] << 4) & 2047;
		des[11] |= src[4] >> 28;
		des[12] = (src[4] >> 17) & 2047;
		des[13] = (src[4] >> 6) & 2047;
		des[14] = (src[4] << 5) & 2047;
		des[14] |= src[5] >> 27;
		des[15] = (src[5] >> 16) & 2047;
		des[16] = (src[5] >> 5) & 2047;
		des[17] = (src[5] << 6) & 2047;
		des[17] |= src[6] >> 26;
		des[18] = (src[6] >> 15) & 2047;
		des[19] = (src[6] >> 4) & 2047;
		des[20] = (src[6] << 7) & 2047;
		des[20] |= src[7] >> 25;
		des[21] = (src[7] >> 14) & 2047;
		des[22] = (src[7] >> 3) & 2047;
		des[23] = (src[7] << 8) & 2047;
		des[23] |= src[8] >> 24;
		des[24] = (src[8] >> 13) & 2047;
		des[25] = (src[8] >> 2) & 2047;
		des[26] = (src[8] << 9) & 2047;
		des[26] |= src[9] >> 23;
		des[27] = (src[9] >> 12) & 2047;
		des[28] = (src[9] >> 1) & 2047;
		des[29] = (src[9] << 10) & 2047;
		des[29] |= src[10] >> 22;
		des[30] = (src[10] >> 11) & 2047;
		des[31] = src[10] & 2047;
	}
}
template<typename T>
void simd_unpack_vl12(T * des, const uint32_t *src, int blockSize) {
	int i;
	for (i = 0; i < blockSize; i += 32, des += 32, src += 12) {
		des[0] = (src[0] >> 20);
		des[1] = (src[0] >> 8) & 4095;
		des[2] = (src[0] << 4) & 4095;
		des[2] |= src[1] >> 28;
		des[3] = (src[1] >> 16) & 4095;
		des[4] = (src[1] >> 4) & 4095;
		des[5] = (src[1] << 8) & 4095;
		des[5] |= src[2] >> 24;
		des[6] = (src[2] >> 12) & 4095;
		des[7] = src[2] & 4095;
		des[8] = (src[3] >> 20);
		des[9] = (src[3] >> 8) & 4095;
		des[10] = (src[3] << 4) & 4095;
		des[10] |= src[4] >> 28;
		des[11] = (src[4] >> 16) & 4095;
		des[12] = (src[4] >> 4) & 4095;
		des[13] = (src[4] << 8) & 4095;
		des[13] |= src[5] >> 24;
		des[14] = (src[5] >> 12) & 4095;
		des[15] = src[5] & 4095;
		des[16] = (src[6] >> 20);
		des[17] = (src[6] >> 8) & 4095;
		des[18] = (src[6] << 4) & 4095;
		des[18] |= src[7] >> 28;
		des[19] = (src[7] >> 16) & 4095;
		des[20] = (src[7] >> 4) & 4095;
		des[21] = (src[7] << 8) & 4095;
		des[21] |= src[8] >> 24;
		des[22] = (src[8] >> 12) & 4095;
		des[23] = src[8] & 4095;
		des[24] = (src[9] >> 20);
		des[25] = (src[9] >> 8) & 4095;
		des[26] = (src[9] << 4) & 4095;
		des[26] |= src[10] >> 28;
		des[27] = (src[10] >> 16) & 4095;
		des[28] = (src[10] >> 4) & 4095;
		des[29] = (src[10] << 8) & 4095;
		des[29] |= src[11] >> 24;
		des[30] = (src[11] >> 12) & 4095;
		des[31] = src[11] & 4095;
	}
}
template<typename T>
void simd_unpack_vl13(T * des, const uint32_t *src, int blockSize) {
	int i;
	for (i = 0; i < blockSize; i += 32, des += 32, src += 13) {
		des[0] = (src[0] >> 19);
		des[1] = (src[0] >> 6) & 8191;
		des[2] = (src[0] << 7) & 8191;
		des[2] |= src[1] >> 25;
		des[3] = (src[1] >> 12) & 8191;
		des[4] = (src[1] << 1) & 8191;
		des[4] |= src[2] >> 31;
		des[5] = (src[2] >> 18) & 8191;
		des[6] = (src[2] >> 5) & 8191;
		des[7] = (src[2] << 8) & 8191;
		des[7] |= src[3] >> 24;
		des[8] = (src[3] >> 11) & 8191;
		des[9] = (src[3] << 2) & 8191;
		des[9] |= src[4] >> 30;
		des[10] = (src[4] >> 17) & 8191;
		des[11] = (src[4] >> 4) & 8191;
		des[12] = (src[4] << 9) & 8191;
		des[12] |= src[5] >> 23;
		des[13] = (src[5] >> 10) & 8191;
		des[14] = (src[5] << 3) & 8191;
		des[14] |= src[6] >> 29;
		des[15] = (src[6] >> 16) & 8191;
		des[16] = (src[6] >> 3) & 8191;
		des[17] = (src[6] << 10) & 8191;
		des[17] |= src[7] >> 22;
		des[18] = (src[7] >> 9) & 8191;
		des[19] = (src[7] << 4) & 8191;
		des[19] |= src[8] >> 28;
		des[20] = (src[8] >> 15) & 8191;
		des[21] = (src[8] >> 2) & 8191;
		des[22] = (src[8] << 11) & 8191;
		des[22] |= src[9] >> 21;
		des[23] = (src[9] >> 8) & 8191;
		des[24] = (src[9] << 5) & 8191;
		des[24] |= src[10] >> 27;
		des[25] = (src[10] >> 14) & 8191;
		des[26] = (src[10] >> 1) & 8191;
		des[27] = (src[10] << 12) & 8191;
		des[27] |= src[11] >> 20;
		des[28] = (src[11] >> 7) & 8191;
		des[29] = (src[11] << 6) & 8191;
		des[29] |= src[12] >> 26;
		des[30] = (src[12] >> 13) & 8191;
		des[31] = src[12] & 8191;
	}
}
template<typename T>
void simd_unpack_vl14(T * des, const uint32_t *src, int blockSize) {
	int i;
	for (i = 0; i < blockSize; i += 32, des += 32, src += 14) {
		des[0] = (src[0] >> 18);
		des[1] = (src[0] >> 4) & 16383;
		des[2] = (src[0] << 10) & 16383;
		des[2] |= src[1] >> 22;
		des[3] = (src[1] >> 8) & 16383;
		des[4] = (src[1] << 6) & 16383;
		des[4] |= src[2] >> 26;
		des[5] = (src[2] >> 12) & 16383;
		des[6] = (src[2] << 2) & 16383;
		des[6] |= src[3] >> 30;
		des[7] = (src[3] >> 16) & 16383;
		des[8] = (src[3] >> 2) & 16383;
		des[9] = (src[3] << 12) & 16383;
		des[9] |= src[4] >> 20;
		des[10] = (src[4] >> 6) & 16383;
		des[11] = (src[4] << 8) & 16383;
		des[11] |= src[5] >> 24;
		des[12] = (src[5] >> 10) & 16383;
		des[13] = (src[5] << 4) & 16383;
		des[13] |= src[6] >> 28;
		des[14] = (src[6] >> 14) & 16383;
		des[15] = src[6] & 16383;
		des[16] = (src[7] >> 18);
		des[17] = (src[7] >> 4) & 16383;
		des[18] = (src[7] << 10) & 16383;
		des[18] |= src[8] >> 22;
		des[19] = (src[8] >> 8) & 16383;
		des[20] = (src[8] << 6) & 16383;
		des[20] |= src[9] >> 26;
		des[21] = (src[9] >> 12) & 16383;
		des[22] = (src[9] << 2) & 16383;
		des[22] |= src[10] >> 30;
		des[23] = (src[10] >> 16) & 16383;
		des[24] = (src[10] >> 2) & 16383;
		des[25] = (src[10] << 12) & 16383;
		des[25] |= src[11] >> 20;
		des[26] = (src[11] >> 6) & 16383;
		des[27] = (src[11] << 8) & 16383;
		des[27] |= src[12] >> 24;
		des[28] = (src[12] >> 10) & 16383;
		des[29] = (src[12] << 4) & 16383;
		des[29] |= src[13] >> 28;
		des[30] = (src[13] >> 14) & 16383;
		des[31] = src[13] & 16383;
	}
}
template<typename T>
void simd_unpack_vl15(T * des, const uint32_t *src, int blockSize) {
	int i;
	for (i = 0; i < blockSize; i += 32, des += 32, src += 15) {
		des[0] = (src[0] >> 17);
		des[1] = (src[0] >> 2) & 32767;
		des[2] = (src[0] << 13) & 32767;
		des[2] |= src[1] >> 19;
		des[3] = (src[1] >> 4) & 32767;
		des[4] = (src[1] << 11) & 32767;
		des[4] |= src[2] >> 21;
		des[5] = (src[2] >> 6) & 32767;
		des[6] = (src[2] << 9) & 32767;
		des[6] |= src[3] >> 23;
		des[7] = (src[3] >> 8) & 32767;
		des[8] = (src[3] << 7) & 32767;
		des[8] |= src[4] >> 25;
		des[9] = (src[4] >> 10) & 32767;
		des[10] = (src[4] << 5) & 32767;
		des[10] |= src[5] >> 27;
		des[11] = (src[5] >> 12) & 32767;
		des[12] = (src[5] << 3) & 32767;
		des[12] |= src[6] >> 29;
		des[13] = (src[6] >> 14) & 32767;
		des[14] = (src[6] << 1) & 32767;
		des[14] |= src[7] >> 31;
		des[15] = (src[7] >> 16) & 32767;
		des[16] = (src[7] >> 1) & 32767;
		des[17] = (src[7] << 14) & 32767;
		des[17] |= src[8] >> 18;
		des[18] = (src[8] >> 3) & 32767;
		des[19] = (src[8] << 12) & 32767;
		des[19] |= src[9] >> 20;
		des[20] = (src[9] >> 5) & 32767;
		des[21] = (src[9] << 10) & 32767;
		des[21] |= src[10] >> 22;
		des[22] = (src[10] >> 7) & 32767;
		des[23] = (src[10] << 8) & 32767;
		des[23] |= src[11] >> 24;
		des[24] = (src[11] >> 9) & 32767;
		des[25] = (src[11] << 6) & 32767;
		des[25] |= src[12] >> 26;
		des[26] = (src[12] >> 11) & 32767;
		des[27] = (src[12] << 4) & 32767;
		des[27] |= src[13] >> 28;
		des[28] = (src[13] >> 13) & 32767;
		des[29] = (src[13] << 2) & 32767;
		des[29] |= src[14] >> 30;
		des[30] = (src[14] >> 15) & 32767;
		des[31] = src[14] & 32767;
	}
}
template<typename T>
void simd_unpack_vl16(T * des, const uint32_t *src, int blockSize) {
	int i;
	for (i = 0; i < blockSize; i += 32, des += 32, src += 16) {
		des[0] = (src[0] >> 16);
		des[1] = src[0] & 65535;
		des[2] = (src[1] >> 16);
		des[3] = src[1] & 65535;
		des[4] = (src[2] >> 16);
		des[5] = src[2] & 65535;
		des[6] = (src[3] >> 16);
		des[7] = src[3] & 65535;
		des[8] = (src[4] >> 16);
		des[9] = src[4] & 65535;
		des[10] = (src[5] >> 16);
		des[11] = src[5] & 65535;
		des[12] = (src[6] >> 16);
		des[13] = src[6] & 65535;
		des[14] = (src[7] >> 16);
		des[15] = src[7] & 65535;
		des[16] = (src[8] >> 16);
		des[17] = src[8] & 65535;
		des[18] = (src[9] >> 16);
		des[19] = src[9] & 65535;
		des[20] = (src[10] >> 16);
		des[21] = src[10] & 65535;
		des[22] = (src[11] >> 16);
		des[23] = src[11] & 65535;
		des[24] = (src[12] >> 16);
		des[25] = src[12] & 65535;
		des[26] = (src[13] >> 16);
		des[27] = src[13] & 65535;
		des[28] = (src[14] >> 16);
		des[29] = src[14] & 65535;
		des[30] = (src[15] >> 16);
		des[31] = src[15] & 65535;
	}
}
template<typename T>
void simd_unpack_vl17(T * des, const uint32_t *src, int blockSize) {
	int i;
	for (i = 0; i < blockSize; i += 32, des += 32, src += 17) {
		des[0] = (src[0] >> 15);
		des[1] = (src[0] << 2) & 131071;
		des[1] |= src[1] >> 30;
		des[2] = (src[1] >> 13) & 131071;
		des[3] = (src[1] << 4) & 131071;
		des[3] |= src[2] >> 28;
		des[4] = (src[2] >> 11) & 131071;
		des[5] = (src[2] << 6) & 131071;
		des[5] |= src[3] >> 26;
		des[6] = (src[3] >> 9) & 131071;
		des[7] = (src[3] << 8) & 131071;
		des[7] |= src[4] >> 24;
		des[8] = (src[4] >> 7) & 131071;
		des[9] = (src[4] << 10) & 131071;
		des[9] |= src[5] >> 22;
		des[10] = (src[5] >> 5) & 131071;
		des[11] = (src[5] << 12) & 131071;
		des[11] |= src[6] >> 20;
		des[12] = (src[6] >> 3) & 131071;
		des[13] = (src[6] << 14) & 131071;
		des[13] |= src[7] >> 18;
		des[14] = (src[7] >> 1) & 131071;
		des[15] = (src[7] << 16) & 131071;
		des[15] |= src[8] >> 16;
		des[16] = (src[8] << 1) & 131071;
		des[16] |= src[9] >> 31;
		des[17] = (src[9] >> 14) & 131071;
		des[18] = (src[9] << 3) & 131071;
		des[18] |= src[10] >> 29;
		des[19] = (src[10] >> 12) & 131071;
		des[20] = (src[10] << 5) & 131071;
		des[20] |= src[11] >> 27;
		des[21] = (src[11] >> 10) & 131071;
		des[22] = (src[11] << 7) & 131071;
		des[22] |= src[12] >> 25;
		des[23] = (src[12] >> 8) & 131071;
		des[24] = (src[12] << 9) & 131071;
		des[24] |= src[13] >> 23;
		des[25] = (src[13] >> 6) & 131071;
		des[26] = (src[13] << 11) & 131071;
		des[26] |= src[14] >> 21;
		des[27] = (src[14] >> 4) & 131071;
		des[28] = (src[14] << 13) & 131071;
		des[28] |= src[15] >> 19;
		des[29] = (src[15] >> 2) & 131071;
		des[30] = (src[15] << 15) & 131071;
		des[30] |= src[16] >> 17;
		des[31] = src[16] & 131071;
	}
}
template<typename T>
void simd_unpack_vl18(T * des, const uint32_t *src, int blockSize) {
	int i;
	for (i = 0; i < blockSize; i += 32, des += 32, src += 18) {
		des[0] = (src[0] >> 14);
		des[1] = (src[0] << 4) & 262143;
		des[1] |= src[1] >> 28;
		des[2] = (src[1] >> 10) & 262143;
		des[3] = (src[1] << 8) & 262143;
		des[3] |= src[2] >> 24;
		des[4] = (src[2] >> 6) & 262143;
		des[5] = (src[2] << 12) & 262143;
		des[5] |= src[3] >> 20;
		des[6] = (src[3] >> 2) & 262143;
		des[7] = (src[3] << 16) & 262143;
		des[7] |= src[4] >> 16;
		des[8] = (src[4] << 2) & 262143;
		des[8] |= src[5] >> 30;
		des[9] = (src[5] >> 12) & 262143;
		des[10] = (src[5] << 6) & 262143;
		des[10] |= src[6] >> 26;
		des[11] = (src[6] >> 8) & 262143;
		des[12] = (src[6] << 10) & 262143;
		des[12] |= src[7] >> 22;
		des[13] = (src[7] >> 4) & 262143;
		des[14] = (src[7] << 14) & 262143;
		des[14] |= src[8] >> 18;
		des[15] = src[8] & 262143;
		des[16] = (src[9] >> 14);
		des[17] = (src[9] << 4) & 262143;
		des[17] |= src[10] >> 28;
		des[18] = (src[10] >> 10) & 262143;
		des[19] = (src[10] << 8) & 262143;
		des[19] |= src[11] >> 24;
		des[20] = (src[11] >> 6) & 262143;
		des[21] = (src[11] << 12) & 262143;
		des[21] |= src[12] >> 20;
		des[22] = (src[12] >> 2) & 262143;
		des[23] = (src[12] << 16) & 262143;
		des[23] |= src[13] >> 16;
		des[24] = (src[13] << 2) & 262143;
		des[24] |= src[14] >> 30;
		des[25] = (src[14] >> 12) & 262143;
		des[26] = (src[14] << 6) & 262143;
		des[26] |= src[15] >> 26;
		des[27] = (src[15] >> 8) & 262143;
		des[28] = (src[15] << 10) & 262143;
		des[28] |= src[16] >> 22;
		des[29] = (src[16] >> 4) & 262143;
		des[30] = (src[16] << 14) & 262143;
		des[30] |= src[17] >> 18;
		des[31] = src[17] & 262143;
	}
}
template<typename T>
void simd_unpack_vl19(T * des, const uint32_t *src, int blockSize) {
	int i;
	for (i = 0; i < blockSize; i += 32, des += 32, src += 19) {
		des[0] = (src[0] >> 13);
		des[1] = (src[0] << 6) & 524287;
		des[1] |= src[1] >> 26;
		des[2] = (src[1] >> 7) & 524287;
		des[3] = (src[1] << 12) & 524287;
		des[3] |= src[2] >> 20;
		des[4] = (src[2] >> 1) & 524287;
		des[5] = (src[2] << 18) & 524287;
		des[5] |= src[3] >> 14;
		des[6] = (src[3] << 5) & 524287;
		des[6] |= src[4] >> 27;
		des[7] = (src[4] >> 8) & 524287;
		des[8] = (src[4] << 11) & 524287;
		des[8] |= src[5] >> 21;
		des[9] = (src[5] >> 2) & 524287;
		des[10] = (src[5] << 17) & 524287;
		des[10] |= src[6] >> 15;
		des[11] = (src[6] << 4) & 524287;
		des[11] |= src[7] >> 28;
		des[12] = (src[7] >> 9) & 524287;
		des[13] = (src[7] << 10) & 524287;
		des[13] |= src[8] >> 22;
		des[14] = (src[8] >> 3) & 524287;
		des[15] = (src[8] << 16) & 524287;
		des[15] |= src[9] >> 16;
		des[16] = (src[9] << 3) & 524287;
		des[16] |= src[10] >> 29;
		des[17] = (src[10] >> 10) & 524287;
		des[18] = (src[10] << 9) & 524287;
		des[18] |= src[11] >> 23;
		des[19] = (src[11] >> 4) & 524287;
		des[20] = (src[11] << 15) & 524287;
		des[20] |= src[12] >> 17;
		des[21] = (src[12] << 2) & 524287;
		des[21] |= src[13] >> 30;
		des[22] = (src[13] >> 11) & 524287;
		des[23] = (src[13] << 8) & 524287;
		des[23] |= src[14] >> 24;
		des[24] = (src[14] >> 5) & 524287;
		des[25] = (src[14] << 14) & 524287;
		des[25] |= src[15] >> 18;
		des[26] = (src[15] << 1) & 524287;
		des[26] |= src[16] >> 31;
		des[27] = (src[16] >> 12) & 524287;
		des[28] = (src[16] << 7) & 524287;
		des[28] |= src[17] >> 25;
		des[29] = (src[17] >> 6) & 524287;
		des[30] = (src[17] << 13) & 524287;
		des[30] |= src[18] >> 19;
		des[31] = src[18] & 524287;
	}
}
template<typename T>
void simd_unpack_vl20(T * des, const uint32_t *src, int blockSize) {
	int i;
	for (i = 0; i < blockSize; i += 32, des += 32, src += 20) {
		des[0] = (src[0] >> 12);
		des[1] = (src[0] << 8) & 1048575;
		des[1] |= src[1] >> 24;
		des[2] = (src[1] >> 4) & 1048575;
		des[3] = (src[1] << 16) & 1048575;
		des[3] |= src[2] >> 16;
		des[4] = (src[2] << 4) & 1048575;
		des[4] |= src[3] >> 28;
		des[5] = (src[3] >> 8) & 1048575;
		des[6] = (src[3] << 12) & 1048575;
		des[6] |= src[4] >> 20;
		des[7] = src[4] & 1048575;
		des[8] = (src[5] >> 12);
		des[9] = (src[5] << 8) & 1048575;
		des[9] |= src[6] >> 24;
		des[10] = (src[6] >> 4) & 1048575;
		des[11] = (src[6] << 16) & 1048575;
		des[11] |= src[7] >> 16;
		des[12] = (src[7] << 4) & 1048575;
		des[12] |= src[8] >> 28;
		des[13] = (src[8] >> 8) & 1048575;
		des[14] = (src[8] << 12) & 1048575;
		des[14] |= src[9] >> 20;
		des[15] = src[9] & 1048575;
		des[16] = (src[10] >> 12);
		des[17] = (src[10] << 8) & 1048575;
		des[17] |= src[11] >> 24;
		des[18] = (src[11] >> 4) & 1048575;
		des[19] = (src[11] << 16) & 1048575;
		des[19] |= src[12] >> 16;
		des[20] = (src[12] << 4) & 1048575;
		des[20] |= src[13] >> 28;
		des[21] = (src[13] >> 8) & 1048575;
		des[22] = (src[13] << 12) & 1048575;
		des[22] |= src[14] >> 20;
		des[23] = src[14] & 1048575;
		des[24] = (src[15] >> 12);
		des[25] = (src[15] << 8) & 1048575;
		des[25] |= src[16] >> 24;
		des[26] = (src[16] >> 4) & 1048575;
		des[27] = (src[16] << 16) & 1048575;
		des[27] |= src[17] >> 16;
		des[28] = (src[17] << 4) & 1048575;
		des[28] |= src[18] >> 28;
		des[29] = (src[18] >> 8) & 1048575;
		des[30] = (src[18] << 12) & 1048575;
		des[30] |= src[19] >> 20;
		des[31] = src[19] & 1048575;
	}
}
template<typename T>
void simd_unpack_vl21(T * des, const uint32_t *src, int blockSize) {
	int i;
	for (i = 0; i < blockSize; i += 32, des += 32, src += 21) {
		des[0] = (src[0] >> 11);
		des[1] = (src[0] << 10) & 2097151;
		des[1] |= src[1] >> 22;
		des[2] = (src[1] >> 1) & 2097151;
		des[3] = (src[1] << 20) & 2097151;
		des[3] |= src[2] >> 12;
		des[4] = (src[2] << 9) & 2097151;
		des[4] |= src[3] >> 23;
		des[5] = (src[3] >> 2) & 2097151;
		des[6] = (src[3] << 19) & 2097151;
		des[6] |= src[4] >> 13;
		des[7] = (src[4] << 8) & 2097151;
		des[7] |= src[5] >> 24;
		des[8] = (src[5] >> 3) & 2097151;
		des[9] = (src[5] << 18) & 2097151;
		des[9] |= src[6] >> 14;
		des[10] = (src[6] << 7) & 2097151;
		des[10] |= src[7] >> 25;
		des[11] = (src[7] >> 4) & 2097151;
		des[12] = (src[7] << 17) & 2097151;
		des[12] |= src[8] >> 15;
		des[13] = (src[8] << 6) & 2097151;
		des[13] |= src[9] >> 26;
		des[14] = (src[9] >> 5) & 2097151;
		des[15] = (src[9] << 16) & 2097151;
		des[15] |= src[10] >> 16;
		des[16] = (src[10] << 5) & 2097151;
		des[16] |= src[11] >> 27;
		des[17] = (src[11] >> 6) & 2097151;
		des[18] = (src[11] << 15) & 2097151;
		des[18] |= src[12] >> 17;
		des[19] = (src[12] << 4) & 2097151;
		des[19] |= src[13] >> 28;
		des[20] = (src[13] >> 7) & 2097151;
		des[21] = (src[13] << 14) & 2097151;
		des[21] |= src[14] >> 18;
		des[22] = (src[14] << 3) & 2097151;
		des[22] |= src[15] >> 29;
		des[23] = (src[15] >> 8) & 2097151;
		des[24] = (src[15] << 13) & 2097151;
		des[24] |= src[16] >> 19;
		des[25] = (src[16] << 2) & 2097151;
		des[25] |= src[17] >> 30;
		des[26] = (src[17] >> 9) & 2097151;
		des[27] = (src[17] << 12) & 2097151;
		des[27] |= src[18] >> 20;
		des[28] = (src[18] << 1) & 2097151;
		des[28] |= src[19] >> 31;
		des[29] = (src[19] >> 10) & 2097151;
		des[30] = (src[19] << 11) & 2097151;
		des[30] |= src[20] >> 21;
		des[31] = src[20] & 2097151;
	}
}
template<typename T>
void simd_unpack_vl22(T * des, const uint32_t *src, int blockSize) {
	int i;
	for (i = 0; i < blockSize; i += 32, des += 32, src += 22) {
		des[0] = (src[0] >> 10);
		des[1] = (src[0] << 12) & 4194303;
		des[1] |= src[1] >> 20;
		des[2] = (src[1] << 2) & 4194303;
		des[2] |= src[2] >> 30;
		des[3] = (src[2] >> 8) & 4194303;
		des[4] = (src[2] << 14) & 4194303;
		des[4] |= src[3] >> 18;
		des[5] = (src[3] << 4) & 4194303;
		des[5] |= src[4] >> 28;
		des[6] = (src[4] >> 6) & 4194303;
		des[7] = (src[4] << 16) & 4194303;
		des[7] |= src[5] >> 16;
		des[8] = (src[5] << 6) & 4194303;
		des[8] |= src[6] >> 26;
		des[9] = (src[6] >> 4) & 4194303;
		des[10] = (src[6] << 18) & 4194303;
		des[10] |= src[7] >> 14;
		des[11] = (src[7] << 8) & 4194303;
		des[11] |= src[8] >> 24;
		des[12] = (src[8] >> 2) & 4194303;
		des[13] = (src[8] << 20) & 4194303;
		des[13] |= src[9] >> 12;
		des[14] = (src[9] << 10) & 4194303;
		des[14] |= src[10] >> 22;
		des[15] = src[10] & 4194303;
		des[16] = (src[11] >> 10);
		des[17] = (src[11] << 12) & 4194303;
		des[17] |= src[12] >> 20;
		des[18] = (src[12] << 2) & 4194303;
		des[18] |= src[13] >> 30;
		des[19] = (src[13] >> 8) & 4194303;
		des[20] = (src[13] << 14) & 4194303;
		des[20] |= src[14] >> 18;
		des[21] = (src[14] << 4) & 4194303;
		des[21] |= src[15] >> 28;
		des[22] = (src[15] >> 6) & 4194303;
		des[23] = (src[15] << 16) & 4194303;
		des[23] |= src[16] >> 16;
		des[24] = (src[16] << 6) & 4194303;
		des[24] |= src[17] >> 26;
		des[25] = (src[17] >> 4) & 4194303;
		des[26] = (src[17] << 18) & 4194303;
		des[26] |= src[18] >> 14;
		des[27] = (src[18] << 8) & 4194303;
		des[27] |= src[19] >> 24;
		des[28] = (src[19] >> 2) & 4194303;
		des[29] = (src[19] << 20) & 4194303;
		des[29] |= src[20] >> 12;
		des[30] = (src[20] << 10) & 4194303;
		des[30] |= src[21] >> 22;
		des[31] = src[21] & 4194303;
	}
}
template<typename T>
void simd_unpack_vl23(T * des, const uint32_t *src, int blockSize) {
	int i;
	for (i = 0; i < blockSize; i += 32, des += 32, src += 23) {
		des[0] = (src[0] >> 9);
		des[1] = (src[0] << 14) & 8388607;
		des[1] |= src[1] >> 18;
		des[2] = (src[1] << 5) & 8388607;
		des[2] |= src[2] >> 27;
		des[3] = (src[2] >> 4) & 8388607;
		des[4] = (src[2] << 19) & 8388607;
		des[4] |= src[3] >> 13;
		des[5] = (src[3] << 10) & 8388607;
		des[5] |= src[4] >> 22;
		des[6] = (src[4] << 1) & 8388607;
		des[6] |= src[5] >> 31;
		des[7] = (src[5] >> 8) & 8388607;
		des[8] = (src[5] << 15) & 8388607;
		des[8] |= src[6] >> 17;
		des[9] = (src[6] << 6) & 8388607;
		des[9] |= src[7] >> 26;
		des[10] = (src[7] >> 3) & 8388607;
		des[11] = (src[7] << 20) & 8388607;
		des[11] |= src[8] >> 12;
		des[12] = (src[8] << 11) & 8388607;
		des[12] |= src[9] >> 21;
		des[13] = (src[9] << 2) & 8388607;
		des[13] |= src[10] >> 30;
		des[14] = (src[10] >> 7) & 8388607;
		des[15] = (src[10] << 16) & 8388607;
		des[15] |= src[11] >> 16;
		des[16] = (src[11] << 7) & 8388607;
		des[16] |= src[12] >> 25;
		des[17] = (src[12] >> 2) & 8388607;
		des[18] = (src[12] << 21) & 8388607;
		des[18] |= src[13] >> 11;
		des[19] = (src[13] << 12) & 8388607;
		des[19] |= src[14] >> 20;
		des[20] = (src[14] << 3) & 8388607;
		des[20] |= src[15] >> 29;
		des[21] = (src[15] >> 6) & 8388607;
		des[22] = (src[15] << 17) & 8388607;
		des[22] |= src[16] >> 15;
		des[23] = (src[16] << 8) & 8388607;
		des[23] |= src[17] >> 24;
		des[24] = (src[17] >> 1) & 8388607;
		des[25] = (src[17] << 22) & 8388607;
		des[25] |= src[18] >> 10;
		des[26] = (src[18] << 13) & 8388607;
		des[26] |= src[19] >> 19;
		des[27] = (src[19] << 4) & 8388607;
		des[27] |= src[20] >> 28;
		des[28] = (src[20] >> 5) & 8388607;
		des[29] = (src[20] << 18) & 8388607;
		des[29] |= src[21] >> 14;
		des[30] = (src[21] << 9) & 8388607;
		des[30] |= src[22] >> 23;
		des[31] = src[22] & 8388607;
	}
}
template<typename T>
void simd_unpack_vl24(T * des, const uint32_t *src, int blockSize) {
	int i;
	for (i = 0; i < blockSize; i += 32, des += 32, src += 24) {
		des[0] = (src[0] >> 8);
		des[1] = (src[0] << 16) & 16777215;
		des[1] |= src[1] >> 16;
		des[2] = (src[1] << 8) & 16777215;
		des[2] |= src[2] >> 24;
		des[3] = src[2] & 16777215;
		des[4] = (src[3] >> 8);
		des[5] = (src[3] << 16) & 16777215;
		des[5] |= src[4] >> 16;
		des[6] = (src[4] << 8) & 16777215;
		des[6] |= src[5] >> 24;
		des[7] = src[5] & 16777215;
		des[8] = (src[6] >> 8);
		des[9] = (src[6] << 16) & 16777215;
		des[9] |= src[7] >> 16;
		des[10] = (src[7] << 8) & 16777215;
		des[10] |= src[8] >> 24;
		des[11] = src[8] & 16777215;
		des[12] = (src[9] >> 8);
		des[13] = (src[9] << 16) & 16777215;
		des[13] |= src[10] >> 16;
		des[14] = (src[10] << 8) & 16777215;
		des[14] |= src[11] >> 24;
		des[15] = src[11] & 16777215;
		des[16] = (src[12] >> 8);
		des[17] = (src[12] << 16) & 16777215;
		des[17] |= src[13] >> 16;
		des[18] = (src[13] << 8) & 16777215;
		des[18] |= src[14] >> 24;
		des[19] = src[14] & 16777215;
		des[20] = (src[15] >> 8);
		des[21] = (src[15] << 16) & 16777215;
		des[21] |= src[16] >> 16;
		des[22] = (src[16] << 8) & 16777215;
		des[22] |= src[17] >> 24;
		des[23] = src[17] & 16777215;
		des[24] = (src[18] >> 8);
		des[25] = (src[18] << 16) & 16777215;
		des[25] |= src[19] >> 16;
		des[26] = (src[19] << 8) & 16777215;
		des[26] |= src[20] >> 24;
		des[27] = src[20] & 16777215;
		des[28] = (src[21] >> 8);
		des[29] = (src[21] << 16) & 16777215;
		des[29] |= src[22] >> 16;
		des[30] = (src[22] << 8) & 16777215;
		des[30] |= src[23] >> 24;
		des[31] = src[23] & 16777215;
	}
}
template<typename T>
void simd_unpack_vl25(T * des, const uint32_t *src, int blockSize) {
	int i;
	for (i = 0; i < blockSize; i += 32, des += 32, src += 25) {
		des[0] = (src[0] >> 7);
		des[1] = (src[0] << 18) & 33554431;
		des[1] |= src[1] >> 14;
		des[2] = (src[1] << 11) & 33554431;
		des[2] |= src[2] >> 21;
		des[3] = (src[2] << 4) & 33554431;
		des[3] |= src[3] >> 28;
		des[4] = (src[3] >> 3) & 33554431;
		des[5] = (src[3] << 22) & 33554431;
		des[5] |= src[4] >> 10;
		des[6] = (src[4] << 15) & 33554431;
		des[6] |= src[5] >> 17;
		des[7] = (src[5] << 8) & 33554431;
		des[7] |= src[6] >> 24;
		des[8] = (src[6] << 1) & 33554431;
		des[8] |= src[7] >> 31;
		des[9] = (src[7] >> 6) & 33554431;
		des[10] = (src[7] << 19) & 33554431;
		des[10] |= src[8] >> 13;
		des[11] = (src[8] << 12) & 33554431;
		des[11] |= src[9] >> 20;
		des[12] = (src[9] << 5) & 33554431;
		des[12] |= src[10] >> 27;
		des[13] = (src[10] >> 2) & 33554431;
		des[14] = (src[10] << 23) & 33554431;
		des[14] |= src[11] >> 9;
		des[15] = (src[11] << 16) & 33554431;
		des[15] |= src[12] >> 16;
		des[16] = (src[12] << 9) & 33554431;
		des[16] |= src[13] >> 23;
		des[17] = (src[13] << 2) & 33554431;
		des[17] |= src[14] >> 30;
		des[18] = (src[14] >> 5) & 33554431;
		des[19] = (src[14] << 20) & 33554431;
		des[19] |= src[15] >> 12;
		des[20] = (src[15] << 13) & 33554431;
		des[20] |= src[16] >> 19;
		des[21] = (src[16] << 6) & 33554431;
		des[21] |= src[17] >> 26;
		des[22] = (src[17] >> 1) & 33554431;
		des[23] = (src[17] << 24) & 33554431;
		des[23] |= src[18] >> 8;
		des[24] = (src[18] << 17) & 33554431;
		des[24] |= src[19] >> 15;
		des[25] = (src[19] << 10) & 33554431;
		des[25] |= src[20] >> 22;
		des[26] = (src[20] << 3) & 33554431;
		des[26] |= src[21] >> 29;
		des[27] = (src[21] >> 4) & 33554431;
		des[28] = (src[21] << 21) & 33554431;
		des[28] |= src[22] >> 11;
		des[29] = (src[22] << 14) & 33554431;
		des[29] |= src[23] >> 18;
		des[30] = (src[23] << 7) & 33554431;
		des[30] |= src[24] >> 25;
		des[31] = src[24] & 33554431;
	}
}
template<typename T>
void simd_unpack_vl26(T * des, const uint32_t *src, int blockSize) {
	int i;
	for (i = 0; i < blockSize; i += 32, des += 32, src += 26) {
		des[0] = (src[0] >> 6);
		des[1] = (src[0] << 20) & 67108863;
		des[1] |= src[1] >> 12;
		des[2] = (src[1] << 14) & 67108863;
		des[2] |= src[2] >> 18;
		des[3] = (src[2] << 8) & 67108863;
		des[3] |= src[3] >> 24;
		des[4] = (src[3] << 2) & 67108863;
		des[4] |= src[4] >> 30;
		des[5] = (src[4] >> 4) & 67108863;
		des[6] = (src[4] << 22) & 67108863;
		des[6] |= src[5] >> 10;
		des[7] = (src[5] << 16) & 67108863;
		des[7] |= src[6] >> 16;
		des[8] = (src[6] << 10) & 67108863;
		des[8] |= src[7] >> 22;
		des[9] = (src[7] << 4) & 67108863;
		des[9] |= src[8] >> 28;
		des[10] = (src[8] >> 2) & 67108863;
		des[11] = (src[8] << 24) & 67108863;
		des[11] |= src[9] >> 8;
		des[12] = (src[9] << 18) & 67108863;
		des[12] |= src[10] >> 14;
		des[13] = (src[10] << 12) & 67108863;
		des[13] |= src[11] >> 20;
		des[14] = (src[11] << 6) & 67108863;
		des[14] |= src[12] >> 26;
		des[15] = src[12] & 67108863;
		des[16] = (src[13] >> 6);
		des[17] = (src[13] << 20) & 67108863;
		des[17] |= src[14] >> 12;
		des[18] = (src[14] << 14) & 67108863;
		des[18] |= src[15] >> 18;
		des[19] = (src[15] << 8) & 67108863;
		des[19] |= src[16] >> 24;
		des[20] = (src[16] << 2) & 67108863;
		des[20] |= src[17] >> 30;
		des[21] = (src[17] >> 4) & 67108863;
		des[22] = (src[17] << 22) & 67108863;
		des[22] |= src[18] >> 10;
		des[23] = (src[18] << 16) & 67108863;
		des[23] |= src[19] >> 16;
		des[24] = (src[19] << 10) & 67108863;
		des[24] |= src[20] >> 22;
		des[25] = (src[20] << 4) & 67108863;
		des[25] |= src[21] >> 28;
		des[26] = (src[21] >> 2) & 67108863;
		des[27] = (src[21] << 24) & 67108863;
		des[27] |= src[22] >> 8;
		des[28] = (src[22] << 18) & 67108863;
		des[28] |= src[23] >> 14;
		des[29] = (src[23] << 12) & 67108863;
		des[29] |= src[24] >> 20;
		des[30] = (src[24] << 6) & 67108863;
		des[30] |= src[25] >> 26;
		des[31] = src[25] & 67108863;
	}
}
template<typename T>
void simd_unpack_vl27(T * des, const uint32_t *src, int blockSize) {
	int i;
	for (i = 0; i < blockSize; i += 32, des += 32, src += 27) {
		des[0] = (src[0] >> 5);
		des[1] = (src[0] << 22) & 134217727;
		des[1] |= src[1] >> 10;
		des[2] = (src[1] << 17) & 134217727;
		des[2] |= src[2] >> 15;
		des[3] = (src[2] << 12) & 134217727;
		des[3] |= src[3] >> 20;
		des[4] = (src[3] << 7) & 134217727;
		des[4] |= src[4] >> 25;
		des[5] = (src[4] << 2) & 134217727;
		des[5] |= src[5] >> 30;
		des[6] = (src[5] >> 3) & 134217727;
		des[7] = (src[5] << 24) & 134217727;
		des[7] |= src[6] >> 8;
		des[8] = (src[6] << 19) & 134217727;
		des[8] |= src[7] >> 13;
		des[9] = (src[7] << 14) & 134217727;
		des[9] |= src[8] >> 18;
		des[10] = (src[8] << 9) & 134217727;
		des[10] |= src[9] >> 23;
		des[11] = (src[9] << 4) & 134217727;
		des[11] |= src[10] >> 28;
		des[12] = (src[10] >> 1) & 134217727;
		des[13] = (src[10] << 26) & 134217727;
		des[13] |= src[11] >> 6;
		des[14] = (src[11] << 21) & 134217727;
		des[14] |= src[12] >> 11;
		des[15] = (src[12] << 16) & 134217727;
		des[15] |= src[13] >> 16;
		des[16] = (src[13] << 11) & 134217727;
		des[16] |= src[14] >> 21;
		des[17] = (src[14] << 6) & 134217727;
		des[17] |= src[15] >> 26;
		des[18] = (src[15] << 1) & 134217727;
		des[18] |= src[16] >> 31;
		des[19] = (src[16] >> 4) & 134217727;
		des[20] = (src[16] << 23) & 134217727;
		des[20] |= src[17] >> 9;
		des[21] = (src[17] << 18) & 134217727;
		des[21] |= src[18] >> 14;
		des[22] = (src[18] << 13) & 134217727;
		des[22] |= src[19] >> 19;
		des[23] = (src[19] << 8) & 134217727;
		des[23] |= src[20] >> 24;
		des[24] = (src[20] << 3) & 134217727;
		des[24] |= src[21] >> 29;
		des[25] = (src[21] >> 2) & 134217727;
		des[26] = (src[21] << 25) & 134217727;
		des[26] |= src[22] >> 7;
		des[27] = (src[22] << 20) & 134217727;
		des[27] |= src[23] >> 12;
		des[28] = (src[23] << 15) & 134217727;
		des[28] |= src[24] >> 17;
		des[29] = (src[24] << 10) & 134217727;
		des[29] |= src[25] >> 22;
		des[30] = (src[25] << 5) & 134217727;
		des[30] |= src[26] >> 27;
		des[31] = src[26] & 134217727;
	}
}
template<typename T>
void simd_unpack_vl28(T * des, const uint32_t *src, int blockSize) {
	int i;
	for (i = 0; i < blockSize; i += 32, des += 32, src += 28) {
		des[0] = (src[0] >> 4);
		des[1] = (src[0] << 24) & 268435455;
		des[1] |= src[1] >> 8;
		des[2] = (src[1] << 20) & 268435455;
		des[2] |= src[2] >> 12;
		des[3] = (src[2] << 16) & 268435455;
		des[3] |= src[3] >> 16;
		des[4] = (src[3] << 12) & 268435455;
		des[4] |= src[4] >> 20;
		des[5] = (src[4] << 8) & 268435455;
		des[5] |= src[5] >> 24;
		des[6] = (src[5] << 4) & 268435455;
		des[6] |= src[6] >> 28;
		des[7] = src[6] & 268435455;
		des[8] = (src[7] >> 4);
		des[9] = (src[7] << 24) & 268435455;
		des[9] |= src[8] >> 8;
		des[10] = (src[8] << 20) & 268435455;
		des[10] |= src[9] >> 12;
		des[11] = (src[9] << 16) & 268435455;
		des[11] |= src[10] >> 16;
		des[12] = (src[10] << 12) & 268435455;
		des[12] |= src[11] >> 20;
		des[13] = (src[11] << 8) & 268435455;
		des[13] |= src[12] >> 24;
		des[14] = (src[12] << 4) & 268435455;
		des[14] |= src[13] >> 28;
		des[15] = src[13] & 268435455;
		des[16] = (src[14] >> 4);
		des[17] = (src[14] << 24) & 268435455;
		des[17] |= src[15] >> 8;
		des[18] = (src[15] << 20) & 268435455;
		des[18] |= src[16] >> 12;
		des[19] = (src[16] << 16) & 268435455;
		des[19] |= src[17] >> 16;
		des[20] = (src[17] << 12) & 268435455;
		des[20] |= src[18] >> 20;
		des[21] = (src[18] << 8) & 268435455;
		des[21] |= src[19] >> 24;
		des[22] = (src[19] << 4) & 268435455;
		des[22] |= src[20] >> 28;
		des[23] = src[20] & 268435455;
		des[24] = (src[21] >> 4);
		des[25] = (src[21] << 24) & 268435455;
		des[25] |= src[22] >> 8;
		des[26] = (src[22] << 20) & 268435455;
		des[26] |= src[23] >> 12;
		des[27] = (src[23] << 16) & 268435455;
		des[27] |= src[24] >> 16;
		des[28] = (src[24] << 12) & 268435455;
		des[28] |= src[25] >> 20;
		des[29] = (src[25] << 8) & 268435455;
		des[29] |= src[26] >> 24;
		des[30] = (src[26] << 4) & 268435455;
		des[30] |= src[27] >> 28;
		des[31] = src[27] & 268435455;
	}
}
template<typename T>
void simd_unpack_vl29(T * des, const uint32_t *src, int blockSize) {
	int i;
	for (i = 0; i < blockSize; i += 32, des += 32, src += 29) {
		des[0] = (src[0] >> 3);
		des[1] = (src[0] << 26) & 536870911;
		des[1] |= src[1] >> 6;
		des[2] = (src[1] << 23) & 536870911;
		des[2] |= src[2] >> 9;
		des[3] = (src[2] << 20) & 536870911;
		des[3] |= src[3] >> 12;
		des[4] = (src[3] << 17) & 536870911;
		des[4] |= src[4] >> 15;
		des[5] = (src[4] << 14) & 536870911;
		des[5] |= src[5] >> 18;
		des[6] = (src[5] << 11) & 536870911;
		des[6] |= src[6] >> 21;
		des[7] = (src[6] << 8) & 536870911;
		des[7] |= src[7] >> 24;
		des[8] = (src[7] << 5) & 536870911;
		des[8] |= src[8] >> 27;
		des[9] = (src[8] << 2) & 536870911;
		des[9] |= src[9] >> 30;
		des[10] = (src[9] >> 1) & 536870911;
		des[11] = (src[9] << 28) & 536870911;
		des[11] |= src[10] >> 4;
		des[12] = (src[10] << 25) & 536870911;
		des[12] |= src[11] >> 7;
		des[13] = (src[11] << 22) & 536870911;
		des[13] |= src[12] >> 10;
		des[14] = (src[12] << 19) & 536870911;
		des[14] |= src[13] >> 13;
		des[15] = (src[13] << 16) & 536870911;
		des[15] |= src[14] >> 16;
		des[16] = (src[14] << 13) & 536870911;
		des[16] |= src[15] >> 19;
		des[17] = (src[15] << 10) & 536870911;
		des[17] |= src[16] >> 22;
		des[18] = (src[16] << 7) & 536870911;
		des[18] |= src[17] >> 25;
		des[19] = (src[17] << 4) & 536870911;
		des[19] |= src[18] >> 28;
		des[20] = (src[18] << 1) & 536870911;
		des[20] |= src[19] >> 31;
		des[21] = (src[19] >> 2) & 536870911;
		des[22] = (src[19] << 27) & 536870911;
		des[22] |= src[20] >> 5;
		des[23] = (src[20] << 24) & 536870911;
		des[23] |= src[21] >> 8;
		des[24] = (src[21] << 21) & 536870911;
		des[24] |= src[22] >> 11;
		des[25] = (src[22] << 18) & 536870911;
		des[25] |= src[23] >> 14;
		des[26] = (src[23] << 15) & 536870911;
		des[26] |= src[24] >> 17;
		des[27] = (src[24] << 12) & 536870911;
		des[27] |= src[25] >> 20;
		des[28] = (src[25] << 9) & 536870911;
		des[28] |= src[26] >> 23;
		des[29] = (src[26] << 6) & 536870911;
		des[29] |= src[27] >> 26;
		des[30] = (src[27] << 3) & 536870911;
		des[30] |= src[28] >> 29;
		des[31] = src[28] & 536870911;
	}
}
template<typename T>
void simd_unpack_vl30(T * des, const uint32_t *src, int blockSize) {
	int i;
	for (i = 0; i < blockSize; i += 32, des += 32, src += 30) {
		des[0] = (src[0] >> 2);
		des[1] = (src[0] << 28) & 1073741823;
		des[1] |= src[1] >> 4;
		des[2] = (src[1] << 26) & 1073741823;
		des[2] |= src[2] >> 6;
		des[3] = (src[2] << 24) & 1073741823;
		des[3] |= src[3] >> 8;
		des[4] = (src[3] << 22) & 1073741823;
		des[4] |= src[4] >> 10;
		des[5] = (src[4] << 20) & 1073741823;
		des[5] |= src[5] >> 12;
		des[6] = (src[5] << 18) & 1073741823;
		des[6] |= src[6] >> 14;
		des[7] = (src[6] << 16) & 1073741823;
		des[7] |= src[7] >> 16;
		des[8] = (src[7] << 14) & 1073741823;
		des[8] |= src[8] >> 18;
		des[9] = (src[8] << 12) & 1073741823;
		des[9] |= src[9] >> 20;
		des[10] = (src[9] << 10) & 1073741823;
		des[10] |= src[10] >> 22;
		des[11] = (src[10] << 8) & 1073741823;
		des[11] |= src[11] >> 24;
		des[12] = (src[11] << 6) & 1073741823;
		des[12] |= src[12] >> 26;
		des[13] = (src[12] << 4) & 1073741823;
		des[13] |= src[13] >> 28;
		des[14] = (src[13] << 2) & 1073741823;
		des[14] |= src[14] >> 30;
		des[15] = src[14] & 1073741823;
		des[16] = (src[15] >> 2);
		des[17] = (src[15] << 28) & 1073741823;
		des[17] |= src[16] >> 4;
		des[18] = (src[16] << 26) & 1073741823;
		des[18] |= src[17] >> 6;
		des[19] = (src[17] << 24) & 1073741823;
		des[19] |= src[18] >> 8;
		des[20] = (src[18] << 22) & 1073741823;
		des[20] |= src[19] >> 10;
		des[21] = (src[19] << 20) & 1073741823;
		des[21] |= src[20] >> 12;
		des[22] = (src[20] << 18) & 1073741823;
		des[22] |= src[21] >> 14;
		des[23] = (src[21] << 16) & 1073741823;
		des[23] |= src[22] >> 16;
		des[24] = (src[22] << 14) & 1073741823;
		des[24] |= src[23] >> 18;
		des[25] = (src[23] << 12) & 1073741823;
		des[25] |= src[24] >> 20;
		des[26] = (src[24] << 10) & 1073741823;
		des[26] |= src[25] >> 22;
		des[27] = (src[25] << 8) & 1073741823;
		des[27] |= src[26] >> 24;
		des[28] = (src[26] << 6) & 1073741823;
		des[28] |= src[27] >> 26;
		des[29] = (src[27] << 4) & 1073741823;
		des[29] |= src[28] >> 28;
		des[30] = (src[28] << 2) & 1073741823;
		des[30] |= src[29] >> 30;
		des[31] = src[29] & 1073741823;
	}
}
template<typename T>
void simd_unpack_vl31(T * des, const uint32_t *src, int blockSize) {
	int i;
	for (i = 0; i < blockSize; i += 32, des += 32, src += 31) {
		des[0] = (src[0] >> 1);
		des[1] = (src[0] << 30) & 2147483647;
		des[1] |= src[1] >> 2;
		des[2] = (src[1] << 29) & 2147483647;
		des[2] |= src[2] >> 3;
		des[3] = (src[2] << 28) & 2147483647;
		des[3] |= src[3] >> 4;
		des[4] = (src[3] << 27) & 2147483647;
		des[4] |= src[4] >> 5;
		des[5] = (src[4] << 26) & 2147483647;
		des[5] |= src[5] >> 6;
		des[6] = (src[5] << 25) & 2147483647;
		des[6] |= src[6] >> 7;
		des[7] = (src[6] << 24) & 2147483647;
		des[7] |= src[7] >> 8;
		des[8] = (src[7] << 23) & 2147483647;
		des[8] |= src[8] >> 9;
		des[9] = (src[8] << 22) & 2147483647;
		des[9] |= src[9] >> 10;
		des[10] = (src[9] << 21) & 2147483647;
		des[10] |= src[10] >> 11;
		des[11] = (src[10] << 20) & 2147483647;
		des[11] |= src[11] >> 12;
		des[12] = (src[11] << 19) & 2147483647;
		des[12] |= src[12] >> 13;
		des[13] = (src[12] << 18) & 2147483647;
		des[13] |= src[13] >> 14;
		des[14] = (src[13] << 17) & 2147483647;
		des[14] |= src[14] >> 15;
		des[15] = (src[14] << 16) & 2147483647;
		des[15] |= src[15] >> 16;
		des[16] = (src[15] << 15) & 2147483647;
		des[16] |= src[16] >> 17;
		des[17] = (src[16] << 14) & 2147483647;
		des[17] |= src[17] >> 18;
		des[18] = (src[17] << 13) & 2147483647;
		des[18] |= src[18] >> 19;
		des[19] = (src[18] << 12) & 2147483647;
		des[19] |= src[19] >> 20;
		des[20] = (src[19] << 11) & 2147483647;
		des[20] |= src[20] >> 21;
		des[21] = (src[20] << 10) & 2147483647;
		des[21] |= src[21] >> 22;
		des[22] = (src[21] << 9) & 2147483647;
		des[22] |= src[22] >> 23;
		des[23] = (src[22] << 8) & 2147483647;
		des[23] |= src[23] >> 24;
		des[24] = (src[23] << 7) & 2147483647;
		des[24] |= src[24] >> 25;
		des[25] = (src[24] << 6) & 2147483647;
		des[25] |= src[25] >> 26;
		des[26] = (src[25] << 5) & 2147483647;
		des[26] |= src[26] >> 27;
		des[27] = (src[26] << 4) & 2147483647;
		des[27] |= src[27] >> 28;
		des[28] = (src[27] << 3) & 2147483647;
		des[28] |= src[28] >> 29;
		des[29] = (src[28] << 2) & 2147483647;
		des[29] |= src[29] >> 30;
		des[30] = (src[29] << 1) & 2147483647;
		des[30] |= src[30] >> 31;
		des[31] = src[30] & 2147483647;
	}
}
template<typename T>
void simd_unpack_vl32(T * des, const uint32_t *src, int blockSize) {
	int i;
	for (i = 0; i < blockSize; i += 32, des += 32, src += 32) {
		des[0] = src[0];
		des[1] = src[1];
		des[2] = src[2];
		des[3] = src[3];
		des[4] = src[4];
		des[5] = src[5];
		des[6] = src[6];
		des[7] = src[7];
		des[8] = src[8];
		des[9] = src[9];
		des[10] = src[10];
		des[11] = src[11];
		des[12] = src[12];
		des[13] = src[13];
		des[14] = src[14];
		des[15] = src[15];
		des[16] = src[16];
		des[17] = src[17];
		des[18] = src[18];
		des[19] = src[19];
		des[20] = src[20];
		des[21] = src[21];
		des[22] = src[22];
		des[23] = src[23];
		des[24] = src[24];
		des[25] = src[25];
		des[26] = src[26];
		des[27] = src[27];
		des[28] = src[28];
		des[29] = src[29];
		des[30] = src[30];
		des[31] = src[31];
	}
}
}
}

#endif

#endif /* SIMD_UNPACK_VL_HPP_ */
