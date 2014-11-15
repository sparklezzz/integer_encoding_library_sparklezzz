/*
 * SIMD_Rice.cpp
 */

#include "SIMD_Rice.hpp"
using namespace paradise::index;

int SIMD_Rice::encodeUint32(char* des, const uint32_t* src, uint32_t encodeNum) {
	return encode<uint32_t> (des, src, encodeNum);
}
int SIMD_Rice::decodeUint32(uint32_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint32_t> (des, src, decodeNum);
}

int SIMD_Rice::encodeUint16(char* des, const uint16_t* src, uint32_t encodeNum) {
	return encode<uint16_t> (des, src, encodeNum);
}
int SIMD_Rice::decodeUint16(uint16_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint16_t> (des, src, decodeNum);
}

int SIMD_Rice::encodeUint8(char* des, const uint8_t* src, uint32_t encodeNum) {
	return encode<uint8_t> (des, src, encodeNum);
}
int SIMD_Rice::decodeUint8(uint8_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint8_t> (des, src, decodeNum);
}

void SIMD_Rice::pack(uint32_t *des, const uint32_t *src, uint32_t bitNum,
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
		if (!(totalBits & 31))	// align
			des[wordNum] = 0;
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


Compressor* SIMD_Rice::clone() {
	Compressor* pNewComp = new SIMD_Rice(*this);
	return pNewComp;
}
