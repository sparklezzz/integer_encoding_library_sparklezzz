
/*
 * SIMD_KSimple_sorted.cpp
 */

#ifdef USE_SSE_INSTRUCTION

#include "SIMD_KSimple_sorted.hpp"
using namespace paradise::index;
uint8_t SIMD_KSimple_sorted::bitSizeArr[16] = { 0, 0, 1, 2, 3, 4, 5, 6, 8, 10, 16, 32 };
uint8_t SIMD_KSimple_sorted::codeNum[16] = { 16, 8, 32, 16, 10, 8, 6, 5, 4, 3, 2, 1 };
uint32_t SIMD_KSimple_sorted::maskArr[16] = { 0x0, 0x0, 0x1, 0x3, 0x7, 0xf, 0x1f, 0x3f, 0xff, 0x3ff, 0xffff, 0xffffffff};

const struct SIMD_KSimple_sorted::mode_mask_0 SIMD_KSimple_sorted::mode_mask_0 __attribute__((aligned(16))) = {{0x1,0x1,0x1,0x1},};
const struct SIMD_KSimple_sorted::mode_mask_1 SIMD_KSimple_sorted::mode_mask_1 __attribute__((aligned(16))) = {{0x3,0x3,0x3,0x3},};
const struct SIMD_KSimple_sorted::mode_mask_2 SIMD_KSimple_sorted::mode_mask_2 __attribute__((aligned(16))) = {{0x7,0x7,0x7,0x7},};
const struct SIMD_KSimple_sorted::mode_mask_3 SIMD_KSimple_sorted::mode_mask_3 __attribute__((aligned(16))) = {{0xf,0xf,0xf,0xf},};
const struct SIMD_KSimple_sorted::mode_mask_4 SIMD_KSimple_sorted::mode_mask_4 __attribute__((aligned(16))) = {{0x1f,0x1f,0x1f,0x1f},};
const struct SIMD_KSimple_sorted::mode_mask_5 SIMD_KSimple_sorted::mode_mask_5 __attribute__((aligned(16))) = {{0x3f,0x3f,0x3f,0x3f},};
const struct SIMD_KSimple_sorted::mode_mask_6 SIMD_KSimple_sorted::mode_mask_6 __attribute__((aligned(16))) = {{0xff,0xff,0xff,0xff},};
const struct SIMD_KSimple_sorted::mode_mask_7 SIMD_KSimple_sorted::mode_mask_7 __attribute__((aligned(16))) = {{0x3ff,0x3ff,0x3ff,0x3ff},};
const struct SIMD_KSimple_sorted::mode_mask_8 SIMD_KSimple_sorted::mode_mask_8 __attribute__((aligned(16))) = {{0xffff,0xffff,0xffff,0xffff},};

int SIMD_KSimple_sorted::encodeUint32(char* des, const uint32_t* src, uint32_t encodeNum) {
	return encode<uint32_t> (des, src, encodeNum);
}
int SIMD_KSimple_sorted::decodeUint32(uint32_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint32_t> (des, src, decodeNum);
}

int SIMD_KSimple_sorted::encodeUint16(char* des, const uint16_t* src, uint32_t encodeNum) {
	return encode<uint16_t> (des, src, encodeNum);
}
int SIMD_KSimple_sorted::decodeUint16(uint16_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint16_t> (des, src, decodeNum);
}

int SIMD_KSimple_sorted::encodeUint8(char* des, const uint8_t* src, uint32_t encodeNum) {
	return encode<uint8_t> (des, src, encodeNum);
}
int SIMD_KSimple_sorted::decodeUint8(uint8_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint8_t> (des, src, decodeNum);
}

Compressor* SIMD_KSimple_sorted::clone() {
	Compressor* pNewComp = new SIMD_KSimple_sorted(*this);
	return pNewComp;
}

int SIMD_KSimple_sorted::encodeAllGroups(char* des, const uint32_t* src, uint32_t encodeNum,
		const uint8_t* modeArr, uint32_t totalModeNum) {

	const uint32_t* srcBeg = src;
	uint32_t* wordPos = (uint32_t*)des;
	//memset(des, 0, totalModeNum * 16);

	for (uint32_t i=0; i<totalModeNum; i++) {
		int mode = *modeArr;
		modeArr++;
		// encode data

		// successive 0 or successive 1
		if (mode == 0 || mode == 12) {
			src += 64;
			continue;
		} else if (mode == 1 || mode == 13) {
			src += 32;
			continue;
		}

		uint32_t num2code = codeNum[mode];
		uint32_t bitSize = bitSizeArr[mode];
		//uint32_t curOffset = 0;
		const uint32_t *curSrc = src + (num2code << 2) - 4;
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));

		__asm__("movd %0,%%xmm1\n"                            //shift offset->xmm1
				"movdqu %1,%%xmm2\n"							  //last 4 int in the mode->xmm2
				::"m" (bitSize), "m" (curSrc[0])
				:"memory");
		curSrc -= 4;
		src += 4;

		// reverse compress order: compress the last 4 int in the mode first
		for (int pos = num2code - 2; pos >= 0; pos--) {
			__asm__("movdqu %0,%%xmm3\n"                            //src0-3->xmm3
					"pslld %%xmm1,%%xmm2\n"							//shift left->xmm2
					"por %%xmm3,%%xmm2\n"							//or xmm3->xmm2
					::"m" (curSrc[0])
					:"memory");
			curSrc -= 4;
			src += 4;
		}

		__asm__("movdqu %%xmm2,%0\n"			//write output
				:"=m" (wordPos[0])
				::"memory");

		wordPos += 4;
	}

	if (src - srcBeg != encodeNum) {
		cerr << "encode data seg error!" << endl;
	}

	return ((char*)wordPos) - des;
}


int SIMD_KSimple_sorted::decodeSingleGroup(uint32_t* des, const uint32_t* src, uint8_t mode) {

	switch (mode) {
	case 0:
		__asm__("pxor %%xmm9, %%xmm9\n"
				:::);
		for (int i=0; i<16; i++) {
			__asm__("movdqu %%xmm9,%0\n"		// write output of 4 int
					:"=m" (des[0])
					::"memory");
			des += 4;
		}
		break;
	case 1:
		__asm__("pxor %%xmm9, %%xmm9\n"
				:::);
		for (int i=0; i<8; i++) {
			__asm__("movdqu %%xmm9,%0\n"		// write output of 4 int
					:"=m" (des[0])
					::"memory");
			des += 4;
		}
		break;
	case 2:	// 1 * 32
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		__asm__("movdqu %0,%%xmm9\n"	//load src data
				::"m" (src[0])
				:"memory");
		for (int i=0; i<32; i++) {
			__asm__("movdqa %%xmm9,%%xmm10\n"
					"pand %%xmm0,%%xmm10\n"		// mask
					"movdqu %%xmm10,%0\n"		// write output of 4 int
					"psrld $1,%%xmm9\n"			// shift right src xmm
					:"=m" (des[0])
					::"memory");
			des += 4;
		}
		break;
	case 3:	// 2 * 16
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		__asm__("movdqu %0,%%xmm9\n"	//load src data
				::"m" (src[0])
				:"memory");
		for (int i=0; i<16; i++) {
			__asm__("movdqa %%xmm9,%%xmm10\n"
					"pand %%xmm1,%%xmm10\n"		// mask
					"movdqu %%xmm10,%0\n"		// write output of 4 int
					"psrld $2,%%xmm9\n"			// shift right src xmm
					:"=m" (des[0])
					::"memory");
			des += 4;
		}
		break;
	case 4:	// 3 * 10
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		__asm__("movdqu %0,%%xmm9\n"	//load src data
				::"m" (src[0])
				:"memory");
		for (int i=0; i<10; i++) {
			__asm__("movdqa %%xmm9,%%xmm10\n"
					"pand %%xmm2,%%xmm10\n"		// mask
					"movdqu %%xmm10,%0\n"		// write output of 4 int
					"psrld $3,%%xmm9\n"			// shift right src xmm
					:"=m" (des[0])
					::"memory");
			des += 4;
		}
		break;
	case 5:	// 4 * 8
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		__asm__("movdqu %0,%%xmm9\n"	//load src data
				::"m" (src[0])
				:"memory");
		for (int i=0; i<8; i++) {
			__asm__("movdqa %%xmm9,%%xmm10\n"
					"pand %%xmm3,%%xmm10\n"		// mask
					"movdqu %%xmm10,%0\n"		// write output of 4 int
					"psrld $4,%%xmm9\n"			// shift right src xmm
					:"=m" (des[0])
					::"memory");
			des += 4;
		}
		break;
	case 6:	// 5 * 6
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		__asm__("movdqu %0,%%xmm9\n"	//load src data
				::"m" (src[0])
				:"memory");
		for (int i=0; i<6; i++) {
			__asm__("movdqa %%xmm9,%%xmm10\n"
					"pand %%xmm4,%%xmm10\n"		// mask
					"movdqu %%xmm10,%0\n"		// write output of 4 int
					"psrld $5,%%xmm9\n"			// shift right src xmm
					:"=m" (des[0])
					::"memory");
			des += 4;
		}
		break;
	case 7:	// 6 * 5
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		__asm__("movdqu %0,%%xmm9\n"	//load src data
				::"m" (src[0])
				:"memory");
		for (int i=0; i<5; i++) {
			__asm__("movdqa %%xmm9,%%xmm10\n"
					"pand %%xmm5,%%xmm10\n"		// mask
					"movdqu %%xmm10,%0\n"		// write output of 4 int
					"psrld $6,%%xmm9\n"			// shift right src xmm
					:"=m" (des[0])
					::"memory");
			des += 4;
		}
		break;
	case 8: // 8 * 4
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		__asm__("movdqu %0,%%xmm9\n"	//load src data
				::"m" (src[0])
				:"memory");
		for (int i=0; i<4; i++) {
			__asm__("movdqa %%xmm9,%%xmm10\n"
					"pand %%xmm6,%%xmm10\n"		// mask
					"movdqu %%xmm10,%0\n"		// write output of 4 int
					"psrld $8,%%xmm9\n"			// shift right src xmm
					:"=m" (des[0])
					::"memory");
			des += 4;
		}
		break;
	case 9:	// 10 * 3
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		__asm__("movdqu %0,%%xmm9\n"	//load src data
				::"m" (src[0])
				:"memory");
		for (int i=0; i<3; i++) {
			__asm__("movdqa %%xmm9,%%xmm10\n"
					"pand %%xmm7,%%xmm10\n"		// mask
					"movdqu %%xmm10,%0\n"		// write output of 4 int
					"psrld $10,%%xmm9\n"			// shift right src xmm
					:"=m" (des[0])
					::"memory");
			des += 4;
		}
		break;
	case 10:	// 16 * 2
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		__asm__("movdqu %0,%%xmm9\n"	//load src data
				::"m" (src[0])
				:"memory");
		__asm__("movdqa %%xmm9,%%xmm10\n"
				"pand %%xmm8,%%xmm10\n"		// mask
				"movdqu %%xmm10,%0\n"		// write output of 4 int
				"psrld $16,%%xmm9\n"		// shift right src xmm

				"movdqu %%xmm9,%1\n"		// write output of 4 int

				:"=m" (des[0]), "=m" (des[4])
				::"memory");
		break;
	case 11:	// 32 * 1
		__asm__ volatile("prefetchnta %0"::"m" (src[0]));
		__asm__("movdqu %0,%%xmm9\n"	//load src data
				::"m" (src[0])
				:"memory");
		__asm__("movdqu %%xmm9,%0\n"	// write output of 4 int
				:"=m" (des[0])
				::"memory");
		break;
	case 12:	// xmm0 stores 4 integers of 0x1 each
		for (int i=0; i<16; i++) {
			__asm__("movdqu %%xmm0,%0\n"		// write output of 4 int
					:"=m" (des[0])
					::"memory");
			des += 4;
		}
		return 16 * 4;
		//break;
	case 13:
		for (int i=0; i<8; i++) {
			__asm__("movdqu %%xmm0,%0\n"		// write output of 4 int
					:"=m" (des[0])
					::"memory");
			des += 4;
		}
		return 8 * 4;
		//break;
	default:	// end of block
		return 0;
		break;
	}
	return codeNum[mode] << 2;	// note we decode quad integers
}

#endif
