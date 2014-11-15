/*
 * SIMD_Rice.hpp
 */

#ifndef SIMD_Rice_HPP_
#define SIMD_Rice_HPP_
#include <stdint.h>
#include <cmath>
#include <assert.h>
#include "Compressor.hpp"
#include "encoding_internals.hpp"
#include "BitWriter.hpp"
#include "BitReader.hpp"
#include "simd_pack_vl.hpp"
#include "simd_unpack_vl.hpp"
#include "Rice.hpp"
#include "Unary8BitDecTable.hpp"

namespace paradise {
namespace index {

#define TESTBIT(buffer, bitp) ((((buffer)[(bitp)>>5])>>((bitp)&31))&1)

class SIMD_Rice: public Compressor {
public:
	SIMD_Rice() {
		if (m_blockSize < 128)
			m_blockSize = 128;
	}
	virtual ~SIMD_Rice() {
	}

public:
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
		return "simd_rice";
	}
	virtual Compressor* clone();
private:
	template<typename T>
	int encode(char* des, const T* src, uint32_t length);

	template<typename T>
	int decode(T* des, const char* src, int length);

	template<typename T>
	int encodeBlock(char* des, const T* src, int size);

	template<typename T>
	int decodeBlock(T* des, const char* src, int size);

	static void pack(uint32_t *des, const uint32_t *src, uint32_t bitNum,
			uint32_t num);

	template<typename T>
	int encodeRest(char* des, const T* src, int size);

	template<typename T>
	int decodeRest(T* des, const char* src, int size);


	template<typename T>
	void rice_encode_seq(uint32_t *des, uint32_t &totalBits, T val,
			uint32_t useBits);

	template<typename T>
	void rice_decode_seq(T& val, const uint32_t *src, uint32_t &totalBits,
			uint32_t bits);

	template<typename T>
	void
	writeBits(uint32_t *des, uint32_t &totalBits, T val, uint32_t bits);

	template<typename T>
	void readBits(T& val, const uint32_t *src, uint32_t &totalBits,
			uint32_t bits);

};

template<typename T>
int SIMD_Rice::encode(char* des, const T* src, uint32_t encodeNum) {
	int size = 0;
	for (int i = 0; i < encodeNum; i += m_blockSize) {
		if (i + m_blockSize < encodeNum) {
			int compSize = encodeBlock(des, src, m_blockSize);
			src += m_blockSize;
			des += compSize;
			size += compSize;
		} else {
			int compSize = encodeRest(des, src, encodeNum - i);
			size += compSize;
		}
	}
	return size;
}

template<typename T>
int SIMD_Rice::decode(T* des, const char* src, int decodeNum) {
	int size = 0;
	for (int i = 0; i < decodeNum; i += m_blockSize) {
		if (i + m_blockSize < decodeNum) {
			int deCompSize = decodeBlock(des, src, m_blockSize);
			src += deCompSize;
			des += m_blockSize;
			size += deCompSize;
		} else {
			int deCompSize = decodeRest(des, src, decodeNum - i);
			size += deCompSize;
		}
	}
	return size;
}
template<typename T>
int SIMD_Rice::encodeBlock(char* des, const T* src, int size) {
	uint64_t totalVal = 0;
	//计算均值
	for (int i = 0; i < size; i++) {
		totalVal += src[i];
	}
	double avg = totalVal / (double) size;
	//avg = avg * 0.69;
	int bit = log2(avg);
	if (bit < 0) {
		bit = 0;
	}
	assert(bit>=0);
	char *desBeg = des;
	*des = (uint8_t)bit;
	des++;
	uint32_t* desInt = (uint32_t*) des;

	// encode lower b bits
	//memset(desInt, 0, ((bit * size) >> 3));
	pack(desInt, (const uint32_t*)src, bit, size);
	uint32_t wordSkipped = (bit * size) >> 5;
	desInt += wordSkipped;

	// encode unary part
	BitWriter bw(desInt);
	for (int i = 0; i < size; i++) {
		uint32_t val = src[i] >> bit;
		
		// Now, BitWriter support unary len of more than 32
		//while (val > 32) {
		//	bw.putUnary(true, 32);
		//	val -= 32;
		//}

		bw.putUnary(true, val);
		bw.putBit(false);
	}

	return ((char*)desInt) + bw.getByteLenWritten() - desBeg;
}

template<typename T>
int SIMD_Rice::decodeBlock(T* des, const char* src, int size) {
	typedef void (*simd_unpackVLFun)(T *des, const uint32_t *srcInt, int blockSize);
	static simd_unpackVLFun simd_unpack_VLFuns[33] = { simd_unpack_vl0<T> , simd_unpack_vl1<T> , simd_unpack_vl2<T> ,
			simd_unpack_vl3<T> , simd_unpack_vl4<T> , simd_unpack_vl5<T> , simd_unpack_vl6<T> , simd_unpack_vl7<T> ,
			simd_unpack_vl8<T> , simd_unpack_vl9<T> , simd_unpack_vl10<T> , simd_unpack_vl11<T> , simd_unpack_vl12<T> ,
			simd_unpack_vl13<T> , simd_unpack_vl14<T> , simd_unpack_vl15<T> , simd_unpack_vl16<T> ,
			simd_unpack_vl17<T> , simd_unpack_vl18<T> , simd_unpack_vl19<T> , simd_unpack_vl20<T> ,
			simd_unpack_vl21<T> , simd_unpack_vl22<T> , simd_unpack_vl23<T> , simd_unpack_vl24<T> ,
			simd_unpack_vl25<T> , simd_unpack_vl26<T> , simd_unpack_vl27<T> , simd_unpack_vl28<T> ,
			simd_unpack_vl29<T> , simd_unpack_vl30<T> , simd_unpack_vl31<T> , simd_unpack_vl32<T> };

	const char *srcBeg = src;
	int bit = *src;
	src++;
	const uint32_t *srcInt = (const uint32_t *)src;

	int wordSkipped = (bit * size) >> 5;
	const uint32_t *unaryArea = srcInt + wordSkipped;

	// decode lower b bits
	(simd_unpack_VLFuns[bit])(des, srcInt, size);

	// decode unary part
	// Todo: optimize!
	BitReader br(unaryArea);
	uint32_t decoded = 0;
	/*
	while (decoded < size) {
		uint32_t val = 0;
		while (br.getBit()) {
			val ++;
		}
		des[decoded] += val << bit;
		decoded ++;
		return ((char*)unaryArea) + br.getByteLenRead() - srcBeg;
	}
	*/
	const uint8_t *unaryPos = (const uint8_t*)unaryArea;
	int rest = 0;
	while (decoded < size) {
		const Unary8BitDecInfo &info = Unary8BitDecInfoTable[*unaryPos];
		int num = info.num;
		if (num > 0) {
			for (int i=0; i<num && decoded < size; i++, decoded++) {
				int val = info.arr[i];
				if (i == 0)
					val += rest;
				des[decoded] += val << bit;
			}
			rest = info.rest;
		} else {
			rest += info.rest;
		}
		unaryPos++;
	}
	return (const char*)unaryArea +
			(DIV_ROUNDUP(unaryPos - (const uint8_t*)unaryArea, 4) * 4)
			- srcBeg;
}


template<typename T>
int SIMD_Rice::encodeRest(char* des, const T* src, int size) {
	uint64_t totalVal = 0;
	//计算均值
	for (int i = 0; i < size; i++) {
		totalVal += src[i];
	}
	double avg = totalVal / (double) size;
	//avg = avg * 0.69;
	int bit = log2(avg);
	if (bit < 0) {
		bit = 0;
	}
	assert(bit>=0);
	*des = (uint8_t) bit;
	des++;
	uint32_t* desInt = (uint32_t*) des;
	uint32_t totalBits = 0;
	for (int i = 0; i < size; i++) {
		rice_encode_seq(desInt, totalBits, src[i], bit);
	}
	int word;
	if ((totalBits & 0x1f) != 0) {
		word = (1 + (totalBits >> 5));
	} else {
		word = (totalBits >> 5);
	}
	return word * sizeof(uint32_t) + 1;
}

template<typename T>
int SIMD_Rice::decodeRest(T* des, const char* src, int size) {
	uint32_t totalBits = 0;
	uint32_t bits = (uint32_t) (*src);
	src++;
	const uint32_t* srcInt = (const uint32_t*) src;
	for (int i = 0; i < size; i++) {
		rice_decode_seq(des[i], srcInt, totalBits, bits);
	}
	int word;
	if (totalBits & 0x1f)
		word = (1 + (totalBits >> 5));
	else
		word = (totalBits >> 5);
	return word * sizeof(uint32_t) + 1;
}

template<typename T>
void SIMD_Rice::rice_encode_seq(uint32_t *des, uint32_t& totalBits, T val, uint32_t bits) {
	if (bits != 0) {
		writeBits(des, totalBits, val & mask_map[bits], bits); //写余数
	}
	for (T w = (val >> bits); w > 0; w--) { //写商
		writeBits(des, totalBits, 1, 1);
	}
	writeBits(des, totalBits, 0, 1);
}

template<typename T>
void SIMD_Rice::rice_decode_seq(T& val, const uint32_t *src, uint32_t &totalBits,
		uint32_t bits) {
	readBits(val, src, totalBits, bits);
	while (TESTBIT(src, totalBits)) {
		val += (1 << bits);
		totalBits++;
	}
	totalBits++;
}

template<typename T>
void SIMD_Rice::readBits(T& val, const uint32_t *src, uint32_t &totalBits,
		uint32_t bits) {
	uint32_t posInWord = totalBits & 31;
	uint32_t readBits = (32 - posInWord > bits) ? bits : (32 - posInWord);
	val = ((src[totalBits >> 5] >> posInWord) & mask_map[readBits]);
	totalBits += readBits;
	if (bits == readBits) {
		return;
	}
	val = val | ((src[totalBits >> 5] & mask_map[bits - readBits]) << readBits);
	totalBits += (bits - readBits);
}
template<typename T>
void SIMD_Rice::writeBits(uint32_t *des, uint32_t &totalBits, T val, uint32_t bits) {
	uint32_t posInWord = totalBits & 31;
	if (posInWord == 0) {
		des[totalBits >> 5] = 0;
	}
	uint32_t writeBits = (32 - posInWord > bits) ? bits : (32 - posInWord);
	des[totalBits >> 5] |= ((val & mask_map[writeBits]) << posInWord);
	totalBits += writeBits;

	if (bits - writeBits > 0) { //不能再一个word写下的部分
		des[totalBits >> 5] = (val >> writeBits) & mask_map[bits - writeBits]; // MASK is needed
		totalBits += (bits - writeBits);
	}
}

}
}
#endif
