/*
 * PForDeltaBase.hpp
 *
 *  Created on: 2014-2-25
 *      Author: zxd
 */

#ifndef PFORDELTABASE_HPP_
#define PFORDELTABASE_HPP_

#include "Compressor.hpp"

namespace paradise {
namespace index {

class PForDeltaBase : public Compressor {
protected:
	template<typename T>
	bool pfor_fake_encode(const T *src, int useBits);

protected:
	static const int MaxBlockSize = 8192;
	float m_expRatio;
	int m_arrBits[32];//压缩的bit映射,使用5bits
};

template<typename T>
bool PForDeltaBase::pfor_fake_encode(const T *src, int useBits) {
	uint32_t expNum = 0;
	int compBit = m_arrBits[useBits];
	if (compBit == 32) {
		expNum = 0;
		return true;
	}
	expNum = 0;
	int expPos = -1;
	for (int i = 0; i < m_blockSize; i++) {
		//异常数或者是两异常中的距离超过compBit的表示范围，令中间的数的异常数
		if ((src[i] >= (1 << compBit)) || ((expPos >= 0) && (i - expPos == (1
				<< compBit)))) {
			expNum++;
			expPos = i;
		}
	}
	if (expNum <= m_expRatio * m_blockSize) {
		return true;
	}
	return false;
}



}
}


#endif /* PFORDELTABASE_HPP_ */
