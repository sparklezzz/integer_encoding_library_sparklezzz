/*
 * SIMD_KSimple_sorted.hpp
 */

#ifndef SIMD_KSIMPLE_SORTED_HPP_
#define SIMD_KSIMPLE_SORTED_HPP_

#ifdef USE_SSE_INSTRUCTION

#include "Compressor.hpp"
#include "VarByte.hpp"
#include <stdint.h>
#include <string.h>
#include <iostream>

namespace paradise {
namespace index {

using namespace std;

class SIMD_KSimple_sorted: public Compressor {
public:
	SIMD_KSimple_sorted() {
	}
	virtual ~SIMD_KSimple_sorted() {
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
		return "SIMD_ksimple_sorted";
	}
	virtual Compressor* clone();
private:
	template<typename T>
	static int encodeBlock(char* des, const T* src, uint32_t length);

	template<typename T>
	static int decodeBlock(T* des, const char* src, uint32_t length);

	template<typename T>
	static int genModeArr(char* des, const T* maxQuadIntArr, const T* minQuadIntArr, uint8_t* modeArr,
			uint32_t quadEncodeNum);

	template<typename T>
	static int encodeAllGroups(char* des, const T* src, uint32_t encodeNum,
			const uint8_t* modeArr, uint32_t totalModeNum);

	//overload
	inline static int encodeAllGroups(char* des, const uint32_t* src, uint32_t encodeNum,
				const uint8_t* modeArr, uint32_t totalModeNum);

	template<typename T>
	static int decodeSingleGroup(T* des, const uint32_t* src, uint8_t mode);

	//overload
	inline static int decodeSingleGroup(uint32_t* des, const uint32_t* src, uint8_t mode);
private:

	static uint8_t bitSizeArr[16];
	static uint8_t codeNum[16];
	static uint32_t maskArr[16];

public:
	static const struct mode_mask_0{
		uint32_t a[4];
	}mode_mask_0 __attribute__((aligned(16)));
	static const struct mode_mask_1{
		uint32_t a[4];
	}mode_mask_1 __attribute__((aligned(16)));
	static const struct mode_mask_2{
		uint32_t a[4];
	}mode_mask_2 __attribute__((aligned(16)));
	static const struct mode_mask_3{
		uint32_t a[4];
	}mode_mask_3 __attribute__((aligned(16)));
	static const struct mode_mask_4{
		uint32_t a[4];
	}mode_mask_4 __attribute__((aligned(16)));
	static const struct mode_mask_5{
		uint32_t a[4];
	}mode_mask_5 __attribute__((aligned(16)));
	static const struct mode_mask_6{
		uint32_t a[4];
	}mode_mask_6 __attribute__((aligned(16)));
	static const struct mode_mask_7{
		uint32_t a[4];
	}mode_mask_7 __attribute__((aligned(16)));
	static const struct mode_mask_8{
		uint32_t a[4];
	}mode_mask_8 __attribute__((aligned(16)));
};

template<typename T>
int SIMD_KSimple_sorted::encode(char* des, const T* src, uint32_t encodeNum) {
	if (encodeNum < 16) {
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
int SIMD_KSimple_sorted::decode(T* des, const char* src, uint32_t decodeNum) {
	if (decodeNum < 16) {
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
int SIMD_KSimple_sorted::encodeBlock(char* des, const T* src, uint32_t encodeNum) {

	// step 1: find max of each 4 integers
	uint32_t quadEncodeNum = encodeNum / 4;
	T *maxQuadIntArr = new T[quadEncodeNum];
	T *minQuadIntArr = new T[quadEncodeNum];
	uint8_t *modeArr = new uint8_t[quadEncodeNum];
	int k = 0;
	for (uint32_t i=0; i<encodeNum; i+=4) {

		uint32_t quadMaxInt = src[i];
		uint32_t quadMinInt = src[i];
		uint32_t tmpEnd = i + 4;
		for (uint32_t j=i+1; j<tmpEnd; j++) {
			quadMaxInt |= src[j];
			quadMinInt &= src[j];
			//if (quadMaxInt < src[j])
			//	quadMaxInt = src[j];
		}
		maxQuadIntArr[k] = quadMaxInt;
		minQuadIntArr[k] = quadMinInt;
		k++;
	}

	// step 2: gen mode array for array of max quad integer
	char *desBeg = des;
	uint32_t *desInt = (uint32_t*)des;
	des += 4;	//leave first 4 byte to record the begin position of data segment
	int totalModeNum = genModeArr(des, maxQuadIntArr, minQuadIntArr, modeArr, quadEncodeNum);
	des += (totalModeNum + 1) / 2;	// skip mode segment
	*desInt = 4 + (totalModeNum + 1) / 2;	// record the begin position of data segment

	// step 3: encode mode and src data
	int compLen = encodeAllGroups(des, src, encodeNum, modeArr, totalModeNum);
	des += compLen;

	delete [] maxQuadIntArr;
	delete [] minQuadIntArr;
	delete [] modeArr;

	return des - desBeg;
}

template<typename T>
int SIMD_KSimple_sorted::decodeBlock(T* des, const char* src, uint32_t decodeNum) {
	const uint32_t *srcInt = (const uint32_t*)src;

	uint32_t dataSegOffset = *srcInt;
	const uint8_t *modeSegPos = (uint8_t*)src + 4;
	const uint8_t *dataSegPos = (uint8_t*)src + dataSegOffset;
	const uint32_t *wordPos = (const uint32_t*)dataSegPos;

	uint32_t decoded = 0;

	// load parallel mask into xmm register
	 __asm__("movdqu %0,%%xmm0\n"
			"movdqu %1,%%xmm1\n"
			"movdqu %2,%%xmm2\n"
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqu %6,%%xmm6\n"
			"movdqu %7,%%xmm7\n"
			"movdqu %8,%%xmm8\n"

			::"m" (mode_mask_0.a[0]),"m" (mode_mask_1.a[0]),"m" (mode_mask_2.a[0]),"m" (mode_mask_3.a[0]),"m" (mode_mask_4.a[0]),"m" (mode_mask_5.a[0]),"m" (mode_mask_6.a[0]),"m" (mode_mask_7.a[0]),"m" (mode_mask_8.a[0])
			:"memory");


	while (decoded < decodeNum) {
		//cout << wordPos[0] << " " << wordPos[1] << endl;
		uint8_t mode = (*modeSegPos) & 15;
		int newNumDecoded = decodeSingleGroup(des, wordPos, mode);
		if (mode >= 2 && mode <= 11) {
			wordPos += 4;
		}
		decoded += newNumDecoded;
		des += newNumDecoded;

		//cout << wordPos[0] << " " << wordPos[1] << endl;
		mode = ((uint8_t)(*modeSegPos)) >> 4;
		if (decoded == decodeNum) {
			if (mode != 15)
				cerr << "last mode decode error!" << endl;
			break;
		}
		newNumDecoded = decodeSingleGroup(des, wordPos, mode);
		if (mode >= 2 && mode <= 11) {
			wordPos += 4;
		}
		decoded += newNumDecoded;
		des += newNumDecoded;

		modeSegPos ++;
	}

	return (char*)wordPos - src;
}

template<typename T>
int SIMD_KSimple_sorted::genModeArr(char* des, const T* maxQuadIntArr, const T* minQuadIntArr, uint8_t* modeArr,
		uint32_t quadEncodeNum) {
	int totalModeNum = 0;

	uint32_t left = quadEncodeNum;

	while (left > 0) {
		uint32_t num2code;
		uint8_t bitNum;

		// count successive 1
		int oneCount = 0;
		for (int i=0; i<16 && i<left; i++) {
			if (maxQuadIntArr[i] == 1 && maxQuadIntArr[i] == minQuadIntArr[i]) {
				oneCount ++;
			} else {
				break;
			}
		}

		if (oneCount == 16) {
			bitNum = 12;
			num2code = 16;
		} else if (oneCount >= 8) {
			bitNum = 13;
			num2code = 8;
		} else {
			for (bitNum = 0; bitNum < 12; bitNum++) {
				num2code = codeNum[bitNum];
				if (left < num2code)
					continue;
				uint32_t bitSize = bitSizeArr[bitNum];
				uint32_t mask = maskArr[bitNum];
				int pos = 0;
				for (pos = 0; (pos < num2code) && (*(maxQuadIntArr + pos) <= mask); pos++) {
				}
				if (pos == num2code) {//说明能被压缩
					break;
				}
			}
		}

		minQuadIntArr += num2code;
		maxQuadIntArr += num2code;
		left -= num2code;
		*modeArr = bitNum;
		modeArr ++;
		if (totalModeNum % 2 == 1) {
			*des |= bitNum << 4;
			des ++;
		}
		else {
			*des = bitNum;
		}
		totalModeNum ++;
	}

	if (totalModeNum % 2 == 1) { //pad the last byte
		*des |= 240;
	}

	return totalModeNum;
}

template<typename T>
int SIMD_KSimple_sorted::encodeAllGroups(char* des, const T* src, uint32_t encodeNum,
		const uint8_t* modeArr, uint32_t totalModeNum) {

	const T* srcBeg = src;
	uint32_t* wordPos = (uint32_t*)des;
	memset(des, 0, totalModeNum * 16);

	for (uint32_t i=0; i<totalModeNum; i++) {
		int mode = *modeArr;
		modeArr++;
		// encode data

		// successive 0 or successive 1
		if (mode == 0 || mode == 12) {
			src += 64;
			continue;
		} else if (mode == 1 || mode == 13) {
			src += 32;
			continue;
		}

		uint32_t num2code = codeNum[mode];
		uint32_t bitSize = bitSizeArr[mode];
		uint32_t curOffset = 0;
		for (int pos = 0; pos < num2code; pos++) {
			for (int j=0; j<4; j++) {
				*(wordPos + j) |= (*(src + j)) << curOffset;
			}
			curOffset += bitSize;
			src += 4;
		}
		wordPos += 4;
	}

	if (src - srcBeg != encodeNum) {
		cerr << "encode data seg error!" << endl;
	}

	return ((char*)wordPos) - des;
}

template<typename T>
int SIMD_KSimple_sorted::decodeSingleGroup(T* des, const uint32_t* src, uint8_t mode) {

	switch (mode) {
	case 0:
		memset(des, 0, sizeof(T) * 16 * 4);
		break;
	case 1:
		memset(des, 0, sizeof(T) * 8 * 4);
		break;
	case 2:	// 1 * 32
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i]) & 1;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 1) & 1;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 2) & 1;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 3) & 1;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 4) & 1;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 5) & 1;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 6) & 1;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 7) & 1;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 8) & 1;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 9) & 1;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 10) & 1;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 11) & 1;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 12) & 1;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 13) & 1;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 14) & 1;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 15) & 1;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 16) & 1;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 17) & 1;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 18) & 1;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 19) & 1;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 20) & 1;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 21) & 1;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 22) & 1;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 23) & 1;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 24) & 1;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 25) & 1;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 26) & 1;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 27) & 1;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 28) & 1;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 29) & 1;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 30) & 1;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 31) & 1;
			des++;
		}
		break;
	case 3:	// 2 * 16
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i]) & 3;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 2) & 3;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 4) & 3;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 6) & 3;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 8) & 3;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 10) & 3;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 12) & 3;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 14) & 3;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 16) & 3;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 18) & 3;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 20) & 3;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 22) & 3;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 24) & 3;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 26) & 3;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 28) & 3;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 30) & 3;
			des++;
		}
		break;
	case 4:	// 3 * 10
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i]) & 7;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 3) & 7;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 6) & 7;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 9) & 7;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 12) & 7;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 15) & 7;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 18) & 7;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 21) & 7;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 24) & 7;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 27) & 7;
			des++;
		}
		break;
	case 5:	// 4 * 8
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i]) & 15;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 4) & 15;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 8) & 15;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 12) & 15;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 16) & 15;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 20) & 15;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 24) & 15;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 28) & 15;
			des++;
		}
		break;
	case 6:	// 5 * 6
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i]) & 31;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 5) & 31;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 10) & 31;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 15) & 31;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 20) & 31;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 25) & 31;
			des++;
		}
		break;
	case 7:	// 6 * 5
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i]) & 63;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 6) & 63;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 12) & 63;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 18) & 63;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 24) & 63;
			des++;
		}
		break;
	case 8: // 8 * 4
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i]) & 255;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 8) & 255;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 16) & 255;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 24) & 255;
			des++;
		}
		break;
	case 9:	// 10 * 3
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i]) & 1023;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 10) & 1023;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 20) & 1023;
			des++;
		}
		break;
	case 10:	// 16 * 2
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i]) & 65535;
			des++;
		}
		for (uint32_t i=0; i<4; i++) {
			*des = (src[i] >> 16) & 65535;
			des++;
		}
		break;
	case 11:	// 32 * 1
		for (uint32_t i=0; i<4; i++) {
			*des = src[i];
			des++;
		}
		break;
	case 12:
		for (uint32_t i=0; i<16 * 4; i++) {
			*des = 1;
			des++;
		}
		return 64;
		break;
	case 13:
		for (uint32_t i=0; i<8 * 4; i++) {
			*des = 1;
			des++;
		}
		return 32;
		break;
	default:	// end of block
		return 0;
		break;
	}
	return codeNum[mode] << 2;	// note we decode quad integers
}

}
}

#endif

#endif /* SIMD_KSIMPLE_SORTED_HPP_ */
