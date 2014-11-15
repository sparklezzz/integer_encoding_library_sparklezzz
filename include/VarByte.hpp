/*
 * VarByte.hpp
 * Vint 压缩，些版本只提供一个常用的vint压缩算法
 */

#ifndef VARBYTE_HPP_
#define VARBYTE_HPP_
#include "Compressor.hpp"
#include <stdint.h>
namespace paradise {
namespace index {
class VarByte: public Compressor {
public:
	VarByte() {
	}
	virtual ~VarByte() {
	}

public:
	virtual int
	encodeUint64(char* des, const uint64_t* src, uint32_t encodeNum);
	virtual int
	decodeUint64(uint64_t* des, const char* src, uint32_t decodeNum);

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

	template<typename T>
	static int encode(char* des, const T* src, uint32_t length);

	template<typename T>
	static int decode(T* des, const char* src, int length);
	virtual std::string getCompressorName() {
		return "var_byte";
	}
	virtual Compressor* clone();

};

template<typename T>
int VarByte::encode(char* des, const T* src, uint32_t encodeNum) {
	T value;
	int writeLen = 0;
	for (int i = 0; i < encodeNum; i++) {
		value = src[i];
		while (value > 0x7F) {
			des[writeLen++] = 0x80 | (value & 0x7F);
			value >>= 7;
		}
		des[writeLen++] = value & 0x7F;
	}
	return writeLen;
}

template<typename T>
int VarByte::decode(T* des, const char* src, int decodeNum) {
	T value, tmpVal;
	int shift;
	int readLen = 0;
	for (int i = 0; i < decodeNum; i++) {
		uint8_t byte = src[readLen++];
		value = byte & 0x7F;
		shift = 7;
		while (byte & 0x80) {
			byte = src[readLen++];
			tmpVal = byte;
			value |= ((tmpVal & 0x7F) << shift);
			shift += 7;
		}
		des[i] = value;
	}
	return readLen;
}

}
}
#endif /* VARBYTE_HPP_ */
