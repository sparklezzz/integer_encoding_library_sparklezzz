/**
 * filename:SIMD_Group_PFD.hpp
 * @brief:
 * @data:2009-12-27
 * @author:shandd
 */

#ifndef SIMD_GROUP_PFD_HPP_
#define SIMD_GROUP_PFD_HPP_

#ifdef USE_SSE_INSTRUCTION

#include <stdint.h>
#include <iostream>
#include <string.h>
#include "encoding_internals.hpp"
#include "encoding_internals.hpp"
#include "PForDeltaBase.hpp"
#include "VarByte.hpp"
#include "simd_pack_vl.hpp"
#include "simd_unpack_vl.hpp"
#include "simd_pack_se.hpp"

namespace paradise {
namespace index {

class SIMD_Group_PFD: public PForDeltaBase {
public:
	SIMD_Group_PFD(float expRatio = 0.1);

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

	void setAbnormalRatio(float ratio) {
		m_expRatio = ratio;
	}
	virtual std::string getCompressorName() {
		return "simd_group_pfd";
	}
	virtual Compressor* clone();

	template<typename T>
	int encode(char* des, const T* src, uint32_t encodeNum);

	template<typename T>
	int decode(T* des, const char* src, uint32_t decodeNum);

private:
	template<typename T>
	int encodeBlock(char* des, const T* src);

	template<typename T>
	int decodeBlock(T* des, const char* srcInt);

	template<typename T>
	int pfor_encode(char *desInt, const T *src, int useBits, uint32_t& expNum);

	template<typename T>
	bool pfor_fake_encode(const T *src, int useBits, int blockSize);

	template<typename T>
	uint32_t getBestB(const T *src, int blockSize);


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
};

template<typename T>
int SIMD_Group_PFD::encode(char* des, const T* src, uint32_t encodeNum) {
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
int SIMD_Group_PFD::decode(T* des, const char* src, uint32_t decodeNum) {
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
int SIMD_Group_PFD::encodeBlock(char* des, const T* src) {
	uint32_t quadEncodeNum = m_blockSize / 4;
	T *maxQuadIntArr = new T[quadEncodeNum];
	int k = 0;
	for (uint32_t i=0; i<m_blockSize; i+=4) {
		uint32_t quadMaxInt = src[i];
		uint32_t tmpEnd = i + 4;
		for (uint32_t j=i+1; j<tmpEnd; j++) {
			quadMaxInt |= src[j];
		}
		maxQuadIntArr[k++] = quadMaxInt;
	}

	uint32_t expNum = 0;
	int compSize = 0;
	int bits = 0;
/*
	bits = getBestB(maxQuadIntArr, quadEncodeNum);
	compSize = pfor_encode(des, src, bits, expNum);
*/

	for (int bits = 0; bits < 32; bits++) {
		if (pfor_fake_encode(maxQuadIntArr, bits, quadEncodeNum)) {
			compSize = pfor_encode(des, src, bits, expNum);
			break;
		}
	}

/*
	for (int bits = 0; bits < 32; bits++) {
		if (pfor_fake_encode(src, bits, m_blockSize)) {
			compSize = pfor_encode(des, src, bits, expNum);
			break;
		}
	}
*/
	delete []maxQuadIntArr;
	return compSize;
}

template<typename T>
int SIMD_Group_PFD::decodeBlock(T* des, const char* src) {
	typedef void (*simd_unpackVLFun)(T *des, const uint32_t *srcInt, int blockSize);
	static simd_unpackVLFun simd_unpack_VLFuns[33] = { simd_unpack_vl0<T> , simd_unpack_vl1<T> , simd_unpack_vl2<T> ,
			simd_unpack_vl3<T> , simd_unpack_vl4<T> , simd_unpack_vl5<T> , simd_unpack_vl6<T> , simd_unpack_vl7<T> ,
			simd_unpack_vl8<T> , simd_unpack_vl9<T> , simd_unpack_vl10<T> , simd_unpack_vl11<T> , simd_unpack_vl12<T> ,
			simd_unpack_vl13<T> , simd_unpack_vl14<T> , simd_unpack_vl15<T> , simd_unpack_vl16<T> ,
			simd_unpack_vl17<T> , simd_unpack_vl18<T> , simd_unpack_vl19<T> , simd_unpack_vl20<T> ,
			simd_unpack_vl21<T> , simd_unpack_vl22<T> , simd_unpack_vl23<T> , simd_unpack_vl24<T> ,
			simd_unpack_vl25<T> , simd_unpack_vl26<T> , simd_unpack_vl27<T> , simd_unpack_vl28<T> ,
			simd_unpack_vl29<T> , simd_unpack_vl30<T> , simd_unpack_vl31<T> , simd_unpack_vl32<T> };
	//uint16_t blockHeader = *(uint16_t*) src;
	//const uint32_t* srcInt = (const uint32_t*) (src + sizeof(uint16_t));
	uint32_t blockHeader = *(uint32_t*) src;
	const uint32_t* srcInt = (const uint32_t*) (src + sizeof(uint32_t));
	const uint32_t* srcIntBeg = srcInt;
	//int num = (blockHeader >> 11) & 31;
	int num = (blockHeader >> 27) & 31;
	int compBits = m_arrBits[num];
	//int expFlag = (blockHeader >> 9) & 3;
	//int expStart = blockHeader & 511;
	int expFlag = (blockHeader >> 25) & 3;
	int expStart = blockHeader & 0x1ffffff;
	uint32_t nextExp;
	(simd_unpack_VLFuns[compBits])(des, srcInt, m_blockSize);
	//simd_unpackCountArr[compBits] ++;
	srcInt += ((compBits * m_blockSize) >> 5);
	int curExp = expStart;
	int expCnt = 0;
	switch (expFlag) {//对异常数的位数的选择
	case (0):
		for (expCnt = 0; curExp < m_blockSize; expCnt++) {
			nextExp = des[curExp] + 1;
			des[curExp] = (srcInt[expCnt >> 2] >> ((expCnt & 3) << 3))
					& 255;
			curExp += nextExp;
		}
		srcInt += (expCnt >> 2);
		if ((expCnt & 3) > 0) {
			srcInt++;
		}
		break;
	case (1):
		for (expCnt = 0; curExp < m_blockSize; expCnt++) {
			nextExp = des[curExp] + 1;
			des[curExp] = (srcInt[expCnt >> 1] >> (16 - ((expCnt & 1) << 4)))
					& 65535;
			curExp += nextExp;
		}
		srcInt += (expCnt >> 1);
		if ((expCnt & 1) > 0)
			srcInt++;
		break;

	case (2):
		for (expCnt = 0; curExp < m_blockSize; expCnt++) {
			nextExp = des[curExp] + 1;
			des[curExp] = srcInt[expCnt];
			curExp += nextExp;
		}
		srcInt += expCnt;
		break;
	case (3):
		break;
	}
	//return (srcInt - srcIntBeg) * sizeof(uint32_t) + sizeof(uint16_t);
	return (srcInt - srcIntBeg) * sizeof(uint32_t) + sizeof(uint32_t);
}

template<typename T>
uint32_t SIMD_Group_PFD::getBestB(const T *src, int blockSize) {
	uint32_t freqs[33];
	memset(freqs, 0, 33 * sizeof(uint32_t));
	for (uint32_t i=0; i<blockSize; ++i) {
		freqs[asmbits(src[i])] ++;
	}
	uint32_t bestB = 32;
	uint32_t expNum = 0;
	--bestB;
	while (bestB >= 0) {
		expNum += freqs[bestB + 1];
		if (expNum >= blockSize * m_expRatio)
			break;
		--bestB;
	}
	++bestB;
	if (bestB == 32)
		bestB = 31;	//index 31 is for 32 bit
	return bestB;
}

/*
template<typename T>
bool SIMD_Group_PFD::pfor_fake_encode(const T *src, int useBits, int blockSize) {
	uint32_t expNum = 0;
	int compBit = m_arrBits[useBits];
	if (compBit == 32) {
		return true;
	}
	expNum = 0;
	const uint32_t threshold = 1UL << compBit;
	for (int i = 0; i < blockSize; i++) {
		if (src[i] >= threshold)
			expNum ++;
	}
	return (expNum <= m_expRatio * blockSize);
}
*/


template<typename T>
bool SIMD_Group_PFD::pfor_fake_encode(const T *src, int useBits, int blockSize) {
	uint32_t expNum = 0;
	int compBit = m_arrBits[useBits];
	if (compBit == 32) {
		expNum = 0;
		return true;
	}
	expNum = 0;
	int expPos = -1;
	const uint32_t threshold = 1UL << compBit;
	for (int i = 0; i < blockSize; i++) {
		//异常数或者是两异常中的距离超过compBit的表示范围，令中间的数的异常数
		if ((src[i] >= threshold) || ((expPos >= 0) && (i - expPos == threshold))) {
			expNum++;
			expPos = i;
		}
	}
	if (expNum <= m_expRatio * blockSize) {
		return true;
	}
	return false;
}


template<typename T>
int SIMD_Group_PFD::pfor_encode(char *des, const T *src, int useBits,
		uint32_t& expNum) {
	//uint16_t &header = *((uint16_t*) des);
	//des += sizeof(uint16_t);
	uint32_t &header = *((uint32_t*) des);
	des += sizeof(uint32_t);
	uint32_t * desInt = (uint32_t *) des;
	int compBit = m_arrBits[useBits];
	uint32_t normNumArr[MaxBlockSize];
	uint32_t expNumArr[MaxBlockSize];
	if (compBit == 32) {
		for (int i = 0; i < m_blockSize; i++)
			desInt[i] = src[i];
		expNum = 0;
		//header = (useBits << 11) + (3 << 9) + 0;
		//return sizeof(uint16_t) + m_blockSize * sizeof(uint32_t);
		header = (useBits << 27) + (3 << 25) + 0;
		return sizeof(uint32_t) + m_blockSize * sizeof(uint32_t);
	}
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
	//计算异常数用多少位表示，3为没有异常数
	int expBit, expBitFlag;
	if (maxValue < 256) {
		expBit = 8;
		expBitFlag = 0;
	} else if (maxValue < 65536) {
		expBit = 16;
		expBitFlag = 1;
	} else {
		expBit = 32;
		expBitFlag = 2;
	}
	int startExp = 0;
	expNum = 0;
	int expPos = -1;
	for (int i = 0; i < m_blockSize; i++) {
		//异常数或者是两异常中的距离超过compBit的表示范围，令中间的数的异常数
		if ((src[i] >= (1 << compBit)) || ((expPos >= 0) && (i - expPos == (1
				<< compBit)))) {
			if (expPos < 0) {
				startExp = i;
			} else {
				normNumArr[expPos] = i - expPos - 1;
			}
			expNumArr[expNum++] = src[i];
			expPos = i;
		} else {
			normNumArr[i] = src[i];
		}
	}
	//对最后一个异常数的位置置空
	if (expPos >= 0) {
		normNumArr[expPos] = (1 << compBit) - 1;
	} else {
		expBitFlag = 3;//没有异常数
		startExp = 0;
	}
	int compSize = -1;
	//if (expNum <= m_expRatio * m_blockSize) {
		//计算存正常数需要的空间
		//std::cout << compBit << std::endl;
		int needWord = ((compBit * m_blockSize) >> 5);
		memset(desInt, 0, sizeof(uint32_t) * needWord);
		compSize = needWord * sizeof(uint32_t);
		pack(desInt, normNumArr, compBit, m_blockSize);
		desInt += needWord;
		//计算异常数据需要的空间
		needWord = ((expBit * expNum) >> 5)
				+ ((((expBit * expNum) & 31) > 0) ? 1 : 0);
		memset(desInt, 0, sizeof(uint32_t) * needWord);
		compSize += needWord * sizeof(uint32_t);
		if (expBit != 8) {
			pack(desInt, expNumArr, expBit, expNum);
		}
		else {
			simd_pack_se8<uint32_t>(desInt, expNumArr, expNum);
		}
		//header = (useBits << 11) + (expBitFlag << 9) + startExp;
		//compSize += sizeof(uint16_t);
		header = (useBits << 27) + (expBitFlag << 25) + startExp;
		compSize += sizeof(uint32_t);
	//}
	return compSize;
}

}
}

#endif

#endif /* SIMD_GROUP_PFD_HPP_ */
