/*
 * BitWriter.cpp
 *
 *  Created on: 2013-2-25
 *      Author: zxd
 */

#include "BitWriter.hpp"
#include <assert.h>
#include <string.h>
#include <iostream>

using namespace paradise::index;
using namespace std;

const uint32_t BitWriter::m_allOneMaskArr[33] = { 0, 0x1, 0x3, 0x7, 0xf, 0x1f, 0x3f,
		0x7f, 0xff, 0x1ff, 0x3ff, 0x7ff, 0xfff, 0x1fff, 0x3fff, 0x7fff, 0xffff,
		0x1ffff, 0x3ffff, 0x7ffff, 0xfffff, 0x1fffff, 0x3fffff, 0x7fffff,
		0xffffff, 0x1ffffff, 0x3ffffff, 0x7ffffff, 0xfffffff, 0x1fffffff,
		0x3fffffff, 0x7fffffff, 0xffffffff };

const uint32_t BitWriter::m_OneBitMaskArr[33] = { 0x1, 0x2, 0x4, 0x8, 0x10, 0x20, 0x40,
		0x80, 0x100, 0x200, 0x400, 0x800, 0x1000, 0x2000, 0x4000, 0x8000, 0x10000,
		0x20000, 0x40000, 0x80000, 0x100000, 0x200000, 0x400000, 0x800000,
		0x1000000, 0x2000000, 0x4000000, 0x8000000, 0x10000000, 0x20000000,
		0x40000000, 0x80000000, 0x00000000 };

BitWriter::BitWriter(uint32_t *dst, uint32_t len) {
	assert(len > 0);
	m_maxLen = len;

	m_beg = dst;
	m_cur = m_beg;
	m_end = m_beg + m_maxLen;

	m_curBitOffset = 0;

	*m_cur = 0;	//clean the new byte
	//memset(dst, 0, sizeof(uint32_t) * m_maxLen);
}

void
BitWriter::resetPos() {
	m_cur = m_beg;
	m_curBitOffset = 0;
}

void
BitWriter::printBuffer() const{
	for (const uint32_t *cur = m_beg; cur != m_end; cur++) {
		cout << hex << (uint32_t)(*cur) << " ";
	}
	cout << endl;
}

/*
BitWriter::BitWriter(uint8_t *dst, uint32_t byteLen) {
	m_maxByteLen = byteLen;

	m_beg = dst;
	m_cur = m_beg;
	m_end = m_beg + m_maxByteLen;

	m_curBitOffset = 0;

	*m_cur = 0;	//clean the new byte
}

void
BitWriter::resetPos() {
	m_cur = m_beg;
	m_curBitOffset = 0;
}

inline void
BitWriter::printBuffer() const{
	for (const uint8_t *cur = m_beg; cur != m_end; cur++) {
		cout << hex << (uint32_t)(*cur) << " ";
	}
	cout << endl;
}


 */
