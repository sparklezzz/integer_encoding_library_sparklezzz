/*
 * GroupVBIUIntelParallel.cpp
 *
 *  Created on: 2013-1-22
 *      Author: zxd
 */

#ifdef USE_SSE_INSTRUCTION

#include "GroupVBIUIntelParallel.hpp"

using namespace paradise::index;

int GroupVBIUIntelParallel::encodeUint32(char* des, const uint32_t* src,
		uint32_t encodeNum) {
	return encode<uint32_t> (des, src, encodeNum);
}
int GroupVBIUIntelParallel::decodeUint32(uint32_t* des, const char* src,
		uint32_t decodeNum) {
	return decode<uint32_t> (des, src, decodeNum);
}

int GroupVBIUIntelParallel::encodeUint16(char* des, const uint16_t* src,
		uint32_t encodeNum) {
	return encode<uint16_t> (des, src, encodeNum);
}
int GroupVBIUIntelParallel::decodeUint16(uint16_t* des, const char* src,
		uint32_t decodeNum) {
	return decode<uint16_t> (des, src, decodeNum);
}

int GroupVBIUIntelParallel::encodeUint8(char* des, const uint8_t* src, uint32_t encodeNum) {
	return encode<uint8_t> (des, src, encodeNum);
}
int GroupVBIUIntelParallel::decodeUint8(uint8_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint8_t> (des, src, decodeNum);
}
Compressor* GroupVBIUIntelParallel::clone() {
	Compressor* pNewComp = new GroupVBIUIntelParallel(*this);
	return pNewComp;
}

// bug: with template specialization, use function overload instead
// template <>
int GroupVBIUIntelParallel::decodeBlock(uint32_t* des, const char* src, uint32_t decodeNum) {
        const char* srcBeg = src;
        uint32_t val;
        uint8_t maskNum;
        uint32_t curPos = 0;
        while (curPos < decodeNum) {
                maskNum = *src;
                src++;
                GvintIncompUnaryUnpackIntelParaInfo& unpackInfo = incompUnaryUnpackIntelParaInfoArr[maskNum];
                if (!unpackInfo.valid) {
                        cout << "invalid group " << maskNum << endl;
                }

                uint32_t intNum = unpackInfo.intNum;

		if (curPos + 7 >= decodeNum) {//probably not enough des space to write into, use sequence algorithm
			//cout << curPos << " " << intNum << " " << decodeNum << endl;
			GvintIncompUnaryUnpackInfo& unpackInfo1 = incompUnaryUnpackInfoArr[maskNum];
			uint8_t* pOffset = unpackInfo1.offsetArr;
			uint32_t* pMask = unpackInfo1.maskArr;

			for (uint32_t j=0; j<intNum; j++, pOffset++, pMask++) {
				val = (*(uint32_t*) (src + *pOffset));
				des[j] = val & *pMask;
			}
		}
		
		else {	//use parallel

                //if (intNum > 4) {       //need 2 pshufb
                        __asm__ volatile("prefetchnta %0"::"m" (((uint64_t*)src)[0]));
                        __asm__("movdqu %2,%%xmm1\n"                            //src[0]->xmm1
                                        "movdqu %3,%%xmm2\n"                            //shf[0]->xmm2
                                        "movdqu %4,%%xmm3\n"                                    //shf[16]->xmm3
                                        "movdqa %%xmm1,%%xmm4\n"                                //backup for 2nd pshufb
                                        "pshufb %%xmm2,%%xmm1\n"                //shuffle by mask reg xmm2 -> xmm1
                                        "pshufb %%xmm3,%%xmm4\n"                //shuffle by mask reg xmm3 -> xmm4
                                        "movdqu %%xmm1,%0\n"                    //save output
                                        "movdqu %%xmm4,%1\n"                    //save output

                                        :"=m" (des[0]),"=m" (des[4])
                                        :"m" (src[0]),"m" (unpackInfo.shf[0]),"m" (unpackInfo.shf[16])
                                        :"memory");

                //}
                /*else {  //need 1 pshufb
                		__asm__ volatile("prefetchnta %0"::"m" (((uint64_t*)src)[0]));
                        __asm__("movdqu %1,%%xmm1\n"                            //src[0]->xmm1
                                        "movdqu %2,%%xmm2\n"                            //shf[0]->xmm2
                                        "pshufb %%xmm2,%%xmm1\n"                //shuffle by mask reg xmm2 -> xmm1
                                        "movdqu %%xmm1,%0\n"                   //save output

                                        :"=m" (des[0])
                                        :"m" (src[0]),"m" (unpackInfo.shf[0])
                                        :"memory");
                }*/

		}	//end of parallel
		
                src += 8;
                des += intNum;
                curPos += intNum;
        }
	//cout << decodeNum << endl;
        return src - srcBeg;

}

#endif
