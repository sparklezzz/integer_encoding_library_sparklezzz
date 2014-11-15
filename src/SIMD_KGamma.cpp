/*
 * SIMD_KGamma.cpp
 *
 *  Created on: 2013-2-25
 *      Author: zxd
 */

#ifdef USE_SSE_INSTRUCTION

#include "SIMD_KGamma.hpp"
#include <iostream>

using namespace std;
using namespace paradise::index;

int SIMD_KGamma::encodeUint32(char* des, const uint32_t* src, uint32_t encodeNum) {
	return encode<uint32_t> (des, src, encodeNum);
}
int SIMD_KGamma::decodeUint32(uint32_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint32_t> (des, src, decodeNum);
}

int SIMD_KGamma::encodeUint16(char* des, const uint16_t* src, uint32_t encodeNum) {
	return encode<uint16_t> (des, src, encodeNum);
}
int SIMD_KGamma::decodeUint16(uint16_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint16_t> (des, src, decodeNum);
}

int SIMD_KGamma::encodeUint8(char* des, const uint8_t* src, uint32_t encodeNum) {
	return encode<uint8_t> (des, src, encodeNum);
}
int SIMD_KGamma::decodeUint8(uint8_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint8_t> (des, src, decodeNum);
}
Compressor* SIMD_KGamma::clone() {
	Compressor* pNewComp = new SIMD_KGamma(*this);
	return pNewComp;
}

int SIMD_KGamma::encodeBlock(char* des, const uint32_t* src, uint32_t size) {
	uint32_t curBitOffset = 0;
	uint32_t *desIntBeg = (uint32_t*)des;
	uint32_t *desInt = desIntBeg;
	if (size == 0) {
		return 0;
	}
	memset(desInt, 0, sizeof(uint32_t) * 5);

	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__("pxor %%xmm0,%%xmm0\n":::);

	for (uint32_t i=0; i<size; i+=4) {
		uint32_t maxVal = 0;

		for (uint32_t j=i; j<i+4; j++) {
			uint32_t val = src[j];
			if (maxVal < val) {
				maxVal = val;
			}
		}

		// get effective bit length
		uint32_t tmp = maxVal;
		uint32_t ebl = 0;
		while (tmp > 0) {
			ebl ++;
			tmp >>= 1;
		}
		if (ebl == 0) {	//encode 0
			ebl = 1;
		}

		uint32_t bitLeftInUInt = 32 - curBitOffset;
		if (bitLeftInUInt < ebl) {	//new data should cross uint boundary
			// write incomplete shared prefix: 1->1, 2->11, 3->111...
			*desInt |= mask_map[bitLeftInUInt] << curBitOffset;
			// write data with effective bit length of the max val
			//for (uint32_t k=1, j=i; k<=4; k++, j++) {
			//	*(desInt + k) |= (src[j] & mask_map[bitLeftInUInt]) << curBitOffset;
			//}
			__asm__("movdqu %1,%%xmm3\n"                            //src[0]->xmm0
					"movdqa %%xmm3,%%xmm4\n"						//backup for next codeword
					"movd %2,%%xmm1\n"								//shiftLeft->xmm1
					"pslld %%xmm1,%%xmm3\n"							//shift left->xmm0					"psrld %%xmm2,%%xmm0\n"							//shift right->xmm
					"por %%xmm3,%%xmm0\n"
					"movdqu %%xmm0,%0\n"							//write back codeword
					:"=m" (desInt[1])
					:"m" (src[i]),"m" (curBitOffset)
					:"memory");


			//start a new group and left val
			desInt += 5;
			curBitOffset = 0;
			memset(desInt, 0, sizeof(uint32_t) * 5);
			uint32_t bitUnwritten = ebl - bitLeftInUInt;
			// write shared prefix: 1->0, 2->10, 3->110...
			*desInt |= mask_map[bitUnwritten - 1];
			//for (uint32_t k=1, j=i; k<=4; k++, j++) {
			//	*(desInt + k) |= (src[j] >> bitLeftInUInt) & mask_map[bitUnwritten] ;
			//}
			uint32_t shiftLeft = 32 - ebl;
			uint32_t shiftRight = 32 - bitUnwritten;
	        __asm__("movdqa %%xmm4,%%xmm0\n"
	        		"movd %0,%%xmm1\n"								//shiftLeft->xmm1
	        		"movd %1,%%xmm2\n"								//shiftRight->xmm2
	        		"pslld %%xmm1,%%xmm0\n"							//shift left->xmm0
	        		"psrld %%xmm2,%%xmm0\n"							//shift right->xmm0
					::"m" (shiftLeft),"m" (shiftRight)
					:"memory");

			curBitOffset = bitUnwritten;

		}
		else {
			// write shared prefix: 1->0, 2->10, 3->110...
			*desInt |= mask_map[ebl - 1] << curBitOffset;
			// write data with effective bit length of the max val
			//for (uint32_t k=1, j=i; k<=4; k++, j++) {
			//	*(desInt + k) |= (src[j] & mask_map[ebl]) << curBitOffset;
			//}
			uint32_t shiftLeft = 32 - ebl;
			uint32_t shiftRight = shiftLeft - curBitOffset;
			__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	        __asm__("movdqu %0,%%xmm3\n"                            //src[0]->xmm3
	        		"movd %1,%%xmm1\n"								//shiftLeft->xmm1
	        		"movd %2,%%xmm2\n"								//shiftRight->xmm2
	        		"pslld %%xmm1,%%xmm3\n"							//shift left->xmm0
	        		"psrld %%xmm2,%%xmm3\n"							//shift right->xmm0
	        		"por %%xmm3,%%xmm0\n"
					::"m" (src[i]),"m" (shiftLeft),"m" (shiftRight)
					:"memory");

			curBitOffset += ebl;
		}
	}

	__asm__("movdqu %%xmm0,%0\n"                            //xmm0->desInt[1]
			:"=m" (desInt[1])
			::"memory");

	desInt += 5;
	return (desInt - desIntBeg) * 4;
}

int SIMD_KGamma::decodeBlock(uint32_t* des, const char* src, uint32_t size) {
	const uint32_t *srcIntBeg = (const uint32_t*)src;
	const uint32_t *srcInt = srcIntBeg;

	if (size == 0) {
		return 0;
	}

	int decoded = 0;
	uint32_t curBitOffset = 0;

	while (decoded < size) {
		uint32_t ebl = 0;
		uint32_t newBitOffset = curBitOffset;
		bool completeInt = false;
		while (newBitOffset < 32) {	//get shared prefix
			ebl++;
			if ((*srcInt >> newBitOffset) & 1) {
				newBitOffset ++;
				continue;
			}
			else {
				completeInt = true;
				break;
			}
		}

		//for	(uint32_t k=0, j=1; j<=4; k++, j++) {
		//	*(des+k) = (*(srcInt+j) >> curBitOffset) & mask_map[ebl];
		//}

		uint32_t shiftRight = 32 - ebl;
		uint32_t shiftLeft = shiftRight - curBitOffset;
		__asm__ volatile("prefetchnta %0"::"m" (srcInt[1]));
        __asm__("movdqu %0,%%xmm0\n"                            //srcInt[0]->xmm0
        		"movd %1,%%xmm1\n"								//shiftLeft->xmm1
        		"movd %2,%%xmm2\n"								//shiftRight->xmm2
        		"pslld %%xmm1,%%xmm0\n"							//shift left->xmm0
        		"psrld %%xmm2,%%xmm0\n"							//shift right->xmm0
				::"m" (srcInt[1]),"m" (shiftLeft),"m" (shiftRight)
				:"memory");

		curBitOffset += ebl;

		if (!completeInt) {	//start to read a new group
			assert (curBitOffset == 32);
			srcInt += 5;
			curBitOffset = 0;
			uint32_t restebl = 0;
			while (restebl < 32) {
				if (!((*srcInt >> restebl) & 1)) {
					restebl ++;
					break;
				}
				restebl ++;
			}

			//for (uint32_t k=0, j=1; j<=4; k++, j++) {
			//	*(des+k) |= (*(srcInt+j) & mask_map[restebl]) << ebl;
			//}

			uint32_t newShiftLeft = 32 - restebl;
			uint32_t newShiftRight = newShiftLeft - ebl;

			__asm__ volatile("prefetchnta %0"::"m" (srcInt[1]));
			__asm__("movdqu %0,%%xmm3\n"                            //srcInt[0]->xmm3
					"movd %1,%%xmm1\n"								//newShiftLeft->xmm1's low 32bit
					"movd %2,%%xmm2\n"								//newShiftRight->xmm2's low 32bit
					"pslld %%xmm1,%%xmm3\n"							//shift left->xmm3
					"psrld %%xmm2,%%xmm3\n"							//shift right->xmm3
					"por %%xmm3,%%xmm0\n"							//or xmm3->xmm0

					::"m" (srcInt[1]),"m" (newShiftLeft),"m" (newShiftRight)
					:"memory");

			curBitOffset = restebl;
		}

		__asm__("movdqu %%xmm0,%0\n"                            //srcInt[0]->xmm0
				:"=m" (des[0])
				::"memory");

		des += 4;
		decoded += 4;
	}

	srcInt += 5;
	return (srcInt - srcIntBeg) * 4;
}

#endif
