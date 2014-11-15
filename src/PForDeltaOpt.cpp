#include "PForDeltaOpt.hpp"
using namespace paradise::index;
PForDeltaOpt::PForDeltaOpt(float expRatio) :
	PForDelta(expRatio) {
}
int PForDeltaOpt::encodeUint32(char* des, const uint32_t* src,
		uint32_t encodeNum) {
	return encode<uint32_t> (des, src, encodeNum);
}
int PForDeltaOpt::decodeUint32(uint32_t* des, const char* src,
		uint32_t decodeNum) {
	return decode<uint32_t> (des, src, decodeNum);
}
int PForDeltaOpt::encodeUint16(char* des, const uint16_t* src,
		uint32_t encodeNum) {
	return encode<uint16_t> (des, src, encodeNum);
}
int PForDeltaOpt::decodeUint16(uint16_t* des, const char* src,
		uint32_t decodeNum) {
	return decode<uint16_t> (des, src, decodeNum);
}
int PForDeltaOpt::encodeUint8(char* des, const uint8_t* src, uint32_t encodeNum) {
	return encode<uint8_t> (des, src, encodeNum);
}
int PForDeltaOpt::decodeUint8(uint8_t* des, const char* src, uint32_t decodeNum) {
	return decode<uint8_t> (des, src, decodeNum);
}
Compressor* PForDeltaOpt::clone() {
		Compressor* pNewComp = new PForDeltaOpt(*this);
		return pNewComp;
	}
