/*
 * Plain.hpp
 */

#ifndef PLAIN_HPP_
#define PLAIN_HPP_
#include <stdint.h>
#include <string.h>
#include "Compressor.hpp"
namespace paradise {
namespace index {
class Plain: public Compressor {
public:
	Plain() {
	}
	virtual ~Plain() {
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
	virtual Compressor* clone();

	template<typename T>
	static int encode(char* des, const T* src, uint32_t length);

	template<typename T>
	static int decode(T* des, const char* src, int length);
	virtual std::string getCompressorName() {
		return "plain";
	}

};

template<typename T>
int Plain::encode(char* des, const T* src, uint32_t encodeNum) {
	for (int i = 0; i < encodeNum; i++) {
		memcpy(des, (char*) &src[i], sizeof(T));
		des += sizeof(T);
	}
	return encodeNum * sizeof(T);
}

template<typename T>
int Plain::decode(T* des, const char* src, int decodeNum) {
	const T* val = (T*) src;
	for (int i = 0; i < decodeNum; i++) {
		des[i] = val[i];
	}
	return sizeof(T) * decodeNum;
}

}
}

#endif /* PLAIN_HPP_ */
