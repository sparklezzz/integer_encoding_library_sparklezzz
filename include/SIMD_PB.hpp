/**
 * filename:SIMD_PB.hpp
 * @brief:
 * @data:2009-12-27
 * @author:shandd
 */

#ifndef SIMD_PB_HPP_
#define SIMD_PB_HPP_

#ifdef USE_SSE_INSTRUCTION

#include <stdint.h>
#include <iostream>
#include <string.h>
#include "Compressor.hpp"
#include "VarByte.hpp"
#include "unpackIntelParallel.hpp"
namespace paradise {
namespace index {

class SIMD_PB: public Compressor {
public:
	SIMD_PB(float expRatio = 0.01);

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

	virtual void setBlockSize(uint32_t size);

	virtual std::string getCompressorName() {
		return "pfor_delta_intel";
	}
	virtual Compressor* clone();

	template<typename T>
	int encode(char* des, const T* src, uint32_t encodeNum);

	template<typename T>
	int decode(T* des, const char* src, uint32_t decodeNum);

//public:
	//for statistics
	//static uint64_t unpackIntelParallelCountArr[33];

private:
	template<typename T>
	int encodeBlock(char* des, const T* src);

	template<typename T>
	int decodeBlock(T* des, const char* srcInt);

	template<typename T>
	int pfor_encode(char *desInt, const T *src);

protected:
	/**********************************************************************
	 * pack n elements into b-bits wide array.
	 * v: input array, the number to be packed.
	 * w: the output compressed array.
	 * b: the bits-width per element in the compressed array
	 * n: the number of element to be packed
	 * note: the function does not modified the output array pointer. you need
	 * to calculate yourself outside the function
	 **********************************************************************/

	static void pack(uint32_t *des, const uint32_t *src, uint32_t bitNum,
			uint32_t num);
protected:
	static const int MaxBlockSize = 8192;
	int m_arrBits[32];//压缩的bit映射,使用5bits

};

template<typename T>
int SIMD_PB::encode(char* des, const T* src, uint32_t encodeNum) {
	int compLen = 0;
	for (int i = 0; i < encodeNum; i += m_blockSize) {
		if (i + m_blockSize > encodeNum) {
			compLen += VarByte::encode(des + compLen, src + i, encodeNum - i);
		} else {
			compLen += encodeBlock(des + compLen, src + i);
		}
	}
	return compLen;
}

template<typename T>
int SIMD_PB::decode(T* des, const char* src, uint32_t decodeNum) {
	int decodeLen = 0;
	for (int i = 0; i < decodeNum; i += m_blockSize) {
		if (i + m_blockSize > decodeNum) {
			decodeLen += VarByte::decode<T>(des + i, src + decodeLen, decodeNum
					- i);
		} else {
			decodeLen += decodeBlock(des + i, src + decodeLen);
		}
	}
	return decodeLen;
}
template<typename T>
int SIMD_PB::encodeBlock(char* des, const T* src) {
	uint32_t expNum = 0;
	int compSize = 0;

	int bits = 0;
	
	compSize = pfor_encode(des, src);
	
	return compSize;
}

template<typename T>
int SIMD_PB::decodeBlock(T* des, const char* src) {
	typedef void (*unpackIntelParallelFun)(T *des, const uint32_t *srcInt, int blockSize);
	static unpackIntelParallelFun unpackIntelParallelFuns[33] = { unpackIntelParallel0<T> , unpackIntelParallel1<T> , unpackIntelParallel2<T> ,
			unpackIntelParallel3<T> , unpackIntelParallel4<T> , unpackIntelParallel5<T> , unpackIntelParallel6<T> , unpackIntelParallel7<T> ,
			unpackIntelParallel8<T> , unpackIntelParallel9<T> , unpackIntelParallel10<T> , unpackIntelParallel11<T> , unpackIntelParallel12<T> ,
			unpackIntelParallel13<T> , unpackIntelParallel14<T> , unpackIntelParallel15<T> , unpackIntelParallel16<T> ,
			unpackIntelParallel17<T> , unpackIntelParallel18<T> , unpackIntelParallel19<T> , unpackIntelParallel20<T> ,
			unpackIntelParallel21<T> , unpackIntelParallel22<T> , unpackIntelParallel23<T> , unpackIntelParallel24<T> ,
			unpackIntelParallel25<T> , unpackIntelParallel26<T> , unpackIntelParallel27<T> , unpackIntelParallel28<T> ,
			unpackIntelParallel29<T> , unpackIntelParallel30<T> , unpackIntelParallel31<T> , unpackIntelParallel32<T> };

	uint8_t blockHeader = *(uint8_t*) src;
	const uint32_t* srcInt = (const uint32_t*) (src + sizeof(uint8_t));
	const uint32_t* srcIntBeg = srcInt;

	int num = blockHeader & 31;
	int compBits = m_arrBits[num];

	(unpackIntelParallelFuns[compBits])(des, srcInt, m_blockSize);
	srcInt += ((compBits * m_blockSize) >> 5);

	return (srcInt - srcIntBeg) * sizeof(uint32_t) + sizeof(uint8_t);
}
template<typename T>
int SIMD_PB::pfor_encode(char *des, const T *src) {
	//找最大值
	T maxValue = 0;
	/*for (int i = 0; i < m_blockSize; i++) {
		if (src[i] > maxValue) {
			maxValue = src[i];
		}
	}*/
	// Optimization: Use bitwise OR
	for (int i = 0; i < m_blockSize; i++)
		maxValue |= src[i];
	uint32_t useBits = 0;
	while (maxValue > 0) {
		useBits ++;
		maxValue >>= 1;
	}
	if (useBits == 32) {
		useBits = 31;
	}

	uint8_t &header = *((uint8_t*) des);
	des += sizeof(uint8_t);
	uint32_t * desInt = (uint32_t *) des;
	int compBit = m_arrBits[useBits];
	uint32_t normNumArr[MaxBlockSize];
	for (int i = 0; i < m_blockSize; i++) {
		normNumArr[i] = src[i];
	}

	int compSize = -1;

	//计算存正常数需要的空间
	int needWord = ((compBit * m_blockSize) >> 5);
	memset(desInt, 0, sizeof(uint32_t) * needWord);
	compSize = needWord * sizeof(uint32_t);
	pack(desInt, normNumArr, compBit, m_blockSize);
	desInt += needWord;

	header = useBits & 31;
	compSize += sizeof(uint8_t);

	return compSize;
}

}
}

#endif

#endif /* SIMD_PB_HPP_ */
