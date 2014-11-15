/**
 * filename:AFOR.hpp
 * @brief:Adapted frame of work coding algorithm, implemented from paper:
 *        "ADAPTIVE FRAME OF REFERENCE FOR COMPRESSING INVERTED LISTS"
 * @data:2013-11-15
 * @author:zxd
 */

#ifndef AFOR_HPP_
#define AFOR_HPP_
#include <stdint.h>
#include <iostream>
#include <string.h>
#include "Compressor.hpp"
#include "VarByte.hpp"
#include "AFOR_pack.hpp"
#include "AFOR_unpack.hpp"

namespace paradise {
namespace index {

class AFOR: public Compressor {
public:

	struct AFORConfig {
		uint32_t numFrames;
		uint32_t totalByte;
		struct AFORFrame {
			uint32_t bitWidth;
			uint32_t frameLength;
			uint32_t frameLengthId;
		};
		AFORFrame frames[4];
	};


	AFOR();

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
	int encodeBlock(char* des, const T* src);

	template<typename T>
	void decodeFrame(T* des, const char* src, int &frameLength, int &frameByte);

	template<typename T>
	int chooseBestConfig(const T *src, AFORConfig configArr[]);

	template<typename T>
	int encodeConfig(char *des, const T *src, int configId, AFORConfig configArr[]);

	template<typename T>
	int encodeWindUp(char *des, const T *src, uint32_t encodeNum);

protected:
	static const uint32_t m_windowSize = 32;
};

template<typename T>
int AFOR::encode(char* des, const T* src, uint32_t encodeNum) {

	AFOR::AFORConfig configArr[6];
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

	uint32_t compLen = 0;
	uint32_t encoded = 0;
	while (encoded < encodeNum) {
		if (encoded + m_windowSize <= encodeNum) {
			int bestConf = chooseBestConfig(src + encoded, configArr);
			compLen += encodeConfig(des + compLen, src + encoded, bestConf, configArr);
			encoded += 32;
		} else {
			//wind up
			uint32_t windUpTotal = (encodeNum >> 3) << 3;
			compLen += (uint32_t)encodeWindUp(des + compLen, src + encoded, windUpTotal - encoded);
			compLen += (uint32_t)VarByte::encode(des + compLen, src + windUpTotal, encodeNum - windUpTotal);

			//compLen += (uint32_t)VarByte::encode(des + compLen, src + encoded, encodeNum - encoded);
			encoded = encodeNum;
		}
	}

	return (int)compLen;
}

template<typename T>
int AFOR::decode(T* des, const char* src, uint32_t decodeNum) {
	uint32_t byteDecompressed = 0;
	uint32_t decoded = 0;
	while (decoded < decodeNum) {
		/*if (decoded + m_windowSize <= decodeNum) {
			uint32_t rightWindow = decoded + 32;
			int frameByte, frameLength;
			while (decoded < rightWindow) {
				decodeFrame(des + decoded, src + byteDecompressed, frameLength, frameByte);
				byteDecompressed += frameByte;
				decoded += frameLength;
			}*/
		if (decoded + 8 <= decodeNum) {
			int frameByte, frameLength;
			decodeFrame(des + decoded, src + byteDecompressed, frameLength, frameByte);
			byteDecompressed += frameByte;
			decoded += frameLength;
		} else {
			byteDecompressed += (uint32_t)VarByte::decode<T>(des + decoded, src + byteDecompressed, decodeNum - decoded);
			decoded = decodeNum;
		}
	}
	return (int)byteDecompressed;
}

template<typename T>
void AFOR::decodeFrame(T* des, const char* src, int &frameLength, int &frameByte) {
	typedef void (*AFORunpackFun)(T *des, const uint32_t *srcInt);
	static AFORunpackFun unpackFuns[96] = {
			AFOR_unpack_8_1<T>, AFOR_unpack_8_2<T>, AFOR_unpack_8_3<T>, AFOR_unpack_8_4<T>,
			AFOR_unpack_8_5<T>, AFOR_unpack_8_6<T>, AFOR_unpack_8_7<T>, AFOR_unpack_8_8<T>,
			AFOR_unpack_8_9<T>, AFOR_unpack_8_10<T>, AFOR_unpack_8_11<T>, AFOR_unpack_8_12<T>,
			AFOR_unpack_8_13<T>, AFOR_unpack_8_14<T>, AFOR_unpack_8_15<T>, AFOR_unpack_8_16<T>,
			AFOR_unpack_8_17<T>, AFOR_unpack_8_18<T>, AFOR_unpack_8_19<T>, AFOR_unpack_8_20<T>,
			AFOR_unpack_8_21<T>, AFOR_unpack_8_22<T>, AFOR_unpack_8_23<T>, AFOR_unpack_8_24<T>,
			AFOR_unpack_8_25<T>, AFOR_unpack_8_26<T>, AFOR_unpack_8_27<T>, AFOR_unpack_8_28<T>,
			AFOR_unpack_8_29<T>, AFOR_unpack_8_30<T>, AFOR_unpack_8_31<T>, AFOR_unpack_8_32<T>,
			AFOR_unpack_16_1<T>, AFOR_unpack_16_2<T>, AFOR_unpack_16_3<T>, AFOR_unpack_16_4<T>,
			AFOR_unpack_16_5<T>, AFOR_unpack_16_6<T>, AFOR_unpack_16_7<T>, AFOR_unpack_16_8<T>,
			AFOR_unpack_16_9<T>, AFOR_unpack_16_10<T>, AFOR_unpack_16_11<T>, AFOR_unpack_16_12<T>,
			AFOR_unpack_16_13<T>, AFOR_unpack_16_14<T>, AFOR_unpack_16_15<T>, AFOR_unpack_16_16<T>,
			AFOR_unpack_16_17<T>, AFOR_unpack_16_18<T>, AFOR_unpack_16_19<T>, AFOR_unpack_16_20<T>,
			AFOR_unpack_16_21<T>, AFOR_unpack_16_22<T>, AFOR_unpack_16_23<T>, AFOR_unpack_16_24<T>,
			AFOR_unpack_16_25<T>, AFOR_unpack_16_26<T>, AFOR_unpack_16_27<T>, AFOR_unpack_16_28<T>,
			AFOR_unpack_16_29<T>, AFOR_unpack_16_30<T>, AFOR_unpack_16_31<T>, AFOR_unpack_16_32<T>,
			AFOR_unpack_32_1<T>, AFOR_unpack_32_2<T>, AFOR_unpack_32_3<T>, AFOR_unpack_32_4<T>,
			AFOR_unpack_32_5<T>, AFOR_unpack_32_6<T>, AFOR_unpack_32_7<T>, AFOR_unpack_32_8<T>,
			AFOR_unpack_32_9<T>, AFOR_unpack_32_10<T>, AFOR_unpack_32_11<T>, AFOR_unpack_32_12<T>,
			AFOR_unpack_32_13<T>, AFOR_unpack_32_14<T>, AFOR_unpack_32_15<T>, AFOR_unpack_32_16<T>,
			AFOR_unpack_32_17<T>, AFOR_unpack_32_18<T>, AFOR_unpack_32_19<T>, AFOR_unpack_32_20<T>,
			AFOR_unpack_32_21<T>, AFOR_unpack_32_22<T>, AFOR_unpack_32_23<T>, AFOR_unpack_32_24<T>,
			AFOR_unpack_32_25<T>, AFOR_unpack_32_26<T>, AFOR_unpack_32_27<T>, AFOR_unpack_32_28<T>,
			AFOR_unpack_32_29<T>, AFOR_unpack_32_30<T>, AFOR_unpack_32_31<T>, AFOR_unpack_32_32<T>,
			 };

	static uint32_t FrameByteArr[96] = {
			1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32,
			2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64,
			4, 8, 12, 16, 20, 24, 28, 32, 36, 40, 44, 48, 52, 56, 60, 64, 68, 72, 76, 80, 84, 88, 92, 96, 100, 104, 108, 112, 116, 120, 124, 128,
	};

	static uint32_t FrameLenArr[3] = {8, 16, 32};

	/*
	 * step1: read 1 byte frame header: lower 5 bits for bitwidth, mid 2 bits from frame length
	 */
	uint8_t frameHeader = *(uint8_t*)src;
	src ++;

	/*
	 * step2: given bitwidth and frame length, decode a frame of integers
	 */
	(unpackFuns[frameHeader])(des, (const uint32_t*)src);

	frameByte = 1 + FrameByteArr[frameHeader];	// do not forget the header byte!
	frameLength = FrameLenArr[frameHeader >> 5];
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
int AFOR::chooseBestConfig(const T *src, AFOR::AFORConfig configArr[]) {
#define MAX_OF_TWO(x, y) ((x) > (y) ? (x) : (y))
/*
#define GET_BETTER_SIZE(curConf, curSize, bestConf, bestSize) {	\
	if ((curSize) < (bestSize)) {	\
		(bestSize) = (curSize);		\
		(bestConf) = (curConf);		\
	}	\
}
*/
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
			curSize += configArr[i].frames[j].bitWidth * configArr[i].frames[j].frameLength;
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
int AFOR::encodeConfig(char *des, const T *src, int configId, AFOR::AFORConfig configArr[]) {

#define MAX_OF_TWO(x, y) ((x) > (y) ? (x) : (y))

	typedef void (*AFORpackFun)(uint32_t *des, const T *srcInt);
		static AFORpackFun packFuns[96] = {
				AFOR_pack_8_1<T>, AFOR_pack_8_2<T>, AFOR_pack_8_3<T>, AFOR_pack_8_4<T>,
				AFOR_pack_8_5<T>, AFOR_pack_8_6<T>, AFOR_pack_8_7<T>, AFOR_pack_8_8<T>,
				AFOR_pack_8_9<T>, AFOR_pack_8_10<T>, AFOR_pack_8_11<T>, AFOR_pack_8_12<T>,
				AFOR_pack_8_13<T>, AFOR_pack_8_14<T>, AFOR_pack_8_15<T>, AFOR_pack_8_16<T>,
				AFOR_pack_8_17<T>, AFOR_pack_8_18<T>, AFOR_pack_8_19<T>, AFOR_pack_8_20<T>,
				AFOR_pack_8_21<T>, AFOR_pack_8_22<T>, AFOR_pack_8_23<T>, AFOR_pack_8_24<T>,
				AFOR_pack_8_25<T>, AFOR_pack_8_26<T>, AFOR_pack_8_27<T>, AFOR_pack_8_28<T>,
				AFOR_pack_8_29<T>, AFOR_pack_8_30<T>, AFOR_pack_8_31<T>, AFOR_pack_8_32<T>,
				AFOR_pack_16_1<T>, AFOR_pack_16_2<T>, AFOR_pack_16_3<T>, AFOR_pack_16_4<T>,
				AFOR_pack_16_5<T>, AFOR_pack_16_6<T>, AFOR_pack_16_7<T>, AFOR_pack_16_8<T>,
				AFOR_pack_16_9<T>, AFOR_pack_16_10<T>, AFOR_pack_16_11<T>, AFOR_pack_16_12<T>,
				AFOR_pack_16_13<T>, AFOR_pack_16_14<T>, AFOR_pack_16_15<T>, AFOR_pack_16_16<T>,
				AFOR_pack_16_17<T>, AFOR_pack_16_18<T>, AFOR_pack_16_19<T>, AFOR_pack_16_20<T>,
				AFOR_pack_16_21<T>, AFOR_pack_16_22<T>, AFOR_pack_16_23<T>, AFOR_pack_16_24<T>,
				AFOR_pack_16_25<T>, AFOR_pack_16_26<T>, AFOR_pack_16_27<T>, AFOR_pack_16_28<T>,
				AFOR_pack_16_29<T>, AFOR_pack_16_30<T>, AFOR_pack_16_31<T>, AFOR_pack_16_32<T>,
				AFOR_pack_32_1<T>, AFOR_pack_32_2<T>, AFOR_pack_32_3<T>, AFOR_pack_32_4<T>,
				AFOR_pack_32_5<T>, AFOR_pack_32_6<T>, AFOR_pack_32_7<T>, AFOR_pack_32_8<T>,
				AFOR_pack_32_9<T>, AFOR_pack_32_10<T>, AFOR_pack_32_11<T>, AFOR_pack_32_12<T>,
				AFOR_pack_32_13<T>, AFOR_pack_32_14<T>, AFOR_pack_32_15<T>, AFOR_pack_32_16<T>,
				AFOR_pack_32_17<T>, AFOR_pack_32_18<T>, AFOR_pack_32_19<T>, AFOR_pack_32_20<T>,
				AFOR_pack_32_21<T>, AFOR_pack_32_22<T>, AFOR_pack_32_23<T>, AFOR_pack_32_24<T>,
				AFOR_pack_32_25<T>, AFOR_pack_32_26<T>, AFOR_pack_32_27<T>, AFOR_pack_32_28<T>,
				AFOR_pack_32_29<T>, AFOR_pack_32_30<T>, AFOR_pack_32_31<T>, AFOR_pack_32_32<T>,
				 };

	static uint32_t FrameByteArr[96] = {
				1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32,
				2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64,
				4, 8, 12, 16, 20, 24, 28, 32, 36, 40, 44, 48, 52, 56, 60, 64, 68, 72, 76, 80, 84, 88, 92, 96, 100, 104, 108, 112, 116, 120, 124, 128,
		};

	const AFOR::AFORConfig &configChoosen = configArr[configId];
	for (uint32_t i=0; i<configChoosen.numFrames; ++i) {
		uint8_t frameHeader = configChoosen.frames[i].frameLengthId + configChoosen.frames[i].bitWidth - 1;	// bitwidth -> 0 to 31
		*des++ = frameHeader;
		(packFuns[frameHeader])((uint32_t*)des, src);
		src += configChoosen.frames[i].frameLength;
		des += (configChoosen.frames[i].bitWidth * configChoosen.frames[i].frameLength) >> 3;
	}

	return configChoosen.totalByte;
}

/*
 * Encode last less than 32 integers. Assuming integer number is the multiple of 8.
 * Use frame length 8 only.
 */
template<typename T>
int AFOR::encodeWindUp(char *des, const T *src, uint32_t encodeNum) {
	typedef void (*AFORpackFun)(uint32_t *des, const T *srcInt);
		static AFORpackFun packFuns[96] = {
				AFOR_pack_8_1<T>, AFOR_pack_8_2<T>, AFOR_pack_8_3<T>, AFOR_pack_8_4<T>,
				AFOR_pack_8_5<T>, AFOR_pack_8_6<T>, AFOR_pack_8_7<T>, AFOR_pack_8_8<T>,
				AFOR_pack_8_9<T>, AFOR_pack_8_10<T>, AFOR_pack_8_11<T>, AFOR_pack_8_12<T>,
				AFOR_pack_8_13<T>, AFOR_pack_8_14<T>, AFOR_pack_8_15<T>, AFOR_pack_8_16<T>,
				AFOR_pack_8_17<T>, AFOR_pack_8_18<T>, AFOR_pack_8_19<T>, AFOR_pack_8_20<T>,
				AFOR_pack_8_21<T>, AFOR_pack_8_22<T>, AFOR_pack_8_23<T>, AFOR_pack_8_24<T>,
				AFOR_pack_8_25<T>, AFOR_pack_8_26<T>, AFOR_pack_8_27<T>, AFOR_pack_8_28<T>,
				AFOR_pack_8_29<T>, AFOR_pack_8_30<T>, AFOR_pack_8_31<T>, AFOR_pack_8_32<T>,
				AFOR_pack_16_1<T>, AFOR_pack_16_2<T>, AFOR_pack_16_3<T>, AFOR_pack_16_4<T>,
				AFOR_pack_16_5<T>, AFOR_pack_16_6<T>, AFOR_pack_16_7<T>, AFOR_pack_16_8<T>,
				AFOR_pack_16_9<T>, AFOR_pack_16_10<T>, AFOR_pack_16_11<T>, AFOR_pack_16_12<T>,
				AFOR_pack_16_13<T>, AFOR_pack_16_14<T>, AFOR_pack_16_15<T>, AFOR_pack_16_16<T>,
				AFOR_pack_16_17<T>, AFOR_pack_16_18<T>, AFOR_pack_16_19<T>, AFOR_pack_16_20<T>,
				AFOR_pack_16_21<T>, AFOR_pack_16_22<T>, AFOR_pack_16_23<T>, AFOR_pack_16_24<T>,
				AFOR_pack_16_25<T>, AFOR_pack_16_26<T>, AFOR_pack_16_27<T>, AFOR_pack_16_28<T>,
				AFOR_pack_16_29<T>, AFOR_pack_16_30<T>, AFOR_pack_16_31<T>, AFOR_pack_16_32<T>,
				AFOR_pack_32_1<T>, AFOR_pack_32_2<T>, AFOR_pack_32_3<T>, AFOR_pack_32_4<T>,
				AFOR_pack_32_5<T>, AFOR_pack_32_6<T>, AFOR_pack_32_7<T>, AFOR_pack_32_8<T>,
				AFOR_pack_32_9<T>, AFOR_pack_32_10<T>, AFOR_pack_32_11<T>, AFOR_pack_32_12<T>,
				AFOR_pack_32_13<T>, AFOR_pack_32_14<T>, AFOR_pack_32_15<T>, AFOR_pack_32_16<T>,
				AFOR_pack_32_17<T>, AFOR_pack_32_18<T>, AFOR_pack_32_19<T>, AFOR_pack_32_20<T>,
				AFOR_pack_32_21<T>, AFOR_pack_32_22<T>, AFOR_pack_32_23<T>, AFOR_pack_32_24<T>,
				AFOR_pack_32_25<T>, AFOR_pack_32_26<T>, AFOR_pack_32_27<T>, AFOR_pack_32_28<T>,
				AFOR_pack_32_29<T>, AFOR_pack_32_30<T>, AFOR_pack_32_31<T>, AFOR_pack_32_32<T>,
				 };

	static uint32_t FrameByteArr[96] = {
				1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32,
				2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64,
				4, 8, 12, 16, 20, 24, 28, 32, 36, 40, 44, 48, 52, 56, 60, 64, 68, 72, 76, 80, 84, 88, 92, 96, 100, 104, 108, 112, 116, 120, 124, 128,
		};

	char *desBeg = des;
	for (int i=0; i<encodeNum; i+=8) {
		// choose max of each 8 integers
		T tmp = src[0];
		for (uint32_t j=1; j<8; ++j) {
			tmp |= src[j];
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

		uint8_t frameHeader = ebl - 1;
		*des++ = frameHeader;
		(packFuns[frameHeader])((uint32_t*)des, src);
		src += 8;
		des += ebl;
	}
	return des - desBeg;
}



}
}

#endif /* AFOR_HPP_ */

/*
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

string func(int frameLength) {
	ostringstream oss;
	for (int bitwidth=1; bitwidth<=32; bitwidth++) {
		oss << ((bitwidth * frameLength) >> 3) << ", ";
	}
	return oss.str();
}

int main() {
	cout << func(8) << endl;
	cout << func(16) << endl;
	cout << func(32) << endl;
	return 0;
}
 *
 *
 */

