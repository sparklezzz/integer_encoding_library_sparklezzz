/*
 * simd_pack_se.hpp
 *
 *  Created on: 2013-5-3
 *      Author: zxd
 */

#ifndef SIMD_PACK_SE_HPP_
#define SIMD_PACK_SE_HPP_

#ifdef USE_SSE_INSTRUCTION

namespace paradise {
namespace index {

template<typename T>
void simd_pack_se0(uint32_t * des, const T *src, int blockSize) {

}


static const struct pack_se_and_1_0{
int16_t a[8];
}pack_se_and_1_0 __attribute__((aligned(16))) = {{0x1,0,0x1,0,0x1,0,0x1,0},};
static const struct pack_se_shfl_1_0{	//a0-d3, c0-c3
int8_t a[16];
}pack_se_shfl_1_0 __attribute__((aligned(16))) = {{0, 4, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},};
static const struct pack_se_shfl_1_1{	//b0-b3, d0-d3
int8_t a[16];
}pack_se_shfl_1_1 __attribute__((aligned(16))) = {{8, 12, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},};


//#define dolaf3(x,y,z,o,p) "pxor %%xmm1,%%xmm1\npxor %%xmm2,%%xmm2\npxor %%xmm3,%%xmm3\npxor %%xmm4,%%xmm4\nmovhpd "#x"(%1),%%xmm1\npsllq $32,%%xmm1\nmovhpd "#y"(%1),%%xmm2\npsllq  $32,%%xmm2\npsrlq  $32,%%xmm2\nORPD %%xmm1,%%xmm2\nmovss "#z"(%1),%%xmm3\npsllq  $32,%%xmm3\nmovss "#o"(%1),%%xmm4\nORPD  %%xmm3,%%xmm4\npslld $"#p",%%xmm15\nORPD   %%xmm2,%%xmm15\nORPD   %%xmm4,%%xmm15\n"
//#define laf3(x) dolaf3(x*4,128+x*4,256+x*4,384+x*4,1)

template<typename T>
void simd_pack_se1(uint32_t * des, const T *src, int blockSize) {
	/*
	unsigned char* desChar = (unsigned char*)des;
	unsigned char* srcChar = (unsigned char*)src;
	for(int i =0,j=0;j<blockSize;src+=128*4,des+=4*4,j+=128)
	{
	  __asm__ __volatile__(
			"pxor %%xmm15,%%xmm15\n"
			laf3(0)
			laf3(1)
			laf3(2)
			laf3(3)
			laf3(4)
			laf3(5)
			laf3(6)
			laf3(7)
			laf3(8)
			laf3(9)
			laf3(10)
			laf3(11)
			laf3(12)
			laf3(13)
			laf3(14)
			laf3(15)
			laf3(16)
			laf3(17)
			laf3(18)
			laf3(19)
			laf3(20)
			laf3(21)
			laf3(22)
			laf3(23)
			laf3(24)
			laf3(25)
			laf3(26)
			laf3(27)
			laf3(28)
			laf3(29)
			laf3(30)
			laf3(31)
			"movdqu  %%xmm15 ,(%0)\n"
			::"r"(des),"r"(src):"memory");
	}
	__asm__ __volatile__ (
			" sfence \n "
			::
	);
	*/

	__asm__("movdqa %0,%%xmm0\n"//and_0
				"movdqa %1,%%xmm1\n"//shfl_0
				"movdqa %2,%%xmm2\n"//shfl_1
				 ::"m" (pack_se_and_1_0.a[0]),"m" (pack_se_shfl_1_0.a[0]),"m" (pack_se_shfl_1_1.a[0]));
/*
	#define SINGLE_PACK_1(para)	\
	__asm__(	\
		"movupd %0, %%xmm4\n"	\
		"movupd %1, %%xmm5\n"	\
		"movupd %2, %%xmm6\n"	\
		"movupd %3, %%xmm7\n"	\
		"movapd %%xmm4, %%xmm8\n"	\
		"movapd %%xmm6, %%xmm9\n"	\
		"punpckldq %%xmm5, %%xmm4\n"	\
		"punpckhdq %%xmm5, %%xmm8\n"	\
		"punpckldq %%xmm7, %%xmm6\n"	\
		"punpckhdq %%xmm7, %%xmm9\n"	\
		"movapd %%xmm4, %%xmm5\n"	\
		"movapd %%xmm8, %%xmm7\n"	\
		"punpckldq %%xmm6, %%xmm4\n"	\
		"punpckhdq %%xmm6, %%xmm5\n"	\
		"punpckldq %%xmm9, %%xmm7\n"	\
		"punpckhdq %%xmm9, %%xmm8\n"	\
		"andpd %%xmm0, %%xmm4\n"	\
		"andpd %%xmm0, %%xmm5\n"	\
		"andpd %%xmm0, %%xmm7\n"	\
		"andpd %%xmm0, %%xmm8\n"	\
		"pslld $3,%%xmm8\n"	\
		"pslld $2,%%xmm7\n"	\
		"orpd %%xmm7, %%xmm8\n"	\
		"pslld $1,%%xmm5\n"	\
		"orpd %%xmm5, %%xmm8\n"	\
		"orpd %%xmm4, %%xmm8\n"	\
		"movdqa %%xmm8, %%xmm9\n"	\
		"pshufb %%xmm1, %%xmm8\n"	\
		"pslld $4, %%xmm9\n"	\
		"pshufb %%xmm2, %%xmm9\n"	\
		"orpd %%xmm9, %%xmm8\n"	\
		::"m" (src[para]), "m" (src[para+4]), "m" (src[para+8]), "m" (src[para+12])	\
		:"memory");

	int i;
	for (i = 0; i < blockSize; i += 128, src += 128, des += 4) {
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		SINGLE_PACK_1(0)
		__asm__ ("movapd %%xmm8,%%xmm10\n"
					::);
		SINGLE_PACK_1(16)
		__asm__ ("pslldq $2,%%xmm8\n"
				"orpd %%xmm8,%%xmm10\n"
				::);
		SINGLE_PACK_1(32)
		__asm__ ("pslldq $4,%%xmm8\n"
				"orpd %%xmm8,%%xmm10\n"
				::);
		SINGLE_PACK_1(48)
		__asm__ ("pslldq $6,%%xmm8\n"
				"orpd %%xmm8,%%xmm10\n"
				::);
		SINGLE_PACK_1(64)
		__asm__ ("pslldq $8,%%xmm8\n"
				"orpd %%xmm8,%%xmm10\n"
				::);
		SINGLE_PACK_1(80)
		__asm__ ("pslldq $10,%%xmm8\n"
				"orpd %%xmm8,%%xmm10\n"
				::);
		SINGLE_PACK_1(96)
		__asm__ ("pslldq $12,%%xmm8\n"
				"orpd %%xmm8,%%xmm10\n"
				::);
		SINGLE_PACK_1(112)
		__asm__ ("pslldq $14,%%xmm8\n"
				"orpd %%xmm8,%%xmm10\n"
				"movupd %%xmm10, %0\n"
				:"=m" (des[0])
				::"memory");
	}
*/

	int safeBound = blockSize - 128;	// in case that the movdqu op may cause mem write violation
	uint8_t *desChar = (uint8_t*)des;
	int i;
	for (i = 0; i < safeBound; i += 16, src += 16, desChar += 2) {
			// deal with a0-d3
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		__asm__("movdqu %1, %%xmm4\n"	//a0-a3
				"movdqu %2, %%xmm5\n"	//b0-b3
				"movdqu %3, %%xmm6\n"	//c0-c3
				"movdqu %4, %%xmm7\n"	//d0-d3
				"movdqa %%xmm4, %%xmm8\n"
				"movdqa %%xmm6, %%xmm9\n"
				"punpckldq %%xmm5, %%xmm4\n"	// a0,b0,a1,b1->xmm4
				"punpckhdq %%xmm5, %%xmm8\n"	// a2,b2,a3,b3->xmm8
				"punpckldq %%xmm7, %%xmm6\n"	// c0,d0,c1,d1->xmm6
				"punpckhdq %%xmm7, %%xmm9\n"	// c2,d2,c3,d3->xmm9
				"movdqa %%xmm4, %%xmm5\n"
				"movdqa %%xmm8, %%xmm7\n"
				"punpckldq %%xmm6, %%xmm4\n"	// a0,c0,b0,d0->xmm4
				"punpckhdq %%xmm6, %%xmm5\n"	// a1,c1,b1,d1->xmm5
				"punpckldq %%xmm9, %%xmm7\n"	// a2,c2,b2,d2->xmm7
				"punpckhdq %%xmm9, %%xmm8\n"	// a3,c3,b3,d3->xmm8

				"pand %%xmm0, %%xmm4\n"
				"pand %%xmm0, %%xmm5\n"
				"pand %%xmm0, %%xmm7\n"
				"pand %%xmm0, %%xmm8\n"
					// a0-a3, b0-b3, c0-c3, d0-d3->xmm8
				"pslld $3,%%xmm8\n"
				"pslld $2,%%xmm7\n"
				"por %%xmm7, %%xmm8\n"
				"pslld $1,%%xmm5\n"
				"por %%xmm5, %%xmm8\n"
				"por %%xmm4, %%xmm8\n"

				"movdqa %%xmm8, %%xmm9\n"
				"pshufb %%xmm1, %%xmm8\n"	// pack a0-a3,c0-c3->xmm8
				"pslld $4, %%xmm9\n"			// left align b0-b3, d0-d3
				"pshufb %%xmm2, %%xmm9\n"	// pack b0-b3,d0-d3->xmm9
				"por %%xmm9, %%xmm8\n"		// pack a0-a3,b0-b3,c0-c3,d0-d3->xmm8

				"movdqu %%xmm8, %0\n"		// save output

				:"=m" (desChar[0])
				:"m" (src[0]), "m" (src[4]), "m" (src[8]), "m" (src[12])
				:"memory");
	}

	des = (uint32_t*)desChar;
	for (; i < blockSize; i += 32, src += 32, des += 1) {
		des[0] = (src[0] & 0x1);
		des[0] |= (src[1] & 0x1) << 1;
		des[0] |= (src[2] & 0x1) << 2;
		des[0] |= (src[3] & 0x1) << 3;
		des[0] |= (src[4] & 0x1) << 4;
		des[0] |= (src[5] & 0x1) << 5;
		des[0] |= (src[6] & 0x1) << 6;
		des[0] |= (src[7] & 0x1) << 7;
		des[0] |= (src[8] & 0x1) << 8;
		des[0] |= (src[9] & 0x1) << 9;
		des[0] |= (src[10] & 0x1) << 10;
		des[0] |= (src[11] & 0x1) << 11;
		des[0] |= (src[12] & 0x1) << 12;
		des[0] |= (src[13] & 0x1) << 13;
		des[0] |= (src[14] & 0x1) << 14;
		des[0] |= (src[15] & 0x1) << 15;
		des[0] |= (src[16] & 0x1) << 16;
		des[0] |= (src[17] & 0x1) << 17;
		des[0] |= (src[18] & 0x1) << 18;
		des[0] |= (src[19] & 0x1) << 19;
		des[0] |= (src[20] & 0x1) << 20;
		des[0] |= (src[21] & 0x1) << 21;
		des[0] |= (src[22] & 0x1) << 22;
		des[0] |= (src[23] & 0x1) << 23;
		des[0] |= (src[24] & 0x1) << 24;
		des[0] |= (src[25] & 0x1) << 25;
		des[0] |= (src[26] & 0x1) << 26;
		des[0] |= (src[27] & 0x1) << 27;
		des[0] |= (src[28] & 0x1) << 28;
		des[0] |= (src[29] & 0x1) << 29;
		des[0] |= (src[30] & 0x1) << 30;
		des[0] |= (src[31] & 0x1) << 31;
	}
}

static const struct pack_se_and_2_0{
int16_t a[8];
}pack_se_and_2_0 __attribute__((aligned(16))) = {{0x3,0,0x3,0,0x3,0,0x3,0},};
static const struct pack_se_shfl_2_0{
int8_t a[16];
}pack_se_shfl_2_0 __attribute__((aligned(16))) = {{0, 8, 4, 12, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},};

template<typename T>
void simd_pack_se2(uint32_t * des, const T *src, int blockSize) {
	__asm__("movdqa %0,%%xmm0\n"//and_0
			"movdqa %1,%%xmm1\n"//shfl_0
			 ::"m" (pack_se_and_2_0.a[0]),"m" (pack_se_shfl_2_0.a[0]));

	int safeBound = blockSize - 96;	// in case that the movdqu op may cause mem write violation
	uint8_t *desChar = (uint8_t*)des;
	int i;
	for (i = 0; i < blockSize; i += 16, src += 16, desChar += 4) {
			// deal with a0-d3
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		__asm__("movdqu %1, %%xmm4\n"	//a0-a3
				"movdqu %2, %%xmm5\n"	//b0-b3
				"movdqu %3, %%xmm6\n"	//c0-c3
				"movdqu %4, %%xmm7\n"	//d0-d3
				"movdqa %%xmm4, %%xmm8\n"
				"movdqa %%xmm6, %%xmm9\n"
				"punpckldq %%xmm5, %%xmm4\n"	// a0,b0,a1,b1->xmm4
				"punpckhdq %%xmm5, %%xmm8\n"	// a2,b2,a3,b3->xmm8
				"punpckldq %%xmm7, %%xmm6\n"	// c0,d0,c1,d1->xmm6
				"punpckhdq %%xmm7, %%xmm9\n"	// c2,d2,c3,d3->xmm9
				"movdqa %%xmm4, %%xmm5\n"
				"movdqa %%xmm8, %%xmm7\n"
				"punpckldq %%xmm6, %%xmm4\n"	// a0,c0,b0,d0->xmm4
				"punpckhdq %%xmm6, %%xmm5\n"	// a1,c1,b1,d1->xmm5
				"punpckldq %%xmm9, %%xmm7\n"	// a2,c2,b2,d2->xmm7
				"punpckhdq %%xmm9, %%xmm8\n"	// a3,c3,b3,d3->xmm8

				"pand %%xmm0, %%xmm4\n"
				"pand %%xmm0, %%xmm5\n"
				"pand %%xmm0, %%xmm7\n"
				"pand %%xmm0, %%xmm8\n"
					// a0-a3, b0-b3, c0-c3, d0-d3->xmm8
				"pslld $6,%%xmm8\n"
				"pslld $4,%%xmm7\n"
				"por %%xmm7, %%xmm8\n"
				"pslld $2,%%xmm5\n"
				"por %%xmm5, %%xmm8\n"
				"por %%xmm4, %%xmm8\n"

				"pshufb %%xmm1, %%xmm8\n"	// pack a0-d3->xmm8

				"movdqu %%xmm8, %0\n"		// save output

				:"=m" (desChar[0])
				:"m" (src[0]), "m" (src[4]), "m" (src[8]), "m" (src[12])
				:"memory");
	}

	des = (uint32_t*)desChar;
	for (; i < blockSize; i += 32, src += 32, des += 2) {
		des[0] = (src[0] & 0x3);
		des[0] |= (src[1] & 0x3) << 2;
		des[0] |= (src[2] & 0x3) << 4;
		des[0] |= (src[3] & 0x3) << 6;
		des[0] |= (src[4] & 0x3) << 8;
		des[0] |= (src[5] & 0x3) << 10;
		des[0] |= (src[6] & 0x3) << 12;
		des[0] |= (src[7] & 0x3) << 14;
		des[0] |= (src[8] & 0x3) << 16;
		des[0] |= (src[9] & 0x3) << 18;
		des[0] |= (src[10] & 0x3) << 20;
		des[0] |= (src[11] & 0x3) << 22;
		des[0] |= (src[12] & 0x3) << 24;
		des[0] |= (src[13] & 0x3) << 26;
		des[0] |= (src[14] & 0x3) << 28;
		des[0] |= (src[15] & 0x3) << 30;

		des[1] = (src[16] & 0x3);
		des[1] |= (src[17] & 0x3) << 2;
		des[1] |= (src[18] & 0x3) << 4;
		des[1] |= (src[19] & 0x3) << 6;
		des[1] |= (src[20] & 0x3) << 8;
		des[1] |= (src[21] & 0x3) << 10;
		des[1] |= (src[22] & 0x3) << 12;
		des[1] |= (src[23] & 0x3) << 14;
		des[1] |= (src[24] & 0x3) << 16;
		des[1] |= (src[25] & 0x3) << 18;
		des[1] |= (src[26] & 0x3) << 20;
		des[1] |= (src[27] & 0x3) << 22;
		des[1] |= (src[28] & 0x3) << 24;
		des[1] |= (src[29] & 0x3) << 26;
		des[1] |= (src[30] & 0x3) << 28;
		des[1] |= (src[31] & 0x3) << 30;
	}
}

static const struct pack_se_and_3_0{
int16_t a[8];
}pack_se_and_3_0 __attribute__((aligned(16))) = {{0x7,0,0x7,0,0x7,0,0x7,0},};
static const struct pack_se_shfl_3_0{	//a0-d3, c0-c3
int8_t a[16];
}pack_se_shfl_3_0 __attribute__((aligned(16))) = {{0, 1, 0xff, 4, 5, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},};
static const struct pack_se_shfl_3_1{	//b0-b3, d0-d3
int8_t a[16];
}pack_se_shfl_3_1 __attribute__((aligned(16))) = {{0xff, 8, 9, 0xff, 12, 13, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},};

template<typename T>
void simd_pack_se3(uint32_t * des, const T *src, int blockSize) {
	__asm__("movdqa %0,%%xmm0\n"//and_0
			"movdqa %1,%%xmm1\n"//shfl_0
			"movdqa %2,%%xmm2\n"//shfl_1
			 ::"m" (pack_se_and_3_0.a[0]),"m" (pack_se_shfl_3_0.a[0]),"m" (pack_se_shfl_3_1.a[0]));

	int safeBound = blockSize - 64;	// in case that the movdqu op may cause mem write violation
	uint8_t *desChar = (uint8_t*)des;
	int i;
	for (i = 0; i < safeBound; i += 16, src += 16, desChar += 6) {
			// deal with a0-d3
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		__asm__("movdqu %1, %%xmm4\n"	//a0-a3
				"movdqu %2, %%xmm5\n"	//b0-b3
				"movdqu %3, %%xmm6\n"	//c0-c3
				"movdqu %4, %%xmm7\n"	//d0-d3
				"movdqa %%xmm4, %%xmm8\n"
				"movdqa %%xmm6, %%xmm9\n"
				"punpckldq %%xmm5, %%xmm4\n"	// a0,b0,a1,b1->xmm4
				"punpckhdq %%xmm5, %%xmm8\n"	// a2,b2,a3,b3->xmm8
				"punpckldq %%xmm7, %%xmm6\n"	// c0,d0,c1,d1->xmm6
				"punpckhdq %%xmm7, %%xmm9\n"	// c2,d2,c3,d3->xmm9
				"movdqa %%xmm4, %%xmm5\n"
				"movdqa %%xmm8, %%xmm7\n"
				"punpckldq %%xmm6, %%xmm4\n"	// a0,c0,b0,d0->xmm4
				"punpckhdq %%xmm6, %%xmm5\n"	// a1,c1,b1,d1->xmm5
				"punpckldq %%xmm9, %%xmm7\n"	// a2,c2,b2,d2->xmm7
				"punpckhdq %%xmm9, %%xmm8\n"	// a3,c3,b3,d3->xmm8

				"pand %%xmm0, %%xmm4\n"
				"pand %%xmm0, %%xmm5\n"
				"pand %%xmm0, %%xmm7\n"
				"pand %%xmm0, %%xmm8\n"
					// a0-a3, b0-b3, c0-c3, d0-d3->xmm8
				"pslld $9,%%xmm8\n"
				"pslld $6,%%xmm7\n"
				"por %%xmm7, %%xmm8\n"
				"pslld $3,%%xmm5\n"
				"por %%xmm5, %%xmm8\n"
				"por %%xmm4, %%xmm8\n"

				"movdqa %%xmm8, %%xmm9\n"
				"pshufb %%xmm1, %%xmm8\n"	// pack a0-a3,c0-c3->xmm8
				"pslld $4, %%xmm9\n"			// left align b0-b3, d0-d3
				"pshufb %%xmm2, %%xmm9\n"	// pack b0-b3,d0-d3->xmm9
				"por %%xmm9, %%xmm8\n"		// pack a0-a3,b0-b3,c0-c3,d0-d3->xmm8

				"movdqu %%xmm8, %0\n"		// save output

				:"=m" (desChar[0])
				:"m" (src[0]), "m" (src[4]), "m" (src[8]), "m" (src[12])
				:"memory");
	}

	des = (uint32_t*)desChar;
	for (; i < blockSize; i += 32, src += 32, des += 3) {
		des[0] = (src[0] & 0x7);
		des[0] |= (src[1] & 0x7) << 3;
		des[0] |= (src[2] & 0x7) << 6;
		des[0] |= (src[3] & 0x7) << 9;
		des[0] |= (src[4] & 0x7) << 12;
		des[0] |= (src[5] & 0x7) << 15;
		des[0] |= (src[6] & 0x7) << 18;
		des[0] |= (src[7] & 0x7) << 21;
		des[0] |= (src[8] & 0x7) << 24;
		des[0] |= (src[9] & 0x7) << 27;
		des[0] |= (src[10] & 0x7) << 30;

		des[1] = (src[10] & 0x7) >> 2;
		des[1] |= (src[11] & 0x7) << 1;
		des[1] |= (src[12] & 0x7) << 4;
		des[1] |= (src[13] & 0x7) << 7;
		des[1] |= (src[14] & 0x7) << 10;
		des[1] |= (src[15] & 0x7) << 13;
		des[1] |= (src[16] & 0x7) << 16;
		des[1] |= (src[17] & 0x7) << 19;
		des[1] |= (src[18] & 0x7) << 22;
		des[1] |= (src[19] & 0x7) << 25;
		des[1] |= (src[20] & 0x7) << 28;
		des[1] |= (src[21] & 0x7) << 31;

		des[2] = (src[21] & 0x7) >> 1;
		des[2] |= (src[22] & 0x7) << 2;
		des[2] |= (src[23] & 0x7) << 5;
		des[2] |= (src[24] & 0x7) << 8;
		des[2] |= (src[25] & 0x7) << 11;
		des[2] |= (src[26] & 0x7) << 14;
		des[2] |= (src[27] & 0x7) << 17;
		des[2] |= (src[28] & 0x7) << 20;
		des[2] |= (src[29] & 0x7) << 23;
		des[2] |= (src[30] & 0x7) << 26;
		des[2] |= (src[31] & 0x7) << 29;
	}
}

static const struct pack_se_and_4_0{
int16_t a[8];
}pack_se_and_4_0 __attribute__((aligned(16))) = {{0xf,0,0xf,0,0xf,0,0xf,0},};
static const struct pack_se_shfl_4_0{
int8_t a[16];
}pack_se_shfl_4_0 __attribute__((aligned(16))) = {{0, 1, 8, 9, 4, 5, 12, 13, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},};

template<typename T>
void simd_pack_se4(uint32_t * des, const T *src, int blockSize) {
	__asm__("movdqa %0,%%xmm0\n"//and_0
			"movdqa %1,%%xmm1\n"//shfl_0
			 ::"m" (pack_se_and_4_0.a[0]),"m" (pack_se_shfl_4_0.a[0]));

	int safeBound = blockSize - 32;	// in case that the movdqu op may cause mem write violation
	uint8_t *desChar = (uint8_t*)des;
	int i;
	for (i = 0; i < blockSize; i += 16, src += 16, desChar += 8) {
			// deal with a0-d3
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		__asm__("movdqu %1, %%xmm4\n"	//a0-a3
				"movdqu %2, %%xmm5\n"	//b0-b3
				"movdqu %3, %%xmm6\n"	//c0-c3
				"movdqu %4, %%xmm7\n"	//d0-d3
				"movdqa %%xmm4, %%xmm8\n"
				"movdqa %%xmm6, %%xmm9\n"
				"punpckldq %%xmm5, %%xmm4\n"	// a0,b0,a1,b1->xmm4
				"punpckhdq %%xmm5, %%xmm8\n"	// a2,b2,a3,b3->xmm8
				"punpckldq %%xmm7, %%xmm6\n"	// c0,d0,c1,d1->xmm6
				"punpckhdq %%xmm7, %%xmm9\n"	// c2,d2,c3,d3->xmm9
				"movdqa %%xmm4, %%xmm5\n"
				"movdqa %%xmm8, %%xmm7\n"
				"punpckldq %%xmm6, %%xmm4\n"	// a0,c0,b0,d0->xmm4
				"punpckhdq %%xmm6, %%xmm5\n"	// a1,c1,b1,d1->xmm5
				"punpckldq %%xmm9, %%xmm7\n"	// a2,c2,b2,d2->xmm7
				"punpckhdq %%xmm9, %%xmm8\n"	// a3,c3,b3,d3->xmm8

				"pand %%xmm0, %%xmm4\n"
				"pand %%xmm0, %%xmm5\n"
				"pand %%xmm0, %%xmm7\n"
				"pand %%xmm0, %%xmm8\n"
					// a0-a3, b0-b3, c0-c3, d0-d3->xmm8
				"pslld $12,%%xmm8\n"
				"pslld $8,%%xmm7\n"
				"por %%xmm7, %%xmm8\n"
				"pslld $4,%%xmm5\n"
				"por %%xmm5, %%xmm8\n"
				"por %%xmm4, %%xmm8\n"

				"pshufb %%xmm1, %%xmm8\n"	// pack a0-d3->xmm8

				"movdqu %%xmm8, %0\n"		// save output

				:"=m" (desChar[0])
				:"m" (src[0]), "m" (src[4]), "m" (src[8]), "m" (src[12])
				:"memory");
	}

	des = (uint32_t*)desChar;
	for (; i < blockSize; i += 32, src += 32, des += 4) {
		des[0] = (src[0] & 0xf);
		des[0] |= (src[1] & 0xf) << 4;
		des[0] |= (src[2] & 0xf) << 8;
		des[0] |= (src[3] & 0xf) << 12;
		des[0] |= (src[4] & 0xf) << 16;
		des[0] |= (src[5] & 0xf) << 20;
		des[0] |= (src[6] & 0xf) << 24;
		des[0] |= (src[7] & 0xf) << 28;

		des[1] = (src[8] & 0xf);
		des[1] |= (src[9] & 0xf) << 4;
		des[1] |= (src[10] & 0xf) << 8;
		des[1] |= (src[11] & 0xf) << 12;
		des[1] |= (src[12] & 0xf) << 16;
		des[1] |= (src[13] & 0xf) << 20;
		des[1] |= (src[14] & 0xf) << 24;
		des[1] |= (src[15] & 0xf) << 28;

		des[2] = (src[16] & 0xf);
		des[2] |= (src[17] & 0xf) << 4;
		des[2] |= (src[18] & 0xf) << 8;
		des[2] |= (src[19] & 0xf) << 12;
		des[2] |= (src[20] & 0xf) << 16;
		des[2] |= (src[21] & 0xf) << 20;
		des[2] |= (src[22] & 0xf) << 24;
		des[2] |= (src[23] & 0xf) << 28;

		des[3] = (src[24] & 0xf);
		des[3] |= (src[25] & 0xf) << 4;
		des[3] |= (src[26] & 0xf) << 8;
		des[3] |= (src[27] & 0xf) << 12;
		des[3] |= (src[28] & 0xf) << 16;
		des[3] |= (src[29] & 0xf) << 20;
		des[3] |= (src[30] & 0xf) << 24;
		des[3] |= (src[31] & 0xf) << 28;
	}
}

static const struct pack_se_and_5_0{
int16_t a[8];
}pack_se_and_5_0 __attribute__((aligned(16))) = {{0x1f,0,0x1f,0,0x1f,0,0x1f,0},};
static const struct pack_se_shfl_5_0{	//a0-d3, c0-c3
int8_t a[16];
}pack_se_shfl_5_0 __attribute__((aligned(16))) = {{0, 1, 2, 0xff, 0xff, 4, 5, 6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},};
static const struct pack_se_shfl_5_1{	//b0-b3, d0-d3
int8_t a[16];
}pack_se_shfl_5_1 __attribute__((aligned(16))) = {{0xff, 0xff, 8, 9, 10, 0xff, 0xff, 12, 13, 14, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},};

template<typename T>
void simd_pack_se5(uint32_t * des, const T *src, int blockSize) {
	__asm__("movdqa %0,%%xmm0\n"//and_0
			"movdqa %1,%%xmm1\n"//shfl_0
			"movdqa %2,%%xmm2\n"//shfl_1
			 ::"m" (pack_se_and_5_0.a[0]),"m" (pack_se_shfl_5_0.a[0]),"m" (pack_se_shfl_5_1.a[0]));
/*
#define SINGLE_PACK_5(para)	\
__asm__(	\
	"movupd %0, %%xmm4\n"	\
	"movupd %1, %%xmm5\n"	\
	"movupd %2, %%xmm6\n"	\
	"movupd %3, %%xmm7\n"	\
	"movapd %%xmm4, %%xmm8\n"	\
	"movapd %%xmm6, %%xmm9\n"	\
	"punpckldq %%xmm5, %%xmm4\n"	\
	"punpckhdq %%xmm5, %%xmm8\n"	\
	"punpckldq %%xmm7, %%xmm6\n"	\
	"punpckhdq %%xmm7, %%xmm9\n"	\
	"movapd %%xmm4, %%xmm5\n"	\
	"movapd %%xmm8, %%xmm7\n"	\
	"punpckldq %%xmm6, %%xmm4\n"	\
	"punpckhdq %%xmm6, %%xmm5\n"	\
	"punpckldq %%xmm9, %%xmm7\n"	\
	"punpckhdq %%xmm9, %%xmm8\n"	\
	"andpd %%xmm0, %%xmm4\n"	\
	"andpd %%xmm0, %%xmm5\n"	\
	"andpd %%xmm0, %%xmm7\n"	\
	"andpd %%xmm0, %%xmm8\n"	\
	"pslld $15,%%xmm8\n"	\
	"pslld $10,%%xmm7\n"	\
	"orpd %%xmm7, %%xmm8\n"	\
	"pslld $5,%%xmm5\n"	\
	"orpd %%xmm5, %%xmm8\n"	\
	"orpd %%xmm4, %%xmm8\n"	\
	"movdqa %%xmm8, %%xmm9\n"	\
	"pshufb %%xmm1, %%xmm8\n"	\
	"pslld $4, %%xmm9\n"	\
	"pshufb %%xmm2, %%xmm9\n"	\
	"orpd %%xmm9, %%xmm8\n"	\
	::"m" (src[para]), "m" (src[para+4]), "m" (src[para+8]), "m" (src[para+12])	\
	:"memory");

	int i;
	for (i = 0; i < blockSize; i += 128, src += 128, des += 20) {
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		SINGLE_PACK_5(0)
		__asm__ ("movapd %%xmm8,%%xmm10\n"
			::);
		SINGLE_PACK_5(16)
		__asm__ (
				"movapd %%xmm8,%%xmm11\n"
				"pslldq $10,%%xmm8\n"
				"orpd %%xmm8,%%xmm10\n"
				"movupd %%xmm10,%0\n"
				"psrldq $6,%%xmm11\n"
				:"=m" (des[0])::"memory"
				);
		SINGLE_PACK_5(32)
		__asm__ (
				"pslldq $4,%%xmm8\n"
				"orpd %%xmm8,%%xmm11\n"
				::);
		SINGLE_PACK_5(48)
		__asm__ (
				"movapd %%xmm8,%%xmm10\n"
				"pslldq $14,%%xmm8\n"
				"orpd %%xmm8,%%xmm11\n"
				"movupd %%xmm11,%0\n"
				"psrldq $2,%%xmm10\n"
				:"=m" (des[4])::"memory"
				);
		SINGLE_PACK_5(64)
		__asm__ (
				"movapd %%xmm8,%%xmm11\n"
				"pslldq $8,%%xmm8\n"
				"orpd %%xmm8,%%xmm10\n"
				"movupd %%xmm10,%0\n"
				"psrldq $8,%%xmm11\n"
				:"=m" (des[8])::"memory"
				);
		SINGLE_PACK_5(80)
		__asm__ (
				"pslldq $2,%%xmm8\n"
				"orpd %%xmm8,%%xmm11\n"
				::);
		SINGLE_PACK_5(96)
		__asm__ (
				"movapd %%xmm8,%%xmm10\n"
				"pslldq $12,%%xmm8\n"
				"orpd %%xmm8,%%xmm11\n"
				"movupd %%xmm11, %0\n"
				"psrldq $4, %%xmm10\n"
				:"=m" (des[12])::"memory"
				);
		SINGLE_PACK_5(112)
		__asm__ (
				"pslldq $6, %%xmm8\n"
				"orpd %%xmm8, %%xmm10\n"
				"movupd %%xmm10, %0\n"
				:"=m" (des[16])::"memory"
				);
	}
*/
	
	int safeBound = blockSize - 32;	// in case that the movdqu op may cause mem write violation
	uint8_t *desChar = (uint8_t*)des;
	int i;
	for (i = 0; i < safeBound; i += 16, src += 16, desChar += 10) {
			// deal with a0-d3
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		__asm__("movupd %1, %%xmm4\n"	//a0-a3
				"movupd %2, %%xmm5\n"	//b0-b3
				"movupd %3, %%xmm6\n"	//c0-c3
				"movupd %4, %%xmm7\n"	//d0-d3
				"movapd %%xmm4, %%xmm8\n"
				"movapd %%xmm6, %%xmm9\n"
				"punpckldq %%xmm5, %%xmm4\n"	// a0,b0,a1,b1->xmm4
				"punpckhdq %%xmm5, %%xmm8\n"	// a2,b2,a3,b3->xmm8
				"punpckldq %%xmm7, %%xmm6\n"	// c0,d0,c1,d1->xmm6
				"punpckhdq %%xmm7, %%xmm9\n"	// c2,d2,c3,d3->xmm9
				"movapd %%xmm4, %%xmm5\n"
				"movapd %%xmm8, %%xmm7\n"
				"punpckldq %%xmm6, %%xmm4\n"	// a0,c0,b0,d0->xmm4
				"punpckhdq %%xmm6, %%xmm5\n"	// a1,c1,b1,d1->xmm5
				"punpckldq %%xmm9, %%xmm7\n"	// a2,c2,b2,d2->xmm7
				"punpckhdq %%xmm9, %%xmm8\n"	// a3,c3,b3,d3->xmm8

				"andpd %%xmm0, %%xmm4\n"
				"andpd %%xmm0, %%xmm5\n"
				"andpd %%xmm0, %%xmm7\n"
				"andpd %%xmm0, %%xmm8\n"
					// a0-a3, b0-b3, c0-c3, d0-d3->xmm8
				"pslld $15,%%xmm8\n"
				"pslld $10,%%xmm7\n"
				"orpd %%xmm7, %%xmm8\n"
				"pslld $5,%%xmm5\n"
				"orpd %%xmm5, %%xmm8\n"
				"orpd %%xmm4, %%xmm8\n"

				"movdqa %%xmm8, %%xmm9\n"
				"pshufb %%xmm1, %%xmm8\n"	// pack a0-a3,c0-c3->xmm8
				"pslld $4, %%xmm9\n"			// left align b0-b3, d0-d3
				"pshufb %%xmm2, %%xmm9\n"	// pack b0-b3,d0-d3->xmm9
				"orpd %%xmm9, %%xmm8\n"		// pack a0-a3,b0-b3,c0-c3,d0-d3->xmm8

				"movupd %%xmm8, %0\n"		// save output

				:"=m" (desChar[0])
				:"m" (src[0]), "m" (src[4]), "m" (src[8]), "m" (src[12])
				:"memory");
	}

	des = (uint32_t*)desChar;
	for (; i < blockSize; i += 32, src += 32, des += 5) {
		des[0] = (src[0] & 0x1f);
		des[0] |= (src[1] & 0x1f) << 5;
		des[0] |= (src[2] & 0x1f) << 10;
		des[0] |= (src[3] & 0x1f) << 15;
		des[0] |= (src[4] & 0x1f) << 20;
		des[0] |= (src[5] & 0x1f) << 25;
		des[0] |= (src[6] & 0x1f) << 30;

		des[1] = (src[6] & 0x1f) >> 2;
		des[1] |= (src[7] & 0x1f) << 3;
		des[1] |= (src[8] & 0x1f) << 8;
		des[1] |= (src[9] & 0x1f) << 13;
		des[1] |= (src[10] & 0x1f) << 18;
		des[1] |= (src[11] & 0x1f) << 23;
		des[1] |= (src[12] & 0x1f) << 28;

		des[2] = (src[12] & 0x1f) >> 4;
		des[2] |= (src[13] & 0x1f) << 1;
		des[2] |= (src[14] & 0x1f) << 6;
		des[2] |= (src[15] & 0x1f) << 11;
		des[2] |= (src[16] & 0x1f) << 16;
		des[2] |= (src[17] & 0x1f) << 21;
		des[2] |= (src[18] & 0x1f) << 26;
		des[2] |= (src[19] & 0x1f) << 31;

		des[3] = (src[19] & 0x1f) >> 1;
		des[3] |= (src[20] & 0x1f) << 4;
		des[3] |= (src[21] & 0x1f) << 9;
		des[3] |= (src[22] & 0x1f) << 14;
		des[3] |= (src[23] & 0x1f) << 19;
		des[3] |= (src[24] & 0x1f) << 24;
		des[3] |= (src[25] & 0x1f) << 29;

		des[4] = (src[25] & 0x1f) >> 3;
		des[4] |= (src[26] & 0x1f) << 2;
		des[4] |= (src[27] & 0x1f) << 7;
		des[4] |= (src[28] & 0x1f) << 12;
		des[4] |= (src[29] & 0x1f) << 17;
		des[4] |= (src[30] & 0x1f) << 22;
		des[4] |= (src[31] & 0x1f) << 27;
	}
	
}

static const struct pack_se_and_6_0{
int16_t a[8];
}pack_se_and_6_0 __attribute__((aligned(16))) = {{0x3f,0,0x3f,0,0x3f,0,0x3f,0},};
static const struct pack_se_shfl_6_0{
int8_t a[16];
}pack_se_shfl_6_0 __attribute__((aligned(16))) = {{0, 1, 2, 8, 9, 10, 4, 5, 6, 12, 13, 14, 0xff, 0xff, 0xff, 0xff},};

template<typename T>
void simd_pack_se6(uint32_t * des, const T *src, int blockSize) {
	__asm__("movdqa %0,%%xmm0\n"//and_0
				"movdqa %1,%%xmm1\n"//shfl_0
				 ::"m" (pack_se_and_6_0.a[0]),"m" (pack_se_shfl_6_0.a[0]));

	int safeBound = blockSize - 32;	// in case that the movdqu op may cause mem write violation
	uint8_t *desChar = (uint8_t*)des;
	int i;
	for (i = 0; i < blockSize; i += 16, src += 16, desChar += 12) {
			// deal with a0-d3
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		__asm__("movdqu %1, %%xmm4\n"	//a0-a3
				"movdqu %2, %%xmm5\n"	//b0-b3
				"movdqu %3, %%xmm6\n"	//c0-c3
				"movdqu %4, %%xmm7\n"	//d0-d3
				"movdqa %%xmm4, %%xmm8\n"
				"movdqa %%xmm6, %%xmm9\n"
				"punpckldq %%xmm5, %%xmm4\n"	// a0,b0,a1,b1->xmm4
				"punpckhdq %%xmm5, %%xmm8\n"	// a2,b2,a3,b3->xmm8
				"punpckldq %%xmm7, %%xmm6\n"	// c0,d0,c1,d1->xmm6
				"punpckhdq %%xmm7, %%xmm9\n"	// c2,d2,c3,d3->xmm9
				"movdqa %%xmm4, %%xmm5\n"
				"movdqa %%xmm8, %%xmm7\n"
				"punpckldq %%xmm6, %%xmm4\n"	// a0,c0,b0,d0->xmm4
				"punpckhdq %%xmm6, %%xmm5\n"	// a1,c1,b1,d1->xmm5
				"punpckldq %%xmm9, %%xmm7\n"	// a2,c2,b2,d2->xmm7
				"punpckhdq %%xmm9, %%xmm8\n"	// a3,c3,b3,d3->xmm8

				"pand %%xmm0, %%xmm4\n"
				"pand %%xmm0, %%xmm5\n"
				"pand %%xmm0, %%xmm7\n"
				"pand %%xmm0, %%xmm8\n"
					// a0-a3, b0-b3, c0-c3, d0-d3->xmm8
				"pslld $18,%%xmm8\n"
				"pslld $12,%%xmm7\n"
				"por %%xmm7, %%xmm8\n"
				"pslld $6,%%xmm5\n"
				"por %%xmm5, %%xmm8\n"
				"por %%xmm4, %%xmm8\n"

				"pshufb %%xmm1, %%xmm8\n"	// pack a0-d3->xmm8

				"movdqu %%xmm8, %0\n"		// save output

				:"=m" (desChar[0])
				:"m" (src[0]), "m" (src[4]), "m" (src[8]), "m" (src[12])
				:"memory");
	}

	des = (uint32_t*)desChar;
	for (; i < blockSize; i += 32, src += 32, des += 6) {
		des[0] = (src[0] & 0x3f);
		des[0] |= (src[1] & 0x3f) << 6;
		des[0] |= (src[2] & 0x3f) << 12;
		des[0] |= (src[3] & 0x3f) << 18;
		des[0] |= (src[4] & 0x3f) << 24;
		des[0] |= (src[5] & 0x3f) << 30;

		des[1] = (src[5] & 0x3f) >> 2;
		des[1] |= (src[6] & 0x3f) << 4;
		des[1] |= (src[7] & 0x3f) << 10;
		des[1] |= (src[8] & 0x3f) << 16;
		des[1] |= (src[9] & 0x3f) << 22;
		des[1] |= (src[10] & 0x3f) << 28;

		des[2] = (src[10] & 0x3f) >> 4;
		des[2] |= (src[11] & 0x3f) << 2;
		des[2] |= (src[12] & 0x3f) << 8;
		des[2] |= (src[13] & 0x3f) << 14;
		des[2] |= (src[14] & 0x3f) << 20;
		des[2] |= (src[15] & 0x3f) << 26;

		des[3] = (src[16] & 0x3f);
		des[3] |= (src[17] & 0x3f) << 6;
		des[3] |= (src[18] & 0x3f) << 12;
		des[3] |= (src[19] & 0x3f) << 18;
		des[3] |= (src[20] & 0x3f) << 24;
		des[3] |= (src[21] & 0x3f) << 30;

		des[4] = (src[21] & 0x3f) >> 2;
		des[4] |= (src[22] & 0x3f) << 4;
		des[4] |= (src[23] & 0x3f) << 10;
		des[4] |= (src[24] & 0x3f) << 16;
		des[4] |= (src[25] & 0x3f) << 22;
		des[4] |= (src[26] & 0x3f) << 28;

		des[5] = (src[26] & 0x3f) >> 4;
		des[5] |= (src[27] & 0x3f) << 2;
		des[5] |= (src[28] & 0x3f) << 8;
		des[5] |= (src[29] & 0x3f) << 14;
		des[5] |= (src[30] & 0x3f) << 20;
		des[5] |= (src[31] & 0x3f) << 26;
	}
}

static const struct pack_se_and_7_0{
int16_t a[8];
}pack_se_and_7_0 __attribute__((aligned(16))) = {{0x7f,0,0x7f,0,0x7f,0,0x7f,0},};
static const struct pack_se_shfl_7_0{	//a0-d3, c0-c3
int8_t a[16];
}pack_se_shfl_7_0 __attribute__((aligned(16))) = {{0, 1, 2, 3, 0xff, 0xff, 0xff, 4, 5, 6, 7, 0xff, 0xff, 0xff, 0xff, 0xff},};
static const struct pack_se_shfl_7_1{	//b0-b3, d0-d3
int8_t a[16];
}pack_se_shfl_7_1 __attribute__((aligned(16))) = {{0xff, 0xff, 0xff, 8, 9, 10, 11, 0xff, 0xff, 0xff, 12, 13, 14, 15, 0xff, 0xff},};

template<typename T>
void simd_pack_se7(uint32_t * des, const T *src, int blockSize) {
	__asm__("movdqa %0,%%xmm0\n"//and_0
			"movdqa %1,%%xmm1\n"//shfl_0
			"movdqa %2,%%xmm2\n"//shfl_1
			 ::"m" (pack_se_and_7_0.a[0]),"m" (pack_se_shfl_7_0.a[0]),"m" (pack_se_shfl_7_1.a[0]));

	int safeBound = blockSize - 32;	// in case that the movdqu op may cause mem write violation
	uint8_t *desChar = (uint8_t*)des;
	int i;
	for (i = 0; i < safeBound; i += 16, src += 16, desChar += 14) {
			// deal with a0-d3
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		__asm__("movdqu %1, %%xmm4\n"	//a0-a3
				"movdqu %2, %%xmm5\n"	//b0-b3
				"movdqu %3, %%xmm6\n"	//c0-c3
				"movdqu %4, %%xmm7\n"	//d0-d3
				"movdqa %%xmm4, %%xmm8\n"
				"movdqa %%xmm6, %%xmm9\n"
				"punpckldq %%xmm5, %%xmm4\n"	// a0,b0,a1,b1->xmm4
				"punpckhdq %%xmm5, %%xmm8\n"	// a2,b2,a3,b3->xmm8
				"punpckldq %%xmm7, %%xmm6\n"	// c0,d0,c1,d1->xmm6
				"punpckhdq %%xmm7, %%xmm9\n"	// c2,d2,c3,d3->xmm9
				"movdqa %%xmm4, %%xmm5\n"
				"movdqa %%xmm8, %%xmm7\n"
				"punpckldq %%xmm6, %%xmm4\n"	// a0,c0,b0,d0->xmm4
				"punpckhdq %%xmm6, %%xmm5\n"	// a1,c1,b1,d1->xmm5
				"punpckldq %%xmm9, %%xmm7\n"	// a2,c2,b2,d2->xmm7
				"punpckhdq %%xmm9, %%xmm8\n"	// a3,c3,b3,d3->xmm8

				"pand %%xmm0, %%xmm4\n"
				"pand %%xmm0, %%xmm5\n"
				"pand %%xmm0, %%xmm7\n"
				"pand %%xmm0, %%xmm8\n"
					// a0-a3, b0-b3, c0-c3, d0-d3->xmm8
				"pslld $21,%%xmm8\n"
				"pslld $14,%%xmm7\n"
				"por %%xmm7, %%xmm8\n"
				"pslld $7,%%xmm5\n"
				"por %%xmm5, %%xmm8\n"
				"por %%xmm4, %%xmm8\n"

				"movdqa %%xmm8, %%xmm9\n"
				"pshufb %%xmm1, %%xmm8\n"	// pack a0-a3,c0-c3->xmm8
				"pslld $4, %%xmm9\n"			// left align b0-b3, d0-d3
				"pshufb %%xmm2, %%xmm9\n"	// pack b0-b3,d0-d3->xmm9
				"por %%xmm9, %%xmm8\n"		// pack a0-a3,b0-b3,c0-c3,d0-d3->xmm8

				"movdqu %%xmm8, %0\n"		// save output

				:"=m" (desChar[0])
				:"m" (src[0]), "m" (src[4]), "m" (src[8]), "m" (src[12])
				:"memory");
	}

	des = (uint32_t*)desChar;
	for (; i < blockSize; i += 32, src += 32, des += 7) {
		des[0] = (src[0] & 0x7f);
		des[0] |= (src[1] & 0x7f) << 7;
		des[0] |= (src[2] & 0x7f) << 14;
		des[0] |= (src[3] & 0x7f) << 21;
		des[0] |= (src[4] & 0x7f) << 28;

		des[1] = (src[4] & 0x7f) >> 4;
		des[1] |= (src[5] & 0x7f) << 3;
		des[1] |= (src[6] & 0x7f) << 10;
		des[1] |= (src[7] & 0x7f) << 17;
		des[1] |= (src[8] & 0x7f) << 24;
		des[1] |= (src[9] & 0x7f) << 31;

		des[2] = (src[9] & 0x7f) >> 1;
		des[2] |= (src[10] & 0x7f) << 6;
		des[2] |= (src[11] & 0x7f) << 13;
		des[2] |= (src[12] & 0x7f) << 20;
		des[2] |= (src[13] & 0x7f) << 27;

		des[3] = (src[13] & 0x7f) >> 5;
		des[3] |= (src[14] & 0x7f) << 2;
		des[3] |= (src[15] & 0x7f) << 9;
		des[3] |= (src[16] & 0x7f) << 16;
		des[3] |= (src[17] & 0x7f) << 23;
		des[3] |= (src[18] & 0x7f) << 30;

		des[4] = (src[18] & 0x7f) >> 2;
		des[4] |= (src[19] & 0x7f) << 5;
		des[4] |= (src[20] & 0x7f) << 12;
		des[4] |= (src[21] & 0x7f) << 19;
		des[4] |= (src[22] & 0x7f) << 26;

		des[5] = (src[22] & 0x7f) >> 6;
		des[5] |= (src[23] & 0x7f) << 1;
		des[5] |= (src[24] & 0x7f) << 8;
		des[5] |= (src[25] & 0x7f) << 15;
		des[5] |= (src[26] & 0x7f) << 22;
		des[5] |= (src[27] & 0x7f) << 29;

		des[6] = (src[27] & 0x7f) >> 3;
		des[6] |= (src[28] & 0x7f) << 4;
		des[6] |= (src[29] & 0x7f) << 11;
		des[6] |= (src[30] & 0x7f) << 18;
		des[6] |= (src[31] & 0x7f) << 25;
	}
}

static const struct pack_se_and_8_0{
int16_t a[8];
}pack_se_and_8_0 __attribute__((aligned(16))) = {{0xff,0,0xff,0,0xff,0,0xff,0},};

template<typename T>
void simd_pack_se8(uint32_t * des, const T *src, int blockSize) {
	__asm__("movdqa %0,%%xmm0\n"//and_0
				 ::"m" (pack_se_and_8_0.a[0]));

	int i;
	for (i = 0; i < blockSize; i += 16, src += 16, des += 4) {
			// deal with a0-d3
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		__asm__("movdqu %1, %%xmm4\n"	//a0-a3
				"movdqu %2, %%xmm5\n"	//b0-b3
				"movdqu %3, %%xmm6\n"	//c0-c3
				"movdqu %4, %%xmm7\n"	//d0-d3
				"movdqa %%xmm4, %%xmm8\n"
				"movdqa %%xmm5, %%xmm9\n"
				"punpckldq %%xmm6, %%xmm4\n"	// a0,c0,a1,c1->xmm4
				"punpckhdq %%xmm6, %%xmm8\n"	// a2,c2,a3,c3->xmm8
				"punpckldq %%xmm7, %%xmm5\n"	// b0,d0,b1,d1->xmm5
				"punpckhdq %%xmm7, %%xmm9\n"	// b2,d2,b3,d3->xmm9
				"movdqa %%xmm4, %%xmm6\n"
				"movdqa %%xmm8, %%xmm7\n"
				"punpckldq %%xmm5, %%xmm4\n"	// a0,b0,c0,d0->xmm4
				"punpckhdq %%xmm5, %%xmm6\n"	// a1,b1,c1,d1->xmm6
				"punpckldq %%xmm9, %%xmm7\n"	// a2,b2,c2,d2->xmm7
				"punpckhdq %%xmm9, %%xmm8\n"	// a3,b3,c3,d3->xmm8

				"pand %%xmm0, %%xmm4\n"
				"pand %%xmm0, %%xmm6\n"
				"pand %%xmm0, %%xmm7\n"
				"pand %%xmm0, %%xmm8\n"
					// a0-a3, b0-b3, c0-c3, d0-d3->xmm8
				"pslld $24,%%xmm8\n"
				"pslld $16,%%xmm7\n"
				"por %%xmm7, %%xmm8\n"
				"pslld $8,%%xmm6\n"
				"por %%xmm6, %%xmm8\n"
				"por %%xmm4, %%xmm8\n"

				"movdqu %%xmm8, %0\n"		// save output

				:"=m" (des[0])
				:"m" (src[0]), "m" (src[4]), "m" (src[8]), "m" (src[12])
				:"memory");

		/*
		des[0] = (src[0] & 0xff);
		des[0] |= (src[1] & 0xff) << 8;
		des[0] |= (src[2] & 0xff) << 16;
		des[0] |= (src[3] & 0xff) << 24;

		des[1] = (src[4] & 0xff);
		des[1] |= (src[5] & 0xff) << 8;
		des[1] |= (src[6] & 0xff) << 16;
		des[1] |= (src[7] & 0xff) << 24;

		des[2] = (src[8] & 0xff);
		des[2] |= (src[9] & 0xff) << 8;
		des[2] |= (src[10] & 0xff) << 16;
		des[2] |= (src[11] & 0xff) << 24;

		des[3] = (src[12] & 0xff);
		des[3] |= (src[13] & 0xff) << 8;
		des[3] |= (src[14] & 0xff) << 16;
		des[3] |= (src[15] & 0xff) << 24;

		des[4] = (src[16] & 0xff);
		des[4] |= (src[17] & 0xff) << 8;
		des[4] |= (src[18] & 0xff) << 16;
		des[4] |= (src[19] & 0xff) << 24;

		des[5] = (src[20] & 0xff);
		des[5] |= (src[21] & 0xff) << 8;
		des[5] |= (src[22] & 0xff) << 16;
		des[5] |= (src[23] & 0xff) << 24;

		des[6] = (src[24] & 0xff);
		des[6] |= (src[25] & 0xff) << 8;
		des[6] |= (src[26] & 0xff) << 16;
		des[6] |= (src[27] & 0xff) << 24;

		des[7] = (src[28] & 0xff);
		des[7] |= (src[29] & 0xff) << 8;
		des[7] |= (src[30] & 0xff) << 16;
		des[7] |= (src[31] & 0xff) << 24;
		*/
	}
}

static const struct pack_se_and_9_0{
int16_t a[8];
}pack_se_and_9_0 __attribute__((aligned(16))) = {{0x1ff,0,0x1ff,0,0x1ff,0,0x1ff,0},};

template<typename T>
void simd_pack_se9(uint32_t * des, const T *src, int blockSize) {
	__asm__("movdqa %0,%%xmm0\n"//and_0
			 ::"m" (pack_se_and_9_0.a[0]));

	int safeBound = blockSize - 32;	// in case that the movdqu op may cause mem write violation
	uint8_t *desChar = (uint8_t*)des;
	int i;
	for (i = 0; i < safeBound; i += 16, src += 16, desChar += 18) {
			// deal with a0-d3
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		__asm__("movdqu %2, %%xmm4\n"	//a0-a3
				"movdqu %3, %%xmm5\n"	//b0-b3
				"movdqu %4, %%xmm6\n"	//c0-c3
				"movdqu %5, %%xmm7\n"	//d0-d3
				"movdqa %%xmm4, %%xmm8\n"
				"movdqa %%xmm6, %%xmm9\n"
				"punpckldq %%xmm5, %%xmm4\n"	// a0,b0,a1,b1->xmm4
				"punpckhdq %%xmm5, %%xmm8\n"	// a2,b2,a3,b3->xmm8
				"punpckldq %%xmm7, %%xmm6\n"	// c0,d0,c1,d1->xmm6
				"punpckhdq %%xmm7, %%xmm9\n"	// c2,d2,c3,d3->xmm9
				"movdqa %%xmm4, %%xmm5\n"
				"movdqa %%xmm8, %%xmm7\n"
				"punpckldq %%xmm6, %%xmm4\n"	// a0,c0,b0,d0->xmm4
				"punpckhdq %%xmm6, %%xmm5\n"	// a1,c1,b1,d1->xmm5
				"punpckldq %%xmm9, %%xmm7\n"	// a2,c2,b2,d2->xmm7
				"punpckhdq %%xmm9, %%xmm8\n"	// a3,c3,b3,d3->xmm8

				"pand %%xmm0, %%xmm4\n"
				"pand %%xmm0, %%xmm5\n"
				"pand %%xmm0, %%xmm7\n"
				"pand %%xmm0, %%xmm8\n"

				"pslld $9,%%xmm5\n"
				"por %%xmm5, %%xmm4\n"
				"pslld $18,%%xmm7\n"
				"por %%xmm7, %%xmm4\n"
				"movdqa %%xmm8,%%xmm9\n"
				"pslld $27,%%xmm8\n"
				"por %%xmm8, %%xmm4\n"		//lower 32-bit of a*, c*, b*, d*->xmm4
				"psrld $5,%%xmm9\n"			//higher 32-bit of a*, c*, b*, d*->xmm9

				"movdqa %%xmm4,%%xmm5\n"
				"punpckldq %%xmm9,%%xmm4\n"	//a0-a3,c0-c3->xmm4 (8 byte aligned)
				"punpckhdq %%xmm9,%%xmm5\n"	//b0-b3,d0-d3->xmm4 (8 byte aligned)
				"psllq $4,%%xmm5\n"			// left align b0-b3, d0-d3

				"movq %%xmm4,%%xmm6\n"		// a0-a3
				"movq %%xmm5,%%xmm7\n"		// b0-b3
				"pslldq $4,%%xmm7\n"
				"por %%xmm7,%%xmm6\n"		// a0-b3->xmm6
				"movdqu %%xmm6, %0\n"		// save output

				"psrldq $8,%%xmm4\n"		// c0-c3
				"psrldq $8,%%xmm5\n"		// 
				"pslldq $4,%%xmm5\n"		// d0-d3
				"por %%xmm5,%%xmm4\n"		// c0-d3->xmm4
				"movdqu %%xmm4, %1\n"		// save output

				:"=m" (desChar[0]), "=m"(desChar[9])
				:"m" (src[0]), "m" (src[4]), "m" (src[8]), "m" (src[12])
				:"memory");
	}

	des = (uint32_t*)desChar;
	for (; i < blockSize; i += 32, src += 32, des += 9) {
		des[0] = (src[0] & 0x1ff);
		des[0] |= (src[1] & 0x1ff) << 9;
		des[0] |= (src[2] & 0x1ff) << 18;
		des[0] |= (src[3] & 0x1ff) << 27;

		des[1] = (src[3] & 0x1ff) >> 5;
		des[1] |= (src[4] & 0x1ff) << 4;
		des[1] |= (src[5] & 0x1ff) << 13;
		des[1] |= (src[6] & 0x1ff) << 22;
		des[1] |= (src[7] & 0x1ff) << 31;

		des[2] = (src[7] & 0x1ff) >> 1;
		des[2] |= (src[8] & 0x1ff) << 8;
		des[2] |= (src[9] & 0x1ff) << 17;
		des[2] |= (src[10] & 0x1ff) << 26;

		des[3] = (src[10] & 0x1ff) >> 6;
		des[3] |= (src[11] & 0x1ff) << 3;
		des[3] |= (src[12] & 0x1ff) << 12;
		des[3] |= (src[13] & 0x1ff) << 21;
		des[3] |= (src[14] & 0x1ff) << 30;

		des[4] = (src[14] & 0x1ff) >> 2;
		des[4] |= (src[15] & 0x1ff) << 7;
		des[4] |= (src[16] & 0x1ff) << 16;
		des[4] |= (src[17] & 0x1ff) << 25;

		des[5] = (src[17] & 0x1ff) >> 7;
		des[5] |= (src[18] & 0x1ff) << 2;
		des[5] |= (src[19] & 0x1ff) << 11;
		des[5] |= (src[20] & 0x1ff) << 20;
		des[5] |= (src[21] & 0x1ff) << 29;

		des[6] = (src[21] & 0x1ff) >> 3;
		des[6] |= (src[22] & 0x1ff) << 6;
		des[6] |= (src[23] & 0x1ff) << 15;
		des[6] |= (src[24] & 0x1ff) << 24;

		des[7] = (src[24] & 0x1ff) >> 8;
		des[7] |= (src[25] & 0x1ff) << 1;
		des[7] |= (src[26] & 0x1ff) << 10;
		des[7] |= (src[27] & 0x1ff) << 19;
		des[7] |= (src[28] & 0x1ff) << 28;

		des[8] = (src[28] & 0x1ff) >> 4;
		des[8] |= (src[29] & 0x1ff) << 5;
		des[8] |= (src[30] & 0x1ff) << 14;
		des[8] |= (src[31] & 0x1ff) << 23;
	}
}

static const struct pack_se_and_10_0{
int16_t a[8];
}pack_se_and_10_0 __attribute__((aligned(16))) = {{0x3ff,0,0x3ff,0,0x3ff,0,0x3ff,0},};

template<typename T>
void simd_pack_se10(uint32_t * des, const T *src, int blockSize) {
	__asm__("movdqa %0,%%xmm0\n"//and_0
			 ::"m" (pack_se_and_10_0.a[0]));

	int safeBound = blockSize - 32;	// in case that the movdqu op may cause mem write violation
	uint8_t *desChar = (uint8_t*)des;
	int i;
	for (i = 0; i < safeBound; i += 16, src += 16, desChar += 20) {
			// deal with a0-d3
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		__asm__("movdqu %2, %%xmm4\n"	//a0-a3
				"movdqu %3, %%xmm5\n"	//b0-b3
				"movdqu %4, %%xmm6\n"	//c0-c3
				"movdqu %5, %%xmm7\n"	//d0-d3
				"movdqa %%xmm4, %%xmm8\n"
				"movdqa %%xmm6, %%xmm9\n"
				"punpckldq %%xmm5, %%xmm4\n"	// a0,b0,a1,b1->xmm4
				"punpckhdq %%xmm5, %%xmm8\n"	// a2,b2,a3,b3->xmm8
				"punpckldq %%xmm7, %%xmm6\n"	// c0,d0,c1,d1->xmm6
				"punpckhdq %%xmm7, %%xmm9\n"	// c2,d2,c3,d3->xmm9
				"movdqa %%xmm4, %%xmm5\n"
				"movdqa %%xmm8, %%xmm7\n"
				"punpckldq %%xmm6, %%xmm4\n"	// a0,c0,b0,d0->xmm4
				"punpckhdq %%xmm6, %%xmm5\n"	// a1,c1,b1,d1->xmm5
				"punpckldq %%xmm9, %%xmm7\n"	// a2,c2,b2,d2->xmm7
				"punpckhdq %%xmm9, %%xmm8\n"	// a3,c3,b3,d3->xmm8

				"pand %%xmm0, %%xmm4\n"
				"pand %%xmm0, %%xmm5\n"
				"pand %%xmm0, %%xmm7\n"
				"pand %%xmm0, %%xmm8\n"

				"pslld $10,%%xmm5\n"
				"por %%xmm5, %%xmm4\n"
				"pslld $20,%%xmm7\n"
				"por %%xmm7, %%xmm4\n"
				"movdqa %%xmm8,%%xmm9\n"
				"pslld $30,%%xmm8\n"
				"por %%xmm8, %%xmm4\n"		//lower 32-bit of a*, c*, b*, d*->xmm4
				"psrld $2,%%xmm9\n"			//higher 32-bit of a*, c*, b*, d*->xmm9

				"movdqa %%xmm4,%%xmm5\n"
				"punpckldq %%xmm9,%%xmm4\n"	//a0-a3,c0-c3->xmm4 (8 byte aligned)
				"punpckhdq %%xmm9,%%xmm5\n"	//b0-b3,d0-d3->xmm4 (8 byte aligned)

				"movq %%xmm4,%%xmm6\n"		// a0-a3
				"movq %%xmm5,%%xmm7\n"		// b0-b3
				"pslldq $5,%%xmm7\n"
				"por %%xmm7,%%xmm6\n"		// a0-b3->xmm6
				"movdqu %%xmm6, %0\n"		// save output

				"psrldq $8,%%xmm4\n"		// c0-c3
				"psrldq $8,%%xmm5\n"		//
				"pslldq $5,%%xmm5\n"		// d0-d3
				"por %%xmm5,%%xmm4\n"		// c0-d3->xmm4
				"movdqu %%xmm4, %1\n"		// save output

				:"=m" (desChar[0]), "=m"(desChar[10])
				:"m" (src[0]), "m" (src[4]), "m" (src[8]), "m" (src[12])
				:"memory");
	}

	des = (uint32_t*)desChar;
	for (; i < blockSize; i += 32, src += 32, des += 10) {
		des[0] = (src[0] & 0x3ff);
		des[0] |= (src[1] & 0x3ff) << 10;
		des[0] |= (src[2] & 0x3ff) << 20;
		des[0] |= (src[3] & 0x3ff) << 30;

		des[1] = (src[3] & 0x3ff) >> 2;
		des[1] |= (src[4] & 0x3ff) << 8;
		des[1] |= (src[5] & 0x3ff) << 18;
		des[1] |= (src[6] & 0x3ff) << 28;

		des[2] = (src[6] & 0x3ff) >> 4;
		des[2] |= (src[7] & 0x3ff) << 6;
		des[2] |= (src[8] & 0x3ff) << 16;
		des[2] |= (src[9] & 0x3ff) << 26;

		des[3] = (src[9] & 0x3ff) >> 6;
		des[3] |= (src[10] & 0x3ff) << 4;
		des[3] |= (src[11] & 0x3ff) << 14;
		des[3] |= (src[12] & 0x3ff) << 24;

		des[4] = (src[12] & 0x3ff) >> 8;
		des[4] |= (src[13] & 0x3ff) << 2;
		des[4] |= (src[14] & 0x3ff) << 12;
		des[4] |= (src[15] & 0x3ff) << 22;

		des[5] = (src[16] & 0x3ff);
		des[5] |= (src[17] & 0x3ff) << 10;
		des[5] |= (src[18] & 0x3ff) << 20;
		des[5] |= (src[19] & 0x3ff) << 30;

		des[6] = (src[19] & 0x3ff) >> 2;
		des[6] |= (src[20] & 0x3ff) << 8;
		des[6] |= (src[21] & 0x3ff) << 18;
		des[6] |= (src[22] & 0x3ff) << 28;

		des[7] = (src[22] & 0x3ff) >> 4;
		des[7] |= (src[23] & 0x3ff) << 6;
		des[7] |= (src[24] & 0x3ff) << 16;
		des[7] |= (src[25] & 0x3ff) << 26;

		des[8] = (src[25] & 0x3ff) >> 6;
		des[8] |= (src[26] & 0x3ff) << 4;
		des[8] |= (src[27] & 0x3ff) << 14;
		des[8] |= (src[28] & 0x3ff) << 24;

		des[9] = (src[28] & 0x3ff) >> 8;
		des[9] |= (src[29] & 0x3ff) << 2;
		des[9] |= (src[30] & 0x3ff) << 12;
		des[9] |= (src[31] & 0x3ff) << 22;
	}
}

static const struct pack_se_and_11_0{
int16_t a[8];
}pack_se_and_11_0 __attribute__((aligned(16))) = {{0x7ff,0,0x7ff,0,0x7ff,0,0x7ff,0},};

template<typename T>
void simd_pack_se11(uint32_t * des, const T *src, int blockSize) {
	__asm__("movdqa %0,%%xmm0\n"//and_0
			 ::"m" (pack_se_and_11_0.a[0]));

	int safeBound = blockSize - 32;	// in case that the movdqu op may cause mem write violation
	uint8_t *desChar = (uint8_t*)des;
	int i;
	for (i = 0; i < safeBound; i += 16, src += 16, desChar += 22) {
			// deal with a0-d3
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		__asm__("movdqu %2, %%xmm4\n"	//a0-a3
				"movdqu %3, %%xmm5\n"	//b0-b3
				"movdqu %4, %%xmm6\n"	//c0-c3
				"movdqu %5, %%xmm7\n"	//d0-d3
				"movdqa %%xmm4, %%xmm8\n"
				"movdqa %%xmm6, %%xmm9\n"
				"punpckldq %%xmm5, %%xmm4\n"	// a0,b0,a1,b1->xmm4
				"punpckhdq %%xmm5, %%xmm8\n"	// a2,b2,a3,b3->xmm8
				"punpckldq %%xmm7, %%xmm6\n"	// c0,d0,c1,d1->xmm6
				"punpckhdq %%xmm7, %%xmm9\n"	// c2,d2,c3,d3->xmm9
				"movdqa %%xmm4, %%xmm5\n"
				"movdqa %%xmm8, %%xmm7\n"
				"punpckldq %%xmm6, %%xmm4\n"	// a0,c0,b0,d0->xmm4
				"punpckhdq %%xmm6, %%xmm5\n"	// a1,c1,b1,d1->xmm5
				"punpckldq %%xmm9, %%xmm7\n"	// a2,c2,b2,d2->xmm7
				"punpckhdq %%xmm9, %%xmm8\n"	// a3,c3,b3,d3->xmm8

				"pand %%xmm0, %%xmm4\n"
				"pand %%xmm0, %%xmm5\n"
				"pand %%xmm0, %%xmm7\n"
				"pand %%xmm0, %%xmm8\n"

				"pslld $11,%%xmm5\n"
				"por %%xmm5, %%xmm4\n"
				"movdqa %%xmm7,%%xmm9\n"
				"pslld $22,%%xmm7\n"
				"por %%xmm7, %%xmm4\n"		//lower 32-bit of a*, c*, b*, d*->xmm4
				"psrld $10,%%xmm9\n"
				"pslld $1,%%xmm8\n"
				"por %%xmm8, %%xmm9\n"		//higher 32-bit of a*, c*, b*, d*->xmm9

				"movdqa %%xmm4,%%xmm5\n"
				"punpckldq %%xmm9,%%xmm4\n"	//a0-a3,c0-c3->xmm4 (8 byte aligned)
				"punpckhdq %%xmm9,%%xmm5\n"	//b0-b3,d0-d3->xmm4 (8 byte aligned)
				"psllq $4,%%xmm5\n"			// left align b0-b3, d0-d3

				"movq %%xmm4,%%xmm6\n"		// a0-a3
				"movq %%xmm5,%%xmm7\n"		// b0-b3
				"pslldq $5,%%xmm7\n"
				"por %%xmm7,%%xmm6\n"		// a0-b3->xmm6
				"movdqu %%xmm6, %0\n"		// save output

				"psrldq $8,%%xmm4\n"		// c0-c3
				"psrldq $8,%%xmm5\n"		//
				"pslldq $5,%%xmm5\n"		// d0-d3
				"por %%xmm5,%%xmm4\n"		// c0-d3->xmm4
				"movdqu %%xmm4, %1\n"		// save output

				:"=m" (desChar[0]), "=m"(desChar[11])
				:"m" (src[0]), "m" (src[4]), "m" (src[8]), "m" (src[12])
				:"memory");
	}

	des = (uint32_t*)desChar;
	for (; i < blockSize; i += 32, src += 32, des += 11) {
		des[0] = (src[0] & 0x7ff);
		des[0] |= (src[1] & 0x7ff) << 11;
		des[0] |= (src[2] & 0x7ff) << 22;

		des[1] = (src[2] & 0x7ff) >> 10;
		des[1] |= (src[3] & 0x7ff) << 1;
		des[1] |= (src[4] & 0x7ff) << 12;
		des[1] |= (src[5] & 0x7ff) << 23;

		des[2] = (src[5] & 0x7ff) >> 9;
		des[2] |= (src[6] & 0x7ff) << 2;
		des[2] |= (src[7] & 0x7ff) << 13;
		des[2] |= (src[8] & 0x7ff) << 24;

		des[3] = (src[8] & 0x7ff) >> 8;
		des[3] |= (src[9] & 0x7ff) << 3;
		des[3] |= (src[10] & 0x7ff) << 14;
		des[3] |= (src[11] & 0x7ff) << 25;

		des[4] = (src[11] & 0x7ff) >> 7;
		des[4] |= (src[12] & 0x7ff) << 4;
		des[4] |= (src[13] & 0x7ff) << 15;
		des[4] |= (src[14] & 0x7ff) << 26;

		des[5] = (src[14] & 0x7ff) >> 6;
		des[5] |= (src[15] & 0x7ff) << 5;
		des[5] |= (src[16] & 0x7ff) << 16;
		des[5] |= (src[17] & 0x7ff) << 27;

		des[6] = (src[17] & 0x7ff) >> 5;
		des[6] |= (src[18] & 0x7ff) << 6;
		des[6] |= (src[19] & 0x7ff) << 17;
		des[6] |= (src[20] & 0x7ff) << 28;

		des[7] = (src[20] & 0x7ff) >> 4;
		des[7] |= (src[21] & 0x7ff) << 7;
		des[7] |= (src[22] & 0x7ff) << 18;
		des[7] |= (src[23] & 0x7ff) << 29;

		des[8] = (src[23] & 0x7ff) >> 3;
		des[8] |= (src[24] & 0x7ff) << 8;
		des[8] |= (src[25] & 0x7ff) << 19;
		des[8] |= (src[26] & 0x7ff) << 30;

		des[9] = (src[26] & 0x7ff) >> 2;
		des[9] |= (src[27] & 0x7ff) << 9;
		des[9] |= (src[28] & 0x7ff) << 20;
		des[9] |= (src[29] & 0x7ff) << 31;

		des[10] = (src[29] & 0x7ff) >> 1;
		des[10] |= (src[30] & 0x7ff) << 10;
		des[10] |= (src[31] & 0x7ff) << 21;
	}
}

static const struct pack_se_and_12_0{
int16_t a[8];
}pack_se_and_12_0 __attribute__((aligned(16))) = {{0xfff,0,0xfff,0,0xfff,0,0xfff,0},};

template<typename T>
void simd_pack_se12(uint32_t * des, const T *src, int blockSize) {
	__asm__("movdqa %0,%%xmm0\n"//and_0
			 ::"m" (pack_se_and_12_0.a[0]));

	int safeBound = blockSize - 32;	// in case that the movdqu op may cause mem write violation
	uint8_t *desChar = (uint8_t*)des;
	int i;
	for (i = 0; i < safeBound; i += 16, src += 16, desChar += 24) {
			// deal with a0-d3
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		__asm__("movdqu %2, %%xmm4\n"	//a0-a3
				"movdqu %3, %%xmm5\n"	//b0-b3
				"movdqu %4, %%xmm6\n"	//c0-c3
				"movdqu %5, %%xmm7\n"	//d0-d3
				"movdqa %%xmm4, %%xmm8\n"
				"movdqa %%xmm6, %%xmm9\n"
				"punpckldq %%xmm5, %%xmm4\n"	// a0,b0,a1,b1->xmm4
				"punpckhdq %%xmm5, %%xmm8\n"	// a2,b2,a3,b3->xmm8
				"punpckldq %%xmm7, %%xmm6\n"	// c0,d0,c1,d1->xmm6
				"punpckhdq %%xmm7, %%xmm9\n"	// c2,d2,c3,d3->xmm9
				"movdqa %%xmm4, %%xmm5\n"
				"movdqa %%xmm8, %%xmm7\n"
				"punpckldq %%xmm6, %%xmm4\n"	// a0,c0,b0,d0->xmm4
				"punpckhdq %%xmm6, %%xmm5\n"	// a1,c1,b1,d1->xmm5
				"punpckldq %%xmm9, %%xmm7\n"	// a2,c2,b2,d2->xmm7
				"punpckhdq %%xmm9, %%xmm8\n"	// a3,c3,b3,d3->xmm8

				"pand %%xmm0, %%xmm4\n"
				"pand %%xmm0, %%xmm5\n"
				"pand %%xmm0, %%xmm7\n"
				"pand %%xmm0, %%xmm8\n"

				"pslld $12,%%xmm5\n"
				"por %%xmm5, %%xmm4\n"
				"movdqa %%xmm7,%%xmm9\n"
				"pslld $24,%%xmm7\n"
				"por %%xmm7, %%xmm4\n"		//lower 32-bit of a*, c*, b*, d*->xmm4
				"psrld $8,%%xmm9\n"
				"pslld $4,%%xmm8\n"
				"por %%xmm8, %%xmm9\n"		//higher 32-bit of a*, c*, b*, d*->xmm9

				"movdqa %%xmm4,%%xmm5\n"
				"punpckldq %%xmm9,%%xmm4\n"	//a0-a3,c0-c3->xmm4 (8 byte aligned)
				"punpckhdq %%xmm9,%%xmm5\n"	//b0-b3,d0-d3->xmm4 (8 byte aligned)

				"movq %%xmm4,%%xmm6\n"		// a0-a3
				"movq %%xmm5,%%xmm7\n"		// b0-b3
				"pslldq $6,%%xmm7\n"
				"por %%xmm7,%%xmm6\n"		// a0-b3->xmm6
				"movdqu %%xmm6, %0\n"		// save output

				"psrldq $8,%%xmm4\n"		// c0-c3
				"psrldq $8,%%xmm5\n"		//
				"pslldq $6,%%xmm5\n"		// d0-d3
				"por %%xmm5,%%xmm4\n"		// c0-d3->xmm4
				"movdqu %%xmm4, %1\n"		// save output

				:"=m" (desChar[0]), "=m"(desChar[12])
				:"m" (src[0]), "m" (src[4]), "m" (src[8]), "m" (src[12])
				:"memory");
	}

	des = (uint32_t*)desChar;
	for (; i < blockSize; i += 32, src += 32, des += 12) {
		des[0] = (src[0] & 0xfff);
		des[0] |= (src[1] & 0xfff) << 12;
		des[0] |= (src[2] & 0xfff) << 24;

		des[1] = (src[2] & 0xfff) >> 8;
		des[1] |= (src[3] & 0xfff) << 4;
		des[1] |= (src[4] & 0xfff) << 16;
		des[1] |= (src[5] & 0xfff) << 28;

		des[2] = (src[5] & 0xfff) >> 4;
		des[2] |= (src[6] & 0xfff) << 8;
		des[2] |= (src[7] & 0xfff) << 20;

		des[3] = (src[8] & 0xfff);
		des[3] |= (src[9] & 0xfff) << 12;
		des[3] |= (src[10] & 0xfff) << 24;

		des[4] = (src[10] & 0xfff) >> 8;
		des[4] |= (src[11] & 0xfff) << 4;
		des[4] |= (src[12] & 0xfff) << 16;
		des[4] |= (src[13] & 0xfff) << 28;

		des[5] = (src[13] & 0xfff) >> 4;
		des[5] |= (src[14] & 0xfff) << 8;
		des[5] |= (src[15] & 0xfff) << 20;

		des[6] = (src[16] & 0xfff);
		des[6] |= (src[17] & 0xfff) << 12;
		des[6] |= (src[18] & 0xfff) << 24;

		des[7] = (src[18] & 0xfff) >> 8;
		des[7] |= (src[19] & 0xfff) << 4;
		des[7] |= (src[20] & 0xfff) << 16;
		des[7] |= (src[21] & 0xfff) << 28;

		des[8] = (src[21] & 0xfff) >> 4;
		des[8] |= (src[22] & 0xfff) << 8;
		des[8] |= (src[23] & 0xfff) << 20;

		des[9] = (src[24] & 0xfff);
		des[9] |= (src[25] & 0xfff) << 12;
		des[9] |= (src[26] & 0xfff) << 24;

		des[10] = (src[26] & 0xfff) >> 8;
		des[10] |= (src[27] & 0xfff) << 4;
		des[10] |= (src[28] & 0xfff) << 16;
		des[10] |= (src[29] & 0xfff) << 28;

		des[11] = (src[29] & 0xfff) >> 4;
		des[11] |= (src[30] & 0xfff) << 8;
		des[11] |= (src[31] & 0xfff) << 20;
	}
}

static const struct pack_se_and_13_0{
int16_t a[8];
}pack_se_and_13_0 __attribute__((aligned(16))) = {{0x1fff,0,0x1fff,0,0x1fff,0,0x1fff,0},};

template<typename T>
void simd_pack_se13(uint32_t * des, const T *src, int blockSize) {
	__asm__("movdqa %0,%%xmm0\n"//and_0
			 ::"m" (pack_se_and_13_0.a[0]));

	int safeBound = blockSize - 32;	// in case that the movdqu op may cause mem write violation
	uint8_t *desChar = (uint8_t*)des;
	int i;
	for (i = 0; i < safeBound; i += 16, src += 16, desChar += 26) {
			// deal with a0-d3
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		__asm__("movdqu %2, %%xmm4\n"	//a0-a3
				"movdqu %3, %%xmm5\n"	//b0-b3
				"movdqu %4, %%xmm6\n"	//c0-c3
				"movdqu %5, %%xmm7\n"	//d0-d3
				"movdqa %%xmm4, %%xmm8\n"
				"movdqa %%xmm6, %%xmm9\n"
				"punpckldq %%xmm5, %%xmm4\n"	// a0,b0,a1,b1->xmm4
				"punpckhdq %%xmm5, %%xmm8\n"	// a2,b2,a3,b3->xmm8
				"punpckldq %%xmm7, %%xmm6\n"	// c0,d0,c1,d1->xmm6
				"punpckhdq %%xmm7, %%xmm9\n"	// c2,d2,c3,d3->xmm9
				"movdqa %%xmm4, %%xmm5\n"
				"movdqa %%xmm8, %%xmm7\n"
				"punpckldq %%xmm6, %%xmm4\n"	// a0,c0,b0,d0->xmm4
				"punpckhdq %%xmm6, %%xmm5\n"	// a1,c1,b1,d1->xmm5
				"punpckldq %%xmm9, %%xmm7\n"	// a2,c2,b2,d2->xmm7
				"punpckhdq %%xmm9, %%xmm8\n"	// a3,c3,b3,d3->xmm8

				"pand %%xmm0, %%xmm4\n"
				"pand %%xmm0, %%xmm5\n"
				"pand %%xmm0, %%xmm7\n"
				"pand %%xmm0, %%xmm8\n"

				"pslld $13,%%xmm5\n"
				"por %%xmm5, %%xmm4\n"
				"movdqa %%xmm7,%%xmm9\n"
				"pslld $26,%%xmm7\n"
				"por %%xmm7, %%xmm4\n"		//lower 32-bit of a*, c*, b*, d*->xmm4
				"psrld $6,%%xmm9\n"
				"pslld $7,%%xmm8\n"
				"por %%xmm8, %%xmm9\n"		//higher 32-bit of a*, c*, b*, d*->xmm9

				"movdqa %%xmm4,%%xmm5\n"
				"punpckldq %%xmm9,%%xmm4\n"	//a0-a3,c0-c3->xmm4 (8 byte aligned)
				"punpckhdq %%xmm9,%%xmm5\n"	//b0-b3,d0-d3->xmm4 (8 byte aligned)
				"psllq $4,%%xmm5\n"			// left align b0-b3, d0-d3

				"movq %%xmm4,%%xmm6\n"		// a0-a3
				"movq %%xmm5,%%xmm7\n"		// b0-b3
				"pslldq $6,%%xmm7\n"
				"por %%xmm7,%%xmm6\n"		// a0-b3->xmm6
				"movdqu %%xmm6, %0\n"		// save output

				"psrldq $8,%%xmm4\n"		// c0-c3
				"psrldq $8,%%xmm5\n"		//
				"pslldq $6,%%xmm5\n"		// d0-d3
				"por %%xmm5,%%xmm4\n"		// c0-d3->xmm4
				"movdqu %%xmm4, %1\n"		// save output

				:"=m" (desChar[0]), "=m"(desChar[13])
				:"m" (src[0]), "m" (src[4]), "m" (src[8]), "m" (src[12])
				:"memory");
	}

	des = (uint32_t*)desChar;
	for (; i < blockSize; i += 32, src += 32, des += 13) {
		des[0] = (src[0] & 0x1fff);
		des[0] |= (src[1] & 0x1fff) << 13;
		des[0] |= (src[2] & 0x1fff) << 26;

		des[1] = (src[2] & 0x1fff) >> 6;
		des[1] |= (src[3] & 0x1fff) << 7;
		des[1] |= (src[4] & 0x1fff) << 20;

		des[2] = (src[4] & 0x1fff) >> 12;
		des[2] |= (src[5] & 0x1fff) << 1;
		des[2] |= (src[6] & 0x1fff) << 14;
		des[2] |= (src[7] & 0x1fff) << 27;

		des[3] = (src[7] & 0x1fff) >> 5;
		des[3] |= (src[8] & 0x1fff) << 8;
		des[3] |= (src[9] & 0x1fff) << 21;

		des[4] = (src[9] & 0x1fff) >> 11;
		des[4] |= (src[10] & 0x1fff) << 2;
		des[4] |= (src[11] & 0x1fff) << 15;
		des[4] |= (src[12] & 0x1fff) << 28;

		des[5] = (src[12] & 0x1fff) >> 4;
		des[5] |= (src[13] & 0x1fff) << 9;
		des[5] |= (src[14] & 0x1fff) << 22;

		des[6] = (src[14] & 0x1fff) >> 10;
		des[6] |= (src[15] & 0x1fff) << 3;
		des[6] |= (src[16] & 0x1fff) << 16;
		des[6] |= (src[17] & 0x1fff) << 29;

		des[7] = (src[17] & 0x1fff) >> 3;
		des[7] |= (src[18] & 0x1fff) << 10;
		des[7] |= (src[19] & 0x1fff) << 23;

		des[8] = (src[19] & 0x1fff) >> 9;
		des[8] |= (src[20] & 0x1fff) << 4;
		des[8] |= (src[21] & 0x1fff) << 17;
		des[8] |= (src[22] & 0x1fff) << 30;

		des[9] = (src[22] & 0x1fff) >> 2;
		des[9] |= (src[23] & 0x1fff) << 11;
		des[9] |= (src[24] & 0x1fff) << 24;

		des[10] = (src[24] & 0x1fff) >> 8;
		des[10] |= (src[25] & 0x1fff) << 5;
		des[10] |= (src[26] & 0x1fff) << 18;
		des[10] |= (src[27] & 0x1fff) << 31;

		des[11] = (src[27] & 0x1fff) >> 1;
		des[11] |= (src[28] & 0x1fff) << 12;
		des[11] |= (src[29] & 0x1fff) << 25;

		des[12] = (src[29] & 0x1fff) >> 7;
		des[12] |= (src[30] & 0x1fff) << 6;
		des[12] |= (src[31] & 0x1fff) << 19;
	}
}

static const struct pack_se_and_14_0{
int16_t a[8];
}pack_se_and_14_0 __attribute__((aligned(16))) = {{0x3fff,0,0x3fff,0,0x3fff,0,0x3fff,0},};

template<typename T>
void simd_pack_se14(uint32_t * des, const T *src, int blockSize) {
	__asm__("movdqa %0,%%xmm0\n"//and_0
			 ::"m" (pack_se_and_14_0.a[0]));

	int safeBound = blockSize - 32;	// in case that the movdqu op may cause mem write violation
	uint8_t *desChar = (uint8_t*)des;
	int i;
	for (i = 0; i < safeBound; i += 16, src += 16, desChar += 28) {
			// deal with a0-d3
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		__asm__("movdqu %2, %%xmm4\n"	//a0-a3
				"movdqu %3, %%xmm5\n"	//b0-b3
				"movdqu %4, %%xmm6\n"	//c0-c3
				"movdqu %5, %%xmm7\n"	//d0-d3
				"movdqa %%xmm4, %%xmm8\n"
				"movdqa %%xmm6, %%xmm9\n"
				"punpckldq %%xmm5, %%xmm4\n"	// a0,b0,a1,b1->xmm4
				"punpckhdq %%xmm5, %%xmm8\n"	// a2,b2,a3,b3->xmm8
				"punpckldq %%xmm7, %%xmm6\n"	// c0,d0,c1,d1->xmm6
				"punpckhdq %%xmm7, %%xmm9\n"	// c2,d2,c3,d3->xmm9
				"movdqa %%xmm4, %%xmm5\n"
				"movdqa %%xmm8, %%xmm7\n"
				"punpckldq %%xmm6, %%xmm4\n"	// a0,c0,b0,d0->xmm4
				"punpckhdq %%xmm6, %%xmm5\n"	// a1,c1,b1,d1->xmm5
				"punpckldq %%xmm9, %%xmm7\n"	// a2,c2,b2,d2->xmm7
				"punpckhdq %%xmm9, %%xmm8\n"	// a3,c3,b3,d3->xmm8

				"pand %%xmm0, %%xmm4\n"
				"pand %%xmm0, %%xmm5\n"
				"pand %%xmm0, %%xmm7\n"
				"pand %%xmm0, %%xmm8\n"

				"pslld $14,%%xmm5\n"
				"por %%xmm5, %%xmm4\n"
				"movdqa %%xmm7,%%xmm9\n"
				"pslld $28,%%xmm7\n"
				"por %%xmm7, %%xmm4\n"		//lower 32-bit of a*, c*, b*, d*->xmm4
				"psrld $4,%%xmm9\n"
				"pslld $10,%%xmm8\n"
				"por %%xmm8, %%xmm9\n"		//higher 32-bit of a*, c*, b*, d*->xmm9

				"movdqa %%xmm4,%%xmm5\n"
				"punpckldq %%xmm9,%%xmm4\n"	//a0-a3,c0-c3->xmm4 (8 byte aligned)
				"punpckhdq %%xmm9,%%xmm5\n"	//b0-b3,d0-d3->xmm4 (8 byte aligned)

				"movq %%xmm4,%%xmm6\n"		// a0-a3
				"movq %%xmm5,%%xmm7\n"		// b0-b3
				"pslldq $7,%%xmm7\n"
				"por %%xmm7,%%xmm6\n"		// a0-b3->xmm6
				"movdqu %%xmm6, %0\n"		// save output

				"psrldq $8,%%xmm4\n"		// c0-c3
				"psrldq $8,%%xmm5\n"		//
				"pslldq $7,%%xmm5\n"		// d0-d3
				"por %%xmm5,%%xmm4\n"		// c0-d3->xmm4
				"movdqu %%xmm4, %1\n"		// save output

				:"=m" (desChar[0]), "=m"(desChar[14])
				:"m" (src[0]), "m" (src[4]), "m" (src[8]), "m" (src[12])
				:"memory");
	}

	des = (uint32_t*)desChar;
	for (; i < blockSize; i += 32, src += 32, des += 14) {
		des[0] = (src[0] & 0x3fff);
		des[0] |= (src[1] & 0x3fff) << 14;
		des[0] |= (src[2] & 0x3fff) << 28;

		des[1] = (src[2] & 0x3fff) >> 4;
		des[1] |= (src[3] & 0x3fff) << 10;
		des[1] |= (src[4] & 0x3fff) << 24;

		des[2] = (src[4] & 0x3fff) >> 8;
		des[2] |= (src[5] & 0x3fff) << 6;
		des[2] |= (src[6] & 0x3fff) << 20;

		des[3] = (src[6] & 0x3fff) >> 12;
		des[3] |= (src[7] & 0x3fff) << 2;
		des[3] |= (src[8] & 0x3fff) << 16;
		des[3] |= (src[9] & 0x3fff) << 30;

		des[4] = (src[9] & 0x3fff) >> 2;
		des[4] |= (src[10] & 0x3fff) << 12;
		des[4] |= (src[11] & 0x3fff) << 26;

		des[5] = (src[11] & 0x3fff) >> 6;
		des[5] |= (src[12] & 0x3fff) << 8;
		des[5] |= (src[13] & 0x3fff) << 22;

		des[6] = (src[13] & 0x3fff) >> 10;
		des[6] |= (src[14] & 0x3fff) << 4;
		des[6] |= (src[15] & 0x3fff) << 18;

		des[7] = (src[16] & 0x3fff);
		des[7] |= (src[17] & 0x3fff) << 14;
		des[7] |= (src[18] & 0x3fff) << 28;

		des[8] = (src[18] & 0x3fff) >> 4;
		des[8] |= (src[19] & 0x3fff) << 10;
		des[8] |= (src[20] & 0x3fff) << 24;

		des[9] = (src[20] & 0x3fff) >> 8;
		des[9] |= (src[21] & 0x3fff) << 6;
		des[9] |= (src[22] & 0x3fff) << 20;

		des[10] = (src[22] & 0x3fff) >> 12;
		des[10] |= (src[23] & 0x3fff) << 2;
		des[10] |= (src[24] & 0x3fff) << 16;
		des[10] |= (src[25] & 0x3fff) << 30;

		des[11] = (src[25] & 0x3fff) >> 2;
		des[11] |= (src[26] & 0x3fff) << 12;
		des[11] |= (src[27] & 0x3fff) << 26;

		des[12] = (src[27] & 0x3fff) >> 6;
		des[12] |= (src[28] & 0x3fff) << 8;
		des[12] |= (src[29] & 0x3fff) << 22;

		des[13] = (src[29] & 0x3fff) >> 10;
		des[13] |= (src[30] & 0x3fff) << 4;
		des[13] |= (src[31] & 0x3fff) << 18;
	}
}

static const struct pack_se_and_15_0{
int16_t a[8];
}pack_se_and_15_0 __attribute__((aligned(16))) = {{0x7fff,0,0x7fff,0,0x7fff,0,0x7fff,0},};

template<typename T>
void simd_pack_se15(uint32_t * des, const T *src, int blockSize) {
	__asm__("movdqa %0,%%xmm0\n"//and_0
			 ::"m" (pack_se_and_15_0.a[0]));

	int safeBound = blockSize - 32;	// in case that the movdqu op may cause mem write violation
	uint8_t *desChar = (uint8_t*)des;
	int i;
	for (i = 0; i < safeBound; i += 16, src += 16, desChar += 30) {
			// deal with a0-d3
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		__asm__("movdqu %2, %%xmm4\n"	//a0-a3
				"movdqu %3, %%xmm5\n"	//b0-b3
				"movdqu %4, %%xmm6\n"	//c0-c3
				"movdqu %5, %%xmm7\n"	//d0-d3
				"movdqa %%xmm4, %%xmm8\n"
				"movdqa %%xmm6, %%xmm9\n"
				"punpckldq %%xmm5, %%xmm4\n"	// a0,b0,a1,b1->xmm4
				"punpckhdq %%xmm5, %%xmm8\n"	// a2,b2,a3,b3->xmm8
				"punpckldq %%xmm7, %%xmm6\n"	// c0,d0,c1,d1->xmm6
				"punpckhdq %%xmm7, %%xmm9\n"	// c2,d2,c3,d3->xmm9
				"movdqa %%xmm4, %%xmm5\n"
				"movdqa %%xmm8, %%xmm7\n"
				"punpckldq %%xmm6, %%xmm4\n"	// a0,c0,b0,d0->xmm4
				"punpckhdq %%xmm6, %%xmm5\n"	// a1,c1,b1,d1->xmm5
				"punpckldq %%xmm9, %%xmm7\n"	// a2,c2,b2,d2->xmm7
				"punpckhdq %%xmm9, %%xmm8\n"	// a3,c3,b3,d3->xmm8

				"pand %%xmm0, %%xmm4\n"
				"pand %%xmm0, %%xmm5\n"
				"pand %%xmm0, %%xmm7\n"
				"pand %%xmm0, %%xmm8\n"

				"pslld $15,%%xmm5\n"
				"por %%xmm5, %%xmm4\n"
				"movdqa %%xmm7,%%xmm9\n"
				"pslld $30,%%xmm7\n"
				"por %%xmm7, %%xmm4\n"		//lower 32-bit of a*, c*, b*, d*->xmm4
				"psrld $2,%%xmm9\n"
				"pslld $13,%%xmm8\n"
				"por %%xmm8, %%xmm9\n"		//higher 32-bit of a*, c*, b*, d*->xmm9

				"movdqa %%xmm4,%%xmm5\n"
				"punpckldq %%xmm9,%%xmm4\n"	//a0-a3,c0-c3->xmm4 (8 byte aligned)
				"punpckhdq %%xmm9,%%xmm5\n"	//b0-b3,d0-d3->xmm4 (8 byte aligned)
				"psllq $4,%%xmm5\n"			// left align b0-b3, d0-d3

				"movq %%xmm4,%%xmm6\n"		// a0-a3
				"movq %%xmm5,%%xmm7\n"		// b0-b3
				"pslldq $7,%%xmm7\n"
				"por %%xmm7,%%xmm6\n"		// a0-b3->xmm6
				"movdqu %%xmm6, %0\n"		// save output

				"psrldq $8,%%xmm4\n"		// c0-c3
				"psrldq $8,%%xmm5\n"		//
				"pslldq $7,%%xmm5\n"		// d0-d3
				"por %%xmm5,%%xmm4\n"		// c0-d3->xmm4
				"movdqu %%xmm4, %1\n"		// save output

				:"=m" (desChar[0]), "=m"(desChar[15])
				:"m" (src[0]), "m" (src[4]), "m" (src[8]), "m" (src[12])
				:"memory");
	}

	des = (uint32_t*)desChar;
	for (; i < blockSize; i += 32, src += 32, des += 15) {
		des[0] = (src[0] & 0x7fff);
		des[0] |= (src[1] & 0x7fff) << 15;
		des[0] |= (src[2] & 0x7fff) << 30;

		des[1] = (src[2] & 0x7fff) >> 2;
		des[1] |= (src[3] & 0x7fff) << 13;
		des[1] |= (src[4] & 0x7fff) << 28;

		des[2] = (src[4] & 0x7fff) >> 4;
		des[2] |= (src[5] & 0x7fff) << 11;
		des[2] |= (src[6] & 0x7fff) << 26;

		des[3] = (src[6] & 0x7fff) >> 6;
		des[3] |= (src[7] & 0x7fff) << 9;
		des[3] |= (src[8] & 0x7fff) << 24;

		des[4] = (src[8] & 0x7fff) >> 8;
		des[4] |= (src[9] & 0x7fff) << 7;
		des[4] |= (src[10] & 0x7fff) << 22;

		des[5] = (src[10] & 0x7fff) >> 10;
		des[5] |= (src[11] & 0x7fff) << 5;
		des[5] |= (src[12] & 0x7fff) << 20;

		des[6] = (src[12] & 0x7fff) >> 12;
		des[6] |= (src[13] & 0x7fff) << 3;
		des[6] |= (src[14] & 0x7fff) << 18;

		des[7] = (src[14] & 0x7fff) >> 14;
		des[7] |= (src[15] & 0x7fff) << 1;
		des[7] |= (src[16] & 0x7fff) << 16;
		des[7] |= (src[17] & 0x7fff) << 31;

		des[8] = (src[17] & 0x7fff) >> 1;
		des[8] |= (src[18] & 0x7fff) << 14;
		des[8] |= (src[19] & 0x7fff) << 29;

		des[9] = (src[19] & 0x7fff) >> 3;
		des[9] |= (src[20] & 0x7fff) << 12;
		des[9] |= (src[21] & 0x7fff) << 27;

		des[10] = (src[21] & 0x7fff) >> 5;
		des[10] |= (src[22] & 0x7fff) << 10;
		des[10] |= (src[23] & 0x7fff) << 25;

		des[11] = (src[23] & 0x7fff) >> 7;
		des[11] |= (src[24] & 0x7fff) << 8;
		des[11] |= (src[25] & 0x7fff) << 23;

		des[12] = (src[25] & 0x7fff) >> 9;
		des[12] |= (src[26] & 0x7fff) << 6;
		des[12] |= (src[27] & 0x7fff) << 21;

		des[13] = (src[27] & 0x7fff) >> 11;
		des[13] |= (src[28] & 0x7fff) << 4;
		des[13] |= (src[29] & 0x7fff) << 19;

		des[14] = (src[29] & 0x7fff) >> 13;
		des[14] |= (src[30] & 0x7fff) << 2;
		des[14] |= (src[31] & 0x7fff) << 17;
	}
}

static const struct pack_se_shfl_16_0{
int8_t a[16];
}pack_se_shfl_16_0 __attribute__((aligned(16))) = {{0, 1, 4, 5, 8, 9, 12, 13, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},};

template<typename T>
void simd_pack_se16(uint32_t * des, const T *src, int blockSize) {
	__asm__("movdqa %0,%%xmm0\n"//shfl_0
			 ::"m"(pack_se_shfl_16_0.a[0]));

	uint8_t *desChar = (uint8_t*)des;
	int i;
	for (i = 0; i < blockSize; i += 16, src += 16, desChar += 32) {
			// deal with a0-d3
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		__asm__("movdqu %2, %%xmm4\n"	//a0-a3
				"movdqu %3, %%xmm5\n"	//b0-b3
				"movdqu %4, %%xmm6\n"	//c0-c3
				"movdqu %5, %%xmm7\n"	//d0-d3

				"pshufb %%xmm0,%%xmm4\n"
				"pshufb %%xmm0,%%xmm5\n"
				"movlhps %%xmm5,%%xmm4\n"	//a0-b3
				"movdqu %%xmm4,%0\n"		//save output
				"pshufb %%xmm0,%%xmm6\n"
				"pshufb %%xmm0,%%xmm7\n"
				"movlhps %%xmm7,%%xmm6\n"	//c0-d3
				"movdqu %%xmm6,%1\n"		//save output

				:"=m" (desChar[0]), "=m"(desChar[16])
				:"m" (src[0]), "m" (src[4]), "m" (src[8]), "m" (src[12])
				:"memory");
	}
}


template<typename T>
void simd_pack_se32(uint32_t * des, const T *src, int blockSize) {
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

#endif /* SIMD_PACK_SE_HPP_ */
