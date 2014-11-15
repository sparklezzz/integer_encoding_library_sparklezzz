/**
 * filename:SIMD_PFD_SVL.cpp
 * @brief:
 * @data:2009-12-27
 * @author:shandd
 */

#ifdef USE_SSE_INSTRUCTION

#include "SIMD_PFD_SVL.hpp"
using namespace paradise::index;

//SIMD_PFD_SVL::packSEFun packSEFuns[9] = { pack_svl0<uint32_t> , pack_svl1<uint32_t> , pack_svl2<uint32_t> ,
//		pack_svl3<uint32_t> , pack_svl4<uint32_t> , pack_svl5<uint32_t> , pack_svl6<uint32_t> , pack_svl7<uint32_t> ,
//		pack_svl8<uint32_t>  };

SIMD_PFD_SVL::SIMD_PFD_SVL(float expRatio) {
	m_expRatio = expRatio;
	for (int i = 0; i < 31; i++) {
		m_arrBits[i] = i;
	}
	m_arrBits[31] = 32;
}
int SIMD_PFD_SVL::encodeUint32(char* des, const uint32_t* src, uint32_t encodeNum) {
	return encode<uint32_t> (des, src, encodeNum);
}
int SIMD_PFD_SVL::decodeUint32(uint32_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint32_t> (des, src, decodeNum);
}
int SIMD_PFD_SVL::encodeUint16(char* des, const uint16_t* src, uint32_t encodeNum) {
	return encode<uint16_t> (des, src, encodeNum);
}
int SIMD_PFD_SVL::decodeUint16(uint16_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint16_t> (des, src, decodeNum);
}
int SIMD_PFD_SVL::encodeUint8(char* des, const uint8_t* src, uint32_t encodeNum) {
	return encode<uint8_t> (des, src, encodeNum);
}
int SIMD_PFD_SVL::decodeUint8(uint8_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint8_t> (des, src, decodeNum);
}

void SIMD_PFD_SVL::setBlockSize(uint32_t size) {
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

void SIMD_PFD_SVL::pack(uint32_t *des, const uint32_t *src, uint32_t bitNum,
		uint32_t num) {
	typedef void (*simd_packSVLFun)(uint32_t *des, const uint32_t *srcInt, int blockSize);
	static simd_packSVLFun simd_packSVLFuns[17] = { simd_pack_svl0<uint32_t> , simd_pack_svl1<uint32_t> , simd_pack_svl2<uint32_t> ,
                simd_pack_svl3<uint32_t> , simd_pack_svl4<uint32_t> , simd_pack_svl5<uint32_t> , simd_pack_svl6<uint32_t> , simd_pack_svl7<uint32_t> ,
                simd_pack_svl8<uint32_t> , simd_pack_svl9<uint32_t> , simd_pack_svl10<uint32_t> ,
                simd_pack_svl11<uint32_t> , simd_pack_svl12<uint32_t> , simd_pack_svl13<uint32_t> , simd_pack_svl14<uint32_t> , simd_pack_svl15<uint32_t> ,
                simd_pack_svl16<uint32_t> };

	if (bitNum <= 16) {
		simd_packSVLFuns[bitNum](des, src, num);
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
Compressor* SIMD_PFD_SVL::clone() {
	Compressor* pNewComp = new SIMD_PFD_SVL(*this);
	return pNewComp;
}

//uint64_t SIMD_PFD_SVL::unpackCountArr[33] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
#endif
