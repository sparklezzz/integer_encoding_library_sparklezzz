/**
 * filename:PFD_SE.cpp
 * @brief:
 * @data:2009-12-27
 * @author:shandd
 */
#include "PFD_SE.hpp"
using namespace paradise::index;

//PFD_SE::packSEFun packSEFuns[9] = { pack_se0<uint32_t> , pack_se1<uint32_t> , pack_se2<uint32_t> ,
//		pack_se3<uint32_t> , pack_se4<uint32_t> , pack_se5<uint32_t> , pack_se6<uint32_t> , pack_se7<uint32_t> ,
//		pack_se8<uint32_t>  };

PFD_SE::PFD_SE(float expRatio) {
	m_expRatio = expRatio;
	for (int i = 0; i < 31; i++) {
		m_arrBits[i] = i;
	}
	m_arrBits[31] = 32;
}
int PFD_SE::encodeUint32(char* des, const uint32_t* src, uint32_t encodeNum) {
	return encode<uint32_t> (des, src, encodeNum);
}
int PFD_SE::decodeUint32(uint32_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint32_t> (des, src, decodeNum);
}
int PFD_SE::encodeUint16(char* des, const uint16_t* src, uint32_t encodeNum) {
	return encode<uint16_t> (des, src, encodeNum);
}
int PFD_SE::decodeUint16(uint16_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint16_t> (des, src, decodeNum);
}
int PFD_SE::encodeUint8(char* des, const uint8_t* src, uint32_t encodeNum) {
	return encode<uint8_t> (des, src, encodeNum);
}
int PFD_SE::decodeUint8(uint8_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint8_t> (des, src, decodeNum);
}

void PFD_SE::setBlockSize(uint32_t size) {
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

void PFD_SE::pack(uint32_t *des, const uint32_t *src, uint32_t bitNum,
		uint32_t num) {
	typedef void (*packSEFun)(uint32_t *des, const uint32_t *srcInt, int blockSize);
	static packSEFun packSEFuns[17] = { pack_se0<uint32_t> , pack_se1<uint32_t> , pack_se2<uint32_t> ,
				pack_se3<uint32_t> , pack_se4<uint32_t> , pack_se5<uint32_t> , pack_se6<uint32_t> , pack_se7<uint32_t> ,
				pack_se8<uint32_t>, pack_se9<uint32_t> , pack_se10<uint32_t> , pack_se11<uint32_t> ,
				pack_se12<uint32_t> , pack_se13<uint32_t> , pack_se14<uint32_t> , pack_se15<uint32_t> ,
				pack_se16<uint32_t>};

	if (bitNum <= 16) {
		packSEFuns[bitNum](des, src, num);
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
Compressor* PFD_SE::clone() {
	Compressor* pNewComp = new PFD_SE(*this);
	return pNewComp;
}

//uint64_t PFD_SE::unpackCountArr[33] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
