/**
 * filename:SIMD_Group_PFD_3.cpp
 * @brief:
 * @data:2009-12-27
 * @author:shandd
 */

#ifdef USE_SSE_INSTRUCTION

#include "SIMD_Group_PFD_3.hpp"
using namespace paradise::index;
SIMD_Group_PFD_3::SIMD_Group_PFD_3(float expRatio) {
	m_expRatio = expRatio;
	for (int i = 0; i < 31; i++) {
		m_arrBits[i] = i;
	}
	m_arrBits[31] = 32;
	m_blockSize = 128;
	m_exp8Arr = NULL;
	m_exp16Arr = NULL;
	m_exp32Arr = NULL;
}
int SIMD_Group_PFD_3::encodeUint32(char* des, const uint32_t* src, uint32_t encodeNum) {
	return encode<uint32_t> (des, src, encodeNum);
}
int SIMD_Group_PFD_3::decodeUint32(uint32_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint32_t> (des, src, decodeNum);
}
int SIMD_Group_PFD_3::encodeUint16(char* des, const uint16_t* src, uint32_t encodeNum) {
	return encode<uint16_t> (des, src, encodeNum);
}
int SIMD_Group_PFD_3::decodeUint16(uint16_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint16_t> (des, src, decodeNum);
}
int SIMD_Group_PFD_3::encodeUint8(char* des, const uint8_t* src, uint32_t encodeNum) {
	return encode<uint8_t> (des, src, encodeNum);
}
int SIMD_Group_PFD_3::decodeUint8(uint8_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint8_t> (des, src, decodeNum);
}

void SIMD_Group_PFD_3::setBlockSize(uint32_t size) {
	/*for pfordelta we use static block size*/
	size = size <= MaxBlockSize ? size : MaxBlockSize;
	if (size < 64) {
		m_blockSize = 32;
	} else if (size < 128) {
		m_blockSize = 64;
	} else if (size < 256) {
		m_blockSize = 128;
	} else if (size < 512) {
		m_blockSize = 256;
	} else if (size < 1024) {
                m_blockSize = 512;
	} else if (size < 2048) {
                m_blockSize = 1024;
	} else if (size < 4096) {
                m_blockSize = 2048;
	} else if (size < 8192) {
                m_blockSize = 4096;
	} else {
		m_blockSize = 8192;
	}
}

void SIMD_Group_PFD_3::pack(uint32_t *des, const uint32_t *src, uint32_t bitNum,
		uint32_t num) {
	typedef void (*simd_packVLFun)(uint32_t *des, const uint32_t *srcInt, int blockSize);
	static simd_packVLFun simd_packVLFuns[9] = { simd_pack_vl0<uint32_t> , simd_pack_vl1<uint32_t> , simd_pack_vl2<uint32_t> ,
                simd_pack_vl3<uint32_t> , simd_pack_vl4<uint32_t> , simd_pack_vl5<uint32_t> , simd_pack_vl6<uint32_t> , simd_pack_vl7<uint32_t> ,
                simd_pack_vl8<uint32_t>  };

	if (bitNum <= 8) {
		simd_packVLFuns[bitNum](des, src, num);
		return;
	}

	int wordNum, leftBitInWord;
	for (int totalBits = 0, i = 0; i < num; i++, totalBits += bitNum) {
		wordNum = totalBits >> 5;
		leftBitInWord = 32 - bitNum - (totalBits & 31);
		uint32_t packVal = (src[i] & mask_map[bitNum]);
		if (leftBitInWord >= 0)
			des[wordNum] |= (packVal << leftBitInWord);
		else {
			leftBitInWord = -leftBitInWord;
			des[wordNum] |= (packVal >> leftBitInWord);
			des[wordNum + 1] = (packVal << (32 - leftBitInWord));
		}
	}
}
Compressor* SIMD_Group_PFD_3::clone() {
	Compressor* pNewComp = new SIMD_Group_PFD_3(*this);
	return pNewComp;
}

//uint64_t SIMD_Group_PFD_3::unpackCountArr[33] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

#endif
