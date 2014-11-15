/**
 * Compressor is to encode and decode integers
 */
#ifndef __COMPRESSOR_HPP
#define __COMPRESSOR_HPP
#include<vector>
#include <stdint.h>
#include <string>
#include <boost/shared_ptr.hpp>
namespace paradise {
namespace index {

class Compressor {
public:
	Compressor();
	/**
	 * @param length要压缩多少个数
	 * @param src 源数据
	 * @param des压缩数据的存放
	 * @return 压缩的长度
	 */
	virtual int
	encodeUint64(char* des, const uint64_t* src, uint32_t encodeNum);
	/**
	 * @param  length 解压多少个数字
	 * @return 解压的长度
	 */
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

	virtual void setBlockSize(uint32_t size);

	uint32_t getBlockSize() {
		return m_blockSize;
	}
	virtual Compressor* clone() {
		Compressor* pNewComp = new Compressor();
		return pNewComp;
	}
	/**
	 * 对于一些压缩算法，当压缩的数比较少时，会使用比较大的空间，
	 * 这个函数指定的在最坏情况下它会使用多少多余的空间
	 */
	virtual int getExtraSpace();
	/**
	 * 压缩算法每次压缩的数字
	 */
	virtual int getNumPerCompTime();

	virtual std::string getCompressorName();
	/**
	 * 模板函数，得到一个数字最高位的下标(0为特殊情况)<br>
	 * 例如：<br>
	 * 0 --> 1 <br>
	 * 1 --> 1 <br>
	 * 2 --> 2 <br>
	 * 3 --> 2 <br>
	 * 意义即为用多少个bit可以表示该数字
	 *
	 * @param number 传入不同精度的整形（穿入其他的类型无定义）
	 *
	 * @return 最高位的下标（从1起始）
	 */
	template<typename T>
	static int highBitIdx(T number);

	virtual ~Compressor();
public:
	static const uint32_t mask_map[33];

protected:
	uint32_t m_blockSize;

};

template<typename T>
int Compressor::highBitIdx(T number) {
	int idx = 0;
	while (number > 0) {
		++idx;
		number = number >> 1;
	}
	if (idx == 0) {
		idx = 1;
	}
	return idx;
}

typedef boost::shared_ptr<Compressor> CompressorPtr;
}
}

#endif
