/*
 * Rice.hpp
 */

#ifndef Rice_HPP_
#define Rice_HPP_
#include <stdint.h>
#include <cmath>
#include <assert.h>
#include "Compressor.hpp"

namespace paradise {
namespace index {

#define TESTBIT(buffer, bitp) ((((buffer)[(bitp)>>5])>>((bitp)&31))&1)

class Rice: public Compressor {
public:
	Rice() {
	}
	virtual ~Rice() {
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
		return "rice";
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

	template<typename T>
	void rice_encode(uint32_t *des, uint32_t &totalBits, T val,
			uint32_t useBits);

	template<typename T>
	void rice_decode(T& val, const uint32_t *src, uint32_t &totalBits,
			uint32_t bits);

	template<typename T>
	void
	writeBits(uint32_t *des, uint32_t &totalBits, T val, uint32_t bits);

	template<typename T>
	void readBits(T& val, const uint32_t *src, uint32_t &totalBits,
			uint32_t bits);

};

template<typename T>
int Rice::encode(char* des, const T* src, uint32_t encodeNum) {
	int size = 0;
	for (int i = 0; i < encodeNum; i += m_blockSize) {
		if (i + m_blockSize < encodeNum) {
			int compSize = encodeBlock(des, src, m_blockSize);
			src += m_blockSize;
			des += compSize;
			size += compSize;
		} else {
			int compSize = encodeBlock(des, src, encodeNum - i);
			size += compSize;
		}
	}
	return size;
}

template<typename T>
int Rice::decode(T* des, const char* src, int decodeNum) {
	int size = 0;
	for (int i = 0; i < decodeNum; i += m_blockSize) {
		if (i + m_blockSize < decodeNum) {
			int deCompSize = decodeBlock(des, src, m_blockSize);
			src += deCompSize;
			des += m_blockSize;
			size += deCompSize;
		} else {
			int deCompSize = decodeBlock(des, src, decodeNum - i);
			size += deCompSize;
		}
	}
	return size;
}
template<typename T>
int Rice::encodeBlock(char* des, const T* src, int size) {
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
		rice_encode(desInt, totalBits, src[i], bit);
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
int Rice::decodeBlock(T* des, const char* src, int size) {
	uint32_t totalBits = 0;
	uint32_t bits = (uint32_t) (*src);
	src++;
	const uint32_t* srcInt = (const uint32_t*) src;
	for (int i = 0; i < size; i++) {
		rice_decode(des[i], srcInt, totalBits, bits);
	}
	int word;
	if (totalBits & 0x1f)
		word = (1 + (totalBits >> 5));
	else
		word = (totalBits >> 5);
	return word * sizeof(uint32_t) + 1;
}

template<typename T>
void Rice::rice_encode(uint32_t *des, uint32_t& totalBits, T val, uint32_t bits) {
	if (bits != 0) {
		writeBits(des, totalBits, val & mask_map[bits], bits); //写余数
	}
	for (T w = (val >> bits); w > 0; w--) { //写商
		writeBits(des, totalBits, 1, 1);
	}
	writeBits(des, totalBits, 0, 1);
}
template<typename T>
void Rice::rice_decode(T& val, const uint32_t *src, uint32_t &totalBits,
		uint32_t bits) {
	readBits(val, src, totalBits, bits);
	while (TESTBIT(src, totalBits)) {
		val += (1 << bits);
		totalBits++;
	}
	totalBits++;
}

template<typename T>
void Rice::readBits(T& val, const uint32_t *src, uint32_t &totalBits,
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
void Rice::writeBits(uint32_t *des, uint32_t &totalBits, T val, uint32_t bits) {
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
