/**
 * filename:KVSEncoding.hpp
 * @brief: for every four integers, use VSEncoding
 *         separate frameheader and frame data into two area
 * 			Adapted frame of work coding algorithm, implemented from paper:
 *        "ADAPTIVE FRAME OF REFERENCE FOR COMPRESSING INVERTED LISTS"
 * @data:2013-11-15
 * @author:zxd
 */

#ifndef KVSEncoding_HPP_
#define KVSEncoding_HPP_
#include <stdint.h>
#include <iostream>
#include <string.h>
#include "Compressor.hpp"
#include "VarByte.hpp"
#include "KVSEncodingDP.hpp"
#include "KVSEncoding_pack.hpp"
#include "KVSEncoding_unpack.hpp"
#include "encoding_internals.hpp"

namespace paradise {
namespace index {

class KVSEncoding: public Compressor {
public:

	KVSEncoding();

	~KVSEncoding();

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
		return "kvse";
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
	uint32_t encodeAllFrames(char *des, const T *src, const std::vector<uint32_t>& logs,
            const std::vector<uint32_t> &parts);

	const static uint32_t KVSE_LOGLEN;
	const static uint32_t KVSE_LOGLOG;

	const static uint32_t KVSE_LOGDESC;

	const static uint32_t KVSE_LENS_LEN;
	const static uint32_t KVSE_LOGS_LEN;
	const static uint32_t KVSE_LEN;

	const static uint32_t KVSE_LENS[8];
	//const static uint32_t KVSE_LENS[16];

	const static uint32_t KVSE_REMAPLOGS[33];

	const static uint32_t KVSE_CODELENS[65];

	const static uint32_t KVSE_CODELOGS[33];


	KVSEncodingDP *vdp_;

protected:

};

template<typename T>
int KVSEncoding::encode(char* des, const T* src, uint32_t encodeNum) {
	if (encodeNum < 4) {
		return VarByte::encode(des, src, encodeNum);
	}

	uint32_t compLen = 0;
	uint32_t encoded = 0;

	int left = encodeNum % 4;
	if (left > 0) {
		compLen = encodeBlock(des, src, encodeNum - left);
		compLen += VarByte::encode(des + compLen, src + encodeNum - left, left);
	} else {
		compLen = encodeBlock(des, src, encodeNum);
	}
	return (int)compLen;
}

template<typename T>
int KVSEncoding::decode(T* des, const char* src, uint32_t decodeNum) {
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
int KVSEncoding::encodeBlock(char* des, const T* src, uint32_t encodeNum) {

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

	/* Compute optimal partition */
	std::vector<uint32_t> logs;
	std::vector<uint32_t> parts;
	for (uint64_t i = 0; i < k; i++)
		logs.push_back(KVSE_REMAPLOGS[32 - MSB32(maxQuadIntArr[i])]);
	ASSERT(logs.size() == k);
	ASSERT(parts.size() == 0);
	vdp_->computePartition(logs, &parts, KVSE_LOGLEN + KVSE_LOGLOG);

	uint32_t totalNumFrameHeader = parts.size() - 1;
	*desInt = 4 + totalNumFrameHeader;	// record the begin position of data segment

	// step 3: encode all frames, including frame headers
	int compLen = encodeAllFrames(des, src, logs, parts);
	des += compLen;

	delete [] maxQuadIntArr;

	return des - desBeg;
}

template<typename T>
int KVSEncoding::decodeBlock(T* des, const char* src, uint32_t decodeNum) {
	const uint32_t *srcInt = (const uint32_t*)src;

	uint32_t dataSegOffset = *srcInt;
	uint32_t numFrames = dataSegOffset - 4;
	const char *frameHeaderArr = src + 4;
	const char *dataSegPos = src + dataSegOffset;
	uint32_t dataSegByte = decodeAllFrames(des, dataSegPos, frameHeaderArr, numFrames);
	return dataSegPos + dataSegByte - src;
}

template<typename T>
uint32_t KVSEncoding::encodeAllFrames(char *des, const T *src, const std::vector<uint32_t>& logs,
            const std::vector<uint32_t> &parts){
	ASSERT(parts.size() > 1);
	uint32_t numFrames = parts.size() - 1;
	uint32_t byteOffset = 0;	// 0 to 3

	char *frameHeaderPos = des;
	char *dataBegPos = frameHeaderPos + numFrames;
	uint32_t *dataIntPos = (uint32_t*)dataBegPos;

	memset(dataIntPos, 0, 4 * sizeof(uint32_t));

	for (uint64_t i = 0; i < numFrames; i++) {
		/* Compute max B in the block */
		uint32_t maxB = 0;

		for (uint64_t j = parts[i]; j < parts[i + 1]; j++) {
			if (maxB < logs[j])
			maxB = logs[j];
		}

		/* Compute the code for the block length */
		/*uint32_t idx = 0;
		for (; idx < ARRAYSIZE(KVSE_LENS); idx++) {
			if (parts[i + 1] - parts[i] == KVSE_LENS[idx])
			break;
		}*/
		int frameLenIdx = KVSE_CODELENS[parts[i + 1] - parts[i]];
		if (frameLenIdx == -1) {
			std::cout << "wrong frame length: " << (parts[i + 1] - parts[i]) << std::endl;
			return -1;
		}

		uint8_t frameHeader = (frameLenIdx << KVSE_LOGLOG) + KVSE_CODELOGS[maxB];
		*frameHeaderPos++ = frameHeader;
		uint32_t KVSEncodingPackInfoIdx = (((uint32_t)frameHeader) << 2) + byteOffset;

		if (KVSEncodingPackInfoIdx >= 1024)
			std::cout << "wrong KVSEPackInfoIdx!" << KVSEncodingPackInfoIdx << std::endl;

		const KVSEPackInfo &info = KVSEPackInfoArr[KVSEncodingPackInfoIdx];
		if (byteOffset << 3 != info.m_offset)
			std::cout << "wrong info offset!" << (byteOffset<<3) << " " << info.m_offset << std::endl;

		info.m_subFunc(dataIntPos, (const uint32_t *)src);
		src += info.m_intEncoded;
		dataIntPos += info.m_wordSkipped;
		byteOffset = info.m_newOffset >> 3;
	}

	if (frameHeaderPos != dataBegPos)
		std::cout << "wrong frame num!" << std::endl;

	if (byteOffset > 0)
		dataIntPos += 4;

	return ((char*)dataIntPos) - des;
}


template<typename T>
uint32_t KVSEncoding::decodeAllFrames(T* des, const char* src, const char* frameHeaderArr, uint32_t numFrames) {

	const uint32_t *srcInt = (const uint32_t *)src;
	uint32_t byteOffset = 0;	// 0 to 3
	for (uint32_t i=0; i<numFrames; ++i) {
		uint8_t frameHeader = (uint8_t)frameHeaderArr[i];
		uint32_t KVSEncodingUnpackInfoIdx = (((uint32_t)frameHeader) << 2) + byteOffset;
		if (KVSEncodingUnpackInfoIdx >= 1024)
			std::cout << "wrong KVSEUnpackInfoIdx!" << KVSEncodingUnpackInfoIdx << std::endl;

		const KVSEUnpackInfo &info = KVSEUnpackInfoArr[KVSEncodingUnpackInfoIdx];
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

}
}

#endif /* KVSEncoding_HPP_ */

