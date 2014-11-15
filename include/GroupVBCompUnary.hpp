/*
 * GroupVBCompUnary.hpp
 *
 *  Created on: 2013-1-24
 *      Author: zxd
 */

#ifndef GROUPVBCOMPUNARY_HPP_
#define GROUPVBCOMPUNARY_HPP_

#include "Compressor.hpp"
#include "GvintCompUnaryUnpack.hpp"
#include "VarByte.hpp"
#include <iostream>

namespace paradise {
namespace index {

using namespace std;

class GroupVBCompUnary: public Compressor {
public:
	GroupVBCompUnary() {
	}
	virtual ~GroupVBCompUnary() {
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
		return "group_var_byte_comp_unary";
	}
	virtual Compressor* clone();

private:
	template<typename T>
	static int encodeBlock(char* des, const T* src, uint32_t encodeNum);

	template<typename T>
	static int decodeBlock(T* des, const char* srcInt, uint32_t decodeNum);

};

template<typename T>
int GroupVBCompUnary::encode(char* des, const T* src, uint32_t encodeNum) {
	int compLen = 0;
	compLen = encodeBlock(des, src, encodeNum);
	return compLen;
}

template<typename T>
int GroupVBCompUnary::decode(T* des, const char* src, uint32_t decodeNum) {
	int decodeLen = 0;
	decodeLen = decodeBlock(des, src, decodeNum);
	return decodeLen;
}
template<typename T>
int GroupVBCompUnary::encodeBlock(char* des, const T* src, uint32_t encodeNum) {
	int compSize = 0;
	uint8_t maskByte;
	int groupLen = 0;
	uint8_t buffer[16];
	int pos = 0;
	char * pData;

	int lastStatus = 0;	//num of bytes remained to be pack by last group
	uint8_t remainBuffer[3];

	while (pos < encodeNum) {
		groupLen = 0;

		maskByte = 0x0;
		//put remaining bytes from last group into the new group
		if (lastStatus > 0) {
			//lastStatus: 1->0, 2->01, 3->011
			maskByte |= (1 << (lastStatus - 1)) - 1;
		}
		for (int j=0; j<lastStatus; j++) {
			buffer[groupLen++] = remainBuffer[j];
		}
		lastStatus = 0;	//reset last status

			//unary descriptor, start from low bit
			//the block is left incomplete and padded with 0s, while the descriptor is padded with 1s.
			//will encode 2~8 integers, depending on byte nums of each integer
		while (pos < encodeNum && groupLen < 8) {
			uint32_t curVal = src[pos];

				// get byte num of the integer
			uint32_t byteNum = 0;
			uint32_t tmp = curVal;
			while(tmp > 0) {
				tmp >>= 8;
				byteNum++;
			}
			if (byteNum == 0)	//for zero
				byteNum = 1;

			if (groupLen + byteNum > 8) {	//cannot insert whole integer into the group
				//cout << pos << " " << curVal << endl;
				pData = (char*) &curVal;
				int j = 0;
				//pad the descriptor
				uint8_t pad = (0xff >> groupLen) << groupLen;
				maskByte |= pad;
				//put lower part of the integer into the group
				while (groupLen < 8 && j < byteNum) {
					buffer[groupLen++] = pData[j++];
				}
				//leave higher part of the integer to next group
				while (j < byteNum) {
					remainBuffer[lastStatus++] = pData[j++];
				}
				pos ++; //we should count this integer
				break;
			}

			pos++;

			if (byteNum == 4) {
				pData = (char*) &curVal;
				//insert 0111(binary)
				maskByte |= (0x7 << groupLen);
				buffer[groupLen++] = pData[0];
				buffer[groupLen++] = pData[1];
				buffer[groupLen++] = pData[2];
				buffer[groupLen++] = pData[3];
			} else if (byteNum == 3) {
				pData = (char*) &curVal;
				//insert 011(binary)
				maskByte |= (0x3 << groupLen);
				buffer[groupLen++] = pData[0];
				buffer[groupLen++] = pData[1];
				buffer[groupLen++] = pData[2];
			} else if (byteNum == 2) {
				pData = (char*) &curVal;
				//insert 01(binary)
				maskByte |= (0x1 << groupLen);
				buffer[groupLen++] = pData[0];
				buffer[groupLen++] = pData[1];
			} else {
				//insert 0(binary)
				maskByte |= (0x0 << groupLen);
				buffer[groupLen++] = (unsigned char) (curVal);
			}
		}

		//for last group, pad the descriptor
		if (groupLen < 8) {
			uint8_t pad = (0xff >> groupLen) << groupLen;
			maskByte |= pad;
		}

		des[compSize++] = maskByte;
		for (int j = 0; j < groupLen; j++) {
			des[compSize++] = buffer[j];
		}

		//for last group, pad the block
		for (int j = groupLen; j < 8; j++) {
			des[compSize++] = 0;
		}
		//cout << lastStatus << endl;
	}

	//deal with the last group
	if (lastStatus == 0 && groupLen == 8) {
		//normal
	}
	else if (lastStatus > 0 && groupLen == 8) {
		int j = 0;
		//lastStatus: 1->11111110; 2->11111101; 3->11111011
		maskByte = 0xff - (1 << (lastStatus - 1));
		des[compSize++] = maskByte;
		while (j < lastStatus) {
			des[compSize++] = remainBuffer[j++];
		}
		//pad the block
		for (; j<8; j++) {
			des[compSize++] = 0;
		}
	}
	else if (lastStatus == 0 && groupLen < 8) {
		//have dealed
	}
	else if (lastStatus > 0 && groupLen < 8) {
		cout << "Wrong status with the last group!" << endl;
	}

	return compSize;
}

template<typename T>
int GroupVBCompUnary::decodeBlock(T* des, const char* src, uint32_t decodeNum) {
	const char* srcBeg = src;
	uint32_t val;
	uint8_t maskNum;
	uint32_t curPos = 0;
	uint32_t lastStatus = 0;
	const char *remainSrc = src;	//point for last integer in last group

	while (curPos < decodeNum) {
		maskNum = *src;
		src++;
		GvintCompUnaryUnpackInfo& unpackInfo = CompUnaryUnpackInfoArr[maskNum];
		if (!unpackInfo.valid) {
			cout << "invalid group " << maskNum << endl;
		}
		//cout << "Descriptor: " <<  int(maskNum) << endl;
		uint32_t intNum = unpackInfo.intNum;
		if (curPos + intNum > decodeNum) {
			cout<< "Error: actual integers decoded is more than decodeNum!" << endl;
		}

		uint8_t* pOffset = unpackInfo.offsetArr;
		uint32_t* pMask = unpackInfo.maskArr;
		uint32_t firstGroupIntPos = curPos;

		for (uint32_t j=0; j<intNum; j++, pOffset++, pMask++) {
			val = (*(uint32_t*) (src + *pOffset));
			des[curPos++] = val & *pMask;
			//cout << int(*pOffset) << " " << hex << *pMask << dec << endl;
		}

		//update first integer from status in last group
		if (lastStatus > 0) {
			uint8_t shift = 8 * lastStatus;
			uint32_t remainVal = (*(uint32_t*) remainSrc) & ((1 << shift) - 1);
			des[firstGroupIntPos] = (des[firstGroupIntPos] << shift) | remainVal;
		}

		lastStatus = unpackInfo.statusGen;
		remainSrc = src + 8 - lastStatus;
		src += 8;

		//cout << "mask: " <<  hex << int(maskNum) << dec << " decode: " << lastStatus << " intNum: " << intNum << endl;
	}

	return src - srcBeg;

}

}
}


#endif /* GROUPVBCOMPUNARY_HPP_ */
