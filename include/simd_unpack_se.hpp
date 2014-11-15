/*
 * simd_unpack_seIntelParallel.hpp
 * block的块解压，每次解压32个数
 * 需要Intel的CPU
 */

#ifndef SIMD_UNPACK_SE_HPP_
#define SIMD_UNPACK_SE_HPP_

#ifdef USE_SSE_INSTRUCTION

namespace paradise {
namespace index {
template<typename T>
void simd_unpack_se0(T * des, const uint32_t *src, int blockSize) {
	int i;
	for (i = 0; i < blockSize; i++)
		des[i] = 0;
}
/*
static const struct unpack_se_shfl_1_0{	//for ax, cx, ex, gx or bx, dx, fx, gx (x=0,1,2,3)
int8_t a[16];
}unpack_se_shfl_1_0 __attribute__((aligned(16))) = {{0,0xff,0xff,0xff,0,0xff,0xff,0xff,0,0xff,0xff,0xff,0,0xff,0xff,0xff},};
static const struct unpack_se_mul_1_0{
uint32_t a[4];
}unpack_se_mul_1_0 __attribute__((aligned(16))) = {{0x80000000, 0x40000000, 0x20000000, 0x10000000},};

template<typename T>
void simd_unpack_se1(T* dest, const uint32_t *src, int blockSize)
{
	__asm__("movdqa %0,%%xmm0\n"//shfl_0
			"movdqa %1,%%xmm1\n"//and_0
			 ::"m" (unpack_se_shfl_1_0.a[0]),"m" (unpack_se_mul_1_0.a[0]));

	uint8_t *srcChar = (uint8_t*)src;

	for (int i = 0; i < blockSize; i += 8, srcChar += 1,dest+=8)
	{
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		__asm__("movdqu %2,%%xmm4\n"
				"movdqa %%xmm4,%%xmm5\n"
				"pshufb %%xmm0,%%xmm4\n"
				"pmulld %%xmm1,%%xmm4\n"
				"psrld $31,%%xmm4\n"			//a0-a3
				"movdqu %%xmm4,%0\n"
				"pshufb %%xmm0,%%xmm5\n"
				"psrld $4,%%xmm5\n"
				"pmulld %%xmm1,%%xmm5\n"
				"psrld $31,%%xmm5\n"			//b0-b3
				"movdqu %%xmm5,%1\n"

		:"=m" (dest[0]),"=m" (dest[4])
		:"m" (srcChar[0])
		:"memory");
	}
}
*/


static const struct unpack_se_mask_1_0{	//for ax, cx, ex, gx or bx, dx, fx, gx (x=0,1,2,3)
int8_t a[16];
}unpack_se_mask_1_0 __attribute__((aligned(16))) = {{0,0xff,0xff,0xff,1,0xff,0xff,0xff,2,0xff,0xff,0xff,3,0xff,0xff,0xff},};
static const struct unpack_se_and_1_0{
int16_t a[8];
}unpack_se_and_1_0 __attribute__((aligned(16))) = {{0x1,0,0x1,0,0x1,0,0x1,0},};

template<typename T>
void simd_unpack_se1(T* dest, const uint32_t *src, int blockSize)
{
	__asm__("movdqa %0,%%xmm0\n"//mask_0
			"movdqa %1,%%xmm1\n"//and_0
			 ::"m" (unpack_se_mask_1_0.a[0]),"m" (unpack_se_and_1_0.a[0]));

	for (int i = 0; i < blockSize; i += 32, src += 1,dest+=32)
	{
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		__asm__("movdqu %8,%%xmm7\n"            //src[0]->xmm7
		"movdqa %%xmm7,%%xmm8\n"                //save for future aligned move
		"movdqa %%xmm7,%%xmm9\n"
		"movdqa %%xmm7,%%xmm10\n"

		"movdqa %%xmm7,%%xmm15\n"				//save for b,d,f,h

		"pshufb %%xmm0,%%xmm7\n"                //shuffle a0,c0,e0,g0->xmm7
		"pand %%xmm1,%%xmm7\n"

		"pshufb %%xmm0,%%xmm8\n"                //shuffle a1,c1,e1,g1->xmm8
		"psrld $1,%%xmm8\n"
		"pand %%xmm1,%%xmm8\n"

		"pshufb %%xmm0,%%xmm9\n"                //shuffle a2,c2,e2,g2->xmm9
		"psrld $2,%%xmm9\n"
		"pand %%xmm1,%%xmm9\n"

		"pshufb %%xmm0,%%xmm10\n"               //shuffle a3,c3,e3,g3->xmm10
		"psrld $3,%%xmm10\n"
		"pand %%xmm1,%%xmm10\n"

		"movdqa %%xmm7,%%xmm11\n"
		"movdqa %%xmm8,%%xmm12\n"
		"punpckldq %%xmm9, %%xmm7\n"            //a0,a2,c0,c2->xmm7
		"punpckhdq %%xmm9, %%xmm11\n"           //e0,e2,g0,g2->xmm11
		"punpckldq %%xmm10, %%xmm8\n"           //a1,a3,c1,c3->xmm8
		"punpckhdq %%xmm10, %%xmm12\n"          //e1,e3,g1,g3->xmm12
				//now xmm9 and xmm10 are unused
		"movdqa %%xmm7, %%xmm9\n"
		"punpckldq %%xmm8, %%xmm7\n"            //a0,a1,a2,a3->xmm7
		"movdqu %%xmm7,%0\n"                    //save output
		"punpckhdq %%xmm8, %%xmm9\n"            //c0,c1,c2,c3->xmm9
		"movdqu %%xmm9,%2\n"                    //save output
		"movdqa %%xmm11, %%xmm10\n"
		"punpckldq %%xmm12, %%xmm11\n"          //e0,e1,e2,e3->xmm11
		"movdqu %%xmm11,%4\n"                   //save output
		"punpckhdq %%xmm12, %%xmm10\n"          //g0,g1,g2,g3->xmm10
		"movdqu %%xmm10,%6\n"                   //save output
				//deal with b,d,f,h
		"movdqa %%xmm15,%%xmm7\n"
		"movdqa %%xmm7,%%xmm8\n"
		"movdqa %%xmm7,%%xmm9\n"
		"movdqa %%xmm7,%%xmm10\n"

		"pshufb %%xmm0,%%xmm7\n"                //shuffle b0,d0,f0,h0->xmm7
		"psrld $4,%%xmm7\n"
		"pand %%xmm1,%%xmm7\n"

		"pshufb %%xmm0,%%xmm8\n"                //shuffle b1,d1,f1,h1->xmm8
		"psrld $5,%%xmm8\n"
		"pand %%xmm1,%%xmm8\n"

		"pshufb %%xmm0,%%xmm9\n"                //shuffle b2,d2,f2,h2->xmm9
		"psrld $6,%%xmm9\n"
		"pand %%xmm1,%%xmm9\n"

		"pshufb %%xmm0,%%xmm10\n"                //shuffle b3,d3,f3,h3->xmm10
		"psrld $7,%%xmm10\n"
		"pand %%xmm1,%%xmm10\n"

		"movdqa %%xmm7,%%xmm11\n"
		"movdqa %%xmm8,%%xmm12\n"
		"punpckldq %%xmm9, %%xmm7\n"            //b0,b2,d0,d2->xmm7
		"punpckhdq %%xmm9, %%xmm11\n"           //f0,f2,h0,h2->xmm11
		"punpckldq %%xmm10, %%xmm8\n"           //b1,b3,d1,d3->xmm8
		"punpckhdq %%xmm10, %%xmm12\n"          //f1,f3,f1,f3->xmm12
				//now xmm9 and xmm10 are unused
		"movdqa %%xmm7, %%xmm9\n"
		"punpckldq %%xmm8, %%xmm7\n"            //b0,b1,b2,b3->xmm7
		"movdqu %%xmm7,%1\n"                    //save output
		"punpckhdq %%xmm8, %%xmm9\n"            //d0,d1,d2,d3->xmm9
		"movdqu %%xmm9,%3\n"                    //save output
		"movdqa %%xmm11, %%xmm10\n"
		"punpckldq %%xmm12, %%xmm11\n"          //f0,f1,f2,f3->xmm11
		"movdqu %%xmm11,%5\n"                   //save output
		"punpckhdq %%xmm12, %%xmm10\n"          //h0,h1,h2,h3->xmm10
		"movdqu %%xmm10,%7\n"                   //save output

		:"=m" (dest[0]),"=m" (dest[4]),"=m" (dest[8]),"=m" (dest[12]),"=m" (dest[16]),"=m" (dest[20]),"=m" (dest[24]),"=m" (dest[28])
		:"m" (src[0])
		:"memory");
	}
}


/*
template<typename T>
void simd_unpack_se1(T * des, const uint32_t *src, int blockSize) {
	int i;
	for (i = 0; i < blockSize; i += 32, des += 32, src += 1) {
		des[0] = src[0] & 1;
		des[1] = (src[0] >> 1) & 1;
		des[2] = (src[0] >> 2) & 1;
		des[3] = (src[0] >> 3) & 1;
		des[4] = (src[0] >> 4) & 1;
		des[5] = (src[0] >> 5) & 1;
		des[6] = (src[0] >> 6) & 1;
		des[7] = (src[0] >> 7) & 1;
		des[8] = (src[0] >> 8) & 1;
		des[9] = (src[0] >> 9) & 1;
		des[10] = (src[0] >> 10) & 1;
		des[11] = (src[0] >> 11) & 1;
		des[12] = (src[0] >> 12) & 1;
		des[13] = (src[0] >> 13) & 1;
		des[14] = (src[0] >> 14) & 1;
		des[15] = (src[0] >> 15) & 1;
		des[16] = (src[0] >> 16) & 1;
		des[17] = (src[0] >> 17) & 1;
		des[18] = (src[0] >> 18) & 1;
		des[19] = (src[0] >> 19) & 1;
		des[20] = (src[0] >> 20) & 1;
		des[21] = (src[0] >> 21) & 1;
		des[22] = (src[0] >> 22) & 1;
		des[23] = (src[0] >> 23) & 1;
		des[24] = (src[0] >> 24) & 1;
		des[25] = (src[0] >> 25) & 1;
		des[26] = (src[0] >> 26) & 1;
		des[27] = (src[0] >> 27) & 1;
		des[28] = (src[0] >> 28) & 1;
		des[29] = (src[0] >> 29) & 1;
		des[30] = (src[0] >> 30) & 1;
		des[31] = (src[0] >> 31) & 1;
	}
}
*/

static const struct unpack_se_shfl_2_0{	//a0-d3 -> a0-a3(0-2byte), c0-c3(4-6byte)
int8_t a[16];
}unpack_se_shfl_2_0 __attribute__((aligned(16))) = {{0, 0xff, 0xff, 0xff, 2, 0xff, 0xff, 0xff, 1, 0xff, 0xff, 0xff, 3, 0xff, 0xff, 0xff},};
static const struct unpack_se_and_2_0{
int16_t a[8];
}unpack_se_and_2_0 __attribute__((aligned(16))) = {{0x3,0,0x3,0,0x3,0,0x3,0},};

template<typename T>
void simd_unpack_se2(T* dest, const uint32_t *src, int blockSize)
{
	__asm__("movdqa %0,%%xmm0\n"//shfl_0
			"movdqa %1,%%xmm1\n"//and_0
			 ::"m" (unpack_se_shfl_2_0.a[0]),"m" (unpack_se_and_2_0.a[0]));

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

				"pand %%xmm1,%%xmm5\n"					//a0,c0,b0,d0->xmm5
				"psrld $2,%%xmm6\n"
				"pand %%xmm1,%%xmm6\n"					//a1,c1,b1,d1->xmm6
				"psrld $4,%%xmm7\n"
				"pand %%xmm1,%%xmm7\n"					//a2,c2,b2,d2->xmm7
				"psrld $6,%%xmm8\n"
				"pand %%xmm1,%%xmm8\n"					//a3,c3,b3,d3->xmm8

				"movdqa %%xmm5,%%xmm9\n"
				"punpckldq %%xmm7, %%xmm5\n"			//a0,a2,c0,c2->xmm5
				"punpckhdq %%xmm7, %%xmm9\n"			//b0,b2,d0,d2->xmm9
				"movdqa %%xmm6,%%xmm10\n"
				"punpckldq %%xmm8, %%xmm6\n"			//a1,a3,c1,c3->xmm6
				"punpckhdq %%xmm8, %%xmm10\n"			//b1,b3,d1,d3->xmm10
					//now xmm7 and xmm8 are useless
				"movdqa %%xmm5,%%xmm7\n"
				"punpckldq %%xmm6, %%xmm5\n"			//a0,a1,a2,a3->xmm5
				"movdqu %%xmm5,%0\n"                   //save output
				"punpckhdq %%xmm6, %%xmm7\n"			//c0,c1,c2,c3->xmm7
				"movdqu %%xmm7,%2\n"                   //save output
				"movdqa %%xmm9,%%xmm8\n"
				"punpckldq %%xmm10, %%xmm8\n"			//b0,b1,b2,b3->xmm8
				"movdqu %%xmm8,%1\n"                   //save output
				"punpckhdq %%xmm10, %%xmm9\n"			//d0,d1,d2,d3->xmm9
				"movdqu %%xmm9,%3\n"                   //save output

				:"=m" (dest[0]),"=m" (dest[4]),"=m" (dest[8]),"=m" (dest[12])
				:"m" (srcChar[0])
				:"memory");
	}
}
/*
template<typename T>
void simd_unpack_se2(T * des, const uint32_t *src, int blockSize) {
	int i;
	for (i = 0; i < blockSize; i += 32, des += 32, src += 2) {
		des[0] = src[0] & 3;
		des[1] = (src[0] >> 2) & 3;
		des[2] = (src[0] >> 4) & 3;
		des[3] = (src[0] >> 6) & 3;
		des[4] = (src[0] >> 8) & 3;
		des[5] = (src[0] >> 10) & 3;
		des[6] = (src[0] >> 12) & 3;
		des[7] = (src[0] >> 14) & 3;
		des[8] = (src[0] >> 16) & 3;
		des[9] = (src[0] >> 18) & 3;
		des[10] = (src[0] >> 20) & 3;
		des[11] = (src[0] >> 22) & 3;
		des[12] = (src[0] >> 24) & 3;
		des[13] = (src[0] >> 26) & 3;
		des[14] = (src[0] >> 28) & 3;
		des[15] = (src[0] >> 30) & 3;
		des[16] = src[1] & 3;
		des[17] = (src[1] >> 2) & 3;
		des[18] = (src[1] >> 4) & 3;
		des[19] = (src[1] >> 6) & 3;
		des[20] = (src[1] >> 8) & 3;
		des[21] = (src[1] >> 10) & 3;
		des[22] = (src[1] >> 12) & 3;
		des[23] = (src[1] >> 14) & 3;
		des[24] = (src[1] >> 16) & 3;
		des[25] = (src[1] >> 18) & 3;
		des[26] = (src[1] >> 20) & 3;
		des[27] = (src[1] >> 22) & 3;
		des[28] = (src[1] >> 24) & 3;
		des[29] = (src[1] >> 26) & 3;
		des[30] = (src[1] >> 28) & 3;
		des[31] = (src[1] >> 30) & 3;
	}
}
*/

static const struct unpack_se_shfl_3_0{	//a0-d3 -> a0-a3(0-1byte), c0-c3(4-5byte)
int8_t a[16];
}unpack_se_shfl_3_0 __attribute__((aligned(16))) = {{0, 1, 0xff, 0xff, 3, 4, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},};
static const struct unpack_se_shfl_3_1{	//a0-d3 -> b0-b3(0-1byte), d0-d3(4-5byte)
int8_t a[16];
}unpack_se_shfl_3_1 __attribute__((aligned(16))) = {{1, 2, 0xff, 0xff, 4, 5, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},};

static const struct unpack_se_and_3_0{
int16_t a[8];
}unpack_se_and_3_0 __attribute__((aligned(16))) = {{0x7,0,0x7,0,0x7,0,0x7,0},};

template<typename T>
void simd_unpack_se3(T* dest, const uint32_t *src, int blockSize)
{
	__asm__("movdqa %0,%%xmm0\n"//shfl_0
			"movdqa %1,%%xmm1\n"//shfl_1
			"movdqa %2,%%xmm2\n"//and_0
			 ::"m" (unpack_se_shfl_3_0.a[0]),"m" (unpack_se_shfl_3_1.a[0]),"m" (unpack_se_and_3_0.a[0]));

	uint8_t *srcChar = (uint8_t*)src;
	for (int i = 0; i < blockSize; i += 16, srcChar += 6,dest+=16)
	{
		__asm__ volatile("prefetchnta %0"::"m" (srcChar[0]));
		__asm__("movdqu %4,%%xmm5\n"            		//src[0]->xmm5
					//process a0-d3
				"movdqa %%xmm5,%%xmm6\n"
				"pshufb %%xmm0,%%xmm5\n"				//a0-a3(0-2byte), c0-c3(4-6byte)->xmm5
				"pshufb %%xmm1,%%xmm6\n"				//b0-b3(0-2byte), d0-d3(4-6byte)->xmm6
				"psrld $4,%%xmm6\n"
				"movlhps %%xmm6,%%xmm5\n"				//a0-a3(0-2byte), c0-c3(4-6byte), b0-b3(8-10byte), d0-d3(12-14byte)->xmm5
					//now xmm6 is useless
				"movdqa %%xmm5,%%xmm6\n"
				"movdqa %%xmm5,%%xmm7\n"
				"movdqa %%xmm5,%%xmm8\n"

				"pand %%xmm2,%%xmm5\n"					//a0,c0,b0,d0->xmm5
				"psrld $3,%%xmm6\n"
				"pand %%xmm2,%%xmm6\n"					//a1,c1,b1,d1->xmm6
				"psrld $6,%%xmm7\n"
				"pand %%xmm2,%%xmm7\n"					//a2,c2,b2,d2->xmm7
				"psrld $9,%%xmm8\n"
				"pand %%xmm2,%%xmm8\n"					//a3,c3,b3,d3->xmm8

				"movdqa %%xmm5,%%xmm9\n"
				"punpckldq %%xmm7, %%xmm5\n"			//a0,a2,c0,c2->xmm5
				"punpckhdq %%xmm7, %%xmm9\n"			//b0,b2,d0,d2->xmm9
				"movdqa %%xmm6,%%xmm10\n"
				"punpckldq %%xmm8, %%xmm6\n"			//a1,a3,c1,c3->xmm6
				"punpckhdq %%xmm8, %%xmm10\n"			//b1,b3,d1,d3->xmm10
					//now xmm7 and xmm8 are useless
				"movdqa %%xmm5,%%xmm7\n"
				"punpckldq %%xmm6, %%xmm5\n"			//a0,a1,a2,a3->xmm5
				"movdqu %%xmm5,%0\n"                   //save output
				"punpckhdq %%xmm6, %%xmm7\n"			//c0,c1,c2,c3->xmm7
				"movdqu %%xmm7,%2\n"                   //save output
				"movdqa %%xmm9,%%xmm8\n"
				"punpckldq %%xmm10, %%xmm8\n"			//b0,b1,b2,b3->xmm8
				"movdqu %%xmm8,%1\n"                   //save output
				"punpckhdq %%xmm10, %%xmm9\n"			//d0,d1,d2,d3->xmm9
				"movdqu %%xmm9,%3\n"                   //save output

				:"=m" (dest[0]),"=m" (dest[4]),"=m" (dest[8]),"=m" (dest[12])
				:"m" (srcChar[0])
				:"memory");
	}
}
/*
template<typename T>
void simd_unpack_se3(T * des, const uint32_t *src, int blockSize) {
	int i;
	for (i = 0; i < blockSize; i += 32, des += 32, src += 3) {
		des[0] = src[0] & 7;
		des[1] = (src[0] >> 3) & 7;
		des[2] = (src[0] >> 6) & 7;
		des[3] = (src[0] >> 9) & 7;
		des[4] = (src[0] >> 12) & 7;
		des[5] = (src[0] >> 15) & 7;
		des[6] = (src[0] >> 18) & 7;
		des[7] = (src[0] >> 21) & 7;
		des[8] = (src[0] >> 24) & 7;
		des[9] = (src[0] >> 27) & 7;
		des[10] = (src[0] >> 30) & 7;
		des[10] |= (src[1] << 2) & 7;
		des[11] = (src[1] >> 1) & 7;
		des[12] = (src[1] >> 4) & 7;
		des[13] = (src[1] >> 7) & 7;
		des[14] = (src[1] >> 10) & 7;
		des[15] = (src[1] >> 13) & 7;
		des[16] = (src[1] >> 16) & 7;
		des[17] = (src[1] >> 19) & 7;
		des[18] = (src[1] >> 22) & 7;
		des[19] = (src[1] >> 25) & 7;
		des[20] = (src[1] >> 28) & 7;
		des[21] = (src[1] >> 31) & 7;
		des[21] |= (src[2] << 1) & 7;
		des[22] = (src[2] >> 2) & 7;
		des[23] = (src[2] >> 5) & 7;
		des[24] = (src[2] >> 8) & 7;
		des[25] = (src[2] >> 11) & 7;
		des[26] = (src[2] >> 14) & 7;
		des[27] = (src[2] >> 17) & 7;
		des[28] = (src[2] >> 20) & 7;
		des[29] = (src[2] >> 23) & 7;
		des[30] = (src[2] >> 26) & 7;
		des[31] = (src[2] >> 29) & 7;
	}
}
*/

//asm volatile("sfence" : : : "memory");


static const struct unpack_se_shfl_4_0{	//a0-d3 -> a0-a3(0-2byte), c0-c3(4-6byte)
int8_t a[16];
}unpack_se_shfl_4_0 __attribute__((aligned(16))) = {{0, 1, 0xff, 0xff, 4, 5, 0xff, 0xff, 2, 3, 0xff, 0xff, 6, 7, 0xff, 0xff},};
static const struct unpack_se_and_4_0{
int16_t a[8];
}unpack_se_and_4_0 __attribute__((aligned(16))) = {{0xf,0,0xf,0,0xf,0,0xf,0},};

template<typename T>
void simd_unpack_se4(T* dest, const uint32_t *src, int blockSize)
{
	__asm__("movdqa %0,%%xmm0\n"//shfl_0
			"movdqa %1,%%xmm1\n"//and_0
			 ::"m" (unpack_se_shfl_4_0.a[0]),"m" (unpack_se_and_4_0.a[0]));

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

				"pand %%xmm1,%%xmm5\n"					//a0,c0,b0,d0->xmm5
				"psrld $4,%%xmm6\n"
				"pand %%xmm1,%%xmm6\n"					//a1,c1,b1,d1->xmm6
				"psrld $8,%%xmm7\n"
				"pand %%xmm1,%%xmm7\n"					//a2,c2,b2,d2->xmm7
				"psrld $12,%%xmm8\n"
				"pand %%xmm1,%%xmm8\n"					//a3,c3,b3,d3->xmm8

				"movdqa %%xmm5,%%xmm9\n"
				"punpckldq %%xmm7, %%xmm5\n"			//a0,a2,c0,c2->xmm5
				"punpckhdq %%xmm7, %%xmm9\n"			//b0,b2,d0,d2->xmm9
				"movdqa %%xmm6,%%xmm10\n"
				"punpckldq %%xmm8, %%xmm6\n"			//a1,a3,c1,c3->xmm6
				"punpckhdq %%xmm8, %%xmm10\n"			//b1,b3,d1,d3->xmm10
					//now xmm7 and xmm8 are useless
				"movdqa %%xmm5,%%xmm7\n"
				"punpckldq %%xmm6, %%xmm5\n"			//a0,a1,a2,a3->xmm5
				"movdqu %%xmm5,%0\n"                   //save output
				"punpckhdq %%xmm6, %%xmm7\n"			//c0,c1,c2,c3->xmm7
				"movdqu %%xmm7,%2\n"                   //save output
				"movdqa %%xmm9,%%xmm8\n"
				"punpckldq %%xmm10, %%xmm8\n"			//b0,b1,b2,b3->xmm8
				"movdqu %%xmm8,%1\n"                   //save output
				"punpckhdq %%xmm10, %%xmm9\n"			//d0,d1,d2,d3->xmm9
				"movdqu %%xmm9,%3\n"                   //save output

				:"=m" (dest[0]),"=m" (dest[4]),"=m" (dest[8]),"=m" (dest[12])
				:"m" (srcChar[0])
				:"memory");
	}
}

/*
template<typename T>
void simd_unpack_se4(T * des, const uint32_t *src, int blockSize) {
	int i;
	for (i = 0; i < blockSize; i += 32, des += 32, src += 4) {
		des[0] = src[0] & 15;
		des[1] = (src[0] >> 4) & 15;
		des[2] = (src[0] >> 8) & 15;
		des[3] = (src[0] >> 12) & 15;
		des[4] = (src[0] >> 16) & 15;
		des[5] = (src[0] >> 20) & 15;
		des[6] = (src[0] >> 24) & 15;
		des[7] = (src[0] >> 28) & 15;
		des[8] = src[1] & 15;
		des[9] = (src[1] >> 4) & 15;
		des[10] = (src[1] >> 8) & 15;
		des[11] = (src[1] >> 12) & 15;
		des[12] = (src[1] >> 16) & 15;
		des[13] = (src[1] >> 20) & 15;
		des[14] = (src[1] >> 24) & 15;
		des[15] = (src[1] >> 28) & 15;
		des[16] = src[2] & 15;
		des[17] = (src[2] >> 4) & 15;
		des[18] = (src[2] >> 8) & 15;
		des[19] = (src[2] >> 12) & 15;
		des[20] = (src[2] >> 16) & 15;
		des[21] = (src[2] >> 20) & 15;
		des[22] = (src[2] >> 24) & 15;
		des[23] = (src[2] >> 28) & 15;
		des[24] = src[3] & 15;
		des[25] = (src[3] >> 4) & 15;
		des[26] = (src[3] >> 8) & 15;
		des[27] = (src[3] >> 12) & 15;
		des[28] = (src[3] >> 16) & 15;
		des[29] = (src[3] >> 20) & 15;
		des[30] = (src[3] >> 24) & 15;
		des[31] = (src[3] >> 28) & 15;
	}
}
*/

static const struct unpack_se_shfl_5_0{	//a0-d3 -> a0-a3(0-2byte), c0-c3(4-6byte)
int8_t a[16];
}unpack_se_shfl_5_0 __attribute__((aligned(16))) = {{0, 1, 2, 0xff, 5, 6, 7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},};
static const struct unpack_se_shfl_5_1{	//a0-d3 -> b0-b3(0-2byte), d0-d3(4-6byte)
int8_t a[16];
}unpack_se_shfl_5_1 __attribute__((aligned(16))) = {{2, 3, 4, 0xff, 7, 8, 9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},};

static const struct unpack_se_and_5_0{
int16_t a[8];
}unpack_se_and_5_0 __attribute__((aligned(16))) = {{0x1f,0,0x1f,0,0x1f,0,0x1f,0},};

template<typename T>
void simd_unpack_se5(T* dest, const uint32_t *src, int blockSize)
{
	__asm__("movdqa %0,%%xmm0\n"//shfl_0
			"movdqa %1,%%xmm1\n"//shfl_1
			"movdqa %2,%%xmm2\n"//and_0
			 ::"m" (unpack_se_shfl_5_0.a[0]),"m" (unpack_se_shfl_5_1.a[0]),"m" (unpack_se_and_5_0.a[0]));

	uint8_t *srcChar = (uint8_t*)src;
	for (int i = 0; i < blockSize; i += 16, srcChar += 10,dest+=16)
	{
		__asm__ volatile("prefetchnta %0"::"m" (srcChar[0]));
		__asm__("movdqu %4,%%xmm5\n"            		//src[0]->xmm5
					//process a0-d3
				"movdqa %%xmm5,%%xmm6\n"
				"pshufb %%xmm0,%%xmm5\n"				//a0-a3(0-2byte), c0-c3(4-6byte)->xmm5
				"pshufb %%xmm1,%%xmm6\n"				//b0-b3(0-2byte), d0-d3(4-6byte)->xmm6
				"psrld $4,%%xmm6\n"
				"movlhps %%xmm6,%%xmm5\n"				//a0-a3(0-2byte), c0-c3(4-6byte), b0-b3(8-10byte), d0-d3(12-14byte)->xmm5
					//now xmm6 is useless
				"movdqa %%xmm5,%%xmm6\n"
				"movdqa %%xmm5,%%xmm7\n"
				"movdqa %%xmm5,%%xmm8\n"

				"pand %%xmm2,%%xmm5\n"					//a0,c0,b0,d0->xmm5
				"psrld $5,%%xmm6\n"
				"pand %%xmm2,%%xmm6\n"					//a1,c1,b1,d1->xmm6
				"psrld $10,%%xmm7\n"
				"pand %%xmm2,%%xmm7\n"					//a2,c2,b2,d2->xmm7
				"psrld $15,%%xmm8\n"
				"pand %%xmm2,%%xmm8\n"					//a3,c3,b3,d3->xmm8

				"movdqa %%xmm5,%%xmm9\n"
				"punpckldq %%xmm7, %%xmm5\n"			//a0,a2,c0,c2->xmm5
				"punpckhdq %%xmm7, %%xmm9\n"			//b0,b2,d0,d2->xmm9
				"movdqa %%xmm6,%%xmm10\n"
				"punpckldq %%xmm8, %%xmm6\n"			//a1,a3,c1,c3->xmm6
				"punpckhdq %%xmm8, %%xmm10\n"			//b1,b3,d1,d3->xmm10
					//now xmm7 and xmm8 are useless
				"movdqa %%xmm5,%%xmm7\n"
				"punpckldq %%xmm6, %%xmm5\n"			//a0,a1,a2,a3->xmm5
				"movdqu %%xmm5,%0\n"                   //save output
				"punpckhdq %%xmm6, %%xmm7\n"			//c0,c1,c2,c3->xmm7
				"movdqu %%xmm7,%2\n"                   //save output
				"movdqa %%xmm9,%%xmm8\n"
				"punpckldq %%xmm10, %%xmm8\n"			//b0,b1,b2,b3->xmm8
				"movdqu %%xmm8,%1\n"                   //save output
				"punpckhdq %%xmm10, %%xmm9\n"			//d0,d1,d2,d3->xmm9
				"movdqu %%xmm9,%3\n"                   //save output

				:"=m" (dest[0]),"=m" (dest[4]),"=m" (dest[8]),"=m" (dest[12])
				:"m" (srcChar[0])
				:"memory");
	}
}

/*
template<typename T>
void simd_unpack_se5(T * des, const uint32_t *src, int blockSize) {
	int i;
	for (i = 0; i < blockSize; i += 32, des += 32, src += 5) {
		des[0] = src[0] & 31;
		des[1] = (src[0] >> 5) & 31;
		des[2] = (src[0] >> 10) & 31;
		des[3] = (src[0] >> 15) & 31;
		des[4] = (src[0] >> 20) & 31;
		des[5] = (src[0] >> 25) & 31;
		des[6] = (src[0] >> 30) & 31;
		des[6] |= (src[1] << 2) & 31;
		des[7] = (src[1] >> 3) & 31;
		des[8] = (src[1] >> 8) & 31;
		des[9] = (src[1] >> 13) & 31;
		des[10] = (src[1] >> 18) & 31;
		des[11] = (src[1] >> 23) & 31;
		des[12] = (src[1] >> 28) & 31;
		des[12] |= (src[2] << 4) & 31;
		des[13] = (src[2] >> 1) & 31;
		des[14] = (src[2] >> 6) & 31;
		des[15] = (src[2] >> 11) & 31;
		des[16] = (src[2] >> 16) & 31;
		des[17] = (src[2] >> 21) & 31;
		des[18] = (src[2] >> 26) & 31;
		des[19] = (src[2] >> 31) & 31;
		des[19] |= (src[3] << 1) & 31;
		des[20] = (src[3] >> 4) & 31;
		des[21] = (src[3] >> 9) & 31;
		des[22] = (src[3] >> 14) & 31;
		des[23] = (src[3] >> 19) & 31;
		des[24] = (src[3] >> 24) & 31;
		des[25] = (src[3] >> 29) & 31;
		des[25] |= (src[4] << 3) & 31;
		des[26] = (src[4] >> 2) & 31;
		des[27] = (src[4] >> 7) & 31;
		des[28] = (src[4] >> 12) & 31;
		des[29] = (src[4] >> 17) & 31;
		des[30] = (src[4] >> 22) & 31;
		des[31] = (src[4] >> 27) & 31;
	}
}
*/
static const struct unpack_se_shfl_6_0{	//a0-d3 -> a0-a3(0-2byte), c0-c3(4-6byte)
int8_t a[16];
}unpack_se_shfl_6_0 __attribute__((aligned(16))) = {{0, 1, 2, 0xff, 6, 7, 8, 0xff, 3, 4, 5, 0xff, 9, 10, 11, 0xff},};
static const struct unpack_se_and_6_0{
int16_t a[8];
}unpack_se_and_6_0 __attribute__((aligned(16))) = {{0x3f,0,0x3f,0,0x3f,0,0x3f,0},};

template<typename T>
void simd_unpack_se6(T* dest, const uint32_t *src, int blockSize)
{
	__asm__("movdqa %0,%%xmm0\n"//shfl_0
			"movdqa %1,%%xmm1\n"//and_0
			 ::"m" (unpack_se_shfl_6_0.a[0]),"m" (unpack_se_and_6_0.a[0]));

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

				"pand %%xmm1,%%xmm5\n"					//a0,c0,b0,d0->xmm5
				"psrld $6,%%xmm6\n"
				"pand %%xmm1,%%xmm6\n"					//a1,c1,b1,d1->xmm6
				"psrld $12,%%xmm7\n"
				"pand %%xmm1,%%xmm7\n"					//a2,c2,b2,d2->xmm7
				"psrld $18,%%xmm8\n"
				"pand %%xmm1,%%xmm8\n"					//a3,c3,b3,d3->xmm8

				"movdqa %%xmm5,%%xmm9\n"
				"punpckldq %%xmm7, %%xmm5\n"			//a0,a2,c0,c2->xmm5
				"punpckhdq %%xmm7, %%xmm9\n"			//b0,b2,d0,d2->xmm9
				"movdqa %%xmm6,%%xmm10\n"
				"punpckldq %%xmm8, %%xmm6\n"			//a1,a3,c1,c3->xmm6
				"punpckhdq %%xmm8, %%xmm10\n"			//b1,b3,d1,d3->xmm10
					//now xmm7 and xmm8 are useless
				"movdqa %%xmm5,%%xmm7\n"
				"punpckldq %%xmm6, %%xmm5\n"			//a0,a1,a2,a3->xmm5
				"movdqu %%xmm5,%0\n"                   //save output
				"punpckhdq %%xmm6, %%xmm7\n"			//c0,c1,c2,c3->xmm7
				"movdqu %%xmm7,%2\n"                   //save output
				"movdqa %%xmm9,%%xmm8\n"
				"punpckldq %%xmm10, %%xmm8\n"			//b0,b1,b2,b3->xmm8
				"movdqu %%xmm8,%1\n"                   //save output
				"punpckhdq %%xmm10, %%xmm9\n"			//d0,d1,d2,d3->xmm9
				"movdqu %%xmm9,%3\n"                   //save output

				:"=m" (dest[0]),"=m" (dest[4]),"=m" (dest[8]),"=m" (dest[12])
				:"m" (srcChar[0])
				:"memory");
	}
}

/*
template<typename T>
void simd_unpack_se6(T * des, const uint32_t *src, int blockSize) {
	int i;
	for (i = 0; i < blockSize; i += 32, des += 32, src += 6) {
		des[0] = src[0] & 63;
		des[1] = (src[0] >> 6) & 63;
		des[2] = (src[0] >> 12) & 63;
		des[3] = (src[0] >> 18) & 63;
		des[4] = (src[0] >> 24) & 63;
		des[5] = (src[0] >> 30) & 63;
		des[5] |= (src[1] << 2) & 63;
		des[6] = (src[1] >> 4) & 63;
		des[7] = (src[1] >> 10) & 63;
		des[8] = (src[1] >> 16) & 63;
		des[9] = (src[1] >> 22) & 63;
		des[10] = (src[1] >> 28) & 63;
		des[10] |= (src[2] << 4) & 63;
		des[11] = (src[2] >> 2) & 63;
		des[12] = (src[2] >> 8) & 63;
		des[13] = (src[2] >> 14) & 63;
		des[14] = (src[2] >> 20) & 63;
		des[15] = (src[2] >> 26) & 63;
		des[16] = src[3] & 63;
		des[17] = (src[3] >> 6) & 63;
		des[18] = (src[3] >> 12) & 63;
		des[19] = (src[3] >> 18) & 63;
		des[20] = (src[3] >> 24) & 63;
		des[21] = (src[3] >> 30) & 63;
		des[21] |= (src[4] << 2) & 63;
		des[22] = (src[4] >> 4) & 63;
		des[23] = (src[4] >> 10) & 63;
		des[24] = (src[4] >> 16) & 63;
		des[25] = (src[4] >> 22) & 63;
		des[26] = (src[4] >> 28) & 63;
		des[26] |= (src[5] << 4) & 63;
		des[27] = (src[5] >> 2) & 63;
		des[28] = (src[5] >> 8) & 63;
		des[29] = (src[5] >> 14) & 63;
		des[30] = (src[5] >> 20) & 63;
		des[31] = (src[5] >> 26) & 63;
	}
}
*/

static const struct unpack_se_shfl_7_0{	//a0-d3 -> a0-a3(0-2byte), c0-c3(4-6byte)
int8_t a[16];
}unpack_se_shfl_7_0 __attribute__((aligned(16))) = {{0, 1, 2, 3, 7, 8, 9, 10, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},};
static const struct unpack_se_shfl_7_1{	//a0-d3 -> b0-b3(0-2byte), d0-d3(4-6byte)
int8_t a[16];
}unpack_se_shfl_7_1 __attribute__((aligned(16))) = {{3, 4, 5, 6, 10, 11, 12, 13, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},};

static const struct unpack_se_and_7_0{
int16_t a[8];
}unpack_se_and_7_0 __attribute__((aligned(16))) = {{0x7f,0,0x7f,0,0x7f,0,0x7f,0},};

template<typename T>
void simd_unpack_se7(T* dest, const uint32_t *src, int blockSize)
{
	__asm__("movdqa %0,%%xmm0\n"//shfl_0
			"movdqa %1,%%xmm1\n"//shfl_1
			"movdqa %2,%%xmm2\n"//and_0
			 ::"m" (unpack_se_shfl_7_0.a[0]),"m" (unpack_se_shfl_7_1.a[0]),"m" (unpack_se_and_7_0.a[0]));

	uint8_t *srcChar = (uint8_t*)src;
	for (int i = 0; i < blockSize; i += 16, srcChar += 14,dest+=16)
	{
		__asm__ volatile("prefetchnta %0"::"m" (srcChar[0]));
		__asm__("movdqu %4,%%xmm5\n"            		//src[0]->xmm5
					//process a0-d3
				"movdqa %%xmm5,%%xmm6\n"
				"pshufb %%xmm0,%%xmm5\n"				//a0-a3(0-2byte), c0-c3(4-6byte)->xmm5
				"pshufb %%xmm1,%%xmm6\n"				//b0-b3(0-2byte), d0-d3(4-6byte)->xmm6
				"psrld $4,%%xmm6\n"
				"movlhps %%xmm6,%%xmm5\n"				//a0-a3(0-2byte), c0-c3(4-6byte), b0-b3(8-10byte), d0-d3(12-14byte)->xmm5
					//now xmm6 is useless
				"movdqa %%xmm5,%%xmm6\n"
				"movdqa %%xmm5,%%xmm7\n"
				"movdqa %%xmm5,%%xmm8\n"

				"pand %%xmm2,%%xmm5\n"					//a0,c0,b0,d0->xmm5
				"psrld $7,%%xmm6\n"
				"pand %%xmm2,%%xmm6\n"					//a1,c1,b1,d1->xmm6
				"psrld $14,%%xmm7\n"
				"pand %%xmm2,%%xmm7\n"					//a2,c2,b2,d2->xmm7
				"psrld $21,%%xmm8\n"
				"pand %%xmm2,%%xmm8\n"					//a3,c3,b3,d3->xmm8

				"movdqa %%xmm5,%%xmm9\n"
				"punpckldq %%xmm7, %%xmm5\n"			//a0,a2,c0,c2->xmm5
				"punpckhdq %%xmm7, %%xmm9\n"			//b0,b2,d0,d2->xmm9
				"movdqa %%xmm6,%%xmm10\n"
				"punpckldq %%xmm8, %%xmm6\n"			//a1,a3,c1,c3->xmm6
				"punpckhdq %%xmm8, %%xmm10\n"			//b1,b3,d1,d3->xmm10
					//now xmm7 and xmm8 are useless
				"movdqa %%xmm5,%%xmm7\n"
				"punpckldq %%xmm6, %%xmm5\n"			//a0,a1,a2,a3->xmm5
				"movdqu %%xmm5,%0\n"                   //save output
				"punpckhdq %%xmm6, %%xmm7\n"			//c0,c1,c2,c3->xmm7
				"movdqu %%xmm7,%2\n"                   //save output
				"movdqa %%xmm9,%%xmm8\n"
				"punpckldq %%xmm10, %%xmm8\n"			//b0,b1,b2,b3->xmm8
				"movdqu %%xmm8,%1\n"                   //save output
				"punpckhdq %%xmm10, %%xmm9\n"			//d0,d1,d2,d3->xmm9
				"movdqu %%xmm9,%3\n"                   //save output

				:"=m" (dest[0]),"=m" (dest[4]),"=m" (dest[8]),"=m" (dest[12])
				:"m" (srcChar[0])
				:"memory");
	}
}

/*
template<typename T>
void simd_unpack_se7(T * des, const uint32_t *src, int blockSize) {
	int i;
	for (i = 0; i < blockSize; i += 32, des += 32, src += 7) {
		des[0] = src[0] & 127;
		des[1] = (src[0] >> 7) & 127;
		des[2] = (src[0] >> 14) & 127;
		des[3] = (src[0] >> 21) & 127;
		des[4] = (src[0] >> 28) & 127;
		des[4] |= (src[1] << 4) & 127;
		des[5] = (src[1] >> 3) & 127;
		des[6] = (src[1] >> 10) & 127;
		des[7] = (src[1] >> 17) & 127;
		des[8] = (src[1] >> 24) & 127;
		des[9] = (src[1] >> 31) & 127;
		des[9] |= (src[2] << 1) & 127;
		des[10] = (src[2] >> 6) & 127;
		des[11] = (src[2] >> 13) & 127;
		des[12] = (src[2] >> 20) & 127;
		des[13] = (src[2] >> 27) & 127;
		des[13] |= (src[3] << 5) & 127;
		des[14] = (src[3] >> 2) & 127;
		des[15] = (src[3] >> 9) & 127;
		des[16] = (src[3] >> 16) & 127;
		des[17] = (src[3] >> 23) & 127;
		des[18] = (src[3] >> 30) & 127;
		des[18] |= (src[4] << 2) & 127;
		des[19] = (src[4] >> 5) & 127;
		des[20] = (src[4] >> 12) & 127;
		des[21] = (src[4] >> 19) & 127;
		des[22] = (src[4] >> 26) & 127;
		des[22] |= (src[5] << 6) & 127;
		des[23] = (src[5] >> 1) & 127;
		des[24] = (src[5] >> 8) & 127;
		des[25] = (src[5] >> 15) & 127;
		des[26] = (src[5] >> 22) & 127;
		des[27] = (src[5] >> 29) & 127;
		des[27] |= (src[6] << 3) & 127;
		des[28] = (src[6] >> 4) & 127;
		des[29] = (src[6] >> 11) & 127;
		des[30] = (src[6] >> 18) & 127;
		des[31] = (src[6] >> 25) & 127;
	}
}
*/

static const struct unpack_se_shfl_8_0{	//a0, a1, a2, a3
int8_t a[16];
}unpack_se_shfl_8_0 __attribute__((aligned(16))) = {{0,0xff,0xff,0xff,1,0xff,0xff,0xff,2,0xff,0xff,0xff,3,0xff,0xff,0xff},};
static const struct unpack_se_shfl_8_1{	//b0, b1, b2, b3
int8_t a[16];
}unpack_se_shfl_8_1 __attribute__((aligned(16))) = {{4,0xff,0xff,0xff,5,0xff,0xff,0xff,6,0xff,0xff,0xff,7,0xff,0xff,0xff},};
static const struct unpack_se_shfl_8_2{	//c0, c1, c2, c3
int8_t a[16];
}unpack_se_shfl_8_2 __attribute__((aligned(16))) = {{8,0xff,0xff,0xff,9,0xff,0xff,0xff,10,0xff,0xff,0xff,11,0xff,0xff,0xff},};
static const struct unpack_se_shfl_8_3{	//d0, d1, d2, d3
int8_t a[16];
}unpack_se_shfl_8_3 __attribute__((aligned(16))) = {{12,0xff,0xff,0xff,13,0xff,0xff,0xff,14,0xff,0xff,0xff,15,0xff,0xff,0xff},};

template <typename T>
void simd_unpack_se8(T* dest, const uint32_t *src, int blockSize)
{
	__asm__("movdqa %0,%%xmm0\n"//unpack_se_shfl_0
			"movdqa %1,%%xmm1\n"//unpack_se_shfl_1
			"movdqa %2,%%xmm2\n"//unpack_se_shfl_2
			"movdqa %3,%%xmm3\n"//unpack_se_shfl_3
			 ::"m" (unpack_se_shfl_8_0.a[0]),"m" (unpack_se_shfl_8_1.a[0]),"m" (unpack_se_shfl_8_2.a[0]),"m" (unpack_se_shfl_8_3.a[0]));

	for (int i = 0; i < blockSize; i += 16, src += 4,dest+=16)
	{
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		__asm__("movdqu %4,%%xmm5\n"            		//src[0]->xmm5
				"movdqa %%xmm5,%%xmm6\n"                //save for future aligned move
				"movdqa %%xmm5,%%xmm7\n"
				"movdqa %%xmm5,%%xmm8\n"
				"pshufb %%xmm0,%%xmm5\n"                //shuffle a0,a1,a2,a3->xmm5
				"pshufb %%xmm1,%%xmm6\n"                //shuffle b0,b1,b2,b3->xmm6
				"pshufb %%xmm2,%%xmm7\n"                //shuffle c0,c1,c2,c3->xmm7
				"pshufb %%xmm3,%%xmm8\n"                //shuffle d0,d1,d2,d3->xmm8
				"movdqu %%xmm5,%0\n"                    //save output
				"movdqu %%xmm6,%1\n"                    //save output
				"movdqu %%xmm7,%2\n"                    //save output
				"movdqu %%xmm8,%3\n"                    //save output
				:"=m" (dest[0]),"=m" (dest[4]),"=m" (dest[8]),"=m" (dest[12])
				:"m" (src[0])
				:"memory");
	}
}

/*
template<typename T>
void simd_unpack_se8(T * des, const uint32_t *src, int blockSize) {
	int i;
	for (i = 0; i < blockSize; i += 32, des += 32, src += 8) {
		des[0] = src[0] & 255;
		des[1] = (src[0] >> 8) & 255;
		des[2] = (src[0] >> 16) & 255;
		des[3] = (src[0] >> 24) & 255;
		des[4] = src[1] & 255;
		des[5] = (src[1] >> 8) & 255;
		des[6] = (src[1] >> 16) & 255;
		des[7] = (src[1] >> 24) & 255;
		des[8] = src[2] & 255;
		des[9] = (src[2] >> 8) & 255;
		des[10] = (src[2] >> 16) & 255;
		des[11] = (src[2] >> 24) & 255;
		des[12] = src[3] & 255;
		des[13] = (src[3] >> 8) & 255;
		des[14] = (src[3] >> 16) & 255;
		des[15] = (src[3] >> 24) & 255;
		des[16] = src[4] & 255;
		des[17] = (src[4] >> 8) & 255;
		des[18] = (src[4] >> 16) & 255;
		des[19] = (src[4] >> 24) & 255;
		des[20] = src[5] & 255;
		des[21] = (src[5] >> 8) & 255;
		des[22] = (src[5] >> 16) & 255;
		des[23] = (src[5] >> 24) & 255;
		des[24] = src[6] & 255;
		des[25] = (src[6] >> 8) & 255;
		des[26] = (src[6] >> 16) & 255;
		des[27] = (src[6] >> 24) & 255;
		des[28] = src[7] & 255;
		des[29] = (src[7] >> 8) & 255;
		des[30] = (src[7] >> 16) & 255;
		des[31] = (src[7] >> 24) & 255;
	}
}
*/

static const struct unpack_se_shfl_9_0{
int8_t a[16];
}unpack_se_shfl_9_0 __attribute__((aligned(16))) = {{0, 1, 2, 3, 4, 0xff, 0xff, 0xff, 4, 5, 6, 7, 8, 0xff, 0xff, 0xff},};
static const struct unpack_se_and_9_0{
int16_t a[8];
}unpack_se_and_9_0 __attribute__((aligned(16))) = {{0x1ff,0,0x1ff,0,0x1ff,0,0x1ff,0},};

template<typename T>
void simd_unpack_se9(T* dest, const uint32_t *src, int blockSize) {
	__asm__("movdqa %0,%%xmm0\n"//and_0
			"movdqa %1,%%xmm1\n"//shfl_0
			 ::"m" (unpack_se_and_9_0.a[0]),"m" (unpack_se_shfl_9_0.a[0]));

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

				"movdqa %%xmm5,%%xmm9\n"
				"punpckldq %%xmm7, %%xmm5\n"			//a0,a2,b0,b2->xmm5
				"punpckhdq %%xmm7, %%xmm9\n"			//c0,c2,d0,d2->xmm9
				"movdqa %%xmm6,%%xmm10\n"
				"punpckldq %%xmm8, %%xmm6\n"			//a1,a3,b1,b3->xmm6
				"punpckhdq %%xmm8, %%xmm10\n"			//c1,c3,d1,d3->xmm10
					//now xmm7 and xmm8 are useless
				"movdqa %%xmm5,%%xmm7\n"
				"punpckldq %%xmm6, %%xmm5\n"			//a0,a1,a2,a3->xmm5
				"movdqu %%xmm5,%0\n"                   //save output
				"punpckhdq %%xmm6, %%xmm7\n"			//b0,b1,b2,b3->xmm7
				"movdqu %%xmm7,%1\n"                   //save output
				"movdqa %%xmm9,%%xmm8\n"
				"punpckldq %%xmm10, %%xmm8\n"			//c0,c1,c2,c3->xmm8
				"movdqu %%xmm8,%2\n"                   //save output
				"punpckhdq %%xmm10, %%xmm9\n"			//d0,d1,d2,d3->xmm9
				"movdqu %%xmm9,%3\n"                   //save output

				:"=m" (dest[0]),"=m" (dest[4]),"=m" (dest[8]),"=m" (dest[12])
				:"m" (srcChar[0]),"m" (srcChar[9])
				:"memory");
	}
}

static const struct unpack_se_shfl_10_0{
int8_t a[16];
}unpack_se_shfl_10_0 __attribute__((aligned(16))) = {{0, 1, 2, 3, 4, 0xff, 0xff, 0xff, 5, 6, 7, 8, 9, 0xff, 0xff, 0xff},};
static const struct unpack_se_and_10_0{
int16_t a[8];
}unpack_se_and_10_0 __attribute__((aligned(16))) = {{0x3ff,0,0x3ff,0,0x3ff,0,0x3ff,0},};

template<typename T>
void simd_unpack_se10(T * dest, const uint32_t *src, int blockSize) {
	__asm__("movdqa %0,%%xmm0\n"//and_0
			"movdqa %1,%%xmm1\n"//shfl_0
			 ::"m" (unpack_se_and_10_0.a[0]),"m" (unpack_se_shfl_10_0.a[0]));

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

				"movdqa %%xmm5,%%xmm9\n"
				"punpckldq %%xmm7, %%xmm5\n"			//a0,a2,b0,b2->xmm5
				"punpckhdq %%xmm7, %%xmm9\n"			//c0,c2,d0,d2->xmm9
				"movdqa %%xmm6,%%xmm10\n"
				"punpckldq %%xmm8, %%xmm6\n"			//a1,a3,b1,b3->xmm6
				"punpckhdq %%xmm8, %%xmm10\n"			//c1,c3,d1,d3->xmm10
					//now xmm7 and xmm8 are useless
				"movdqa %%xmm5,%%xmm7\n"
				"punpckldq %%xmm6, %%xmm5\n"			//a0,a1,a2,a3->xmm5
				"movdqu %%xmm5,%0\n"                   //save output
				"punpckhdq %%xmm6, %%xmm7\n"			//b0,b1,b2,b3->xmm7
				"movdqu %%xmm7,%1\n"                   //save output
				"movdqa %%xmm9,%%xmm8\n"
				"punpckldq %%xmm10, %%xmm8\n"			//c0,c1,c2,c3->xmm8
				"movdqu %%xmm8,%2\n"                   //save output
				"punpckhdq %%xmm10, %%xmm9\n"			//d0,d1,d2,d3->xmm9
				"movdqu %%xmm9,%3\n"                   //save output

				:"=m" (dest[0]),"=m" (dest[4]),"=m" (dest[8]),"=m" (dest[12])
				:"m" (srcChar[0]),"m" (srcChar[10])
				:"memory");
	}
}

static const struct unpack_se_shfl_11_0{
int8_t a[16];
}unpack_se_shfl_11_0 __attribute__((aligned(16))) = {{0, 1, 2, 3, 4, 5, 0xff, 0xff, 5, 6, 7, 8, 9, 10, 0xff, 0xff},};
static const struct unpack_se_and_11_0{
int16_t a[8];
}unpack_se_and_11_0 __attribute__((aligned(16))) = {{0x7ff,0,0x7ff,0,0x7ff,0,0x7ff,0},};

template<typename T>
void simd_unpack_se11(T* dest, const uint32_t *src, int blockSize) {
	__asm__("movdqa %0,%%xmm0\n"//and_0
			"movdqa %1,%%xmm1\n"//shfl_0
			 ::"m" (unpack_se_and_11_0.a[0]),"m" (unpack_se_shfl_11_0.a[0]));

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

				"movdqa %%xmm5,%%xmm9\n"
				"punpckldq %%xmm7, %%xmm5\n"			//a0,a2,b0,b2->xmm5
				"punpckhdq %%xmm7, %%xmm9\n"			//c0,c2,d0,d2->xmm9
				"movdqa %%xmm6,%%xmm10\n"
				"punpckldq %%xmm8, %%xmm6\n"			//a1,a3,b1,b3->xmm6
				"punpckhdq %%xmm8, %%xmm10\n"			//c1,c3,d1,d3->xmm10
					//now xmm7 and xmm8 are useless
				"movdqa %%xmm5,%%xmm7\n"
				"punpckldq %%xmm6, %%xmm5\n"			//a0,a1,a2,a3->xmm5
				"movdqu %%xmm5,%0\n"                   //save output
				"punpckhdq %%xmm6, %%xmm7\n"			//b0,b1,b2,b3->xmm7
				"movdqu %%xmm7,%1\n"                   //save output
				"movdqa %%xmm9,%%xmm8\n"
				"punpckldq %%xmm10, %%xmm8\n"			//c0,c1,c2,c3->xmm8
				"movdqu %%xmm8,%2\n"                   //save output
				"punpckhdq %%xmm10, %%xmm9\n"			//d0,d1,d2,d3->xmm9
				"movdqu %%xmm9,%3\n"                   //save output

				:"=m" (dest[0]),"=m" (dest[4]),"=m" (dest[8]),"=m" (dest[12])
				:"m" (srcChar[0]),"m" (srcChar[11])
				:"memory");
	}
}

static const struct unpack_se_shfl_12_0{
int8_t a[16];
}unpack_se_shfl_12_0 __attribute__((aligned(16))) = {{0, 1, 2, 3, 4, 5, 0xff, 0xff, 6, 7, 8, 9, 10, 11, 0xff, 0xff},};
static const struct unpack_se_and_12_0{
int16_t a[8];
}unpack_se_and_12_0 __attribute__((aligned(16))) = {{0xfff,0,0xfff,0,0xfff,0,0xfff,0},};

template<typename T>
void simd_unpack_se12(T* dest, const uint32_t *src, int blockSize) {
	__asm__("movdqa %0,%%xmm0\n"//and_0
			"movdqa %1,%%xmm1\n"//shfl_0
			 ::"m" (unpack_se_and_12_0.a[0]),"m" (unpack_se_shfl_12_0.a[0]));

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

				"movdqa %%xmm5,%%xmm9\n"
				"punpckldq %%xmm7, %%xmm5\n"			//a0,a2,b0,b2->xmm5
				"punpckhdq %%xmm7, %%xmm9\n"			//c0,c2,d0,d2->xmm9
				"movdqa %%xmm6,%%xmm10\n"
				"punpckldq %%xmm8, %%xmm6\n"			//a1,a3,b1,b3->xmm6
				"punpckhdq %%xmm8, %%xmm10\n"			//c1,c3,d1,d3->xmm10
					//now xmm7 and xmm8 are useless
				"movdqa %%xmm5,%%xmm7\n"
				"punpckldq %%xmm6, %%xmm5\n"			//a0,a1,a2,a3->xmm5
				"movdqu %%xmm5,%0\n"                   //save output
				"punpckhdq %%xmm6, %%xmm7\n"			//b0,b1,b2,b3->xmm7
				"movdqu %%xmm7,%1\n"                   //save output
				"movdqa %%xmm9,%%xmm8\n"
				"punpckldq %%xmm10, %%xmm8\n"			//c0,c1,c2,c3->xmm8
				"movdqu %%xmm8,%2\n"                   //save output
				"punpckhdq %%xmm10, %%xmm9\n"			//d0,d1,d2,d3->xmm9
				"movdqu %%xmm9,%3\n"                   //save output

				:"=m" (dest[0]),"=m" (dest[4]),"=m" (dest[8]),"=m" (dest[12])
				:"m" (srcChar[0]),"m" (srcChar[12])
				:"memory");
	}
}

static const struct unpack_se_shfl_13_0{
int8_t a[16];
}unpack_se_shfl_13_0 __attribute__((aligned(16))) = {{0, 1, 2, 3, 4, 5, 6, 0xff, 6, 7, 8, 9, 10, 11, 12, 0xff},};
static const struct unpack_se_and_13_0{
int16_t a[8];
}unpack_se_and_13_0 __attribute__((aligned(16))) = {{0x1fff,0,0x1fff,0,0x1fff,0,0x1fff,0},};

template<typename T>
void simd_unpack_se13(T* dest, const uint32_t *src, int blockSize) {
	__asm__("movdqa %0,%%xmm0\n"//and_0
			"movdqa %1,%%xmm1\n"//shfl_0
			 ::"m" (unpack_se_and_13_0.a[0]),"m" (unpack_se_shfl_13_0.a[0]));

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

				"movdqa %%xmm5,%%xmm9\n"
				"punpckldq %%xmm7, %%xmm5\n"			//a0,a2,b0,b2->xmm5
				"punpckhdq %%xmm7, %%xmm9\n"			//c0,c2,d0,d2->xmm9
				"movdqa %%xmm6,%%xmm10\n"
				"punpckldq %%xmm8, %%xmm6\n"			//a1,a3,b1,b3->xmm6
				"punpckhdq %%xmm8, %%xmm10\n"			//c1,c3,d1,d3->xmm10
					//now xmm7 and xmm8 are useless
				"movdqa %%xmm5,%%xmm7\n"
				"punpckldq %%xmm6, %%xmm5\n"			//a0,a1,a2,a3->xmm5
				"movdqu %%xmm5,%0\n"                   //save output
				"punpckhdq %%xmm6, %%xmm7\n"			//b0,b1,b2,b3->xmm7
				"movdqu %%xmm7,%1\n"                   //save output
				"movdqa %%xmm9,%%xmm8\n"
				"punpckldq %%xmm10, %%xmm8\n"			//c0,c1,c2,c3->xmm8
				"movdqu %%xmm8,%2\n"                   //save output
				"punpckhdq %%xmm10, %%xmm9\n"			//d0,d1,d2,d3->xmm9
				"movdqu %%xmm9,%3\n"                   //save output

				:"=m" (dest[0]),"=m" (dest[4]),"=m" (dest[8]),"=m" (dest[12])
				:"m" (srcChar[0]),"m" (srcChar[13])
				:"memory");
	}
}

static const struct unpack_se_shfl_14_0{
int8_t a[16];
}unpack_se_shfl_14_0 __attribute__((aligned(16))) = {{0, 1, 2, 3, 4, 5, 6, 0xff, 7, 8, 9, 10, 11, 12, 13, 0xff},};
static const struct unpack_se_and_14_0{
int16_t a[8];
}unpack_se_and_14_0 __attribute__((aligned(16))) = {{0x3fff,0,0x3fff,0,0x3fff,0,0x3fff,0},};

template<typename T>
void simd_unpack_se14(T* dest, const uint32_t *src, int blockSize) {
	__asm__("movdqa %0,%%xmm0\n"//and_0
			"movdqa %1,%%xmm1\n"//shfl_0
			 ::"m" (unpack_se_and_14_0.a[0]),"m" (unpack_se_shfl_14_0.a[0]));

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

				"movdqa %%xmm5,%%xmm9\n"
				"punpckldq %%xmm7, %%xmm5\n"			//a0,a2,b0,b2->xmm5
				"punpckhdq %%xmm7, %%xmm9\n"			//c0,c2,d0,d2->xmm9
				"movdqa %%xmm6,%%xmm10\n"
				"punpckldq %%xmm8, %%xmm6\n"			//a1,a3,b1,b3->xmm6
				"punpckhdq %%xmm8, %%xmm10\n"			//c1,c3,d1,d3->xmm10
					//now xmm7 and xmm8 are useless
				"movdqa %%xmm5,%%xmm7\n"
				"punpckldq %%xmm6, %%xmm5\n"			//a0,a1,a2,a3->xmm5
				"movdqu %%xmm5,%0\n"                   //save output
				"punpckhdq %%xmm6, %%xmm7\n"			//b0,b1,b2,b3->xmm7
				"movdqu %%xmm7,%1\n"                   //save output
				"movdqa %%xmm9,%%xmm8\n"
				"punpckldq %%xmm10, %%xmm8\n"			//c0,c1,c2,c3->xmm8
				"movdqu %%xmm8,%2\n"                   //save output
				"punpckhdq %%xmm10, %%xmm9\n"			//d0,d1,d2,d3->xmm9
				"movdqu %%xmm9,%3\n"                   //save output

				:"=m" (dest[0]),"=m" (dest[4]),"=m" (dest[8]),"=m" (dest[12])
				:"m" (srcChar[0]),"m" (srcChar[14])
				:"memory");
	}
}

static const struct unpack_se_shfl_15_0{
int8_t a[16];
}unpack_se_shfl_15_0 __attribute__((aligned(16))) = {{0, 1, 2, 3, 4, 5, 6, 7, 7, 8, 9, 10, 11, 12, 13, 14},};
static const struct unpack_se_and_15_0{
int16_t a[8];
}unpack_se_and_15_0 __attribute__((aligned(16))) = {{0x7fff,0,0x7fff,0,0x7fff,0,0x7fff,0},};

template<typename T>
void simd_unpack_se15(T* dest, const uint32_t *src, int blockSize) {
	__asm__("movdqa %0,%%xmm0\n"//and_0
			"movdqa %1,%%xmm1\n"//shfl_0
			 ::"m" (unpack_se_and_15_0.a[0]),"m" (unpack_se_shfl_15_0.a[0]));

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

				"movdqa %%xmm5,%%xmm9\n"
				"punpckldq %%xmm7, %%xmm5\n"			//a0,a2,b0,b2->xmm5
				"punpckhdq %%xmm7, %%xmm9\n"			//c0,c2,d0,d2->xmm9
				"movdqa %%xmm6,%%xmm10\n"
				"punpckldq %%xmm8, %%xmm6\n"			//a1,a3,b1,b3->xmm6
				"punpckhdq %%xmm8, %%xmm10\n"			//c1,c3,d1,d3->xmm10
					//now xmm7 and xmm8 are useless
				"movdqa %%xmm5,%%xmm7\n"
				"punpckldq %%xmm6, %%xmm5\n"			//a0,a1,a2,a3->xmm5
				"movdqu %%xmm5,%0\n"                   //save output
				"punpckhdq %%xmm6, %%xmm7\n"			//b0,b1,b2,b3->xmm7
				"movdqu %%xmm7,%1\n"                   //save output
				"movdqa %%xmm9,%%xmm8\n"
				"punpckldq %%xmm10, %%xmm8\n"			//c0,c1,c2,c3->xmm8
				"movdqu %%xmm8,%2\n"                   //save output
				"punpckhdq %%xmm10, %%xmm9\n"			//d0,d1,d2,d3->xmm9
				"movdqu %%xmm9,%3\n"                   //save output

				:"=m" (dest[0]),"=m" (dest[4]),"=m" (dest[8]),"=m" (dest[12])
				:"m" (srcChar[0]),"m" (srcChar[15])
				:"memory");
	}
}

static const struct unpack_se_shfl_16_0{	//a0, a1, a2, a3
int8_t a[16];
}unpack_se_shfl_16_0 __attribute__((aligned(16))) = {{0,1,0xff,0xff,2,3,0xff,0xff,4,5,0xff,0xff,6,7,0xff,0xff},};
static const struct unpack_se_shfl_16_1{	//b0, b1, b2, b3
int8_t a[16];
}unpack_se_shfl_16_1 __attribute__((aligned(16))) = {{8,9,0xff,0xff,10,11,0xff,0xff,12,13,0xff,0xff,14,15,0xff,0xff},};

template<typename T>
void simd_unpack_se16(T* dest, const uint32_t *src, int blockSize) {
	__asm__("movdqa %0,%%xmm0\n"//shfl_0
			"movdqa %1,%%xmm1\n"//shfl_1
			 ::"m" (unpack_se_shfl_16_0.a[0]), "m"(unpack_se_shfl_16_1.a[0]));

	uint8_t *srcChar = (uint8_t*)src;
	for (int i = 0; i < blockSize; i += 16, srcChar += 32,dest+=16)
	{
		__asm__ volatile("prefetchnta %0"::"m" (srcChar[0]));
		__asm__("movdqu %4,%%xmm3\n"            		//a0-b3->xmm3
				"movdqa %%xmm3,%%xmm4\n"
				"movdqu %5,%%xmm5\n"            		//c0-d3->xmm5
				"movdqa %%xmm5,%%xmm6\n"
				"pshufb %%xmm0,%%xmm3\n"				//a0,a1,a2,a3
				"movdqu %%xmm3,%0\n"                   //save output
				"pshufb %%xmm1,%%xmm4\n"				//b0,b1,b2,b3
				"movdqu %%xmm4,%1\n"                   //save output
				"pshufb %%xmm0,%%xmm5\n"				//c0,c1,c2,c3
				"movdqu %%xmm5,%2\n"                   //save output
				"pshufb %%xmm1,%%xmm6\n"				//d0,d1,d2,d3
				"movdqu %%xmm6,%3\n"                   //save output

				:"=m" (dest[0]),"=m" (dest[4]),"=m" (dest[8]),"=m" (dest[12])
				:"m" (srcChar[0]),"m" (srcChar[16])
				:"memory");
	}
}

template<typename T>
void simd_unpack_se17(T * des, const uint32_t *src, int blockSize) {
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
void simd_unpack_se18(T * des, const uint32_t *src, int blockSize) {
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
void simd_unpack_se19(T * des, const uint32_t *src, int blockSize) {
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
void simd_unpack_se20(T * des, const uint32_t *src, int blockSize) {
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
void simd_unpack_se21(T * des, const uint32_t *src, int blockSize) {
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
void simd_unpack_se22(T * des, const uint32_t *src, int blockSize) {
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
void simd_unpack_se23(T * des, const uint32_t *src, int blockSize) {
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
void simd_unpack_se24(T * des, const uint32_t *src, int blockSize) {
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
void simd_unpack_se25(T * des, const uint32_t *src, int blockSize) {
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
void simd_unpack_se26(T * des, const uint32_t *src, int blockSize) {
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
void simd_unpack_se27(T * des, const uint32_t *src, int blockSize) {
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
void simd_unpack_se28(T * des, const uint32_t *src, int blockSize) {
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
void simd_unpack_se29(T * des, const uint32_t *src, int blockSize) {
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
void simd_unpack_se30(T * des, const uint32_t *src, int blockSize) {
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
void simd_unpack_se31(T * des, const uint32_t *src, int blockSize) {
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
void simd_unpack_se32(T * des, const uint32_t *src, int blockSize) {
	for (int i = 0; i < blockSize; i += 4, src += 4, des += 4) {
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		__asm__("movdqu %1, %%xmm4\n"
				"movdqu %%xmm4,%0\n"
				:"=m" (des[0])
				:"m" (src[0])
				:"memory");
	}
}

}
}

#endif

#endif /* SIMD_UNPACK_SE_HPP_ */
