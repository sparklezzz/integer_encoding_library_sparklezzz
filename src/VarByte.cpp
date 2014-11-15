#include "VarByte.hpp"
using namespace paradise::index;
int VarByte::encodeUint64(char* des, const uint64_t* src, uint32_t encodeNum) {
	return encode<uint64_t> (des, src, encodeNum);
}
int VarByte::decodeUint64(uint64_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint64_t> (des, src, decodeNum);
}

int VarByte::encodeUint32(char* des, const uint32_t* src, uint32_t encodeNum) {
	return encode<uint32_t> (des, src, encodeNum);
}
int VarByte::decodeUint32(uint32_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint32_t> (des, src, decodeNum);
}

int VarByte::encodeUint16(char* des, const uint16_t* src, uint32_t encodeNum) {
	return encode<uint16_t> (des, src, encodeNum);
}
int VarByte::decodeUint16(uint16_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint16_t> (des, src, decodeNum);
}

int VarByte::encodeUint8(char* des, const uint8_t* src, uint32_t encodeNum) {
	return encode<uint8_t> (des, src, encodeNum);
}
int VarByte::decodeUint8(uint8_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint8_t> (des, src, decodeNum);
}

Compressor* VarByte::clone() {
	Compressor* pNewComp = new VarByte(*this);
	return pNewComp;
}
