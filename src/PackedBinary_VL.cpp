/**
 * filename:PackedBinary_VL.cpp
 * @brief:
 * @data:2009-12-27
 * @author:shandd
 */
#include "PackedBinary_VL.hpp"
using namespace paradise::index;
PackedBinary_VL::PackedBinary_VL(float expRatio) {
	for (int i = 0; i < 31; i++) {
		m_arrBits[i] = i;
	}
	m_arrBits[31] = 32;
}
int PackedBinary_VL::encodeUint32(char* des, const uint32_t* src, uint32_t encodeNum) {
	return encode<uint32_t> (des, src, encodeNum);
}
int PackedBinary_VL::decodeUint32(uint32_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint32_t> (des, src, decodeNum);
}
int PackedBinary_VL::encodeUint16(char* des, const uint16_t* src, uint32_t encodeNum) {
	return encode<uint16_t> (des, src, encodeNum);
}
int PackedBinary_VL::decodeUint16(uint16_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint16_t> (des, src, decodeNum);
}
int PackedBinary_VL::encodeUint8(char* des, const uint8_t* src, uint32_t encodeNum) {
	return encode<uint8_t> (des, src, encodeNum);
}
int PackedBinary_VL::decodeUint8(uint8_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint8_t> (des, src, decodeNum);
}

void PackedBinary_VL::setBlockSize(uint32_t size) {
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

void PackedBinary_VL::pack(uint32_t *des, const uint32_t *src, uint32_t bitNum,
		uint32_t num) {
	typedef void (*packVLFun)(uint32_t *des, const uint32_t *srcInt, int blockSize);
	static packVLFun packVLFuns[9] = { pack_vl0<uint32_t> , pack_vl1<uint32_t> , pack_vl2<uint32_t> ,
				pack_vl3<uint32_t> , pack_vl4<uint32_t> , pack_vl5<uint32_t> , pack_vl6<uint32_t> , pack_vl7<uint32_t> ,
				pack_vl8<uint32_t>  };

	if (bitNum <= 8) {
		packVLFuns[bitNum](des, src, num);
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
Compressor* PackedBinary_VL::clone() {
	Compressor* pNewComp = new PackedBinary_VL(*this);
	return pNewComp;
}

//uint64_t PackedBinary_VL::unpackCountArr[33] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
