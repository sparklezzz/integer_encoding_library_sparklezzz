#include "Compressor.hpp"
using namespace paradise::index;
using namespace std;
const uint32_t Compressor::mask_map[33] = { 0, 0x1, 0x3, 0x7, 0xf, 0x1f, 0x3f,
		0x7f, 0xff, 0x1ff, 0x3ff, 0x7ff, 0xfff, 0x1fff, 0x3fff, 0x7fff, 0xffff,
		0x1ffff, 0x3ffff, 0x7ffff, 0xfffff, 0x1fffff, 0x3fffff, 0x7fffff,
		0xffffff, 0x1ffffff, 0x3ffffff, 0x7ffffff, 0xfffffff, 0x1fffffff,
		0x3fffffff, 0x7fffffff, 0xffffffff };
Compressor::Compressor() {
	m_blockSize = 128;
}
int Compressor::encodeUint64(char* des, const uint64_t* src, uint32_t encodeNum) {
	return 0;
}
int Compressor::decodeUint64(uint64_t* des, const char* src, uint32_t decodeNum) {
	return 0;
}

int Compressor::encodeUint32(char* des, const uint32_t* src, uint32_t encodeNum) {
	return 0;
}

int Compressor::decodeUint32(uint32_t* des, const char* src, uint32_t decodeNum) {
	return 0;
}

int Compressor::encodeUint16(char* des, const uint16_t* src, uint32_t encodeNum) {
	return 0;
}

int Compressor::decodeUint16(uint16_t* des, const char* src, uint32_t decodeNum) {
	return 0;
}
int Compressor::encodeUint8(char* des, const uint8_t* src, uint32_t encodeNum) {
	return 0;
}
int Compressor::decodeUint8(uint8_t* des, const char* src, uint32_t decodeNum) {
	return 0;
}

void Compressor::setBlockSize(uint32_t size) {
	if (size > 0) {
		m_blockSize = size;
	} else {
		m_blockSize = 128;
	}
}
/**
 * 对于一些压缩算法，当压缩的数比较少时，会使用比较大的空间，
 * 这个函数指定的在最坏情况下它会使用多少多余的空间
 */
int Compressor::getExtraSpace() {
	return 0;
}
/**
 * 压缩算法每次压缩的数字
 */
int Compressor::getNumPerCompTime() {
	return 1;
}
string Compressor::getCompressorName() {
	return "base_compressor";

}
Compressor::~Compressor() {
}
