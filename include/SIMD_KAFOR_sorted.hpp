/**
 * filename:SIMD_KAFOR_sorted.hpp
 * @brief: for every four integers, use AFOR
 *         separate frameheader and frame data into two area
 * 			Adapted frame of work coding algorithm, implemented from paper:
 *        "ADAPTIVE FRAME OF REFERENCE FOR COMPRESSING INVERTED LISTS"
 * @data:2013-11-15
 * @author:zxd
 */

#ifndef SIMD_KAFOR_SORTED_HPP_
#define SIMD_KAFOR_SORTED_HPP_

#ifdef USE_SSE_INSTRUCTION

#include <stdint.h>
#include <iostream>
#include <string.h>
#include <cassert>
#include "Compressor.hpp"
#include "VarByte.hpp"

#include "SIMD_KAFOR_pack.hpp"
#include "SIMD_KAFOR_unpack.hpp"

namespace paradise {
namespace index {

class SIMD_KAFOR_sorted: public Compressor {
public:

	struct SIMD_KAFORConfig {
		uint32_t numFrames;
		uint32_t totalByte;
		struct SIMD_KAFORFrame {
			uint32_t bitWidth;
			uint32_t frameLength;
			uint32_t frameLengthId;
		};
		SIMD_KAFORFrame frames[4];
	};


	SIMD_KAFOR_sorted();

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
		return "simd_kafor";
	}
	virtual Compressor* clone();

	template<typename T>
	int encode(char* des, const T* src, uint32_t encodeNum);

	template<typename T>
	int decode(T* des, const char* src, uint32_t decodeNum);

private:
	template<typename T>
	int encodeBlock(char* des, const T* src, uint32_t encodeNum);

	template<typename T>
	int decodeBlock(T* des, const char* src, uint32_t decodeNum);

	template<typename T>
	uint32_t decodeAllFrames(T* des, const char* src, const char* frameHeaderArr, uint32_t numFrames);

	template<typename T>
	uint32_t chooseAndSaveBestConfig(char *des, const T *maxQuadArr, const T *minQuadArr,
			uint32_t maxQuadNum, SIMD_KAFORConfig tmpConfigArr[]);

	template<typename T>
	uint32_t chooseBestConfig(const T *src, SIMD_KAFOR_sorted::SIMD_KAFORConfig configArr[]);

	template<typename T>
	uint32_t encodeAllFrames(char *des, const T *src, const char* frameHeaderArr, uint32_t numFrames);

	template<typename T>
	uint32_t getMaxBitWidthOfInts(const T *src, uint32_t num);

protected:
	static const uint32_t m_windowSize = 128;
	static const struct mode_mask_0{
		uint32_t a[4];
	}mode_mask_0 __attribute__((aligned(16)));

};

template<typename T>
int SIMD_KAFOR_sorted::encode(char* des, const T* src, uint32_t encodeNum) {
	uint32_t compLen = 0;
	uint32_t encoded = 0;
	while (encoded < encodeNum) {
		if (encoded + m_windowSize <= encodeNum) {
			int alignedNumInt = encodeNum / 128 * 128;
			compLen += encodeBlock(des + compLen, src + encoded, alignedNumInt);
			encoded += alignedNumInt;
		} else {
			compLen += (uint32_t)VarByte::encode(des + compLen, src + encoded, encodeNum - encoded);
			encoded = encodeNum;
		}
	}
	return (int)compLen;
}

template<typename T>
int SIMD_KAFOR_sorted::decode(T* des, const char* src, uint32_t decodeNum) {
	uint32_t byteDecompressed = 0;
	uint32_t decoded = 0;
	while (decoded < decodeNum) {
		if (decoded + m_windowSize <= decodeNum) {
			int alignedNumInt = decodeNum / 128 * 128;
			byteDecompressed += decodeBlock(des + decoded, src + byteDecompressed, alignedNumInt);
			decoded += alignedNumInt;
		} else {
			byteDecompressed += (uint32_t)VarByte::decode<T>(des + decoded, src + byteDecompressed, decodeNum - decoded);
			decoded = decodeNum;
		}
	}
	return (int)byteDecompressed;
}


template<typename T>
int SIMD_KAFOR_sorted::encodeBlock(char* des, const T* src, uint32_t encodeNum) {

	SIMD_KAFOR_sorted::SIMD_KAFORConfig configArr[6];
	// init basic configuration info
	configArr[0].numFrames = 1;
	configArr[0].frames[0].frameLength = 32;
	configArr[0].frames[0].frameLengthId = 64;

	configArr[1].numFrames = 2;
	configArr[1].frames[0].frameLengthId = 32;
	configArr[1].frames[0].frameLength = 16;
	configArr[1].frames[1].frameLengthId = 32;
	configArr[1].frames[1].frameLength = 16;

	configArr[2].numFrames = 3;
	configArr[2].frames[0].frameLengthId = 32;
	configArr[2].frames[0].frameLength = 16;
	configArr[2].frames[1].frameLengthId = 0;
	configArr[2].frames[1].frameLength = 8;
	configArr[2].frames[2].frameLengthId = 0;
	configArr[2].frames[2].frameLength = 8;

	configArr[3].numFrames = 3;
	configArr[3].frames[0].frameLengthId = 0;
	configArr[3].frames[0].frameLength = 8;
	configArr[3].frames[1].frameLengthId = 32;
	configArr[3].frames[1].frameLength = 16;
	configArr[3].frames[2].frameLengthId = 0;
	configArr[3].frames[2].frameLength = 8;

	configArr[4].numFrames = 3;
	configArr[4].frames[0].frameLengthId = 0;
	configArr[4].frames[0].frameLength = 8;
	configArr[4].frames[1].frameLengthId = 0;
	configArr[4].frames[1].frameLength = 8;
	configArr[4].frames[2].frameLengthId = 32;
	configArr[4].frames[2].frameLength = 16;

	configArr[5].numFrames = 4;
	configArr[5].frames[0].frameLengthId = 0;
	configArr[5].frames[0].frameLength = 8;
	configArr[5].frames[1].frameLengthId = 0;
	configArr[5].frames[1].frameLength = 8;
	configArr[5].frames[2].frameLengthId = 0;
	configArr[5].frames[2].frameLength = 8;
	configArr[5].frames[3].frameLengthId = 0;
	configArr[5].frames[3].frameLength = 8;


	// assuming encodeNum is multiple of 128
	// step 1: find max of each 4 integers
	uint32_t quadEncodeNum = encodeNum / 4;
	T *maxQuadIntArr = new T[quadEncodeNum];
	T *minQuadIntArr = new T[quadEncodeNum];
	int k = 0;
	for (uint32_t i=0; i<encodeNum; i+=4) {
		uint32_t quadMaxInt = src[i];
		uint32_t quadMinInt = src[i];
		uint32_t tmpEnd = i + 4;
		for (uint32_t j=i+1; j<tmpEnd; j++) {
			quadMaxInt |= src[j];
			quadMinInt &= src[j];
		}
		maxQuadIntArr[k] = quadMaxInt;
		minQuadIntArr[k] = quadMinInt;
		k++;
	}

	// step 2: choose config and save all frame header
	char *desBeg = des;
	uint32_t *desInt = (uint32_t*)des;
	des += 4;	//leave first 4 byte to record the begin position of data segment
	uint32_t totalNumFrameHeader = chooseAndSaveBestConfig(des, maxQuadIntArr, minQuadIntArr, k, configArr);
	const char *frameHeaderArr = des;
	des += totalNumFrameHeader;	// skip frame header area
	*desInt = 4 + totalNumFrameHeader;	// record the begin position of data segment

	// step 3: encode all frames
	int compLen = encodeAllFrames(des, src, frameHeaderArr, totalNumFrameHeader);
	des += compLen;

	delete [] maxQuadIntArr;
	delete [] minQuadIntArr;

	return des - desBeg;
}

template<typename T>
int SIMD_KAFOR_sorted::decodeBlock(T* des, const char* src, uint32_t decodeNum) {
	const uint32_t *srcInt = (const uint32_t*)src;

	uint32_t dataSegOffset = *srcInt;
	uint32_t numFrames = dataSegOffset - 4;
	const char *frameHeaderArr = src + 4;
	const char *dataSegPos = src + dataSegOffset;
	uint32_t dataSegByte = decodeAllFrames(des, dataSegPos, frameHeaderArr, numFrames);
	return dataSegPos + dataSegByte - src;
}


template<typename T>
uint32_t SIMD_KAFOR_sorted::chooseAndSaveBestConfig(char *des, const T *maxQuadArr,
		const T *minQuadArr, uint32_t maxQuadNum, SIMD_KAFORConfig tmpConfigArr[]) {
	uint32_t totalNumFrameHeader = 0;
	int i=0;
	while (i < maxQuadNum) {
		int left = maxQuadNum - i;
		int zeroCount = 0;
		int oneCount = 0;
		bool succZero = true;
		bool succOne = true;
		for (int j=0; j<16 && j<left; ++j) {
			if (succZero && maxQuadArr[j] == 0) {
				zeroCount ++;
			} else {
				succZero = false;
			}
			if (succOne && maxQuadArr[j] == 1 && maxQuadArr[j] == minQuadArr[j]) {
				oneCount ++;
			} else {
				succOne = false;
			}
		}

		if (zeroCount == 16) {
			totalNumFrameHeader ++;
			*des++ = (uint8_t)(3 << 5);
			maxQuadArr += 16;
			minQuadArr += 16;
			i += 16;
		} else if (zeroCount >= 8) {
			totalNumFrameHeader ++;
			*des++ = (uint8_t)(4 << 5);
			maxQuadArr += 8;
			minQuadArr += 8;
			i += 8;
		} else if (oneCount == 16) {
			totalNumFrameHeader ++;
			*des++ = (uint8_t)(5 << 5);
			maxQuadArr += 16;
			minQuadArr += 16;
			i += 16;
		} else if (oneCount >= 8) {
			totalNumFrameHeader ++;
			*des++ = (uint8_t)(6 << 5);
			maxQuadArr += 8;
			minQuadArr += 8;
			i += 8;
		} else if (left < 32) {
			assert(left % 8 == 0);
			for (uint32_t j=0; j<left; j+=8) {
				uint8_t ebl = getMaxBitWidthOfInts(maxQuadArr + j, 8);
				totalNumFrameHeader ++;
				*des++ = ebl;
			}
			maxQuadArr += left;
			minQuadArr += left;
			i += left;
		} else {
			int bestConf = chooseBestConfig(maxQuadArr, tmpConfigArr);
			const SIMD_KAFORConfig &configChoosen = tmpConfigArr[bestConf];
			totalNumFrameHeader += configChoosen.numFrames;
			// save frame header
			for (int j=0; j<configChoosen.numFrames; ++j) {
				uint8_t frameHeader = configChoosen.frames[j].frameLengthId + configChoosen.frames[j].bitWidth - 1;	// bitwidth -> 0 to 31
				*des++ = frameHeader;
			}
			maxQuadArr += 32;
			minQuadArr += 32;
			i += 32;
		}
	}
	return totalNumFrameHeader;
}


template<typename T>
uint32_t SIMD_KAFOR_sorted::decodeAllFrames(T* des, const char* src, const char* frameHeaderArr, uint32_t numFrames) {

	// load parallel mask into xmm register
	 __asm__("movdqu %0,%%xmm0\n"
			::"m" (mode_mask_0.a[0])
			:"memory");

	const uint32_t *srcInt = (const uint32_t *)src;
	uint32_t byteOffset = 0;	// 0 to 3
	for (uint32_t i=0; i<numFrames; ++i) {
		uint8_t frameHeader = (uint8_t)frameHeaderArr[i];

		uint32_t frameLenId = frameHeader >> 5;
		switch (frameLenId){
		case 3:
			__asm__("pxor %%xmm9, %%xmm9\n"
					:::);
			for (int i=0; i<16; i++) {
				__asm__("movdqu %%xmm9,%0\n"		// write output of 4 int
						:"=m" (des[0])
						::"memory");
				des += 4;
			}
			break;
		case 4:
			__asm__("pxor %%xmm9, %%xmm9\n"
					:::);
			for (int i=0; i<8; i++) {
				__asm__("movdqu %%xmm9,%0\n"		// write output of 4 int
						:"=m" (des[0])
						::"memory");
				des += 4;
			}
			break;
		case 5:	// xmm0 stores 4 integers of 0x1 each
			for (int i=0; i<16; i++) {
				__asm__("movdqu %%xmm0,%0\n"		// write output of 4 int
						:"=m" (des[0])
						::"memory");
				des += 4;
			}
			break;
		case 6:
			for (int i=0; i<8; i++) {
				__asm__("movdqu %%xmm0,%0\n"		// write output of 4 int
						:"=m" (des[0])
						::"memory");
				des += 4;
			}
			break;
		default:
			uint32_t SIMD_KAFORUnpackInfoIdx = (((uint32_t)frameHeader) << 2) + byteOffset;
			if (SIMD_KAFORUnpackInfoIdx >= 384)
				std::cout << "wrong SIMD_KAFORUnpackInfoIdx!" << SIMD_KAFORUnpackInfoIdx << std::endl;

			const SIMD_KAFORUnpackInfo &info = SIMD_KAFORUnpackInfoArr[SIMD_KAFORUnpackInfoIdx];
			if (byteOffset << 3 != info.m_offset)
				std::cout << "wrong info offset!" << (byteOffset<<3) << " " << info.m_offset << std::endl;

			info.m_subFunc((uint32_t *)des, srcInt);
			srcInt += info.m_wordSkipped;
			des += info.m_intDecoded;
			byteOffset = info.m_newOffset >> 3;
			break;
		}
	}

	if (byteOffset > 0)
		srcInt += 4;

	return ((const char*)srcInt) - src;


}


/*
 * return configration identifier:
 * 0: 32
 * 1: 16, 16
 * 2: 16, 8, 8
 * 3: 8, 16, 8
 * 4: 8, 8, 16
 * 5: 8, 8, 8, 8
 */

template<typename T>
uint32_t SIMD_KAFOR_sorted::chooseBestConfig(const T *src, SIMD_KAFOR_sorted::SIMD_KAFORConfig configArr[]) {
#define MAX_OF_TWO(x, y) ((x) > (y) ? (x) : (y))

	/*
	 * Assuming window size is 32.
	 * mininum frame length is 8, and all frame length is multiple of 8.
	 */
	uint32_t bitFrames[4] = {0, 0, 0, 0};
	// step1: calculate max bit width of each 8 integers
	for (uint32_t i=0; i<4; ++i) {
		// choose max of each 8 integers
		T tmp = src[8*i];
		for (uint32_t j=1; j<8; ++j) {
			tmp |= src[8*i+j];
		}

		// get effective bit length
		uint32_t ebl = 0;
		while (tmp > 0) {
			ebl ++;
			tmp >>= 1;
		}
		if (ebl == 0) {	//encode 0
			ebl = 1;
		}
		bitFrames[i] = ebl;
	}

	// step 2: calculate size of each configuration
	uint32_t curSize;
	uint32_t bestConf = 0, bestSize = 0xffffffff;

	// gen configuration arr
	configArr[0].frames[0].bitWidth = MAX_OF_TWO(MAX_OF_TWO(bitFrames[0], bitFrames[1]), MAX_OF_TWO(bitFrames[2], bitFrames[3]));

	configArr[1].frames[0].bitWidth = MAX_OF_TWO(bitFrames[0], bitFrames[1]);
	configArr[1].frames[1].bitWidth = MAX_OF_TWO(bitFrames[2], bitFrames[3]);

	configArr[2].frames[0].bitWidth = MAX_OF_TWO(bitFrames[0], bitFrames[1]);
	configArr[2].frames[1].bitWidth = bitFrames[2];
	configArr[2].frames[2].bitWidth = bitFrames[3];

	configArr[3].frames[0].bitWidth = bitFrames[0];
	configArr[3].frames[1].bitWidth = MAX_OF_TWO(bitFrames[1], bitFrames[2]);
	configArr[3].frames[2].bitWidth = bitFrames[3];

	configArr[4].frames[0].bitWidth = bitFrames[0];
	configArr[4].frames[1].bitWidth = bitFrames[1];
	configArr[4].frames[2].bitWidth = MAX_OF_TWO(bitFrames[2], bitFrames[3]);

	configArr[5].frames[0].bitWidth = bitFrames[0];
	configArr[5].frames[1].bitWidth = bitFrames[1];
	configArr[5].frames[2].bitWidth = bitFrames[2];
	configArr[5].frames[3].bitWidth = bitFrames[3];

	// step3: choose best conf
	for (uint32_t i=0; i<6; ++i) {
		curSize = 8 * configArr[i].numFrames;
		for (uint32_t j=0; j<configArr[i].numFrames; ++j) {
			curSize += configArr[i].frames[j].bitWidth * configArr[i].frames[j].frameLength * 4;	//do not forget k=4
		}
		configArr[i].totalByte = curSize >> 3;
		if (curSize < bestSize) {
			bestSize = curSize;
			bestConf = i;
		}
	}
	
	return bestConf;
}

template<typename T>
uint32_t SIMD_KAFOR_sorted::getMaxBitWidthOfInts(const T *src, uint32_t num) {
	if (num <= 0) return 0;
	uint32_t maxInt = 0;
	for (uint32_t i=0; i<num; ++i) {
		maxInt |= src[i];
	}
	uint32_t tmp = maxInt;
	// get effective bit length
	uint32_t ebl = 0;
	while (tmp > 0) {
		ebl ++;
		tmp >>= 1;
	}
	if (ebl == 0) {	//encode 0
		ebl = 1;
	}
	return ebl;
}

template<typename T>
uint32_t SIMD_KAFOR_sorted::encodeAllFrames(char *des, const T *src, const char* frameHeaderArr, uint32_t numFrames) {
	uint32_t *desInt = (uint32_t*)des;
	uint32_t byteOffset = 0;	// 0 to 3
	for (uint32_t i=0; i<numFrames; ++i) {
		uint8_t frameHeader = (uint8_t)frameHeaderArr[i];

		uint32_t frameLenId = frameHeader >> 5;
		switch (frameLenId){
		case 3:
			src += 64;
			break;
		case 4:
			src += 32;
			break;
		case 5:
			src += 64;
			break;
		case 6:
			src += 32;
			break;
		default:
			uint32_t SIMD_KAFORPackInfoIdx = (((uint32_t)frameHeader) << 2) + byteOffset;
			if (SIMD_KAFORPackInfoIdx >= 384)
				std::cout << "wrong SIMD_KAFORPackInfoIdx!" << SIMD_KAFORPackInfoIdx << std::endl;

			const SIMD_KAFORPackInfo &info = SIMD_KAFORPackInfoArr[SIMD_KAFORPackInfoIdx];
			if (byteOffset << 3 != info.m_offset)
				std::cout << "wrong info offset!" << (byteOffset<<3) << " " << info.m_offset << std::endl;

			info.m_subFunc(desInt, (const uint32_t*)src);
			src += info.m_intEncoded;
			desInt += info.m_wordSkipped;
			byteOffset = info.m_newOffset >> 3;
			break;
		}
	}

	if (frameHeaderArr + numFrames != des)
		std::cout << "wrong frame num!" << std::endl;

	if (byteOffset > 0)
		desInt += 4;

	return ((char*)desInt) - des;
}

}
}

#endif

#endif /* SIMD_KAFOR_SORTED_HPP_ */

