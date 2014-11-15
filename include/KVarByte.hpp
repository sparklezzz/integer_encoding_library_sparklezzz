/*
 * KVarByte.hpp
 *
 *  Created on: 2013-3-2
 *      Author: zxd
 */

#ifndef KVARBYTE_HPP_
#define KVARBYTE_HPP_

#include <stdint.h>
#include <cmath>
#include <assert.h>
#include <string.h>
#include "Compressor.hpp"
#include "VarByte.hpp"
#include <iostream>

using namespace std;

namespace paradise {
namespace index {

class KVarByte: public Compressor {
public:
	KVarByte() {
	}
	virtual ~KVarByte() {
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
		return "KVarByte";
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

	template<typename T>
	static int genModeArr(char* des, const T* maxQuadIntArr, uint8_t* modeArr,
			uint32_t quadEncodeNum);

	template<typename T>
	static int encodeAllGroups(char* des, const T* src, uint32_t encodeNum,
			const uint8_t* modeArr, uint32_t totalIntsNeeded);
};

template<typename T>
int KVarByte::encode(char* des, const T* src, uint32_t encodeNum) {
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
int KVarByte::decode(T* des, const char* src, uint32_t decodeNum) {
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
int KVarByte::encodeBlock(char* des, const T* src, uint32_t encodeNum) {
	const static uint32_t byte_mask_map[5] = {0, 0xff, 0xffff, 0xffffff, 0xffffffff};
	uint32_t quadEncodeNum = encodeNum / 4;
	char *desBeg = des;
	uint32_t *desInt = (uint32_t*)des;
	char *modeSegPos = des + 4;	//leave first 4 byte to record the begin position of data segment
	char *dataSegPos = modeSegPos + (quadEncodeNum + 3)/4;
	uint32_t *dataSegPosInt = (uint32_t*)dataSegPos;

	memset(modeSegPos, 0, (quadEncodeNum + 3)/4);
	*desInt = 4 + (quadEncodeNum + 3) / 4;	// record the begin position of data segment

	if (encodeNum > 0)
		memset(dataSegPosInt, 0, 4 * sizeof(uint32_t));

	int k = 0;
	uint32_t quadIdx = 0;
	uint32_t curByteOffset = 0;
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
		if (byteLeftInUInt < byteCount) {	//new data should cross uint boundary
			// write data with effective bit length of the max val
			for (uint32_t k=0; k<4; k++) {
				*(dataSegPosInt + k) |= (src[k] & byte_mask_map[byteLeftInUInt]) << (curByteOffset<<3);
			}
			//start a new group and left val
			dataSegPosInt += 4;
			uint32_t byteUnwritten = byteCount - byteLeftInUInt;
			for (uint32_t k=0; k<4; k++) {
				*(dataSegPosInt + k) = (src[k] >> (byteLeftInUInt<<3)) & byte_mask_map[byteUnwritten] ;
			}
			curByteOffset = byteUnwritten;
		}
		else {
			// write data with effective bit length of the max val
			for (uint32_t k=0; k<4; k++) {
				*(dataSegPosInt + k) |= (src[k] & byte_mask_map[byteCount]) << (curByteOffset<<3);
			}
			curByteOffset += byteCount;
		}

		src += 4;
	}
	dataSegPosInt += 4;

	return (char*)dataSegPosInt - desBeg;
}

/*
template<typename T>
int KVarByte::encodeBlock(char* des, const T* src, uint32_t encodeNum) {

	// step 1: find max of each 4 integers
	uint32_t quadEncodeNum = encodeNum / 4;
	T *maxQuadIntArr = new T[quadEncodeNum];
	uint8_t *modeArr = new uint8_t[quadEncodeNum];
	int k = 0;
	for (uint32_t i=0; i<encodeNum; i+=4) {

		uint32_t quadMaxInt = src[i];
		uint32_t tmpEnd = i + 4;
		for (uint32_t j=i+1; j<tmpEnd; j++) {
			quadMaxInt |= src[j];
			//if (quadMaxInt < src[j])
			//	quadMaxInt = src[j];
		}
		maxQuadIntArr[k++] = quadMaxInt;
	}

	// step 2: gen mode array for array of max quad integer
	char *desBeg = des;
	uint32_t *desInt = (uint32_t*)des;
	des += 4;	//leave first 4 byte to record the begin position of data segment
	uint32_t totalBytesNeeded = genModeArr(des, maxQuadIntArr, modeArr, quadEncodeNum);
	des += (quadEncodeNum + 3) / 4;	// skip mode segment
	*desInt = 4 + (quadEncodeNum + 3) / 4;	// record the begin position of data segment

	uint32_t totalIntsNeeded = ((totalBytesNeeded + 3) >> 2) << 2;

	// step 3: encode mode and src data
	int compLen = encodeAllGroups(des, src, encodeNum, modeArr, totalIntsNeeded);
	des += compLen;

	delete [] maxQuadIntArr;
	delete [] modeArr;

	return des - desBeg;
}
*/


template<typename T>
int KVarByte::decodeBlock(T* des, const char* src, uint32_t decodeNum) {

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
			uint32_t curBitOffset = curByteOffset << 3;
			uint32_t byteLeftInUInt = 4 - curByteOffset;
			uint32_t bitLeftInUInt = byteLeftInUInt << 3;
			for	(uint32_t k=0; k<4; k++) {
				*(des+k) = (*(wordPos+k) >> curBitOffset) & byte_mask_map[byteCount];
			}

			wordPos += ((curByteOffset + byteCount) >> 2) << 2;
			curByteOffset = (curByteOffset + byteCount) & 0x3;

			if (byteLeftInUInt < byteCount) {	//start to read a new group
				uint32_t restByteCount = byteCount - byteLeftInUInt;
				
				for (uint32_t k=0; k<4; k++) {
					*(des+k) |= (*(wordPos+k) & byte_mask_map[restByteCount]) << bitLeftInUInt;
				}
			}

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

template<typename T>
int KVarByte::genModeArr(char* des, const T* maxQuadIntArr, uint8_t* modeArr,
		uint32_t quadEncodeNum) {
	uint32_t totalBytesNeed = 0;

	uint32_t idx = 0;
	memset(des, 0, (quadEncodeNum + 3)/4);

	while (idx < quadEncodeNum) {
		T tmp = *maxQuadIntArr;
		if (tmp == 0)
			tmp ++;
		char byteCount = 0;
		while (tmp > 0) {
			tmp >>= 8;
			byteCount ++;
		}
		totalBytesNeed += byteCount;

		maxQuadIntArr ++;
		*modeArr = byteCount;
		modeArr ++;

		*des |= (byteCount-1) << ((idx & 0x3) << 1);
		idx ++;
		if (!(idx & 0x3)) {
			des ++;
		}
	}
	return totalBytesNeed;
}

template<typename T>
int KVarByte::encodeAllGroups(char* des, const T* src, uint32_t encodeNum,
		const uint8_t* modeArr, uint32_t totalIntsNeeded) {

	const static uint32_t byte_mask_map[5] = {0, 0xff, 0xffff, 0xffffff, 0xffffffff};

	const T* srcBeg = src;
	uint32_t* desInt = (uint32_t*)des;
	memset(des, 0, totalIntsNeeded * sizeof(uint32_t));

	int totalModeNum = encodeNum / 4;
	uint32_t curByteOffset = 0;
	for (uint32_t i=0; i<totalModeNum; i++) {
		uint32_t byteCount = *modeArr;
		modeArr++;

		uint32_t byteLeftInUInt = 4 - curByteOffset;
		if (byteLeftInUInt < byteCount) {	//new data should cross uint boundary
			// write data with effective bit length of the max val
			for (uint32_t k=0; k<4; k++) {
				*(desInt + k) |= (src[k] & byte_mask_map[byteLeftInUInt]) << (curByteOffset<<3);
			}

			//start a new group and left val
			desInt += 4;
			uint32_t byteUnwritten = byteCount - byteLeftInUInt;
			for (uint32_t k=0; k<4; k++) {
				*(desInt + k) = (src[k] >> (byteLeftInUInt<<3)) & byte_mask_map[byteUnwritten] ;
			}
			curByteOffset = byteUnwritten;
		}
		else {
			// write data with effective bit length of the max val
			for (uint32_t k=0; k<4; k++) {
				*(desInt + k) |= (src[k] & byte_mask_map[byteCount]) << (curByteOffset<<3);
			}
			curByteOffset += byteCount;
		}

		src += 4;

	}

	desInt += 4;
	if (src - srcBeg != encodeNum) {
		cerr << "encode data seg error!" << endl;
	}
	if (desInt - (uint32_t*)des != totalIntsNeeded) {
		cerr << "total int needed error!" << endl;
	}

	return ((char*)desInt) - des;
}

}
}


#endif /* KVARBYTE_HPP_ */
