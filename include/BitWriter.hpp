/*
 * BitWriter.hpp
 *
 *  Created on: 2013-2-25
 *      Author: zxd
 */

#ifndef BITWRITER_HPP_
#define BITWRITER_HPP_

#include <stdint.h>
#include <cassert>

namespace paradise {
namespace index {

// Optimization: instead of bytes, use integers to store bits
class BitWriter {
public:
	BitWriter (uint32_t *dst, uint32_t len = 0xffffffff);

	void resetPos();

	void putBit(bool bit);

	bool hasLeft() const {
		return m_cur < m_end;
	}

	void printBuffer() const;

	// write successive 1/0s, note we did not end with 0/1!!
	void putUnary(bool bit, uint32_t unaryLen);

	void putBinary(uint32_t val, uint32_t bitLen);

	void alignTo32Bit();

	const uint32_t *getBuffer() const {
		return m_beg;
	}

	int getByteLenWritten() const {
		if (m_curBitOffset == 0)
			return 4 * (m_cur - m_beg);
		else
			return 4 * (m_cur - m_beg + 1);
	}

private:
	const uint32_t *m_end;
	uint32_t *m_cur;
	uint32_t *m_beg;

	uint32_t m_curBitOffset;

	//const uint32_t *m_endMask;
	//const uint32_t *m_curMask;

	uint32_t m_maxLen;

	static const uint32_t m_allOneMaskArr[33];
	static const uint32_t m_OneBitMaskArr[33];
};

inline void
BitWriter::putBit(bool bit) {
	/*if (m_cur == m_end) {
		throw;
	}*/

	if (m_curBitOffset == 32) {
		m_curBitOffset = 0;
		m_cur ++;
	}

	if (m_curBitOffset == 0)
		*m_cur = 0;

	*m_cur |= ((uint32_t)bit) << m_curBitOffset;
	uint32_t newOffset = m_curBitOffset + 1;
	m_cur += newOffset >> 5;
	m_curBitOffset = newOffset & 0x1f;

	/*
	if (bit) {
		*m_cur |= 1 << m_curBitOffset;
	}
	else {
		*m_cur &= (1 << m_curBitOffset) - 1;
	}
	m_curBitOffset ++;
	if (m_curBitOffset == 32) {
		m_curBitOffset = 0;
		m_cur ++;
		*m_cur = 0;
	}
	*/
}

inline void
BitWriter::putUnary(bool bit, uint32_t unaryLen) {
	if (unaryLen == 0)
		return;
	if (m_curBitOffset == 0)
		*m_cur = 0;
	int bitLeftInUInt = 32 - m_curBitOffset;

	if (bit) { //e.g. low -> high, 1111111
		//fill the first incomplete byte and ignore overflow
		if (unaryLen < bitLeftInUInt) {
			*m_cur |= m_allOneMaskArr[unaryLen] << m_curBitOffset;
			m_curBitOffset += unaryLen;
			return;
		}
		else {
			*m_cur |= 0xffffffff << m_curBitOffset;
		}
		m_cur ++;
		m_curBitOffset = 0;
		unaryLen -= bitLeftInUInt;

		while(unaryLen >= 32) {
			unaryLen -= 32;
			*m_cur = 0xffffffff;
			m_cur++;
		}

		//fill the last incomplete byte
		if (unaryLen > 0)
			*m_cur = m_allOneMaskArr[unaryLen];

		m_curBitOffset += unaryLen;
	}
	else { //e.g. low -> high, 0000000
		//TODO: have bugs with uninitialized array
		//fill the first incomplete byte and ignore overflow
		if (unaryLen < bitLeftInUInt) {
			//TODO: verify me by Xudong Zhang
			*m_cur &= ~(m_allOneMaskArr[unaryLen] << m_curBitOffset);
			m_curBitOffset += unaryLen;
			return;
		}
		else {
			*m_cur &= m_allOneMaskArr[m_curBitOffset];
		}
		m_cur ++;
		m_curBitOffset = 0;
		unaryLen -= bitLeftInUInt;

		while(unaryLen >= 32) {
			unaryLen -= 32;
			*m_cur = 0;
			m_cur++;
		}

		//fill the last incomplete byte
		if (unaryLen > 0)
			*m_cur = 0;

		m_curBitOffset += unaryLen;
	}
}

inline void
BitWriter::putBinary(uint32_t val, uint32_t bitLen) {
	if (bitLen == 0)
		return;
	assert(bitLen <= 32);	// we do not support integers more than 32-bit long
	if (m_curBitOffset == 0)
		*m_cur = 0;
	int bitLeftInUInt = 32 - m_curBitOffset;

	//fill the first incomplete byte and ignore overflow
	if (bitLen < bitLeftInUInt) {
		*m_cur |= ((val & m_allOneMaskArr[bitLen]) << m_curBitOffset);
		m_curBitOffset += bitLen;
		return;
	}
	else {
		*m_cur |= ((val & m_allOneMaskArr[bitLeftInUInt]) << m_curBitOffset);
	}
	m_cur ++;
	m_curBitOffset = 0;
	bitLen -= bitLeftInUInt;
	val >>= bitLeftInUInt;

	//fill the last incomplete byte
	if (bitLen > 0)
		*m_cur = val & m_allOneMaskArr[bitLen];

	m_curBitOffset += bitLen;

}

inline void
BitWriter::alignTo32Bit() {
	if (m_curBitOffset > 0) {
		*m_cur &= m_allOneMaskArr[m_curBitOffset];
		m_cur ++;
	}
	m_curBitOffset = 0;
}

/*
class BitWriter {
public:
	BitWriter (uint8_t *dst, uint32_t byteLen = 0xffffffff);

	void resetPos();

	void putBit(bool bit);

	bool hasLeft() const {
		return m_cur < m_end;
	}

	void printBuffer() const;

	void putUnary(bool bit, uint32_t unaryLen);

	void putBinary(uint32_t val, uint32_t bitLen);

	const uint8_t *getBuffer() const {
		return m_beg;
	}

	int getByteLenWritten() const {
		return m_cur - m_beg;
	}

private:
	const uint8_t *m_end;
	uint8_t *m_cur;
	uint8_t *m_beg;

	uint8_t m_curBitOffset;

	const uint8_t *m_endMask;
	const uint8_t *m_curMask;

	uint32_t m_maxByteLen;

	uint8_t m_maskArr[8];

};

inline void
BitWriter::putBit(bool bit) {
	if (m_cur == m_end) {
		throw;
	}

	if (bit) {
		*m_cur |= 1 << m_curBitOffset;
	}
	else {
		*m_cur &= (1 << m_curBitOffset) - 1;
	}
	m_curBitOffset ++;
	if (m_curBitOffset == 8) {
		m_curBitOffset = 0;
		m_cur ++;
		*m_cur = 0;
	}
}

inline void
BitWriter::putUnary(bool bit, uint32_t unaryLen) {
	int bitLeftInByte = 8 - m_curBitOffset;

	if (bit) {
		//fill the first incomplete byte and ignore overflow
		if (unaryLen < bitLeftInByte) {
			*m_cur |= (uint8_t)(((1 << unaryLen) - 1) << m_curBitOffset);
			m_curBitOffset += unaryLen;
			return;
		}
		else {
			*m_cur |= (uint8_t)(0xff << m_curBitOffset);
		}
		m_cur ++;
		m_curBitOffset = 0;
		unaryLen -= bitLeftInByte;

		while (unaryLen >= 8) {
			*m_cur = 0xff;
			m_cur ++;
			unaryLen -= 8;
		}

		//fill the last incomplete byte
		*m_cur = (1 << unaryLen) - 1;
		m_curBitOffset += unaryLen;
	}
	else {
		//fill the first incomplete byte and ignore overflow
		if (unaryLen < bitLeftInByte) {
			*m_cur &= (uint8_t)((1 << m_curBitOffset) - 1);
			return;
		}
		else {
			*m_cur &= (uint8_t)((1 << m_curBitOffset) - 1);
		}
		m_cur ++;
		m_curBitOffset = 0;
		unaryLen -= bitLeftInByte;

		while (unaryLen >= 8) {
			*m_cur = 0;
			m_cur ++;
			unaryLen -= 8;
		}

		//fill the last incomplete byte
		*m_cur = 0;
		m_curBitOffset += unaryLen;
	}
}

inline void
BitWriter::putBinary(uint32_t val, uint32_t bitLen) {
#define ALL_ONE_MASK(len) ((1 << len) - 1)

	int bitLeftInByte = 8 - m_curBitOffset;

	//fill the first incomplete byte and ignore overflow
	if (bitLen < bitLeftInByte) {
		*m_cur |= (uint8_t)((val & ALL_ONE_MASK(bitLen)) << m_curBitOffset);
		m_curBitOffset += bitLen;
		return;
	}
	else {
		*m_cur |= (uint8_t)((val & ALL_ONE_MASK(bitLeftInByte)) << m_curBitOffset);
	}
	m_cur ++;
	m_curBitOffset = 0;
	bitLen -= bitLeftInByte;
	val >>= bitLeftInByte;

	while (bitLen >= 8) {
		*m_cur = val & 0xff;
		m_cur ++;
		bitLen -= 8;
		val >>= 8;
	}

	//fill the last incomplete byte
	*m_cur = val & ALL_ONE_MASK(bitLen);
	m_curBitOffset += bitLen;

}
*/
}
}


#endif /* BITWRITER_HPP_ */
