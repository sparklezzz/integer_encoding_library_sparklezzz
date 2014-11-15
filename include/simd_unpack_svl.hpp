/*
 * simd_unpack_svl.hpp
 * block的块解压，每次解压32个数
 *
 */

#ifndef SIMD_UNPACK_SVL_HPP_
#define SIMD_UNPACK_SVL_HPP_

#ifdef USE_SSE_INSTRUCTION

namespace paradise {
namespace index {
template<typename T>
void simd_unpack_svl0(T * des, const uint32_t *src, int blockSize) {
	int i;
	for (i = 0; i < blockSize; i++)
		des[i] = 0;
}

static const struct unpack_svl_shfl_1_0{	//a0-d3 -> a0-a3(0-1byte), c0-c3(4-5byte)
int8_t a[16];
}unpack_svl_shfl_1_0 __attribute__((aligned(16))) = {{0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},};
static const struct unpack_svl_shfl_1_1{	//a0-d3 -> b0-b3(0-1byte), d0-d3(4-5byte)
int8_t a[16];
}unpack_svl_shfl_1_1 __attribute__((aligned(16))) = {{0xff, 0xff, 0xff, 0xff, 0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 1, 0xff, 0xff, 0xff},};
static const struct unpack_svl_and_1_0{
int16_t a[8];
}unpack_svl_and_1_0 __attribute__((aligned(16))) = {{0x1,0,0x1,0,0x1,0,0x1,0},};

template<typename T>
void simd_unpack_svl1(T* dest, const uint32_t *src, int blockSize)
{
	__asm__("movdqa %0,%%xmm0\n"//shfl_0
			"movdqa %1,%%xmm1\n"//shfl_1
			"movdqa %2,%%xmm2\n"//and_0
			 ::"m" (unpack_svl_shfl_1_0.a[0]),"m" (unpack_svl_shfl_1_1.a[0]),"m" (unpack_svl_and_1_0.a[0]));

	uint8_t *srcChar = (uint8_t*)src;
	for (int i = 0; i < blockSize; i += 16, srcChar += 2,dest+=16)
	{
		__asm__ volatile("prefetchnta %0"::"m" (srcChar[0]));
		__asm__("movdqu %4,%%xmm5\n"            		//src[0]->xmm5
					//process a0-d3
				"movdqa %%xmm5,%%xmm6\n"
				"pshufb %%xmm0,%%xmm5\n"
				"pshufb %%xmm1,%%xmm6\n"
				"psrld $4,%%xmm6\n"
				"por %%xmm6,%%xmm5\n"
					//now xmm6 is useless
				"movdqa %%xmm5,%%xmm6\n"
				"movdqa %%xmm5,%%xmm7\n"
				"movdqa %%xmm5,%%xmm8\n"

				"pand %%xmm2,%%xmm5\n"					//a0,a1,a2,a3->xmm5
				"movdqu %%xmm5,%0\n"                   //save output
				"psrld $1,%%xmm6\n"
				"pand %%xmm2,%%xmm6\n"					//b0,b1,b2,b3->xmm6
				"movdqu %%xmm6,%1\n"                   //save output
				"psrld $2,%%xmm7\n"
				"pand %%xmm2,%%xmm7\n"					//c0,c1,c2,c3->xmm7
				"movdqu %%xmm7,%2\n"                   //save output
				"psrld $3,%%xmm8\n"
				"pand %%xmm2,%%xmm8\n"					//d0,d1,d2,d3->xmm8
				"movdqu %%xmm8,%3\n"                   //save output

				:"=m" (dest[0]),"=m" (dest[4]),"=m" (dest[8]),"=m" (dest[12])
				:"m" (srcChar[0])
				:"memory");
	}
}

static const struct unpack_svl_shfl_2_0{
int8_t a[16];
}unpack_svl_shfl_2_0 __attribute__((aligned(16))) = {{0, 0xff, 0xff, 0xff, 1, 0xff, 0xff, 0xff, 2, 0xff, 0xff, 0xff, 3, 0xff, 0xff, 0xff},};
static const struct unpack_svl_and_2_0{
int16_t a[8];
}unpack_svl_and_2_0 __attribute__((aligned(16))) = {{0x3,0,0x3,0,0x3,0,0x3,0},};

template<typename T>
void simd_unpack_svl2(T* dest, const uint32_t *src, int blockSize)
{
	__asm__("movdqa %0,%%xmm0\n"//shfl_0
			"movdqa %1,%%xmm1\n"//and_0
			 ::"m" (unpack_svl_shfl_2_0.a[0]),"m" (unpack_svl_and_2_0.a[0]));

	uint8_t *srcChar = (uint8_t*)src;
	for (int i = 0; i < blockSize; i += 16, srcChar += 4,dest+=16)
	{
		__asm__ volatile("prefetchnta %0"::"m" (srcChar[0]));
		__asm__("movdqu %4,%%xmm5\n"            		//src[0]->xmm5
					//process a0-d3
				"pshufb %%xmm0,%%xmm5\n"
				"movdqa %%xmm5,%%xmm6\n"
				"movdqa %%xmm5,%%xmm7\n"
				"movdqa %%xmm5,%%xmm8\n"

				"pand %%xmm1,%%xmm5\n"					//a0,a1,a2,a3->xmm5
				"movdqu %%xmm5,%0\n"                   //save output
				"psrld $2,%%xmm6\n"
				"pand %%xmm1,%%xmm6\n"					//b0,b1,b2,b3->xmm6
				"movdqu %%xmm6,%1\n"                   //save output
				"psrld $4,%%xmm7\n"
				"pand %%xmm1,%%xmm7\n"					//c0,c1,c2,c3->xmm7
				"movdqu %%xmm7,%2\n"                   //save output
				"psrld $6,%%xmm8\n"
				"pand %%xmm1,%%xmm8\n"					//d0,d1,d2,d3->xmm8
				"movdqu %%xmm8,%3\n"                   //save output

				:"=m" (dest[0]),"=m" (dest[4]),"=m" (dest[8]),"=m" (dest[12])
				:"m" (srcChar[0])
				:"memory");
	}
}

static const struct unpack_svl_shfl_3_0{	//a0-d3 -> a0-a3(0-1byte), c0-c3(4-5byte)
int8_t a[16];
}unpack_svl_shfl_3_0 __attribute__((aligned(16))) = {{0, 1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 3, 4, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},};
static const struct unpack_svl_shfl_3_1{	//a0-d3 -> b0-b3(0-1byte), d0-d3(4-5byte)
int8_t a[16];
}unpack_svl_shfl_3_1 __attribute__((aligned(16))) = {{0xff, 0xff, 0xff, 0xff, 1, 2, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 4, 5, 0xff, 0xff},};

static const struct unpack_svl_and_3_0{
int16_t a[8];
}unpack_svl_and_3_0 __attribute__((aligned(16))) = {{0x7,0,0x7,0,0x7,0,0x7,0},};

template<typename T>
void simd_unpack_svl3(T* dest, const uint32_t *src, int blockSize)
{
	__asm__("movdqa %0,%%xmm0\n"//shfl_0
			"movdqa %1,%%xmm1\n"//shfl_1
			"movdqa %2,%%xmm2\n"//and_0
			 ::"m" (unpack_svl_shfl_3_0.a[0]),"m" (unpack_svl_shfl_3_1.a[0]),"m" (unpack_svl_and_3_0.a[0]));

	uint8_t *srcChar = (uint8_t*)src;
	for (int i = 0; i < blockSize; i += 16, srcChar += 6,dest+=16)
	{
		__asm__ volatile("prefetchnta %0"::"m" (srcChar[0]));
		__asm__("movdqu %4,%%xmm5\n"            		//src[0]->xmm5
					//process a0-d3
				"movdqa %%xmm5,%%xmm6\n"
				"pshufb %%xmm0,%%xmm5\n"
				"pshufb %%xmm1,%%xmm6\n"
				"psrld $4,%%xmm6\n"
				"por %%xmm6,%%xmm5\n"
					//now xmm6 is useless
				"movdqa %%xmm5,%%xmm6\n"
				"movdqa %%xmm5,%%xmm7\n"
				"movdqa %%xmm5,%%xmm8\n"

				"pand %%xmm2,%%xmm5\n"					//a0,a1,a2,a3->xmm5
				"movdqu %%xmm5,%0\n"                   //save output
				"psrld $3,%%xmm6\n"
				"pand %%xmm2,%%xmm6\n"					//b0,b1,b2,b3->xmm6
				"movdqu %%xmm6,%1\n"                   //save output
				"psrld $6,%%xmm7\n"
				"pand %%xmm2,%%xmm7\n"					//c0,c1,c2,c3->xmm7
				"movdqu %%xmm7,%2\n"                   //save output
				"psrld $9,%%xmm8\n"
				"pand %%xmm2,%%xmm8\n"					//d0,d1,d2,d3->xmm8
				"movdqu %%xmm8,%3\n"                   //save output

				:"=m" (dest[0]),"=m" (dest[4]),"=m" (dest[8]),"=m" (dest[12])
				:"m" (srcChar[0])
				:"memory");
	}
}

static const struct unpack_svl_shfl_4_0{	//a0-d3 -> a0-a3(0-2byte), c0-c3(4-6byte)
int8_t a[16];
}unpack_svl_shfl_4_0 __attribute__((aligned(16))) = {{0, 1, 0xff, 0xff, 2, 3, 0xff, 0xff, 4, 5, 0xff, 0xff, 6, 7, 0xff, 0xff},};
static const struct unpack_svl_and_4_0{
int16_t a[8];
}unpack_svl_and_4_0 __attribute__((aligned(16))) = {{0xf,0,0xf,0,0xf,0,0xf,0},};

template<typename T>
void simd_unpack_svl4(T* dest, const uint32_t *src, int blockSize)
{
	__asm__("movdqa %0,%%xmm0\n"//shfl_0
			"movdqa %1,%%xmm1\n"//and_0
			 ::"m" (unpack_svl_shfl_4_0.a[0]),"m" (unpack_svl_and_4_0.a[0]));

	uint8_t *srcChar = (uint8_t*)src;
	for (int i = 0; i < blockSize; i += 16, srcChar += 8,dest+=16)
	{
		__asm__ volatile("prefetchnta %0"::"m" (srcChar[0]));
		__asm__("movdqu %4,%%xmm5\n"            		//src[0]->xmm5
					//process a0-d3
				"pshufb %%xmm0,%%xmm5\n"
				"movdqa %%xmm5,%%xmm6\n"
				"movdqa %%xmm5,%%xmm7\n"
				"movdqa %%xmm5,%%xmm8\n"

				"pand %%xmm1,%%xmm5\n"					//a0,a1,a2,a3->xmm5
				"movdqu %%xmm5,%0\n"                   //save output
				"psrld $4,%%xmm6\n"
				"pand %%xmm1,%%xmm6\n"					//b0,b1,b2,b3->xmm6
				"movdqu %%xmm6,%1\n"                   //save output
				"psrld $8,%%xmm7\n"
				"pand %%xmm1,%%xmm7\n"					//c0,c1,c2,c3->xmm7
				"movdqu %%xmm7,%2\n"                   //save output
				"psrld $12,%%xmm8\n"
				"pand %%xmm1,%%xmm8\n"					//d0,d1,d2,d3->xmm8
				"movdqu %%xmm8,%3\n"                   //save output

				:"=m" (dest[0]),"=m" (dest[4]),"=m" (dest[8]),"=m" (dest[12])
				:"m" (srcChar[0])
				:"memory");
	}
}

static const struct unpack_svl_shfl_5_0{	//a0-d3 -> a0-a3(0-2byte), c0-c3(4-6byte)
int8_t a[16];
}unpack_svl_shfl_5_0 __attribute__((aligned(16))) = {{0, 1, 2, 0xff, 0xff, 0xff, 0xff, 0xff, 5, 6, 7, 0xff, 0xff, 0xff, 0xff, 0xff},};
static const struct unpack_svl_shfl_5_1{	//a0-d3 -> b0-b3(0-2byte), d0-d3(4-6byte)
int8_t a[16];
}unpack_svl_shfl_5_1 __attribute__((aligned(16))) = {{0xff, 0xff, 0xff, 0xff, 2, 3, 4, 0xff, 0xff, 0xff, 0xff, 0xff, 7, 8, 9, 0xff},};

static const struct unpack_svl_and_5_0{
int16_t a[8];
}unpack_svl_and_5_0 __attribute__((aligned(16))) = {{0x1f,0,0x1f,0,0x1f,0,0x1f,0},};

template<typename T>
void simd_unpack_svl5(T* dest, const uint32_t *src, int blockSize)
{
	__asm__("movdqa %0,%%xmm0\n"//shfl_0
			"movdqa %1,%%xmm1\n"//shfl_1
			"movdqa %2,%%xmm2\n"//and_0
			 ::"m" (unpack_svl_shfl_5_0.a[0]),"m" (unpack_svl_shfl_5_1.a[0]),"m" (unpack_svl_and_5_0.a[0]));

	uint8_t *srcChar = (uint8_t*)src;
	for (int i = 0; i < blockSize; i += 16, srcChar += 10,dest+=16)
	{
		__asm__ volatile("prefetchnta %0"::"m" (srcChar[0]));
		__asm__("movdqu %4,%%xmm5\n"            		//src[0]->xmm5
					//process a0-d3
				"movdqa %%xmm5,%%xmm6\n"
				"pshufb %%xmm0,%%xmm5\n"
				"pshufb %%xmm1,%%xmm6\n"
				"psrld $4,%%xmm6\n"
				"por %%xmm6,%%xmm5\n"
					//now xmm6 is useless
				"movdqa %%xmm5,%%xmm6\n"
				"movdqa %%xmm5,%%xmm7\n"
				"movdqa %%xmm5,%%xmm8\n"

				"pand %%xmm2,%%xmm5\n"					//a0,a1,a2,a3->xmm5
				"movdqu %%xmm5,%0\n"                   //save output
				"psrld $5,%%xmm6\n"
				"pand %%xmm2,%%xmm6\n"					//b0,b1,b2,b3->xmm6
				"movdqu %%xmm6,%1\n"                   //save output
				"psrld $10,%%xmm7\n"
				"pand %%xmm2,%%xmm7\n"					//c0,c1,c2,c3->xmm7
				"movdqu %%xmm7,%2\n"                   //save output
				"psrld $15,%%xmm8\n"
				"pand %%xmm2,%%xmm8\n"					//d0,d1,d2,d3->xmm8
				"movdqu %%xmm8,%3\n"                   //save output

				:"=m" (dest[0]),"=m" (dest[4]),"=m" (dest[8]),"=m" (dest[12])
				:"m" (srcChar[0])
				:"memory");
	}
}

static const struct unpack_svl_shfl_6_0{
int8_t a[16];
}unpack_svl_shfl_6_0 __attribute__((aligned(16))) = {{0, 1, 2, 0xff, 3, 4, 5, 0xff, 6, 7, 8, 0xff, 9, 10, 11, 0xff},};
static const struct unpack_svl_and_6_0{
int16_t a[8];
}unpack_svl_and_6_0 __attribute__((aligned(16))) = {{0x3f,0,0x3f,0,0x3f,0,0x3f,0},};

template<typename T>
void simd_unpack_svl6(T* dest, const uint32_t *src, int blockSize)
{
	__asm__("movdqa %0,%%xmm0\n"//shfl_0
			"movdqa %1,%%xmm1\n"//and_0
			 ::"m" (unpack_svl_shfl_6_0.a[0]),"m" (unpack_svl_and_6_0.a[0]));

	uint8_t *srcChar = (uint8_t*)src;
	for (int i = 0; i < blockSize; i += 16, srcChar += 12,dest+=16)
	{
		__asm__ volatile("prefetchnta %0"::"m" (srcChar[0]));
		__asm__("movdqu %4,%%xmm5\n"            		//src[0]->xmm5
					//process a0-d3
				"pshufb %%xmm0,%%xmm5\n"
				"movdqa %%xmm5,%%xmm6\n"
				"movdqa %%xmm5,%%xmm7\n"
				"movdqa %%xmm5,%%xmm8\n"

				"pand %%xmm1,%%xmm5\n"					//a0,a1,a2,a3->xmm5
				"movdqu %%xmm5,%0\n"                   //save output
				"psrld $6,%%xmm6\n"
				"pand %%xmm1,%%xmm6\n"					//b0,b1,b2,b3->xmm6
				"movdqu %%xmm6,%1\n"                   //save output
				"psrld $12,%%xmm7\n"
				"pand %%xmm1,%%xmm7\n"					//c0,c1,c2,c3->xmm7
				"movdqu %%xmm7,%2\n"                   //save output
				"psrld $18,%%xmm8\n"
				"pand %%xmm1,%%xmm8\n"					//d0,d1,d2,d3->xmm8
				"movdqu %%xmm8,%3\n"                   //save output

				:"=m" (dest[0]),"=m" (dest[4]),"=m" (dest[8]),"=m" (dest[12])
				:"m" (srcChar[0])
				:"memory");
	}
}

static const struct unpack_svl_shfl_7_0{
int8_t a[16];
}unpack_svl_shfl_7_0 __attribute__((aligned(16))) = {{0, 1, 2, 3, 0xff, 0xff, 0xff, 0xff, 7, 8, 9, 10, 0xff, 0xff, 0xff, 0xff},};
static const struct unpack_svl_shfl_7_1{
int8_t a[16];
}unpack_svl_shfl_7_1 __attribute__((aligned(16))) = {{0xff, 0xff, 0xff, 0xff, 3, 4, 5, 6, 0xff, 0xff, 0xff, 0xff, 10, 11, 12, 13},};

static const struct unpack_svl_and_7_0{
int16_t a[8];
}unpack_svl_and_7_0 __attribute__((aligned(16))) = {{0x7f,0,0x7f,0,0x7f,0,0x7f,0},};

template<typename T>
void simd_unpack_svl7(T* dest, const uint32_t *src, int blockSize)
{
	__asm__("movdqa %0,%%xmm0\n"//shfl_0
			"movdqa %1,%%xmm1\n"//shfl_1
			"movdqa %2,%%xmm2\n"//and_0
			 ::"m" (unpack_svl_shfl_7_0.a[0]),"m" (unpack_svl_shfl_7_1.a[0]),"m" (unpack_svl_and_7_0.a[0]));

	uint8_t *srcChar = (uint8_t*)src;
	for (int i = 0; i < blockSize; i += 16, srcChar += 14,dest+=16)
	{
		__asm__ volatile("prefetchnta %0"::"m" (srcChar[0]));
		__asm__("movdqu %4,%%xmm5\n"            		//src[0]->xmm5
					//process a0-d3
				"movdqa %%xmm5,%%xmm6\n"
				"pshufb %%xmm0,%%xmm5\n"
				"pshufb %%xmm1,%%xmm6\n"
				"psrld $4,%%xmm6\n"
				"por %%xmm6,%%xmm5\n"
					//now xmm6 is useless
				"movdqa %%xmm5,%%xmm6\n"
				"movdqa %%xmm5,%%xmm7\n"
				"movdqa %%xmm5,%%xmm8\n"

				"pand %%xmm2,%%xmm5\n"					//a0,a1,a2,a3->xmm5
				"movdqu %%xmm5,%0\n"                   //save output
				"psrld $7,%%xmm6\n"
				"pand %%xmm2,%%xmm6\n"					//b0,b1,b2,b3->xmm6
				"movdqu %%xmm6,%1\n"                   //save output
				"psrld $14,%%xmm7\n"
				"pand %%xmm2,%%xmm7\n"					//c0,c1,c2,c3->xmm7
				"movdqu %%xmm7,%2\n"                   //save output
				"psrld $21,%%xmm8\n"
				"pand %%xmm2,%%xmm8\n"					//d0,d1,d2,d3->xmm8
				"movdqu %%xmm8,%3\n"                   //save output

				:"=m" (dest[0]),"=m" (dest[4]),"=m" (dest[8]),"=m" (dest[12])
				:"m" (srcChar[0])
				:"memory");
	}
}

static const struct unpack_svl_and_8_0{
int16_t a[8];
}unpack_svl_and_8_0 __attribute__((aligned(16))) = {{0xff,0,0xff,0,0xff,0,0xff,0},};

template <typename T>
void simd_unpack_svl8(T* dest, const uint32_t *src, int blockSize)
{
	__asm__("movdqa %0,%%xmm0\n"//unpack_svl_shfl_0
			 ::"m" (unpack_svl_and_8_0.a[0]));

	for (int i = 0; i < blockSize; i += 16, src += 4,dest+=16)
	{
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		__asm__("movdqu %4,%%xmm5\n"            		//src[0]->xmm5
				"movdqa %%xmm5,%%xmm6\n"                //save for future aligned move
				"movdqa %%xmm5,%%xmm7\n"
				"movdqa %%xmm5,%%xmm8\n"
				"pand %%xmm0,%%xmm5\n"					//a0,a1,a2,a3->xmm5
				"movdqu %%xmm5,%0\n"                   //save output
				"psrld $8,%%xmm6\n"
				"pand %%xmm0,%%xmm6\n"					//b0,b1,b2,b3->xmm6
				"movdqu %%xmm6,%1\n"                   //save output
				"psrld $16,%%xmm7\n"
				"pand %%xmm0,%%xmm7\n"					//c0,c1,c2,c3->xmm7
				"movdqu %%xmm7,%2\n"                   //save output
				"psrld $24,%%xmm8\n"
				"pand %%xmm0,%%xmm8\n"					//d0,d1,d2,d3->xmm8
				"movdqu %%xmm8,%3\n"                   //save output
				:"=m" (dest[0]),"=m" (dest[4]),"=m" (dest[8]),"=m" (dest[12])
				:"m" (src[0])
				:"memory");
	}
}

static const struct unpack_svl_shfl_9_0{
int8_t a[16];
}unpack_svl_shfl_9_0 __attribute__((aligned(16))) = {{0, 1, 2, 3, 4, 0xff, 0xff, 0xff, 4, 5, 6, 7, 8, 0xff, 0xff, 0xff},};
static const struct unpack_svl_and_9_0{
int16_t a[8];
}unpack_svl_and_9_0 __attribute__((aligned(16))) = {{0x1ff,0,0x1ff,0,0x1ff,0,0x1ff,0},};

template<typename T>
void simd_unpack_svl9(T* dest, const uint32_t *src, int blockSize) {
	__asm__("movdqa %0,%%xmm0\n"//and_0
			"movdqa %1,%%xmm1\n"//shfl_0
			 ::"m" (unpack_svl_and_9_0.a[0]),"m" (unpack_svl_shfl_9_0.a[0]));

	uint8_t *srcChar = (uint8_t*)src;
	for (int i = 0; i < blockSize; i += 16, srcChar += 18,dest+=16)
	{
		__asm__ volatile("prefetchnta %0"::"m" (srcChar[0]));
		__asm__("movdqu %4,%%xmm3\n"            		//a0-b3->xmm3
				"movdqu %5,%%xmm4\n"            		//c0-d3->xmm4
				"pshufb %%xmm1,%%xmm3\n"				//b0-b3->8 byte aligned
				"pshufb %%xmm1,%%xmm4\n"				//d0-d3->8 byte aligned
				"movdqa %%xmm3,%%xmm5\n"
				"punpcklqdq %%xmm4,%%xmm3\n"			//a0-a3,c0-c3->8 byte aligned
				"punpckhqdq %%xmm4,%%xmm5\n"			//b0-b3,d0-d3->8 byte aligned
				"psrlq $4,%%xmm5\n"

				"pshufd $216,%%xmm3,%%xmm3\n"					//swap 1st and 2nd 32-bit word (base 0)
				"pshufd $216,%%xmm5,%%xmm5\n"					//11011000 = 216
				"movdqa %%xmm3,%%xmm4\n"
				"punpckldq %%xmm5,%%xmm3\n"				//lower 32-bit of a*, b*, c*, d*
				"punpckhdq %%xmm5,%%xmm4\n"				//higher 32-bit of a*, b*, c*, d*

				"movdqa %%xmm3,%%xmm5\n"
				"pand %%xmm0,%%xmm5\n"					//a0,b0,c0,d0->xmm5
				"movdqa %%xmm3,%%xmm6\n"
				"psrld $9,%%xmm6\n"
				"pand %%xmm0,%%xmm6\n"					//a1,b1,c1,d1->xmm6
				"movdqa %%xmm3,%%xmm7\n"
				"psrld $18,%%xmm7\n"
				"pand %%xmm0,%%xmm7\n"					//a2,b2,c2,d2->xmm7
				"movdqa %%xmm3,%%xmm8\n"
				"psrld $27,%%xmm8\n"
				"pslld $5,%%xmm4\n"
				"pand %%xmm0,%%xmm4\n"
				"por %%xmm4,%%xmm8\n"					//a3,b3,c3,d3->xmm8

				"movdqu %%xmm5,%0\n"
				"movdqu %%xmm6,%1\n"
				"movdqu %%xmm7,%2\n"
				"movdqu %%xmm8,%3\n"

				:"=m" (dest[0]),"=m" (dest[4]),"=m" (dest[8]),"=m" (dest[12])
				:"m" (srcChar[0]),"m" (srcChar[9])
				:"memory");
	}
}

static const struct unpack_svl_shfl_10_0{
int8_t a[16];
}unpack_svl_shfl_10_0 __attribute__((aligned(16))) = {{0, 1, 2, 3, 4, 0xff, 0xff, 0xff, 5, 6, 7, 8, 9, 0xff, 0xff, 0xff},};
static const struct unpack_svl_and_10_0{
int16_t a[8];
}unpack_svl_and_10_0 __attribute__((aligned(16))) = {{0x3ff,0,0x3ff,0,0x3ff,0,0x3ff,0},};

template<typename T>
void simd_unpack_svl10(T * dest, const uint32_t *src, int blockSize) {
	__asm__("movdqa %0,%%xmm0\n"//and_0
			"movdqa %1,%%xmm1\n"//shfl_0
			 ::"m" (unpack_svl_and_10_0.a[0]),"m" (unpack_svl_shfl_10_0.a[0]));

	uint8_t *srcChar = (uint8_t*)src;
	for (int i = 0; i < blockSize; i += 16, srcChar += 20,dest+=16)
	{
		__asm__ volatile("prefetchnta %0"::"m" (srcChar[0]));
		__asm__("movdqu %4,%%xmm3\n"            		//a0-b3->xmm3
				"movdqu %5,%%xmm4\n"            		//c0-d3->xmm4
				"pshufb %%xmm1,%%xmm3\n"				//b0-b3->8 byte aligned
				"pshufb %%xmm1,%%xmm4\n"				//d0-d3->8 byte aligned
				"movdqa %%xmm3,%%xmm5\n"
				"punpcklqdq %%xmm4,%%xmm3\n"			//a0-a3,c0-c3->8 byte aligned
				"punpckhqdq %%xmm4,%%xmm5\n"			//b0-b3,d0-d3->8 byte aligned

				"pshufd $216,%%xmm3,%%xmm3\n"					//swap 1st and 2nd 32-bit word (base 0)
				"pshufd $216,%%xmm5,%%xmm5\n"					//11011000 = 216
				"movdqa %%xmm3,%%xmm4\n"
				"punpckldq %%xmm5,%%xmm3\n"				//lower 32-bit of a*, b*, c*, d*
				"punpckhdq %%xmm5,%%xmm4\n"				//higher 32-bit of a*, b*, c*, d*

				"movdqa %%xmm3,%%xmm5\n"
				"pand %%xmm0,%%xmm5\n"					//a0,b0,c0,d0->xmm5
				"movdqa %%xmm3,%%xmm6\n"
				"psrld $10,%%xmm6\n"
				"pand %%xmm0,%%xmm6\n"					//a1,b1,c1,d1->xmm6
				"movdqa %%xmm3,%%xmm7\n"
				"psrld $20,%%xmm7\n"
				"pand %%xmm0,%%xmm7\n"					//a2,b2,c2,d2->xmm7
				"movdqa %%xmm3,%%xmm8\n"
				"psrld $30,%%xmm8\n"
				"pslld $2,%%xmm4\n"
				"pand %%xmm0,%%xmm4\n"
				"por %%xmm4,%%xmm8\n"					//a3,b3,c3,d3->xmm8

				"movdqu %%xmm5,%0\n"
				"movdqu %%xmm6,%1\n"
				"movdqu %%xmm7,%2\n"
				"movdqu %%xmm8,%3\n"

				:"=m" (dest[0]),"=m" (dest[4]),"=m" (dest[8]),"=m" (dest[12])
				:"m" (srcChar[0]),"m" (srcChar[10])
				:"memory");
	}
}

static const struct unpack_svl_shfl_11_0{
int8_t a[16];
}unpack_svl_shfl_11_0 __attribute__((aligned(16))) = {{0, 1, 2, 3, 4, 5, 0xff, 0xff, 5, 6, 7, 8, 9, 10, 0xff, 0xff},};
static const struct unpack_svl_and_11_0{
int16_t a[8];
}unpack_svl_and_11_0 __attribute__((aligned(16))) = {{0x7ff,0,0x7ff,0,0x7ff,0,0x7ff,0},};

template<typename T>
void simd_unpack_svl11(T* dest, const uint32_t *src, int blockSize) {
	__asm__("movdqa %0,%%xmm0\n"//and_0
			"movdqa %1,%%xmm1\n"//shfl_0
			 ::"m" (unpack_svl_and_11_0.a[0]),"m" (unpack_svl_shfl_11_0.a[0]));

	uint8_t *srcChar = (uint8_t*)src;
	for (int i = 0; i < blockSize; i += 16, srcChar += 22,dest+=16)
	{
		__asm__ volatile("prefetchnta %0"::"m" (srcChar[0]));
		__asm__("movdqu %4,%%xmm3\n"            		//a0-b3->xmm3
				"movdqu %5,%%xmm4\n"            		//c0-d3->xmm4
				"pshufb %%xmm1,%%xmm3\n"				//b0-b3->8 byte aligned
				"pshufb %%xmm1,%%xmm4\n"				//d0-d3->8 byte aligned
				"movdqa %%xmm3,%%xmm5\n"
				"punpcklqdq %%xmm4,%%xmm3\n"			//a0-a3,c0-c3->8 byte aligned
				"punpckhqdq %%xmm4,%%xmm5\n"			//b0-b3,d0-d3->8 byte aligned
				"psrlq $4,%%xmm5\n"

				"pshufd $216,%%xmm3,%%xmm3\n"					//swap 1st and 2nd 32-bit word (base 0)
				"pshufd $216,%%xmm5,%%xmm5\n"					//11011000 = 216
				"movdqa %%xmm3,%%xmm4\n"
				"punpckldq %%xmm5,%%xmm3\n"				//lower 32-bit of a*, b*, c*, d*
				"punpckhdq %%xmm5,%%xmm4\n"				//higher 32-bit of a*, b*, c*, d*

				"movdqa %%xmm3,%%xmm5\n"
				"pand %%xmm0,%%xmm5\n"					//a0,b0,c0,d0->xmm5
				"movdqa %%xmm3,%%xmm6\n"
				"psrld $11,%%xmm6\n"
				"pand %%xmm0,%%xmm6\n"					//a1,b1,c1,d1->xmm6
				"movdqa %%xmm3,%%xmm7\n"
				"psrld $22,%%xmm7\n"
				"movdqa %%xmm4,%%xmm9\n"
				"pslld $10,%%xmm9\n"
				"pand %%xmm0,%%xmm9\n"
				"por %%xmm9,%%xmm7\n"					//a2,b2,c2,d2->xmm7
				"movdqa %%xmm4,%%xmm8\n"
				"psrld $1,%%xmm8\n"
				"pand %%xmm0,%%xmm8\n"					//a3,b3,c3,d3->xmm8

				"movdqu %%xmm5,%0\n"
				"movdqu %%xmm6,%1\n"
				"movdqu %%xmm7,%2\n"
				"movdqu %%xmm8,%3\n"

				:"=m" (dest[0]),"=m" (dest[4]),"=m" (dest[8]),"=m" (dest[12])
				:"m" (srcChar[0]),"m" (srcChar[11])
				:"memory");
	}
}

static const struct unpack_svl_shfl_12_0{
int8_t a[16];
}unpack_svl_shfl_12_0 __attribute__((aligned(16))) = {{0, 1, 2, 3, 4, 5, 0xff, 0xff, 6, 7, 8, 9, 10, 11, 0xff, 0xff},};
static const struct unpack_svl_and_12_0{
int16_t a[8];
}unpack_svl_and_12_0 __attribute__((aligned(16))) = {{0xfff,0,0xfff,0,0xfff,0,0xfff,0},};

template<typename T>
void simd_unpack_svl12(T* dest, const uint32_t *src, int blockSize) {
	__asm__("movdqa %0,%%xmm0\n"//and_0
			"movdqa %1,%%xmm1\n"//shfl_0
			 ::"m" (unpack_svl_and_12_0.a[0]),"m" (unpack_svl_shfl_12_0.a[0]));

	uint8_t *srcChar = (uint8_t*)src;
	for (int i = 0; i < blockSize; i += 16, srcChar += 24,dest+=16)
	{
		__asm__ volatile("prefetchnta %0"::"m" (srcChar[0]));
		__asm__("movdqu %4,%%xmm3\n"            		//a0-b3->xmm3
				"movdqu %5,%%xmm4\n"            		//c0-d3->xmm4
				"pshufb %%xmm1,%%xmm3\n"				//b0-b3->8 byte aligned
				"pshufb %%xmm1,%%xmm4\n"				//d0-d3->8 byte aligned
				"movdqa %%xmm3,%%xmm5\n"
				"punpcklqdq %%xmm4,%%xmm3\n"			//a0-a3,c0-c3->8 byte aligned
				"punpckhqdq %%xmm4,%%xmm5\n"			//b0-b3,d0-d3->8 byte aligned

				"pshufd $216,%%xmm3,%%xmm3\n"					//swap 1st and 2nd 32-bit word (base 0)
				"pshufd $216,%%xmm5,%%xmm5\n"					//11011000 = 216
				"movdqa %%xmm3,%%xmm4\n"
				"punpckldq %%xmm5,%%xmm3\n"				//lower 32-bit of a*, b*, c*, d*
				"punpckhdq %%xmm5,%%xmm4\n"				//higher 32-bit of a*, b*, c*, d*

				"movdqa %%xmm3,%%xmm5\n"
				"pand %%xmm0,%%xmm5\n"					//a0,b0,c0,d0->xmm5
				"movdqa %%xmm3,%%xmm6\n"
				"psrld $12,%%xmm6\n"
				"pand %%xmm0,%%xmm6\n"					//a1,b1,c1,d1->xmm6
				"movdqa %%xmm3,%%xmm7\n"
				"psrld $24,%%xmm7\n"
				"movdqa %%xmm4,%%xmm9\n"
				"pslld $8,%%xmm9\n"
				"pand %%xmm0,%%xmm9\n"
				"por %%xmm9,%%xmm7\n"					//a2,b2,c2,d2->xmm7
				"movdqa %%xmm4,%%xmm8\n"
				"psrld $4,%%xmm8\n"
				"pand %%xmm0,%%xmm8\n"					//a3,b3,c3,d3->xmm8

				"movdqu %%xmm5,%0\n"
				"movdqu %%xmm6,%1\n"
				"movdqu %%xmm7,%2\n"
				"movdqu %%xmm8,%3\n"

				:"=m" (dest[0]),"=m" (dest[4]),"=m" (dest[8]),"=m" (dest[12])
				:"m" (srcChar[0]),"m" (srcChar[12])
				:"memory");
	}
}

static const struct unpack_svl_shfl_13_0{
int8_t a[16];
}unpack_svl_shfl_13_0 __attribute__((aligned(16))) = {{0, 1, 2, 3, 4, 5, 6, 0xff, 6, 7, 8, 9, 10, 11, 12, 0xff},};
static const struct unpack_svl_and_13_0{
int16_t a[8];
}unpack_svl_and_13_0 __attribute__((aligned(16))) = {{0x1fff,0,0x1fff,0,0x1fff,0,0x1fff,0},};

template<typename T>
void simd_unpack_svl13(T* dest, const uint32_t *src, int blockSize) {
	__asm__("movdqa %0,%%xmm0\n"//and_0
			"movdqa %1,%%xmm1\n"//shfl_0
			 ::"m" (unpack_svl_and_13_0.a[0]),"m" (unpack_svl_shfl_13_0.a[0]));

	uint8_t *srcChar = (uint8_t*)src;
	for (int i = 0; i < blockSize; i += 16, srcChar += 26,dest+=16)
	{
		__asm__ volatile("prefetchnta %0"::"m" (srcChar[0]));
		__asm__("movdqu %4,%%xmm3\n"            		//a0-b3->xmm3
				"movdqu %5,%%xmm4\n"            		//c0-d3->xmm4
				"pshufb %%xmm1,%%xmm3\n"				//b0-b3->8 byte aligned
				"pshufb %%xmm1,%%xmm4\n"				//d0-d3->8 byte aligned
				"movdqa %%xmm3,%%xmm5\n"
				"punpcklqdq %%xmm4,%%xmm3\n"			//a0-a3,c0-c3->8 byte aligned
				"punpckhqdq %%xmm4,%%xmm5\n"			//b0-b3,d0-d3->8 byte aligned
				"psrlq $4,%%xmm5\n"

				"pshufd $216,%%xmm3,%%xmm3\n"					//swap 1st and 2nd 32-bit word (base 0)
				"pshufd $216,%%xmm5,%%xmm5\n"					//11011000 = 216
				"movdqa %%xmm3,%%xmm4\n"
				"punpckldq %%xmm5,%%xmm3\n"				//lower 32-bit of a*, b*, c*, d*
				"punpckhdq %%xmm5,%%xmm4\n"				//higher 32-bit of a*, b*, c*, d*

				"movdqa %%xmm3,%%xmm5\n"
				"pand %%xmm0,%%xmm5\n"					//a0,b0,c0,d0->xmm5
				"movdqa %%xmm3,%%xmm6\n"
				"psrld $13,%%xmm6\n"
				"pand %%xmm0,%%xmm6\n"					//a1,b1,c1,d1->xmm6
				"movdqa %%xmm3,%%xmm7\n"
				"psrld $26,%%xmm7\n"
				"movdqa %%xmm4,%%xmm9\n"
				"pslld $6,%%xmm9\n"
				"pand %%xmm0,%%xmm9\n"
				"por %%xmm9,%%xmm7\n"					//a2,b2,c2,d2->xmm7
				"movdqa %%xmm4,%%xmm8\n"
				"psrld $7,%%xmm8\n"
				"pand %%xmm0,%%xmm8\n"					//a3,b3,c3,d3->xmm8

				"movdqu %%xmm5,%0\n"
				"movdqu %%xmm6,%1\n"
				"movdqu %%xmm7,%2\n"
				"movdqu %%xmm8,%3\n"

				:"=m" (dest[0]),"=m" (dest[4]),"=m" (dest[8]),"=m" (dest[12])
				:"m" (srcChar[0]),"m" (srcChar[13])
				:"memory");
	}
}

static const struct unpack_svl_shfl_14_0{
int8_t a[16];
}unpack_svl_shfl_14_0 __attribute__((aligned(16))) = {{0, 1, 2, 3, 4, 5, 6, 0xff, 7, 8, 9, 10, 11, 12, 13, 0xff},};
static const struct unpack_svl_and_14_0{
int16_t a[8];
}unpack_svl_and_14_0 __attribute__((aligned(16))) = {{0x3fff,0,0x3fff,0,0x3fff,0,0x3fff,0},};

template<typename T>
void simd_unpack_svl14(T* dest, const uint32_t *src, int blockSize) {
	__asm__("movdqa %0,%%xmm0\n"//and_0
			"movdqa %1,%%xmm1\n"//shfl_0
			 ::"m" (unpack_svl_and_14_0.a[0]),"m" (unpack_svl_shfl_14_0.a[0]));

	uint8_t *srcChar = (uint8_t*)src;
	for (int i = 0; i < blockSize; i += 16, srcChar += 28,dest+=16)
	{
		__asm__ volatile("prefetchnta %0"::"m" (srcChar[0]));
		__asm__("movdqu %4,%%xmm3\n"            		//a0-b3->xmm3
				"movdqu %5,%%xmm4\n"            		//c0-d3->xmm4
				"pshufb %%xmm1,%%xmm3\n"				//b0-b3->8 byte aligned
				"pshufb %%xmm1,%%xmm4\n"				//d0-d3->8 byte aligned
				"movdqa %%xmm3,%%xmm5\n"
				"punpcklqdq %%xmm4,%%xmm3\n"			//a0-a3,c0-c3->8 byte aligned
				"punpckhqdq %%xmm4,%%xmm5\n"			//b0-b3,d0-d3->8 byte aligned

				"pshufd $216,%%xmm3,%%xmm3\n"					//swap 1st and 2nd 32-bit word (base 0)
				"pshufd $216,%%xmm5,%%xmm5\n"					//11011000 = 216
				"movdqa %%xmm3,%%xmm4\n"
				"punpckldq %%xmm5,%%xmm3\n"				//lower 32-bit of a*, b*, c*, d*
				"punpckhdq %%xmm5,%%xmm4\n"				//higher 32-bit of a*, b*, c*, d*

				"movdqa %%xmm3,%%xmm5\n"
				"pand %%xmm0,%%xmm5\n"					//a0,b0,c0,d0->xmm5
				"movdqa %%xmm3,%%xmm6\n"
				"psrld $14,%%xmm6\n"
				"pand %%xmm0,%%xmm6\n"					//a1,b1,c1,d1->xmm6
				"movdqa %%xmm3,%%xmm7\n"
				"psrld $28,%%xmm7\n"
				"movdqa %%xmm4,%%xmm9\n"
				"pslld $4,%%xmm9\n"
				"pand %%xmm0,%%xmm9\n"
				"por %%xmm9,%%xmm7\n"					//a2,b2,c2,d2->xmm7
				"movdqa %%xmm4,%%xmm8\n"
				"psrld $10,%%xmm8\n"
				"pand %%xmm0,%%xmm8\n"					//a3,b3,c3,d3->xmm8

				"movdqu %%xmm5,%0\n"
				"movdqu %%xmm6,%1\n"
				"movdqu %%xmm7,%2\n"
				"movdqu %%xmm8,%3\n"

				:"=m" (dest[0]),"=m" (dest[4]),"=m" (dest[8]),"=m" (dest[12])
				:"m" (srcChar[0]),"m" (srcChar[14])
				:"memory");
	}
}

static const struct unpack_svl_shfl_15_0{
int8_t a[16];
}unpack_svl_shfl_15_0 __attribute__((aligned(16))) = {{0, 1, 2, 3, 4, 5, 6, 7, 7, 8, 9, 10, 11, 12, 13, 14},};
static const struct unpack_svl_and_15_0{
int16_t a[8];
}unpack_svl_and_15_0 __attribute__((aligned(16))) = {{0x7fff,0,0x7fff,0,0x7fff,0,0x7fff,0},};

template<typename T>
void simd_unpack_svl15(T* dest, const uint32_t *src, int blockSize) {
	__asm__("movdqa %0,%%xmm0\n"//and_0
			"movdqa %1,%%xmm1\n"//shfl_0
			 ::"m" (unpack_svl_and_15_0.a[0]),"m" (unpack_svl_shfl_15_0.a[0]));

	uint8_t *srcChar = (uint8_t*)src;
	for (int i = 0; i < blockSize; i += 16, srcChar += 30,dest+=16)
	{
		__asm__ volatile("prefetchnta %0"::"m" (srcChar[0]));
		__asm__("movdqu %4,%%xmm3\n"            		//a0-b3->xmm3
				"movdqu %5,%%xmm4\n"            		//c0-d3->xmm4
				"pshufb %%xmm1,%%xmm3\n"				//b0-b3->8 byte aligned
				"pshufb %%xmm1,%%xmm4\n"				//d0-d3->8 byte aligned
				"movdqa %%xmm3,%%xmm5\n"
				"punpcklqdq %%xmm4,%%xmm3\n"			//a0-a3,c0-c3->8 byte aligned
				"punpckhqdq %%xmm4,%%xmm5\n"			//b0-b3,d0-d3->8 byte aligned
				"psrlq $4,%%xmm5\n"

				"pshufd $216,%%xmm3,%%xmm3\n"					//swap 1st and 2nd 32-bit word (base 0)
				"pshufd $216,%%xmm5,%%xmm5\n"					//11011000 = 216
				"movdqa %%xmm3,%%xmm4\n"
				"punpckldq %%xmm5,%%xmm3\n"				//lower 32-bit of a*, b*, c*, d*
				"punpckhdq %%xmm5,%%xmm4\n"				//higher 32-bit of a*, b*, c*, d*

				"movdqa %%xmm3,%%xmm5\n"
				"pand %%xmm0,%%xmm5\n"					//a0,b0,c0,d0->xmm5
				"movdqa %%xmm3,%%xmm6\n"
				"psrld $15,%%xmm6\n"
				"pand %%xmm0,%%xmm6\n"					//a1,b1,c1,d1->xmm6
				"movdqa %%xmm3,%%xmm7\n"
				"psrld $30,%%xmm7\n"
				"movdqa %%xmm4,%%xmm9\n"
				"pslld $2,%%xmm9\n"
				"pand %%xmm0,%%xmm9\n"
				"por %%xmm9,%%xmm7\n"					//a2,b2,c2,d2->xmm7
				"movdqa %%xmm4,%%xmm8\n"
				"psrld $13,%%xmm8\n"
				"pand %%xmm0,%%xmm8\n"					//a3,b3,c3,d3->xmm8

				"movdqu %%xmm5,%0\n"
				"movdqu %%xmm6,%1\n"
				"movdqu %%xmm7,%2\n"
				"movdqu %%xmm8,%3\n"

				:"=m" (dest[0]),"=m" (dest[4]),"=m" (dest[8]),"=m" (dest[12])
				:"m" (srcChar[0]),"m" (srcChar[15])
				:"memory");
	}
}

static const struct unpack_svl_and_16_0{
int16_t a[8];
}unpack_svl_and_16_0 __attribute__((aligned(16))) = {{0xffff,0,0xffff,0,0xffff,0,0xffff,0},};

template<typename T>
void simd_unpack_svl16(T* dest, const uint32_t *src, int blockSize) {
	__asm__("movdqa %0,%%xmm0\n"//and_0
			 ::"m" (unpack_svl_and_16_0.a[0]));

	uint8_t *srcChar = (uint8_t*)src;
	for (int i = 0; i < blockSize; i += 16, srcChar += 32,dest+=16)
	{
		__asm__ volatile("prefetchnta %0"::"m" (srcChar[0]));
		__asm__("movdqu %4,%%xmm3\n"            		//a0-b3->xmm3
				"movdqu %5,%%xmm4\n"            		//c0-d3->xmm4
				"movdqa %%xmm3,%%xmm5\n"
				"punpcklqdq %%xmm4,%%xmm3\n"			//a0-a3,c0-c3->8 byte aligned
				"punpckhqdq %%xmm4,%%xmm5\n"			//b0-b3,d0-d3->8 byte aligned

				"pshufd $216,%%xmm3,%%xmm3\n"					//swap 1st and 2nd 32-bit word (base 0)
				"pshufd $216,%%xmm5,%%xmm5\n"					//11011000 = 216
				"movdqa %%xmm3,%%xmm4\n"
				"punpckldq %%xmm5,%%xmm3\n"				//lower 32-bit of a*, b*, c*, d*
				"punpckhdq %%xmm5,%%xmm4\n"				//higher 32-bit of a*, b*, c*, d*

				"movdqa %%xmm3,%%xmm5\n"
				"pand %%xmm0,%%xmm5\n"					//a0,b0,c0,d0->xmm5
				"psrld $16,%%xmm3\n"					//a1,b1,c1,d1->xmm3
				"movdqa %%xmm4,%%xmm6\n"
				"pand %%xmm0,%%xmm6\n"					//a2,b2,c2,d2->xmm6
				"psrld $16,%%xmm4\n"					//a3,b3,c3,d3->xmm4

				"movdqu %%xmm5,%0\n"
				"movdqu %%xmm3,%1\n"
				"movdqu %%xmm6,%2\n"
				"movdqu %%xmm4,%3\n"

				:"=m" (dest[0]),"=m" (dest[4]),"=m" (dest[8]),"=m" (dest[12])
				:"m" (srcChar[0]),"m" (srcChar[16])
				:"memory");
	}
}


template<typename T>
void simd_unpack_svl17(T * des, const uint32_t *src, int blockSize) {
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
void simd_unpack_svl18(T * des, const uint32_t *src, int blockSize) {
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
void simd_unpack_svl19(T * des, const uint32_t *src, int blockSize) {
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
void simd_unpack_svl20(T * des, const uint32_t *src, int blockSize) {
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
void simd_unpack_svl21(T * des, const uint32_t *src, int blockSize) {
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
void simd_unpack_svl22(T * des, const uint32_t *src, int blockSize) {
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
void simd_unpack_svl23(T * des, const uint32_t *src, int blockSize) {
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
void simd_unpack_svl24(T * des, const uint32_t *src, int blockSize) {
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
void simd_unpack_svl25(T * des, const uint32_t *src, int blockSize) {
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
void simd_unpack_svl26(T * des, const uint32_t *src, int blockSize) {
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
void simd_unpack_svl27(T * des, const uint32_t *src, int blockSize) {
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
void simd_unpack_svl28(T * des, const uint32_t *src, int blockSize) {
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
void simd_unpack_svl29(T * des, const uint32_t *src, int blockSize) {
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
void simd_unpack_svl30(T * des, const uint32_t *src, int blockSize) {
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
void simd_unpack_svl31(T * des, const uint32_t *src, int blockSize) {
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
void simd_unpack_svl32(T * des, const uint32_t *src, int blockSize) {
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

#endif /* SIMD_UNPACK_SVL_HPP_ */
