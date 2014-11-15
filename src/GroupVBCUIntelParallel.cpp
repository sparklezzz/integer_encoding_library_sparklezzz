/*
 * GroupVBCUIntelParallel.cpp
 *
 *  Created on: 2013-1-24
 *      Author: zxd
 */

#ifdef USE_SSE_INSTRUCTION

#include "GroupVBCUIntelParallel.hpp"

using namespace paradise::index;

int GroupVBCUIntelParallel::encodeUint32(char* des, const uint32_t* src,
		uint32_t encodeNum) {
	return encode<uint32_t> (des, src, encodeNum);
}
int GroupVBCUIntelParallel::decodeUint32(uint32_t* des, const char* src,
		uint32_t decodeNum) {
	return decode<uint32_t> (des, src, decodeNum);
}

int GroupVBCUIntelParallel::encodeUint16(char* des, const uint16_t* src,
		uint32_t encodeNum) {
	return encode<uint16_t> (des, src, encodeNum);
}
int GroupVBCUIntelParallel::decodeUint16(uint16_t* des, const char* src,
		uint32_t decodeNum) {
	return decode<uint16_t> (des, src, decodeNum);
}

int GroupVBCUIntelParallel::encodeUint8(char* des, const uint8_t* src, uint32_t encodeNum) {
	return encode<uint8_t> (des, src, encodeNum);
}
int GroupVBCUIntelParallel::decodeUint8(uint8_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint8_t> (des, src, decodeNum);
}
Compressor* GroupVBCUIntelParallel::clone() {
	Compressor* pNewComp = new GroupVBCUIntelParallel(*this);
	return pNewComp;
}

//overload
int GroupVBCUIntelParallel::decodeBlock(uint32_t* des, const char* src, uint32_t decodeNum) {
	const char* srcBeg = src;
	uint8_t *desChar = (uint8_t*)des;	//use byte unit to deal with des arr
	uint32_t val;
	uint8_t maskNum;
	uint32_t curPos = 0;
	uint32_t lastStatus = 0;
	while (curPos < decodeNum) {
			maskNum = *src;
			uint32_t infoIdx = (lastStatus << 8) + maskNum;
			src++;
			GvintCompUnaryUnpackIntelParaInfo& unpackInfo = CompUnaryUnpackIntelParaInfoArr[infoIdx];

			//intNum only counts complete integers in the group and remaining part from last group
			//non including incomplete integer at the end of the group
			uint32_t intNum = unpackInfo.intNum;

			if (!unpackInfo.valid && curPos + intNum < decodeNum) {
				cout << "invalid group " << maskNum << endl;
			}

			uint32_t byteToWrite;
			if (curPos + 8 >= decodeNum) {//last several group, probably not enough des space to write into, use sequence algorithm
				//cout << decodeNum << " " << curPos << " " << intNum << endl;
				if (curPos + intNum >= decodeNum)	//last group, ignore statusGen
					byteToWrite = (intNum << 2) - lastStatus;
				else
					byteToWrite = unpackInfo.desByteSkip;
				//cout << "byte to write in last group:" << byteToWrite << endl;
				for (uint32_t n=0; n<byteToWrite; n++) {
					uint8_t shfPos = unpackInfo.shf[n];
					if (shfPos != 0xff)
						desChar[n] = src[shfPos];
					else
						desChar[n] = 0;
				}
			}

			else {	//use parallel
					byteToWrite = unpackInfo.desByteSkip;
					//if (byteToWrite > 16) {       //need 2 pshufb
							__asm__ volatile("prefetchnta %0"::"m" (((uint64_t*)src)[0]));
							__asm__("movdqu %2,%%xmm1\n"                            //src[0]->xmm1
											"movdqu %3,%%xmm2\n"                            //shf[0]->xmm2
											"movdqu %4,%%xmm3\n"                                    //shf[16]->xmm3
											"movdqa %%xmm1,%%xmm4\n"                                //backup for 2nd pshufb
											"pshufb %%xmm2,%%xmm1\n"                //shuffle by mask reg xmm2 -> xmm1
											"pshufb %%xmm3,%%xmm4\n"                //shuffle by mask reg xmm3 -> xmm4
											"movdqu %%xmm1,%0\n"                    //save output
											"movdqu %%xmm4,%1\n"                    //save output

											:"=m" (desChar[0]),"=m" (desChar[16])
											:"m" (src[0]),"m" (unpackInfo.shf[0]),"m" (unpackInfo.shf[16])
											:"memory");

					//}
					/*else {  //need 1 pshufb
							__asm__ volatile("prefetchnta %0"::"m" (((uint64_t*)src)[0]));
							__asm__("movdqu %1,%%xmm1\n"                            //src[0]->xmm1
											"movdqu %2,%%xmm2\n"                            //shf[0]->xmm2
											"pshufb %%xmm2,%%xmm1\n"                //shuffle by mask reg xmm2 -> xmm1
											"movdqu %%xmm1,%0\n"                   //save output

											:"=m" (desChar[0])
											:"m" (src[0]),"m" (unpackInfo.shf[0])
											:"memory");
					}*/
			}	//end of parallel

			src += 8;
			desChar += byteToWrite;	//skip num of bytes written to des arr from the group
			//cout << "curPos: " << curPos << " lastByteWritten: " << (int)(*(desChar - 1)) << endl;
			curPos += intNum;
			//update status gen by this group
			lastStatus = unpackInfo.statusGen;
			//cout << "infoIdx: " << infoIdx << " intNum: " << intNum << " StatusGen: " << lastStatus << endl; 
	}
	//cout << decodeNum << endl;
	return src - srcBeg;

}

#endif
