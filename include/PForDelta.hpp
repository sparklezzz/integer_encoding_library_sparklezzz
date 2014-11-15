/**
 * filename:PForDelta.hpp
 * @brief:
 * @data:2009-12-27
 * @author:shandd
 */

#ifndef PForDelta_HPP_
#define PForDelta_HPP_
#include <stdint.h>
#include <iostream>
#include <string.h>
#include "PForDeltaBase.hpp"
#include "VarByte.hpp"
#include "unpack.hpp"
namespace paradise {
namespace index {

class PForDelta: public PForDeltaBase {
public:
	PForDelta(float expRatio = 0.1);

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
		return "pfor_delta";
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
int PForDelta::encode(char* des, const T* src, uint32_t encodeNum) {
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
int PForDelta::decode(T* des, const char* src, uint32_t decodeNum) {
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
int PForDelta::encodeBlock(char* des, const T* src) {
	uint32_t expNum = 0;
	int compSize = 0;

	int bits;
	for (int bits = 0; bits < 32; bits++) {
		/*
		compSize = pfor_encode(des, src, bits, expNum);
		if (expNum <= m_expRatio * m_blockSize) {
			break;
		}
		*/
		if (pfor_fake_encode(src, bits)) {
			compSize = pfor_encode(des, src, bits, expNum);
			break;
		}
	}
	
	return compSize;
}

template<typename T>
int PForDelta::decodeBlock(T* des, const char* src) {
	typedef void (*unpackFun)(T *des, const uint32_t *srcInt, int blockSize);
	static unpackFun unpackFuns[33] = { unpack0<T> , unpack1<T> , unpack2<T> ,
			unpack3<T> , unpack4<T> , unpack5<T> , unpack6<T> , unpack7<T> ,
			unpack8<T> , unpack9<T> , unpack10<T> , unpack11<T> , unpack12<T> ,
			unpack13<T> , unpack14<T> , unpack15<T> , unpack16<T> ,
			unpack17<T> , unpack18<T> , unpack19<T> , unpack20<T> ,
			unpack21<T> , unpack22<T> , unpack23<T> , unpack24<T> ,
			unpack25<T> , unpack26<T> , unpack27<T> , unpack28<T> ,
			unpack29<T> , unpack30<T> , unpack31<T> , unpack32<T> };
	uint16_t blockHeader = *(uint16_t*) src;
	const uint32_t* srcInt = (const uint32_t*) (src + sizeof(uint16_t));
	const uint32_t* srcIntBeg = srcInt;
	int num = (blockHeader >> 11) & 31;
	int compBits = m_arrBits[num];
	int expFlag = (blockHeader >> 9) & 3;
	int expStart = blockHeader & 511;
	uint32_t nextExp;
	(unpackFuns[compBits])(des, srcInt, m_blockSize);
	srcInt += ((compBits * m_blockSize) >> 5);
	int curExp = expStart;
	int expCnt = 0;
	switch (expFlag) {//对异常数的位数的选择
	case (0):
		for (expCnt = 0; curExp < m_blockSize; expCnt++) {
			nextExp = des[curExp] + 1;
			des[curExp] = (srcInt[expCnt >> 2] >> (24 - ((expCnt & 3) << 3)))
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
	return (srcInt - srcIntBeg) * sizeof(uint32_t) + sizeof(uint16_t);
}

template<typename T>
int PForDelta::pfor_encode(char *des, const T *src, int useBits,
		uint32_t& expNum) {
	uint16_t &header = *((uint16_t*) des);
	des += sizeof(uint16_t);
	uint32_t * desInt = (uint32_t *) des;
	int compBit = m_arrBits[useBits];
	uint32_t normNumArr[MaxBlockSize];
	uint32_t expNumArr[MaxBlockSize];
	if (compBit == 32) {
		for (int i = 0; i < m_blockSize; i++)
			desInt[i] = src[i];
		expNum = 0;
		header = (useBits << 11) + (3 << 9) + 0;
		return sizeof(uint16_t) + m_blockSize * sizeof(uint32_t);
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
	if (expNum <= m_expRatio * m_blockSize) {
		//计算存正常数需要的空间
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
		pack(desInt, expNumArr, expBit, expNum);
		header = (useBits << 11) + (expBitFlag << 9) + startExp;
		compSize += sizeof(uint16_t);
	}
	return compSize;
}

}
}

#endif /* PForDelta_HPP_ */
