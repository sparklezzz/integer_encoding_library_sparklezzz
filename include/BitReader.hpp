/*
 * BitReader.hpp
 *
 *  Created on: 2013-2-25
 *      Author: zxd
 */

#ifndef BITREADER_HPP_
#define BITREADER_HPP_

#include <stdint.h>

namespace paradise {
namespace index {

// Optimization: instead of bytes, use integers to store bits
class BitReader {
public:

	BitReader(const uint32_t *src, uint32_t len = 0xffffffff);

	void resetPos();

	bool hasLeft() const {
		return m_cur < m_end;
	}

	bool getBit();

	void printBuffer() const;

	uint32_t getBinary(uint32_t bitLen);

	const uint32_t *getBuffer() const{
		return m_beg;
	}

	const int getByteLenRead() const {
		if (m_curBitOffset == 0)
			return 4 * (m_cur - m_beg);
		else {
			return 4 * (m_cur - m_beg + 1);
		}
	}

private:
	const uint32_t *m_end;
	const uint32_t *m_cur;
	const uint32_t *m_beg;

	//const uint32_t *m_endMask;
	//const uint32_t *m_curMask;

	uint32_t m_curBitOffset;
	uint32_t m_maxLen;

	static const uint32_t m_allOneMaskArr[33];
	static const uint32_t m_OneBitMaskArr[33];
};

inline bool
BitReader::getBit() {
	/*if (m_cur == m_end) {
		throw;
	}*/

	bool res = ((*m_cur) >> m_curBitOffset) & 0x1;
	uint32_t newOffset = m_curBitOffset + 1;
	m_cur +=  newOffset >> 5;
	m_curBitOffset = newOffset & 0x1f;

	/*
	bool res = (*m_cur) & (*m_curMask);
	uint32_t newOffset = m_curMask + 1 - m_OneBitMaskArr;
	m_cur +=  newOffset >> 5;
	m_curMask = m_OneBitMaskArr + (newOffset & 0x1f);
	*/

	/*m_curMask ++;
	if (m_curMask == m_endMask) {
		m_curMask = m_OneBitMaskArr;
		m_cur ++;
	}*/
	return res;
}

inline uint32_t
BitReader::getBinary(uint32_t bitLen) {

	uint32_t newVal = 0;
	uint32_t lenWritten = 0;

	//m_curMask = m_OneBitMaskArr + m_curBitOffset;
	int bitLeftInUInt = 32 - m_curBitOffset;

	//fill the first incomplete uint and ignore overflow
	if (bitLen < bitLeftInUInt) {
		newVal |= ((*m_cur) >> m_curBitOffset) & m_allOneMaskArr[bitLen];
		m_curBitOffset += bitLen;
		if (m_curBitOffset == 32) {
			m_curBitOffset = 0;
			m_cur++;
		}
		return newVal;
	}
	else {
		newVal |= ((*m_cur) >> m_curBitOffset) & m_allOneMaskArr[bitLeftInUInt];
	}
	m_cur ++;
	bitLen -= bitLeftInUInt;
	lenWritten += bitLeftInUInt;

	//fill the last incomplete byte
	newVal |= ((*m_cur) & m_allOneMaskArr[bitLen]) << lenWritten;
	m_curBitOffset = bitLen;
	lenWritten += bitLen;

	return newVal;
}


/*
class BitReader {
public:

	BitReader(uint8_t *src, uint32_t byteLen = 0xffffffff);

	void resetPos();

	bool hasLeft() const {
		return m_cur < m_end;
	}

	bool getBit();

	void printBuffer() const;

	uint32_t getBinary(uint32_t bitLen);

	const uint8_t *getBuffer() const{
		return m_beg;
	}

	const int getByteLenRead() const {
		return m_cur - m_beg;
	}

private:
	const uint8_t *m_end;
	const uint8_t *m_cur;
	const uint8_t *m_beg;

	const uint8_t *m_endMask;
	const uint8_t *m_curMask;

	uint32_t m_maxByteLen;

	uint8_t m_maskArr[8];
};

inline bool
BitReader::getBit() {
	if (m_cur == m_end) {
		throw;
	}

	//bool res = ((*m_cur) & (*m_curMask)) == 0 ? false : true;
	bool res = (*m_cur) & (*m_curMask);
	m_curMask ++;
	if (m_curMask == m_endMask) {
		m_curMask = m_maskArr;
		m_cur ++;
	}
	return res;
}

inline uint32_t
BitReader::getBinary(uint32_t bitLen) {
#define ALL_ONE_MASK(len) ((1 << len) - 1)

	uint32_t newVal = 0;
	uint32_t lenWritten = 0;

	int bitLeftInByte = m_endMask - m_curMask;
	int curBitOffset = m_curMask - m_maskArr;

	//fill the first incomplete byte and ignore overflow
	if (bitLen < bitLeftInByte) {
		newVal |= ((*m_cur) >> curBitOffset) & ALL_ONE_MASK(bitLen);
		m_curMask += bitLen;
		return newVal;
	}
	else {
		newVal |= ((*m_cur) >> curBitOffset) & ALL_ONE_MASK(bitLeftInByte);
	}
	m_cur ++;
	bitLen -= bitLeftInByte;
	lenWritten += bitLeftInByte;

	while (bitLen >= 8) {
		newVal |= (*m_cur) << lenWritten;
		m_cur ++;
		bitLen -= 8;
		lenWritten +=  8;
	}

	//fill the last incomplete byte
	newVal |= ((*m_cur) & ALL_ONE_MASK(bitLen)) << lenWritten;
	m_curMask = m_maskArr + bitLen;
	lenWritten += bitLen;

	return newVal;
}
*/

}
}


#endif /* BITREADER_HPP_ */
