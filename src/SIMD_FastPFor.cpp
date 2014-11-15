/**
 * filename:SIMD_FastPFor.cpp
 * @brief:
 * @data:2009-12-27
 * @author:shandd
 */

#ifdef USE_SSE_INSTRUCTION

#include "SIMD_FastPFor.hpp"
using namespace paradise::index;
SIMD_FastPFor::SIMD_FastPFor():overheadofeachexcept(8), datatobepacked(33) {

	for (int i = 0; i < 31; i++) {
		m_arrBits[i] = i;
	}
	m_arrBits[31] = 32;

}
int SIMD_FastPFor::encodeUint32(char* des, const uint32_t* src, uint32_t encodeNum) {
	return encode<uint32_t> (des, src, encodeNum);
}
int SIMD_FastPFor::decodeUint32(uint32_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint32_t> (des, src, decodeNum);
}
int SIMD_FastPFor::encodeUint16(char* des, const uint16_t* src, uint32_t encodeNum) {
	return encode<uint16_t> (des, src, encodeNum);
}
int SIMD_FastPFor::decodeUint16(uint16_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint16_t> (des, src, decodeNum);
}
int SIMD_FastPFor::encodeUint8(char* des, const uint8_t* src, uint32_t encodeNum) {
	return encode<uint8_t> (des, src, encodeNum);
}
int SIMD_FastPFor::decodeUint8(uint8_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint8_t> (des, src, decodeNum);
}

void SIMD_FastPFor::resetBuffer() {
    for (size_t i = 0; i < datatobepacked.size(); ++i) {
        std::vector<uint32_t> ().swap(datatobepacked[i]);
    }
	std::vector<uint8_t> ().swap(bytescontainer);
}


void SIMD_FastPFor::setBlockSize(uint32_t size) {
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

void SIMD_FastPFor::pack_vl(uint32_t *des, const uint32_t *src, uint32_t bitNum,
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

void SIMD_FastPFor::pack_se(uint32_t *des, const uint32_t *src, uint32_t bitNum,
		uint32_t num) {
	typedef void (*simd_packSEFun)(uint32_t *des, const uint32_t *srcInt, int blockSize);
	static simd_packSEFun simd_packSEFuns[17] = { simd_pack_se0<uint32_t> , simd_pack_se1<uint32_t> , simd_pack_se2<uint32_t> ,
                simd_pack_se3<uint32_t> , simd_pack_se4<uint32_t> , simd_pack_se5<uint32_t> , simd_pack_se6<uint32_t> , simd_pack_se7<uint32_t> ,
                simd_pack_se8<uint32_t> , simd_pack_se9<uint32_t> , simd_pack_se10<uint32_t> ,
                simd_pack_se11<uint32_t> , simd_pack_se12<uint32_t> , simd_pack_se13<uint32_t> , simd_pack_se14<uint32_t> , simd_pack_se15<uint32_t> ,
                simd_pack_se16<uint32_t>  };

	if (bitNum <= 16) {
		simd_packSEFuns[bitNum](des, src, num);
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

Compressor* SIMD_FastPFor::clone() {
	Compressor* pNewComp = new SIMD_FastPFor(*this);
	return pNewComp;
}

//uint64_t SIMD_FastPFor::unpackCountArr[33] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

#endif
