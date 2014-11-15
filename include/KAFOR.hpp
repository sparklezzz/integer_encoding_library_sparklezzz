/**
 * filename:KAFOR.hpp
 * @brief: for every four integers, use AFOR
 *         separate frameheader and frame data into two area
 * 			Adapted frame of work coding algorithm, implemented from paper:
 *        "ADAPTIVE FRAME OF REFERENCE FOR COMPRESSING INVERTED LISTS"
 * @data:2013-11-15
 * @author:zxd
 */

#ifndef KAFOR_HPP_
#define KAFOR_HPP_
#include <stdint.h>
#include <iostream>
#include <string.h>
#include "Compressor.hpp"
#include "VarByte.hpp"
#include "KAFOR_pack.hpp"
#include "KAFOR_unpack.hpp"

namespace paradise {
namespace index {

class KAFOR: public Compressor {
public:

	struct KAFORConfig {
		uint32_t numFrames;
		uint32_t totalByte;
		struct KAFORFrame {
			uint32_t bitWidth;
			uint32_t frameLength;
			uint32_t frameLengthId;
		};
		KAFORFrame frames[4];
	};


	KAFOR();

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
		return "afor";
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
	uint32_t chooseAndSaveBestConfig(char *des, const T *maxQuadArr,
			uint32_t maxQuadNum, KAFORConfig tmpConfigArr[]);

	template<typename T>
	uint32_t chooseBestConfig(const T *src, KAFOR::KAFORConfig configArr[]);

	template<typename T>
	uint32_t encodeAllFrames(char *des, const T *src, const char* frameHeaderArr, uint32_t numFrames);

protected:
	static const uint32_t m_windowSize = 128;
};

template<typename T>
int KAFOR::encode(char* des, const T* src, uint32_t encodeNum) {
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
int KAFOR::decode(T* des, const char* src, uint32_t decodeNum) {
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
int KAFOR::encodeBlock(char* des, const T* src, uint32_t encodeNum) {

	KAFOR::KAFORConfig configArr[6];
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
	int k = 0;
	for (uint32_t i=0; i<encodeNum; i+=4) {
		uint32_t quadMaxInt = src[i];
		uint32_t tmpEnd = i + 4;
		for (uint32_t j=i+1; j<tmpEnd; j++) {
			quadMaxInt |= src[j];;
		}
		maxQuadIntArr[k++] = quadMaxInt;
	}

	// step 2: choose config and save all frame header
	char *desBeg = des;
	uint32_t *desInt = (uint32_t*)des;
	des += 4;	//leave first 4 byte to record the begin position of data segment
	uint32_t totalNumFrameHeader = chooseAndSaveBestConfig(des, maxQuadIntArr, k, configArr);
	const char *frameHeaderArr = des;
	des += totalNumFrameHeader;	// skip frame header area
	*desInt = 4 + totalNumFrameHeader;	// record the begin position of data segment

	// step 3: encode all frames
	int compLen = encodeAllFrames(des, src, frameHeaderArr, totalNumFrameHeader);
	des += compLen;

	delete []maxQuadIntArr;

	return des - desBeg;
}

template<typename T>
int KAFOR::decodeBlock(T* des, const char* src, uint32_t decodeNum) {
	const uint32_t *srcInt = (const uint32_t*)src;

	uint32_t dataSegOffset = *srcInt;
	uint32_t numFrames = dataSegOffset - 4;
	const char *frameHeaderArr = src + 4;
	const char *dataSegPos = src + dataSegOffset;
	uint32_t dataSegByte = decodeAllFrames(des, dataSegPos, frameHeaderArr, numFrames);
	return dataSegPos + dataSegByte - src;
}


template<typename T>
uint32_t KAFOR::chooseAndSaveBestConfig(char *des, const T *maxQuadArr, uint32_t maxQuadNum, KAFORConfig tmpConfigArr[]) {
	uint32_t totalNumFrameHeader = 0;
	for (int i=0; i<maxQuadNum; i+=32) {
		int bestConf = chooseBestConfig(maxQuadArr, tmpConfigArr);
		const KAFORConfig &configChoosen = tmpConfigArr[bestConf];
		totalNumFrameHeader += configChoosen.numFrames;
		// save frame header
		for (int j=0; j<configChoosen.numFrames; ++j) {
			uint8_t frameHeader = configChoosen.frames[j].frameLengthId + configChoosen.frames[j].bitWidth - 1;	// bitwidth -> 0 to 31
			*des++ = frameHeader;
		}
		maxQuadArr += 32;
	}
	return totalNumFrameHeader;
}


template<typename T>
uint32_t KAFOR::decodeAllFrames(T* des, const char* src, const char* frameHeaderArr, uint32_t numFrames) {

	const uint32_t *srcInt = (const uint32_t *)src;
	uint32_t byteOffset = 0;	// 0 to 3
	for (uint32_t i=0; i<numFrames; ++i) {
		uint8_t frameHeader = (uint8_t)frameHeaderArr[i];
		uint32_t KAFORUnpackInfoIdx = (((uint32_t)frameHeader) << 2) + byteOffset;
		if (KAFORUnpackInfoIdx >= 384)
			std::cout << "wrong KAFORUnpackInfoIdx!" << KAFORUnpackInfoIdx << std::endl;

		const KAFORUnpackInfo &info = KAFORUnpackInfoArr[KAFORUnpackInfoIdx];
		if (byteOffset << 3 != info.m_offset)
			std::cout << "wrong info offset!" << (byteOffset<<3) << " " << info.m_offset << std::endl;

		info.m_subFunc((uint32_t *)des, srcInt);
		srcInt += info.m_wordSkipped;
		des += info.m_intDecoded;
		byteOffset = info.m_newOffset >> 3;
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
uint32_t KAFOR::chooseBestConfig(const T *src, KAFOR::KAFORConfig configArr[]) {
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
uint32_t KAFOR::encodeAllFrames(char *des, const T *src, const char* frameHeaderArr, uint32_t numFrames) {
	uint32_t *desInt = (uint32_t*)des;
	uint32_t byteOffset = 0;	// 0 to 3
	for (uint32_t i=0; i<numFrames; ++i) {
		uint8_t frameHeader = (uint8_t)frameHeaderArr[i];
		uint32_t KAFORPackInfoIdx = (((uint32_t)frameHeader) << 2) + byteOffset;
		if (KAFORPackInfoIdx >= 384)
			std::cout << "wrong KAFORPackInfoIdx!" << KAFORPackInfoIdx << std::endl;

		const KAFORPackInfo &info = KAFORPackInfoArr[KAFORPackInfoIdx];
		if (byteOffset << 3 != info.m_offset)
			std::cout << "wrong info offset!" << (byteOffset<<3) << " " << info.m_offset << std::endl;

		info.m_subFunc(desInt, (const uint32_t *)src);
		src += info.m_intEncoded;
		desInt += info.m_wordSkipped;
		byteOffset = info.m_newOffset >> 3;

	}

	if (frameHeaderArr + numFrames != des)
		std::cout << "wrong frame num!" << std::endl;

	if (byteOffset > 0)
		desInt += 4;

	return ((char*)desInt) - des;
}

}
}

#endif /* KAFOR_HPP_ */

