/**
 * filename:SIMD_Group_PFD_2.hpp
 * @brief:
 * @date:2014-02-28
 * @author:zxd
 *
 * encoding format for SIMD_Group_PFD_2:
 * [<offset for blk headers><area of encoded array of normal array>
 * <bytes of blk header area><area of blk header><size of 8/16/32 bit exp arr>
 * <8/16/32 bit exp arr>]
 *
 *
 */

#ifndef SIMD_GROUP_PFD_2_HPP_
#define SIMD_GROUP_PFD_2_HPP_

#ifdef USE_SSE_INSTRUCTION

#include <stdint.h>
#include <iostream>
#include <string.h>
#include <cassert>
#include <vector>
#include "encoding_internals.hpp"
#include "PForDeltaBase.hpp"
#include "VarByte.hpp"
#include "simd_pack_vl.hpp"
#include "simd_unpack_vl.hpp"
#include "simd_pack_se.hpp"
#include "simd_unpack_se.hpp"

namespace paradise {
namespace index {

class SIMD_Group_PFD_2: public PForDeltaBase {
public:
	SIMD_Group_PFD_2(float expRatio = 0.1);

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
		return "simd_group_pfd_2";
	}
	virtual Compressor* clone();

	template<typename T>
	int encode(char* des, const T* src, uint32_t encodeNum);

	template<typename T>
	int decode(T* des, const char* src, uint32_t decodeNum);

private:
	template<typename T>
	int encodeAlign(char* des, const T* src, uint32_t encodeNum);

	template<typename T>
	int decodeAlign(T* des, const char* src, uint32_t decodeNum);

	template<typename T>
	int encodeBlock(char* des, const T* src);

	template<typename T>
	int decodeBlock(T* des, const char* srcInt, uint32_t header);

	template<typename T>
	int encodeExp(char *des, const T *dummy);

	template<typename T>
	int decodeExp(const T* src);

	template<typename T>
	int pfor_encode(char *desInt, const T *src, int useBits, uint32_t& expNum);

	template<typename T>
	bool pfor_fake_encode(const T *src, int useBits, int blockSize);

	template<typename T>
	uint32_t getBestB(const T *src, int blockSize);


private:
	std::vector<uint32_t> m_8BitExpVec;	// vector to hold all 8-bit exceptions
	std::vector<uint32_t> m_16BitExpVec;	// vector to hold all 16-bit exceptions
	std::vector<uint32_t> m_32BitExpVec;	// vector to hold all 32-bit exceptions
	std::vector<uint32_t> m_blockHeaderVec;	// vector to hold 32-bit header of all blocks

	// for decoding
	uint32_t m_exp8Num;
	uint32_t m_exp16Num;
	uint32_t m_exp32Num;
	uint32_t *m_exp8Arr;
	uint32_t *m_exp16Arr;
	uint32_t *m_exp32Arr;
	uint32_t *m_exp8Pos;
	uint32_t *m_exp16Pos;
	uint32_t *m_exp32Pos;

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
int SIMD_Group_PFD_2::encode(char* des, const T* src, uint32_t encodeNum) {
	int compLen = 0;
	uint32_t alignEncodeNum = encodeNum / m_blockSize * m_blockSize;

	compLen += encodeAlign(des, src, alignEncodeNum);

	compLen += VarByte::encode(des + compLen, src + alignEncodeNum, encodeNum - alignEncodeNum);

	return compLen;
}

template<typename T>
int SIMD_Group_PFD_2::decode(T* des, const char* src, uint32_t decodeNum) {
	int decodeLen = 0;
	uint32_t alignDecodeNum = decodeNum / m_blockSize * m_blockSize;

	decodeLen += decodeAlign(des, src, alignDecodeNum);

	decodeLen += VarByte::decode<T>(des + alignDecodeNum, src + decodeLen, decodeNum
			- alignDecodeNum);

	return decodeLen;
}

template<typename T>
int SIMD_Group_PFD_2::encodeAlign(char* des, const T* src, uint32_t encodeNum) {
	if (encodeNum == 0)
		return 0;

	m_blockHeaderVec.clear();
	m_8BitExpVec.clear();
	m_16BitExpVec.clear();
	m_32BitExpVec.clear();

	char *desBeg = des;

	uint32_t *header = (uint32_t*)desBeg;

	char *desNorm = des + 4;
	uint32_t normCompLen = 0;
	for (int i=0; i<encodeNum; i+=m_blockSize) {
		normCompLen += encodeBlock(desNorm + normCompLen, src + i);
	}

	// store all block headers and beg offset of block header area;
	header[0] = normCompLen;
	char *desBlkHeader = desNorm + normCompLen;
	uint32_t allBlockHeaderBytes = sizeof(uint32_t) * m_blockHeaderVec.size();
	memcpy(desBlkHeader, &allBlockHeaderBytes, sizeof(uint32_t));
	memcpy(desBlkHeader + sizeof(uint32_t), &m_blockHeaderVec[0], allBlockHeaderBytes);

	// encode 3 exception vec
	char *desExp = desBlkHeader + sizeof(uint32_t) + allBlockHeaderBytes;
	int expBytes = encodeExp(desExp, (const T *)NULL);

	return desExp + expBytes - desBeg;
}

template<typename T>
int SIMD_Group_PFD_2::decodeAlign(T* des, const char* src, uint32_t decodeNum) {
	if (decodeNum == 0)
		return 0;

	uint32_t numBlk = decodeNum / m_blockSize;

	const uint32_t *srcInt = (const uint32_t*)src;
	uint32_t blkHeaderOffset = srcInt[0];

	const char *srcNorm = src + 4;
	const char *srcBlkHeader = srcNorm + blkHeaderOffset;
	uint32_t allBlockHeaderBytes = *(const uint32_t*)srcBlkHeader;
	assert(allBlockHeaderBytes == sizeof(uint32_t) * numBlk);
	srcBlkHeader += 4;
	const char *srcExp = srcBlkHeader + allBlockHeaderBytes;
	uint32_t expBytes = decodeExp(srcExp);

	m_exp8Pos = m_exp8Arr;
	m_exp16Pos = m_exp16Arr;
	m_exp32Pos = m_exp32Arr;
	uint32_t normLen = 0;
	const uint32_t *srcBlkHeaderUInt = (const uint32_t *)srcBlkHeader;
	for (uint32_t i=0; i<decodeNum; i += m_blockSize) {
		uint32_t header = *srcBlkHeaderUInt++;
		normLen += decodeBlock(des + i, srcNorm + normLen, header);
	}
	assert(srcNorm + normLen + 4 == srcBlkHeader);
	if (m_exp8Num > 0) {
		assert(m_exp8Pos - m_exp8Arr == m_exp8Num);
		delete []m_exp8Arr;
		m_exp8Arr = NULL;
		m_exp8Pos = NULL;
	}
	if (m_exp16Num > 0) {
		assert(m_exp16Pos - m_exp16Arr == m_exp16Num);
		delete []m_exp16Arr;
		m_exp16Arr = NULL;
		m_exp16Pos = NULL;
	}
	if (m_exp32Num > 0) {
		assert(m_exp32Pos - m_exp32Arr == m_exp32Num);
		delete []m_exp32Arr;
		m_exp32Arr = NULL;
		m_exp32Pos = NULL;
	}

	return srcExp + expBytes - src;
}

template<typename T>
int SIMD_Group_PFD_2::encodeExp(char *des, const T *dummy) {

	uint32_t *desInt = (uint32_t*)des;
	uint32_t exp8Num = m_8BitExpVec.size();
	uint32_t exp16Num = m_16BitExpVec.size();
	uint32_t exp32Num = m_32BitExpVec.size();

	*desInt++ = exp8Num;
	*desInt++ = exp16Num;
	*desInt++ = exp32Num;

	memset(desInt, 0, DIV_ROUNDUP(exp8Num, 4) + DIV_ROUNDUP(exp16Num, 2) + exp32Num + 3);

	const int smallBlkSize = 16;
	uint32_t align8Num = exp8Num / smallBlkSize * smallBlkSize;
	uint32_t align16Num = exp16Num / smallBlkSize * smallBlkSize;
	uint32_t align32Num = exp32Num / smallBlkSize * smallBlkSize;

	simd_pack_se8<uint32_t>(desInt, &m_8BitExpVec[0], align8Num);
	uint8_t *pExp8 = (uint8_t*)desInt;
	for (int i= align8Num; i < exp8Num ; ++i) {
		pExp8[i] = (uint8_t)m_8BitExpVec[i];
	}
	desInt += DIV_ROUNDUP(exp8Num, 4);

	simd_pack_se16<uint32_t>(desInt, &m_16BitExpVec[0], align16Num);
	uint16_t *pExp16 = (uint16_t*)desInt;
	for (int i= align16Num; i < exp16Num ; ++i) {
		pExp16[i] = (uint16_t)m_16BitExpVec[i];
	}
	desInt += DIV_ROUNDUP(exp16Num, 2);

	simd_pack_se32<uint32_t>(desInt, &m_32BitExpVec[0], align32Num);
	for (int i= align32Num; i < exp32Num ; ++i) {
		desInt[i] = m_32BitExpVec[i];
	}
	desInt += exp32Num;

	desInt += 3;	// pad for simd decode
	return ((char*)desInt) - des;
}

template<typename T>
int SIMD_Group_PFD_2::decodeExp(const T* src) {
	uint32_t *srcInt = (uint32_t*)src;
	m_exp8Num = *srcInt++;
	m_exp16Num = *srcInt++;
	m_exp32Num = *srcInt++;

	const int smallBlkSize = 16;
	uint32_t align8Num = m_exp8Num / smallBlkSize * smallBlkSize;
	uint32_t align16Num = m_exp16Num / smallBlkSize * smallBlkSize;
	uint32_t align32Num = m_exp32Num / smallBlkSize * smallBlkSize;

	uint32_t pad = 16;

	if (m_exp8Num > 0) {
		m_exp8Arr = new uint32_t[m_exp8Num + pad];
		simd_unpack_se8<uint32_t>(m_exp8Arr, srcInt, align8Num);
		const uint8_t *pExp8 = (uint8_t*)srcInt;
		for (int i= align8Num; i < m_exp8Num ; ++i) {
			m_exp8Arr[i] = pExp8[i];
		}
		srcInt += DIV_ROUNDUP(m_exp8Num, 4);
	}

	if (m_exp16Num > 0) {
		m_exp16Arr = new uint32_t[m_exp16Num + pad];
		simd_unpack_se16<uint32_t>(m_exp16Arr, srcInt, align16Num);
		const uint16_t *pExp16 = (uint16_t*)srcInt;
		for (int i= align16Num; i < m_exp16Num ; ++i) {
			m_exp16Arr[i] = pExp16[i];
		}
		srcInt += DIV_ROUNDUP(m_exp16Num, 2);
	}

	if (m_exp32Num > 0) {
		m_exp32Arr = new uint32_t[m_exp32Num + pad];
		simd_unpack_se32<uint32_t>(m_exp32Arr, srcInt, align32Num);
		for (int i= align32Num; i < m_exp32Num ; ++i) {
			m_exp32Arr[i] = srcInt[i];
		}
		srcInt += m_exp32Num;
	}

	srcInt += 3;	// skip pad
	return ((char*)srcInt) - src;
}


template<typename T>
int SIMD_Group_PFD_2::encodeBlock(char* des, const T* src) {
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
int SIMD_Group_PFD_2::decodeBlock(T* des, const char* src, uint32_t blockHeader) {
	typedef void (*simd_unpackVLFun)(T *des, const uint32_t *srcInt, int blockSize);
	static simd_unpackVLFun simd_unpack_VLFuns[33] = { simd_unpack_vl0<T> , simd_unpack_vl1<T> , simd_unpack_vl2<T> ,
			simd_unpack_vl3<T> , simd_unpack_vl4<T> , simd_unpack_vl5<T> , simd_unpack_vl6<T> , simd_unpack_vl7<T> ,
			simd_unpack_vl8<T> , simd_unpack_vl9<T> , simd_unpack_vl10<T> , simd_unpack_vl11<T> , simd_unpack_vl12<T> ,
			simd_unpack_vl13<T> , simd_unpack_vl14<T> , simd_unpack_vl15<T> , simd_unpack_vl16<T> ,
			simd_unpack_vl17<T> , simd_unpack_vl18<T> , simd_unpack_vl19<T> , simd_unpack_vl20<T> ,
			simd_unpack_vl21<T> , simd_unpack_vl22<T> , simd_unpack_vl23<T> , simd_unpack_vl24<T> ,
			simd_unpack_vl25<T> , simd_unpack_vl26<T> , simd_unpack_vl27<T> , simd_unpack_vl28<T> ,
			simd_unpack_vl29<T> , simd_unpack_vl30<T> , simd_unpack_vl31<T> , simd_unpack_vl32<T> };

	const uint32_t* srcInt = (const uint32_t*) src;
	const uint32_t* srcIntBeg = srcInt;

	int num = (blockHeader >> 27) & 31;
	int compBits = m_arrBits[num];
	int expFlag = (blockHeader >> 25) & 3;
	int expStart = blockHeader & 0x1ffffff;
	uint32_t nextExp;
	(simd_unpack_VLFuns[compBits])(des, srcInt, m_blockSize);
	srcInt += ((compBits * m_blockSize) >> 5);
	int curExp = expStart;
	int expCnt = 0;
	switch (expFlag) {//对异常数的位数的选择
	case (0):
		for (expCnt = 0; curExp < m_blockSize; expCnt++) {
			nextExp = des[curExp] + 1;
			des[curExp] = *m_exp8Pos++;
			curExp += nextExp;
		}
		break;
	case (1):
		for (expCnt = 0; curExp < m_blockSize; expCnt++) {
			nextExp = des[curExp] + 1;
			des[curExp] = *m_exp16Pos++;
			curExp += nextExp;
		}
		break;

	case (2):
		for (expCnt = 0; curExp < m_blockSize; expCnt++) {
			nextExp = des[curExp] + 1;
			des[curExp] = *m_exp32Pos++;
			curExp += nextExp;
		}
		break;
	case (3):
		break;
	}
	return (srcInt - srcIntBeg) * sizeof(uint32_t);
}

template<typename T>
uint32_t SIMD_Group_PFD_2::getBestB(const T *src, int blockSize) {
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
bool SIMD_Group_PFD_2::pfor_fake_encode(const T *src, int useBits, int blockSize) {
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
bool SIMD_Group_PFD_2::pfor_fake_encode(const T *src, int useBits, int blockSize) {
	uint32_t expNum = 0;
	int compBit = m_arrBits[useBits];
	if (compBit == 32) {
		expNum = 0;
		return true;
	}
	expNum = 0;
	int expPos = -1;
	for (int i = 0; i < blockSize; i++) {
		//异常数或者是两异常中的距离超过compBit的表示范围，令中间的数的异常数
		if ((src[i] >= (1 << compBit)) || ((expPos >= 0) && (i - expPos == (1
				<< compBit)))) {
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
int SIMD_Group_PFD_2::pfor_encode(char *des, const T *src, int useBits,
		uint32_t& expNum) {

	uint32_t header = 0;
	uint32_t * desInt = (uint32_t *) des;
	int compBit = m_arrBits[useBits];
	uint32_t normNumArr[MaxBlockSize];

	if (compBit == 32) {
		for (int i = 0; i < m_blockSize; i++)
			desInt[i] = src[i];
		expNum = 0;
		header = (useBits << 27) + (3 << 25) + 0;
		m_blockHeaderVec.push_back(header);
		return m_blockSize * sizeof(uint32_t);
	}
	//找最大值
	T maxValue = 0;
	for (int i = 0; i < m_blockSize; i++)
		maxValue |= src[i];
	//计算异常数用多少位表示，3为没有异常数
	int expBit, expBitFlag;
	std::vector<uint32_t> *pExpVec = NULL;
	if (maxValue < 256) {
		expBit = 8;
		expBitFlag = 0;
		pExpVec = &m_8BitExpVec;
	} else if (maxValue < 65536) {
		expBit = 16;
		expBitFlag = 1;
		pExpVec = &m_16BitExpVec;
	} else {
		expBit = 32;
		expBitFlag = 2;
		pExpVec = &m_32BitExpVec;
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
			expNum ++;
			pExpVec->push_back(src[i]);
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

	//计算存正常数需要的空间
	//std::cout << compBit << std::endl;
	int needWord = ((compBit * m_blockSize) >> 5);
	memset(desInt, 0, sizeof(uint32_t) * needWord);
	compSize = needWord * sizeof(uint32_t);
	pack(desInt, normNumArr, compBit, m_blockSize);
	desInt += needWord;

	header = (useBits << 27) + (expBitFlag << 25) + startExp;
	m_blockHeaderVec.push_back(header);

	return compSize;	// size of encoded normal array in bytes
}

}
}

#endif

#endif /* SIMD_GROUP_PFD_2_HPP_ */
