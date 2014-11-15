/*
 * GroupVBIUIntelParallel.hpp
 *
 *  Created on: 2013-1-23
 *      Author: zxd
 */

#ifndef GROUPVBIUINTELPARALLEL_HPP_
#define GROUPVBIUINTELPARALLEL_HPP_

#ifdef USE_SSE_INSTRUCTION

#include "Compressor.hpp"
#include "GvintIncompUnaryUnpackIntelParallel.hpp"
#include "GvintIncompUnaryUnpack.hpp"
#include "VarByte.hpp"
#include <iostream>

namespace paradise {
namespace index {

using namespace std;

class GroupVBIUIntelParallel: public Compressor {
public:
	GroupVBIUIntelParallel() {
	}
	virtual ~GroupVBIUIntelParallel() {
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
		return "group_var_byte_incomp_unary_intel";
	}
	virtual Compressor* clone();

private:
	template<typename T>
	static int encodeBlock(char* des, const T* src, uint32_t encodeNum);

	template<typename T>
	static int decodeBlock(T* des, const char* srcInt, uint32_t decodeNum);

	// bug: with template specialization, use function overload instead
	// template <>
	static int decodeBlock(uint32_t* des, const char* src, uint32_t decodeNum);
};

template<typename T>
int GroupVBIUIntelParallel::encode(char* des, const T* src, uint32_t encodeNum) {
	int compLen = 0;
	compLen = encodeBlock(des, src, encodeNum);
	return compLen;
}

template<typename T>
int GroupVBIUIntelParallel::decode(T* des, const char* src, uint32_t decodeNum) {
	int decodeLen = 0;
	decodeLen = decodeBlock(des, src, decodeNum);
	return decodeLen;
}
template<typename T>
int GroupVBIUIntelParallel::encodeBlock(char* des, const T* src, uint32_t encodeNum) {
	int compSize = 0;
	uint8_t maskByte;
	int groupLen = 0;
	uint8_t buffer[16];
	int pos = 0;
	char * pData;
	while (pos < encodeNum) {
		groupLen = 0;

		uint32_t lastByteNum = 0;	//save last byte num of an integer, if failed to insert the integer into the last group
		bool lastByteNumValid = false;

			//unary descriptor, start from low bit
			//the block is left incomplete and padded with 0s, while the descriptor is padded with 1s.
		maskByte = 0x0;
			//will encode 2~8 integers, depending on byte nums of each integer
		while (pos < encodeNum && groupLen < 8) {
			uint32_t curVal = src[pos];

				// get byte num of the integer
			uint32_t byteNum = 0;
			if (lastByteNumValid) {
				byteNum = lastByteNum;
			}
			else {
				uint32_t tmp = curVal;
				while(tmp > 0) {
					tmp >>= 8;
					byteNum++;
				}
				if (byteNum == 0)	//for zero
					byteNum = 1;
			}

			if (groupLen + byteNum > 8) {	//cannot insert whole integer into the group
				lastByteNumValid = true;
				lastByteNum = byteNum;
				break;
			}
			else {
				lastByteNumValid = false;
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
		//pad the descriptor
		if (groupLen < 8) {
			uint8_t pad = (0xff >> groupLen) << groupLen;
			maskByte |= pad;
		}

		des[compSize++] = maskByte;
		for (int j = 0; j < groupLen; j++) {
			des[compSize++] = buffer[j];
		}
		//pad the block
		for (int j = groupLen; j < 8; j++) {
			des[compSize++] = 0;
		}
	}
	return compSize;
}

template<typename T>
int GroupVBIUIntelParallel::decodeBlock(T* des, const char* src, uint32_t decodeNum) {
	const char* srcBeg = src;
	uint32_t val;
	uint8_t maskNum;
	uint32_t curPos = 0;
	while (curPos < decodeNum) {
		maskNum = *src;
		src++;
		GvintIncompUnaryUnpackInfo& unpackInfo = incompUnaryUnpackInfoArr[maskNum];
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

		for (uint32_t j=0; j<intNum; j++, pOffset++, pMask++) {
			val = (*(uint32_t*) (src + *pOffset));
			des[curPos++] = val & *pMask;
			//cout << int(*pOffset) << " " << hex << *pMask << dec << endl;
		}
		src += 8;
	}

	return src - srcBeg;
}

}
}

#endif

#endif /* GROUPVBIUINTELPARALLEL_HPP_ */
