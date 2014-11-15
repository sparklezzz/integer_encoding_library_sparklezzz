/*
 * SIMD_KVarByte.hpp
 *
 *
 *  Created on: 2013-3-2
 *      Author: zxd
 */

#ifndef SIMD_KVARBYTE_HPP_
#define SIMD_KVARBYTE_HPP_

#ifdef USE_SSE_INSTRUCTION

#include <stdint.h>
#include <cmath>
#include <assert.h>
#include <string.h>
#include "Compressor.hpp"
#include "VarByte.hpp"
#include "simd_kvint_unpack_4ints.hpp"
#include "simd_kvint_unpack_8ints.hpp"
#include "simd_kvint_unpack_16ints.hpp"
#include <iostream>

using namespace std;

namespace paradise {
namespace index {

class SIMD_KVarByte: public Compressor {
public:
	SIMD_KVarByte() {
	}
	virtual ~SIMD_KVarByte() {
	}

public:
	virtual int
	encodeUint32(char* des, const uint32_t* src, uint32_t encodeNum);
	virtual int
	decodeUint32(uint32_t* des, const char* src, uint32_t decodeNum);

	virtual int
	encodeUint16(char* des, const uint16_t* src, uint32_t encodeNum);
	virtual int
	decodeUint16(uint16_t* des, const char* src, uint32_t decodeNum);

	virtual int encodeUint8(char* des, const uint8_t* src, uint32_t encodeNum);
	virtual int decodeUint8(uint8_t* des, const char* src, uint32_t decodeNum);
	virtual std::string getCompressorName() {
		return "SIMD_KVarByte";
	}
	virtual Compressor* clone();
private:
	template<typename T>
	int encode(char* des, const T* src, uint32_t length);

	template<typename T>
	int decode(T* des, const char* src, uint32_t length);

	template<typename T>
	int encodeBlock(char* des, const T* src, uint32_t size);

	template<typename T>
	int decodeBlock(T* des, const char* src, uint32_t size);

};

template<typename T>
int SIMD_KVarByte::encode(char* des, const T* src, uint32_t encodeNum) {
	if (encodeNum < 4) {
		return VarByte::encode(des, src, encodeNum);
	}

	int compLen = 0;
	int left = encodeNum % 4;
	if (left > 0) {
		compLen = encodeBlock(des, src, encodeNum - left);
		compLen += VarByte::encode(des + compLen, src + encodeNum - left, left);
	} else {
		compLen = encodeBlock(des, src, encodeNum);
	}
	return compLen;
}

template<typename T>
int SIMD_KVarByte::decode(T* des, const char* src, uint32_t decodeNum) {
	if (decodeNum < 4) {
		return VarByte::decode(des, src, decodeNum);
	}	

	int decodeLen = 0;
	int left = decodeNum % 4;
	if (left > 0) {
		decodeLen = decodeBlock(des, src, decodeNum - left);
		decodeLen += VarByte::decode(des + decodeNum - left, src + decodeLen,
				left);
	} else {
		decodeLen = decodeBlock(des, src, decodeNum);
	}

	return decodeLen;
}
template<typename T>
int SIMD_KVarByte::encodeBlock(char* des, const T* src, uint32_t encodeNum) {
	const static uint32_t byte_mask_map[5] = {0, 0xff, 0xffff, 0xffffff, 0xffffffff};
	uint32_t quadEncodeNum = encodeNum / 4;
	char *desBeg = des;
	uint32_t *desInt = (uint32_t*)des;
	char *modeSegPos = des + 4;	//leave first 4 byte to record the begin position of data segment
	char *dataSegPos = modeSegPos + (quadEncodeNum + 3)/4;
	uint32_t *dataSegPosInt = (uint32_t*)dataSegPos;

	memset(modeSegPos, 0, (quadEncodeNum + 3)/4);
	*desInt = 4 + (quadEncodeNum + 3) / 4;	// record the begin position of data segment

	int k = 0;
	uint32_t quadIdx = 0;
	uint32_t curByteOffset = 0;

	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__("pxor %%xmm0,%%xmm0\n":::);

	for (uint32_t i=0; i<encodeNum; i+=4) {

		// step1: get quad max int
		T quadMaxInt = src[0];
		for (uint32_t j=1; j<4; j++) {
			quadMaxInt |= src[j];
		}

		// step2: get bytes needed for quad max int
		if (quadMaxInt == 0)
			quadMaxInt ++;
		char byteCount = 0;
		while (quadMaxInt > 0) {
			quadMaxInt >>= 8;
			byteCount ++;
		}
		*modeSegPos |= (byteCount-1) << ((quadIdx & 0x3) << 1);
		quadIdx ++;
		if (!(quadIdx & 0x3)) {
			modeSegPos ++;
		}

		// step3: encode group of 4 ints
		uint32_t byteLeftInUInt = 4 - curByteOffset;
		uint32_t curBitOffset = curByteOffset << 3;
		uint32_t bitCount = byteCount << 3;
		if (byteLeftInUInt < byteCount) {	//new data should cross uint boundary
			// write data with effective bit length of the max val
			//for (uint32_t k=0; k<4; k++) {
			//	*(dataSegPosInt + k) |= (src[k] & byte_mask_map[byteLeftInUInt]) << (curByteOffset<<3);
			//}
			__asm__("movdqu %1,%%xmm3\n"                            //src[0]->xmm0
					"movdqa %%xmm3,%%xmm4\n"						//backup for next codeword
					"movd %2,%%xmm1\n"								//shiftLeft->xmm1
					"pslld %%xmm1,%%xmm3\n"							//shift left->xmm0					"psrld %%xmm2,%%xmm0\n"							//shift right->xmm
					"por %%xmm3,%%xmm0\n"
					"movdqu %%xmm0,%0\n"							//write back codeword
					:"=m" (dataSegPosInt[0])
					:"m" (src[0]),"m" (curBitOffset)
					:"memory");

			//start a new group and left val
			dataSegPosInt += 4;
			uint32_t byteUnwritten = byteCount - byteLeftInUInt;
			uint32_t bitUnwritten = byteUnwritten << 3;
			//for (uint32_t k=0; k<4; k++) {
			//	*(dataSegPosInt + k) = (src[k] >> (byteLeftInUInt<<3)) & byte_mask_map[byteUnwritten] ;
			//}
			uint32_t shiftLeft = 32 - bitCount;
			uint32_t shiftRight = 32 - bitUnwritten;
	        __asm__("movdqa %%xmm4,%%xmm0\n"
	        		"movd %0,%%xmm1\n"								//shiftLeft->xmm1
	        		"movd %1,%%xmm2\n"								//shiftRight->xmm2
	        		"pslld %%xmm1,%%xmm0\n"							//shift left->xmm0
	        		"psrld %%xmm2,%%xmm0\n"							//shift right->xmm0
					::"m" (shiftLeft),"m" (shiftRight)
					:"memory");

			curByteOffset = byteUnwritten;
		}
		else {
			// write data with effective bit length of the max val
			//for (uint32_t k=0; k<4; k++) {
			//	*(dataSegPosInt + k) |= (src[k] & byte_mask_map[byteCount]) << (curByteOffset<<3);
			//}
			uint32_t shiftLeft = 32 - bitCount;
			uint32_t shiftRight = shiftLeft - curBitOffset;
			__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	        __asm__("movdqu %0,%%xmm3\n"                            //src[0]->xmm3
	        		"movd %1,%%xmm1\n"								//shiftLeft->xmm1
	        		"movd %2,%%xmm2\n"								//shiftRight->xmm2
	        		"pslld %%xmm1,%%xmm3\n"							//shift left->xmm0
	        		"psrld %%xmm2,%%xmm3\n"							//shift right->xmm0
	        		"por %%xmm3,%%xmm0\n"
					::"m" (src[0]),"m" (shiftLeft),"m" (shiftRight)
					:"memory");

			curByteOffset += byteCount;
		}

		src += 4;
	}

	__asm__("movdqu %%xmm0,%0\n"
			:"=m" (dataSegPosInt[0])
			::"memory");
	dataSegPosInt += 4;

	return (char*)dataSegPosInt - desBeg;
}

template<typename T>
int SIMD_KVarByte::decodeBlock(T* des, const char* src, uint32_t decodeNum) {

	typedef void (*simd_kvint_unpackFun)(T *des, const uint32_t *src);
	static simd_kvint_unpackFun simd_kvint_unpackFuns_16ints[1024] = {
			simd_kvint_unpack_0_0_0_0_0<T>,simd_kvint_unpack_0_0_0_0_1<T>,simd_kvint_unpack_0_0_0_0_2<T>,simd_kvint_unpack_0_0_0_0_3<T>,
			simd_kvint_unpack_0_0_0_1_0<T>,simd_kvint_unpack_0_0_0_1_1<T>,simd_kvint_unpack_0_0_0_1_2<T>,simd_kvint_unpack_0_0_0_1_3<T>,
			simd_kvint_unpack_0_0_0_2_0<T>,simd_kvint_unpack_0_0_0_2_1<T>,simd_kvint_unpack_0_0_0_2_2<T>,simd_kvint_unpack_0_0_0_2_3<T>,
			simd_kvint_unpack_0_0_0_3_0<T>,simd_kvint_unpack_0_0_0_3_1<T>,simd_kvint_unpack_0_0_0_3_2<T>,simd_kvint_unpack_0_0_0_3_3<T>,
			simd_kvint_unpack_0_0_1_0_0<T>,simd_kvint_unpack_0_0_1_0_1<T>,simd_kvint_unpack_0_0_1_0_2<T>,simd_kvint_unpack_0_0_1_0_3<T>,
			simd_kvint_unpack_0_0_1_1_0<T>,simd_kvint_unpack_0_0_1_1_1<T>,simd_kvint_unpack_0_0_1_1_2<T>,simd_kvint_unpack_0_0_1_1_3<T>,
			simd_kvint_unpack_0_0_1_2_0<T>,simd_kvint_unpack_0_0_1_2_1<T>,simd_kvint_unpack_0_0_1_2_2<T>,simd_kvint_unpack_0_0_1_2_3<T>,
			simd_kvint_unpack_0_0_1_3_0<T>,simd_kvint_unpack_0_0_1_3_1<T>,simd_kvint_unpack_0_0_1_3_2<T>,simd_kvint_unpack_0_0_1_3_3<T>,
			simd_kvint_unpack_0_0_2_0_0<T>,simd_kvint_unpack_0_0_2_0_1<T>,simd_kvint_unpack_0_0_2_0_2<T>,simd_kvint_unpack_0_0_2_0_3<T>,
			simd_kvint_unpack_0_0_2_1_0<T>,simd_kvint_unpack_0_0_2_1_1<T>,simd_kvint_unpack_0_0_2_1_2<T>,simd_kvint_unpack_0_0_2_1_3<T>,
			simd_kvint_unpack_0_0_2_2_0<T>,simd_kvint_unpack_0_0_2_2_1<T>,simd_kvint_unpack_0_0_2_2_2<T>,simd_kvint_unpack_0_0_2_2_3<T>,
			simd_kvint_unpack_0_0_2_3_0<T>,simd_kvint_unpack_0_0_2_3_1<T>,simd_kvint_unpack_0_0_2_3_2<T>,simd_kvint_unpack_0_0_2_3_3<T>,
			simd_kvint_unpack_0_0_3_0_0<T>,simd_kvint_unpack_0_0_3_0_1<T>,simd_kvint_unpack_0_0_3_0_2<T>,simd_kvint_unpack_0_0_3_0_3<T>,
			simd_kvint_unpack_0_0_3_1_0<T>,simd_kvint_unpack_0_0_3_1_1<T>,simd_kvint_unpack_0_0_3_1_2<T>,simd_kvint_unpack_0_0_3_1_3<T>,
			simd_kvint_unpack_0_0_3_2_0<T>,simd_kvint_unpack_0_0_3_2_1<T>,simd_kvint_unpack_0_0_3_2_2<T>,simd_kvint_unpack_0_0_3_2_3<T>,
			simd_kvint_unpack_0_0_3_3_0<T>,simd_kvint_unpack_0_0_3_3_1<T>,simd_kvint_unpack_0_0_3_3_2<T>,simd_kvint_unpack_0_0_3_3_3<T>,
			simd_kvint_unpack_0_1_0_0_0<T>,simd_kvint_unpack_0_1_0_0_1<T>,simd_kvint_unpack_0_1_0_0_2<T>,simd_kvint_unpack_0_1_0_0_3<T>,
			simd_kvint_unpack_0_1_0_1_0<T>,simd_kvint_unpack_0_1_0_1_1<T>,simd_kvint_unpack_0_1_0_1_2<T>,simd_kvint_unpack_0_1_0_1_3<T>,
			simd_kvint_unpack_0_1_0_2_0<T>,simd_kvint_unpack_0_1_0_2_1<T>,simd_kvint_unpack_0_1_0_2_2<T>,simd_kvint_unpack_0_1_0_2_3<T>,
			simd_kvint_unpack_0_1_0_3_0<T>,simd_kvint_unpack_0_1_0_3_1<T>,simd_kvint_unpack_0_1_0_3_2<T>,simd_kvint_unpack_0_1_0_3_3<T>,
			simd_kvint_unpack_0_1_1_0_0<T>,simd_kvint_unpack_0_1_1_0_1<T>,simd_kvint_unpack_0_1_1_0_2<T>,simd_kvint_unpack_0_1_1_0_3<T>,
			simd_kvint_unpack_0_1_1_1_0<T>,simd_kvint_unpack_0_1_1_1_1<T>,simd_kvint_unpack_0_1_1_1_2<T>,simd_kvint_unpack_0_1_1_1_3<T>,
			simd_kvint_unpack_0_1_1_2_0<T>,simd_kvint_unpack_0_1_1_2_1<T>,simd_kvint_unpack_0_1_1_2_2<T>,simd_kvint_unpack_0_1_1_2_3<T>,
			simd_kvint_unpack_0_1_1_3_0<T>,simd_kvint_unpack_0_1_1_3_1<T>,simd_kvint_unpack_0_1_1_3_2<T>,simd_kvint_unpack_0_1_1_3_3<T>,
			simd_kvint_unpack_0_1_2_0_0<T>,simd_kvint_unpack_0_1_2_0_1<T>,simd_kvint_unpack_0_1_2_0_2<T>,simd_kvint_unpack_0_1_2_0_3<T>,
			simd_kvint_unpack_0_1_2_1_0<T>,simd_kvint_unpack_0_1_2_1_1<T>,simd_kvint_unpack_0_1_2_1_2<T>,simd_kvint_unpack_0_1_2_1_3<T>,
			simd_kvint_unpack_0_1_2_2_0<T>,simd_kvint_unpack_0_1_2_2_1<T>,simd_kvint_unpack_0_1_2_2_2<T>,simd_kvint_unpack_0_1_2_2_3<T>,
			simd_kvint_unpack_0_1_2_3_0<T>,simd_kvint_unpack_0_1_2_3_1<T>,simd_kvint_unpack_0_1_2_3_2<T>,simd_kvint_unpack_0_1_2_3_3<T>,
			simd_kvint_unpack_0_1_3_0_0<T>,simd_kvint_unpack_0_1_3_0_1<T>,simd_kvint_unpack_0_1_3_0_2<T>,simd_kvint_unpack_0_1_3_0_3<T>,
			simd_kvint_unpack_0_1_3_1_0<T>,simd_kvint_unpack_0_1_3_1_1<T>,simd_kvint_unpack_0_1_3_1_2<T>,simd_kvint_unpack_0_1_3_1_3<T>,
			simd_kvint_unpack_0_1_3_2_0<T>,simd_kvint_unpack_0_1_3_2_1<T>,simd_kvint_unpack_0_1_3_2_2<T>,simd_kvint_unpack_0_1_3_2_3<T>,
			simd_kvint_unpack_0_1_3_3_0<T>,simd_kvint_unpack_0_1_3_3_1<T>,simd_kvint_unpack_0_1_3_3_2<T>,simd_kvint_unpack_0_1_3_3_3<T>,
			simd_kvint_unpack_0_2_0_0_0<T>,simd_kvint_unpack_0_2_0_0_1<T>,simd_kvint_unpack_0_2_0_0_2<T>,simd_kvint_unpack_0_2_0_0_3<T>,
			simd_kvint_unpack_0_2_0_1_0<T>,simd_kvint_unpack_0_2_0_1_1<T>,simd_kvint_unpack_0_2_0_1_2<T>,simd_kvint_unpack_0_2_0_1_3<T>,
			simd_kvint_unpack_0_2_0_2_0<T>,simd_kvint_unpack_0_2_0_2_1<T>,simd_kvint_unpack_0_2_0_2_2<T>,simd_kvint_unpack_0_2_0_2_3<T>,
			simd_kvint_unpack_0_2_0_3_0<T>,simd_kvint_unpack_0_2_0_3_1<T>,simd_kvint_unpack_0_2_0_3_2<T>,simd_kvint_unpack_0_2_0_3_3<T>,
			simd_kvint_unpack_0_2_1_0_0<T>,simd_kvint_unpack_0_2_1_0_1<T>,simd_kvint_unpack_0_2_1_0_2<T>,simd_kvint_unpack_0_2_1_0_3<T>,
			simd_kvint_unpack_0_2_1_1_0<T>,simd_kvint_unpack_0_2_1_1_1<T>,simd_kvint_unpack_0_2_1_1_2<T>,simd_kvint_unpack_0_2_1_1_3<T>,
			simd_kvint_unpack_0_2_1_2_0<T>,simd_kvint_unpack_0_2_1_2_1<T>,simd_kvint_unpack_0_2_1_2_2<T>,simd_kvint_unpack_0_2_1_2_3<T>,
			simd_kvint_unpack_0_2_1_3_0<T>,simd_kvint_unpack_0_2_1_3_1<T>,simd_kvint_unpack_0_2_1_3_2<T>,simd_kvint_unpack_0_2_1_3_3<T>,
			simd_kvint_unpack_0_2_2_0_0<T>,simd_kvint_unpack_0_2_2_0_1<T>,simd_kvint_unpack_0_2_2_0_2<T>,simd_kvint_unpack_0_2_2_0_3<T>,
			simd_kvint_unpack_0_2_2_1_0<T>,simd_kvint_unpack_0_2_2_1_1<T>,simd_kvint_unpack_0_2_2_1_2<T>,simd_kvint_unpack_0_2_2_1_3<T>,
			simd_kvint_unpack_0_2_2_2_0<T>,simd_kvint_unpack_0_2_2_2_1<T>,simd_kvint_unpack_0_2_2_2_2<T>,simd_kvint_unpack_0_2_2_2_3<T>,
			simd_kvint_unpack_0_2_2_3_0<T>,simd_kvint_unpack_0_2_2_3_1<T>,simd_kvint_unpack_0_2_2_3_2<T>,simd_kvint_unpack_0_2_2_3_3<T>,
			simd_kvint_unpack_0_2_3_0_0<T>,simd_kvint_unpack_0_2_3_0_1<T>,simd_kvint_unpack_0_2_3_0_2<T>,simd_kvint_unpack_0_2_3_0_3<T>,
			simd_kvint_unpack_0_2_3_1_0<T>,simd_kvint_unpack_0_2_3_1_1<T>,simd_kvint_unpack_0_2_3_1_2<T>,simd_kvint_unpack_0_2_3_1_3<T>,
			simd_kvint_unpack_0_2_3_2_0<T>,simd_kvint_unpack_0_2_3_2_1<T>,simd_kvint_unpack_0_2_3_2_2<T>,simd_kvint_unpack_0_2_3_2_3<T>,
			simd_kvint_unpack_0_2_3_3_0<T>,simd_kvint_unpack_0_2_3_3_1<T>,simd_kvint_unpack_0_2_3_3_2<T>,simd_kvint_unpack_0_2_3_3_3<T>,
			simd_kvint_unpack_0_3_0_0_0<T>,simd_kvint_unpack_0_3_0_0_1<T>,simd_kvint_unpack_0_3_0_0_2<T>,simd_kvint_unpack_0_3_0_0_3<T>,
			simd_kvint_unpack_0_3_0_1_0<T>,simd_kvint_unpack_0_3_0_1_1<T>,simd_kvint_unpack_0_3_0_1_2<T>,simd_kvint_unpack_0_3_0_1_3<T>,
			simd_kvint_unpack_0_3_0_2_0<T>,simd_kvint_unpack_0_3_0_2_1<T>,simd_kvint_unpack_0_3_0_2_2<T>,simd_kvint_unpack_0_3_0_2_3<T>,
			simd_kvint_unpack_0_3_0_3_0<T>,simd_kvint_unpack_0_3_0_3_1<T>,simd_kvint_unpack_0_3_0_3_2<T>,simd_kvint_unpack_0_3_0_3_3<T>,
			simd_kvint_unpack_0_3_1_0_0<T>,simd_kvint_unpack_0_3_1_0_1<T>,simd_kvint_unpack_0_3_1_0_2<T>,simd_kvint_unpack_0_3_1_0_3<T>,
			simd_kvint_unpack_0_3_1_1_0<T>,simd_kvint_unpack_0_3_1_1_1<T>,simd_kvint_unpack_0_3_1_1_2<T>,simd_kvint_unpack_0_3_1_1_3<T>,
			simd_kvint_unpack_0_3_1_2_0<T>,simd_kvint_unpack_0_3_1_2_1<T>,simd_kvint_unpack_0_3_1_2_2<T>,simd_kvint_unpack_0_3_1_2_3<T>,
			simd_kvint_unpack_0_3_1_3_0<T>,simd_kvint_unpack_0_3_1_3_1<T>,simd_kvint_unpack_0_3_1_3_2<T>,simd_kvint_unpack_0_3_1_3_3<T>,
			simd_kvint_unpack_0_3_2_0_0<T>,simd_kvint_unpack_0_3_2_0_1<T>,simd_kvint_unpack_0_3_2_0_2<T>,simd_kvint_unpack_0_3_2_0_3<T>,
			simd_kvint_unpack_0_3_2_1_0<T>,simd_kvint_unpack_0_3_2_1_1<T>,simd_kvint_unpack_0_3_2_1_2<T>,simd_kvint_unpack_0_3_2_1_3<T>,
			simd_kvint_unpack_0_3_2_2_0<T>,simd_kvint_unpack_0_3_2_2_1<T>,simd_kvint_unpack_0_3_2_2_2<T>,simd_kvint_unpack_0_3_2_2_3<T>,
			simd_kvint_unpack_0_3_2_3_0<T>,simd_kvint_unpack_0_3_2_3_1<T>,simd_kvint_unpack_0_3_2_3_2<T>,simd_kvint_unpack_0_3_2_3_3<T>,
			simd_kvint_unpack_0_3_3_0_0<T>,simd_kvint_unpack_0_3_3_0_1<T>,simd_kvint_unpack_0_3_3_0_2<T>,simd_kvint_unpack_0_3_3_0_3<T>,
			simd_kvint_unpack_0_3_3_1_0<T>,simd_kvint_unpack_0_3_3_1_1<T>,simd_kvint_unpack_0_3_3_1_2<T>,simd_kvint_unpack_0_3_3_1_3<T>,
			simd_kvint_unpack_0_3_3_2_0<T>,simd_kvint_unpack_0_3_3_2_1<T>,simd_kvint_unpack_0_3_3_2_2<T>,simd_kvint_unpack_0_3_3_2_3<T>,
			simd_kvint_unpack_0_3_3_3_0<T>,simd_kvint_unpack_0_3_3_3_1<T>,simd_kvint_unpack_0_3_3_3_2<T>,simd_kvint_unpack_0_3_3_3_3<T>,
			simd_kvint_unpack_1_0_0_0_0<T>,simd_kvint_unpack_1_0_0_0_1<T>,simd_kvint_unpack_1_0_0_0_2<T>,simd_kvint_unpack_1_0_0_0_3<T>,
			simd_kvint_unpack_1_0_0_1_0<T>,simd_kvint_unpack_1_0_0_1_1<T>,simd_kvint_unpack_1_0_0_1_2<T>,simd_kvint_unpack_1_0_0_1_3<T>,
			simd_kvint_unpack_1_0_0_2_0<T>,simd_kvint_unpack_1_0_0_2_1<T>,simd_kvint_unpack_1_0_0_2_2<T>,simd_kvint_unpack_1_0_0_2_3<T>,
			simd_kvint_unpack_1_0_0_3_0<T>,simd_kvint_unpack_1_0_0_3_1<T>,simd_kvint_unpack_1_0_0_3_2<T>,simd_kvint_unpack_1_0_0_3_3<T>,
			simd_kvint_unpack_1_0_1_0_0<T>,simd_kvint_unpack_1_0_1_0_1<T>,simd_kvint_unpack_1_0_1_0_2<T>,simd_kvint_unpack_1_0_1_0_3<T>,
			simd_kvint_unpack_1_0_1_1_0<T>,simd_kvint_unpack_1_0_1_1_1<T>,simd_kvint_unpack_1_0_1_1_2<T>,simd_kvint_unpack_1_0_1_1_3<T>,
			simd_kvint_unpack_1_0_1_2_0<T>,simd_kvint_unpack_1_0_1_2_1<T>,simd_kvint_unpack_1_0_1_2_2<T>,simd_kvint_unpack_1_0_1_2_3<T>,
			simd_kvint_unpack_1_0_1_3_0<T>,simd_kvint_unpack_1_0_1_3_1<T>,simd_kvint_unpack_1_0_1_3_2<T>,simd_kvint_unpack_1_0_1_3_3<T>,
			simd_kvint_unpack_1_0_2_0_0<T>,simd_kvint_unpack_1_0_2_0_1<T>,simd_kvint_unpack_1_0_2_0_2<T>,simd_kvint_unpack_1_0_2_0_3<T>,
			simd_kvint_unpack_1_0_2_1_0<T>,simd_kvint_unpack_1_0_2_1_1<T>,simd_kvint_unpack_1_0_2_1_2<T>,simd_kvint_unpack_1_0_2_1_3<T>,
			simd_kvint_unpack_1_0_2_2_0<T>,simd_kvint_unpack_1_0_2_2_1<T>,simd_kvint_unpack_1_0_2_2_2<T>,simd_kvint_unpack_1_0_2_2_3<T>,
			simd_kvint_unpack_1_0_2_3_0<T>,simd_kvint_unpack_1_0_2_3_1<T>,simd_kvint_unpack_1_0_2_3_2<T>,simd_kvint_unpack_1_0_2_3_3<T>,
			simd_kvint_unpack_1_0_3_0_0<T>,simd_kvint_unpack_1_0_3_0_1<T>,simd_kvint_unpack_1_0_3_0_2<T>,simd_kvint_unpack_1_0_3_0_3<T>,
			simd_kvint_unpack_1_0_3_1_0<T>,simd_kvint_unpack_1_0_3_1_1<T>,simd_kvint_unpack_1_0_3_1_2<T>,simd_kvint_unpack_1_0_3_1_3<T>,
			simd_kvint_unpack_1_0_3_2_0<T>,simd_kvint_unpack_1_0_3_2_1<T>,simd_kvint_unpack_1_0_3_2_2<T>,simd_kvint_unpack_1_0_3_2_3<T>,
			simd_kvint_unpack_1_0_3_3_0<T>,simd_kvint_unpack_1_0_3_3_1<T>,simd_kvint_unpack_1_0_3_3_2<T>,simd_kvint_unpack_1_0_3_3_3<T>,
			simd_kvint_unpack_1_1_0_0_0<T>,simd_kvint_unpack_1_1_0_0_1<T>,simd_kvint_unpack_1_1_0_0_2<T>,simd_kvint_unpack_1_1_0_0_3<T>,
			simd_kvint_unpack_1_1_0_1_0<T>,simd_kvint_unpack_1_1_0_1_1<T>,simd_kvint_unpack_1_1_0_1_2<T>,simd_kvint_unpack_1_1_0_1_3<T>,
			simd_kvint_unpack_1_1_0_2_0<T>,simd_kvint_unpack_1_1_0_2_1<T>,simd_kvint_unpack_1_1_0_2_2<T>,simd_kvint_unpack_1_1_0_2_3<T>,
			simd_kvint_unpack_1_1_0_3_0<T>,simd_kvint_unpack_1_1_0_3_1<T>,simd_kvint_unpack_1_1_0_3_2<T>,simd_kvint_unpack_1_1_0_3_3<T>,
			simd_kvint_unpack_1_1_1_0_0<T>,simd_kvint_unpack_1_1_1_0_1<T>,simd_kvint_unpack_1_1_1_0_2<T>,simd_kvint_unpack_1_1_1_0_3<T>,
			simd_kvint_unpack_1_1_1_1_0<T>,simd_kvint_unpack_1_1_1_1_1<T>,simd_kvint_unpack_1_1_1_1_2<T>,simd_kvint_unpack_1_1_1_1_3<T>,
			simd_kvint_unpack_1_1_1_2_0<T>,simd_kvint_unpack_1_1_1_2_1<T>,simd_kvint_unpack_1_1_1_2_2<T>,simd_kvint_unpack_1_1_1_2_3<T>,
			simd_kvint_unpack_1_1_1_3_0<T>,simd_kvint_unpack_1_1_1_3_1<T>,simd_kvint_unpack_1_1_1_3_2<T>,simd_kvint_unpack_1_1_1_3_3<T>,
			simd_kvint_unpack_1_1_2_0_0<T>,simd_kvint_unpack_1_1_2_0_1<T>,simd_kvint_unpack_1_1_2_0_2<T>,simd_kvint_unpack_1_1_2_0_3<T>,
			simd_kvint_unpack_1_1_2_1_0<T>,simd_kvint_unpack_1_1_2_1_1<T>,simd_kvint_unpack_1_1_2_1_2<T>,simd_kvint_unpack_1_1_2_1_3<T>,
			simd_kvint_unpack_1_1_2_2_0<T>,simd_kvint_unpack_1_1_2_2_1<T>,simd_kvint_unpack_1_1_2_2_2<T>,simd_kvint_unpack_1_1_2_2_3<T>,
			simd_kvint_unpack_1_1_2_3_0<T>,simd_kvint_unpack_1_1_2_3_1<T>,simd_kvint_unpack_1_1_2_3_2<T>,simd_kvint_unpack_1_1_2_3_3<T>,
			simd_kvint_unpack_1_1_3_0_0<T>,simd_kvint_unpack_1_1_3_0_1<T>,simd_kvint_unpack_1_1_3_0_2<T>,simd_kvint_unpack_1_1_3_0_3<T>,
			simd_kvint_unpack_1_1_3_1_0<T>,simd_kvint_unpack_1_1_3_1_1<T>,simd_kvint_unpack_1_1_3_1_2<T>,simd_kvint_unpack_1_1_3_1_3<T>,
			simd_kvint_unpack_1_1_3_2_0<T>,simd_kvint_unpack_1_1_3_2_1<T>,simd_kvint_unpack_1_1_3_2_2<T>,simd_kvint_unpack_1_1_3_2_3<T>,
			simd_kvint_unpack_1_1_3_3_0<T>,simd_kvint_unpack_1_1_3_3_1<T>,simd_kvint_unpack_1_1_3_3_2<T>,simd_kvint_unpack_1_1_3_3_3<T>,
			simd_kvint_unpack_1_2_0_0_0<T>,simd_kvint_unpack_1_2_0_0_1<T>,simd_kvint_unpack_1_2_0_0_2<T>,simd_kvint_unpack_1_2_0_0_3<T>,
			simd_kvint_unpack_1_2_0_1_0<T>,simd_kvint_unpack_1_2_0_1_1<T>,simd_kvint_unpack_1_2_0_1_2<T>,simd_kvint_unpack_1_2_0_1_3<T>,
			simd_kvint_unpack_1_2_0_2_0<T>,simd_kvint_unpack_1_2_0_2_1<T>,simd_kvint_unpack_1_2_0_2_2<T>,simd_kvint_unpack_1_2_0_2_3<T>,
			simd_kvint_unpack_1_2_0_3_0<T>,simd_kvint_unpack_1_2_0_3_1<T>,simd_kvint_unpack_1_2_0_3_2<T>,simd_kvint_unpack_1_2_0_3_3<T>,
			simd_kvint_unpack_1_2_1_0_0<T>,simd_kvint_unpack_1_2_1_0_1<T>,simd_kvint_unpack_1_2_1_0_2<T>,simd_kvint_unpack_1_2_1_0_3<T>,
			simd_kvint_unpack_1_2_1_1_0<T>,simd_kvint_unpack_1_2_1_1_1<T>,simd_kvint_unpack_1_2_1_1_2<T>,simd_kvint_unpack_1_2_1_1_3<T>,
			simd_kvint_unpack_1_2_1_2_0<T>,simd_kvint_unpack_1_2_1_2_1<T>,simd_kvint_unpack_1_2_1_2_2<T>,simd_kvint_unpack_1_2_1_2_3<T>,
			simd_kvint_unpack_1_2_1_3_0<T>,simd_kvint_unpack_1_2_1_3_1<T>,simd_kvint_unpack_1_2_1_3_2<T>,simd_kvint_unpack_1_2_1_3_3<T>,
			simd_kvint_unpack_1_2_2_0_0<T>,simd_kvint_unpack_1_2_2_0_1<T>,simd_kvint_unpack_1_2_2_0_2<T>,simd_kvint_unpack_1_2_2_0_3<T>,
			simd_kvint_unpack_1_2_2_1_0<T>,simd_kvint_unpack_1_2_2_1_1<T>,simd_kvint_unpack_1_2_2_1_2<T>,simd_kvint_unpack_1_2_2_1_3<T>,
			simd_kvint_unpack_1_2_2_2_0<T>,simd_kvint_unpack_1_2_2_2_1<T>,simd_kvint_unpack_1_2_2_2_2<T>,simd_kvint_unpack_1_2_2_2_3<T>,
			simd_kvint_unpack_1_2_2_3_0<T>,simd_kvint_unpack_1_2_2_3_1<T>,simd_kvint_unpack_1_2_2_3_2<T>,simd_kvint_unpack_1_2_2_3_3<T>,
			simd_kvint_unpack_1_2_3_0_0<T>,simd_kvint_unpack_1_2_3_0_1<T>,simd_kvint_unpack_1_2_3_0_2<T>,simd_kvint_unpack_1_2_3_0_3<T>,
			simd_kvint_unpack_1_2_3_1_0<T>,simd_kvint_unpack_1_2_3_1_1<T>,simd_kvint_unpack_1_2_3_1_2<T>,simd_kvint_unpack_1_2_3_1_3<T>,
			simd_kvint_unpack_1_2_3_2_0<T>,simd_kvint_unpack_1_2_3_2_1<T>,simd_kvint_unpack_1_2_3_2_2<T>,simd_kvint_unpack_1_2_3_2_3<T>,
			simd_kvint_unpack_1_2_3_3_0<T>,simd_kvint_unpack_1_2_3_3_1<T>,simd_kvint_unpack_1_2_3_3_2<T>,simd_kvint_unpack_1_2_3_3_3<T>,
			simd_kvint_unpack_1_3_0_0_0<T>,simd_kvint_unpack_1_3_0_0_1<T>,simd_kvint_unpack_1_3_0_0_2<T>,simd_kvint_unpack_1_3_0_0_3<T>,
			simd_kvint_unpack_1_3_0_1_0<T>,simd_kvint_unpack_1_3_0_1_1<T>,simd_kvint_unpack_1_3_0_1_2<T>,simd_kvint_unpack_1_3_0_1_3<T>,
			simd_kvint_unpack_1_3_0_2_0<T>,simd_kvint_unpack_1_3_0_2_1<T>,simd_kvint_unpack_1_3_0_2_2<T>,simd_kvint_unpack_1_3_0_2_3<T>,
			simd_kvint_unpack_1_3_0_3_0<T>,simd_kvint_unpack_1_3_0_3_1<T>,simd_kvint_unpack_1_3_0_3_2<T>,simd_kvint_unpack_1_3_0_3_3<T>,
			simd_kvint_unpack_1_3_1_0_0<T>,simd_kvint_unpack_1_3_1_0_1<T>,simd_kvint_unpack_1_3_1_0_2<T>,simd_kvint_unpack_1_3_1_0_3<T>,
			simd_kvint_unpack_1_3_1_1_0<T>,simd_kvint_unpack_1_3_1_1_1<T>,simd_kvint_unpack_1_3_1_1_2<T>,simd_kvint_unpack_1_3_1_1_3<T>,
			simd_kvint_unpack_1_3_1_2_0<T>,simd_kvint_unpack_1_3_1_2_1<T>,simd_kvint_unpack_1_3_1_2_2<T>,simd_kvint_unpack_1_3_1_2_3<T>,
			simd_kvint_unpack_1_3_1_3_0<T>,simd_kvint_unpack_1_3_1_3_1<T>,simd_kvint_unpack_1_3_1_3_2<T>,simd_kvint_unpack_1_3_1_3_3<T>,
			simd_kvint_unpack_1_3_2_0_0<T>,simd_kvint_unpack_1_3_2_0_1<T>,simd_kvint_unpack_1_3_2_0_2<T>,simd_kvint_unpack_1_3_2_0_3<T>,
			simd_kvint_unpack_1_3_2_1_0<T>,simd_kvint_unpack_1_3_2_1_1<T>,simd_kvint_unpack_1_3_2_1_2<T>,simd_kvint_unpack_1_3_2_1_3<T>,
			simd_kvint_unpack_1_3_2_2_0<T>,simd_kvint_unpack_1_3_2_2_1<T>,simd_kvint_unpack_1_3_2_2_2<T>,simd_kvint_unpack_1_3_2_2_3<T>,
			simd_kvint_unpack_1_3_2_3_0<T>,simd_kvint_unpack_1_3_2_3_1<T>,simd_kvint_unpack_1_3_2_3_2<T>,simd_kvint_unpack_1_3_2_3_3<T>,
			simd_kvint_unpack_1_3_3_0_0<T>,simd_kvint_unpack_1_3_3_0_1<T>,simd_kvint_unpack_1_3_3_0_2<T>,simd_kvint_unpack_1_3_3_0_3<T>,
			simd_kvint_unpack_1_3_3_1_0<T>,simd_kvint_unpack_1_3_3_1_1<T>,simd_kvint_unpack_1_3_3_1_2<T>,simd_kvint_unpack_1_3_3_1_3<T>,
			simd_kvint_unpack_1_3_3_2_0<T>,simd_kvint_unpack_1_3_3_2_1<T>,simd_kvint_unpack_1_3_3_2_2<T>,simd_kvint_unpack_1_3_3_2_3<T>,
			simd_kvint_unpack_1_3_3_3_0<T>,simd_kvint_unpack_1_3_3_3_1<T>,simd_kvint_unpack_1_3_3_3_2<T>,simd_kvint_unpack_1_3_3_3_3<T>,
			simd_kvint_unpack_2_0_0_0_0<T>,simd_kvint_unpack_2_0_0_0_1<T>,simd_kvint_unpack_2_0_0_0_2<T>,simd_kvint_unpack_2_0_0_0_3<T>,
			simd_kvint_unpack_2_0_0_1_0<T>,simd_kvint_unpack_2_0_0_1_1<T>,simd_kvint_unpack_2_0_0_1_2<T>,simd_kvint_unpack_2_0_0_1_3<T>,
			simd_kvint_unpack_2_0_0_2_0<T>,simd_kvint_unpack_2_0_0_2_1<T>,simd_kvint_unpack_2_0_0_2_2<T>,simd_kvint_unpack_2_0_0_2_3<T>,
			simd_kvint_unpack_2_0_0_3_0<T>,simd_kvint_unpack_2_0_0_3_1<T>,simd_kvint_unpack_2_0_0_3_2<T>,simd_kvint_unpack_2_0_0_3_3<T>,
			simd_kvint_unpack_2_0_1_0_0<T>,simd_kvint_unpack_2_0_1_0_1<T>,simd_kvint_unpack_2_0_1_0_2<T>,simd_kvint_unpack_2_0_1_0_3<T>,
			simd_kvint_unpack_2_0_1_1_0<T>,simd_kvint_unpack_2_0_1_1_1<T>,simd_kvint_unpack_2_0_1_1_2<T>,simd_kvint_unpack_2_0_1_1_3<T>,
			simd_kvint_unpack_2_0_1_2_0<T>,simd_kvint_unpack_2_0_1_2_1<T>,simd_kvint_unpack_2_0_1_2_2<T>,simd_kvint_unpack_2_0_1_2_3<T>,
			simd_kvint_unpack_2_0_1_3_0<T>,simd_kvint_unpack_2_0_1_3_1<T>,simd_kvint_unpack_2_0_1_3_2<T>,simd_kvint_unpack_2_0_1_3_3<T>,
			simd_kvint_unpack_2_0_2_0_0<T>,simd_kvint_unpack_2_0_2_0_1<T>,simd_kvint_unpack_2_0_2_0_2<T>,simd_kvint_unpack_2_0_2_0_3<T>,
			simd_kvint_unpack_2_0_2_1_0<T>,simd_kvint_unpack_2_0_2_1_1<T>,simd_kvint_unpack_2_0_2_1_2<T>,simd_kvint_unpack_2_0_2_1_3<T>,
			simd_kvint_unpack_2_0_2_2_0<T>,simd_kvint_unpack_2_0_2_2_1<T>,simd_kvint_unpack_2_0_2_2_2<T>,simd_kvint_unpack_2_0_2_2_3<T>,
			simd_kvint_unpack_2_0_2_3_0<T>,simd_kvint_unpack_2_0_2_3_1<T>,simd_kvint_unpack_2_0_2_3_2<T>,simd_kvint_unpack_2_0_2_3_3<T>,
			simd_kvint_unpack_2_0_3_0_0<T>,simd_kvint_unpack_2_0_3_0_1<T>,simd_kvint_unpack_2_0_3_0_2<T>,simd_kvint_unpack_2_0_3_0_3<T>,
			simd_kvint_unpack_2_0_3_1_0<T>,simd_kvint_unpack_2_0_3_1_1<T>,simd_kvint_unpack_2_0_3_1_2<T>,simd_kvint_unpack_2_0_3_1_3<T>,
			simd_kvint_unpack_2_0_3_2_0<T>,simd_kvint_unpack_2_0_3_2_1<T>,simd_kvint_unpack_2_0_3_2_2<T>,simd_kvint_unpack_2_0_3_2_3<T>,
			simd_kvint_unpack_2_0_3_3_0<T>,simd_kvint_unpack_2_0_3_3_1<T>,simd_kvint_unpack_2_0_3_3_2<T>,simd_kvint_unpack_2_0_3_3_3<T>,
			simd_kvint_unpack_2_1_0_0_0<T>,simd_kvint_unpack_2_1_0_0_1<T>,simd_kvint_unpack_2_1_0_0_2<T>,simd_kvint_unpack_2_1_0_0_3<T>,
			simd_kvint_unpack_2_1_0_1_0<T>,simd_kvint_unpack_2_1_0_1_1<T>,simd_kvint_unpack_2_1_0_1_2<T>,simd_kvint_unpack_2_1_0_1_3<T>,
			simd_kvint_unpack_2_1_0_2_0<T>,simd_kvint_unpack_2_1_0_2_1<T>,simd_kvint_unpack_2_1_0_2_2<T>,simd_kvint_unpack_2_1_0_2_3<T>,
			simd_kvint_unpack_2_1_0_3_0<T>,simd_kvint_unpack_2_1_0_3_1<T>,simd_kvint_unpack_2_1_0_3_2<T>,simd_kvint_unpack_2_1_0_3_3<T>,
			simd_kvint_unpack_2_1_1_0_0<T>,simd_kvint_unpack_2_1_1_0_1<T>,simd_kvint_unpack_2_1_1_0_2<T>,simd_kvint_unpack_2_1_1_0_3<T>,
			simd_kvint_unpack_2_1_1_1_0<T>,simd_kvint_unpack_2_1_1_1_1<T>,simd_kvint_unpack_2_1_1_1_2<T>,simd_kvint_unpack_2_1_1_1_3<T>,
			simd_kvint_unpack_2_1_1_2_0<T>,simd_kvint_unpack_2_1_1_2_1<T>,simd_kvint_unpack_2_1_1_2_2<T>,simd_kvint_unpack_2_1_1_2_3<T>,
			simd_kvint_unpack_2_1_1_3_0<T>,simd_kvint_unpack_2_1_1_3_1<T>,simd_kvint_unpack_2_1_1_3_2<T>,simd_kvint_unpack_2_1_1_3_3<T>,
			simd_kvint_unpack_2_1_2_0_0<T>,simd_kvint_unpack_2_1_2_0_1<T>,simd_kvint_unpack_2_1_2_0_2<T>,simd_kvint_unpack_2_1_2_0_3<T>,
			simd_kvint_unpack_2_1_2_1_0<T>,simd_kvint_unpack_2_1_2_1_1<T>,simd_kvint_unpack_2_1_2_1_2<T>,simd_kvint_unpack_2_1_2_1_3<T>,
			simd_kvint_unpack_2_1_2_2_0<T>,simd_kvint_unpack_2_1_2_2_1<T>,simd_kvint_unpack_2_1_2_2_2<T>,simd_kvint_unpack_2_1_2_2_3<T>,
			simd_kvint_unpack_2_1_2_3_0<T>,simd_kvint_unpack_2_1_2_3_1<T>,simd_kvint_unpack_2_1_2_3_2<T>,simd_kvint_unpack_2_1_2_3_3<T>,
			simd_kvint_unpack_2_1_3_0_0<T>,simd_kvint_unpack_2_1_3_0_1<T>,simd_kvint_unpack_2_1_3_0_2<T>,simd_kvint_unpack_2_1_3_0_3<T>,
			simd_kvint_unpack_2_1_3_1_0<T>,simd_kvint_unpack_2_1_3_1_1<T>,simd_kvint_unpack_2_1_3_1_2<T>,simd_kvint_unpack_2_1_3_1_3<T>,
			simd_kvint_unpack_2_1_3_2_0<T>,simd_kvint_unpack_2_1_3_2_1<T>,simd_kvint_unpack_2_1_3_2_2<T>,simd_kvint_unpack_2_1_3_2_3<T>,
			simd_kvint_unpack_2_1_3_3_0<T>,simd_kvint_unpack_2_1_3_3_1<T>,simd_kvint_unpack_2_1_3_3_2<T>,simd_kvint_unpack_2_1_3_3_3<T>,
			simd_kvint_unpack_2_2_0_0_0<T>,simd_kvint_unpack_2_2_0_0_1<T>,simd_kvint_unpack_2_2_0_0_2<T>,simd_kvint_unpack_2_2_0_0_3<T>,
			simd_kvint_unpack_2_2_0_1_0<T>,simd_kvint_unpack_2_2_0_1_1<T>,simd_kvint_unpack_2_2_0_1_2<T>,simd_kvint_unpack_2_2_0_1_3<T>,
			simd_kvint_unpack_2_2_0_2_0<T>,simd_kvint_unpack_2_2_0_2_1<T>,simd_kvint_unpack_2_2_0_2_2<T>,simd_kvint_unpack_2_2_0_2_3<T>,
			simd_kvint_unpack_2_2_0_3_0<T>,simd_kvint_unpack_2_2_0_3_1<T>,simd_kvint_unpack_2_2_0_3_2<T>,simd_kvint_unpack_2_2_0_3_3<T>,
			simd_kvint_unpack_2_2_1_0_0<T>,simd_kvint_unpack_2_2_1_0_1<T>,simd_kvint_unpack_2_2_1_0_2<T>,simd_kvint_unpack_2_2_1_0_3<T>,
			simd_kvint_unpack_2_2_1_1_0<T>,simd_kvint_unpack_2_2_1_1_1<T>,simd_kvint_unpack_2_2_1_1_2<T>,simd_kvint_unpack_2_2_1_1_3<T>,
			simd_kvint_unpack_2_2_1_2_0<T>,simd_kvint_unpack_2_2_1_2_1<T>,simd_kvint_unpack_2_2_1_2_2<T>,simd_kvint_unpack_2_2_1_2_3<T>,
			simd_kvint_unpack_2_2_1_3_0<T>,simd_kvint_unpack_2_2_1_3_1<T>,simd_kvint_unpack_2_2_1_3_2<T>,simd_kvint_unpack_2_2_1_3_3<T>,
			simd_kvint_unpack_2_2_2_0_0<T>,simd_kvint_unpack_2_2_2_0_1<T>,simd_kvint_unpack_2_2_2_0_2<T>,simd_kvint_unpack_2_2_2_0_3<T>,
			simd_kvint_unpack_2_2_2_1_0<T>,simd_kvint_unpack_2_2_2_1_1<T>,simd_kvint_unpack_2_2_2_1_2<T>,simd_kvint_unpack_2_2_2_1_3<T>,
			simd_kvint_unpack_2_2_2_2_0<T>,simd_kvint_unpack_2_2_2_2_1<T>,simd_kvint_unpack_2_2_2_2_2<T>,simd_kvint_unpack_2_2_2_2_3<T>,
			simd_kvint_unpack_2_2_2_3_0<T>,simd_kvint_unpack_2_2_2_3_1<T>,simd_kvint_unpack_2_2_2_3_2<T>,simd_kvint_unpack_2_2_2_3_3<T>,
			simd_kvint_unpack_2_2_3_0_0<T>,simd_kvint_unpack_2_2_3_0_1<T>,simd_kvint_unpack_2_2_3_0_2<T>,simd_kvint_unpack_2_2_3_0_3<T>,
			simd_kvint_unpack_2_2_3_1_0<T>,simd_kvint_unpack_2_2_3_1_1<T>,simd_kvint_unpack_2_2_3_1_2<T>,simd_kvint_unpack_2_2_3_1_3<T>,
			simd_kvint_unpack_2_2_3_2_0<T>,simd_kvint_unpack_2_2_3_2_1<T>,simd_kvint_unpack_2_2_3_2_2<T>,simd_kvint_unpack_2_2_3_2_3<T>,
			simd_kvint_unpack_2_2_3_3_0<T>,simd_kvint_unpack_2_2_3_3_1<T>,simd_kvint_unpack_2_2_3_3_2<T>,simd_kvint_unpack_2_2_3_3_3<T>,
			simd_kvint_unpack_2_3_0_0_0<T>,simd_kvint_unpack_2_3_0_0_1<T>,simd_kvint_unpack_2_3_0_0_2<T>,simd_kvint_unpack_2_3_0_0_3<T>,
			simd_kvint_unpack_2_3_0_1_0<T>,simd_kvint_unpack_2_3_0_1_1<T>,simd_kvint_unpack_2_3_0_1_2<T>,simd_kvint_unpack_2_3_0_1_3<T>,
			simd_kvint_unpack_2_3_0_2_0<T>,simd_kvint_unpack_2_3_0_2_1<T>,simd_kvint_unpack_2_3_0_2_2<T>,simd_kvint_unpack_2_3_0_2_3<T>,
			simd_kvint_unpack_2_3_0_3_0<T>,simd_kvint_unpack_2_3_0_3_1<T>,simd_kvint_unpack_2_3_0_3_2<T>,simd_kvint_unpack_2_3_0_3_3<T>,
			simd_kvint_unpack_2_3_1_0_0<T>,simd_kvint_unpack_2_3_1_0_1<T>,simd_kvint_unpack_2_3_1_0_2<T>,simd_kvint_unpack_2_3_1_0_3<T>,
			simd_kvint_unpack_2_3_1_1_0<T>,simd_kvint_unpack_2_3_1_1_1<T>,simd_kvint_unpack_2_3_1_1_2<T>,simd_kvint_unpack_2_3_1_1_3<T>,
			simd_kvint_unpack_2_3_1_2_0<T>,simd_kvint_unpack_2_3_1_2_1<T>,simd_kvint_unpack_2_3_1_2_2<T>,simd_kvint_unpack_2_3_1_2_3<T>,
			simd_kvint_unpack_2_3_1_3_0<T>,simd_kvint_unpack_2_3_1_3_1<T>,simd_kvint_unpack_2_3_1_3_2<T>,simd_kvint_unpack_2_3_1_3_3<T>,
			simd_kvint_unpack_2_3_2_0_0<T>,simd_kvint_unpack_2_3_2_0_1<T>,simd_kvint_unpack_2_3_2_0_2<T>,simd_kvint_unpack_2_3_2_0_3<T>,
			simd_kvint_unpack_2_3_2_1_0<T>,simd_kvint_unpack_2_3_2_1_1<T>,simd_kvint_unpack_2_3_2_1_2<T>,simd_kvint_unpack_2_3_2_1_3<T>,
			simd_kvint_unpack_2_3_2_2_0<T>,simd_kvint_unpack_2_3_2_2_1<T>,simd_kvint_unpack_2_3_2_2_2<T>,simd_kvint_unpack_2_3_2_2_3<T>,
			simd_kvint_unpack_2_3_2_3_0<T>,simd_kvint_unpack_2_3_2_3_1<T>,simd_kvint_unpack_2_3_2_3_2<T>,simd_kvint_unpack_2_3_2_3_3<T>,
			simd_kvint_unpack_2_3_3_0_0<T>,simd_kvint_unpack_2_3_3_0_1<T>,simd_kvint_unpack_2_3_3_0_2<T>,simd_kvint_unpack_2_3_3_0_3<T>,
			simd_kvint_unpack_2_3_3_1_0<T>,simd_kvint_unpack_2_3_3_1_1<T>,simd_kvint_unpack_2_3_3_1_2<T>,simd_kvint_unpack_2_3_3_1_3<T>,
			simd_kvint_unpack_2_3_3_2_0<T>,simd_kvint_unpack_2_3_3_2_1<T>,simd_kvint_unpack_2_3_3_2_2<T>,simd_kvint_unpack_2_3_3_2_3<T>,
			simd_kvint_unpack_2_3_3_3_0<T>,simd_kvint_unpack_2_3_3_3_1<T>,simd_kvint_unpack_2_3_3_3_2<T>,simd_kvint_unpack_2_3_3_3_3<T>,
			simd_kvint_unpack_3_0_0_0_0<T>,simd_kvint_unpack_3_0_0_0_1<T>,simd_kvint_unpack_3_0_0_0_2<T>,simd_kvint_unpack_3_0_0_0_3<T>,
			simd_kvint_unpack_3_0_0_1_0<T>,simd_kvint_unpack_3_0_0_1_1<T>,simd_kvint_unpack_3_0_0_1_2<T>,simd_kvint_unpack_3_0_0_1_3<T>,
			simd_kvint_unpack_3_0_0_2_0<T>,simd_kvint_unpack_3_0_0_2_1<T>,simd_kvint_unpack_3_0_0_2_2<T>,simd_kvint_unpack_3_0_0_2_3<T>,
			simd_kvint_unpack_3_0_0_3_0<T>,simd_kvint_unpack_3_0_0_3_1<T>,simd_kvint_unpack_3_0_0_3_2<T>,simd_kvint_unpack_3_0_0_3_3<T>,
			simd_kvint_unpack_3_0_1_0_0<T>,simd_kvint_unpack_3_0_1_0_1<T>,simd_kvint_unpack_3_0_1_0_2<T>,simd_kvint_unpack_3_0_1_0_3<T>,
			simd_kvint_unpack_3_0_1_1_0<T>,simd_kvint_unpack_3_0_1_1_1<T>,simd_kvint_unpack_3_0_1_1_2<T>,simd_kvint_unpack_3_0_1_1_3<T>,
			simd_kvint_unpack_3_0_1_2_0<T>,simd_kvint_unpack_3_0_1_2_1<T>,simd_kvint_unpack_3_0_1_2_2<T>,simd_kvint_unpack_3_0_1_2_3<T>,
			simd_kvint_unpack_3_0_1_3_0<T>,simd_kvint_unpack_3_0_1_3_1<T>,simd_kvint_unpack_3_0_1_3_2<T>,simd_kvint_unpack_3_0_1_3_3<T>,
			simd_kvint_unpack_3_0_2_0_0<T>,simd_kvint_unpack_3_0_2_0_1<T>,simd_kvint_unpack_3_0_2_0_2<T>,simd_kvint_unpack_3_0_2_0_3<T>,
			simd_kvint_unpack_3_0_2_1_0<T>,simd_kvint_unpack_3_0_2_1_1<T>,simd_kvint_unpack_3_0_2_1_2<T>,simd_kvint_unpack_3_0_2_1_3<T>,
			simd_kvint_unpack_3_0_2_2_0<T>,simd_kvint_unpack_3_0_2_2_1<T>,simd_kvint_unpack_3_0_2_2_2<T>,simd_kvint_unpack_3_0_2_2_3<T>,
			simd_kvint_unpack_3_0_2_3_0<T>,simd_kvint_unpack_3_0_2_3_1<T>,simd_kvint_unpack_3_0_2_3_2<T>,simd_kvint_unpack_3_0_2_3_3<T>,
			simd_kvint_unpack_3_0_3_0_0<T>,simd_kvint_unpack_3_0_3_0_1<T>,simd_kvint_unpack_3_0_3_0_2<T>,simd_kvint_unpack_3_0_3_0_3<T>,
			simd_kvint_unpack_3_0_3_1_0<T>,simd_kvint_unpack_3_0_3_1_1<T>,simd_kvint_unpack_3_0_3_1_2<T>,simd_kvint_unpack_3_0_3_1_3<T>,
			simd_kvint_unpack_3_0_3_2_0<T>,simd_kvint_unpack_3_0_3_2_1<T>,simd_kvint_unpack_3_0_3_2_2<T>,simd_kvint_unpack_3_0_3_2_3<T>,
			simd_kvint_unpack_3_0_3_3_0<T>,simd_kvint_unpack_3_0_3_3_1<T>,simd_kvint_unpack_3_0_3_3_2<T>,simd_kvint_unpack_3_0_3_3_3<T>,
			simd_kvint_unpack_3_1_0_0_0<T>,simd_kvint_unpack_3_1_0_0_1<T>,simd_kvint_unpack_3_1_0_0_2<T>,simd_kvint_unpack_3_1_0_0_3<T>,
			simd_kvint_unpack_3_1_0_1_0<T>,simd_kvint_unpack_3_1_0_1_1<T>,simd_kvint_unpack_3_1_0_1_2<T>,simd_kvint_unpack_3_1_0_1_3<T>,
			simd_kvint_unpack_3_1_0_2_0<T>,simd_kvint_unpack_3_1_0_2_1<T>,simd_kvint_unpack_3_1_0_2_2<T>,simd_kvint_unpack_3_1_0_2_3<T>,
			simd_kvint_unpack_3_1_0_3_0<T>,simd_kvint_unpack_3_1_0_3_1<T>,simd_kvint_unpack_3_1_0_3_2<T>,simd_kvint_unpack_3_1_0_3_3<T>,
			simd_kvint_unpack_3_1_1_0_0<T>,simd_kvint_unpack_3_1_1_0_1<T>,simd_kvint_unpack_3_1_1_0_2<T>,simd_kvint_unpack_3_1_1_0_3<T>,
			simd_kvint_unpack_3_1_1_1_0<T>,simd_kvint_unpack_3_1_1_1_1<T>,simd_kvint_unpack_3_1_1_1_2<T>,simd_kvint_unpack_3_1_1_1_3<T>,
			simd_kvint_unpack_3_1_1_2_0<T>,simd_kvint_unpack_3_1_1_2_1<T>,simd_kvint_unpack_3_1_1_2_2<T>,simd_kvint_unpack_3_1_1_2_3<T>,
			simd_kvint_unpack_3_1_1_3_0<T>,simd_kvint_unpack_3_1_1_3_1<T>,simd_kvint_unpack_3_1_1_3_2<T>,simd_kvint_unpack_3_1_1_3_3<T>,
			simd_kvint_unpack_3_1_2_0_0<T>,simd_kvint_unpack_3_1_2_0_1<T>,simd_kvint_unpack_3_1_2_0_2<T>,simd_kvint_unpack_3_1_2_0_3<T>,
			simd_kvint_unpack_3_1_2_1_0<T>,simd_kvint_unpack_3_1_2_1_1<T>,simd_kvint_unpack_3_1_2_1_2<T>,simd_kvint_unpack_3_1_2_1_3<T>,
			simd_kvint_unpack_3_1_2_2_0<T>,simd_kvint_unpack_3_1_2_2_1<T>,simd_kvint_unpack_3_1_2_2_2<T>,simd_kvint_unpack_3_1_2_2_3<T>,
			simd_kvint_unpack_3_1_2_3_0<T>,simd_kvint_unpack_3_1_2_3_1<T>,simd_kvint_unpack_3_1_2_3_2<T>,simd_kvint_unpack_3_1_2_3_3<T>,
			simd_kvint_unpack_3_1_3_0_0<T>,simd_kvint_unpack_3_1_3_0_1<T>,simd_kvint_unpack_3_1_3_0_2<T>,simd_kvint_unpack_3_1_3_0_3<T>,
			simd_kvint_unpack_3_1_3_1_0<T>,simd_kvint_unpack_3_1_3_1_1<T>,simd_kvint_unpack_3_1_3_1_2<T>,simd_kvint_unpack_3_1_3_1_3<T>,
			simd_kvint_unpack_3_1_3_2_0<T>,simd_kvint_unpack_3_1_3_2_1<T>,simd_kvint_unpack_3_1_3_2_2<T>,simd_kvint_unpack_3_1_3_2_3<T>,
			simd_kvint_unpack_3_1_3_3_0<T>,simd_kvint_unpack_3_1_3_3_1<T>,simd_kvint_unpack_3_1_3_3_2<T>,simd_kvint_unpack_3_1_3_3_3<T>,
			simd_kvint_unpack_3_2_0_0_0<T>,simd_kvint_unpack_3_2_0_0_1<T>,simd_kvint_unpack_3_2_0_0_2<T>,simd_kvint_unpack_3_2_0_0_3<T>,
			simd_kvint_unpack_3_2_0_1_0<T>,simd_kvint_unpack_3_2_0_1_1<T>,simd_kvint_unpack_3_2_0_1_2<T>,simd_kvint_unpack_3_2_0_1_3<T>,
			simd_kvint_unpack_3_2_0_2_0<T>,simd_kvint_unpack_3_2_0_2_1<T>,simd_kvint_unpack_3_2_0_2_2<T>,simd_kvint_unpack_3_2_0_2_3<T>,
			simd_kvint_unpack_3_2_0_3_0<T>,simd_kvint_unpack_3_2_0_3_1<T>,simd_kvint_unpack_3_2_0_3_2<T>,simd_kvint_unpack_3_2_0_3_3<T>,
			simd_kvint_unpack_3_2_1_0_0<T>,simd_kvint_unpack_3_2_1_0_1<T>,simd_kvint_unpack_3_2_1_0_2<T>,simd_kvint_unpack_3_2_1_0_3<T>,
			simd_kvint_unpack_3_2_1_1_0<T>,simd_kvint_unpack_3_2_1_1_1<T>,simd_kvint_unpack_3_2_1_1_2<T>,simd_kvint_unpack_3_2_1_1_3<T>,
			simd_kvint_unpack_3_2_1_2_0<T>,simd_kvint_unpack_3_2_1_2_1<T>,simd_kvint_unpack_3_2_1_2_2<T>,simd_kvint_unpack_3_2_1_2_3<T>,
			simd_kvint_unpack_3_2_1_3_0<T>,simd_kvint_unpack_3_2_1_3_1<T>,simd_kvint_unpack_3_2_1_3_2<T>,simd_kvint_unpack_3_2_1_3_3<T>,
			simd_kvint_unpack_3_2_2_0_0<T>,simd_kvint_unpack_3_2_2_0_1<T>,simd_kvint_unpack_3_2_2_0_2<T>,simd_kvint_unpack_3_2_2_0_3<T>,
			simd_kvint_unpack_3_2_2_1_0<T>,simd_kvint_unpack_3_2_2_1_1<T>,simd_kvint_unpack_3_2_2_1_2<T>,simd_kvint_unpack_3_2_2_1_3<T>,
			simd_kvint_unpack_3_2_2_2_0<T>,simd_kvint_unpack_3_2_2_2_1<T>,simd_kvint_unpack_3_2_2_2_2<T>,simd_kvint_unpack_3_2_2_2_3<T>,
			simd_kvint_unpack_3_2_2_3_0<T>,simd_kvint_unpack_3_2_2_3_1<T>,simd_kvint_unpack_3_2_2_3_2<T>,simd_kvint_unpack_3_2_2_3_3<T>,
			simd_kvint_unpack_3_2_3_0_0<T>,simd_kvint_unpack_3_2_3_0_1<T>,simd_kvint_unpack_3_2_3_0_2<T>,simd_kvint_unpack_3_2_3_0_3<T>,
			simd_kvint_unpack_3_2_3_1_0<T>,simd_kvint_unpack_3_2_3_1_1<T>,simd_kvint_unpack_3_2_3_1_2<T>,simd_kvint_unpack_3_2_3_1_3<T>,
			simd_kvint_unpack_3_2_3_2_0<T>,simd_kvint_unpack_3_2_3_2_1<T>,simd_kvint_unpack_3_2_3_2_2<T>,simd_kvint_unpack_3_2_3_2_3<T>,
			simd_kvint_unpack_3_2_3_3_0<T>,simd_kvint_unpack_3_2_3_3_1<T>,simd_kvint_unpack_3_2_3_3_2<T>,simd_kvint_unpack_3_2_3_3_3<T>,
			simd_kvint_unpack_3_3_0_0_0<T>,simd_kvint_unpack_3_3_0_0_1<T>,simd_kvint_unpack_3_3_0_0_2<T>,simd_kvint_unpack_3_3_0_0_3<T>,
			simd_kvint_unpack_3_3_0_1_0<T>,simd_kvint_unpack_3_3_0_1_1<T>,simd_kvint_unpack_3_3_0_1_2<T>,simd_kvint_unpack_3_3_0_1_3<T>,
			simd_kvint_unpack_3_3_0_2_0<T>,simd_kvint_unpack_3_3_0_2_1<T>,simd_kvint_unpack_3_3_0_2_2<T>,simd_kvint_unpack_3_3_0_2_3<T>,
			simd_kvint_unpack_3_3_0_3_0<T>,simd_kvint_unpack_3_3_0_3_1<T>,simd_kvint_unpack_3_3_0_3_2<T>,simd_kvint_unpack_3_3_0_3_3<T>,
			simd_kvint_unpack_3_3_1_0_0<T>,simd_kvint_unpack_3_3_1_0_1<T>,simd_kvint_unpack_3_3_1_0_2<T>,simd_kvint_unpack_3_3_1_0_3<T>,
			simd_kvint_unpack_3_3_1_1_0<T>,simd_kvint_unpack_3_3_1_1_1<T>,simd_kvint_unpack_3_3_1_1_2<T>,simd_kvint_unpack_3_3_1_1_3<T>,
			simd_kvint_unpack_3_3_1_2_0<T>,simd_kvint_unpack_3_3_1_2_1<T>,simd_kvint_unpack_3_3_1_2_2<T>,simd_kvint_unpack_3_3_1_2_3<T>,
			simd_kvint_unpack_3_3_1_3_0<T>,simd_kvint_unpack_3_3_1_3_1<T>,simd_kvint_unpack_3_3_1_3_2<T>,simd_kvint_unpack_3_3_1_3_3<T>,
			simd_kvint_unpack_3_3_2_0_0<T>,simd_kvint_unpack_3_3_2_0_1<T>,simd_kvint_unpack_3_3_2_0_2<T>,simd_kvint_unpack_3_3_2_0_3<T>,
			simd_kvint_unpack_3_3_2_1_0<T>,simd_kvint_unpack_3_3_2_1_1<T>,simd_kvint_unpack_3_3_2_1_2<T>,simd_kvint_unpack_3_3_2_1_3<T>,
			simd_kvint_unpack_3_3_2_2_0<T>,simd_kvint_unpack_3_3_2_2_1<T>,simd_kvint_unpack_3_3_2_2_2<T>,simd_kvint_unpack_3_3_2_2_3<T>,
			simd_kvint_unpack_3_3_2_3_0<T>,simd_kvint_unpack_3_3_2_3_1<T>,simd_kvint_unpack_3_3_2_3_2<T>,simd_kvint_unpack_3_3_2_3_3<T>,
			simd_kvint_unpack_3_3_3_0_0<T>,simd_kvint_unpack_3_3_3_0_1<T>,simd_kvint_unpack_3_3_3_0_2<T>,simd_kvint_unpack_3_3_3_0_3<T>,
			simd_kvint_unpack_3_3_3_1_0<T>,simd_kvint_unpack_3_3_3_1_1<T>,simd_kvint_unpack_3_3_3_1_2<T>,simd_kvint_unpack_3_3_3_1_3<T>,
			simd_kvint_unpack_3_3_3_2_0<T>,simd_kvint_unpack_3_3_3_2_1<T>,simd_kvint_unpack_3_3_3_2_2<T>,simd_kvint_unpack_3_3_3_2_3<T>,
			simd_kvint_unpack_3_3_3_3_0<T>,simd_kvint_unpack_3_3_3_3_1<T>,simd_kvint_unpack_3_3_3_3_2<T>,simd_kvint_unpack_3_3_3_3_3<T>
	};

	static simd_kvint_unpackFun simd_kvint_unpackFuns_4ints[16] = {
			simd_kvint_unpack_0_0<T>,simd_kvint_unpack_0_1<T>,simd_kvint_unpack_0_2<T>,simd_kvint_unpack_0_3<T>,
			simd_kvint_unpack_1_0<T>,simd_kvint_unpack_1_1<T>,simd_kvint_unpack_1_2<T>,simd_kvint_unpack_1_3<T>,
			simd_kvint_unpack_2_0<T>,simd_kvint_unpack_2_1<T>,simd_kvint_unpack_2_2<T>,simd_kvint_unpack_2_3<T>,
			simd_kvint_unpack_3_0<T>,simd_kvint_unpack_3_1<T>,simd_kvint_unpack_3_2<T>,simd_kvint_unpack_3_3<T>
	};

	static uint8_t totalByteCountArr[256] = {
			4,5,6,7,5,6,7,8,6,7,8,9,7,8,9,10,
			5,6,7,8,6,7,8,9,7,8,9,10,8,9,10,11,
			6,7,8,9,7,8,9,10,8,9,10,11,9,10,11,12,
			7,8,9,10,8,9,10,11,9,10,11,12,10,11,12,13,
			5,6,7,8,6,7,8,9,7,8,9,10,8,9,10,11,
			6,7,8,9,7,8,9,10,8,9,10,11,9,10,11,12,
			7,8,9,10,8,9,10,11,9,10,11,12,10,11,12,13,
			8,9,10,11,9,10,11,12,10,11,12,13,11,12,13,14,
			6,7,8,9,7,8,9,10,8,9,10,11,9,10,11,12,
			7,8,9,10,8,9,10,11,9,10,11,12,10,11,12,13,
			8,9,10,11,9,10,11,12,10,11,12,13,11,12,13,14,
			9,10,11,12,10,11,12,13,11,12,13,14,12,13,14,15,
			7,8,9,10,8,9,10,11,9,10,11,12,10,11,12,13,
			8,9,10,11,9,10,11,12,10,11,12,13,11,12,13,14,
			9,10,11,12,10,11,12,13,11,12,13,14,12,13,14,15,
			10,11,12,13,11,12,13,14,12,13,14,15,13,14,15,16,
	};

	const uint32_t *srcInt = (const uint32_t*)src;

	uint32_t dataSegOffset = *srcInt;
	const uint8_t *modeSegPos = (uint8_t*)src + 4;
	const uint8_t *dataSegPos = (uint8_t*)src + dataSegOffset;
	const uint32_t *wordPos = (const uint32_t*)dataSegPos;

	uint32_t decoded = 0;
	uint32_t curByteOffset = 0;

	simd_kvint_unpack_prepare<T>();

	while (decoded + 12 < decodeNum) {
			uint32_t fakeByteCount = *modeSegPos;

			uint32_t unpackFunIdx = (curByteOffset << 8) + fakeByteCount;
			(simd_kvint_unpackFuns_16ints[unpackFunIdx])(des, wordPos);

			int totalByteCount = totalByteCountArr[fakeByteCount];
			wordPos += ((curByteOffset + totalByteCount) >> 2) << 2;
			curByteOffset = (curByteOffset + totalByteCount) & 0x3;
			decoded += 16;
			des += 16;
			modeSegPos ++;
	}

	// sweep
	if (decoded < decodeNum) {
		for (int i=0; i<4 && decoded < decodeNum; i++) {
			uint32_t fakeByteCount = ((*modeSegPos) >> (i<<1)) & 0x3;
			uint32_t byteCount = fakeByteCount + 1;

			uint32_t unpackFunIdx = (curByteOffset << 2) + fakeByteCount;
			(simd_kvint_unpackFuns_4ints[unpackFunIdx])(des, wordPos);

			wordPos += ((curByteOffset + byteCount) >> 2) << 2;
			curByteOffset = (curByteOffset + byteCount) & 0x3;
			decoded += 4;
			des += 4;
		}
		modeSegPos ++;
	}

	if (curByteOffset > 0)
		wordPos += 4;

	if (modeSegPos > dataSegPos) {
		cerr << "mode decode error!" << endl;
	}

	return (char*)wordPos - src;
}


// version 2: 30% faster than sequential version!
/*
template<typename T>
int SIMD_KVarByte::decodeBlock(T* des, const char* src, uint32_t decodeNum) {

	typedef void (*simd_kvint_unpackFun)(T *des, const uint32_t *src);
	static simd_kvint_unpackFun simd_kvint_unpackFuns_8ints[64] = {
			simd_kvint_unpack_0_0_0<T>,simd_kvint_unpack_0_0_1<T>,simd_kvint_unpack_0_0_2<T>,simd_kvint_unpack_0_0_3<T>,
			simd_kvint_unpack_0_1_0<T>,simd_kvint_unpack_0_1_1<T>,simd_kvint_unpack_0_1_2<T>,simd_kvint_unpack_0_1_3<T>,
			simd_kvint_unpack_0_2_0<T>,simd_kvint_unpack_0_2_1<T>,simd_kvint_unpack_0_2_2<T>,simd_kvint_unpack_0_2_3<T>,
			simd_kvint_unpack_0_3_0<T>,simd_kvint_unpack_0_3_1<T>,simd_kvint_unpack_0_3_2<T>,simd_kvint_unpack_0_3_3<T>,
			simd_kvint_unpack_1_0_0<T>,simd_kvint_unpack_1_0_1<T>,simd_kvint_unpack_1_0_2<T>,simd_kvint_unpack_1_0_3<T>,
			simd_kvint_unpack_1_1_0<T>,simd_kvint_unpack_1_1_1<T>,simd_kvint_unpack_1_1_2<T>,simd_kvint_unpack_1_1_3<T>,
			simd_kvint_unpack_1_2_0<T>,simd_kvint_unpack_1_2_1<T>,simd_kvint_unpack_1_2_2<T>,simd_kvint_unpack_1_2_3<T>,
			simd_kvint_unpack_1_3_0<T>,simd_kvint_unpack_1_3_1<T>,simd_kvint_unpack_1_3_2<T>,simd_kvint_unpack_1_3_3<T>,
			simd_kvint_unpack_2_0_0<T>,simd_kvint_unpack_2_0_1<T>,simd_kvint_unpack_2_0_2<T>,simd_kvint_unpack_2_0_3<T>,
			simd_kvint_unpack_2_1_0<T>,simd_kvint_unpack_2_1_1<T>,simd_kvint_unpack_2_1_2<T>,simd_kvint_unpack_2_1_3<T>,
			simd_kvint_unpack_2_2_0<T>,simd_kvint_unpack_2_2_1<T>,simd_kvint_unpack_2_2_2<T>,simd_kvint_unpack_2_2_3<T>,
			simd_kvint_unpack_2_3_0<T>,simd_kvint_unpack_2_3_1<T>,simd_kvint_unpack_2_3_2<T>,simd_kvint_unpack_2_3_3<T>,
			simd_kvint_unpack_3_0_0<T>,simd_kvint_unpack_3_0_1<T>,simd_kvint_unpack_3_0_2<T>,simd_kvint_unpack_3_0_3<T>,
			simd_kvint_unpack_3_1_0<T>,simd_kvint_unpack_3_1_1<T>,simd_kvint_unpack_3_1_2<T>,simd_kvint_unpack_3_1_3<T>,
			simd_kvint_unpack_3_2_0<T>,simd_kvint_unpack_3_2_1<T>,simd_kvint_unpack_3_2_2<T>,simd_kvint_unpack_3_2_3<T>,
			simd_kvint_unpack_3_3_0<T>,simd_kvint_unpack_3_3_1<T>,simd_kvint_unpack_3_3_2<T>,simd_kvint_unpack_3_3_3<T>,
	};

	static simd_kvint_unpackFun simd_kvint_unpackFuns_4ints[16] = {
			simd_kvint_unpack_0_0<T>,simd_kvint_unpack_0_1<T>,simd_kvint_unpack_0_2<T>,simd_kvint_unpack_0_3<T>,
			simd_kvint_unpack_1_0<T>,simd_kvint_unpack_1_1<T>,simd_kvint_unpack_1_2<T>,simd_kvint_unpack_1_3<T>,
			simd_kvint_unpack_2_0<T>,simd_kvint_unpack_2_1<T>,simd_kvint_unpack_2_2<T>,simd_kvint_unpack_2_3<T>,
			simd_kvint_unpack_3_0<T>,simd_kvint_unpack_3_1<T>,simd_kvint_unpack_3_2<T>,simd_kvint_unpack_3_3<T>
	};


	const uint32_t *srcInt = (const uint32_t*)src;

	uint32_t dataSegOffset = *srcInt;
	const uint8_t *modeSegPos = (uint8_t*)src + 4;
	const uint8_t *dataSegPos = (uint8_t*)src + dataSegOffset;
	const uint32_t *wordPos = (const uint32_t*)dataSegPos;

	uint32_t decoded = 0;
	uint32_t curByteOffset = 0;

	simd_kvint_unpack_prepare<T>();

	while (decoded + 4 < decodeNum) {
		int controlBitsScanned = 0;
		for (int i=0; i<2 && decoded + 4 < decodeNum; i++) {
			uint32_t fakeByteCount = ((*modeSegPos) >> (i<<2)) & 0xf;

			uint32_t unpackFunIdx = (curByteOffset << 4) + fakeByteCount;
			(simd_kvint_unpackFuns_8ints[unpackFunIdx])(des, wordPos);

			int totalByteCount = ((fakeByteCount) >> 2) + (fakeByteCount & 0x3) + 2;
			wordPos += ((curByteOffset + totalByteCount) >> 2) << 2;
			curByteOffset = (curByteOffset + totalByteCount) & 0x3;
			decoded += 8;
			des += 8;
			controlBitsScanned += 4;
			modeSegPos += controlBitsScanned / 8;
		}
	}

	// sweep
	if (decoded < decodeNum) {
		uint32_t fakeByteCount;
		if (decoded % 16 == 0) {
			fakeByteCount = (*modeSegPos) & 0x3;
		}
		else {
			fakeByteCount = ((*modeSegPos) >> 4) & 0x3;
		}
		uint32_t byteCount = fakeByteCount + 1;

		uint32_t unpackFunIdx = (curByteOffset << 2) + fakeByteCount;
		(simd_kvint_unpackFuns_4ints[unpackFunIdx])(des, wordPos);

		wordPos += ((curByteOffset + byteCount) >> 2) << 2;
		curByteOffset = (curByteOffset + byteCount) & 0x3;
		decoded += 4;
		des += 4;
		modeSegPos ++;
	}

	if (curByteOffset > 0)
		wordPos += 4;

	if (modeSegPos > dataSegPos) {
		cerr << "mode decode error!" << endl;
	}

	return (char*)wordPos - src;
}
*/

// version 1: 10% faster than sequential version!
/*
template<typename T>
int SIMD_KVarByte::decodeBlock(T* des, const char* src, uint32_t decodeNum) {

	typedef void (*simd_kvint_unpackFun)(T *des, const uint32_t *src);
	static simd_kvint_unpackFun simd_kvint_unpackFuns_4ints[16] = {
			simd_kvint_unpack_0_0<T>,simd_kvint_unpack_0_1<T>,simd_kvint_unpack_0_2<T>,simd_kvint_unpack_0_3<T>,
			simd_kvint_unpack_1_0<T>,simd_kvint_unpack_1_1<T>,simd_kvint_unpack_1_2<T>,simd_kvint_unpack_1_3<T>,
			simd_kvint_unpack_2_0<T>,simd_kvint_unpack_2_1<T>,simd_kvint_unpack_2_2<T>,simd_kvint_unpack_2_3<T>,
			simd_kvint_unpack_3_0<T>,simd_kvint_unpack_3_1<T>,simd_kvint_unpack_3_2<T>,simd_kvint_unpack_3_3<T>
	};

	const uint32_t *srcInt = (const uint32_t*)src;

	uint32_t dataSegOffset = *srcInt;
	const uint8_t *modeSegPos = (uint8_t*)src + 4;
	const uint8_t *dataSegPos = (uint8_t*)src + dataSegOffset;
	const uint32_t *wordPos = (const uint32_t*)dataSegPos;

	uint32_t decoded = 0;
	uint32_t curByteOffset = 0;

	simd_kvint_unpack_prepare<T>();

	while (decoded < decodeNum) {
		for (int i=0; i<4 && decoded < decodeNum; i++) {
			uint32_t fakeByteCount = ((*modeSegPos) >> (i<<1)) & 0x3;
			uint32_t byteCount = fakeByteCount + 1;

			uint32_t unpackFunIdx = (curByteOffset << 2) + fakeByteCount;
			(simd_kvint_unpackFuns_4ints[unpackFunIdx])(des, wordPos);

			wordPos += ((curByteOffset + byteCount) >> 2) << 2;
			curByteOffset = (curByteOffset + byteCount) & 0x3;
			decoded += 4;
			des += 4;
		}

		modeSegPos ++;
	}

	if (curByteOffset > 0)
		wordPos += 4;

	if (modeSegPos > dataSegPos) {
		cerr << "mode decode error!" << endl;
	}

	return (char*)wordPos - src;
}
*/

/*
// original version 0: 10% slower than sequential version!
template<typename T>
int SIMD_KVarByte::decodeBlock(T* des, const char* src, uint32_t decodeNum) {

	const static uint32_t byte_mask_map[5] = {0, 0xff, 0xffff, 0xffffff, 0xffffffff};

	const uint32_t *srcInt = (const uint32_t*)src;

	uint32_t dataSegOffset = *srcInt;
	const uint8_t *modeSegPos = (uint8_t*)src + 4;
	const uint8_t *dataSegPos = (uint8_t*)src + dataSegOffset;
	const uint32_t *wordPos = (const uint32_t*)dataSegPos;

	uint32_t decoded = 0;
	uint32_t curByteOffset = 0;

	while (decoded < decodeNum) {
		for (int i=0; i<4 && decoded < decodeNum; i++) {
			uint32_t byteCount = 1 + (((*modeSegPos) >> (i<<1)) & 0x3);
			uint32_t bitCount = byteCount << 3;
			uint32_t curBitOffset = curByteOffset << 3;
			uint32_t byteLeftInUInt = 4 - curByteOffset;
			uint32_t bitLeftInUInt = byteLeftInUInt << 3;
			//for	(uint32_t k=0; k<4; k++) {
			//	*(des+k) = (*(wordPos+k) >> curBitOffset) & byte_mask_map[byteCount];
			//}

			if (byteLeftInUInt < byteCount) {	//start to read a new group
				uint32_t shiftRight = 32 - bitLeftInUInt;
				__asm__ volatile("prefetchnta %0"::"m" (wordPos[0]));
				__asm__("movdqu %0,%%xmm0\n"
						"movd %1,%%xmm1\n"								//shiftLeft->xmm1
						"psrld %%xmm1,%%xmm0\n"							//shift right->xmm0
						::"m" (wordPos[0]),"m" (shiftRight)
						:"memory");

				wordPos += 4;
				uint32_t restByteCount = byteCount - byteLeftInUInt;
				uint32_t restBitCount = restByteCount << 3;
				//for (uint32_t k=0; k<4; k++) {
				//	*(des+k) |= (*(wordPos+k) & byte_mask_map[restByteCount]) << bitLeftInUInt;
				//}
				uint32_t newShiftLeft = 32 - restBitCount;
				uint32_t newShiftRight = newShiftLeft - bitLeftInUInt;

				__asm__ volatile("prefetchnta %0"::"m" (wordPos[0]));
				__asm__("movdqu %0,%%xmm3\n"                            //srcInt[0]->xmm3
						"movd %1,%%xmm1\n"								//newShiftLeft->xmm1's low 32bit
						"movd %2,%%xmm2\n"								//newShiftRight->xmm2's low 32bit
						"pslld %%xmm1,%%xmm3\n"							//shift left->xmm3
						"psrld %%xmm2,%%xmm3\n"							//shift right->xmm3
						"por %%xmm3,%%xmm0\n"							//or xmm3->xmm0

						::"m" (wordPos[0]),"m" (newShiftLeft),"m" (newShiftRight)
						:"memory");
				
				curByteOffset = restByteCount;
			}
			else {
				uint32_t shiftRight = 32 - bitCount;
				uint32_t shiftLeft = shiftRight - curBitOffset;
				__asm__ volatile("prefetchnta %0"::"m" (wordPos[0]));
				__asm__("movdqu %0,%%xmm0\n"
						"movd %1,%%xmm1\n"								//shiftLeft->xmm1
						"movd %2,%%xmm2\n"								//shiftRight->xmm2
						"pslld %%xmm1,%%xmm0\n"							//shift left->xmm0
						"psrld %%xmm2,%%xmm0\n"							//shift right->xmm0
						::"m" (wordPos[0]),"m" (shiftLeft),"m" (shiftRight)
						:"memory");

				curByteOffset += byteCount;
			}


			__asm__("movdqu %%xmm0,%0\n"
					:"=m" (des[0])
					::"memory");

			//wordPos += ((curByteOffset + byteCount) >> 2) << 2;
			//curByteOffset = (curByteOffset + byteCount) & 0x3;
			decoded += 4;
			des += 4;
		}

		modeSegPos ++;
	}

	if (curByteOffset > 0)
		wordPos += 4;

	if (modeSegPos > dataSegPos) {
		cerr << "mode decode error!" << endl;
	}

	return (char*)wordPos - src;
}
*/

}
}

#endif

#endif /* SIMD_KVARBYTE_HPP_ */
