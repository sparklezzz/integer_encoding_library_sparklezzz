/**
 *@filename: GroupVarByte.hpp
 *@brief   :
 *@create  : 2010-11-13
 *@author  : shandd
 */

#ifndef GROUPVARBYTE_HPP_
#define GROUPVARBYTE_HPP_
#include "Compressor.hpp"
#include "GvintUnpack.hpp"
#include "VarByte.hpp"

namespace paradise {
namespace index {

class GroupVarByte: public Compressor {
public:
	GroupVarByte() {
	}
	virtual ~GroupVarByte() {
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

	template<typename T>
	static int encode(char* des, const T* src, uint32_t length);

	template<typename T>
	static int decode(T* des, const char* src, uint32_t length);

	virtual std::string getCompressorName() {
		return "group_var_byte";
	}
	virtual Compressor* clone();

private:
	template<typename T>
	static int encodeBlock(char* des, const T* src, uint32_t encodeNum);

	template<typename T>
	static int decodeBlock(T* des, const char* srcInt, uint32_t decodeNum);

};

template<typename T>
int GroupVarByte::encode(char* des, const T* src, uint32_t encodeNum) {
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
int GroupVarByte::decode(T* des, const char* src, uint32_t decodeNum) {
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
int GroupVarByte::encodeBlock(char* des, const T* src, uint32_t encodeNum) {
	int compSize = 0;
	uint8_t maskByte;
	int groupLen = 0;
	uint8_t buffer[16];
	int pos = 0;
	char * pData;
	while (pos < encodeNum) {
		groupLen = 0;
		maskByte = 0;
		for (int j = pos; j < pos + 4; j++) {
			uint32_t curVal = src[j];
			if (curVal >> 24) {
				pData = (char*) &curVal;
				buffer[groupLen++] = pData[0];
				buffer[groupLen++] = pData[1];
				buffer[groupLen++] = pData[2];
				buffer[groupLen++] = pData[3];
				maskByte = maskByte | 3 << (6 - (j - pos) * 2);
			} else if (curVal >> 16) {
				pData = (char*) &curVal;
				buffer[groupLen++] = pData[0];
				buffer[groupLen++] = pData[1];
				buffer[groupLen++] = pData[2];
				maskByte = maskByte | 2 << (6 - (j - pos) * 2);
			} else if (curVal >> 8) {
				pData = (char*) &curVal;
				buffer[groupLen++] = pData[0];
				buffer[groupLen++] = pData[1];
				maskByte = maskByte | 1 << (6 - (j - pos) * 2);
			} else {
				buffer[groupLen++] = (unsigned char) (curVal);
				maskByte = maskByte | 0 << (6 - (j - pos) * 2);
			}
		}
		des[compSize++] = maskByte;
		for (int j = 0; j < groupLen; j++) {
			des[compSize++] = buffer[j];
		}
		pos = pos + 4;
	}
	return compSize;
}

template<typename T>
int GroupVarByte::decodeBlock(T* des, const char* src, uint32_t decodeNum) {
	const char* srcBeg = src;
	uint32_t val;
	uint8_t maskNum;
	for (uint32_t curPos = 0; curPos + 4 <= decodeNum;) {
		maskNum = *src;
		src++;
		GvintUnpackInfo& unpackInfo = unpackInfoArr[maskNum];
		val = (*(uint32_t*) (src + unpackInfo.offset0));
		des[curPos++] = val & unpackInfo.mask0;
		val = (*(uint32_t*) (src + unpackInfo.offset1));
		des[curPos++] = val & unpackInfo.mask1;
		val = (*(uint32_t*) (src + unpackInfo.offset2));
		des[curPos++] = val & unpackInfo.mask2;
		val = (*(uint32_t*) (src + unpackInfo.offset3));
		des[curPos++] = val & unpackInfo.mask3;
		src += unpackInfo.skip;
	}

	return src - srcBeg;

}

}
}

#endif /* GROUPVARBYTE_HPP_ */
