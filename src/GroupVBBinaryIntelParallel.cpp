/**
 *@filename: GroupGroupVBBinaryIntelParallel.cpp
 *@brief   :
 *@create  : 2010-11-13
 *@author  : shandd
 */

#ifdef USE_SSE_INSTRUCTION

#include "GroupVBBinaryIntelParallel.hpp"
using namespace paradise::index;

int GroupVBBinaryIntelParallel::encodeUint32(char* des, const uint32_t* src,
		uint32_t encodeNum) {
	return encode<uint32_t> (des, src, encodeNum);
}
int GroupVBBinaryIntelParallel::decodeUint32(uint32_t* des, const char* src,
		uint32_t decodeNum) {
	return decode<uint32_t> (des, src, decodeNum);
}

int GroupVBBinaryIntelParallel::encodeUint16(char* des, const uint16_t* src,
		uint32_t encodeNum) {
	return encode<uint16_t> (des, src, encodeNum);
}
int GroupVBBinaryIntelParallel::decodeUint16(uint16_t* des, const char* src,
		uint32_t decodeNum) {
	return decode<uint16_t> (des, src, decodeNum);
}

int GroupVBBinaryIntelParallel::encodeUint8(char* des, const uint8_t* src, uint32_t encodeNum) {
	return encode<uint8_t> (des, src, encodeNum);
}
int GroupVBBinaryIntelParallel::decodeUint8(uint8_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint8_t> (des, src, decodeNum);
}
Compressor* GroupVBBinaryIntelParallel::clone() {
	Compressor* pNewComp = new GroupVBBinaryIntelParallel(*this);
	return pNewComp;
}

//overload
int GroupVBBinaryIntelParallel::decodeBlock(uint32_t* des, const char* src, uint32_t decodeNum) {
	const char* srcBeg = src;
	uint32_t val;
	uint8_t maskNum;
	for (uint32_t curPos = 0; curPos + 4 <= decodeNum;) {
		maskNum = *src;
		src++;
		GvintBinaryUnpackIntelParaInfo& unpackInfo = binaryUnpackIntelParaInfoArr[maskNum];

		if (curPos + 4 == decodeNum) { //last group, to avoid out-of-bound access of src, use sequence
			GvintUnpackInfo& unpackInfo1 = unpackInfoArr[maskNum];
			val = (*(uint32_t*) (src + unpackInfo1.offset0));
			des[0] = val & unpackInfo1.mask0;
			val = (*(uint32_t*) (src + unpackInfo1.offset1));
			des[1] = val & unpackInfo1.mask1;
			val = (*(uint32_t*) (src + unpackInfo1.offset2));
			des[2] = val & unpackInfo1.mask2;
			val = (*(uint32_t*) (src + unpackInfo1.offset3));
			des[3] = val & unpackInfo1.mask3;
		}
		else {
			__asm__ volatile("prefetchnta %0"::"m" (((uint32_t*)src)[0]));
			__asm__("movdqu %1,%%xmm1\n"                            //src[0]->xmm1
				"movdqu %2,%%xmm2\n"                            //shf[0]->xmm2
				"pshufb %%xmm2,%%xmm1\n"                		//shuffle by mask reg xmm2 -> xmm1
				"movdqu %%xmm1,%0\n"                   			//save output

				:"=m" (des[0])
				:"m" (src[0]),"m" (unpackInfo.shf[0])
				:"memory");
		}
		src += unpackInfo.skip;
		des += 4;
		curPos += 4;
	}

	return src - srcBeg;

}

#endif
