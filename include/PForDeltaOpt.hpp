/**
 * filename:PForDeltaOpt.hpp
 * @brief:对存储优化的pforDelta算法
 * @data:2009-12-27
 * @author:shandd
 */

#ifndef PFORDELTAOPT_HPP_
#define PFORDELTAOPT_HPP_
#include "PForDelta.hpp"
#include "Simple9.hpp"
#include "Simple16.hpp"
namespace paradise {
namespace index {
class PForDeltaOpt: public PForDelta {
public:
	PForDeltaOpt(float expRatio = 0.6);

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
		return "pfor_delta_opt";
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
	int decodeBlock(T* des, const char* src);

	template<typename T>
	int pforOpt_encode(char* des, const T* src, int compBits, int &expNum);
};

template<typename T>
int PForDeltaOpt::encode(char* des, const T* src, uint32_t encodeNum) {
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
int PForDeltaOpt::decode(T* des, const char* src, uint32_t decodeNum) {
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
int PForDeltaOpt::encodeBlock(char* des, const T* src) {
	int expNum = 0;
	int compSize = 0;
	int optCompSize = 999999;
	int optBits = 0;
	for (int bits = 31; bits >= 0; bits--) { //测试压缩率最高时，使用的bits数
		compSize = pforOpt_encode(des, src, bits, expNum);
		if (expNum > m_blockSize * m_expRatio) {
			break;
		}
		if (optCompSize > compSize) {
			optCompSize = compSize;
			optBits = bits;
		}
	}
	compSize = pforOpt_encode(des, src, optBits, expNum);
	return compSize;
}

template<typename T>
int PForDeltaOpt::decodeBlock(T* des, const char* src) {
	typedef void (*unpackFun)(T *des, const uint32_t *src, int blockSize);
	static unpackFun unpackFuns[33] = { unpack0<T> , unpack1<T> , unpack2<T> ,
			unpack3<T> , unpack4<T> , unpack5<T> , unpack6<T> , unpack7<T> ,
			unpack8<T> , unpack9<T> , unpack10<T> , unpack11<T> , unpack12<T> ,
			unpack13<T> , unpack14<T> , unpack15<T> , unpack16<T> ,
			unpack17<T> , unpack18<T> , unpack19<T> , unpack20<T> ,
			unpack21<T> , unpack22<T> , unpack23<T> , unpack24<T> ,
			unpack25<T> , unpack26<T> , unpack27<T> , unpack28<T> ,
			unpack29<T> , unpack30<T> , unpack31<T> , unpack32<T> };
	uint16_t header = *((uint16_t*) src);
	uint32_t bits = (header >> 11) & 31;
	uint32_t compBits = m_arrBits[bits];
	uint32_t expNum = header & 2047;
	uint32_t* srcInt = (uint32_t*) (src + sizeof(uint16_t));
	(unpackFuns[compBits])(des, srcInt, m_blockSize);
	int decodeSize = sizeof(uint16_t) + ((m_blockSize * compBits) >> 3);
	if (expNum != 0) {
		uint32_t highPartArr[MaxBlockSize * 2];
		decodeSize
				+= Simple16::decode(highPartArr, src + decodeSize, expNum * 2);
		uint32_t pos = highPartArr[0];
		for (int i = 0; i < expNum; i++) {
			des[pos] += (highPartArr[expNum + i] << compBits);
			pos += highPartArr[i + 1] + 1;
		}
	}
	return decodeSize;

}

template<typename T>
int PForDeltaOpt::pforOpt_encode(char* des, const T* src, int bits, int &expNum) {
	uint16_t& header = *((uint16_t*) des);
	uint32_t* desInt = (uint32_t*) (des + sizeof(uint16_t));
	uint32_t compBits = m_arrBits[bits];
	if (compBits == 32) {
		expNum = 0;
		header = (compBits << 11) + (0);//header
		for (int i = 0; i < m_blockSize; i++) {
			desInt[i] = src[i];
		}
		return sizeof(uint16_t) + sizeof(T) * m_blockSize;

	}
	uint32_t lowPartArr[MaxBlockSize];
	uint32_t expValArr[MaxBlockSize];
	uint32_t expPosArr[MaxBlockSize];
	expNum = 0;
	for (int i = 0; i < m_blockSize; i++) {
		if (src[i] >= (1 << compBits)) { //exception
			lowPartArr[i] = src[i] & ((1 << compBits) - 1);
			expValArr[expNum] = (src[i] >> compBits);
			expPosArr[(expNum++)] = i; //记录异常数出现的位置
		} else
			lowPartArr[i] = src[i];
	}
	for (int j = expNum - 1; j > 0; j--) {
		expPosArr[j] = expPosArr[j] - expPosArr[j - 1];
		expPosArr[j]--;
	}
	header = (compBits << 11) + expNum;
	int lowPartSize = ((compBits * m_blockSize) >> 5);
	memset(desInt, 0, sizeof(uint32_t) * lowPartSize);
	pack(desInt, lowPartArr, compBits, m_blockSize);
	desInt += lowPartSize;
	int compSize = sizeof(uint16_t) + sizeof(uint32_t) * lowPartSize;

	uint32_t highPartArr[MaxBlockSize * 2];
	for (int j = 0; j < expNum; j++) {
		highPartArr[j] = expPosArr[j];
		highPartArr[expNum + j] = expValArr[j];
	}
	compSize += Simple16::encode<uint32_t>(des + compSize, highPartArr, expNum
			* 2);
	return compSize;
}
}
}

#endif /* PFORDELTAOPT_HPP_ */
