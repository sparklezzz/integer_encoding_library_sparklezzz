/*
 * KAFOR_unpack.hpp
 *
 *  Created on: 2013-11-18
 *      Author: zxd
 */

#ifndef KAFOR_UNPACK_HPP_
#define KAFOR_UNPACK_HPP_

namespace paradise {
namespace index {

struct KAFORUnpackInfo {
	void (*m_subFunc)(uint32_t *des, const uint32_t *src);
	uint8_t m_offset;
	uint8_t m_newOffset;
	uint16_t m_wordSkipped;
	uint16_t m_intDecoded;
};

template<typename T>
void KAFOR_unpack_8len_1bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 1) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 2) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 3) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 4) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 5) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 6) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 7) & 1;
	}
}

template<typename T>
void KAFOR_unpack_8len_1bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 9) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 10) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 11) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 12) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 13) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 14) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 15) & 1;
	}
}

template<typename T>
void KAFOR_unpack_8len_1bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 17) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 18) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 19) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 20) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 21) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 22) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 23) & 1;
	}
}

template<typename T>
void KAFOR_unpack_8len_1bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 25) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 26) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 27) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 28) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 29) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 30) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 31) & 1;
	}
}

template<typename T>
void KAFOR_unpack_8len_2bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 2) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 4) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 6) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 8) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 10) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 12) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 14) & 3;
	}
}

template<typename T>
void KAFOR_unpack_8len_2bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 10) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 12) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 14) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 16) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 18) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 20) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 22) & 3;
	}
}

template<typename T>
void KAFOR_unpack_8len_2bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 18) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 20) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 22) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 24) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 26) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 28) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 30) & 3;
	}
}

template<typename T>
void KAFOR_unpack_8len_2bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 26) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 28) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 30) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j]) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 2) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 4) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 6) & 3;
	}
}

template<typename T>
void KAFOR_unpack_8len_3bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 3) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 6) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 9) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 12) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 15) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 18) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 21) & 7;
	}
}

template<typename T>
void KAFOR_unpack_8len_3bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 11) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 14) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 17) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 20) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 23) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 26) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 29) & 7;
	}
}

template<typename T>
void KAFOR_unpack_8len_3bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 19) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 22) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 25) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 28) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 31) & 7;
		des[20+j] |= (src[4+j] << 1) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 2) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 5) & 7;
	}
}

template<typename T>
void KAFOR_unpack_8len_3bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 27) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 30) & 7;
		des[8+j] |= (src[4+j] << 2) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 1) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 4) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 7) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 10) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 13) & 7;
	}
}

template<typename T>
void KAFOR_unpack_8len_4bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 4) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 8) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 12) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 16) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 20) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 24) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 28) & 15;
	}
}

template<typename T>
void KAFOR_unpack_8len_4bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 12) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 16) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 20) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 24) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 28) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j]) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 4) & 15;
	}
}

template<typename T>
void KAFOR_unpack_8len_4bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 20) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 24) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 28) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j]) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 4) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 8) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 12) & 15;
	}
}

template<typename T>
void KAFOR_unpack_8len_4bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 28) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j]) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 4) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 8) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 12) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 16) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 20) & 15;
	}
}

template<typename T>
void KAFOR_unpack_8len_5bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 5) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 10) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 15) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 20) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 25) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 30) & 31;
		des[24+j] |= (src[4+j] << 2) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 3) & 31;
	}
}

template<typename T>
void KAFOR_unpack_8len_5bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 13) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 18) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 23) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 28) & 31;
		des[16+j] |= (src[4+j] << 4) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 1) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 6) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 11) & 31;
	}
}

template<typename T>
void KAFOR_unpack_8len_5bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 21) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 26) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 31) & 31;
		des[12+j] |= (src[4+j] << 1) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 4) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 9) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 14) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 19) & 31;
	}
}

template<typename T>
void KAFOR_unpack_8len_5bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 29) & 31;
		des[4+j] |= (src[4+j] << 3) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 2) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 7) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 12) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 17) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 22) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 27) & 31;
	}
}

template<typename T>
void KAFOR_unpack_8len_6bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 6) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 12) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 18) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 24) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 30) & 63;
		des[20+j] |= (src[4+j] << 2) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 4) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 10) & 63;
	}
}

template<typename T>
void KAFOR_unpack_8len_6bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 14) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 20) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 26) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j]) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 6) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 12) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 18) & 63;
	}
}

template<typename T>
void KAFOR_unpack_8len_6bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 22) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 28) & 63;
		des[8+j] |= (src[4+j] << 4) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 2) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 8) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 14) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 20) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 26) & 63;
	}
}

template<typename T>
void KAFOR_unpack_8len_6bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 30) & 63;
		des[4+j] |= (src[4+j] << 2) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 4) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 10) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 16) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 22) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 28) & 63;
		des[24+j] |= (src[8+j] << 4) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 2) & 63;
	}
}

template<typename T>
void KAFOR_unpack_8len_7bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 7) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 14) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 21) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 28) & 127;
		des[16+j] |= (src[4+j] << 4) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 3) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 10) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 17) & 127;
	}
}

template<typename T>
void KAFOR_unpack_8len_7bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 15) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 22) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 29) & 127;
		des[12+j] |= (src[4+j] << 3) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 4) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 11) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 18) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 25) & 127;
	}
}

template<typename T>
void KAFOR_unpack_8len_7bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 23) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 30) & 127;
		des[8+j] |= (src[4+j] << 2) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 5) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 12) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 19) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 26) & 127;
		des[24+j] |= (src[8+j] << 6) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 1) & 127;
	}
}

template<typename T>
void KAFOR_unpack_8len_7bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 31) & 127;
		des[4+j] |= (src[4+j] << 1) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 6) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 13) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 20) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 27) & 127;
		des[20+j] |= (src[8+j] << 5) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 2) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 9) & 127;
	}
}

template<typename T>
void KAFOR_unpack_8len_8bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 24) & 255;
	}
}

template<typename T>
void KAFOR_unpack_8len_8bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j]) & 255;
	}
}

template<typename T>
void KAFOR_unpack_8len_8bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 8) & 255;
	}
}

template<typename T>
void KAFOR_unpack_8len_8bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 16) & 255;
	}
}

template<typename T>
void KAFOR_unpack_8len_9bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 9) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 18) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 27) & 511;
		des[12+j] |= (src[4+j] << 5) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 4) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 13) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 22) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 31) & 511;
		des[28+j] |= (src[8+j] << 1) & 511;
	}
}

template<typename T>
void KAFOR_unpack_8len_9bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 17) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 26) & 511;
		des[8+j] |= (src[4+j] << 6) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 3) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 12) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 21) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 30) & 511;
		des[24+j] |= (src[8+j] << 2) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 7) & 511;
	}
}

template<typename T>
void KAFOR_unpack_8len_9bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 25) & 511;
		des[4+j] |= (src[4+j] << 7) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 2) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 11) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 20) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 29) & 511;
		des[20+j] |= (src[8+j] << 3) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 6) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 15) & 511;
	}
}

template<typename T>
void KAFOR_unpack_8len_9bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 511;
		des[j] |= (src[4+j] << 8) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 1) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 10) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 19) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 28) & 511;
		des[16+j] |= (src[8+j] << 4) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 5) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 14) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 23) & 511;
	}
}

template<typename T>
void KAFOR_unpack_8len_10bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 10) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 20) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 30) & 1023;
		des[12+j] |= (src[4+j] << 2) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 8) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 18) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 28) & 1023;
		des[24+j] |= (src[8+j] << 4) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 6) & 1023;
	}
}

template<typename T>
void KAFOR_unpack_8len_10bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 18) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 28) & 1023;
		des[8+j] |= (src[4+j] << 4) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 6) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 16) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 26) & 1023;
		des[20+j] |= (src[8+j] << 6) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 4) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 14) & 1023;
	}
}

template<typename T>
void KAFOR_unpack_8len_10bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 26) & 1023;
		des[4+j] |= (src[4+j] << 6) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 4) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 14) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 24) & 1023;
		des[16+j] |= (src[8+j] << 8) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 2) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 12) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 22) & 1023;
	}
}

template<typename T>
void KAFOR_unpack_8len_10bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 1023;
		des[j] |= (src[4+j] << 8) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 2) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 12) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 22) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j]) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 10) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 20) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 30) & 1023;
		des[28+j] |= (src[12+j] << 2) & 1023;
	}
}

template<typename T>
void KAFOR_unpack_8len_11bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 11) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 22) & 2047;
		des[8+j] |= (src[4+j] << 10) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 1) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 12) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 23) & 2047;
		des[20+j] |= (src[8+j] << 9) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 2) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 13) & 2047;
	}
}

template<typename T>
void KAFOR_unpack_8len_11bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 19) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 30) & 2047;
		des[8+j] |= (src[4+j] << 2) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 9) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 20) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 31) & 2047;
		des[20+j] |= (src[8+j] << 1) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 10) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 21) & 2047;
	}
}

template<typename T>
void KAFOR_unpack_8len_11bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 27) & 2047;
		des[4+j] |= (src[4+j] << 5) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 6) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 17) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 28) & 2047;
		des[16+j] |= (src[8+j] << 4) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 7) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 18) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 29) & 2047;
		des[28+j] |= (src[12+j] << 3) & 2047;
	}
}

template<typename T>
void KAFOR_unpack_8len_11bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 2047;
		des[j] |= (src[4+j] << 8) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 3) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 14) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 25) & 2047;
		des[12+j] |= (src[8+j] << 7) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 4) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 15) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 26) & 2047;
		des[24+j] |= (src[12+j] << 6) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 5) & 2047;
	}
}

template<typename T>
void KAFOR_unpack_8len_12bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 12) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 24) & 4095;
		des[8+j] |= (src[4+j] << 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 16) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 28) & 4095;
		des[20+j] |= (src[8+j] << 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 20) & 4095;
	}
}

template<typename T>
void KAFOR_unpack_8len_12bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 20) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j]) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 12) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 24) & 4095;
		des[16+j] |= (src[8+j] << 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 16) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 28) & 4095;
		des[28+j] |= (src[12+j] << 4) & 4095;
	}
}

template<typename T>
void KAFOR_unpack_8len_12bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 28) & 4095;
		des[4+j] |= (src[4+j] << 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 20) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j]) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 12) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 24) & 4095;
		des[24+j] |= (src[12+j] << 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 4) & 4095;
	}
}

template<typename T>
void KAFOR_unpack_8len_12bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 4095;
		des[j] |= (src[4+j] << 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 16) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 28) & 4095;
		des[12+j] |= (src[8+j] << 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 20) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j]) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 12) & 4095;
	}
}

template<typename T>
void KAFOR_unpack_8len_13bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 13) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 26) & 8191;
		des[8+j] |= (src[4+j] << 6) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 7) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 20) & 8191;
		des[16+j] |= (src[8+j] << 12) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 1) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 14) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 27) & 8191;
		des[28+j] |= (src[12+j] << 5) & 8191;
	}
}

template<typename T>
void KAFOR_unpack_8len_13bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 21) & 8191;
		des[4+j] |= (src[4+j] << 11) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 2) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 15) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 28) & 8191;
		des[16+j] |= (src[8+j] << 4) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 9) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 22) & 8191;
		des[24+j] |= (src[12+j] << 10) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 3) & 8191;
	}
}

template<typename T>
void KAFOR_unpack_8len_13bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 29) & 8191;
		des[4+j] |= (src[4+j] << 3) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 10) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 23) & 8191;
		des[12+j] |= (src[8+j] << 9) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 4) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 17) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 30) & 8191;
		des[24+j] |= (src[12+j] << 2) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 11) & 8191;
	}
}

template<typename T>
void KAFOR_unpack_8len_13bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 8191;
		des[j] |= (src[4+j] << 8) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 5) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 18) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 31) & 8191;
		des[12+j] |= (src[8+j] << 1) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 12) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 25) & 8191;
		des[20+j] |= (src[12+j] << 7) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 6) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 19) & 8191;
	}
}

template<typename T>
void KAFOR_unpack_8len_14bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 14) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 28) & 16383;
		des[8+j] |= (src[4+j] << 4) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 10) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 24) & 16383;
		des[16+j] |= (src[8+j] << 8) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 6) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 20) & 16383;
		des[24+j] |= (src[12+j] << 12) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 2) & 16383;
	}
}

template<typename T>
void KAFOR_unpack_8len_14bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 22) & 16383;
		des[4+j] |= (src[4+j] << 10) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 4) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 18) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j]) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 14) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 28) & 16383;
		des[24+j] |= (src[12+j] << 4) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 10) & 16383;
	}
}

template<typename T>
void KAFOR_unpack_8len_14bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 30) & 16383;
		des[4+j] |= (src[4+j] << 2) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 12) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 26) & 16383;
		des[12+j] |= (src[8+j] << 6) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 8) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 22) & 16383;
		des[20+j] |= (src[12+j] << 10) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 4) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 18) & 16383;
	}
}

template<typename T>
void KAFOR_unpack_8len_14bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 16383;
		des[j] |= (src[4+j] << 8) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 6) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 20) & 16383;
		des[8+j] |= (src[8+j] << 12) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 2) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 16) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 30) & 16383;
		des[20+j] |= (src[12+j] << 2) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 12) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 26) & 16383;
		des[28+j] |= (src[16+j] << 6) & 16383;
	}
}

template<typename T>
void KAFOR_unpack_8len_15bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 15) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 30) & 32767;
		des[8+j] |= (src[4+j] << 2) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 13) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 28) & 32767;
		des[16+j] |= (src[8+j] << 4) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 11) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 26) & 32767;
		des[24+j] |= (src[12+j] << 6) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 9) & 32767;
	}
}

template<typename T>
void KAFOR_unpack_8len_15bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 23) & 32767;
		des[4+j] |= (src[4+j] << 9) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 6) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 21) & 32767;
		des[12+j] |= (src[8+j] << 11) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 4) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 19) & 32767;
		des[20+j] |= (src[12+j] << 13) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 2) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 17) & 32767;
	}
}

template<typename T>
void KAFOR_unpack_8len_15bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 31) & 32767;
		des[4+j] |= (src[4+j] << 1) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 14) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 29) & 32767;
		des[12+j] |= (src[8+j] << 3) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 12) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 27) & 32767;
		des[20+j] |= (src[12+j] << 5) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 10) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 25) & 32767;
		des[28+j] |= (src[16+j] << 7) & 32767;
	}
}

template<typename T>
void KAFOR_unpack_8len_15bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 32767;
		des[j] |= (src[4+j] << 8) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 7) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 22) & 32767;
		des[8+j] |= (src[8+j] << 10) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 5) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 20) & 32767;
		des[16+j] |= (src[12+j] << 12) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 3) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 18) & 32767;
		des[24+j] |= (src[16+j] << 14) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 1) & 32767;
	}
}

template<typename T>
void KAFOR_unpack_8len_16bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 16) & 65535;
	}
}

template<typename T>
void KAFOR_unpack_8len_16bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 24) & 65535;
		des[4+j] |= (src[4+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 24) & 65535;
		des[12+j] |= (src[8+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 24) & 65535;
		des[20+j] |= (src[12+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 24) & 65535;
		des[28+j] |= (src[16+j] << 8) & 65535;
	}
}

template<typename T>
void KAFOR_unpack_8len_16bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j]) & 65535;
	}
}

template<typename T>
void KAFOR_unpack_8len_16bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 65535;
		des[j] |= (src[4+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 24) & 65535;
		des[8+j] |= (src[8+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 24) & 65535;
		des[16+j] |= (src[12+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 24) & 65535;
		des[24+j] |= (src[16+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 8) & 65535;
	}
}

template<typename T>
void KAFOR_unpack_8len_17bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 17) & 131071;
		des[4+j] |= (src[4+j] << 15) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 2) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 19) & 131071;
		des[12+j] |= (src[8+j] << 13) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 4) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 21) & 131071;
		des[20+j] |= (src[12+j] << 11) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 6) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 23) & 131071;
		des[28+j] |= (src[16+j] << 9) & 131071;
	}
}

template<typename T>
void KAFOR_unpack_8len_17bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 25) & 131071;
		des[4+j] |= (src[4+j] << 7) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 10) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 27) & 131071;
		des[12+j] |= (src[8+j] << 5) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 12) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 29) & 131071;
		des[20+j] |= (src[12+j] << 3) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 14) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 31) & 131071;
		des[28+j] |= (src[16+j] << 1) & 131071;
	}
}

template<typename T>
void KAFOR_unpack_8len_17bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 131071;
		des[j] |= (src[4+j] << 16) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 1) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 18) & 131071;
		des[8+j] |= (src[8+j] << 14) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 3) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 20) & 131071;
		des[16+j] |= (src[12+j] << 12) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 5) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 22) & 131071;
		des[24+j] |= (src[16+j] << 10) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 7) & 131071;
	}
}

template<typename T>
void KAFOR_unpack_8len_17bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 131071;
		des[j] |= (src[4+j] << 8) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 9) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 26) & 131071;
		des[8+j] |= (src[8+j] << 6) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 11) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 28) & 131071;
		des[16+j] |= (src[12+j] << 4) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 13) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 30) & 131071;
		des[24+j] |= (src[16+j] << 2) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 15) & 131071;
	}
}

template<typename T>
void KAFOR_unpack_8len_18bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 18) & 262143;
		des[4+j] |= (src[4+j] << 14) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 4) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 22) & 262143;
		des[12+j] |= (src[8+j] << 10) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 8) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 26) & 262143;
		des[20+j] |= (src[12+j] << 6) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 12) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 30) & 262143;
		des[28+j] |= (src[16+j] << 2) & 262143;
	}
}

template<typename T>
void KAFOR_unpack_8len_18bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 26) & 262143;
		des[4+j] |= (src[4+j] << 6) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 12) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 30) & 262143;
		des[12+j] |= (src[8+j] << 2) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 16) & 262143;
		des[16+j] |= (src[12+j] << 16) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 2) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 20) & 262143;
		des[24+j] |= (src[16+j] << 12) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 6) & 262143;
	}
}

template<typename T>
void KAFOR_unpack_8len_18bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 262143;
		des[j] |= (src[4+j] << 16) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 2) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 20) & 262143;
		des[8+j] |= (src[8+j] << 12) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 6) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 24) & 262143;
		des[16+j] |= (src[12+j] << 8) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 10) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 28) & 262143;
		des[24+j] |= (src[16+j] << 4) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 14) & 262143;
	}
}

template<typename T>
void KAFOR_unpack_8len_18bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 262143;
		des[j] |= (src[4+j] << 8) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 10) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 28) & 262143;
		des[8+j] |= (src[8+j] << 4) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 14) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j]) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 18) & 262143;
		des[20+j] |= (src[16+j] << 14) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 4) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 22) & 262143;
		des[28+j] |= (src[20+j] << 10) & 262143;
	}
}

template<typename T>
void KAFOR_unpack_8len_19bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 19) & 524287;
		des[4+j] |= (src[4+j] << 13) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 6) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 25) & 524287;
		des[12+j] |= (src[8+j] << 7) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 12) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 31) & 524287;
		des[20+j] |= (src[12+j] << 1) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 18) & 524287;
		des[24+j] |= (src[16+j] << 14) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 5) & 524287;
	}
}

template<typename T>
void KAFOR_unpack_8len_19bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 27) & 524287;
		des[4+j] |= (src[4+j] << 5) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 14) & 524287;
		des[8+j] |= (src[8+j] << 18) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 1) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 20) & 524287;
		des[16+j] |= (src[12+j] << 12) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 7) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 26) & 524287;
		des[24+j] |= (src[16+j] << 6) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 13) & 524287;
	}
}

template<typename T>
void KAFOR_unpack_8len_19bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 524287;
		des[j] |= (src[4+j] << 16) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 3) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 22) & 524287;
		des[8+j] |= (src[8+j] << 10) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 9) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 28) & 524287;
		des[16+j] |= (src[12+j] << 4) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 15) & 524287;
		des[20+j] |= (src[16+j] << 17) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 2) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 21) & 524287;
		des[28+j] |= (src[20+j] << 11) & 524287;
	}
}

template<typename T>
void KAFOR_unpack_8len_19bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 524287;
		des[j] |= (src[4+j] << 8) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 11) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 30) & 524287;
		des[8+j] |= (src[8+j] << 2) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 17) & 524287;
		des[12+j] |= (src[12+j] << 15) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 4) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 23) & 524287;
		des[20+j] |= (src[16+j] << 9) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 10) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 29) & 524287;
		des[28+j] |= (src[20+j] << 3) & 524287;
	}
}

template<typename T>
void KAFOR_unpack_8len_20bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 20) & 1048575;
		des[4+j] |= (src[4+j] << 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 28) & 1048575;
		des[12+j] |= (src[8+j] << 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 16) & 1048575;
		des[16+j] |= (src[12+j] << 16) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 24) & 1048575;
		des[24+j] |= (src[16+j] << 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 12) & 1048575;
	}
}

template<typename T>
void KAFOR_unpack_8len_20bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 28) & 1048575;
		des[4+j] |= (src[4+j] << 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 16) & 1048575;
		des[8+j] |= (src[8+j] << 16) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 24) & 1048575;
		des[16+j] |= (src[12+j] << 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j]) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 20) & 1048575;
		des[28+j] |= (src[20+j] << 12) & 1048575;
	}
}

template<typename T>
void KAFOR_unpack_8len_20bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 1048575;
		des[j] |= (src[4+j] << 16) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 24) & 1048575;
		des[8+j] |= (src[8+j] << 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j]) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 20) & 1048575;
		des[20+j] |= (src[16+j] << 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 28) & 1048575;
		des[28+j] |= (src[20+j] << 4) & 1048575;
	}
}

template<typename T>
void KAFOR_unpack_8len_20bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 1048575;
		des[j] |= (src[4+j] << 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j]) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 20) & 1048575;
		des[12+j] |= (src[12+j] << 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 28) & 1048575;
		des[20+j] |= (src[16+j] << 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 16) & 1048575;
		des[24+j] |= (src[20+j] << 16) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 4) & 1048575;
	}
}

template<typename T>
void KAFOR_unpack_8len_21bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 21) & 2097151;
		des[4+j] |= (src[4+j] << 11) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 10) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 31) & 2097151;
		des[12+j] |= (src[8+j] << 1) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 20) & 2097151;
		des[16+j] |= (src[12+j] << 12) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 9) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 30) & 2097151;
		des[24+j] |= (src[16+j] << 2) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 19) & 2097151;
		des[28+j] |= (src[20+j] << 13) & 2097151;
	}
}

template<typename T>
void KAFOR_unpack_8len_21bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 29) & 2097151;
		des[4+j] |= (src[4+j] << 3) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 18) & 2097151;
		des[8+j] |= (src[8+j] << 14) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 7) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 28) & 2097151;
		des[16+j] |= (src[12+j] << 4) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 17) & 2097151;
		des[20+j] |= (src[16+j] << 15) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 6) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 27) & 2097151;
		des[28+j] |= (src[20+j] << 5) & 2097151;
	}
}

template<typename T>
void KAFOR_unpack_8len_21bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 2097151;
		des[j] |= (src[4+j] << 16) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 5) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 26) & 2097151;
		des[8+j] |= (src[8+j] << 6) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 15) & 2097151;
		des[12+j] |= (src[12+j] << 17) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 4) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 25) & 2097151;
		des[20+j] |= (src[16+j] << 7) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 14) & 2097151;
		des[24+j] |= (src[20+j] << 18) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 3) & 2097151;
	}
}

template<typename T>
void KAFOR_unpack_8len_21bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 2097151;
		des[j] |= (src[4+j] << 8) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 13) & 2097151;
		des[4+j] |= (src[8+j] << 19) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 2) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 23) & 2097151;
		des[12+j] |= (src[12+j] << 9) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 12) & 2097151;
		des[16+j] |= (src[16+j] << 20) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 1) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 22) & 2097151;
		des[24+j] |= (src[20+j] << 10) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 11) & 2097151;
	}
}

template<typename T>
void KAFOR_unpack_8len_22bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 22) & 4194303;
		des[4+j] |= (src[4+j] << 10) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 12) & 4194303;
		des[8+j] |= (src[8+j] << 20) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 2) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 24) & 4194303;
		des[16+j] |= (src[12+j] << 8) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 14) & 4194303;
		des[20+j] |= (src[16+j] << 18) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 4) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 26) & 4194303;
		des[28+j] |= (src[20+j] << 6) & 4194303;
	}
}

template<typename T>
void KAFOR_unpack_8len_22bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 30) & 4194303;
		des[4+j] |= (src[4+j] << 2) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 20) & 4194303;
		des[8+j] |= (src[8+j] << 12) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 10) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j]) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 22) & 4194303;
		des[20+j] |= (src[16+j] << 10) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 12) & 4194303;
		des[24+j] |= (src[20+j] << 20) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 2) & 4194303;
	}
}

template<typename T>
void KAFOR_unpack_8len_22bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 4194303;
		des[j] |= (src[4+j] << 16) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 6) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 28) & 4194303;
		des[8+j] |= (src[8+j] << 4) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 18) & 4194303;
		des[12+j] |= (src[12+j] << 14) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 8) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 30) & 4194303;
		des[20+j] |= (src[16+j] << 2) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 20) & 4194303;
		des[24+j] |= (src[20+j] << 12) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 10) & 4194303;
	}
}

template<typename T>
void KAFOR_unpack_8len_22bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 4194303;
		des[j] |= (src[4+j] << 8) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 14) & 4194303;
		des[4+j] |= (src[8+j] << 18) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 4) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 26) & 4194303;
		des[12+j] |= (src[12+j] << 6) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 16) & 4194303;
		des[16+j] |= (src[16+j] << 16) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 6) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 28) & 4194303;
		des[24+j] |= (src[20+j] << 4) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 18) & 4194303;
		des[28+j] |= (src[24+j] << 14) & 4194303;
	}
}

template<typename T>
void KAFOR_unpack_8len_23bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 23) & 8388607;
		des[4+j] |= (src[4+j] << 9) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 14) & 8388607;
		des[8+j] |= (src[8+j] << 18) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 5) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 28) & 8388607;
		des[16+j] |= (src[12+j] << 4) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 19) & 8388607;
		des[20+j] |= (src[16+j] << 13) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 10) & 8388607;
		des[24+j] |= (src[20+j] << 22) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 1) & 8388607;
	}
}

template<typename T>
void KAFOR_unpack_8len_23bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 31) & 8388607;
		des[4+j] |= (src[4+j] << 1) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 22) & 8388607;
		des[8+j] |= (src[8+j] << 10) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 13) & 8388607;
		des[12+j] |= (src[12+j] << 19) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 4) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 27) & 8388607;
		des[20+j] |= (src[16+j] << 5) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 18) & 8388607;
		des[24+j] |= (src[20+j] << 14) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 9) & 8388607;
	}
}

template<typename T>
void KAFOR_unpack_8len_23bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 8388607;
		des[j] |= (src[4+j] << 16) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 7) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 30) & 8388607;
		des[8+j] |= (src[8+j] << 2) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 21) & 8388607;
		des[12+j] |= (src[12+j] << 11) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 12) & 8388607;
		des[16+j] |= (src[16+j] << 20) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 3) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 26) & 8388607;
		des[24+j] |= (src[20+j] << 6) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 17) & 8388607;
		des[28+j] |= (src[24+j] << 15) & 8388607;
	}
}

template<typename T>
void KAFOR_unpack_8len_23bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 8388607;
		des[j] |= (src[4+j] << 8) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 15) & 8388607;
		des[4+j] |= (src[8+j] << 17) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 6) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 29) & 8388607;
		des[12+j] |= (src[12+j] << 3) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 20) & 8388607;
		des[16+j] |= (src[16+j] << 12) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 11) & 8388607;
		des[20+j] |= (src[20+j] << 21) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 2) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 25) & 8388607;
		des[28+j] |= (src[24+j] << 7) & 8388607;
	}
}

template<typename T>
void KAFOR_unpack_8len_24bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 24) & 16777215;
		des[4+j] |= (src[4+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 16) & 16777215;
		des[8+j] |= (src[8+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 24) & 16777215;
		des[20+j] |= (src[16+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 16) & 16777215;
		des[24+j] |= (src[20+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 8) & 16777215;
	}
}

template<typename T>
void KAFOR_unpack_8len_24bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 24) & 16777215;
		des[8+j] |= (src[8+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 16) & 16777215;
		des[12+j] |= (src[12+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 24) & 16777215;
		des[24+j] |= (src[20+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 16) & 16777215;
		des[28+j] |= (src[24+j] << 16) & 16777215;
	}
}

template<typename T>
void KAFOR_unpack_8len_24bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 16777215;
		des[j] |= (src[4+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 24) & 16777215;
		des[12+j] |= (src[12+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 16) & 16777215;
		des[16+j] |= (src[16+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 24) & 16777215;
		des[28+j] |= (src[24+j] << 8) & 16777215;
	}
}

template<typename T>
void KAFOR_unpack_8len_24bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 16777215;
		des[j] |= (src[4+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 16) & 16777215;
		des[4+j] |= (src[8+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 24) & 16777215;
		des[16+j] |= (src[16+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 16) & 16777215;
		des[20+j] |= (src[20+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j]) & 16777215;
	}
}

template<typename T>
void KAFOR_unpack_8len_25bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 25) & 33554431;
		des[4+j] |= (src[4+j] << 7) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 18) & 33554431;
		des[8+j] |= (src[8+j] << 14) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 11) & 33554431;
		des[12+j] |= (src[12+j] << 21) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 4) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 29) & 33554431;
		des[20+j] |= (src[16+j] << 3) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 22) & 33554431;
		des[24+j] |= (src[20+j] << 10) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 15) & 33554431;
		des[28+j] |= (src[24+j] << 17) & 33554431;
	}
}

template<typename T>
void KAFOR_unpack_8len_25bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 33554431;
		des[j] |= (src[4+j] << 24) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 1) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 26) & 33554431;
		des[8+j] |= (src[8+j] << 6) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 19) & 33554431;
		des[12+j] |= (src[12+j] << 13) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 12) & 33554431;
		des[16+j] |= (src[16+j] << 20) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 5) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 30) & 33554431;
		des[24+j] |= (src[20+j] << 2) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 23) & 33554431;
		des[28+j] |= (src[24+j] << 9) & 33554431;
	}
}

template<typename T>
void KAFOR_unpack_8len_25bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 33554431;
		des[j] |= (src[4+j] << 16) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 9) & 33554431;
		des[4+j] |= (src[8+j] << 23) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 2) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 27) & 33554431;
		des[12+j] |= (src[12+j] << 5) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 20) & 33554431;
		des[16+j] |= (src[16+j] << 12) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 13) & 33554431;
		des[20+j] |= (src[20+j] << 19) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 6) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 31) & 33554431;
		des[28+j] |= (src[24+j] << 1) & 33554431;
	}
}

template<typename T>
void KAFOR_unpack_8len_25bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 33554431;
		des[j] |= (src[4+j] << 8) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 17) & 33554431;
		des[4+j] |= (src[8+j] << 15) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 10) & 33554431;
		des[8+j] |= (src[12+j] << 22) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 3) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 28) & 33554431;
		des[16+j] |= (src[16+j] << 4) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 21) & 33554431;
		des[20+j] |= (src[20+j] << 11) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 14) & 33554431;
		des[24+j] |= (src[24+j] << 18) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j] >> 7) & 33554431;
	}
}

template<typename T>
void KAFOR_unpack_8len_26bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 26) & 67108863;
		des[4+j] |= (src[4+j] << 6) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 20) & 67108863;
		des[8+j] |= (src[8+j] << 12) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 14) & 67108863;
		des[12+j] |= (src[12+j] << 18) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 8) & 67108863;
		des[16+j] |= (src[16+j] << 24) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 2) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 28) & 67108863;
		des[24+j] |= (src[20+j] << 4) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 22) & 67108863;
		des[28+j] |= (src[24+j] << 10) & 67108863;
	}
}

template<typename T>
void KAFOR_unpack_8len_26bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 67108863;
		des[j] |= (src[4+j] << 24) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 2) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 28) & 67108863;
		des[8+j] |= (src[8+j] << 4) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 22) & 67108863;
		des[12+j] |= (src[12+j] << 10) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 16) & 67108863;
		des[16+j] |= (src[16+j] << 16) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 10) & 67108863;
		des[20+j] |= (src[20+j] << 22) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 4) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 30) & 67108863;
		des[28+j] |= (src[24+j] << 2) & 67108863;
	}
}

template<typename T>
void KAFOR_unpack_8len_26bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 67108863;
		des[j] |= (src[4+j] << 16) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 10) & 67108863;
		des[4+j] |= (src[8+j] << 22) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 4) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 30) & 67108863;
		des[12+j] |= (src[12+j] << 2) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 24) & 67108863;
		des[16+j] |= (src[16+j] << 8) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 18) & 67108863;
		des[20+j] |= (src[20+j] << 14) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 12) & 67108863;
		des[24+j] |= (src[24+j] << 20) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j] >> 6) & 67108863;
	}
}

template<typename T>
void KAFOR_unpack_8len_26bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 67108863;
		des[j] |= (src[4+j] << 8) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 18) & 67108863;
		des[4+j] |= (src[8+j] << 14) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 12) & 67108863;
		des[8+j] |= (src[12+j] << 20) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 6) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j]) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 26) & 67108863;
		des[20+j] |= (src[20+j] << 6) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 20) & 67108863;
		des[24+j] |= (src[24+j] << 12) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j] >> 14) & 67108863;
		des[28+j] |= (src[28+j] << 18) & 67108863;
	}
}

template<typename T>
void KAFOR_unpack_8len_27bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 27) & 134217727;
		des[4+j] |= (src[4+j] << 5) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 22) & 134217727;
		des[8+j] |= (src[8+j] << 10) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 17) & 134217727;
		des[12+j] |= (src[12+j] << 15) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 12) & 134217727;
		des[16+j] |= (src[16+j] << 20) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 7) & 134217727;
		des[20+j] |= (src[20+j] << 25) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 2) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 29) & 134217727;
		des[28+j] |= (src[24+j] << 3) & 134217727;
	}
}

template<typename T>
void KAFOR_unpack_8len_27bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 134217727;
		des[j] |= (src[4+j] << 24) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 3) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 30) & 134217727;
		des[8+j] |= (src[8+j] << 2) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 25) & 134217727;
		des[12+j] |= (src[12+j] << 7) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 20) & 134217727;
		des[16+j] |= (src[16+j] << 12) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 15) & 134217727;
		des[20+j] |= (src[20+j] << 17) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 10) & 134217727;
		des[24+j] |= (src[24+j] << 22) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j] >> 5) & 134217727;
	}
}

template<typename T>
void KAFOR_unpack_8len_27bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 134217727;
		des[j] |= (src[4+j] << 16) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 11) & 134217727;
		des[4+j] |= (src[8+j] << 21) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 6) & 134217727;
		des[8+j] |= (src[12+j] << 26) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 1) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 28) & 134217727;
		des[16+j] |= (src[16+j] << 4) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 23) & 134217727;
		des[20+j] |= (src[20+j] << 9) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 18) & 134217727;
		des[24+j] |= (src[24+j] << 14) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j] >> 13) & 134217727;
		des[28+j] |= (src[28+j] << 19) & 134217727;
	}
}

template<typename T>
void KAFOR_unpack_8len_27bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 134217727;
		des[j] |= (src[4+j] << 8) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 19) & 134217727;
		des[4+j] |= (src[8+j] << 13) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 14) & 134217727;
		des[8+j] |= (src[12+j] << 18) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 9) & 134217727;
		des[12+j] |= (src[16+j] << 23) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j] >> 4) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 31) & 134217727;
		des[20+j] |= (src[20+j] << 1) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 26) & 134217727;
		des[24+j] |= (src[24+j] << 6) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j] >> 21) & 134217727;
		des[28+j] |= (src[28+j] << 11) & 134217727;
	}
}

template<typename T>
void KAFOR_unpack_8len_28bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 28) & 268435455;
		des[4+j] |= (src[4+j] << 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 24) & 268435455;
		des[8+j] |= (src[8+j] << 8) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 20) & 268435455;
		des[12+j] |= (src[12+j] << 12) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 16) & 268435455;
		des[16+j] |= (src[16+j] << 16) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 12) & 268435455;
		des[20+j] |= (src[20+j] << 20) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 8) & 268435455;
		des[24+j] |= (src[24+j] << 24) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j] >> 4) & 268435455;
	}
}

template<typename T>
void KAFOR_unpack_8len_28bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 268435455;
		des[j] |= (src[4+j] << 24) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j]) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 28) & 268435455;
		des[12+j] |= (src[12+j] << 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 24) & 268435455;
		des[16+j] |= (src[16+j] << 8) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 20) & 268435455;
		des[20+j] |= (src[20+j] << 12) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 16) & 268435455;
		des[24+j] |= (src[24+j] << 16) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j] >> 12) & 268435455;
		des[28+j] |= (src[28+j] << 20) & 268435455;
	}
}

template<typename T>
void KAFOR_unpack_8len_28bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 268435455;
		des[j] |= (src[4+j] << 16) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 12) & 268435455;
		des[4+j] |= (src[8+j] << 20) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 8) & 268435455;
		des[8+j] |= (src[12+j] << 24) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j]) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 28) & 268435455;
		des[20+j] |= (src[20+j] << 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 24) & 268435455;
		des[24+j] |= (src[24+j] << 8) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j] >> 20) & 268435455;
		des[28+j] |= (src[28+j] << 12) & 268435455;
	}
}

template<typename T>
void KAFOR_unpack_8len_28bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 268435455;
		des[j] |= (src[4+j] << 8) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 20) & 268435455;
		des[4+j] |= (src[8+j] << 12) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 16) & 268435455;
		des[8+j] |= (src[12+j] << 16) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 12) & 268435455;
		des[12+j] |= (src[16+j] << 20) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j] >> 8) & 268435455;
		des[16+j] |= (src[20+j] << 24) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[20+j] >> 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[24+j]) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j] >> 28) & 268435455;
		des[28+j] |= (src[28+j] << 4) & 268435455;
	}
}

template<typename T>
void KAFOR_unpack_8len_29bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 29) & 536870911;
		des[4+j] |= (src[4+j] << 3) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 26) & 536870911;
		des[8+j] |= (src[8+j] << 6) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 23) & 536870911;
		des[12+j] |= (src[12+j] << 9) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 20) & 536870911;
		des[16+j] |= (src[16+j] << 12) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 17) & 536870911;
		des[20+j] |= (src[20+j] << 15) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 14) & 536870911;
		des[24+j] |= (src[24+j] << 18) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j] >> 11) & 536870911;
		des[28+j] |= (src[28+j] << 21) & 536870911;
	}
}

template<typename T>
void KAFOR_unpack_8len_29bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 536870911;
		des[j] |= (src[4+j] << 24) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 5) & 536870911;
		des[4+j] |= (src[8+j] << 27) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 2) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 31) & 536870911;
		des[12+j] |= (src[12+j] << 1) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 28) & 536870911;
		des[16+j] |= (src[16+j] << 4) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 25) & 536870911;
		des[20+j] |= (src[20+j] << 7) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 22) & 536870911;
		des[24+j] |= (src[24+j] << 10) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j] >> 19) & 536870911;
		des[28+j] |= (src[28+j] << 13) & 536870911;
	}
}

template<typename T>
void KAFOR_unpack_8len_29bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 536870911;
		des[j] |= (src[4+j] << 16) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 13) & 536870911;
		des[4+j] |= (src[8+j] << 19) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 10) & 536870911;
		des[8+j] |= (src[12+j] << 22) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 7) & 536870911;
		des[12+j] |= (src[16+j] << 25) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j] >> 4) & 536870911;
		des[16+j] |= (src[20+j] << 28) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[20+j] >> 1) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 30) & 536870911;
		des[24+j] |= (src[24+j] << 2) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j] >> 27) & 536870911;
		des[28+j] |= (src[28+j] << 5) & 536870911;
	}
}

template<typename T>
void KAFOR_unpack_8len_29bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 536870911;
		des[j] |= (src[4+j] << 8) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 21) & 536870911;
		des[4+j] |= (src[8+j] << 11) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 18) & 536870911;
		des[8+j] |= (src[12+j] << 14) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 15) & 536870911;
		des[12+j] |= (src[16+j] << 17) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j] >> 12) & 536870911;
		des[16+j] |= (src[20+j] << 20) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[20+j] >> 9) & 536870911;
		des[20+j] |= (src[24+j] << 23) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[24+j] >> 6) & 536870911;
		des[24+j] |= (src[28+j] << 26) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[28+j] >> 3) & 536870911;
	}
}

template<typename T>
void KAFOR_unpack_8len_30bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 30) & 1073741823;
		des[4+j] |= (src[4+j] << 2) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 28) & 1073741823;
		des[8+j] |= (src[8+j] << 4) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 26) & 1073741823;
		des[12+j] |= (src[12+j] << 6) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 24) & 1073741823;
		des[16+j] |= (src[16+j] << 8) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 22) & 1073741823;
		des[20+j] |= (src[20+j] << 10) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 20) & 1073741823;
		des[24+j] |= (src[24+j] << 12) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j] >> 18) & 1073741823;
		des[28+j] |= (src[28+j] << 14) & 1073741823;
	}
}

template<typename T>
void KAFOR_unpack_8len_30bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 1073741823;
		des[j] |= (src[4+j] << 24) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 6) & 1073741823;
		des[4+j] |= (src[8+j] << 26) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 4) & 1073741823;
		des[8+j] |= (src[12+j] << 28) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 2) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j]) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 30) & 1073741823;
		des[20+j] |= (src[20+j] << 2) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 28) & 1073741823;
		des[24+j] |= (src[24+j] << 4) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j] >> 26) & 1073741823;
		des[28+j] |= (src[28+j] << 6) & 1073741823;
	}
}

template<typename T>
void KAFOR_unpack_8len_30bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 1073741823;
		des[j] |= (src[4+j] << 16) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 14) & 1073741823;
		des[4+j] |= (src[8+j] << 18) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 12) & 1073741823;
		des[8+j] |= (src[12+j] << 20) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 10) & 1073741823;
		des[12+j] |= (src[16+j] << 22) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j] >> 8) & 1073741823;
		des[16+j] |= (src[20+j] << 24) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[20+j] >> 6) & 1073741823;
		des[20+j] |= (src[24+j] << 26) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[24+j] >> 4) & 1073741823;
		des[24+j] |= (src[28+j] << 28) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[28+j] >> 2) & 1073741823;
	}
}

template<typename T>
void KAFOR_unpack_8len_30bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 1073741823;
		des[j] |= (src[4+j] << 8) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 22) & 1073741823;
		des[4+j] |= (src[8+j] << 10) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 20) & 1073741823;
		des[8+j] |= (src[12+j] << 12) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 18) & 1073741823;
		des[12+j] |= (src[16+j] << 14) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j] >> 16) & 1073741823;
		des[16+j] |= (src[20+j] << 16) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[20+j] >> 14) & 1073741823;
		des[20+j] |= (src[24+j] << 18) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[24+j] >> 12) & 1073741823;
		des[24+j] |= (src[28+j] << 20) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[28+j] >> 10) & 1073741823;
		des[28+j] |= (src[32+j] << 22) & 1073741823;
	}
}

template<typename T>
void KAFOR_unpack_8len_31bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 31) & 2147483647;
		des[4+j] |= (src[4+j] << 1) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 30) & 2147483647;
		des[8+j] |= (src[8+j] << 2) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 29) & 2147483647;
		des[12+j] |= (src[12+j] << 3) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 28) & 2147483647;
		des[16+j] |= (src[16+j] << 4) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 27) & 2147483647;
		des[20+j] |= (src[20+j] << 5) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 26) & 2147483647;
		des[24+j] |= (src[24+j] << 6) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j] >> 25) & 2147483647;
		des[28+j] |= (src[28+j] << 7) & 2147483647;
	}
}

template<typename T>
void KAFOR_unpack_8len_31bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 2147483647;
		des[j] |= (src[4+j] << 24) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 7) & 2147483647;
		des[4+j] |= (src[8+j] << 25) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 6) & 2147483647;
		des[8+j] |= (src[12+j] << 26) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 5) & 2147483647;
		des[12+j] |= (src[16+j] << 27) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j] >> 4) & 2147483647;
		des[16+j] |= (src[20+j] << 28) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[20+j] >> 3) & 2147483647;
		des[20+j] |= (src[24+j] << 29) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[24+j] >> 2) & 2147483647;
		des[24+j] |= (src[28+j] << 30) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[28+j] >> 1) & 2147483647;
	}
}

template<typename T>
void KAFOR_unpack_8len_31bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 2147483647;
		des[j] |= (src[4+j] << 16) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 15) & 2147483647;
		des[4+j] |= (src[8+j] << 17) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 14) & 2147483647;
		des[8+j] |= (src[12+j] << 18) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 13) & 2147483647;
		des[12+j] |= (src[16+j] << 19) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j] >> 12) & 2147483647;
		des[16+j] |= (src[20+j] << 20) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[20+j] >> 11) & 2147483647;
		des[20+j] |= (src[24+j] << 21) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[24+j] >> 10) & 2147483647;
		des[24+j] |= (src[28+j] << 22) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[28+j] >> 9) & 2147483647;
		des[28+j] |= (src[32+j] << 23) & 2147483647;
	}
}

template<typename T>
void KAFOR_unpack_8len_31bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 2147483647;
		des[j] |= (src[4+j] << 8) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 23) & 2147483647;
		des[4+j] |= (src[8+j] << 9) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 22) & 2147483647;
		des[8+j] |= (src[12+j] << 10) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 21) & 2147483647;
		des[12+j] |= (src[16+j] << 11) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j] >> 20) & 2147483647;
		des[16+j] |= (src[20+j] << 12) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[20+j] >> 19) & 2147483647;
		des[20+j] |= (src[24+j] << 13) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[24+j] >> 18) & 2147483647;
		des[24+j] |= (src[28+j] << 14) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[28+j] >> 17) & 2147483647;
		des[28+j] |= (src[32+j] << 15) & 2147483647;
	}
}

template<typename T>
void KAFOR_unpack_8len_32bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j]);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j]);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j]);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j]);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[20+j]);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[24+j]);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[28+j]);
	}
}

template<typename T>
void KAFOR_unpack_8len_32bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8);
		des[j] |= (src[4+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 8);
		des[4+j] |= (src[8+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 8);
		des[8+j] |= (src[12+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 8);
		des[12+j] |= (src[16+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j] >> 8);
		des[16+j] |= (src[20+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[20+j] >> 8);
		des[20+j] |= (src[24+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[24+j] >> 8);
		des[24+j] |= (src[28+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[28+j] >> 8);
		des[28+j] |= (src[32+j] << 24);
	}
}

template<typename T>
void KAFOR_unpack_8len_32bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16);
		des[j] |= (src[4+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 16);
		des[4+j] |= (src[8+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 16);
		des[8+j] |= (src[12+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 16);
		des[12+j] |= (src[16+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j] >> 16);
		des[16+j] |= (src[20+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[20+j] >> 16);
		des[20+j] |= (src[24+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[24+j] >> 16);
		des[24+j] |= (src[28+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[28+j] >> 16);
		des[28+j] |= (src[32+j] << 16);
	}
}

template<typename T>
void KAFOR_unpack_8len_32bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24);
		des[j] |= (src[4+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 24);
		des[4+j] |= (src[8+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 24);
		des[8+j] |= (src[12+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 24);
		des[12+j] |= (src[16+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j] >> 24);
		des[16+j] |= (src[20+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[20+j] >> 24);
		des[20+j] |= (src[24+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[24+j] >> 24);
		des[24+j] |= (src[28+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[28+j] >> 24);
		des[28+j] |= (src[32+j] << 8);
	}
}

template<typename T>
void KAFOR_unpack_16len_1bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 1) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 2) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 3) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 4) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 5) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 6) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 7) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[j] >> 8) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[j] >> 9) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[j] >> 10) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[j] >> 11) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[j] >> 12) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[j] >> 13) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[j] >> 14) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[j] >> 15) & 1;
	}
}

template<typename T>
void KAFOR_unpack_16len_1bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 9) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 10) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 11) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 12) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 13) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 14) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 15) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[j] >> 16) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[j] >> 17) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[j] >> 18) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[j] >> 19) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[j] >> 20) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[j] >> 21) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[j] >> 22) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[j] >> 23) & 1;
	}
}

template<typename T>
void KAFOR_unpack_16len_1bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 17) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 18) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 19) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 20) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 21) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 22) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 23) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[j] >> 24) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[j] >> 25) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[j] >> 26) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[j] >> 27) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[j] >> 28) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[j] >> 29) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[j] >> 30) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[j] >> 31) & 1;
	}
}

template<typename T>
void KAFOR_unpack_16len_1bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 25) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 26) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 27) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 28) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 29) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 30) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 31) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j]) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 1) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 2) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 3) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 4) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 5) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[4+j] >> 6) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[4+j] >> 7) & 1;
	}
}

template<typename T>
void KAFOR_unpack_16len_2bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 2) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 4) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 6) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 8) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 10) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 12) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 14) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[j] >> 16) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[j] >> 18) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[j] >> 20) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[j] >> 22) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[j] >> 24) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[j] >> 26) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[j] >> 28) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[j] >> 30) & 3;
	}
}

template<typename T>
void KAFOR_unpack_16len_2bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 10) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 12) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 14) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 16) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 18) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 20) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 22) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[j] >> 24) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[j] >> 26) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[j] >> 28) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[j] >> 30) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j]) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 2) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[4+j] >> 4) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[4+j] >> 6) & 3;
	}
}

template<typename T>
void KAFOR_unpack_16len_2bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 18) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 20) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 22) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 24) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 26) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 28) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 30) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j]) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 2) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 4) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 6) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 8) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 10) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[4+j] >> 12) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[4+j] >> 14) & 3;
	}
}

template<typename T>
void KAFOR_unpack_16len_2bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 26) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 28) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 30) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j]) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 2) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 4) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 6) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 8) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 10) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 12) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 14) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 16) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 18) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[4+j] >> 20) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[4+j] >> 22) & 3;
	}
}

template<typename T>
void KAFOR_unpack_16len_3bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 3) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 6) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 9) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 12) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 15) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 18) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 21) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[j] >> 24) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[j] >> 27) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[j] >> 30) & 7;
		des[40+j] |= (src[4+j] << 2) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 1) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 4) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 7) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[4+j] >> 10) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[4+j] >> 13) & 7;
	}
}

template<typename T>
void KAFOR_unpack_16len_3bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 11) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 14) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 17) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 20) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 23) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 26) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 29) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j]) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 3) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 6) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 9) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 12) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 15) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[4+j] >> 18) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[4+j] >> 21) & 7;
	}
}

template<typename T>
void KAFOR_unpack_16len_3bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 19) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 22) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 25) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 28) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 31) & 7;
		des[20+j] |= (src[4+j] << 1) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 2) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 5) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 8) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 11) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 14) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 17) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 20) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 23) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[4+j] >> 26) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[4+j] >> 29) & 7;
	}
}

template<typename T>
void KAFOR_unpack_16len_3bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 27) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 30) & 7;
		des[8+j] |= (src[4+j] << 2) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 1) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 4) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 7) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 10) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 13) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 16) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 19) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 22) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 25) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 28) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 31) & 7;
		des[52+j] |= (src[8+j] << 1) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j] >> 2) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[8+j] >> 5) & 7;
	}
}

template<typename T>
void KAFOR_unpack_16len_4bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 4) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 8) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 12) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 16) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 20) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 24) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 28) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j]) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 4) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 8) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 12) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 16) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 20) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[4+j] >> 24) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[4+j] >> 28) & 15;
	}
}

template<typename T>
void KAFOR_unpack_16len_4bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 12) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 16) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 20) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 24) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 28) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j]) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 4) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 8) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 12) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 16) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 20) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 24) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 28) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j]) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[8+j] >> 4) & 15;
	}
}

template<typename T>
void KAFOR_unpack_16len_4bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 20) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 24) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 28) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j]) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 4) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 8) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 12) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 16) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 20) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 24) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 28) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j]) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 4) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j] >> 8) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[8+j] >> 12) & 15;
	}
}

template<typename T>
void KAFOR_unpack_16len_4bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 28) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j]) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 4) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 8) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 12) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 16) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 20) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 24) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 28) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j]) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 4) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j] >> 8) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 12) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j] >> 16) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[8+j] >> 20) & 15;
	}
}

template<typename T>
void KAFOR_unpack_16len_5bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 5) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 10) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 15) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 20) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 25) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 30) & 31;
		des[24+j] |= (src[4+j] << 2) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 3) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 8) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 13) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 18) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 23) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 28) & 31;
		des[48+j] |= (src[8+j] << 4) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 1) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j] >> 6) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[8+j] >> 11) & 31;
	}
}

template<typename T>
void KAFOR_unpack_16len_5bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 13) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 18) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 23) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 28) & 31;
		des[16+j] |= (src[4+j] << 4) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 1) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 6) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 11) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 16) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 21) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 26) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 31) & 31;
		des[44+j] |= (src[8+j] << 1) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j] >> 4) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 9) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j] >> 14) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[8+j] >> 19) & 31;
	}
}

template<typename T>
void KAFOR_unpack_16len_5bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 21) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 26) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 31) & 31;
		des[12+j] |= (src[4+j] << 1) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 4) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 9) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 14) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 19) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 24) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 29) & 31;
		des[36+j] |= (src[8+j] << 3) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 2) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 7) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j] >> 12) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 17) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j] >> 22) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[8+j] >> 27) & 31;
	}
}

template<typename T>
void KAFOR_unpack_16len_5bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 29) & 31;
		des[4+j] |= (src[4+j] << 3) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 2) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 7) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 12) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 17) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 22) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 27) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j]) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 5) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 10) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 15) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j] >> 20) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 25) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j] >> 30) & 31;
		des[56+j] |= (src[12+j] << 2) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[12+j] >> 3) & 31;
	}
}

template<typename T>
void KAFOR_unpack_16len_6bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 6) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 12) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 18) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 24) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 30) & 63;
		des[20+j] |= (src[4+j] << 2) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 4) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 10) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 16) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 22) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 28) & 63;
		des[40+j] |= (src[8+j] << 4) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 2) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j] >> 8) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 14) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j] >> 20) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[8+j] >> 26) & 63;
	}
}

template<typename T>
void KAFOR_unpack_16len_6bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 14) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 20) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 26) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j]) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 6) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 12) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 18) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 24) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 30) & 63;
		des[36+j] |= (src[8+j] << 2) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 4) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 10) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j] >> 16) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 22) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j] >> 28) & 63;
		des[56+j] |= (src[12+j] << 4) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[12+j] >> 2) & 63;
	}
}

template<typename T>
void KAFOR_unpack_16len_6bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 22) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 28) & 63;
		des[8+j] |= (src[4+j] << 4) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 2) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 8) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 14) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 20) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 26) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j]) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 6) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 12) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 18) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j] >> 24) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 30) & 63;
		des[52+j] |= (src[12+j] << 2) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[12+j] >> 4) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[12+j] >> 10) & 63;
	}
}

template<typename T>
void KAFOR_unpack_16len_6bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 30) & 63;
		des[4+j] |= (src[4+j] << 2) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 4) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 10) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 16) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 22) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 28) & 63;
		des[24+j] |= (src[8+j] << 4) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 2) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 8) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 14) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 20) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 26) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j]) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[12+j] >> 6) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[12+j] >> 12) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[12+j] >> 18) & 63;
	}
}

template<typename T>
void KAFOR_unpack_16len_7bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 7) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 14) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 21) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 28) & 127;
		des[16+j] |= (src[4+j] << 4) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 3) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 10) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 17) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 24) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 31) & 127;
		des[36+j] |= (src[8+j] << 1) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 6) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 13) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j] >> 20) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 27) & 127;
		des[52+j] |= (src[12+j] << 5) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[12+j] >> 2) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[12+j] >> 9) & 127;
	}
}

template<typename T>
void KAFOR_unpack_16len_7bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 15) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 22) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 29) & 127;
		des[12+j] |= (src[4+j] << 3) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 4) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 11) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 18) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 25) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j]) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 7) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 14) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 21) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j] >> 28) & 127;
		des[48+j] |= (src[12+j] << 4) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[12+j] >> 3) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[12+j] >> 10) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[12+j] >> 17) & 127;
	}
}

template<typename T>
void KAFOR_unpack_16len_7bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 23) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 30) & 127;
		des[8+j] |= (src[4+j] << 2) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 5) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 12) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 19) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 26) & 127;
		des[24+j] |= (src[8+j] << 6) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 1) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 8) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 15) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 22) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 29) & 127;
		des[44+j] |= (src[12+j] << 3) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j] >> 4) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[12+j] >> 11) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[12+j] >> 18) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[12+j] >> 25) & 127;
	}
}

template<typename T>
void KAFOR_unpack_16len_7bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 31) & 127;
		des[4+j] |= (src[4+j] << 1) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 6) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 13) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 20) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 27) & 127;
		des[20+j] |= (src[8+j] << 5) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 2) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 9) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 16) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 23) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 30) & 127;
		des[40+j] |= (src[12+j] << 2) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 5) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j] >> 12) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[12+j] >> 19) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[12+j] >> 26) & 127;
		des[56+j] |= (src[16+j] << 6) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j] >> 1) & 127;
	}
}

template<typename T>
void KAFOR_unpack_16len_8bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[12+j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[12+j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[12+j] >> 24) & 255;
	}
}

template<typename T>
void KAFOR_unpack_16len_8bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[12+j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[12+j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j]) & 255;
	}
}

template<typename T>
void KAFOR_unpack_16len_8bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[12+j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[16+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j] >> 8) & 255;
	}
}

template<typename T>
void KAFOR_unpack_16len_8bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[16+j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j] >> 16) & 255;
	}
}

template<typename T>
void KAFOR_unpack_16len_9bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 9) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 18) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 27) & 511;
		des[12+j] |= (src[4+j] << 5) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 4) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 13) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 22) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 31) & 511;
		des[28+j] |= (src[8+j] << 1) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 8) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 17) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 26) & 511;
		des[40+j] |= (src[12+j] << 6) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 3) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j] >> 12) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[12+j] >> 21) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[12+j] >> 30) & 511;
		des[56+j] |= (src[16+j] << 2) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j] >> 7) & 511;
	}
}

template<typename T>
void KAFOR_unpack_16len_9bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 17) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 26) & 511;
		des[8+j] |= (src[4+j] << 6) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 3) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 12) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 21) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 30) & 511;
		des[24+j] |= (src[8+j] << 2) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 7) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 16) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 25) & 511;
		des[36+j] |= (src[12+j] << 7) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 2) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 11) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j] >> 20) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[12+j] >> 29) & 511;
		des[52+j] |= (src[16+j] << 3) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[16+j] >> 6) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j] >> 15) & 511;
	}
}

template<typename T>
void KAFOR_unpack_16len_9bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 25) & 511;
		des[4+j] |= (src[4+j] << 7) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 2) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 11) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 20) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 29) & 511;
		des[20+j] |= (src[8+j] << 3) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 6) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 15) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 24) & 511;
		des[32+j] |= (src[12+j] << 8) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 1) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 10) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 19) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j] >> 28) & 511;
		des[48+j] |= (src[16+j] << 4) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 5) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[16+j] >> 14) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j] >> 23) & 511;
	}
}

template<typename T>
void KAFOR_unpack_16len_9bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 511;
		des[j] |= (src[4+j] << 8) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 1) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 10) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 19) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 28) & 511;
		des[16+j] |= (src[8+j] << 4) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 5) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 14) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 23) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j]) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 9) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 18) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 27) & 511;
		des[44+j] |= (src[16+j] << 5) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j] >> 4) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 13) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[16+j] >> 22) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j] >> 31) & 511;
		des[60+j] |= (src[20+j] << 1) & 511;
	}
}

template<typename T>
void KAFOR_unpack_16len_10bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 10) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 20) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 30) & 1023;
		des[12+j] |= (src[4+j] << 2) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 8) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 18) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 28) & 1023;
		des[24+j] |= (src[8+j] << 4) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 6) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 16) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 26) & 1023;
		des[36+j] |= (src[12+j] << 6) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 4) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 14) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j] >> 24) & 1023;
		des[48+j] |= (src[16+j] << 8) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 2) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[16+j] >> 12) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j] >> 22) & 1023;
	}
}

template<typename T>
void KAFOR_unpack_16len_10bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 18) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 28) & 1023;
		des[8+j] |= (src[4+j] << 4) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 6) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 16) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 26) & 1023;
		des[20+j] |= (src[8+j] << 6) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 4) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 14) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 24) & 1023;
		des[32+j] |= (src[12+j] << 8) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 2) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 12) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 22) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j]) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 10) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[16+j] >> 20) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j] >> 30) & 1023;
		des[60+j] |= (src[20+j] << 2) & 1023;
	}
}

template<typename T>
void KAFOR_unpack_16len_10bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 26) & 1023;
		des[4+j] |= (src[4+j] << 6) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 4) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 14) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 24) & 1023;
		des[16+j] |= (src[8+j] << 8) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 2) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 12) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 22) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j]) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 10) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 20) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 30) & 1023;
		des[44+j] |= (src[16+j] << 2) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j] >> 8) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 18) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[16+j] >> 28) & 1023;
		des[56+j] |= (src[20+j] << 4) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[20+j] >> 6) & 1023;
	}
}

template<typename T>
void KAFOR_unpack_16len_10bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 1023;
		des[j] |= (src[4+j] << 8) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 2) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 12) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 22) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j]) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 10) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 20) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 30) & 1023;
		des[28+j] |= (src[12+j] << 2) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j] >> 8) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 18) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 28) & 1023;
		des[40+j] |= (src[16+j] << 4) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 6) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j] >> 16) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 26) & 1023;
		des[52+j] |= (src[20+j] << 6) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[20+j] >> 4) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[20+j] >> 14) & 1023;
	}
}

template<typename T>
void KAFOR_unpack_16len_11bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 11) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 22) & 2047;
		des[8+j] |= (src[4+j] << 10) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 1) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 12) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 23) & 2047;
		des[20+j] |= (src[8+j] << 9) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 2) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 13) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 24) & 2047;
		des[32+j] |= (src[12+j] << 8) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 3) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 14) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 25) & 2047;
		des[44+j] |= (src[16+j] << 7) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j] >> 4) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 15) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[16+j] >> 26) & 2047;
		des[56+j] |= (src[20+j] << 6) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[20+j] >> 5) & 2047;
	}
}

template<typename T>
void KAFOR_unpack_16len_11bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 19) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 30) & 2047;
		des[8+j] |= (src[4+j] << 2) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 9) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 20) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 31) & 2047;
		des[20+j] |= (src[8+j] << 1) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 10) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 21) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j]) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 11) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 22) & 2047;
		des[40+j] |= (src[16+j] << 10) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 1) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j] >> 12) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 23) & 2047;
		des[52+j] |= (src[20+j] << 9) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[20+j] >> 2) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[20+j] >> 13) & 2047;
	}
}

template<typename T>
void KAFOR_unpack_16len_11bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 27) & 2047;
		des[4+j] |= (src[4+j] << 5) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 6) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 17) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 28) & 2047;
		des[16+j] |= (src[8+j] << 4) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 7) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 18) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 29) & 2047;
		des[28+j] |= (src[12+j] << 3) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j] >> 8) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 19) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 30) & 2047;
		des[40+j] |= (src[16+j] << 2) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 9) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j] >> 20) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 31) & 2047;
		des[52+j] |= (src[20+j] << 1) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[20+j] >> 10) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[20+j] >> 21) & 2047;
	}
}

template<typename T>
void KAFOR_unpack_16len_11bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 2047;
		des[j] |= (src[4+j] << 8) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 3) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 14) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 25) & 2047;
		des[12+j] |= (src[8+j] << 7) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 4) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 15) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 26) & 2047;
		des[24+j] |= (src[12+j] << 6) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 5) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j] >> 16) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 27) & 2047;
		des[36+j] |= (src[16+j] << 5) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[16+j] >> 6) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 17) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j] >> 28) & 2047;
		des[48+j] |= (src[20+j] << 4) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[20+j] >> 7) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[20+j] >> 18) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[20+j] >> 29) & 2047;
		des[60+j] |= (src[24+j] << 3) & 2047;
	}
}

template<typename T>
void KAFOR_unpack_16len_12bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 12) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 24) & 4095;
		des[8+j] |= (src[4+j] << 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 16) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 28) & 4095;
		des[20+j] |= (src[8+j] << 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 20) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j]) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 12) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 24) & 4095;
		des[40+j] |= (src[16+j] << 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j] >> 16) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 28) & 4095;
		des[52+j] |= (src[20+j] << 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[20+j] >> 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[20+j] >> 20) & 4095;
	}
}

template<typename T>
void KAFOR_unpack_16len_12bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 20) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j]) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 12) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 24) & 4095;
		des[16+j] |= (src[8+j] << 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 16) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 28) & 4095;
		des[28+j] |= (src[12+j] << 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j] >> 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 20) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[16+j]) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 12) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j] >> 24) & 4095;
		des[48+j] |= (src[20+j] << 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[20+j] >> 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[20+j] >> 16) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[20+j] >> 28) & 4095;
		des[60+j] |= (src[24+j] << 4) & 4095;
	}
}

template<typename T>
void KAFOR_unpack_16len_12bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 28) & 4095;
		des[4+j] |= (src[4+j] << 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 20) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j]) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 12) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 24) & 4095;
		des[24+j] |= (src[12+j] << 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j] >> 16) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 28) & 4095;
		des[36+j] |= (src[16+j] << 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[16+j] >> 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 20) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[20+j]) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[20+j] >> 12) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[20+j] >> 24) & 4095;
		des[56+j] |= (src[24+j] << 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[24+j] >> 4) & 4095;
	}
}

template<typename T>
void KAFOR_unpack_16len_12bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 4095;
		des[j] |= (src[4+j] << 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 16) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 28) & 4095;
		des[12+j] |= (src[8+j] << 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 20) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j]) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 12) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j] >> 24) & 4095;
		des[32+j] |= (src[16+j] << 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[16+j] >> 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[16+j] >> 16) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 28) & 4095;
		des[44+j] |= (src[20+j] << 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[20+j] >> 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[20+j] >> 20) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[24+j]) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[24+j] >> 12) & 4095;
	}
}

template<typename T>
void KAFOR_unpack_16len_13bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 13) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 26) & 8191;
		des[8+j] |= (src[4+j] << 6) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 7) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 20) & 8191;
		des[16+j] |= (src[8+j] << 12) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 1) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 14) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 27) & 8191;
		des[28+j] |= (src[12+j] << 5) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j] >> 8) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 21) & 8191;
		des[36+j] |= (src[16+j] << 11) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[16+j] >> 2) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 15) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j] >> 28) & 8191;
		des[48+j] |= (src[20+j] << 4) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[20+j] >> 9) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[20+j] >> 22) & 8191;
		des[56+j] |= (src[24+j] << 10) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[24+j] >> 3) & 8191;
	}
}

template<typename T>
void KAFOR_unpack_16len_13bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 21) & 8191;
		des[4+j] |= (src[4+j] << 11) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 2) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 15) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 28) & 8191;
		des[16+j] |= (src[8+j] << 4) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 9) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 22) & 8191;
		des[24+j] |= (src[12+j] << 10) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 3) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j] >> 16) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 29) & 8191;
		des[36+j] |= (src[16+j] << 3) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[16+j] >> 10) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 23) & 8191;
		des[44+j] |= (src[20+j] << 9) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[20+j] >> 4) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[20+j] >> 17) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[20+j] >> 30) & 8191;
		des[56+j] |= (src[24+j] << 2) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[24+j] >> 11) & 8191;
	}
}

template<typename T>
void KAFOR_unpack_16len_13bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 29) & 8191;
		des[4+j] |= (src[4+j] << 3) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 10) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 23) & 8191;
		des[12+j] |= (src[8+j] << 9) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 4) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 17) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 30) & 8191;
		des[24+j] |= (src[12+j] << 2) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 11) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j] >> 24) & 8191;
		des[32+j] |= (src[16+j] << 8) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[16+j] >> 5) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[16+j] >> 18) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 31) & 8191;
		des[44+j] |= (src[20+j] << 1) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[20+j] >> 12) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[20+j] >> 25) & 8191;
		des[52+j] |= (src[24+j] << 7) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[24+j] >> 6) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[24+j] >> 19) & 8191;
	}
}

template<typename T>
void KAFOR_unpack_16len_13bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 8191;
		des[j] |= (src[4+j] << 8) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 5) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 18) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 31) & 8191;
		des[12+j] |= (src[8+j] << 1) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 12) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 25) & 8191;
		des[20+j] |= (src[12+j] << 7) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 6) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 19) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[16+j]) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[16+j] >> 13) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[16+j] >> 26) & 8191;
		des[40+j] |= (src[20+j] << 6) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[20+j] >> 7) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[20+j] >> 20) & 8191;
		des[48+j] |= (src[24+j] << 12) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[24+j] >> 1) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[24+j] >> 14) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[24+j] >> 27) & 8191;
		des[60+j] |= (src[28+j] << 5) & 8191;
	}
}

template<typename T>
void KAFOR_unpack_16len_14bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 14) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 28) & 16383;
		des[8+j] |= (src[4+j] << 4) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 10) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 24) & 16383;
		des[16+j] |= (src[8+j] << 8) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 6) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 20) & 16383;
		des[24+j] |= (src[12+j] << 12) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 2) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j] >> 16) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 30) & 16383;
		des[36+j] |= (src[16+j] << 2) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[16+j] >> 12) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 26) & 16383;
		des[44+j] |= (src[20+j] << 6) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[20+j] >> 8) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[20+j] >> 22) & 16383;
		des[52+j] |= (src[24+j] << 10) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[24+j] >> 4) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[24+j] >> 18) & 16383;
	}
}

template<typename T>
void KAFOR_unpack_16len_14bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 22) & 16383;
		des[4+j] |= (src[4+j] << 10) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 4) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 18) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j]) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 14) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 28) & 16383;
		des[24+j] |= (src[12+j] << 4) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 10) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j] >> 24) & 16383;
		des[32+j] |= (src[16+j] << 8) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[16+j] >> 6) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[16+j] >> 20) & 16383;
		des[40+j] |= (src[20+j] << 12) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[20+j] >> 2) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[20+j] >> 16) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[20+j] >> 30) & 16383;
		des[52+j] |= (src[24+j] << 2) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[24+j] >> 12) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[24+j] >> 26) & 16383;
		des[60+j] |= (src[28+j] << 6) & 16383;
	}
}

template<typename T>
void KAFOR_unpack_16len_14bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 30) & 16383;
		des[4+j] |= (src[4+j] << 2) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 12) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 26) & 16383;
		des[12+j] |= (src[8+j] << 6) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 8) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 22) & 16383;
		des[20+j] |= (src[12+j] << 10) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 4) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 18) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[16+j]) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[16+j] >> 14) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[16+j] >> 28) & 16383;
		des[40+j] |= (src[20+j] << 4) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[20+j] >> 10) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[20+j] >> 24) & 16383;
		des[48+j] |= (src[24+j] << 8) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[24+j] >> 6) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[24+j] >> 20) & 16383;
		des[56+j] |= (src[28+j] << 12) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[28+j] >> 2) & 16383;
	}
}

template<typename T>
void KAFOR_unpack_16len_14bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 16383;
		des[j] |= (src[4+j] << 8) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 6) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 20) & 16383;
		des[8+j] |= (src[8+j] << 12) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 2) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 16) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 30) & 16383;
		des[20+j] |= (src[12+j] << 2) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 12) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 26) & 16383;
		des[28+j] |= (src[16+j] << 6) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[16+j] >> 8) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[16+j] >> 22) & 16383;
		des[36+j] |= (src[20+j] << 10) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[20+j] >> 4) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[20+j] >> 18) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[24+j]) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[24+j] >> 14) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[24+j] >> 28) & 16383;
		des[56+j] |= (src[28+j] << 4) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[28+j] >> 10) & 16383;
	}
}

template<typename T>
void KAFOR_unpack_16len_15bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 15) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 30) & 32767;
		des[8+j] |= (src[4+j] << 2) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 13) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 28) & 32767;
		des[16+j] |= (src[8+j] << 4) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 11) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 26) & 32767;
		des[24+j] |= (src[12+j] << 6) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 9) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j] >> 24) & 32767;
		des[32+j] |= (src[16+j] << 8) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[16+j] >> 7) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[16+j] >> 22) & 32767;
		des[40+j] |= (src[20+j] << 10) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[20+j] >> 5) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[20+j] >> 20) & 32767;
		des[48+j] |= (src[24+j] << 12) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[24+j] >> 3) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[24+j] >> 18) & 32767;
		des[56+j] |= (src[28+j] << 14) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[28+j] >> 1) & 32767;
	}
}

template<typename T>
void KAFOR_unpack_16len_15bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 23) & 32767;
		des[4+j] |= (src[4+j] << 9) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 6) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 21) & 32767;
		des[12+j] |= (src[8+j] << 11) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 4) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 19) & 32767;
		des[20+j] |= (src[12+j] << 13) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 2) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 17) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[16+j]) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[16+j] >> 15) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[16+j] >> 30) & 32767;
		des[40+j] |= (src[20+j] << 2) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[20+j] >> 13) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[20+j] >> 28) & 32767;
		des[48+j] |= (src[24+j] << 4) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[24+j] >> 11) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[24+j] >> 26) & 32767;
		des[56+j] |= (src[28+j] << 6) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[28+j] >> 9) & 32767;
	}
}

template<typename T>
void KAFOR_unpack_16len_15bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 31) & 32767;
		des[4+j] |= (src[4+j] << 1) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 14) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 29) & 32767;
		des[12+j] |= (src[8+j] << 3) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 12) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 27) & 32767;
		des[20+j] |= (src[12+j] << 5) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 10) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 25) & 32767;
		des[28+j] |= (src[16+j] << 7) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[16+j] >> 8) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[16+j] >> 23) & 32767;
		des[36+j] |= (src[20+j] << 9) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[20+j] >> 6) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[20+j] >> 21) & 32767;
		des[44+j] |= (src[24+j] << 11) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[24+j] >> 4) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[24+j] >> 19) & 32767;
		des[52+j] |= (src[28+j] << 13) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[28+j] >> 2) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[28+j] >> 17) & 32767;
	}
}

template<typename T>
void KAFOR_unpack_16len_15bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 32767;
		des[j] |= (src[4+j] << 8) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 7) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 22) & 32767;
		des[8+j] |= (src[8+j] << 10) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 5) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 20) & 32767;
		des[16+j] |= (src[12+j] << 12) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 3) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 18) & 32767;
		des[24+j] |= (src[16+j] << 14) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 1) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[16+j] >> 16) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[16+j] >> 31) & 32767;
		des[36+j] |= (src[20+j] << 1) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[20+j] >> 14) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[20+j] >> 29) & 32767;
		des[44+j] |= (src[24+j] << 3) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[24+j] >> 12) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[24+j] >> 27) & 32767;
		des[52+j] |= (src[28+j] << 5) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[28+j] >> 10) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[28+j] >> 25) & 32767;
		des[60+j] |= (src[32+j] << 7) & 32767;
	}
}

template<typename T>
void KAFOR_unpack_16len_16bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[16+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[16+j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[20+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[20+j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[24+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[24+j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[28+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[28+j] >> 16) & 65535;
	}
}

template<typename T>
void KAFOR_unpack_16len_16bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 24) & 65535;
		des[4+j] |= (src[4+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 24) & 65535;
		des[12+j] |= (src[8+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 24) & 65535;
		des[20+j] |= (src[12+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 24) & 65535;
		des[28+j] |= (src[16+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[16+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[16+j] >> 24) & 65535;
		des[36+j] |= (src[20+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[20+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[20+j] >> 24) & 65535;
		des[44+j] |= (src[24+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[24+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[24+j] >> 24) & 65535;
		des[52+j] |= (src[28+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[28+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[28+j] >> 24) & 65535;
		des[60+j] |= (src[32+j] << 8) & 65535;
	}
}

template<typename T>
void KAFOR_unpack_16len_16bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[16+j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[20+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[20+j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[24+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[24+j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[28+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[28+j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[32+j]) & 65535;
	}
}

template<typename T>
void KAFOR_unpack_16len_16bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 65535;
		des[j] |= (src[4+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 24) & 65535;
		des[8+j] |= (src[8+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 24) & 65535;
		des[16+j] |= (src[12+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 24) & 65535;
		des[24+j] |= (src[16+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[16+j] >> 24) & 65535;
		des[32+j] |= (src[20+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[20+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[20+j] >> 24) & 65535;
		des[40+j] |= (src[24+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[24+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[24+j] >> 24) & 65535;
		des[48+j] |= (src[28+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[28+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[28+j] >> 24) & 65535;
		des[56+j] |= (src[32+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[32+j] >> 8) & 65535;
	}
}

template<typename T>
void KAFOR_unpack_16len_17bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 17) & 131071;
		des[4+j] |= (src[4+j] << 15) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 2) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 19) & 131071;
		des[12+j] |= (src[8+j] << 13) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 4) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 21) & 131071;
		des[20+j] |= (src[12+j] << 11) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 6) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 23) & 131071;
		des[28+j] |= (src[16+j] << 9) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[16+j] >> 8) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[16+j] >> 25) & 131071;
		des[36+j] |= (src[20+j] << 7) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[20+j] >> 10) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[20+j] >> 27) & 131071;
		des[44+j] |= (src[24+j] << 5) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[24+j] >> 12) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[24+j] >> 29) & 131071;
		des[52+j] |= (src[28+j] << 3) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[28+j] >> 14) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[28+j] >> 31) & 131071;
		des[60+j] |= (src[32+j] << 1) & 131071;
	}
}

template<typename T>
void KAFOR_unpack_16len_17bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 25) & 131071;
		des[4+j] |= (src[4+j] << 7) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 10) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 27) & 131071;
		des[12+j] |= (src[8+j] << 5) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 12) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 29) & 131071;
		des[20+j] |= (src[12+j] << 3) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 14) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 31) & 131071;
		des[28+j] |= (src[16+j] << 1) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[16+j] >> 16) & 131071;
		des[32+j] |= (src[20+j] << 16) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[20+j] >> 1) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[20+j] >> 18) & 131071;
		des[40+j] |= (src[24+j] << 14) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[24+j] >> 3) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[24+j] >> 20) & 131071;
		des[48+j] |= (src[28+j] << 12) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[28+j] >> 5) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[28+j] >> 22) & 131071;
		des[56+j] |= (src[32+j] << 10) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[32+j] >> 7) & 131071;
	}
}

template<typename T>
void KAFOR_unpack_16len_17bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 131071;
		des[j] |= (src[4+j] << 16) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 1) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 18) & 131071;
		des[8+j] |= (src[8+j] << 14) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 3) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 20) & 131071;
		des[16+j] |= (src[12+j] << 12) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 5) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 22) & 131071;
		des[24+j] |= (src[16+j] << 10) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 7) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[16+j] >> 24) & 131071;
		des[32+j] |= (src[20+j] << 8) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[20+j] >> 9) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[20+j] >> 26) & 131071;
		des[40+j] |= (src[24+j] << 6) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[24+j] >> 11) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[24+j] >> 28) & 131071;
		des[48+j] |= (src[28+j] << 4) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[28+j] >> 13) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[28+j] >> 30) & 131071;
		des[56+j] |= (src[32+j] << 2) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[32+j] >> 15) & 131071;
	}
}

template<typename T>
void KAFOR_unpack_16len_17bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 131071;
		des[j] |= (src[4+j] << 8) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 9) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 26) & 131071;
		des[8+j] |= (src[8+j] << 6) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 11) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 28) & 131071;
		des[16+j] |= (src[12+j] << 4) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 13) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 30) & 131071;
		des[24+j] |= (src[16+j] << 2) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 15) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[20+j]) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[20+j] >> 17) & 131071;
		des[36+j] |= (src[24+j] << 15) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[24+j] >> 2) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[24+j] >> 19) & 131071;
		des[44+j] |= (src[28+j] << 13) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[28+j] >> 4) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[28+j] >> 21) & 131071;
		des[52+j] |= (src[32+j] << 11) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[32+j] >> 6) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[32+j] >> 23) & 131071;
		des[60+j] |= (src[36+j] << 9) & 131071;
	}
}

template<typename T>
void KAFOR_unpack_16len_18bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 18) & 262143;
		des[4+j] |= (src[4+j] << 14) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 4) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 22) & 262143;
		des[12+j] |= (src[8+j] << 10) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 8) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 26) & 262143;
		des[20+j] |= (src[12+j] << 6) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 12) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 30) & 262143;
		des[28+j] |= (src[16+j] << 2) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[16+j] >> 16) & 262143;
		des[32+j] |= (src[20+j] << 16) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[20+j] >> 2) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[20+j] >> 20) & 262143;
		des[40+j] |= (src[24+j] << 12) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[24+j] >> 6) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[24+j] >> 24) & 262143;
		des[48+j] |= (src[28+j] << 8) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[28+j] >> 10) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[28+j] >> 28) & 262143;
		des[56+j] |= (src[32+j] << 4) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[32+j] >> 14) & 262143;
	}
}

template<typename T>
void KAFOR_unpack_16len_18bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 26) & 262143;
		des[4+j] |= (src[4+j] << 6) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 12) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 30) & 262143;
		des[12+j] |= (src[8+j] << 2) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 16) & 262143;
		des[16+j] |= (src[12+j] << 16) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 2) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 20) & 262143;
		des[24+j] |= (src[16+j] << 12) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 6) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[16+j] >> 24) & 262143;
		des[32+j] |= (src[20+j] << 8) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[20+j] >> 10) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[20+j] >> 28) & 262143;
		des[40+j] |= (src[24+j] << 4) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[24+j] >> 14) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[28+j]) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[28+j] >> 18) & 262143;
		des[52+j] |= (src[32+j] << 14) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[32+j] >> 4) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[32+j] >> 22) & 262143;
		des[60+j] |= (src[36+j] << 10) & 262143;
	}
}

template<typename T>
void KAFOR_unpack_16len_18bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 262143;
		des[j] |= (src[4+j] << 16) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 2) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 20) & 262143;
		des[8+j] |= (src[8+j] << 12) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 6) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 24) & 262143;
		des[16+j] |= (src[12+j] << 8) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 10) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 28) & 262143;
		des[24+j] |= (src[16+j] << 4) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 14) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[20+j]) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[20+j] >> 18) & 262143;
		des[36+j] |= (src[24+j] << 14) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[24+j] >> 4) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[24+j] >> 22) & 262143;
		des[44+j] |= (src[28+j] << 10) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[28+j] >> 8) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[28+j] >> 26) & 262143;
		des[52+j] |= (src[32+j] << 6) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[32+j] >> 12) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[32+j] >> 30) & 262143;
		des[60+j] |= (src[36+j] << 2) & 262143;
	}
}

template<typename T>
void KAFOR_unpack_16len_18bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 262143;
		des[j] |= (src[4+j] << 8) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 10) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 28) & 262143;
		des[8+j] |= (src[8+j] << 4) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 14) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j]) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 18) & 262143;
		des[20+j] |= (src[16+j] << 14) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 4) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 22) & 262143;
		des[28+j] |= (src[20+j] << 10) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[20+j] >> 8) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[20+j] >> 26) & 262143;
		des[36+j] |= (src[24+j] << 6) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[24+j] >> 12) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[24+j] >> 30) & 262143;
		des[44+j] |= (src[28+j] << 2) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[28+j] >> 16) & 262143;
		des[48+j] |= (src[32+j] << 16) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[32+j] >> 2) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[32+j] >> 20) & 262143;
		des[56+j] |= (src[36+j] << 12) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[36+j] >> 6) & 262143;
	}
}

template<typename T>
void KAFOR_unpack_16len_19bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 19) & 524287;
		des[4+j] |= (src[4+j] << 13) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 6) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 25) & 524287;
		des[12+j] |= (src[8+j] << 7) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 12) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 31) & 524287;
		des[20+j] |= (src[12+j] << 1) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 18) & 524287;
		des[24+j] |= (src[16+j] << 14) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 5) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[16+j] >> 24) & 524287;
		des[32+j] |= (src[20+j] << 8) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[20+j] >> 11) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[20+j] >> 30) & 524287;
		des[40+j] |= (src[24+j] << 2) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[24+j] >> 17) & 524287;
		des[44+j] |= (src[28+j] << 15) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[28+j] >> 4) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[28+j] >> 23) & 524287;
		des[52+j] |= (src[32+j] << 9) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[32+j] >> 10) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[32+j] >> 29) & 524287;
		des[60+j] |= (src[36+j] << 3) & 524287;
	}
}

template<typename T>
void KAFOR_unpack_16len_19bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 27) & 524287;
		des[4+j] |= (src[4+j] << 5) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 14) & 524287;
		des[8+j] |= (src[8+j] << 18) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 1) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 20) & 524287;
		des[16+j] |= (src[12+j] << 12) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 7) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 26) & 524287;
		des[24+j] |= (src[16+j] << 6) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 13) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[20+j]) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[20+j] >> 19) & 524287;
		des[36+j] |= (src[24+j] << 13) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[24+j] >> 6) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[24+j] >> 25) & 524287;
		des[44+j] |= (src[28+j] << 7) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[28+j] >> 12) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[28+j] >> 31) & 524287;
		des[52+j] |= (src[32+j] << 1) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[32+j] >> 18) & 524287;
		des[56+j] |= (src[36+j] << 14) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[36+j] >> 5) & 524287;
	}
}

template<typename T>
void KAFOR_unpack_16len_19bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 524287;
		des[j] |= (src[4+j] << 16) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 3) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 22) & 524287;
		des[8+j] |= (src[8+j] << 10) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 9) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 28) & 524287;
		des[16+j] |= (src[12+j] << 4) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 15) & 524287;
		des[20+j] |= (src[16+j] << 17) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 2) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 21) & 524287;
		des[28+j] |= (src[20+j] << 11) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[20+j] >> 8) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[20+j] >> 27) & 524287;
		des[36+j] |= (src[24+j] << 5) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[24+j] >> 14) & 524287;
		des[40+j] |= (src[28+j] << 18) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[28+j] >> 1) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[28+j] >> 20) & 524287;
		des[48+j] |= (src[32+j] << 12) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[32+j] >> 7) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[32+j] >> 26) & 524287;
		des[56+j] |= (src[36+j] << 6) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[36+j] >> 13) & 524287;
	}
}

template<typename T>
void KAFOR_unpack_16len_19bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 524287;
		des[j] |= (src[4+j] << 8) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 11) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 30) & 524287;
		des[8+j] |= (src[8+j] << 2) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 17) & 524287;
		des[12+j] |= (src[12+j] << 15) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 4) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 23) & 524287;
		des[20+j] |= (src[16+j] << 9) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 10) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 29) & 524287;
		des[28+j] |= (src[20+j] << 3) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[20+j] >> 16) & 524287;
		des[32+j] |= (src[24+j] << 16) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[24+j] >> 3) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[24+j] >> 22) & 524287;
		des[40+j] |= (src[28+j] << 10) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[28+j] >> 9) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[28+j] >> 28) & 524287;
		des[48+j] |= (src[32+j] << 4) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[32+j] >> 15) & 524287;
		des[52+j] |= (src[36+j] << 17) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[36+j] >> 2) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[36+j] >> 21) & 524287;
		des[60+j] |= (src[40+j] << 11) & 524287;
	}
}

template<typename T>
void KAFOR_unpack_16len_20bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 20) & 1048575;
		des[4+j] |= (src[4+j] << 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 28) & 1048575;
		des[12+j] |= (src[8+j] << 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 16) & 1048575;
		des[16+j] |= (src[12+j] << 16) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 24) & 1048575;
		des[24+j] |= (src[16+j] << 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[20+j]) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[20+j] >> 20) & 1048575;
		des[36+j] |= (src[24+j] << 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[24+j] >> 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[24+j] >> 28) & 1048575;
		des[44+j] |= (src[28+j] << 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[28+j] >> 16) & 1048575;
		des[48+j] |= (src[32+j] << 16) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[32+j] >> 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[32+j] >> 24) & 1048575;
		des[56+j] |= (src[36+j] << 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[36+j] >> 12) & 1048575;
	}
}

template<typename T>
void KAFOR_unpack_16len_20bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 28) & 1048575;
		des[4+j] |= (src[4+j] << 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 16) & 1048575;
		des[8+j] |= (src[8+j] << 16) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 24) & 1048575;
		des[16+j] |= (src[12+j] << 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j]) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 20) & 1048575;
		des[28+j] |= (src[20+j] << 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[20+j] >> 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[20+j] >> 28) & 1048575;
		des[36+j] |= (src[24+j] << 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[24+j] >> 16) & 1048575;
		des[40+j] |= (src[28+j] << 16) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[28+j] >> 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[28+j] >> 24) & 1048575;
		des[48+j] |= (src[32+j] << 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[32+j] >> 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[36+j]) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[36+j] >> 20) & 1048575;
		des[60+j] |= (src[40+j] << 12) & 1048575;
	}
}

template<typename T>
void KAFOR_unpack_16len_20bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 1048575;
		des[j] |= (src[4+j] << 16) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 24) & 1048575;
		des[8+j] |= (src[8+j] << 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j]) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 20) & 1048575;
		des[20+j] |= (src[16+j] << 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 28) & 1048575;
		des[28+j] |= (src[20+j] << 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[20+j] >> 16) & 1048575;
		des[32+j] |= (src[24+j] << 16) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[24+j] >> 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[24+j] >> 24) & 1048575;
		des[40+j] |= (src[28+j] << 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[28+j] >> 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[32+j]) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[32+j] >> 20) & 1048575;
		des[52+j] |= (src[36+j] << 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[36+j] >> 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[36+j] >> 28) & 1048575;
		des[60+j] |= (src[40+j] << 4) & 1048575;
	}
}

template<typename T>
void KAFOR_unpack_16len_20bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 1048575;
		des[j] |= (src[4+j] << 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j]) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 20) & 1048575;
		des[12+j] |= (src[12+j] << 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 28) & 1048575;
		des[20+j] |= (src[16+j] << 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 16) & 1048575;
		des[24+j] |= (src[20+j] << 16) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[20+j] >> 24) & 1048575;
		des[32+j] |= (src[24+j] << 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[24+j] >> 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[28+j]) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[28+j] >> 20) & 1048575;
		des[44+j] |= (src[32+j] << 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[32+j] >> 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[32+j] >> 28) & 1048575;
		des[52+j] |= (src[36+j] << 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[36+j] >> 16) & 1048575;
		des[56+j] |= (src[40+j] << 16) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[40+j] >> 4) & 1048575;
	}
}

template<typename T>
void KAFOR_unpack_16len_21bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 21) & 2097151;
		des[4+j] |= (src[4+j] << 11) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 10) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 31) & 2097151;
		des[12+j] |= (src[8+j] << 1) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 20) & 2097151;
		des[16+j] |= (src[12+j] << 12) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 9) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 30) & 2097151;
		des[24+j] |= (src[16+j] << 2) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 19) & 2097151;
		des[28+j] |= (src[20+j] << 13) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[20+j] >> 8) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[20+j] >> 29) & 2097151;
		des[36+j] |= (src[24+j] << 3) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[24+j] >> 18) & 2097151;
		des[40+j] |= (src[28+j] << 14) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[28+j] >> 7) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[28+j] >> 28) & 2097151;
		des[48+j] |= (src[32+j] << 4) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[32+j] >> 17) & 2097151;
		des[52+j] |= (src[36+j] << 15) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[36+j] >> 6) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[36+j] >> 27) & 2097151;
		des[60+j] |= (src[40+j] << 5) & 2097151;
	}
}

template<typename T>
void KAFOR_unpack_16len_21bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 29) & 2097151;
		des[4+j] |= (src[4+j] << 3) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 18) & 2097151;
		des[8+j] |= (src[8+j] << 14) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 7) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 28) & 2097151;
		des[16+j] |= (src[12+j] << 4) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 17) & 2097151;
		des[20+j] |= (src[16+j] << 15) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 6) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 27) & 2097151;
		des[28+j] |= (src[20+j] << 5) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[20+j] >> 16) & 2097151;
		des[32+j] |= (src[24+j] << 16) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[24+j] >> 5) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[24+j] >> 26) & 2097151;
		des[40+j] |= (src[28+j] << 6) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[28+j] >> 15) & 2097151;
		des[44+j] |= (src[32+j] << 17) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[32+j] >> 4) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[32+j] >> 25) & 2097151;
		des[52+j] |= (src[36+j] << 7) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[36+j] >> 14) & 2097151;
		des[56+j] |= (src[40+j] << 18) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[40+j] >> 3) & 2097151;
	}
}

template<typename T>
void KAFOR_unpack_16len_21bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 2097151;
		des[j] |= (src[4+j] << 16) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 5) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 26) & 2097151;
		des[8+j] |= (src[8+j] << 6) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 15) & 2097151;
		des[12+j] |= (src[12+j] << 17) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 4) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 25) & 2097151;
		des[20+j] |= (src[16+j] << 7) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 14) & 2097151;
		des[24+j] |= (src[20+j] << 18) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 3) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[20+j] >> 24) & 2097151;
		des[32+j] |= (src[24+j] << 8) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[24+j] >> 13) & 2097151;
		des[36+j] |= (src[28+j] << 19) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[28+j] >> 2) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[28+j] >> 23) & 2097151;
		des[44+j] |= (src[32+j] << 9) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[32+j] >> 12) & 2097151;
		des[48+j] |= (src[36+j] << 20) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[36+j] >> 1) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[36+j] >> 22) & 2097151;
		des[56+j] |= (src[40+j] << 10) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[40+j] >> 11) & 2097151;
	}
}

template<typename T>
void KAFOR_unpack_16len_21bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 2097151;
		des[j] |= (src[4+j] << 8) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 13) & 2097151;
		des[4+j] |= (src[8+j] << 19) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 2) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 23) & 2097151;
		des[12+j] |= (src[12+j] << 9) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 12) & 2097151;
		des[16+j] |= (src[16+j] << 20) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 1) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 22) & 2097151;
		des[24+j] |= (src[20+j] << 10) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 11) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[24+j]) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[24+j] >> 21) & 2097151;
		des[36+j] |= (src[28+j] << 11) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[28+j] >> 10) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[28+j] >> 31) & 2097151;
		des[44+j] |= (src[32+j] << 1) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[32+j] >> 20) & 2097151;
		des[48+j] |= (src[36+j] << 12) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[36+j] >> 9) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[36+j] >> 30) & 2097151;
		des[56+j] |= (src[40+j] << 2) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[40+j] >> 19) & 2097151;
		des[60+j] |= (src[44+j] << 13) & 2097151;
	}
}

template<typename T>
void KAFOR_unpack_16len_22bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 22) & 4194303;
		des[4+j] |= (src[4+j] << 10) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 12) & 4194303;
		des[8+j] |= (src[8+j] << 20) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 2) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 24) & 4194303;
		des[16+j] |= (src[12+j] << 8) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 14) & 4194303;
		des[20+j] |= (src[16+j] << 18) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 4) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 26) & 4194303;
		des[28+j] |= (src[20+j] << 6) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[20+j] >> 16) & 4194303;
		des[32+j] |= (src[24+j] << 16) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[24+j] >> 6) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[24+j] >> 28) & 4194303;
		des[40+j] |= (src[28+j] << 4) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[28+j] >> 18) & 4194303;
		des[44+j] |= (src[32+j] << 14) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[32+j] >> 8) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[32+j] >> 30) & 4194303;
		des[52+j] |= (src[36+j] << 2) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[36+j] >> 20) & 4194303;
		des[56+j] |= (src[40+j] << 12) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[40+j] >> 10) & 4194303;
	}
}

template<typename T>
void KAFOR_unpack_16len_22bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 30) & 4194303;
		des[4+j] |= (src[4+j] << 2) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 20) & 4194303;
		des[8+j] |= (src[8+j] << 12) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 10) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j]) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 22) & 4194303;
		des[20+j] |= (src[16+j] << 10) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 12) & 4194303;
		des[24+j] |= (src[20+j] << 20) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 2) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[20+j] >> 24) & 4194303;
		des[32+j] |= (src[24+j] << 8) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[24+j] >> 14) & 4194303;
		des[36+j] |= (src[28+j] << 18) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[28+j] >> 4) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[28+j] >> 26) & 4194303;
		des[44+j] |= (src[32+j] << 6) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[32+j] >> 16) & 4194303;
		des[48+j] |= (src[36+j] << 16) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[36+j] >> 6) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[36+j] >> 28) & 4194303;
		des[56+j] |= (src[40+j] << 4) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[40+j] >> 18) & 4194303;
		des[60+j] |= (src[44+j] << 14) & 4194303;
	}
}

template<typename T>
void KAFOR_unpack_16len_22bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 4194303;
		des[j] |= (src[4+j] << 16) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 6) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 28) & 4194303;
		des[8+j] |= (src[8+j] << 4) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 18) & 4194303;
		des[12+j] |= (src[12+j] << 14) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 8) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 30) & 4194303;
		des[20+j] |= (src[16+j] << 2) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 20) & 4194303;
		des[24+j] |= (src[20+j] << 12) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 10) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[24+j]) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[24+j] >> 22) & 4194303;
		des[36+j] |= (src[28+j] << 10) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[28+j] >> 12) & 4194303;
		des[40+j] |= (src[32+j] << 20) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[32+j] >> 2) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[32+j] >> 24) & 4194303;
		des[48+j] |= (src[36+j] << 8) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[36+j] >> 14) & 4194303;
		des[52+j] |= (src[40+j] << 18) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[40+j] >> 4) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[40+j] >> 26) & 4194303;
		des[60+j] |= (src[44+j] << 6) & 4194303;
	}
}

template<typename T>
void KAFOR_unpack_16len_22bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 4194303;
		des[j] |= (src[4+j] << 8) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 14) & 4194303;
		des[4+j] |= (src[8+j] << 18) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 4) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 26) & 4194303;
		des[12+j] |= (src[12+j] << 6) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 16) & 4194303;
		des[16+j] |= (src[16+j] << 16) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 6) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 28) & 4194303;
		des[24+j] |= (src[20+j] << 4) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 18) & 4194303;
		des[28+j] |= (src[24+j] << 14) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[24+j] >> 8) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[24+j] >> 30) & 4194303;
		des[36+j] |= (src[28+j] << 2) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[28+j] >> 20) & 4194303;
		des[40+j] |= (src[32+j] << 12) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[32+j] >> 10) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[36+j]) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[36+j] >> 22) & 4194303;
		des[52+j] |= (src[40+j] << 10) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[40+j] >> 12) & 4194303;
		des[56+j] |= (src[44+j] << 20) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[44+j] >> 2) & 4194303;
	}
}

template<typename T>
void KAFOR_unpack_16len_23bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 23) & 8388607;
		des[4+j] |= (src[4+j] << 9) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 14) & 8388607;
		des[8+j] |= (src[8+j] << 18) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 5) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 28) & 8388607;
		des[16+j] |= (src[12+j] << 4) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 19) & 8388607;
		des[20+j] |= (src[16+j] << 13) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 10) & 8388607;
		des[24+j] |= (src[20+j] << 22) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 1) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[20+j] >> 24) & 8388607;
		des[32+j] |= (src[24+j] << 8) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[24+j] >> 15) & 8388607;
		des[36+j] |= (src[28+j] << 17) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[28+j] >> 6) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[28+j] >> 29) & 8388607;
		des[44+j] |= (src[32+j] << 3) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[32+j] >> 20) & 8388607;
		des[48+j] |= (src[36+j] << 12) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[36+j] >> 11) & 8388607;
		des[52+j] |= (src[40+j] << 21) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[40+j] >> 2) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[40+j] >> 25) & 8388607;
		des[60+j] |= (src[44+j] << 7) & 8388607;
	}
}

template<typename T>
void KAFOR_unpack_16len_23bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 31) & 8388607;
		des[4+j] |= (src[4+j] << 1) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 22) & 8388607;
		des[8+j] |= (src[8+j] << 10) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 13) & 8388607;
		des[12+j] |= (src[12+j] << 19) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 4) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 27) & 8388607;
		des[20+j] |= (src[16+j] << 5) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 18) & 8388607;
		des[24+j] |= (src[20+j] << 14) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 9) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[24+j]) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[24+j] >> 23) & 8388607;
		des[36+j] |= (src[28+j] << 9) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[28+j] >> 14) & 8388607;
		des[40+j] |= (src[32+j] << 18) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[32+j] >> 5) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[32+j] >> 28) & 8388607;
		des[48+j] |= (src[36+j] << 4) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[36+j] >> 19) & 8388607;
		des[52+j] |= (src[40+j] << 13) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[40+j] >> 10) & 8388607;
		des[56+j] |= (src[44+j] << 22) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[44+j] >> 1) & 8388607;
	}
}

template<typename T>
void KAFOR_unpack_16len_23bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 8388607;
		des[j] |= (src[4+j] << 16) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 7) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 30) & 8388607;
		des[8+j] |= (src[8+j] << 2) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 21) & 8388607;
		des[12+j] |= (src[12+j] << 11) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 12) & 8388607;
		des[16+j] |= (src[16+j] << 20) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 3) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 26) & 8388607;
		des[24+j] |= (src[20+j] << 6) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 17) & 8388607;
		des[28+j] |= (src[24+j] << 15) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[24+j] >> 8) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[24+j] >> 31) & 8388607;
		des[36+j] |= (src[28+j] << 1) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[28+j] >> 22) & 8388607;
		des[40+j] |= (src[32+j] << 10) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[32+j] >> 13) & 8388607;
		des[44+j] |= (src[36+j] << 19) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[36+j] >> 4) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[36+j] >> 27) & 8388607;
		des[52+j] |= (src[40+j] << 5) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[40+j] >> 18) & 8388607;
		des[56+j] |= (src[44+j] << 14) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[44+j] >> 9) & 8388607;
	}
}

template<typename T>
void KAFOR_unpack_16len_23bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 8388607;
		des[j] |= (src[4+j] << 8) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 15) & 8388607;
		des[4+j] |= (src[8+j] << 17) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 6) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 29) & 8388607;
		des[12+j] |= (src[12+j] << 3) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 20) & 8388607;
		des[16+j] |= (src[16+j] << 12) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 11) & 8388607;
		des[20+j] |= (src[20+j] << 21) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 2) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 25) & 8388607;
		des[28+j] |= (src[24+j] << 7) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[24+j] >> 16) & 8388607;
		des[32+j] |= (src[28+j] << 16) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[28+j] >> 7) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[28+j] >> 30) & 8388607;
		des[40+j] |= (src[32+j] << 2) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[32+j] >> 21) & 8388607;
		des[44+j] |= (src[36+j] << 11) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[36+j] >> 12) & 8388607;
		des[48+j] |= (src[40+j] << 20) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[40+j] >> 3) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[40+j] >> 26) & 8388607;
		des[56+j] |= (src[44+j] << 6) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[44+j] >> 17) & 8388607;
		des[60+j] |= (src[48+j] << 15) & 8388607;
	}
}

template<typename T>
void KAFOR_unpack_16len_24bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 24) & 16777215;
		des[4+j] |= (src[4+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 16) & 16777215;
		des[8+j] |= (src[8+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 24) & 16777215;
		des[20+j] |= (src[16+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 16) & 16777215;
		des[24+j] |= (src[20+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[24+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[24+j] >> 24) & 16777215;
		des[36+j] |= (src[28+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[28+j] >> 16) & 16777215;
		des[40+j] |= (src[32+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[32+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[36+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[36+j] >> 24) & 16777215;
		des[52+j] |= (src[40+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[40+j] >> 16) & 16777215;
		des[56+j] |= (src[44+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[44+j] >> 8) & 16777215;
	}
}

template<typename T>
void KAFOR_unpack_16len_24bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 24) & 16777215;
		des[8+j] |= (src[8+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 16) & 16777215;
		des[12+j] |= (src[12+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 24) & 16777215;
		des[24+j] |= (src[20+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 16) & 16777215;
		des[28+j] |= (src[24+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[24+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[28+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[28+j] >> 24) & 16777215;
		des[40+j] |= (src[32+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[32+j] >> 16) & 16777215;
		des[44+j] |= (src[36+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[36+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[40+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[40+j] >> 24) & 16777215;
		des[56+j] |= (src[44+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[44+j] >> 16) & 16777215;
		des[60+j] |= (src[48+j] << 16) & 16777215;
	}
}

template<typename T>
void KAFOR_unpack_16len_24bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 16777215;
		des[j] |= (src[4+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 24) & 16777215;
		des[12+j] |= (src[12+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 16) & 16777215;
		des[16+j] |= (src[16+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 24) & 16777215;
		des[28+j] |= (src[24+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[24+j] >> 16) & 16777215;
		des[32+j] |= (src[28+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[28+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[32+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[32+j] >> 24) & 16777215;
		des[44+j] |= (src[36+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[36+j] >> 16) & 16777215;
		des[48+j] |= (src[40+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[40+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[44+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[44+j] >> 24) & 16777215;
		des[60+j] |= (src[48+j] << 8) & 16777215;
	}
}

template<typename T>
void KAFOR_unpack_16len_24bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 16777215;
		des[j] |= (src[4+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 16) & 16777215;
		des[4+j] |= (src[8+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 24) & 16777215;
		des[16+j] |= (src[16+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 16) & 16777215;
		des[20+j] |= (src[20+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[24+j] >> 24) & 16777215;
		des[32+j] |= (src[28+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[28+j] >> 16) & 16777215;
		des[36+j] |= (src[32+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[32+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[36+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[36+j] >> 24) & 16777215;
		des[48+j] |= (src[40+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[40+j] >> 16) & 16777215;
		des[52+j] |= (src[44+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[44+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[48+j]) & 16777215;
	}
}

template<typename T>
void KAFOR_unpack_16len_25bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 25) & 33554431;
		des[4+j] |= (src[4+j] << 7) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 18) & 33554431;
		des[8+j] |= (src[8+j] << 14) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 11) & 33554431;
		des[12+j] |= (src[12+j] << 21) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 4) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 29) & 33554431;
		des[20+j] |= (src[16+j] << 3) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 22) & 33554431;
		des[24+j] |= (src[20+j] << 10) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 15) & 33554431;
		des[28+j] |= (src[24+j] << 17) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[24+j] >> 8) & 33554431;
		des[32+j] |= (src[28+j] << 24) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[28+j] >> 1) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[28+j] >> 26) & 33554431;
		des[40+j] |= (src[32+j] << 6) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[32+j] >> 19) & 33554431;
		des[44+j] |= (src[36+j] << 13) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[36+j] >> 12) & 33554431;
		des[48+j] |= (src[40+j] << 20) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[40+j] >> 5) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[40+j] >> 30) & 33554431;
		des[56+j] |= (src[44+j] << 2) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[44+j] >> 23) & 33554431;
		des[60+j] |= (src[48+j] << 9) & 33554431;
	}
}

template<typename T>
void KAFOR_unpack_16len_25bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 33554431;
		des[j] |= (src[4+j] << 24) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 1) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 26) & 33554431;
		des[8+j] |= (src[8+j] << 6) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 19) & 33554431;
		des[12+j] |= (src[12+j] << 13) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 12) & 33554431;
		des[16+j] |= (src[16+j] << 20) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 5) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 30) & 33554431;
		des[24+j] |= (src[20+j] << 2) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 23) & 33554431;
		des[28+j] |= (src[24+j] << 9) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[24+j] >> 16) & 33554431;
		des[32+j] |= (src[28+j] << 16) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[28+j] >> 9) & 33554431;
		des[36+j] |= (src[32+j] << 23) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[32+j] >> 2) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[32+j] >> 27) & 33554431;
		des[44+j] |= (src[36+j] << 5) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[36+j] >> 20) & 33554431;
		des[48+j] |= (src[40+j] << 12) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[40+j] >> 13) & 33554431;
		des[52+j] |= (src[44+j] << 19) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[44+j] >> 6) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[44+j] >> 31) & 33554431;
		des[60+j] |= (src[48+j] << 1) & 33554431;
	}
}

template<typename T>
void KAFOR_unpack_16len_25bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 33554431;
		des[j] |= (src[4+j] << 16) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 9) & 33554431;
		des[4+j] |= (src[8+j] << 23) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 2) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 27) & 33554431;
		des[12+j] |= (src[12+j] << 5) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 20) & 33554431;
		des[16+j] |= (src[16+j] << 12) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 13) & 33554431;
		des[20+j] |= (src[20+j] << 19) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 6) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 31) & 33554431;
		des[28+j] |= (src[24+j] << 1) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[24+j] >> 24) & 33554431;
		des[32+j] |= (src[28+j] << 8) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[28+j] >> 17) & 33554431;
		des[36+j] |= (src[32+j] << 15) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[32+j] >> 10) & 33554431;
		des[40+j] |= (src[36+j] << 22) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[36+j] >> 3) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[36+j] >> 28) & 33554431;
		des[48+j] |= (src[40+j] << 4) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[40+j] >> 21) & 33554431;
		des[52+j] |= (src[44+j] << 11) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[44+j] >> 14) & 33554431;
		des[56+j] |= (src[48+j] << 18) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[48+j] >> 7) & 33554431;
	}
}

template<typename T>
void KAFOR_unpack_16len_25bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 33554431;
		des[j] |= (src[4+j] << 8) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 17) & 33554431;
		des[4+j] |= (src[8+j] << 15) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 10) & 33554431;
		des[8+j] |= (src[12+j] << 22) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 3) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 28) & 33554431;
		des[16+j] |= (src[16+j] << 4) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 21) & 33554431;
		des[20+j] |= (src[20+j] << 11) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 14) & 33554431;
		des[24+j] |= (src[24+j] << 18) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j] >> 7) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[28+j]) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[28+j] >> 25) & 33554431;
		des[36+j] |= (src[32+j] << 7) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[32+j] >> 18) & 33554431;
		des[40+j] |= (src[36+j] << 14) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[36+j] >> 11) & 33554431;
		des[44+j] |= (src[40+j] << 21) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[40+j] >> 4) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[40+j] >> 29) & 33554431;
		des[52+j] |= (src[44+j] << 3) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[44+j] >> 22) & 33554431;
		des[56+j] |= (src[48+j] << 10) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[48+j] >> 15) & 33554431;
		des[60+j] |= (src[52+j] << 17) & 33554431;
	}
}

template<typename T>
void KAFOR_unpack_16len_26bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 26) & 67108863;
		des[4+j] |= (src[4+j] << 6) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 20) & 67108863;
		des[8+j] |= (src[8+j] << 12) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 14) & 67108863;
		des[12+j] |= (src[12+j] << 18) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 8) & 67108863;
		des[16+j] |= (src[16+j] << 24) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 2) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 28) & 67108863;
		des[24+j] |= (src[20+j] << 4) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 22) & 67108863;
		des[28+j] |= (src[24+j] << 10) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[24+j] >> 16) & 67108863;
		des[32+j] |= (src[28+j] << 16) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[28+j] >> 10) & 67108863;
		des[36+j] |= (src[32+j] << 22) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[32+j] >> 4) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[32+j] >> 30) & 67108863;
		des[44+j] |= (src[36+j] << 2) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[36+j] >> 24) & 67108863;
		des[48+j] |= (src[40+j] << 8) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[40+j] >> 18) & 67108863;
		des[52+j] |= (src[44+j] << 14) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[44+j] >> 12) & 67108863;
		des[56+j] |= (src[48+j] << 20) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[48+j] >> 6) & 67108863;
	}
}

template<typename T>
void KAFOR_unpack_16len_26bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 67108863;
		des[j] |= (src[4+j] << 24) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 2) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 28) & 67108863;
		des[8+j] |= (src[8+j] << 4) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 22) & 67108863;
		des[12+j] |= (src[12+j] << 10) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 16) & 67108863;
		des[16+j] |= (src[16+j] << 16) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 10) & 67108863;
		des[20+j] |= (src[20+j] << 22) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 4) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 30) & 67108863;
		des[28+j] |= (src[24+j] << 2) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[24+j] >> 24) & 67108863;
		des[32+j] |= (src[28+j] << 8) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[28+j] >> 18) & 67108863;
		des[36+j] |= (src[32+j] << 14) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[32+j] >> 12) & 67108863;
		des[40+j] |= (src[36+j] << 20) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[36+j] >> 6) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[40+j]) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[40+j] >> 26) & 67108863;
		des[52+j] |= (src[44+j] << 6) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[44+j] >> 20) & 67108863;
		des[56+j] |= (src[48+j] << 12) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[48+j] >> 14) & 67108863;
		des[60+j] |= (src[52+j] << 18) & 67108863;
	}
}

template<typename T>
void KAFOR_unpack_16len_26bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 67108863;
		des[j] |= (src[4+j] << 16) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 10) & 67108863;
		des[4+j] |= (src[8+j] << 22) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 4) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 30) & 67108863;
		des[12+j] |= (src[12+j] << 2) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 24) & 67108863;
		des[16+j] |= (src[16+j] << 8) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 18) & 67108863;
		des[20+j] |= (src[20+j] << 14) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 12) & 67108863;
		des[24+j] |= (src[24+j] << 20) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j] >> 6) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[28+j]) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[28+j] >> 26) & 67108863;
		des[36+j] |= (src[32+j] << 6) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[32+j] >> 20) & 67108863;
		des[40+j] |= (src[36+j] << 12) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[36+j] >> 14) & 67108863;
		des[44+j] |= (src[40+j] << 18) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[40+j] >> 8) & 67108863;
		des[48+j] |= (src[44+j] << 24) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[44+j] >> 2) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[44+j] >> 28) & 67108863;
		des[56+j] |= (src[48+j] << 4) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[48+j] >> 22) & 67108863;
		des[60+j] |= (src[52+j] << 10) & 67108863;
	}
}

template<typename T>
void KAFOR_unpack_16len_26bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 67108863;
		des[j] |= (src[4+j] << 8) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 18) & 67108863;
		des[4+j] |= (src[8+j] << 14) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 12) & 67108863;
		des[8+j] |= (src[12+j] << 20) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 6) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j]) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 26) & 67108863;
		des[20+j] |= (src[20+j] << 6) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 20) & 67108863;
		des[24+j] |= (src[24+j] << 12) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j] >> 14) & 67108863;
		des[28+j] |= (src[28+j] << 18) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[28+j] >> 8) & 67108863;
		des[32+j] |= (src[32+j] << 24) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[32+j] >> 2) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[32+j] >> 28) & 67108863;
		des[40+j] |= (src[36+j] << 4) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[36+j] >> 22) & 67108863;
		des[44+j] |= (src[40+j] << 10) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[40+j] >> 16) & 67108863;
		des[48+j] |= (src[44+j] << 16) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[44+j] >> 10) & 67108863;
		des[52+j] |= (src[48+j] << 22) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[48+j] >> 4) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[48+j] >> 30) & 67108863;
		des[60+j] |= (src[52+j] << 2) & 67108863;
	}
}

template<typename T>
void KAFOR_unpack_16len_27bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 27) & 134217727;
		des[4+j] |= (src[4+j] << 5) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 22) & 134217727;
		des[8+j] |= (src[8+j] << 10) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 17) & 134217727;
		des[12+j] |= (src[12+j] << 15) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 12) & 134217727;
		des[16+j] |= (src[16+j] << 20) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 7) & 134217727;
		des[20+j] |= (src[20+j] << 25) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 2) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 29) & 134217727;
		des[28+j] |= (src[24+j] << 3) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[24+j] >> 24) & 134217727;
		des[32+j] |= (src[28+j] << 8) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[28+j] >> 19) & 134217727;
		des[36+j] |= (src[32+j] << 13) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[32+j] >> 14) & 134217727;
		des[40+j] |= (src[36+j] << 18) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[36+j] >> 9) & 134217727;
		des[44+j] |= (src[40+j] << 23) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[40+j] >> 4) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[40+j] >> 31) & 134217727;
		des[52+j] |= (src[44+j] << 1) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[44+j] >> 26) & 134217727;
		des[56+j] |= (src[48+j] << 6) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[48+j] >> 21) & 134217727;
		des[60+j] |= (src[52+j] << 11) & 134217727;
	}
}

template<typename T>
void KAFOR_unpack_16len_27bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 134217727;
		des[j] |= (src[4+j] << 24) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 3) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 30) & 134217727;
		des[8+j] |= (src[8+j] << 2) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 25) & 134217727;
		des[12+j] |= (src[12+j] << 7) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 20) & 134217727;
		des[16+j] |= (src[16+j] << 12) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 15) & 134217727;
		des[20+j] |= (src[20+j] << 17) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 10) & 134217727;
		des[24+j] |= (src[24+j] << 22) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j] >> 5) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[28+j]) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[28+j] >> 27) & 134217727;
		des[36+j] |= (src[32+j] << 5) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[32+j] >> 22) & 134217727;
		des[40+j] |= (src[36+j] << 10) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[36+j] >> 17) & 134217727;
		des[44+j] |= (src[40+j] << 15) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[40+j] >> 12) & 134217727;
		des[48+j] |= (src[44+j] << 20) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[44+j] >> 7) & 134217727;
		des[52+j] |= (src[48+j] << 25) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[48+j] >> 2) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[48+j] >> 29) & 134217727;
		des[60+j] |= (src[52+j] << 3) & 134217727;
	}
}

template<typename T>
void KAFOR_unpack_16len_27bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 134217727;
		des[j] |= (src[4+j] << 16) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 11) & 134217727;
		des[4+j] |= (src[8+j] << 21) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 6) & 134217727;
		des[8+j] |= (src[12+j] << 26) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 1) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 28) & 134217727;
		des[16+j] |= (src[16+j] << 4) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 23) & 134217727;
		des[20+j] |= (src[20+j] << 9) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 18) & 134217727;
		des[24+j] |= (src[24+j] << 14) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j] >> 13) & 134217727;
		des[28+j] |= (src[28+j] << 19) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[28+j] >> 8) & 134217727;
		des[32+j] |= (src[32+j] << 24) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[32+j] >> 3) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[32+j] >> 30) & 134217727;
		des[40+j] |= (src[36+j] << 2) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[36+j] >> 25) & 134217727;
		des[44+j] |= (src[40+j] << 7) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[40+j] >> 20) & 134217727;
		des[48+j] |= (src[44+j] << 12) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[44+j] >> 15) & 134217727;
		des[52+j] |= (src[48+j] << 17) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[48+j] >> 10) & 134217727;
		des[56+j] |= (src[52+j] << 22) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[52+j] >> 5) & 134217727;
	}
}

template<typename T>
void KAFOR_unpack_16len_27bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 134217727;
		des[j] |= (src[4+j] << 8) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 19) & 134217727;
		des[4+j] |= (src[8+j] << 13) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 14) & 134217727;
		des[8+j] |= (src[12+j] << 18) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 9) & 134217727;
		des[12+j] |= (src[16+j] << 23) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j] >> 4) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 31) & 134217727;
		des[20+j] |= (src[20+j] << 1) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 26) & 134217727;
		des[24+j] |= (src[24+j] << 6) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j] >> 21) & 134217727;
		des[28+j] |= (src[28+j] << 11) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[28+j] >> 16) & 134217727;
		des[32+j] |= (src[32+j] << 16) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[32+j] >> 11) & 134217727;
		des[36+j] |= (src[36+j] << 21) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[36+j] >> 6) & 134217727;
		des[40+j] |= (src[40+j] << 26) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[40+j] >> 1) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[40+j] >> 28) & 134217727;
		des[48+j] |= (src[44+j] << 4) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[44+j] >> 23) & 134217727;
		des[52+j] |= (src[48+j] << 9) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[48+j] >> 18) & 134217727;
		des[56+j] |= (src[52+j] << 14) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[52+j] >> 13) & 134217727;
		des[60+j] |= (src[56+j] << 19) & 134217727;
	}
}

template<typename T>
void KAFOR_unpack_16len_28bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 28) & 268435455;
		des[4+j] |= (src[4+j] << 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 24) & 268435455;
		des[8+j] |= (src[8+j] << 8) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 20) & 268435455;
		des[12+j] |= (src[12+j] << 12) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 16) & 268435455;
		des[16+j] |= (src[16+j] << 16) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 12) & 268435455;
		des[20+j] |= (src[20+j] << 20) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 8) & 268435455;
		des[24+j] |= (src[24+j] << 24) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j] >> 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[28+j]) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[28+j] >> 28) & 268435455;
		des[36+j] |= (src[32+j] << 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[32+j] >> 24) & 268435455;
		des[40+j] |= (src[36+j] << 8) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[36+j] >> 20) & 268435455;
		des[44+j] |= (src[40+j] << 12) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[40+j] >> 16) & 268435455;
		des[48+j] |= (src[44+j] << 16) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[44+j] >> 12) & 268435455;
		des[52+j] |= (src[48+j] << 20) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[48+j] >> 8) & 268435455;
		des[56+j] |= (src[52+j] << 24) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[52+j] >> 4) & 268435455;
	}
}

template<typename T>
void KAFOR_unpack_16len_28bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 268435455;
		des[j] |= (src[4+j] << 24) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j]) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 28) & 268435455;
		des[12+j] |= (src[12+j] << 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 24) & 268435455;
		des[16+j] |= (src[16+j] << 8) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 20) & 268435455;
		des[20+j] |= (src[20+j] << 12) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 16) & 268435455;
		des[24+j] |= (src[24+j] << 16) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j] >> 12) & 268435455;
		des[28+j] |= (src[28+j] << 20) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[28+j] >> 8) & 268435455;
		des[32+j] |= (src[32+j] << 24) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[32+j] >> 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[36+j]) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[36+j] >> 28) & 268435455;
		des[44+j] |= (src[40+j] << 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[40+j] >> 24) & 268435455;
		des[48+j] |= (src[44+j] << 8) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[44+j] >> 20) & 268435455;
		des[52+j] |= (src[48+j] << 12) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[48+j] >> 16) & 268435455;
		des[56+j] |= (src[52+j] << 16) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[52+j] >> 12) & 268435455;
		des[60+j] |= (src[56+j] << 20) & 268435455;
	}
}

template<typename T>
void KAFOR_unpack_16len_28bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 268435455;
		des[j] |= (src[4+j] << 16) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 12) & 268435455;
		des[4+j] |= (src[8+j] << 20) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 8) & 268435455;
		des[8+j] |= (src[12+j] << 24) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j]) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 28) & 268435455;
		des[20+j] |= (src[20+j] << 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 24) & 268435455;
		des[24+j] |= (src[24+j] << 8) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j] >> 20) & 268435455;
		des[28+j] |= (src[28+j] << 12) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[28+j] >> 16) & 268435455;
		des[32+j] |= (src[32+j] << 16) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[32+j] >> 12) & 268435455;
		des[36+j] |= (src[36+j] << 20) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[36+j] >> 8) & 268435455;
		des[40+j] |= (src[40+j] << 24) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[40+j] >> 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[44+j]) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[44+j] >> 28) & 268435455;
		des[52+j] |= (src[48+j] << 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[48+j] >> 24) & 268435455;
		des[56+j] |= (src[52+j] << 8) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[52+j] >> 20) & 268435455;
		des[60+j] |= (src[56+j] << 12) & 268435455;
	}
}

template<typename T>
void KAFOR_unpack_16len_28bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 268435455;
		des[j] |= (src[4+j] << 8) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 20) & 268435455;
		des[4+j] |= (src[8+j] << 12) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 16) & 268435455;
		des[8+j] |= (src[12+j] << 16) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 12) & 268435455;
		des[12+j] |= (src[16+j] << 20) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j] >> 8) & 268435455;
		des[16+j] |= (src[20+j] << 24) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[20+j] >> 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[24+j]) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j] >> 28) & 268435455;
		des[28+j] |= (src[28+j] << 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[28+j] >> 24) & 268435455;
		des[32+j] |= (src[32+j] << 8) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[32+j] >> 20) & 268435455;
		des[36+j] |= (src[36+j] << 12) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[36+j] >> 16) & 268435455;
		des[40+j] |= (src[40+j] << 16) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[40+j] >> 12) & 268435455;
		des[44+j] |= (src[44+j] << 20) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[44+j] >> 8) & 268435455;
		des[48+j] |= (src[48+j] << 24) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[48+j] >> 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[52+j]) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[52+j] >> 28) & 268435455;
		des[60+j] |= (src[56+j] << 4) & 268435455;
	}
}

template<typename T>
void KAFOR_unpack_16len_29bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 29) & 536870911;
		des[4+j] |= (src[4+j] << 3) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 26) & 536870911;
		des[8+j] |= (src[8+j] << 6) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 23) & 536870911;
		des[12+j] |= (src[12+j] << 9) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 20) & 536870911;
		des[16+j] |= (src[16+j] << 12) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 17) & 536870911;
		des[20+j] |= (src[20+j] << 15) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 14) & 536870911;
		des[24+j] |= (src[24+j] << 18) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j] >> 11) & 536870911;
		des[28+j] |= (src[28+j] << 21) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[28+j] >> 8) & 536870911;
		des[32+j] |= (src[32+j] << 24) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[32+j] >> 5) & 536870911;
		des[36+j] |= (src[36+j] << 27) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[36+j] >> 2) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[36+j] >> 31) & 536870911;
		des[44+j] |= (src[40+j] << 1) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[40+j] >> 28) & 536870911;
		des[48+j] |= (src[44+j] << 4) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[44+j] >> 25) & 536870911;
		des[52+j] |= (src[48+j] << 7) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[48+j] >> 22) & 536870911;
		des[56+j] |= (src[52+j] << 10) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[52+j] >> 19) & 536870911;
		des[60+j] |= (src[56+j] << 13) & 536870911;
	}
}

template<typename T>
void KAFOR_unpack_16len_29bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 536870911;
		des[j] |= (src[4+j] << 24) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 5) & 536870911;
		des[4+j] |= (src[8+j] << 27) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 2) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 31) & 536870911;
		des[12+j] |= (src[12+j] << 1) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 28) & 536870911;
		des[16+j] |= (src[16+j] << 4) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 25) & 536870911;
		des[20+j] |= (src[20+j] << 7) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 22) & 536870911;
		des[24+j] |= (src[24+j] << 10) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j] >> 19) & 536870911;
		des[28+j] |= (src[28+j] << 13) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[28+j] >> 16) & 536870911;
		des[32+j] |= (src[32+j] << 16) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[32+j] >> 13) & 536870911;
		des[36+j] |= (src[36+j] << 19) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[36+j] >> 10) & 536870911;
		des[40+j] |= (src[40+j] << 22) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[40+j] >> 7) & 536870911;
		des[44+j] |= (src[44+j] << 25) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[44+j] >> 4) & 536870911;
		des[48+j] |= (src[48+j] << 28) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[48+j] >> 1) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[48+j] >> 30) & 536870911;
		des[56+j] |= (src[52+j] << 2) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[52+j] >> 27) & 536870911;
		des[60+j] |= (src[56+j] << 5) & 536870911;
	}
}

template<typename T>
void KAFOR_unpack_16len_29bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 536870911;
		des[j] |= (src[4+j] << 16) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 13) & 536870911;
		des[4+j] |= (src[8+j] << 19) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 10) & 536870911;
		des[8+j] |= (src[12+j] << 22) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 7) & 536870911;
		des[12+j] |= (src[16+j] << 25) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j] >> 4) & 536870911;
		des[16+j] |= (src[20+j] << 28) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[20+j] >> 1) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 30) & 536870911;
		des[24+j] |= (src[24+j] << 2) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j] >> 27) & 536870911;
		des[28+j] |= (src[28+j] << 5) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[28+j] >> 24) & 536870911;
		des[32+j] |= (src[32+j] << 8) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[32+j] >> 21) & 536870911;
		des[36+j] |= (src[36+j] << 11) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[36+j] >> 18) & 536870911;
		des[40+j] |= (src[40+j] << 14) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[40+j] >> 15) & 536870911;
		des[44+j] |= (src[44+j] << 17) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[44+j] >> 12) & 536870911;
		des[48+j] |= (src[48+j] << 20) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[48+j] >> 9) & 536870911;
		des[52+j] |= (src[52+j] << 23) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[52+j] >> 6) & 536870911;
		des[56+j] |= (src[56+j] << 26) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[56+j] >> 3) & 536870911;
	}
}

template<typename T>
void KAFOR_unpack_16len_29bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 536870911;
		des[j] |= (src[4+j] << 8) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 21) & 536870911;
		des[4+j] |= (src[8+j] << 11) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 18) & 536870911;
		des[8+j] |= (src[12+j] << 14) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 15) & 536870911;
		des[12+j] |= (src[16+j] << 17) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j] >> 12) & 536870911;
		des[16+j] |= (src[20+j] << 20) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[20+j] >> 9) & 536870911;
		des[20+j] |= (src[24+j] << 23) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[24+j] >> 6) & 536870911;
		des[24+j] |= (src[28+j] << 26) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[28+j] >> 3) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[32+j]) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[32+j] >> 29) & 536870911;
		des[36+j] |= (src[36+j] << 3) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[36+j] >> 26) & 536870911;
		des[40+j] |= (src[40+j] << 6) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[40+j] >> 23) & 536870911;
		des[44+j] |= (src[44+j] << 9) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[44+j] >> 20) & 536870911;
		des[48+j] |= (src[48+j] << 12) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[48+j] >> 17) & 536870911;
		des[52+j] |= (src[52+j] << 15) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[52+j] >> 14) & 536870911;
		des[56+j] |= (src[56+j] << 18) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[56+j] >> 11) & 536870911;
		des[60+j] |= (src[60+j] << 21) & 536870911;
	}
}

template<typename T>
void KAFOR_unpack_16len_30bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 30) & 1073741823;
		des[4+j] |= (src[4+j] << 2) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 28) & 1073741823;
		des[8+j] |= (src[8+j] << 4) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 26) & 1073741823;
		des[12+j] |= (src[12+j] << 6) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 24) & 1073741823;
		des[16+j] |= (src[16+j] << 8) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 22) & 1073741823;
		des[20+j] |= (src[20+j] << 10) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 20) & 1073741823;
		des[24+j] |= (src[24+j] << 12) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j] >> 18) & 1073741823;
		des[28+j] |= (src[28+j] << 14) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[28+j] >> 16) & 1073741823;
		des[32+j] |= (src[32+j] << 16) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[32+j] >> 14) & 1073741823;
		des[36+j] |= (src[36+j] << 18) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[36+j] >> 12) & 1073741823;
		des[40+j] |= (src[40+j] << 20) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[40+j] >> 10) & 1073741823;
		des[44+j] |= (src[44+j] << 22) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[44+j] >> 8) & 1073741823;
		des[48+j] |= (src[48+j] << 24) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[48+j] >> 6) & 1073741823;
		des[52+j] |= (src[52+j] << 26) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[52+j] >> 4) & 1073741823;
		des[56+j] |= (src[56+j] << 28) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[56+j] >> 2) & 1073741823;
	}
}

template<typename T>
void KAFOR_unpack_16len_30bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 1073741823;
		des[j] |= (src[4+j] << 24) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 6) & 1073741823;
		des[4+j] |= (src[8+j] << 26) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 4) & 1073741823;
		des[8+j] |= (src[12+j] << 28) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 2) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j]) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 30) & 1073741823;
		des[20+j] |= (src[20+j] << 2) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 28) & 1073741823;
		des[24+j] |= (src[24+j] << 4) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j] >> 26) & 1073741823;
		des[28+j] |= (src[28+j] << 6) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[28+j] >> 24) & 1073741823;
		des[32+j] |= (src[32+j] << 8) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[32+j] >> 22) & 1073741823;
		des[36+j] |= (src[36+j] << 10) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[36+j] >> 20) & 1073741823;
		des[40+j] |= (src[40+j] << 12) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[40+j] >> 18) & 1073741823;
		des[44+j] |= (src[44+j] << 14) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[44+j] >> 16) & 1073741823;
		des[48+j] |= (src[48+j] << 16) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[48+j] >> 14) & 1073741823;
		des[52+j] |= (src[52+j] << 18) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[52+j] >> 12) & 1073741823;
		des[56+j] |= (src[56+j] << 20) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[56+j] >> 10) & 1073741823;
		des[60+j] |= (src[60+j] << 22) & 1073741823;
	}
}

template<typename T>
void KAFOR_unpack_16len_30bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 1073741823;
		des[j] |= (src[4+j] << 16) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 14) & 1073741823;
		des[4+j] |= (src[8+j] << 18) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 12) & 1073741823;
		des[8+j] |= (src[12+j] << 20) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 10) & 1073741823;
		des[12+j] |= (src[16+j] << 22) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j] >> 8) & 1073741823;
		des[16+j] |= (src[20+j] << 24) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[20+j] >> 6) & 1073741823;
		des[20+j] |= (src[24+j] << 26) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[24+j] >> 4) & 1073741823;
		des[24+j] |= (src[28+j] << 28) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[28+j] >> 2) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[32+j]) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[32+j] >> 30) & 1073741823;
		des[36+j] |= (src[36+j] << 2) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[36+j] >> 28) & 1073741823;
		des[40+j] |= (src[40+j] << 4) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[40+j] >> 26) & 1073741823;
		des[44+j] |= (src[44+j] << 6) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[44+j] >> 24) & 1073741823;
		des[48+j] |= (src[48+j] << 8) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[48+j] >> 22) & 1073741823;
		des[52+j] |= (src[52+j] << 10) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[52+j] >> 20) & 1073741823;
		des[56+j] |= (src[56+j] << 12) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[56+j] >> 18) & 1073741823;
		des[60+j] |= (src[60+j] << 14) & 1073741823;
	}
}

template<typename T>
void KAFOR_unpack_16len_30bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 1073741823;
		des[j] |= (src[4+j] << 8) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 22) & 1073741823;
		des[4+j] |= (src[8+j] << 10) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 20) & 1073741823;
		des[8+j] |= (src[12+j] << 12) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 18) & 1073741823;
		des[12+j] |= (src[16+j] << 14) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j] >> 16) & 1073741823;
		des[16+j] |= (src[20+j] << 16) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[20+j] >> 14) & 1073741823;
		des[20+j] |= (src[24+j] << 18) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[24+j] >> 12) & 1073741823;
		des[24+j] |= (src[28+j] << 20) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[28+j] >> 10) & 1073741823;
		des[28+j] |= (src[32+j] << 22) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[32+j] >> 8) & 1073741823;
		des[32+j] |= (src[36+j] << 24) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[36+j] >> 6) & 1073741823;
		des[36+j] |= (src[40+j] << 26) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[40+j] >> 4) & 1073741823;
		des[40+j] |= (src[44+j] << 28) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[44+j] >> 2) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[48+j]) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[48+j] >> 30) & 1073741823;
		des[52+j] |= (src[52+j] << 2) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[52+j] >> 28) & 1073741823;
		des[56+j] |= (src[56+j] << 4) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[56+j] >> 26) & 1073741823;
		des[60+j] |= (src[60+j] << 6) & 1073741823;
	}
}

template<typename T>
void KAFOR_unpack_16len_31bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 31) & 2147483647;
		des[4+j] |= (src[4+j] << 1) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 30) & 2147483647;
		des[8+j] |= (src[8+j] << 2) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 29) & 2147483647;
		des[12+j] |= (src[12+j] << 3) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 28) & 2147483647;
		des[16+j] |= (src[16+j] << 4) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 27) & 2147483647;
		des[20+j] |= (src[20+j] << 5) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 26) & 2147483647;
		des[24+j] |= (src[24+j] << 6) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j] >> 25) & 2147483647;
		des[28+j] |= (src[28+j] << 7) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[28+j] >> 24) & 2147483647;
		des[32+j] |= (src[32+j] << 8) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[32+j] >> 23) & 2147483647;
		des[36+j] |= (src[36+j] << 9) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[36+j] >> 22) & 2147483647;
		des[40+j] |= (src[40+j] << 10) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[40+j] >> 21) & 2147483647;
		des[44+j] |= (src[44+j] << 11) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[44+j] >> 20) & 2147483647;
		des[48+j] |= (src[48+j] << 12) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[48+j] >> 19) & 2147483647;
		des[52+j] |= (src[52+j] << 13) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[52+j] >> 18) & 2147483647;
		des[56+j] |= (src[56+j] << 14) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[56+j] >> 17) & 2147483647;
		des[60+j] |= (src[60+j] << 15) & 2147483647;
	}
}

template<typename T>
void KAFOR_unpack_16len_31bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 2147483647;
		des[j] |= (src[4+j] << 24) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 7) & 2147483647;
		des[4+j] |= (src[8+j] << 25) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 6) & 2147483647;
		des[8+j] |= (src[12+j] << 26) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 5) & 2147483647;
		des[12+j] |= (src[16+j] << 27) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j] >> 4) & 2147483647;
		des[16+j] |= (src[20+j] << 28) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[20+j] >> 3) & 2147483647;
		des[20+j] |= (src[24+j] << 29) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[24+j] >> 2) & 2147483647;
		des[24+j] |= (src[28+j] << 30) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[28+j] >> 1) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[32+j]) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[32+j] >> 31) & 2147483647;
		des[36+j] |= (src[36+j] << 1) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[36+j] >> 30) & 2147483647;
		des[40+j] |= (src[40+j] << 2) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[40+j] >> 29) & 2147483647;
		des[44+j] |= (src[44+j] << 3) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[44+j] >> 28) & 2147483647;
		des[48+j] |= (src[48+j] << 4) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[48+j] >> 27) & 2147483647;
		des[52+j] |= (src[52+j] << 5) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[52+j] >> 26) & 2147483647;
		des[56+j] |= (src[56+j] << 6) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[56+j] >> 25) & 2147483647;
		des[60+j] |= (src[60+j] << 7) & 2147483647;
	}
}

template<typename T>
void KAFOR_unpack_16len_31bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 2147483647;
		des[j] |= (src[4+j] << 16) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 15) & 2147483647;
		des[4+j] |= (src[8+j] << 17) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 14) & 2147483647;
		des[8+j] |= (src[12+j] << 18) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 13) & 2147483647;
		des[12+j] |= (src[16+j] << 19) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j] >> 12) & 2147483647;
		des[16+j] |= (src[20+j] << 20) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[20+j] >> 11) & 2147483647;
		des[20+j] |= (src[24+j] << 21) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[24+j] >> 10) & 2147483647;
		des[24+j] |= (src[28+j] << 22) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[28+j] >> 9) & 2147483647;
		des[28+j] |= (src[32+j] << 23) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[32+j] >> 8) & 2147483647;
		des[32+j] |= (src[36+j] << 24) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[36+j] >> 7) & 2147483647;
		des[36+j] |= (src[40+j] << 25) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[40+j] >> 6) & 2147483647;
		des[40+j] |= (src[44+j] << 26) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[44+j] >> 5) & 2147483647;
		des[44+j] |= (src[48+j] << 27) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[48+j] >> 4) & 2147483647;
		des[48+j] |= (src[52+j] << 28) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[52+j] >> 3) & 2147483647;
		des[52+j] |= (src[56+j] << 29) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[56+j] >> 2) & 2147483647;
		des[56+j] |= (src[60+j] << 30) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[60+j] >> 1) & 2147483647;
	}
}

template<typename T>
void KAFOR_unpack_16len_31bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 2147483647;
		des[j] |= (src[4+j] << 8) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 23) & 2147483647;
		des[4+j] |= (src[8+j] << 9) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 22) & 2147483647;
		des[8+j] |= (src[12+j] << 10) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 21) & 2147483647;
		des[12+j] |= (src[16+j] << 11) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j] >> 20) & 2147483647;
		des[16+j] |= (src[20+j] << 12) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[20+j] >> 19) & 2147483647;
		des[20+j] |= (src[24+j] << 13) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[24+j] >> 18) & 2147483647;
		des[24+j] |= (src[28+j] << 14) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[28+j] >> 17) & 2147483647;
		des[28+j] |= (src[32+j] << 15) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[32+j] >> 16) & 2147483647;
		des[32+j] |= (src[36+j] << 16) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[36+j] >> 15) & 2147483647;
		des[36+j] |= (src[40+j] << 17) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[40+j] >> 14) & 2147483647;
		des[40+j] |= (src[44+j] << 18) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[44+j] >> 13) & 2147483647;
		des[44+j] |= (src[48+j] << 19) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[48+j] >> 12) & 2147483647;
		des[48+j] |= (src[52+j] << 20) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[52+j] >> 11) & 2147483647;
		des[52+j] |= (src[56+j] << 21) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[56+j] >> 10) & 2147483647;
		des[56+j] |= (src[60+j] << 22) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[60+j] >> 9) & 2147483647;
		des[60+j] |= (src[64+j] << 23) & 2147483647;
	}
}

template<typename T>
void KAFOR_unpack_16len_32bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j]);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j]);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j]);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j]);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[20+j]);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[24+j]);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[28+j]);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[32+j]);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[36+j]);
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[40+j]);
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[44+j]);
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[48+j]);
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[52+j]);
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[56+j]);
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[60+j]);
	}
}

template<typename T>
void KAFOR_unpack_16len_32bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8);
		des[j] |= (src[4+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 8);
		des[4+j] |= (src[8+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 8);
		des[8+j] |= (src[12+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 8);
		des[12+j] |= (src[16+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j] >> 8);
		des[16+j] |= (src[20+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[20+j] >> 8);
		des[20+j] |= (src[24+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[24+j] >> 8);
		des[24+j] |= (src[28+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[28+j] >> 8);
		des[28+j] |= (src[32+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[32+j] >> 8);
		des[32+j] |= (src[36+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[36+j] >> 8);
		des[36+j] |= (src[40+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[40+j] >> 8);
		des[40+j] |= (src[44+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[44+j] >> 8);
		des[44+j] |= (src[48+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[48+j] >> 8);
		des[48+j] |= (src[52+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[52+j] >> 8);
		des[52+j] |= (src[56+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[56+j] >> 8);
		des[56+j] |= (src[60+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[60+j] >> 8);
		des[60+j] |= (src[64+j] << 24);
	}
}

template<typename T>
void KAFOR_unpack_16len_32bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16);
		des[j] |= (src[4+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 16);
		des[4+j] |= (src[8+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 16);
		des[8+j] |= (src[12+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 16);
		des[12+j] |= (src[16+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j] >> 16);
		des[16+j] |= (src[20+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[20+j] >> 16);
		des[20+j] |= (src[24+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[24+j] >> 16);
		des[24+j] |= (src[28+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[28+j] >> 16);
		des[28+j] |= (src[32+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[32+j] >> 16);
		des[32+j] |= (src[36+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[36+j] >> 16);
		des[36+j] |= (src[40+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[40+j] >> 16);
		des[40+j] |= (src[44+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[44+j] >> 16);
		des[44+j] |= (src[48+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[48+j] >> 16);
		des[48+j] |= (src[52+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[52+j] >> 16);
		des[52+j] |= (src[56+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[56+j] >> 16);
		des[56+j] |= (src[60+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[60+j] >> 16);
		des[60+j] |= (src[64+j] << 16);
	}
}

template<typename T>
void KAFOR_unpack_16len_32bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24);
		des[j] |= (src[4+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 24);
		des[4+j] |= (src[8+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 24);
		des[8+j] |= (src[12+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 24);
		des[12+j] |= (src[16+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j] >> 24);
		des[16+j] |= (src[20+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[20+j] >> 24);
		des[20+j] |= (src[24+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[24+j] >> 24);
		des[24+j] |= (src[28+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[28+j] >> 24);
		des[28+j] |= (src[32+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[32+j] >> 24);
		des[32+j] |= (src[36+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[36+j] >> 24);
		des[36+j] |= (src[40+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[40+j] >> 24);
		des[40+j] |= (src[44+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[44+j] >> 24);
		des[44+j] |= (src[48+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[48+j] >> 24);
		des[48+j] |= (src[52+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[52+j] >> 24);
		des[52+j] |= (src[56+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[56+j] >> 24);
		des[56+j] |= (src[60+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[60+j] >> 24);
		des[60+j] |= (src[64+j] << 8);
	}
}

template<typename T>
void KAFOR_unpack_32len_1bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 1) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 2) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 3) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 4) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 5) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 6) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 7) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[j] >> 8) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[j] >> 9) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[j] >> 10) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[j] >> 11) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[j] >> 12) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[j] >> 13) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[j] >> 14) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[j] >> 15) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[j] >> 16) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[j] >> 17) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[j] >> 18) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[j] >> 19) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[j] >> 20) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[j] >> 21) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[j] >> 22) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[j] >> 23) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[j] >> 24) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[j] >> 25) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[j] >> 26) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[j] >> 27) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[j] >> 28) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[j] >> 29) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[j] >> 30) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[j] >> 31) & 1;
	}
}

template<typename T>
void KAFOR_unpack_32len_1bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 9) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 10) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 11) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 12) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 13) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 14) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 15) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[j] >> 16) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[j] >> 17) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[j] >> 18) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[j] >> 19) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[j] >> 20) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[j] >> 21) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[j] >> 22) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[j] >> 23) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[j] >> 24) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[j] >> 25) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[j] >> 26) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[j] >> 27) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[j] >> 28) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[j] >> 29) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[j] >> 30) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[j] >> 31) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[4+j]) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[4+j] >> 1) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[4+j] >> 2) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[4+j] >> 3) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[4+j] >> 4) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[4+j] >> 5) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[4+j] >> 6) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[4+j] >> 7) & 1;
	}
}

template<typename T>
void KAFOR_unpack_32len_1bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 17) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 18) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 19) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 20) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 21) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 22) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 23) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[j] >> 24) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[j] >> 25) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[j] >> 26) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[j] >> 27) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[j] >> 28) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[j] >> 29) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[j] >> 30) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[j] >> 31) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[4+j]) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[4+j] >> 1) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[4+j] >> 2) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[4+j] >> 3) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[4+j] >> 4) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[4+j] >> 5) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[4+j] >> 6) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[4+j] >> 7) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[4+j] >> 8) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[4+j] >> 9) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[4+j] >> 10) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[4+j] >> 11) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[4+j] >> 12) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[4+j] >> 13) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[4+j] >> 14) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[4+j] >> 15) & 1;
	}
}

template<typename T>
void KAFOR_unpack_32len_1bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 25) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 26) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 27) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 28) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 29) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 30) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 31) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j]) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 1) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 2) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 3) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 4) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 5) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[4+j] >> 6) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[4+j] >> 7) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[4+j] >> 8) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[4+j] >> 9) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[4+j] >> 10) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[4+j] >> 11) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[4+j] >> 12) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[4+j] >> 13) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[4+j] >> 14) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[4+j] >> 15) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[4+j] >> 16) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[4+j] >> 17) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[4+j] >> 18) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[4+j] >> 19) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[4+j] >> 20) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[4+j] >> 21) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[4+j] >> 22) & 1;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[4+j] >> 23) & 1;
	}
}

template<typename T>
void KAFOR_unpack_32len_2bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 2) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 4) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 6) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 8) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 10) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 12) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 14) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[j] >> 16) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[j] >> 18) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[j] >> 20) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[j] >> 22) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[j] >> 24) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[j] >> 26) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[j] >> 28) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[j] >> 30) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[4+j]) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[4+j] >> 2) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[4+j] >> 4) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[4+j] >> 6) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[4+j] >> 8) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[4+j] >> 10) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[4+j] >> 12) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[4+j] >> 14) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[4+j] >> 16) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[4+j] >> 18) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[4+j] >> 20) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[4+j] >> 22) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[4+j] >> 24) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[4+j] >> 26) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[4+j] >> 28) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[4+j] >> 30) & 3;
	}
}

template<typename T>
void KAFOR_unpack_32len_2bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 10) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 12) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 14) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 16) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 18) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 20) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 22) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[j] >> 24) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[j] >> 26) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[j] >> 28) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[j] >> 30) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j]) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 2) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[4+j] >> 4) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[4+j] >> 6) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[4+j] >> 8) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[4+j] >> 10) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[4+j] >> 12) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[4+j] >> 14) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[4+j] >> 16) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[4+j] >> 18) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[4+j] >> 20) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[4+j] >> 22) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[4+j] >> 24) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[4+j] >> 26) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[4+j] >> 28) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[4+j] >> 30) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[8+j]) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[8+j] >> 2) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[8+j] >> 4) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[8+j] >> 6) & 3;
	}
}

template<typename T>
void KAFOR_unpack_32len_2bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 18) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 20) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 22) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 24) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 26) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 28) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 30) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j]) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 2) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 4) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 6) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 8) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 10) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[4+j] >> 12) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[4+j] >> 14) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[4+j] >> 16) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[4+j] >> 18) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[4+j] >> 20) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[4+j] >> 22) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[4+j] >> 24) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[4+j] >> 26) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[4+j] >> 28) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[4+j] >> 30) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[8+j]) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[8+j] >> 2) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[8+j] >> 4) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[8+j] >> 6) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[8+j] >> 8) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[8+j] >> 10) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[8+j] >> 12) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[8+j] >> 14) & 3;
	}
}

template<typename T>
void KAFOR_unpack_32len_2bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 26) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 28) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 30) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j]) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 2) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 4) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 6) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 8) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 10) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 12) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 14) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 16) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 18) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[4+j] >> 20) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[4+j] >> 22) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[4+j] >> 24) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[4+j] >> 26) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[4+j] >> 28) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[4+j] >> 30) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[8+j]) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[8+j] >> 2) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[8+j] >> 4) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[8+j] >> 6) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[8+j] >> 8) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[8+j] >> 10) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[8+j] >> 12) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[8+j] >> 14) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[8+j] >> 16) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[8+j] >> 18) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[8+j] >> 20) & 3;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[8+j] >> 22) & 3;
	}
}

template<typename T>
void KAFOR_unpack_32len_3bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 3) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 6) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 9) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 12) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 15) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 18) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 21) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[j] >> 24) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[j] >> 27) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[j] >> 30) & 7;
		des[40+j] |= (src[4+j] << 2) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 1) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 4) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 7) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[4+j] >> 10) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[4+j] >> 13) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[4+j] >> 16) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[4+j] >> 19) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[4+j] >> 22) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[4+j] >> 25) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[4+j] >> 28) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[4+j] >> 31) & 7;
		des[84+j] |= (src[8+j] << 1) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[8+j] >> 2) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[8+j] >> 5) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[8+j] >> 8) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[8+j] >> 11) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[8+j] >> 14) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[8+j] >> 17) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[8+j] >> 20) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[8+j] >> 23) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[8+j] >> 26) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[8+j] >> 29) & 7;
	}
}

template<typename T>
void KAFOR_unpack_32len_3bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 11) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 14) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 17) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 20) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 23) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 26) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 29) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j]) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 3) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 6) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 9) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 12) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 15) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[4+j] >> 18) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[4+j] >> 21) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[4+j] >> 24) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[4+j] >> 27) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[4+j] >> 30) & 7;
		des[72+j] |= (src[8+j] << 2) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[8+j] >> 1) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[8+j] >> 4) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[8+j] >> 7) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[8+j] >> 10) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[8+j] >> 13) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[8+j] >> 16) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[8+j] >> 19) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[8+j] >> 22) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[8+j] >> 25) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[8+j] >> 28) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[8+j] >> 31) & 7;
		des[116+j] |= (src[12+j] << 1) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[12+j] >> 2) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[12+j] >> 5) & 7;
	}
}

template<typename T>
void KAFOR_unpack_32len_3bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 19) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 22) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 25) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 28) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 31) & 7;
		des[20+j] |= (src[4+j] << 1) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 2) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 5) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 8) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 11) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 14) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 17) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 20) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 23) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[4+j] >> 26) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[4+j] >> 29) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[8+j]) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[8+j] >> 3) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[8+j] >> 6) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[8+j] >> 9) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[8+j] >> 12) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[8+j] >> 15) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[8+j] >> 18) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[8+j] >> 21) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[8+j] >> 24) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[8+j] >> 27) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[8+j] >> 30) & 7;
		des[104+j] |= (src[12+j] << 2) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[12+j] >> 1) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[12+j] >> 4) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[12+j] >> 7) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[12+j] >> 10) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[12+j] >> 13) & 7;
	}
}

template<typename T>
void KAFOR_unpack_32len_3bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 27) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 30) & 7;
		des[8+j] |= (src[4+j] << 2) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 1) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 4) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 7) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 10) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 13) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 16) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 19) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 22) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 25) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 28) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 31) & 7;
		des[52+j] |= (src[8+j] << 1) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j] >> 2) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[8+j] >> 5) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[8+j] >> 8) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[8+j] >> 11) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[8+j] >> 14) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[8+j] >> 17) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[8+j] >> 20) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[8+j] >> 23) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[8+j] >> 26) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[8+j] >> 29) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[12+j]) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[12+j] >> 3) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[12+j] >> 6) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[12+j] >> 9) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[12+j] >> 12) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[12+j] >> 15) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[12+j] >> 18) & 7;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[12+j] >> 21) & 7;
	}
}

template<typename T>
void KAFOR_unpack_32len_4bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 4) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 8) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 12) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 16) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 20) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 24) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 28) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j]) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 4) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 8) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 12) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 16) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 20) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[4+j] >> 24) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[4+j] >> 28) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[8+j]) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[8+j] >> 4) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[8+j] >> 8) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[8+j] >> 12) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[8+j] >> 16) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[8+j] >> 20) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[8+j] >> 24) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[8+j] >> 28) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[12+j]) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[12+j] >> 4) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[12+j] >> 8) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[12+j] >> 12) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[12+j] >> 16) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[12+j] >> 20) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[12+j] >> 24) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[12+j] >> 28) & 15;
	}
}

template<typename T>
void KAFOR_unpack_32len_4bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 12) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 16) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 20) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 24) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 28) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j]) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 4) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 8) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 12) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 16) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 20) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 24) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 28) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j]) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[8+j] >> 4) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[8+j] >> 8) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[8+j] >> 12) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[8+j] >> 16) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[8+j] >> 20) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[8+j] >> 24) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[8+j] >> 28) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[12+j]) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[12+j] >> 4) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[12+j] >> 8) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[12+j] >> 12) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[12+j] >> 16) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[12+j] >> 20) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[12+j] >> 24) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[12+j] >> 28) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[16+j]) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[16+j] >> 4) & 15;
	}
}

template<typename T>
void KAFOR_unpack_32len_4bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 20) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 24) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 28) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j]) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 4) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 8) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 12) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 16) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 20) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 24) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 28) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j]) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 4) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j] >> 8) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[8+j] >> 12) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[8+j] >> 16) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[8+j] >> 20) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[8+j] >> 24) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[8+j] >> 28) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[12+j]) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[12+j] >> 4) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[12+j] >> 8) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[12+j] >> 12) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[12+j] >> 16) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[12+j] >> 20) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[12+j] >> 24) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[12+j] >> 28) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[16+j]) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[16+j] >> 4) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[16+j] >> 8) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[16+j] >> 12) & 15;
	}
}

template<typename T>
void KAFOR_unpack_32len_4bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 28) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j]) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 4) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 8) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 12) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 16) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 20) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 24) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 28) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j]) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 4) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j] >> 8) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 12) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j] >> 16) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[8+j] >> 20) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[8+j] >> 24) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[8+j] >> 28) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[12+j]) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[12+j] >> 4) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[12+j] >> 8) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[12+j] >> 12) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[12+j] >> 16) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[12+j] >> 20) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[12+j] >> 24) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[12+j] >> 28) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[16+j]) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[16+j] >> 4) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[16+j] >> 8) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[16+j] >> 12) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[16+j] >> 16) & 15;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[16+j] >> 20) & 15;
	}
}

template<typename T>
void KAFOR_unpack_32len_5bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 5) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 10) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 15) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 20) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 25) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 30) & 31;
		des[24+j] |= (src[4+j] << 2) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 3) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 8) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 13) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 18) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 23) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 28) & 31;
		des[48+j] |= (src[8+j] << 4) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 1) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j] >> 6) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[8+j] >> 11) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[8+j] >> 16) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[8+j] >> 21) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[8+j] >> 26) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[8+j] >> 31) & 31;
		des[76+j] |= (src[12+j] << 1) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[12+j] >> 4) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[12+j] >> 9) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[12+j] >> 14) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[12+j] >> 19) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[12+j] >> 24) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[12+j] >> 29) & 31;
		des[100+j] |= (src[16+j] << 3) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[16+j] >> 2) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[16+j] >> 7) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[16+j] >> 12) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[16+j] >> 17) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[16+j] >> 22) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[16+j] >> 27) & 31;
	}
}

template<typename T>
void KAFOR_unpack_32len_5bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 13) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 18) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 23) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 28) & 31;
		des[16+j] |= (src[4+j] << 4) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 1) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 6) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 11) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 16) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 21) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 26) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 31) & 31;
		des[44+j] |= (src[8+j] << 1) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j] >> 4) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 9) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j] >> 14) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[8+j] >> 19) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[8+j] >> 24) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[8+j] >> 29) & 31;
		des[68+j] |= (src[12+j] << 3) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[12+j] >> 2) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[12+j] >> 7) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[12+j] >> 12) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[12+j] >> 17) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[12+j] >> 22) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[12+j] >> 27) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[16+j]) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[16+j] >> 5) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[16+j] >> 10) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[16+j] >> 15) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[16+j] >> 20) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[16+j] >> 25) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[16+j] >> 30) & 31;
		des[120+j] |= (src[20+j] << 2) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[20+j] >> 3) & 31;
	}
}

template<typename T>
void KAFOR_unpack_32len_5bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 21) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 26) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 31) & 31;
		des[12+j] |= (src[4+j] << 1) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 4) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 9) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 14) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 19) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 24) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 29) & 31;
		des[36+j] |= (src[8+j] << 3) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 2) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 7) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j] >> 12) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 17) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j] >> 22) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[8+j] >> 27) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[12+j]) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[12+j] >> 5) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[12+j] >> 10) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[12+j] >> 15) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[12+j] >> 20) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[12+j] >> 25) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[12+j] >> 30) & 31;
		des[88+j] |= (src[16+j] << 2) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[16+j] >> 3) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[16+j] >> 8) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[16+j] >> 13) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[16+j] >> 18) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[16+j] >> 23) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[16+j] >> 28) & 31;
		des[112+j] |= (src[20+j] << 4) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[20+j] >> 1) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[20+j] >> 6) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[20+j] >> 11) & 31;
	}
}

template<typename T>
void KAFOR_unpack_32len_5bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 29) & 31;
		des[4+j] |= (src[4+j] << 3) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 2) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 7) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 12) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 17) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 22) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 27) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j]) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 5) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 10) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 15) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j] >> 20) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 25) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j] >> 30) & 31;
		des[56+j] |= (src[12+j] << 2) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[12+j] >> 3) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[12+j] >> 8) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[12+j] >> 13) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[12+j] >> 18) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[12+j] >> 23) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[12+j] >> 28) & 31;
		des[80+j] |= (src[16+j] << 4) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[16+j] >> 1) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[16+j] >> 6) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[16+j] >> 11) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[16+j] >> 16) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[16+j] >> 21) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[16+j] >> 26) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[16+j] >> 31) & 31;
		des[108+j] |= (src[20+j] << 1) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[20+j] >> 4) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[20+j] >> 9) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[20+j] >> 14) & 31;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[20+j] >> 19) & 31;
	}
}

template<typename T>
void KAFOR_unpack_32len_6bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 6) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 12) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 18) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 24) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 30) & 63;
		des[20+j] |= (src[4+j] << 2) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 4) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 10) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 16) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 22) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 28) & 63;
		des[40+j] |= (src[8+j] << 4) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 2) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j] >> 8) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 14) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j] >> 20) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[8+j] >> 26) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[12+j]) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[12+j] >> 6) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[12+j] >> 12) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[12+j] >> 18) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[12+j] >> 24) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[12+j] >> 30) & 63;
		des[84+j] |= (src[16+j] << 2) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[16+j] >> 4) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[16+j] >> 10) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[16+j] >> 16) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[16+j] >> 22) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[16+j] >> 28) & 63;
		des[104+j] |= (src[20+j] << 4) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[20+j] >> 2) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[20+j] >> 8) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[20+j] >> 14) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[20+j] >> 20) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[20+j] >> 26) & 63;
	}
}

template<typename T>
void KAFOR_unpack_32len_6bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 14) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 20) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 26) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j]) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 6) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 12) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 18) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 24) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 30) & 63;
		des[36+j] |= (src[8+j] << 2) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 4) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 10) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j] >> 16) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 22) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j] >> 28) & 63;
		des[56+j] |= (src[12+j] << 4) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[12+j] >> 2) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[12+j] >> 8) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[12+j] >> 14) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[12+j] >> 20) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[12+j] >> 26) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[16+j]) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[16+j] >> 6) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[16+j] >> 12) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[16+j] >> 18) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[16+j] >> 24) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[16+j] >> 30) & 63;
		des[100+j] |= (src[20+j] << 2) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[20+j] >> 4) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[20+j] >> 10) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[20+j] >> 16) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[20+j] >> 22) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[20+j] >> 28) & 63;
		des[120+j] |= (src[24+j] << 4) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[24+j] >> 2) & 63;
	}
}

template<typename T>
void KAFOR_unpack_32len_6bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 22) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 28) & 63;
		des[8+j] |= (src[4+j] << 4) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 2) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 8) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 14) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 20) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 26) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j]) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 6) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 12) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 18) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j] >> 24) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 30) & 63;
		des[52+j] |= (src[12+j] << 2) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[12+j] >> 4) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[12+j] >> 10) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[12+j] >> 16) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[12+j] >> 22) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[12+j] >> 28) & 63;
		des[72+j] |= (src[16+j] << 4) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[16+j] >> 2) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[16+j] >> 8) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[16+j] >> 14) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[16+j] >> 20) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[16+j] >> 26) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[20+j]) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[20+j] >> 6) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[20+j] >> 12) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[20+j] >> 18) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[20+j] >> 24) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[20+j] >> 30) & 63;
		des[116+j] |= (src[24+j] << 2) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[24+j] >> 4) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[24+j] >> 10) & 63;
	}
}

template<typename T>
void KAFOR_unpack_32len_6bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 30) & 63;
		des[4+j] |= (src[4+j] << 2) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 4) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 10) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 16) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 22) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 28) & 63;
		des[24+j] |= (src[8+j] << 4) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 2) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 8) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 14) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 20) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 26) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j]) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[12+j] >> 6) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[12+j] >> 12) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[12+j] >> 18) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[12+j] >> 24) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[12+j] >> 30) & 63;
		des[68+j] |= (src[16+j] << 2) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[16+j] >> 4) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[16+j] >> 10) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[16+j] >> 16) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[16+j] >> 22) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[16+j] >> 28) & 63;
		des[88+j] |= (src[20+j] << 4) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[20+j] >> 2) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[20+j] >> 8) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[20+j] >> 14) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[20+j] >> 20) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[20+j] >> 26) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[24+j]) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[24+j] >> 6) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[24+j] >> 12) & 63;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[24+j] >> 18) & 63;
	}
}

template<typename T>
void KAFOR_unpack_32len_7bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 7) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 14) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 21) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 28) & 127;
		des[16+j] |= (src[4+j] << 4) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 3) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 10) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 17) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 24) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 31) & 127;
		des[36+j] |= (src[8+j] << 1) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 6) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 13) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j] >> 20) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 27) & 127;
		des[52+j] |= (src[12+j] << 5) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[12+j] >> 2) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[12+j] >> 9) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[12+j] >> 16) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[12+j] >> 23) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[12+j] >> 30) & 127;
		des[72+j] |= (src[16+j] << 2) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[16+j] >> 5) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[16+j] >> 12) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[16+j] >> 19) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[16+j] >> 26) & 127;
		des[88+j] |= (src[20+j] << 6) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[20+j] >> 1) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[20+j] >> 8) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[20+j] >> 15) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[20+j] >> 22) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[20+j] >> 29) & 127;
		des[108+j] |= (src[24+j] << 3) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[24+j] >> 4) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[24+j] >> 11) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[24+j] >> 18) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[24+j] >> 25) & 127;
	}
}

template<typename T>
void KAFOR_unpack_32len_7bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 15) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 22) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 29) & 127;
		des[12+j] |= (src[4+j] << 3) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 4) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 11) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 18) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 25) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j]) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 7) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 14) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 21) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j] >> 28) & 127;
		des[48+j] |= (src[12+j] << 4) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[12+j] >> 3) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[12+j] >> 10) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[12+j] >> 17) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[12+j] >> 24) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[12+j] >> 31) & 127;
		des[68+j] |= (src[16+j] << 1) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[16+j] >> 6) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[16+j] >> 13) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[16+j] >> 20) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[16+j] >> 27) & 127;
		des[84+j] |= (src[20+j] << 5) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[20+j] >> 2) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[20+j] >> 9) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[20+j] >> 16) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[20+j] >> 23) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[20+j] >> 30) & 127;
		des[104+j] |= (src[24+j] << 2) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[24+j] >> 5) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[24+j] >> 12) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[24+j] >> 19) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[24+j] >> 26) & 127;
		des[120+j] |= (src[28+j] << 6) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[28+j] >> 1) & 127;
	}
}

template<typename T>
void KAFOR_unpack_32len_7bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 23) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 30) & 127;
		des[8+j] |= (src[4+j] << 2) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 5) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 12) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 19) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 26) & 127;
		des[24+j] |= (src[8+j] << 6) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 1) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 8) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 15) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 22) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 29) & 127;
		des[44+j] |= (src[12+j] << 3) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j] >> 4) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[12+j] >> 11) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[12+j] >> 18) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[12+j] >> 25) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[16+j]) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[16+j] >> 7) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[16+j] >> 14) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[16+j] >> 21) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[16+j] >> 28) & 127;
		des[80+j] |= (src[20+j] << 4) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[20+j] >> 3) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[20+j] >> 10) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[20+j] >> 17) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[20+j] >> 24) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[20+j] >> 31) & 127;
		des[100+j] |= (src[24+j] << 1) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[24+j] >> 6) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[24+j] >> 13) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[24+j] >> 20) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[24+j] >> 27) & 127;
		des[116+j] |= (src[28+j] << 5) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[28+j] >> 2) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[28+j] >> 9) & 127;
	}
}

template<typename T>
void KAFOR_unpack_32len_7bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 31) & 127;
		des[4+j] |= (src[4+j] << 1) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 6) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 13) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 20) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 27) & 127;
		des[20+j] |= (src[8+j] << 5) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 2) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 9) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 16) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 23) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 30) & 127;
		des[40+j] |= (src[12+j] << 2) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 5) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j] >> 12) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[12+j] >> 19) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[12+j] >> 26) & 127;
		des[56+j] |= (src[16+j] << 6) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j] >> 1) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[16+j] >> 8) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[16+j] >> 15) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[16+j] >> 22) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[16+j] >> 29) & 127;
		des[76+j] |= (src[20+j] << 3) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[20+j] >> 4) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[20+j] >> 11) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[20+j] >> 18) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[20+j] >> 25) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[24+j]) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[24+j] >> 7) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[24+j] >> 14) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[24+j] >> 21) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[24+j] >> 28) & 127;
		des[112+j] |= (src[28+j] << 4) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[28+j] >> 3) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[28+j] >> 10) & 127;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[28+j] >> 17) & 127;
	}
}

template<typename T>
void KAFOR_unpack_32len_8bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[12+j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[12+j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[12+j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[16+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[16+j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[16+j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[16+j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[20+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[20+j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[20+j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[20+j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[24+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[24+j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[24+j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[24+j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[28+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[28+j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[28+j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[28+j] >> 24) & 255;
	}
}

template<typename T>
void KAFOR_unpack_32len_8bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[12+j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[12+j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[16+j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[16+j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[16+j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[20+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[20+j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[20+j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[20+j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[24+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[24+j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[24+j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[24+j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[28+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[28+j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[28+j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[28+j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[32+j]) & 255;
	}
}

template<typename T>
void KAFOR_unpack_32len_8bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[12+j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[16+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[16+j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[16+j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[20+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[20+j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[20+j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[20+j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[24+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[24+j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[24+j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[24+j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[28+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[28+j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[28+j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[28+j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[32+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[32+j] >> 8) & 255;
	}
}

template<typename T>
void KAFOR_unpack_32len_8bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[16+j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[16+j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[20+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[20+j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[20+j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[20+j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[24+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[24+j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[24+j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[24+j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[28+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[28+j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[28+j] >> 16) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[28+j] >> 24) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[32+j]) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[32+j] >> 8) & 255;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[32+j] >> 16) & 255;
	}
}

template<typename T>
void KAFOR_unpack_32len_9bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 9) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 18) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 27) & 511;
		des[12+j] |= (src[4+j] << 5) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 4) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 13) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 22) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 31) & 511;
		des[28+j] |= (src[8+j] << 1) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 8) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 17) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 26) & 511;
		des[40+j] |= (src[12+j] << 6) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 3) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j] >> 12) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[12+j] >> 21) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[12+j] >> 30) & 511;
		des[56+j] |= (src[16+j] << 2) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j] >> 7) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[16+j] >> 16) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[16+j] >> 25) & 511;
		des[68+j] |= (src[20+j] << 7) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[20+j] >> 2) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[20+j] >> 11) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[20+j] >> 20) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[20+j] >> 29) & 511;
		des[84+j] |= (src[24+j] << 3) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[24+j] >> 6) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[24+j] >> 15) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[24+j] >> 24) & 511;
		des[96+j] |= (src[28+j] << 8) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[28+j] >> 1) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[28+j] >> 10) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[28+j] >> 19) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[28+j] >> 28) & 511;
		des[112+j] |= (src[32+j] << 4) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[32+j] >> 5) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[32+j] >> 14) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[32+j] >> 23) & 511;
	}
}

template<typename T>
void KAFOR_unpack_32len_9bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 17) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 26) & 511;
		des[8+j] |= (src[4+j] << 6) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 3) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 12) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 21) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 30) & 511;
		des[24+j] |= (src[8+j] << 2) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 7) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 16) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 25) & 511;
		des[36+j] |= (src[12+j] << 7) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 2) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 11) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j] >> 20) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[12+j] >> 29) & 511;
		des[52+j] |= (src[16+j] << 3) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[16+j] >> 6) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j] >> 15) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[16+j] >> 24) & 511;
		des[64+j] |= (src[20+j] << 8) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[20+j] >> 1) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[20+j] >> 10) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[20+j] >> 19) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[20+j] >> 28) & 511;
		des[80+j] |= (src[24+j] << 4) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[24+j] >> 5) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[24+j] >> 14) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[24+j] >> 23) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[28+j]) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[28+j] >> 9) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[28+j] >> 18) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[28+j] >> 27) & 511;
		des[108+j] |= (src[32+j] << 5) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[32+j] >> 4) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[32+j] >> 13) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[32+j] >> 22) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[32+j] >> 31) & 511;
		des[124+j] |= (src[36+j] << 1) & 511;
	}
}

template<typename T>
void KAFOR_unpack_32len_9bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 25) & 511;
		des[4+j] |= (src[4+j] << 7) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 2) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 11) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 20) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 29) & 511;
		des[20+j] |= (src[8+j] << 3) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 6) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 15) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 24) & 511;
		des[32+j] |= (src[12+j] << 8) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 1) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 10) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 19) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j] >> 28) & 511;
		des[48+j] |= (src[16+j] << 4) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 5) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[16+j] >> 14) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j] >> 23) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[20+j]) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[20+j] >> 9) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[20+j] >> 18) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[20+j] >> 27) & 511;
		des[76+j] |= (src[24+j] << 5) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[24+j] >> 4) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[24+j] >> 13) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[24+j] >> 22) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[24+j] >> 31) & 511;
		des[92+j] |= (src[28+j] << 1) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[28+j] >> 8) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[28+j] >> 17) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[28+j] >> 26) & 511;
		des[104+j] |= (src[32+j] << 6) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[32+j] >> 3) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[32+j] >> 12) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[32+j] >> 21) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[32+j] >> 30) & 511;
		des[120+j] |= (src[36+j] << 2) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[36+j] >> 7) & 511;
	}
}

template<typename T>
void KAFOR_unpack_32len_9bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 511;
		des[j] |= (src[4+j] << 8) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 1) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 10) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 19) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 28) & 511;
		des[16+j] |= (src[8+j] << 4) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 5) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 14) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 23) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j]) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 9) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 18) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 27) & 511;
		des[44+j] |= (src[16+j] << 5) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j] >> 4) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 13) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[16+j] >> 22) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j] >> 31) & 511;
		des[60+j] |= (src[20+j] << 1) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[20+j] >> 8) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[20+j] >> 17) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[20+j] >> 26) & 511;
		des[72+j] |= (src[24+j] << 6) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[24+j] >> 3) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[24+j] >> 12) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[24+j] >> 21) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[24+j] >> 30) & 511;
		des[88+j] |= (src[28+j] << 2) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[28+j] >> 7) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[28+j] >> 16) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[28+j] >> 25) & 511;
		des[100+j] |= (src[32+j] << 7) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[32+j] >> 2) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[32+j] >> 11) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[32+j] >> 20) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[32+j] >> 29) & 511;
		des[116+j] |= (src[36+j] << 3) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[36+j] >> 6) & 511;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[36+j] >> 15) & 511;
	}
}

template<typename T>
void KAFOR_unpack_32len_10bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 10) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 20) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 30) & 1023;
		des[12+j] |= (src[4+j] << 2) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 8) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 18) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 28) & 1023;
		des[24+j] |= (src[8+j] << 4) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 6) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 16) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 26) & 1023;
		des[36+j] |= (src[12+j] << 6) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 4) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 14) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j] >> 24) & 1023;
		des[48+j] |= (src[16+j] << 8) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 2) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[16+j] >> 12) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j] >> 22) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[20+j]) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[20+j] >> 10) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[20+j] >> 20) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[20+j] >> 30) & 1023;
		des[76+j] |= (src[24+j] << 2) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[24+j] >> 8) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[24+j] >> 18) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[24+j] >> 28) & 1023;
		des[88+j] |= (src[28+j] << 4) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[28+j] >> 6) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[28+j] >> 16) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[28+j] >> 26) & 1023;
		des[100+j] |= (src[32+j] << 6) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[32+j] >> 4) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[32+j] >> 14) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[32+j] >> 24) & 1023;
		des[112+j] |= (src[36+j] << 8) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[36+j] >> 2) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[36+j] >> 12) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[36+j] >> 22) & 1023;
	}
}

template<typename T>
void KAFOR_unpack_32len_10bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 18) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 28) & 1023;
		des[8+j] |= (src[4+j] << 4) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 6) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 16) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 26) & 1023;
		des[20+j] |= (src[8+j] << 6) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 4) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 14) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 24) & 1023;
		des[32+j] |= (src[12+j] << 8) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 2) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 12) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 22) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j]) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 10) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[16+j] >> 20) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j] >> 30) & 1023;
		des[60+j] |= (src[20+j] << 2) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[20+j] >> 8) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[20+j] >> 18) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[20+j] >> 28) & 1023;
		des[72+j] |= (src[24+j] << 4) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[24+j] >> 6) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[24+j] >> 16) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[24+j] >> 26) & 1023;
		des[84+j] |= (src[28+j] << 6) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[28+j] >> 4) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[28+j] >> 14) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[28+j] >> 24) & 1023;
		des[96+j] |= (src[32+j] << 8) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[32+j] >> 2) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[32+j] >> 12) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[32+j] >> 22) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[36+j]) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[36+j] >> 10) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[36+j] >> 20) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[36+j] >> 30) & 1023;
		des[124+j] |= (src[40+j] << 2) & 1023;
	}
}

template<typename T>
void KAFOR_unpack_32len_10bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 26) & 1023;
		des[4+j] |= (src[4+j] << 6) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 4) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 14) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 24) & 1023;
		des[16+j] |= (src[8+j] << 8) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 2) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 12) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 22) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j]) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 10) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 20) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 30) & 1023;
		des[44+j] |= (src[16+j] << 2) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j] >> 8) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 18) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[16+j] >> 28) & 1023;
		des[56+j] |= (src[20+j] << 4) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[20+j] >> 6) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[20+j] >> 16) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[20+j] >> 26) & 1023;
		des[68+j] |= (src[24+j] << 6) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[24+j] >> 4) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[24+j] >> 14) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[24+j] >> 24) & 1023;
		des[80+j] |= (src[28+j] << 8) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[28+j] >> 2) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[28+j] >> 12) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[28+j] >> 22) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[32+j]) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[32+j] >> 10) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[32+j] >> 20) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[32+j] >> 30) & 1023;
		des[108+j] |= (src[36+j] << 2) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[36+j] >> 8) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[36+j] >> 18) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[36+j] >> 28) & 1023;
		des[120+j] |= (src[40+j] << 4) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[40+j] >> 6) & 1023;
	}
}

template<typename T>
void KAFOR_unpack_32len_10bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 1023;
		des[j] |= (src[4+j] << 8) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 2) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 12) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 22) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j]) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 10) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 20) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 30) & 1023;
		des[28+j] |= (src[12+j] << 2) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j] >> 8) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 18) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 28) & 1023;
		des[40+j] |= (src[16+j] << 4) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 6) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j] >> 16) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 26) & 1023;
		des[52+j] |= (src[20+j] << 6) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[20+j] >> 4) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[20+j] >> 14) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[20+j] >> 24) & 1023;
		des[64+j] |= (src[24+j] << 8) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[24+j] >> 2) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[24+j] >> 12) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[24+j] >> 22) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[28+j]) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[28+j] >> 10) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[28+j] >> 20) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[28+j] >> 30) & 1023;
		des[92+j] |= (src[32+j] << 2) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[32+j] >> 8) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[32+j] >> 18) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[32+j] >> 28) & 1023;
		des[104+j] |= (src[36+j] << 4) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[36+j] >> 6) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[36+j] >> 16) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[36+j] >> 26) & 1023;
		des[116+j] |= (src[40+j] << 6) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[40+j] >> 4) & 1023;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[40+j] >> 14) & 1023;
	}
}

template<typename T>
void KAFOR_unpack_32len_11bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 11) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 22) & 2047;
		des[8+j] |= (src[4+j] << 10) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 1) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 12) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 23) & 2047;
		des[20+j] |= (src[8+j] << 9) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 2) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 13) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 24) & 2047;
		des[32+j] |= (src[12+j] << 8) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 3) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 14) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 25) & 2047;
		des[44+j] |= (src[16+j] << 7) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j] >> 4) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 15) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[16+j] >> 26) & 2047;
		des[56+j] |= (src[20+j] << 6) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[20+j] >> 5) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[20+j] >> 16) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[20+j] >> 27) & 2047;
		des[68+j] |= (src[24+j] << 5) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[24+j] >> 6) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[24+j] >> 17) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[24+j] >> 28) & 2047;
		des[80+j] |= (src[28+j] << 4) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[28+j] >> 7) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[28+j] >> 18) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[28+j] >> 29) & 2047;
		des[92+j] |= (src[32+j] << 3) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[32+j] >> 8) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[32+j] >> 19) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[32+j] >> 30) & 2047;
		des[104+j] |= (src[36+j] << 2) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[36+j] >> 9) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[36+j] >> 20) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[36+j] >> 31) & 2047;
		des[116+j] |= (src[40+j] << 1) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[40+j] >> 10) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[40+j] >> 21) & 2047;
	}
}

template<typename T>
void KAFOR_unpack_32len_11bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 19) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 30) & 2047;
		des[8+j] |= (src[4+j] << 2) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 9) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 20) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 31) & 2047;
		des[20+j] |= (src[8+j] << 1) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 10) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 21) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j]) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 11) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 22) & 2047;
		des[40+j] |= (src[16+j] << 10) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 1) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j] >> 12) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 23) & 2047;
		des[52+j] |= (src[20+j] << 9) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[20+j] >> 2) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[20+j] >> 13) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[20+j] >> 24) & 2047;
		des[64+j] |= (src[24+j] << 8) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[24+j] >> 3) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[24+j] >> 14) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[24+j] >> 25) & 2047;
		des[76+j] |= (src[28+j] << 7) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[28+j] >> 4) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[28+j] >> 15) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[28+j] >> 26) & 2047;
		des[88+j] |= (src[32+j] << 6) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[32+j] >> 5) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[32+j] >> 16) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[32+j] >> 27) & 2047;
		des[100+j] |= (src[36+j] << 5) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[36+j] >> 6) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[36+j] >> 17) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[36+j] >> 28) & 2047;
		des[112+j] |= (src[40+j] << 4) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[40+j] >> 7) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[40+j] >> 18) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[40+j] >> 29) & 2047;
		des[124+j] |= (src[44+j] << 3) & 2047;
	}
}

template<typename T>
void KAFOR_unpack_32len_11bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 27) & 2047;
		des[4+j] |= (src[4+j] << 5) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 6) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 17) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 28) & 2047;
		des[16+j] |= (src[8+j] << 4) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 7) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 18) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 29) & 2047;
		des[28+j] |= (src[12+j] << 3) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j] >> 8) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 19) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 30) & 2047;
		des[40+j] |= (src[16+j] << 2) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 9) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j] >> 20) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 31) & 2047;
		des[52+j] |= (src[20+j] << 1) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[20+j] >> 10) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[20+j] >> 21) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[24+j]) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[24+j] >> 11) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[24+j] >> 22) & 2047;
		des[72+j] |= (src[28+j] << 10) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[28+j] >> 1) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[28+j] >> 12) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[28+j] >> 23) & 2047;
		des[84+j] |= (src[32+j] << 9) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[32+j] >> 2) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[32+j] >> 13) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[32+j] >> 24) & 2047;
		des[96+j] |= (src[36+j] << 8) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[36+j] >> 3) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[36+j] >> 14) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[36+j] >> 25) & 2047;
		des[108+j] |= (src[40+j] << 7) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[40+j] >> 4) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[40+j] >> 15) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[40+j] >> 26) & 2047;
		des[120+j] |= (src[44+j] << 6) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[44+j] >> 5) & 2047;
	}
}

template<typename T>
void KAFOR_unpack_32len_11bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 2047;
		des[j] |= (src[4+j] << 8) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 3) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 14) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 25) & 2047;
		des[12+j] |= (src[8+j] << 7) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 4) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 15) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 26) & 2047;
		des[24+j] |= (src[12+j] << 6) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 5) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j] >> 16) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 27) & 2047;
		des[36+j] |= (src[16+j] << 5) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[16+j] >> 6) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 17) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j] >> 28) & 2047;
		des[48+j] |= (src[20+j] << 4) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[20+j] >> 7) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[20+j] >> 18) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[20+j] >> 29) & 2047;
		des[60+j] |= (src[24+j] << 3) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[24+j] >> 8) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[24+j] >> 19) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[24+j] >> 30) & 2047;
		des[72+j] |= (src[28+j] << 2) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[28+j] >> 9) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[28+j] >> 20) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[28+j] >> 31) & 2047;
		des[84+j] |= (src[32+j] << 1) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[32+j] >> 10) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[32+j] >> 21) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[36+j]) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[36+j] >> 11) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[36+j] >> 22) & 2047;
		des[104+j] |= (src[40+j] << 10) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[40+j] >> 1) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[40+j] >> 12) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[40+j] >> 23) & 2047;
		des[116+j] |= (src[44+j] << 9) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[44+j] >> 2) & 2047;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[44+j] >> 13) & 2047;
	}
}

template<typename T>
void KAFOR_unpack_32len_12bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 12) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 24) & 4095;
		des[8+j] |= (src[4+j] << 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 16) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 28) & 4095;
		des[20+j] |= (src[8+j] << 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 20) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j]) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 12) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 24) & 4095;
		des[40+j] |= (src[16+j] << 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j] >> 16) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 28) & 4095;
		des[52+j] |= (src[20+j] << 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[20+j] >> 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[20+j] >> 20) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[24+j]) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[24+j] >> 12) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[24+j] >> 24) & 4095;
		des[72+j] |= (src[28+j] << 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[28+j] >> 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[28+j] >> 16) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[28+j] >> 28) & 4095;
		des[84+j] |= (src[32+j] << 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[32+j] >> 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[32+j] >> 20) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[36+j]) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[36+j] >> 12) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[36+j] >> 24) & 4095;
		des[104+j] |= (src[40+j] << 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[40+j] >> 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[40+j] >> 16) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[40+j] >> 28) & 4095;
		des[116+j] |= (src[44+j] << 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[44+j] >> 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[44+j] >> 20) & 4095;
	}
}

template<typename T>
void KAFOR_unpack_32len_12bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 20) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j]) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 12) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 24) & 4095;
		des[16+j] |= (src[8+j] << 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 16) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 28) & 4095;
		des[28+j] |= (src[12+j] << 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j] >> 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 20) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[16+j]) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 12) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j] >> 24) & 4095;
		des[48+j] |= (src[20+j] << 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[20+j] >> 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[20+j] >> 16) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[20+j] >> 28) & 4095;
		des[60+j] |= (src[24+j] << 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[24+j] >> 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[24+j] >> 20) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[28+j]) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[28+j] >> 12) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[28+j] >> 24) & 4095;
		des[80+j] |= (src[32+j] << 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[32+j] >> 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[32+j] >> 16) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[32+j] >> 28) & 4095;
		des[92+j] |= (src[36+j] << 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[36+j] >> 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[36+j] >> 20) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[40+j]) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[40+j] >> 12) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[40+j] >> 24) & 4095;
		des[112+j] |= (src[44+j] << 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[44+j] >> 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[44+j] >> 16) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[44+j] >> 28) & 4095;
		des[124+j] |= (src[48+j] << 4) & 4095;
	}
}

template<typename T>
void KAFOR_unpack_32len_12bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 28) & 4095;
		des[4+j] |= (src[4+j] << 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 20) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j]) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 12) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 24) & 4095;
		des[24+j] |= (src[12+j] << 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j] >> 16) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 28) & 4095;
		des[36+j] |= (src[16+j] << 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[16+j] >> 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 20) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[20+j]) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[20+j] >> 12) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[20+j] >> 24) & 4095;
		des[56+j] |= (src[24+j] << 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[24+j] >> 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[24+j] >> 16) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[24+j] >> 28) & 4095;
		des[68+j] |= (src[28+j] << 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[28+j] >> 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[28+j] >> 20) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[32+j]) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[32+j] >> 12) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[32+j] >> 24) & 4095;
		des[88+j] |= (src[36+j] << 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[36+j] >> 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[36+j] >> 16) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[36+j] >> 28) & 4095;
		des[100+j] |= (src[40+j] << 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[40+j] >> 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[40+j] >> 20) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[44+j]) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[44+j] >> 12) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[44+j] >> 24) & 4095;
		des[120+j] |= (src[48+j] << 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[48+j] >> 4) & 4095;
	}
}

template<typename T>
void KAFOR_unpack_32len_12bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 4095;
		des[j] |= (src[4+j] << 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 16) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 28) & 4095;
		des[12+j] |= (src[8+j] << 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 20) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j]) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 12) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j] >> 24) & 4095;
		des[32+j] |= (src[16+j] << 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[16+j] >> 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[16+j] >> 16) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 28) & 4095;
		des[44+j] |= (src[20+j] << 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[20+j] >> 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[20+j] >> 20) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[24+j]) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[24+j] >> 12) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[24+j] >> 24) & 4095;
		des[64+j] |= (src[28+j] << 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[28+j] >> 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[28+j] >> 16) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[28+j] >> 28) & 4095;
		des[76+j] |= (src[32+j] << 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[32+j] >> 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[32+j] >> 20) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[36+j]) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[36+j] >> 12) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[36+j] >> 24) & 4095;
		des[96+j] |= (src[40+j] << 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[40+j] >> 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[40+j] >> 16) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[40+j] >> 28) & 4095;
		des[108+j] |= (src[44+j] << 4) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[44+j] >> 8) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[44+j] >> 20) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[48+j]) & 4095;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[48+j] >> 12) & 4095;
	}
}

template<typename T>
void KAFOR_unpack_32len_13bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 13) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 26) & 8191;
		des[8+j] |= (src[4+j] << 6) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 7) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 20) & 8191;
		des[16+j] |= (src[8+j] << 12) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 1) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 14) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 27) & 8191;
		des[28+j] |= (src[12+j] << 5) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j] >> 8) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 21) & 8191;
		des[36+j] |= (src[16+j] << 11) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[16+j] >> 2) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 15) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j] >> 28) & 8191;
		des[48+j] |= (src[20+j] << 4) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[20+j] >> 9) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[20+j] >> 22) & 8191;
		des[56+j] |= (src[24+j] << 10) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[24+j] >> 3) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[24+j] >> 16) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[24+j] >> 29) & 8191;
		des[68+j] |= (src[28+j] << 3) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[28+j] >> 10) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[28+j] >> 23) & 8191;
		des[76+j] |= (src[32+j] << 9) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[32+j] >> 4) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[32+j] >> 17) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[32+j] >> 30) & 8191;
		des[88+j] |= (src[36+j] << 2) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[36+j] >> 11) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[36+j] >> 24) & 8191;
		des[96+j] |= (src[40+j] << 8) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[40+j] >> 5) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[40+j] >> 18) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[40+j] >> 31) & 8191;
		des[108+j] |= (src[44+j] << 1) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[44+j] >> 12) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[44+j] >> 25) & 8191;
		des[116+j] |= (src[48+j] << 7) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[48+j] >> 6) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[48+j] >> 19) & 8191;
	}
}

template<typename T>
void KAFOR_unpack_32len_13bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 21) & 8191;
		des[4+j] |= (src[4+j] << 11) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 2) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 15) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 28) & 8191;
		des[16+j] |= (src[8+j] << 4) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 9) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 22) & 8191;
		des[24+j] |= (src[12+j] << 10) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 3) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j] >> 16) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 29) & 8191;
		des[36+j] |= (src[16+j] << 3) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[16+j] >> 10) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 23) & 8191;
		des[44+j] |= (src[20+j] << 9) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[20+j] >> 4) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[20+j] >> 17) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[20+j] >> 30) & 8191;
		des[56+j] |= (src[24+j] << 2) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[24+j] >> 11) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[24+j] >> 24) & 8191;
		des[64+j] |= (src[28+j] << 8) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[28+j] >> 5) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[28+j] >> 18) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[28+j] >> 31) & 8191;
		des[76+j] |= (src[32+j] << 1) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[32+j] >> 12) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[32+j] >> 25) & 8191;
		des[84+j] |= (src[36+j] << 7) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[36+j] >> 6) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[36+j] >> 19) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[40+j]) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[40+j] >> 13) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[40+j] >> 26) & 8191;
		des[104+j] |= (src[44+j] << 6) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[44+j] >> 7) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[44+j] >> 20) & 8191;
		des[112+j] |= (src[48+j] << 12) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[48+j] >> 1) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[48+j] >> 14) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[48+j] >> 27) & 8191;
		des[124+j] |= (src[52+j] << 5) & 8191;
	}
}

template<typename T>
void KAFOR_unpack_32len_13bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 29) & 8191;
		des[4+j] |= (src[4+j] << 3) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 10) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 23) & 8191;
		des[12+j] |= (src[8+j] << 9) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 4) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 17) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 30) & 8191;
		des[24+j] |= (src[12+j] << 2) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 11) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j] >> 24) & 8191;
		des[32+j] |= (src[16+j] << 8) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[16+j] >> 5) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[16+j] >> 18) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 31) & 8191;
		des[44+j] |= (src[20+j] << 1) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[20+j] >> 12) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[20+j] >> 25) & 8191;
		des[52+j] |= (src[24+j] << 7) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[24+j] >> 6) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[24+j] >> 19) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[28+j]) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[28+j] >> 13) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[28+j] >> 26) & 8191;
		des[72+j] |= (src[32+j] << 6) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[32+j] >> 7) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[32+j] >> 20) & 8191;
		des[80+j] |= (src[36+j] << 12) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[36+j] >> 1) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[36+j] >> 14) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[36+j] >> 27) & 8191;
		des[92+j] |= (src[40+j] << 5) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[40+j] >> 8) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[40+j] >> 21) & 8191;
		des[100+j] |= (src[44+j] << 11) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[44+j] >> 2) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[44+j] >> 15) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[44+j] >> 28) & 8191;
		des[112+j] |= (src[48+j] << 4) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[48+j] >> 9) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[48+j] >> 22) & 8191;
		des[120+j] |= (src[52+j] << 10) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[52+j] >> 3) & 8191;
	}
}

template<typename T>
void KAFOR_unpack_32len_13bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 8191;
		des[j] |= (src[4+j] << 8) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 5) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 18) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 31) & 8191;
		des[12+j] |= (src[8+j] << 1) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 12) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 25) & 8191;
		des[20+j] |= (src[12+j] << 7) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 6) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 19) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[16+j]) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[16+j] >> 13) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[16+j] >> 26) & 8191;
		des[40+j] |= (src[20+j] << 6) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[20+j] >> 7) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[20+j] >> 20) & 8191;
		des[48+j] |= (src[24+j] << 12) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[24+j] >> 1) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[24+j] >> 14) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[24+j] >> 27) & 8191;
		des[60+j] |= (src[28+j] << 5) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[28+j] >> 8) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[28+j] >> 21) & 8191;
		des[68+j] |= (src[32+j] << 11) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[32+j] >> 2) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[32+j] >> 15) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[32+j] >> 28) & 8191;
		des[80+j] |= (src[36+j] << 4) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[36+j] >> 9) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[36+j] >> 22) & 8191;
		des[88+j] |= (src[40+j] << 10) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[40+j] >> 3) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[40+j] >> 16) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[40+j] >> 29) & 8191;
		des[100+j] |= (src[44+j] << 3) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[44+j] >> 10) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[44+j] >> 23) & 8191;
		des[108+j] |= (src[48+j] << 9) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[48+j] >> 4) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[48+j] >> 17) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[48+j] >> 30) & 8191;
		des[120+j] |= (src[52+j] << 2) & 8191;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[52+j] >> 11) & 8191;
	}
}

template<typename T>
void KAFOR_unpack_32len_14bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 14) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 28) & 16383;
		des[8+j] |= (src[4+j] << 4) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 10) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 24) & 16383;
		des[16+j] |= (src[8+j] << 8) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 6) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 20) & 16383;
		des[24+j] |= (src[12+j] << 12) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 2) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j] >> 16) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 30) & 16383;
		des[36+j] |= (src[16+j] << 2) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[16+j] >> 12) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 26) & 16383;
		des[44+j] |= (src[20+j] << 6) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[20+j] >> 8) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[20+j] >> 22) & 16383;
		des[52+j] |= (src[24+j] << 10) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[24+j] >> 4) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[24+j] >> 18) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[28+j]) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[28+j] >> 14) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[28+j] >> 28) & 16383;
		des[72+j] |= (src[32+j] << 4) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[32+j] >> 10) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[32+j] >> 24) & 16383;
		des[80+j] |= (src[36+j] << 8) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[36+j] >> 6) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[36+j] >> 20) & 16383;
		des[88+j] |= (src[40+j] << 12) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[40+j] >> 2) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[40+j] >> 16) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[40+j] >> 30) & 16383;
		des[100+j] |= (src[44+j] << 2) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[44+j] >> 12) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[44+j] >> 26) & 16383;
		des[108+j] |= (src[48+j] << 6) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[48+j] >> 8) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[48+j] >> 22) & 16383;
		des[116+j] |= (src[52+j] << 10) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[52+j] >> 4) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[52+j] >> 18) & 16383;
	}
}

template<typename T>
void KAFOR_unpack_32len_14bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 22) & 16383;
		des[4+j] |= (src[4+j] << 10) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 4) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 18) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j]) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 14) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 28) & 16383;
		des[24+j] |= (src[12+j] << 4) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 10) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j] >> 24) & 16383;
		des[32+j] |= (src[16+j] << 8) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[16+j] >> 6) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[16+j] >> 20) & 16383;
		des[40+j] |= (src[20+j] << 12) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[20+j] >> 2) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[20+j] >> 16) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[20+j] >> 30) & 16383;
		des[52+j] |= (src[24+j] << 2) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[24+j] >> 12) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[24+j] >> 26) & 16383;
		des[60+j] |= (src[28+j] << 6) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[28+j] >> 8) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[28+j] >> 22) & 16383;
		des[68+j] |= (src[32+j] << 10) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[32+j] >> 4) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[32+j] >> 18) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[36+j]) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[36+j] >> 14) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[36+j] >> 28) & 16383;
		des[88+j] |= (src[40+j] << 4) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[40+j] >> 10) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[40+j] >> 24) & 16383;
		des[96+j] |= (src[44+j] << 8) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[44+j] >> 6) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[44+j] >> 20) & 16383;
		des[104+j] |= (src[48+j] << 12) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[48+j] >> 2) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[48+j] >> 16) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[48+j] >> 30) & 16383;
		des[116+j] |= (src[52+j] << 2) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[52+j] >> 12) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[52+j] >> 26) & 16383;
		des[124+j] |= (src[56+j] << 6) & 16383;
	}
}

template<typename T>
void KAFOR_unpack_32len_14bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 30) & 16383;
		des[4+j] |= (src[4+j] << 2) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 12) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 26) & 16383;
		des[12+j] |= (src[8+j] << 6) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 8) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 22) & 16383;
		des[20+j] |= (src[12+j] << 10) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 4) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 18) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[16+j]) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[16+j] >> 14) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[16+j] >> 28) & 16383;
		des[40+j] |= (src[20+j] << 4) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[20+j] >> 10) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[20+j] >> 24) & 16383;
		des[48+j] |= (src[24+j] << 8) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[24+j] >> 6) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[24+j] >> 20) & 16383;
		des[56+j] |= (src[28+j] << 12) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[28+j] >> 2) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[28+j] >> 16) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[28+j] >> 30) & 16383;
		des[68+j] |= (src[32+j] << 2) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[32+j] >> 12) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[32+j] >> 26) & 16383;
		des[76+j] |= (src[36+j] << 6) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[36+j] >> 8) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[36+j] >> 22) & 16383;
		des[84+j] |= (src[40+j] << 10) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[40+j] >> 4) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[40+j] >> 18) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[44+j]) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[44+j] >> 14) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[44+j] >> 28) & 16383;
		des[104+j] |= (src[48+j] << 4) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[48+j] >> 10) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[48+j] >> 24) & 16383;
		des[112+j] |= (src[52+j] << 8) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[52+j] >> 6) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[52+j] >> 20) & 16383;
		des[120+j] |= (src[56+j] << 12) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[56+j] >> 2) & 16383;
	}
}

template<typename T>
void KAFOR_unpack_32len_14bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 16383;
		des[j] |= (src[4+j] << 8) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 6) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 20) & 16383;
		des[8+j] |= (src[8+j] << 12) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 2) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 16) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 30) & 16383;
		des[20+j] |= (src[12+j] << 2) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 12) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 26) & 16383;
		des[28+j] |= (src[16+j] << 6) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[16+j] >> 8) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[16+j] >> 22) & 16383;
		des[36+j] |= (src[20+j] << 10) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[20+j] >> 4) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[20+j] >> 18) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[24+j]) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[24+j] >> 14) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[24+j] >> 28) & 16383;
		des[56+j] |= (src[28+j] << 4) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[28+j] >> 10) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[28+j] >> 24) & 16383;
		des[64+j] |= (src[32+j] << 8) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[32+j] >> 6) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[32+j] >> 20) & 16383;
		des[72+j] |= (src[36+j] << 12) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[36+j] >> 2) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[36+j] >> 16) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[36+j] >> 30) & 16383;
		des[84+j] |= (src[40+j] << 2) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[40+j] >> 12) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[40+j] >> 26) & 16383;
		des[92+j] |= (src[44+j] << 6) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[44+j] >> 8) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[44+j] >> 22) & 16383;
		des[100+j] |= (src[48+j] << 10) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[48+j] >> 4) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[48+j] >> 18) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[52+j]) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[52+j] >> 14) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[52+j] >> 28) & 16383;
		des[120+j] |= (src[56+j] << 4) & 16383;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[56+j] >> 10) & 16383;
	}
}

template<typename T>
void KAFOR_unpack_32len_15bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 15) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 30) & 32767;
		des[8+j] |= (src[4+j] << 2) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 13) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 28) & 32767;
		des[16+j] |= (src[8+j] << 4) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 11) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 26) & 32767;
		des[24+j] |= (src[12+j] << 6) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 9) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j] >> 24) & 32767;
		des[32+j] |= (src[16+j] << 8) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[16+j] >> 7) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[16+j] >> 22) & 32767;
		des[40+j] |= (src[20+j] << 10) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[20+j] >> 5) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[20+j] >> 20) & 32767;
		des[48+j] |= (src[24+j] << 12) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[24+j] >> 3) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[24+j] >> 18) & 32767;
		des[56+j] |= (src[28+j] << 14) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[28+j] >> 1) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[28+j] >> 16) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[28+j] >> 31) & 32767;
		des[68+j] |= (src[32+j] << 1) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[32+j] >> 14) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[32+j] >> 29) & 32767;
		des[76+j] |= (src[36+j] << 3) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[36+j] >> 12) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[36+j] >> 27) & 32767;
		des[84+j] |= (src[40+j] << 5) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[40+j] >> 10) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[40+j] >> 25) & 32767;
		des[92+j] |= (src[44+j] << 7) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[44+j] >> 8) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[44+j] >> 23) & 32767;
		des[100+j] |= (src[48+j] << 9) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[48+j] >> 6) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[48+j] >> 21) & 32767;
		des[108+j] |= (src[52+j] << 11) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[52+j] >> 4) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[52+j] >> 19) & 32767;
		des[116+j] |= (src[56+j] << 13) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[56+j] >> 2) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[56+j] >> 17) & 32767;
	}
}

template<typename T>
void KAFOR_unpack_32len_15bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 23) & 32767;
		des[4+j] |= (src[4+j] << 9) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 6) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 21) & 32767;
		des[12+j] |= (src[8+j] << 11) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 4) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 19) & 32767;
		des[20+j] |= (src[12+j] << 13) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 2) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 17) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[16+j]) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[16+j] >> 15) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[16+j] >> 30) & 32767;
		des[40+j] |= (src[20+j] << 2) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[20+j] >> 13) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[20+j] >> 28) & 32767;
		des[48+j] |= (src[24+j] << 4) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[24+j] >> 11) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[24+j] >> 26) & 32767;
		des[56+j] |= (src[28+j] << 6) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[28+j] >> 9) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[28+j] >> 24) & 32767;
		des[64+j] |= (src[32+j] << 8) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[32+j] >> 7) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[32+j] >> 22) & 32767;
		des[72+j] |= (src[36+j] << 10) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[36+j] >> 5) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[36+j] >> 20) & 32767;
		des[80+j] |= (src[40+j] << 12) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[40+j] >> 3) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[40+j] >> 18) & 32767;
		des[88+j] |= (src[44+j] << 14) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[44+j] >> 1) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[44+j] >> 16) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[44+j] >> 31) & 32767;
		des[100+j] |= (src[48+j] << 1) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[48+j] >> 14) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[48+j] >> 29) & 32767;
		des[108+j] |= (src[52+j] << 3) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[52+j] >> 12) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[52+j] >> 27) & 32767;
		des[116+j] |= (src[56+j] << 5) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[56+j] >> 10) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[56+j] >> 25) & 32767;
		des[124+j] |= (src[60+j] << 7) & 32767;
	}
}

template<typename T>
void KAFOR_unpack_32len_15bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 31) & 32767;
		des[4+j] |= (src[4+j] << 1) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 14) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 29) & 32767;
		des[12+j] |= (src[8+j] << 3) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 12) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 27) & 32767;
		des[20+j] |= (src[12+j] << 5) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 10) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 25) & 32767;
		des[28+j] |= (src[16+j] << 7) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[16+j] >> 8) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[16+j] >> 23) & 32767;
		des[36+j] |= (src[20+j] << 9) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[20+j] >> 6) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[20+j] >> 21) & 32767;
		des[44+j] |= (src[24+j] << 11) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[24+j] >> 4) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[24+j] >> 19) & 32767;
		des[52+j] |= (src[28+j] << 13) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[28+j] >> 2) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[28+j] >> 17) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[32+j]) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[32+j] >> 15) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[32+j] >> 30) & 32767;
		des[72+j] |= (src[36+j] << 2) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[36+j] >> 13) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[36+j] >> 28) & 32767;
		des[80+j] |= (src[40+j] << 4) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[40+j] >> 11) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[40+j] >> 26) & 32767;
		des[88+j] |= (src[44+j] << 6) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[44+j] >> 9) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[44+j] >> 24) & 32767;
		des[96+j] |= (src[48+j] << 8) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[48+j] >> 7) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[48+j] >> 22) & 32767;
		des[104+j] |= (src[52+j] << 10) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[52+j] >> 5) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[52+j] >> 20) & 32767;
		des[112+j] |= (src[56+j] << 12) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[56+j] >> 3) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[56+j] >> 18) & 32767;
		des[120+j] |= (src[60+j] << 14) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[60+j] >> 1) & 32767;
	}
}

template<typename T>
void KAFOR_unpack_32len_15bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 32767;
		des[j] |= (src[4+j] << 8) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 7) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 22) & 32767;
		des[8+j] |= (src[8+j] << 10) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 5) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 20) & 32767;
		des[16+j] |= (src[12+j] << 12) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 3) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 18) & 32767;
		des[24+j] |= (src[16+j] << 14) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 1) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[16+j] >> 16) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[16+j] >> 31) & 32767;
		des[36+j] |= (src[20+j] << 1) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[20+j] >> 14) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[20+j] >> 29) & 32767;
		des[44+j] |= (src[24+j] << 3) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[24+j] >> 12) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[24+j] >> 27) & 32767;
		des[52+j] |= (src[28+j] << 5) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[28+j] >> 10) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[28+j] >> 25) & 32767;
		des[60+j] |= (src[32+j] << 7) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[32+j] >> 8) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[32+j] >> 23) & 32767;
		des[68+j] |= (src[36+j] << 9) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[36+j] >> 6) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[36+j] >> 21) & 32767;
		des[76+j] |= (src[40+j] << 11) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[40+j] >> 4) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[40+j] >> 19) & 32767;
		des[84+j] |= (src[44+j] << 13) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[44+j] >> 2) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[44+j] >> 17) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[48+j]) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[48+j] >> 15) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[48+j] >> 30) & 32767;
		des[104+j] |= (src[52+j] << 2) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[52+j] >> 13) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[52+j] >> 28) & 32767;
		des[112+j] |= (src[56+j] << 4) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[56+j] >> 11) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[56+j] >> 26) & 32767;
		des[120+j] |= (src[60+j] << 6) & 32767;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[60+j] >> 9) & 32767;
	}
}

template<typename T>
void KAFOR_unpack_32len_16bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[16+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[16+j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[20+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[20+j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[24+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[24+j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[28+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[28+j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[32+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[32+j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[36+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[36+j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[40+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[40+j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[44+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[44+j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[48+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[48+j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[52+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[52+j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[56+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[56+j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[60+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[60+j] >> 16) & 65535;
	}
}

template<typename T>
void KAFOR_unpack_32len_16bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 24) & 65535;
		des[4+j] |= (src[4+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 24) & 65535;
		des[12+j] |= (src[8+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 24) & 65535;
		des[20+j] |= (src[12+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 24) & 65535;
		des[28+j] |= (src[16+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[16+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[16+j] >> 24) & 65535;
		des[36+j] |= (src[20+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[20+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[20+j] >> 24) & 65535;
		des[44+j] |= (src[24+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[24+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[24+j] >> 24) & 65535;
		des[52+j] |= (src[28+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[28+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[28+j] >> 24) & 65535;
		des[60+j] |= (src[32+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[32+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[32+j] >> 24) & 65535;
		des[68+j] |= (src[36+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[36+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[36+j] >> 24) & 65535;
		des[76+j] |= (src[40+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[40+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[40+j] >> 24) & 65535;
		des[84+j] |= (src[44+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[44+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[44+j] >> 24) & 65535;
		des[92+j] |= (src[48+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[48+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[48+j] >> 24) & 65535;
		des[100+j] |= (src[52+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[52+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[52+j] >> 24) & 65535;
		des[108+j] |= (src[56+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[56+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[56+j] >> 24) & 65535;
		des[116+j] |= (src[60+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[60+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[60+j] >> 24) & 65535;
		des[124+j] |= (src[64+j] << 8) & 65535;
	}
}

template<typename T>
void KAFOR_unpack_32len_16bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[16+j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[20+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[20+j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[24+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[24+j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[28+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[28+j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[32+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[32+j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[36+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[36+j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[40+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[40+j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[44+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[44+j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[48+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[48+j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[52+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[52+j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[56+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[56+j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[60+j]) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[60+j] >> 16) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[64+j]) & 65535;
	}
}

template<typename T>
void KAFOR_unpack_32len_16bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 65535;
		des[j] |= (src[4+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 24) & 65535;
		des[8+j] |= (src[8+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 24) & 65535;
		des[16+j] |= (src[12+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 24) & 65535;
		des[24+j] |= (src[16+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[16+j] >> 24) & 65535;
		des[32+j] |= (src[20+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[20+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[20+j] >> 24) & 65535;
		des[40+j] |= (src[24+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[24+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[24+j] >> 24) & 65535;
		des[48+j] |= (src[28+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[28+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[28+j] >> 24) & 65535;
		des[56+j] |= (src[32+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[32+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[32+j] >> 24) & 65535;
		des[64+j] |= (src[36+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[36+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[36+j] >> 24) & 65535;
		des[72+j] |= (src[40+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[40+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[40+j] >> 24) & 65535;
		des[80+j] |= (src[44+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[44+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[44+j] >> 24) & 65535;
		des[88+j] |= (src[48+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[48+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[48+j] >> 24) & 65535;
		des[96+j] |= (src[52+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[52+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[52+j] >> 24) & 65535;
		des[104+j] |= (src[56+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[56+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[56+j] >> 24) & 65535;
		des[112+j] |= (src[60+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[60+j] >> 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[60+j] >> 24) & 65535;
		des[120+j] |= (src[64+j] << 8) & 65535;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[64+j] >> 8) & 65535;
	}
}

template<typename T>
void KAFOR_unpack_32len_17bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 17) & 131071;
		des[4+j] |= (src[4+j] << 15) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 2) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 19) & 131071;
		des[12+j] |= (src[8+j] << 13) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 4) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 21) & 131071;
		des[20+j] |= (src[12+j] << 11) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 6) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 23) & 131071;
		des[28+j] |= (src[16+j] << 9) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[16+j] >> 8) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[16+j] >> 25) & 131071;
		des[36+j] |= (src[20+j] << 7) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[20+j] >> 10) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[20+j] >> 27) & 131071;
		des[44+j] |= (src[24+j] << 5) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[24+j] >> 12) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[24+j] >> 29) & 131071;
		des[52+j] |= (src[28+j] << 3) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[28+j] >> 14) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[28+j] >> 31) & 131071;
		des[60+j] |= (src[32+j] << 1) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[32+j] >> 16) & 131071;
		des[64+j] |= (src[36+j] << 16) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[36+j] >> 1) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[36+j] >> 18) & 131071;
		des[72+j] |= (src[40+j] << 14) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[40+j] >> 3) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[40+j] >> 20) & 131071;
		des[80+j] |= (src[44+j] << 12) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[44+j] >> 5) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[44+j] >> 22) & 131071;
		des[88+j] |= (src[48+j] << 10) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[48+j] >> 7) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[48+j] >> 24) & 131071;
		des[96+j] |= (src[52+j] << 8) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[52+j] >> 9) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[52+j] >> 26) & 131071;
		des[104+j] |= (src[56+j] << 6) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[56+j] >> 11) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[56+j] >> 28) & 131071;
		des[112+j] |= (src[60+j] << 4) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[60+j] >> 13) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[60+j] >> 30) & 131071;
		des[120+j] |= (src[64+j] << 2) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[64+j] >> 15) & 131071;
	}
}

template<typename T>
void KAFOR_unpack_32len_17bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 25) & 131071;
		des[4+j] |= (src[4+j] << 7) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 10) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 27) & 131071;
		des[12+j] |= (src[8+j] << 5) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 12) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 29) & 131071;
		des[20+j] |= (src[12+j] << 3) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 14) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 31) & 131071;
		des[28+j] |= (src[16+j] << 1) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[16+j] >> 16) & 131071;
		des[32+j] |= (src[20+j] << 16) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[20+j] >> 1) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[20+j] >> 18) & 131071;
		des[40+j] |= (src[24+j] << 14) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[24+j] >> 3) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[24+j] >> 20) & 131071;
		des[48+j] |= (src[28+j] << 12) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[28+j] >> 5) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[28+j] >> 22) & 131071;
		des[56+j] |= (src[32+j] << 10) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[32+j] >> 7) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[32+j] >> 24) & 131071;
		des[64+j] |= (src[36+j] << 8) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[36+j] >> 9) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[36+j] >> 26) & 131071;
		des[72+j] |= (src[40+j] << 6) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[40+j] >> 11) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[40+j] >> 28) & 131071;
		des[80+j] |= (src[44+j] << 4) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[44+j] >> 13) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[44+j] >> 30) & 131071;
		des[88+j] |= (src[48+j] << 2) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[48+j] >> 15) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[52+j]) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[52+j] >> 17) & 131071;
		des[100+j] |= (src[56+j] << 15) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[56+j] >> 2) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[56+j] >> 19) & 131071;
		des[108+j] |= (src[60+j] << 13) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[60+j] >> 4) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[60+j] >> 21) & 131071;
		des[116+j] |= (src[64+j] << 11) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[64+j] >> 6) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[64+j] >> 23) & 131071;
		des[124+j] |= (src[68+j] << 9) & 131071;
	}
}

template<typename T>
void KAFOR_unpack_32len_17bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 131071;
		des[j] |= (src[4+j] << 16) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 1) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 18) & 131071;
		des[8+j] |= (src[8+j] << 14) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 3) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 20) & 131071;
		des[16+j] |= (src[12+j] << 12) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 5) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 22) & 131071;
		des[24+j] |= (src[16+j] << 10) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 7) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[16+j] >> 24) & 131071;
		des[32+j] |= (src[20+j] << 8) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[20+j] >> 9) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[20+j] >> 26) & 131071;
		des[40+j] |= (src[24+j] << 6) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[24+j] >> 11) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[24+j] >> 28) & 131071;
		des[48+j] |= (src[28+j] << 4) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[28+j] >> 13) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[28+j] >> 30) & 131071;
		des[56+j] |= (src[32+j] << 2) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[32+j] >> 15) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[36+j]) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[36+j] >> 17) & 131071;
		des[68+j] |= (src[40+j] << 15) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[40+j] >> 2) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[40+j] >> 19) & 131071;
		des[76+j] |= (src[44+j] << 13) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[44+j] >> 4) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[44+j] >> 21) & 131071;
		des[84+j] |= (src[48+j] << 11) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[48+j] >> 6) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[48+j] >> 23) & 131071;
		des[92+j] |= (src[52+j] << 9) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[52+j] >> 8) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[52+j] >> 25) & 131071;
		des[100+j] |= (src[56+j] << 7) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[56+j] >> 10) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[56+j] >> 27) & 131071;
		des[108+j] |= (src[60+j] << 5) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[60+j] >> 12) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[60+j] >> 29) & 131071;
		des[116+j] |= (src[64+j] << 3) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[64+j] >> 14) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[64+j] >> 31) & 131071;
		des[124+j] |= (src[68+j] << 1) & 131071;
	}
}

template<typename T>
void KAFOR_unpack_32len_17bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 131071;
		des[j] |= (src[4+j] << 8) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 9) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 26) & 131071;
		des[8+j] |= (src[8+j] << 6) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 11) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 28) & 131071;
		des[16+j] |= (src[12+j] << 4) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 13) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 30) & 131071;
		des[24+j] |= (src[16+j] << 2) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 15) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[20+j]) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[20+j] >> 17) & 131071;
		des[36+j] |= (src[24+j] << 15) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[24+j] >> 2) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[24+j] >> 19) & 131071;
		des[44+j] |= (src[28+j] << 13) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[28+j] >> 4) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[28+j] >> 21) & 131071;
		des[52+j] |= (src[32+j] << 11) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[32+j] >> 6) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[32+j] >> 23) & 131071;
		des[60+j] |= (src[36+j] << 9) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[36+j] >> 8) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[36+j] >> 25) & 131071;
		des[68+j] |= (src[40+j] << 7) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[40+j] >> 10) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[40+j] >> 27) & 131071;
		des[76+j] |= (src[44+j] << 5) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[44+j] >> 12) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[44+j] >> 29) & 131071;
		des[84+j] |= (src[48+j] << 3) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[48+j] >> 14) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[48+j] >> 31) & 131071;
		des[92+j] |= (src[52+j] << 1) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[52+j] >> 16) & 131071;
		des[96+j] |= (src[56+j] << 16) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[56+j] >> 1) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[56+j] >> 18) & 131071;
		des[104+j] |= (src[60+j] << 14) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[60+j] >> 3) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[60+j] >> 20) & 131071;
		des[112+j] |= (src[64+j] << 12) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[64+j] >> 5) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[64+j] >> 22) & 131071;
		des[120+j] |= (src[68+j] << 10) & 131071;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[68+j] >> 7) & 131071;
	}
}

template<typename T>
void KAFOR_unpack_32len_18bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 18) & 262143;
		des[4+j] |= (src[4+j] << 14) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 4) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 22) & 262143;
		des[12+j] |= (src[8+j] << 10) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 8) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 26) & 262143;
		des[20+j] |= (src[12+j] << 6) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 12) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 30) & 262143;
		des[28+j] |= (src[16+j] << 2) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[16+j] >> 16) & 262143;
		des[32+j] |= (src[20+j] << 16) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[20+j] >> 2) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[20+j] >> 20) & 262143;
		des[40+j] |= (src[24+j] << 12) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[24+j] >> 6) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[24+j] >> 24) & 262143;
		des[48+j] |= (src[28+j] << 8) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[28+j] >> 10) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[28+j] >> 28) & 262143;
		des[56+j] |= (src[32+j] << 4) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[32+j] >> 14) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[36+j]) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[36+j] >> 18) & 262143;
		des[68+j] |= (src[40+j] << 14) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[40+j] >> 4) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[40+j] >> 22) & 262143;
		des[76+j] |= (src[44+j] << 10) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[44+j] >> 8) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[44+j] >> 26) & 262143;
		des[84+j] |= (src[48+j] << 6) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[48+j] >> 12) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[48+j] >> 30) & 262143;
		des[92+j] |= (src[52+j] << 2) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[52+j] >> 16) & 262143;
		des[96+j] |= (src[56+j] << 16) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[56+j] >> 2) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[56+j] >> 20) & 262143;
		des[104+j] |= (src[60+j] << 12) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[60+j] >> 6) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[60+j] >> 24) & 262143;
		des[112+j] |= (src[64+j] << 8) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[64+j] >> 10) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[64+j] >> 28) & 262143;
		des[120+j] |= (src[68+j] << 4) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[68+j] >> 14) & 262143;
	}
}

template<typename T>
void KAFOR_unpack_32len_18bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 26) & 262143;
		des[4+j] |= (src[4+j] << 6) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 12) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 30) & 262143;
		des[12+j] |= (src[8+j] << 2) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 16) & 262143;
		des[16+j] |= (src[12+j] << 16) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 2) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 20) & 262143;
		des[24+j] |= (src[16+j] << 12) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 6) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[16+j] >> 24) & 262143;
		des[32+j] |= (src[20+j] << 8) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[20+j] >> 10) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[20+j] >> 28) & 262143;
		des[40+j] |= (src[24+j] << 4) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[24+j] >> 14) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[28+j]) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[28+j] >> 18) & 262143;
		des[52+j] |= (src[32+j] << 14) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[32+j] >> 4) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[32+j] >> 22) & 262143;
		des[60+j] |= (src[36+j] << 10) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[36+j] >> 8) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[36+j] >> 26) & 262143;
		des[68+j] |= (src[40+j] << 6) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[40+j] >> 12) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[40+j] >> 30) & 262143;
		des[76+j] |= (src[44+j] << 2) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[44+j] >> 16) & 262143;
		des[80+j] |= (src[48+j] << 16) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[48+j] >> 2) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[48+j] >> 20) & 262143;
		des[88+j] |= (src[52+j] << 12) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[52+j] >> 6) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[52+j] >> 24) & 262143;
		des[96+j] |= (src[56+j] << 8) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[56+j] >> 10) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[56+j] >> 28) & 262143;
		des[104+j] |= (src[60+j] << 4) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[60+j] >> 14) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[64+j]) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[64+j] >> 18) & 262143;
		des[116+j] |= (src[68+j] << 14) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[68+j] >> 4) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[68+j] >> 22) & 262143;
		des[124+j] |= (src[72+j] << 10) & 262143;
	}
}

template<typename T>
void KAFOR_unpack_32len_18bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 262143;
		des[j] |= (src[4+j] << 16) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 2) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 20) & 262143;
		des[8+j] |= (src[8+j] << 12) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 6) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 24) & 262143;
		des[16+j] |= (src[12+j] << 8) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 10) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 28) & 262143;
		des[24+j] |= (src[16+j] << 4) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 14) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[20+j]) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[20+j] >> 18) & 262143;
		des[36+j] |= (src[24+j] << 14) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[24+j] >> 4) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[24+j] >> 22) & 262143;
		des[44+j] |= (src[28+j] << 10) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[28+j] >> 8) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[28+j] >> 26) & 262143;
		des[52+j] |= (src[32+j] << 6) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[32+j] >> 12) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[32+j] >> 30) & 262143;
		des[60+j] |= (src[36+j] << 2) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[36+j] >> 16) & 262143;
		des[64+j] |= (src[40+j] << 16) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[40+j] >> 2) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[40+j] >> 20) & 262143;
		des[72+j] |= (src[44+j] << 12) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[44+j] >> 6) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[44+j] >> 24) & 262143;
		des[80+j] |= (src[48+j] << 8) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[48+j] >> 10) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[48+j] >> 28) & 262143;
		des[88+j] |= (src[52+j] << 4) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[52+j] >> 14) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[56+j]) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[56+j] >> 18) & 262143;
		des[100+j] |= (src[60+j] << 14) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[60+j] >> 4) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[60+j] >> 22) & 262143;
		des[108+j] |= (src[64+j] << 10) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[64+j] >> 8) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[64+j] >> 26) & 262143;
		des[116+j] |= (src[68+j] << 6) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[68+j] >> 12) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[68+j] >> 30) & 262143;
		des[124+j] |= (src[72+j] << 2) & 262143;
	}
}

template<typename T>
void KAFOR_unpack_32len_18bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 262143;
		des[j] |= (src[4+j] << 8) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 10) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 28) & 262143;
		des[8+j] |= (src[8+j] << 4) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 14) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j]) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 18) & 262143;
		des[20+j] |= (src[16+j] << 14) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 4) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 22) & 262143;
		des[28+j] |= (src[20+j] << 10) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[20+j] >> 8) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[20+j] >> 26) & 262143;
		des[36+j] |= (src[24+j] << 6) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[24+j] >> 12) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[24+j] >> 30) & 262143;
		des[44+j] |= (src[28+j] << 2) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[28+j] >> 16) & 262143;
		des[48+j] |= (src[32+j] << 16) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[32+j] >> 2) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[32+j] >> 20) & 262143;
		des[56+j] |= (src[36+j] << 12) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[36+j] >> 6) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[36+j] >> 24) & 262143;
		des[64+j] |= (src[40+j] << 8) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[40+j] >> 10) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[40+j] >> 28) & 262143;
		des[72+j] |= (src[44+j] << 4) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[44+j] >> 14) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[48+j]) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[48+j] >> 18) & 262143;
		des[84+j] |= (src[52+j] << 14) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[52+j] >> 4) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[52+j] >> 22) & 262143;
		des[92+j] |= (src[56+j] << 10) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[56+j] >> 8) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[56+j] >> 26) & 262143;
		des[100+j] |= (src[60+j] << 6) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[60+j] >> 12) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[60+j] >> 30) & 262143;
		des[108+j] |= (src[64+j] << 2) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[64+j] >> 16) & 262143;
		des[112+j] |= (src[68+j] << 16) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[68+j] >> 2) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[68+j] >> 20) & 262143;
		des[120+j] |= (src[72+j] << 12) & 262143;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[72+j] >> 6) & 262143;
	}
}

template<typename T>
void KAFOR_unpack_32len_19bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 19) & 524287;
		des[4+j] |= (src[4+j] << 13) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 6) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 25) & 524287;
		des[12+j] |= (src[8+j] << 7) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 12) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 31) & 524287;
		des[20+j] |= (src[12+j] << 1) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 18) & 524287;
		des[24+j] |= (src[16+j] << 14) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 5) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[16+j] >> 24) & 524287;
		des[32+j] |= (src[20+j] << 8) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[20+j] >> 11) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[20+j] >> 30) & 524287;
		des[40+j] |= (src[24+j] << 2) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[24+j] >> 17) & 524287;
		des[44+j] |= (src[28+j] << 15) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[28+j] >> 4) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[28+j] >> 23) & 524287;
		des[52+j] |= (src[32+j] << 9) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[32+j] >> 10) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[32+j] >> 29) & 524287;
		des[60+j] |= (src[36+j] << 3) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[36+j] >> 16) & 524287;
		des[64+j] |= (src[40+j] << 16) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[40+j] >> 3) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[40+j] >> 22) & 524287;
		des[72+j] |= (src[44+j] << 10) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[44+j] >> 9) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[44+j] >> 28) & 524287;
		des[80+j] |= (src[48+j] << 4) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[48+j] >> 15) & 524287;
		des[84+j] |= (src[52+j] << 17) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[52+j] >> 2) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[52+j] >> 21) & 524287;
		des[92+j] |= (src[56+j] << 11) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[56+j] >> 8) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[56+j] >> 27) & 524287;
		des[100+j] |= (src[60+j] << 5) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[60+j] >> 14) & 524287;
		des[104+j] |= (src[64+j] << 18) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[64+j] >> 1) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[64+j] >> 20) & 524287;
		des[112+j] |= (src[68+j] << 12) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[68+j] >> 7) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[68+j] >> 26) & 524287;
		des[120+j] |= (src[72+j] << 6) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[72+j] >> 13) & 524287;
	}
}

template<typename T>
void KAFOR_unpack_32len_19bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 27) & 524287;
		des[4+j] |= (src[4+j] << 5) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 14) & 524287;
		des[8+j] |= (src[8+j] << 18) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 1) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 20) & 524287;
		des[16+j] |= (src[12+j] << 12) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 7) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 26) & 524287;
		des[24+j] |= (src[16+j] << 6) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 13) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[20+j]) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[20+j] >> 19) & 524287;
		des[36+j] |= (src[24+j] << 13) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[24+j] >> 6) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[24+j] >> 25) & 524287;
		des[44+j] |= (src[28+j] << 7) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[28+j] >> 12) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[28+j] >> 31) & 524287;
		des[52+j] |= (src[32+j] << 1) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[32+j] >> 18) & 524287;
		des[56+j] |= (src[36+j] << 14) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[36+j] >> 5) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[36+j] >> 24) & 524287;
		des[64+j] |= (src[40+j] << 8) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[40+j] >> 11) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[40+j] >> 30) & 524287;
		des[72+j] |= (src[44+j] << 2) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[44+j] >> 17) & 524287;
		des[76+j] |= (src[48+j] << 15) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[48+j] >> 4) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[48+j] >> 23) & 524287;
		des[84+j] |= (src[52+j] << 9) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[52+j] >> 10) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[52+j] >> 29) & 524287;
		des[92+j] |= (src[56+j] << 3) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[56+j] >> 16) & 524287;
		des[96+j] |= (src[60+j] << 16) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[60+j] >> 3) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[60+j] >> 22) & 524287;
		des[104+j] |= (src[64+j] << 10) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[64+j] >> 9) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[64+j] >> 28) & 524287;
		des[112+j] |= (src[68+j] << 4) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[68+j] >> 15) & 524287;
		des[116+j] |= (src[72+j] << 17) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[72+j] >> 2) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[72+j] >> 21) & 524287;
		des[124+j] |= (src[76+j] << 11) & 524287;
	}
}

template<typename T>
void KAFOR_unpack_32len_19bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 524287;
		des[j] |= (src[4+j] << 16) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 3) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 22) & 524287;
		des[8+j] |= (src[8+j] << 10) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 9) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 28) & 524287;
		des[16+j] |= (src[12+j] << 4) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 15) & 524287;
		des[20+j] |= (src[16+j] << 17) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 2) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 21) & 524287;
		des[28+j] |= (src[20+j] << 11) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[20+j] >> 8) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[20+j] >> 27) & 524287;
		des[36+j] |= (src[24+j] << 5) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[24+j] >> 14) & 524287;
		des[40+j] |= (src[28+j] << 18) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[28+j] >> 1) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[28+j] >> 20) & 524287;
		des[48+j] |= (src[32+j] << 12) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[32+j] >> 7) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[32+j] >> 26) & 524287;
		des[56+j] |= (src[36+j] << 6) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[36+j] >> 13) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[40+j]) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[40+j] >> 19) & 524287;
		des[68+j] |= (src[44+j] << 13) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[44+j] >> 6) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[44+j] >> 25) & 524287;
		des[76+j] |= (src[48+j] << 7) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[48+j] >> 12) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[48+j] >> 31) & 524287;
		des[84+j] |= (src[52+j] << 1) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[52+j] >> 18) & 524287;
		des[88+j] |= (src[56+j] << 14) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[56+j] >> 5) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[56+j] >> 24) & 524287;
		des[96+j] |= (src[60+j] << 8) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[60+j] >> 11) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[60+j] >> 30) & 524287;
		des[104+j] |= (src[64+j] << 2) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[64+j] >> 17) & 524287;
		des[108+j] |= (src[68+j] << 15) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[68+j] >> 4) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[68+j] >> 23) & 524287;
		des[116+j] |= (src[72+j] << 9) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[72+j] >> 10) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[72+j] >> 29) & 524287;
		des[124+j] |= (src[76+j] << 3) & 524287;
	}
}

template<typename T>
void KAFOR_unpack_32len_19bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 524287;
		des[j] |= (src[4+j] << 8) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 11) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 30) & 524287;
		des[8+j] |= (src[8+j] << 2) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 17) & 524287;
		des[12+j] |= (src[12+j] << 15) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 4) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 23) & 524287;
		des[20+j] |= (src[16+j] << 9) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 10) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 29) & 524287;
		des[28+j] |= (src[20+j] << 3) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[20+j] >> 16) & 524287;
		des[32+j] |= (src[24+j] << 16) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[24+j] >> 3) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[24+j] >> 22) & 524287;
		des[40+j] |= (src[28+j] << 10) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[28+j] >> 9) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[28+j] >> 28) & 524287;
		des[48+j] |= (src[32+j] << 4) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[32+j] >> 15) & 524287;
		des[52+j] |= (src[36+j] << 17) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[36+j] >> 2) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[36+j] >> 21) & 524287;
		des[60+j] |= (src[40+j] << 11) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[40+j] >> 8) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[40+j] >> 27) & 524287;
		des[68+j] |= (src[44+j] << 5) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[44+j] >> 14) & 524287;
		des[72+j] |= (src[48+j] << 18) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[48+j] >> 1) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[48+j] >> 20) & 524287;
		des[80+j] |= (src[52+j] << 12) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[52+j] >> 7) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[52+j] >> 26) & 524287;
		des[88+j] |= (src[56+j] << 6) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[56+j] >> 13) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[60+j]) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[60+j] >> 19) & 524287;
		des[100+j] |= (src[64+j] << 13) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[64+j] >> 6) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[64+j] >> 25) & 524287;
		des[108+j] |= (src[68+j] << 7) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[68+j] >> 12) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[68+j] >> 31) & 524287;
		des[116+j] |= (src[72+j] << 1) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[72+j] >> 18) & 524287;
		des[120+j] |= (src[76+j] << 14) & 524287;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[76+j] >> 5) & 524287;
	}
}

template<typename T>
void KAFOR_unpack_32len_20bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 20) & 1048575;
		des[4+j] |= (src[4+j] << 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 28) & 1048575;
		des[12+j] |= (src[8+j] << 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 16) & 1048575;
		des[16+j] |= (src[12+j] << 16) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 24) & 1048575;
		des[24+j] |= (src[16+j] << 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[20+j]) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[20+j] >> 20) & 1048575;
		des[36+j] |= (src[24+j] << 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[24+j] >> 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[24+j] >> 28) & 1048575;
		des[44+j] |= (src[28+j] << 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[28+j] >> 16) & 1048575;
		des[48+j] |= (src[32+j] << 16) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[32+j] >> 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[32+j] >> 24) & 1048575;
		des[56+j] |= (src[36+j] << 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[36+j] >> 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[40+j]) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[40+j] >> 20) & 1048575;
		des[68+j] |= (src[44+j] << 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[44+j] >> 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[44+j] >> 28) & 1048575;
		des[76+j] |= (src[48+j] << 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[48+j] >> 16) & 1048575;
		des[80+j] |= (src[52+j] << 16) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[52+j] >> 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[52+j] >> 24) & 1048575;
		des[88+j] |= (src[56+j] << 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[56+j] >> 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[60+j]) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[60+j] >> 20) & 1048575;
		des[100+j] |= (src[64+j] << 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[64+j] >> 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[64+j] >> 28) & 1048575;
		des[108+j] |= (src[68+j] << 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[68+j] >> 16) & 1048575;
		des[112+j] |= (src[72+j] << 16) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[72+j] >> 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[72+j] >> 24) & 1048575;
		des[120+j] |= (src[76+j] << 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[76+j] >> 12) & 1048575;
	}
}

template<typename T>
void KAFOR_unpack_32len_20bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 28) & 1048575;
		des[4+j] |= (src[4+j] << 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 16) & 1048575;
		des[8+j] |= (src[8+j] << 16) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 24) & 1048575;
		des[16+j] |= (src[12+j] << 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j]) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 20) & 1048575;
		des[28+j] |= (src[20+j] << 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[20+j] >> 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[20+j] >> 28) & 1048575;
		des[36+j] |= (src[24+j] << 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[24+j] >> 16) & 1048575;
		des[40+j] |= (src[28+j] << 16) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[28+j] >> 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[28+j] >> 24) & 1048575;
		des[48+j] |= (src[32+j] << 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[32+j] >> 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[36+j]) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[36+j] >> 20) & 1048575;
		des[60+j] |= (src[40+j] << 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[40+j] >> 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[40+j] >> 28) & 1048575;
		des[68+j] |= (src[44+j] << 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[44+j] >> 16) & 1048575;
		des[72+j] |= (src[48+j] << 16) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[48+j] >> 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[48+j] >> 24) & 1048575;
		des[80+j] |= (src[52+j] << 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[52+j] >> 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[56+j]) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[56+j] >> 20) & 1048575;
		des[92+j] |= (src[60+j] << 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[60+j] >> 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[60+j] >> 28) & 1048575;
		des[100+j] |= (src[64+j] << 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[64+j] >> 16) & 1048575;
		des[104+j] |= (src[68+j] << 16) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[68+j] >> 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[68+j] >> 24) & 1048575;
		des[112+j] |= (src[72+j] << 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[72+j] >> 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[76+j]) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[76+j] >> 20) & 1048575;
		des[124+j] |= (src[80+j] << 12) & 1048575;
	}
}

template<typename T>
void KAFOR_unpack_32len_20bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 1048575;
		des[j] |= (src[4+j] << 16) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 24) & 1048575;
		des[8+j] |= (src[8+j] << 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j]) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 20) & 1048575;
		des[20+j] |= (src[16+j] << 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 28) & 1048575;
		des[28+j] |= (src[20+j] << 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[20+j] >> 16) & 1048575;
		des[32+j] |= (src[24+j] << 16) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[24+j] >> 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[24+j] >> 24) & 1048575;
		des[40+j] |= (src[28+j] << 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[28+j] >> 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[32+j]) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[32+j] >> 20) & 1048575;
		des[52+j] |= (src[36+j] << 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[36+j] >> 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[36+j] >> 28) & 1048575;
		des[60+j] |= (src[40+j] << 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[40+j] >> 16) & 1048575;
		des[64+j] |= (src[44+j] << 16) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[44+j] >> 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[44+j] >> 24) & 1048575;
		des[72+j] |= (src[48+j] << 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[48+j] >> 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[52+j]) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[52+j] >> 20) & 1048575;
		des[84+j] |= (src[56+j] << 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[56+j] >> 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[56+j] >> 28) & 1048575;
		des[92+j] |= (src[60+j] << 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[60+j] >> 16) & 1048575;
		des[96+j] |= (src[64+j] << 16) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[64+j] >> 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[64+j] >> 24) & 1048575;
		des[104+j] |= (src[68+j] << 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[68+j] >> 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[72+j]) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[72+j] >> 20) & 1048575;
		des[116+j] |= (src[76+j] << 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[76+j] >> 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[76+j] >> 28) & 1048575;
		des[124+j] |= (src[80+j] << 4) & 1048575;
	}
}

template<typename T>
void KAFOR_unpack_32len_20bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 1048575;
		des[j] |= (src[4+j] << 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j]) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 20) & 1048575;
		des[12+j] |= (src[12+j] << 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 28) & 1048575;
		des[20+j] |= (src[16+j] << 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 16) & 1048575;
		des[24+j] |= (src[20+j] << 16) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[20+j] >> 24) & 1048575;
		des[32+j] |= (src[24+j] << 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[24+j] >> 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[28+j]) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[28+j] >> 20) & 1048575;
		des[44+j] |= (src[32+j] << 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[32+j] >> 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[32+j] >> 28) & 1048575;
		des[52+j] |= (src[36+j] << 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[36+j] >> 16) & 1048575;
		des[56+j] |= (src[40+j] << 16) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[40+j] >> 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[40+j] >> 24) & 1048575;
		des[64+j] |= (src[44+j] << 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[44+j] >> 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[48+j]) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[48+j] >> 20) & 1048575;
		des[76+j] |= (src[52+j] << 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[52+j] >> 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[52+j] >> 28) & 1048575;
		des[84+j] |= (src[56+j] << 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[56+j] >> 16) & 1048575;
		des[88+j] |= (src[60+j] << 16) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[60+j] >> 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[60+j] >> 24) & 1048575;
		des[96+j] |= (src[64+j] << 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[64+j] >> 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[68+j]) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[68+j] >> 20) & 1048575;
		des[108+j] |= (src[72+j] << 12) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[72+j] >> 8) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[72+j] >> 28) & 1048575;
		des[116+j] |= (src[76+j] << 4) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[76+j] >> 16) & 1048575;
		des[120+j] |= (src[80+j] << 16) & 1048575;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[80+j] >> 4) & 1048575;
	}
}

template<typename T>
void KAFOR_unpack_32len_21bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 21) & 2097151;
		des[4+j] |= (src[4+j] << 11) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 10) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 31) & 2097151;
		des[12+j] |= (src[8+j] << 1) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 20) & 2097151;
		des[16+j] |= (src[12+j] << 12) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 9) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 30) & 2097151;
		des[24+j] |= (src[16+j] << 2) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 19) & 2097151;
		des[28+j] |= (src[20+j] << 13) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[20+j] >> 8) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[20+j] >> 29) & 2097151;
		des[36+j] |= (src[24+j] << 3) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[24+j] >> 18) & 2097151;
		des[40+j] |= (src[28+j] << 14) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[28+j] >> 7) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[28+j] >> 28) & 2097151;
		des[48+j] |= (src[32+j] << 4) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[32+j] >> 17) & 2097151;
		des[52+j] |= (src[36+j] << 15) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[36+j] >> 6) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[36+j] >> 27) & 2097151;
		des[60+j] |= (src[40+j] << 5) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[40+j] >> 16) & 2097151;
		des[64+j] |= (src[44+j] << 16) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[44+j] >> 5) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[44+j] >> 26) & 2097151;
		des[72+j] |= (src[48+j] << 6) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[48+j] >> 15) & 2097151;
		des[76+j] |= (src[52+j] << 17) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[52+j] >> 4) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[52+j] >> 25) & 2097151;
		des[84+j] |= (src[56+j] << 7) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[56+j] >> 14) & 2097151;
		des[88+j] |= (src[60+j] << 18) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[60+j] >> 3) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[60+j] >> 24) & 2097151;
		des[96+j] |= (src[64+j] << 8) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[64+j] >> 13) & 2097151;
		des[100+j] |= (src[68+j] << 19) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[68+j] >> 2) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[68+j] >> 23) & 2097151;
		des[108+j] |= (src[72+j] << 9) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[72+j] >> 12) & 2097151;
		des[112+j] |= (src[76+j] << 20) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[76+j] >> 1) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[76+j] >> 22) & 2097151;
		des[120+j] |= (src[80+j] << 10) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[80+j] >> 11) & 2097151;
	}
}

template<typename T>
void KAFOR_unpack_32len_21bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 29) & 2097151;
		des[4+j] |= (src[4+j] << 3) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 18) & 2097151;
		des[8+j] |= (src[8+j] << 14) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 7) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 28) & 2097151;
		des[16+j] |= (src[12+j] << 4) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 17) & 2097151;
		des[20+j] |= (src[16+j] << 15) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 6) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 27) & 2097151;
		des[28+j] |= (src[20+j] << 5) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[20+j] >> 16) & 2097151;
		des[32+j] |= (src[24+j] << 16) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[24+j] >> 5) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[24+j] >> 26) & 2097151;
		des[40+j] |= (src[28+j] << 6) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[28+j] >> 15) & 2097151;
		des[44+j] |= (src[32+j] << 17) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[32+j] >> 4) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[32+j] >> 25) & 2097151;
		des[52+j] |= (src[36+j] << 7) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[36+j] >> 14) & 2097151;
		des[56+j] |= (src[40+j] << 18) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[40+j] >> 3) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[40+j] >> 24) & 2097151;
		des[64+j] |= (src[44+j] << 8) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[44+j] >> 13) & 2097151;
		des[68+j] |= (src[48+j] << 19) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[48+j] >> 2) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[48+j] >> 23) & 2097151;
		des[76+j] |= (src[52+j] << 9) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[52+j] >> 12) & 2097151;
		des[80+j] |= (src[56+j] << 20) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[56+j] >> 1) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[56+j] >> 22) & 2097151;
		des[88+j] |= (src[60+j] << 10) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[60+j] >> 11) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[64+j]) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[64+j] >> 21) & 2097151;
		des[100+j] |= (src[68+j] << 11) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[68+j] >> 10) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[68+j] >> 31) & 2097151;
		des[108+j] |= (src[72+j] << 1) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[72+j] >> 20) & 2097151;
		des[112+j] |= (src[76+j] << 12) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[76+j] >> 9) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[76+j] >> 30) & 2097151;
		des[120+j] |= (src[80+j] << 2) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[80+j] >> 19) & 2097151;
		des[124+j] |= (src[84+j] << 13) & 2097151;
	}
}

template<typename T>
void KAFOR_unpack_32len_21bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 2097151;
		des[j] |= (src[4+j] << 16) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 5) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 26) & 2097151;
		des[8+j] |= (src[8+j] << 6) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 15) & 2097151;
		des[12+j] |= (src[12+j] << 17) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 4) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 25) & 2097151;
		des[20+j] |= (src[16+j] << 7) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 14) & 2097151;
		des[24+j] |= (src[20+j] << 18) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 3) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[20+j] >> 24) & 2097151;
		des[32+j] |= (src[24+j] << 8) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[24+j] >> 13) & 2097151;
		des[36+j] |= (src[28+j] << 19) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[28+j] >> 2) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[28+j] >> 23) & 2097151;
		des[44+j] |= (src[32+j] << 9) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[32+j] >> 12) & 2097151;
		des[48+j] |= (src[36+j] << 20) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[36+j] >> 1) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[36+j] >> 22) & 2097151;
		des[56+j] |= (src[40+j] << 10) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[40+j] >> 11) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[44+j]) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[44+j] >> 21) & 2097151;
		des[68+j] |= (src[48+j] << 11) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[48+j] >> 10) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[48+j] >> 31) & 2097151;
		des[76+j] |= (src[52+j] << 1) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[52+j] >> 20) & 2097151;
		des[80+j] |= (src[56+j] << 12) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[56+j] >> 9) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[56+j] >> 30) & 2097151;
		des[88+j] |= (src[60+j] << 2) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[60+j] >> 19) & 2097151;
		des[92+j] |= (src[64+j] << 13) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[64+j] >> 8) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[64+j] >> 29) & 2097151;
		des[100+j] |= (src[68+j] << 3) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[68+j] >> 18) & 2097151;
		des[104+j] |= (src[72+j] << 14) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[72+j] >> 7) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[72+j] >> 28) & 2097151;
		des[112+j] |= (src[76+j] << 4) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[76+j] >> 17) & 2097151;
		des[116+j] |= (src[80+j] << 15) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[80+j] >> 6) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[80+j] >> 27) & 2097151;
		des[124+j] |= (src[84+j] << 5) & 2097151;
	}
}

template<typename T>
void KAFOR_unpack_32len_21bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 2097151;
		des[j] |= (src[4+j] << 8) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 13) & 2097151;
		des[4+j] |= (src[8+j] << 19) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 2) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 23) & 2097151;
		des[12+j] |= (src[12+j] << 9) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 12) & 2097151;
		des[16+j] |= (src[16+j] << 20) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 1) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 22) & 2097151;
		des[24+j] |= (src[20+j] << 10) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 11) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[24+j]) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[24+j] >> 21) & 2097151;
		des[36+j] |= (src[28+j] << 11) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[28+j] >> 10) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[28+j] >> 31) & 2097151;
		des[44+j] |= (src[32+j] << 1) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[32+j] >> 20) & 2097151;
		des[48+j] |= (src[36+j] << 12) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[36+j] >> 9) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[36+j] >> 30) & 2097151;
		des[56+j] |= (src[40+j] << 2) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[40+j] >> 19) & 2097151;
		des[60+j] |= (src[44+j] << 13) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[44+j] >> 8) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[44+j] >> 29) & 2097151;
		des[68+j] |= (src[48+j] << 3) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[48+j] >> 18) & 2097151;
		des[72+j] |= (src[52+j] << 14) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[52+j] >> 7) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[52+j] >> 28) & 2097151;
		des[80+j] |= (src[56+j] << 4) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[56+j] >> 17) & 2097151;
		des[84+j] |= (src[60+j] << 15) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[60+j] >> 6) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[60+j] >> 27) & 2097151;
		des[92+j] |= (src[64+j] << 5) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[64+j] >> 16) & 2097151;
		des[96+j] |= (src[68+j] << 16) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[68+j] >> 5) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[68+j] >> 26) & 2097151;
		des[104+j] |= (src[72+j] << 6) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[72+j] >> 15) & 2097151;
		des[108+j] |= (src[76+j] << 17) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[76+j] >> 4) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[76+j] >> 25) & 2097151;
		des[116+j] |= (src[80+j] << 7) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[80+j] >> 14) & 2097151;
		des[120+j] |= (src[84+j] << 18) & 2097151;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[84+j] >> 3) & 2097151;
	}
}

template<typename T>
void KAFOR_unpack_32len_22bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 22) & 4194303;
		des[4+j] |= (src[4+j] << 10) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 12) & 4194303;
		des[8+j] |= (src[8+j] << 20) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 2) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 24) & 4194303;
		des[16+j] |= (src[12+j] << 8) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 14) & 4194303;
		des[20+j] |= (src[16+j] << 18) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 4) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 26) & 4194303;
		des[28+j] |= (src[20+j] << 6) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[20+j] >> 16) & 4194303;
		des[32+j] |= (src[24+j] << 16) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[24+j] >> 6) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[24+j] >> 28) & 4194303;
		des[40+j] |= (src[28+j] << 4) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[28+j] >> 18) & 4194303;
		des[44+j] |= (src[32+j] << 14) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[32+j] >> 8) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[32+j] >> 30) & 4194303;
		des[52+j] |= (src[36+j] << 2) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[36+j] >> 20) & 4194303;
		des[56+j] |= (src[40+j] << 12) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[40+j] >> 10) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[44+j]) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[44+j] >> 22) & 4194303;
		des[68+j] |= (src[48+j] << 10) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[48+j] >> 12) & 4194303;
		des[72+j] |= (src[52+j] << 20) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[52+j] >> 2) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[52+j] >> 24) & 4194303;
		des[80+j] |= (src[56+j] << 8) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[56+j] >> 14) & 4194303;
		des[84+j] |= (src[60+j] << 18) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[60+j] >> 4) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[60+j] >> 26) & 4194303;
		des[92+j] |= (src[64+j] << 6) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[64+j] >> 16) & 4194303;
		des[96+j] |= (src[68+j] << 16) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[68+j] >> 6) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[68+j] >> 28) & 4194303;
		des[104+j] |= (src[72+j] << 4) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[72+j] >> 18) & 4194303;
		des[108+j] |= (src[76+j] << 14) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[76+j] >> 8) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[76+j] >> 30) & 4194303;
		des[116+j] |= (src[80+j] << 2) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[80+j] >> 20) & 4194303;
		des[120+j] |= (src[84+j] << 12) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[84+j] >> 10) & 4194303;
	}
}

template<typename T>
void KAFOR_unpack_32len_22bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 30) & 4194303;
		des[4+j] |= (src[4+j] << 2) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 20) & 4194303;
		des[8+j] |= (src[8+j] << 12) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 10) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j]) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 22) & 4194303;
		des[20+j] |= (src[16+j] << 10) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 12) & 4194303;
		des[24+j] |= (src[20+j] << 20) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 2) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[20+j] >> 24) & 4194303;
		des[32+j] |= (src[24+j] << 8) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[24+j] >> 14) & 4194303;
		des[36+j] |= (src[28+j] << 18) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[28+j] >> 4) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[28+j] >> 26) & 4194303;
		des[44+j] |= (src[32+j] << 6) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[32+j] >> 16) & 4194303;
		des[48+j] |= (src[36+j] << 16) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[36+j] >> 6) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[36+j] >> 28) & 4194303;
		des[56+j] |= (src[40+j] << 4) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[40+j] >> 18) & 4194303;
		des[60+j] |= (src[44+j] << 14) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[44+j] >> 8) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[44+j] >> 30) & 4194303;
		des[68+j] |= (src[48+j] << 2) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[48+j] >> 20) & 4194303;
		des[72+j] |= (src[52+j] << 12) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[52+j] >> 10) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[56+j]) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[56+j] >> 22) & 4194303;
		des[84+j] |= (src[60+j] << 10) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[60+j] >> 12) & 4194303;
		des[88+j] |= (src[64+j] << 20) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[64+j] >> 2) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[64+j] >> 24) & 4194303;
		des[96+j] |= (src[68+j] << 8) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[68+j] >> 14) & 4194303;
		des[100+j] |= (src[72+j] << 18) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[72+j] >> 4) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[72+j] >> 26) & 4194303;
		des[108+j] |= (src[76+j] << 6) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[76+j] >> 16) & 4194303;
		des[112+j] |= (src[80+j] << 16) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[80+j] >> 6) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[80+j] >> 28) & 4194303;
		des[120+j] |= (src[84+j] << 4) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[84+j] >> 18) & 4194303;
		des[124+j] |= (src[88+j] << 14) & 4194303;
	}
}

template<typename T>
void KAFOR_unpack_32len_22bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 4194303;
		des[j] |= (src[4+j] << 16) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 6) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 28) & 4194303;
		des[8+j] |= (src[8+j] << 4) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 18) & 4194303;
		des[12+j] |= (src[12+j] << 14) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 8) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 30) & 4194303;
		des[20+j] |= (src[16+j] << 2) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 20) & 4194303;
		des[24+j] |= (src[20+j] << 12) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 10) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[24+j]) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[24+j] >> 22) & 4194303;
		des[36+j] |= (src[28+j] << 10) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[28+j] >> 12) & 4194303;
		des[40+j] |= (src[32+j] << 20) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[32+j] >> 2) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[32+j] >> 24) & 4194303;
		des[48+j] |= (src[36+j] << 8) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[36+j] >> 14) & 4194303;
		des[52+j] |= (src[40+j] << 18) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[40+j] >> 4) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[40+j] >> 26) & 4194303;
		des[60+j] |= (src[44+j] << 6) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[44+j] >> 16) & 4194303;
		des[64+j] |= (src[48+j] << 16) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[48+j] >> 6) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[48+j] >> 28) & 4194303;
		des[72+j] |= (src[52+j] << 4) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[52+j] >> 18) & 4194303;
		des[76+j] |= (src[56+j] << 14) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[56+j] >> 8) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[56+j] >> 30) & 4194303;
		des[84+j] |= (src[60+j] << 2) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[60+j] >> 20) & 4194303;
		des[88+j] |= (src[64+j] << 12) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[64+j] >> 10) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[68+j]) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[68+j] >> 22) & 4194303;
		des[100+j] |= (src[72+j] << 10) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[72+j] >> 12) & 4194303;
		des[104+j] |= (src[76+j] << 20) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[76+j] >> 2) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[76+j] >> 24) & 4194303;
		des[112+j] |= (src[80+j] << 8) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[80+j] >> 14) & 4194303;
		des[116+j] |= (src[84+j] << 18) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[84+j] >> 4) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[84+j] >> 26) & 4194303;
		des[124+j] |= (src[88+j] << 6) & 4194303;
	}
}

template<typename T>
void KAFOR_unpack_32len_22bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 4194303;
		des[j] |= (src[4+j] << 8) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 14) & 4194303;
		des[4+j] |= (src[8+j] << 18) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 4) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 26) & 4194303;
		des[12+j] |= (src[12+j] << 6) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 16) & 4194303;
		des[16+j] |= (src[16+j] << 16) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 6) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 28) & 4194303;
		des[24+j] |= (src[20+j] << 4) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 18) & 4194303;
		des[28+j] |= (src[24+j] << 14) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[24+j] >> 8) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[24+j] >> 30) & 4194303;
		des[36+j] |= (src[28+j] << 2) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[28+j] >> 20) & 4194303;
		des[40+j] |= (src[32+j] << 12) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[32+j] >> 10) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[36+j]) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[36+j] >> 22) & 4194303;
		des[52+j] |= (src[40+j] << 10) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[40+j] >> 12) & 4194303;
		des[56+j] |= (src[44+j] << 20) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[44+j] >> 2) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[44+j] >> 24) & 4194303;
		des[64+j] |= (src[48+j] << 8) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[48+j] >> 14) & 4194303;
		des[68+j] |= (src[52+j] << 18) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[52+j] >> 4) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[52+j] >> 26) & 4194303;
		des[76+j] |= (src[56+j] << 6) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[56+j] >> 16) & 4194303;
		des[80+j] |= (src[60+j] << 16) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[60+j] >> 6) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[60+j] >> 28) & 4194303;
		des[88+j] |= (src[64+j] << 4) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[64+j] >> 18) & 4194303;
		des[92+j] |= (src[68+j] << 14) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[68+j] >> 8) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[68+j] >> 30) & 4194303;
		des[100+j] |= (src[72+j] << 2) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[72+j] >> 20) & 4194303;
		des[104+j] |= (src[76+j] << 12) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[76+j] >> 10) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[80+j]) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[80+j] >> 22) & 4194303;
		des[116+j] |= (src[84+j] << 10) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[84+j] >> 12) & 4194303;
		des[120+j] |= (src[88+j] << 20) & 4194303;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[88+j] >> 2) & 4194303;
	}
}

template<typename T>
void KAFOR_unpack_32len_23bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 23) & 8388607;
		des[4+j] |= (src[4+j] << 9) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 14) & 8388607;
		des[8+j] |= (src[8+j] << 18) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 5) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 28) & 8388607;
		des[16+j] |= (src[12+j] << 4) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 19) & 8388607;
		des[20+j] |= (src[16+j] << 13) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 10) & 8388607;
		des[24+j] |= (src[20+j] << 22) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 1) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[20+j] >> 24) & 8388607;
		des[32+j] |= (src[24+j] << 8) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[24+j] >> 15) & 8388607;
		des[36+j] |= (src[28+j] << 17) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[28+j] >> 6) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[28+j] >> 29) & 8388607;
		des[44+j] |= (src[32+j] << 3) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[32+j] >> 20) & 8388607;
		des[48+j] |= (src[36+j] << 12) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[36+j] >> 11) & 8388607;
		des[52+j] |= (src[40+j] << 21) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[40+j] >> 2) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[40+j] >> 25) & 8388607;
		des[60+j] |= (src[44+j] << 7) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[44+j] >> 16) & 8388607;
		des[64+j] |= (src[48+j] << 16) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[48+j] >> 7) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[48+j] >> 30) & 8388607;
		des[72+j] |= (src[52+j] << 2) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[52+j] >> 21) & 8388607;
		des[76+j] |= (src[56+j] << 11) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[56+j] >> 12) & 8388607;
		des[80+j] |= (src[60+j] << 20) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[60+j] >> 3) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[60+j] >> 26) & 8388607;
		des[88+j] |= (src[64+j] << 6) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[64+j] >> 17) & 8388607;
		des[92+j] |= (src[68+j] << 15) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[68+j] >> 8) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[68+j] >> 31) & 8388607;
		des[100+j] |= (src[72+j] << 1) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[72+j] >> 22) & 8388607;
		des[104+j] |= (src[76+j] << 10) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[76+j] >> 13) & 8388607;
		des[108+j] |= (src[80+j] << 19) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[80+j] >> 4) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[80+j] >> 27) & 8388607;
		des[116+j] |= (src[84+j] << 5) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[84+j] >> 18) & 8388607;
		des[120+j] |= (src[88+j] << 14) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[88+j] >> 9) & 8388607;
	}
}

template<typename T>
void KAFOR_unpack_32len_23bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 31) & 8388607;
		des[4+j] |= (src[4+j] << 1) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 22) & 8388607;
		des[8+j] |= (src[8+j] << 10) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 13) & 8388607;
		des[12+j] |= (src[12+j] << 19) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 4) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 27) & 8388607;
		des[20+j] |= (src[16+j] << 5) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 18) & 8388607;
		des[24+j] |= (src[20+j] << 14) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 9) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[24+j]) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[24+j] >> 23) & 8388607;
		des[36+j] |= (src[28+j] << 9) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[28+j] >> 14) & 8388607;
		des[40+j] |= (src[32+j] << 18) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[32+j] >> 5) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[32+j] >> 28) & 8388607;
		des[48+j] |= (src[36+j] << 4) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[36+j] >> 19) & 8388607;
		des[52+j] |= (src[40+j] << 13) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[40+j] >> 10) & 8388607;
		des[56+j] |= (src[44+j] << 22) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[44+j] >> 1) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[44+j] >> 24) & 8388607;
		des[64+j] |= (src[48+j] << 8) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[48+j] >> 15) & 8388607;
		des[68+j] |= (src[52+j] << 17) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[52+j] >> 6) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[52+j] >> 29) & 8388607;
		des[76+j] |= (src[56+j] << 3) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[56+j] >> 20) & 8388607;
		des[80+j] |= (src[60+j] << 12) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[60+j] >> 11) & 8388607;
		des[84+j] |= (src[64+j] << 21) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[64+j] >> 2) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[64+j] >> 25) & 8388607;
		des[92+j] |= (src[68+j] << 7) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[68+j] >> 16) & 8388607;
		des[96+j] |= (src[72+j] << 16) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[72+j] >> 7) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[72+j] >> 30) & 8388607;
		des[104+j] |= (src[76+j] << 2) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[76+j] >> 21) & 8388607;
		des[108+j] |= (src[80+j] << 11) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[80+j] >> 12) & 8388607;
		des[112+j] |= (src[84+j] << 20) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[84+j] >> 3) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[84+j] >> 26) & 8388607;
		des[120+j] |= (src[88+j] << 6) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[88+j] >> 17) & 8388607;
		des[124+j] |= (src[92+j] << 15) & 8388607;
	}
}

template<typename T>
void KAFOR_unpack_32len_23bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 8388607;
		des[j] |= (src[4+j] << 16) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 7) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 30) & 8388607;
		des[8+j] |= (src[8+j] << 2) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 21) & 8388607;
		des[12+j] |= (src[12+j] << 11) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 12) & 8388607;
		des[16+j] |= (src[16+j] << 20) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 3) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 26) & 8388607;
		des[24+j] |= (src[20+j] << 6) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 17) & 8388607;
		des[28+j] |= (src[24+j] << 15) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[24+j] >> 8) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[24+j] >> 31) & 8388607;
		des[36+j] |= (src[28+j] << 1) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[28+j] >> 22) & 8388607;
		des[40+j] |= (src[32+j] << 10) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[32+j] >> 13) & 8388607;
		des[44+j] |= (src[36+j] << 19) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[36+j] >> 4) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[36+j] >> 27) & 8388607;
		des[52+j] |= (src[40+j] << 5) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[40+j] >> 18) & 8388607;
		des[56+j] |= (src[44+j] << 14) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[44+j] >> 9) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[48+j]) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[48+j] >> 23) & 8388607;
		des[68+j] |= (src[52+j] << 9) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[52+j] >> 14) & 8388607;
		des[72+j] |= (src[56+j] << 18) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[56+j] >> 5) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[56+j] >> 28) & 8388607;
		des[80+j] |= (src[60+j] << 4) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[60+j] >> 19) & 8388607;
		des[84+j] |= (src[64+j] << 13) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[64+j] >> 10) & 8388607;
		des[88+j] |= (src[68+j] << 22) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[68+j] >> 1) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[68+j] >> 24) & 8388607;
		des[96+j] |= (src[72+j] << 8) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[72+j] >> 15) & 8388607;
		des[100+j] |= (src[76+j] << 17) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[76+j] >> 6) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[76+j] >> 29) & 8388607;
		des[108+j] |= (src[80+j] << 3) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[80+j] >> 20) & 8388607;
		des[112+j] |= (src[84+j] << 12) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[84+j] >> 11) & 8388607;
		des[116+j] |= (src[88+j] << 21) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[88+j] >> 2) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[88+j] >> 25) & 8388607;
		des[124+j] |= (src[92+j] << 7) & 8388607;
	}
}

template<typename T>
void KAFOR_unpack_32len_23bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 8388607;
		des[j] |= (src[4+j] << 8) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 15) & 8388607;
		des[4+j] |= (src[8+j] << 17) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 6) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 29) & 8388607;
		des[12+j] |= (src[12+j] << 3) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 20) & 8388607;
		des[16+j] |= (src[16+j] << 12) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 11) & 8388607;
		des[20+j] |= (src[20+j] << 21) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 2) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 25) & 8388607;
		des[28+j] |= (src[24+j] << 7) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[24+j] >> 16) & 8388607;
		des[32+j] |= (src[28+j] << 16) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[28+j] >> 7) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[28+j] >> 30) & 8388607;
		des[40+j] |= (src[32+j] << 2) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[32+j] >> 21) & 8388607;
		des[44+j] |= (src[36+j] << 11) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[36+j] >> 12) & 8388607;
		des[48+j] |= (src[40+j] << 20) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[40+j] >> 3) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[40+j] >> 26) & 8388607;
		des[56+j] |= (src[44+j] << 6) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[44+j] >> 17) & 8388607;
		des[60+j] |= (src[48+j] << 15) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[48+j] >> 8) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[48+j] >> 31) & 8388607;
		des[68+j] |= (src[52+j] << 1) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[52+j] >> 22) & 8388607;
		des[72+j] |= (src[56+j] << 10) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[56+j] >> 13) & 8388607;
		des[76+j] |= (src[60+j] << 19) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[60+j] >> 4) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[60+j] >> 27) & 8388607;
		des[84+j] |= (src[64+j] << 5) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[64+j] >> 18) & 8388607;
		des[88+j] |= (src[68+j] << 14) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[68+j] >> 9) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[72+j]) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[72+j] >> 23) & 8388607;
		des[100+j] |= (src[76+j] << 9) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[76+j] >> 14) & 8388607;
		des[104+j] |= (src[80+j] << 18) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[80+j] >> 5) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[80+j] >> 28) & 8388607;
		des[112+j] |= (src[84+j] << 4) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[84+j] >> 19) & 8388607;
		des[116+j] |= (src[88+j] << 13) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[88+j] >> 10) & 8388607;
		des[120+j] |= (src[92+j] << 22) & 8388607;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[92+j] >> 1) & 8388607;
	}
}

template<typename T>
void KAFOR_unpack_32len_24bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 24) & 16777215;
		des[4+j] |= (src[4+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 16) & 16777215;
		des[8+j] |= (src[8+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 24) & 16777215;
		des[20+j] |= (src[16+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 16) & 16777215;
		des[24+j] |= (src[20+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[24+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[24+j] >> 24) & 16777215;
		des[36+j] |= (src[28+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[28+j] >> 16) & 16777215;
		des[40+j] |= (src[32+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[32+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[36+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[36+j] >> 24) & 16777215;
		des[52+j] |= (src[40+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[40+j] >> 16) & 16777215;
		des[56+j] |= (src[44+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[44+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[48+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[48+j] >> 24) & 16777215;
		des[68+j] |= (src[52+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[52+j] >> 16) & 16777215;
		des[72+j] |= (src[56+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[56+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[60+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[60+j] >> 24) & 16777215;
		des[84+j] |= (src[64+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[64+j] >> 16) & 16777215;
		des[88+j] |= (src[68+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[68+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[72+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[72+j] >> 24) & 16777215;
		des[100+j] |= (src[76+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[76+j] >> 16) & 16777215;
		des[104+j] |= (src[80+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[80+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[84+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[84+j] >> 24) & 16777215;
		des[116+j] |= (src[88+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[88+j] >> 16) & 16777215;
		des[120+j] |= (src[92+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[92+j] >> 8) & 16777215;
	}
}

template<typename T>
void KAFOR_unpack_32len_24bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 24) & 16777215;
		des[8+j] |= (src[8+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 16) & 16777215;
		des[12+j] |= (src[12+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 24) & 16777215;
		des[24+j] |= (src[20+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 16) & 16777215;
		des[28+j] |= (src[24+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[24+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[28+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[28+j] >> 24) & 16777215;
		des[40+j] |= (src[32+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[32+j] >> 16) & 16777215;
		des[44+j] |= (src[36+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[36+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[40+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[40+j] >> 24) & 16777215;
		des[56+j] |= (src[44+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[44+j] >> 16) & 16777215;
		des[60+j] |= (src[48+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[48+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[52+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[52+j] >> 24) & 16777215;
		des[72+j] |= (src[56+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[56+j] >> 16) & 16777215;
		des[76+j] |= (src[60+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[60+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[64+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[64+j] >> 24) & 16777215;
		des[88+j] |= (src[68+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[68+j] >> 16) & 16777215;
		des[92+j] |= (src[72+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[72+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[76+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[76+j] >> 24) & 16777215;
		des[104+j] |= (src[80+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[80+j] >> 16) & 16777215;
		des[108+j] |= (src[84+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[84+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[88+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[88+j] >> 24) & 16777215;
		des[120+j] |= (src[92+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[92+j] >> 16) & 16777215;
		des[124+j] |= (src[96+j] << 16) & 16777215;
	}
}

template<typename T>
void KAFOR_unpack_32len_24bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 16777215;
		des[j] |= (src[4+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 24) & 16777215;
		des[12+j] |= (src[12+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 16) & 16777215;
		des[16+j] |= (src[16+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 24) & 16777215;
		des[28+j] |= (src[24+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[24+j] >> 16) & 16777215;
		des[32+j] |= (src[28+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[28+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[32+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[32+j] >> 24) & 16777215;
		des[44+j] |= (src[36+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[36+j] >> 16) & 16777215;
		des[48+j] |= (src[40+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[40+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[44+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[44+j] >> 24) & 16777215;
		des[60+j] |= (src[48+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[48+j] >> 16) & 16777215;
		des[64+j] |= (src[52+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[52+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[56+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[56+j] >> 24) & 16777215;
		des[76+j] |= (src[60+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[60+j] >> 16) & 16777215;
		des[80+j] |= (src[64+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[64+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[68+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[68+j] >> 24) & 16777215;
		des[92+j] |= (src[72+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[72+j] >> 16) & 16777215;
		des[96+j] |= (src[76+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[76+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[80+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[80+j] >> 24) & 16777215;
		des[108+j] |= (src[84+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[84+j] >> 16) & 16777215;
		des[112+j] |= (src[88+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[88+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[92+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[92+j] >> 24) & 16777215;
		des[124+j] |= (src[96+j] << 8) & 16777215;
	}
}

template<typename T>
void KAFOR_unpack_32len_24bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 16777215;
		des[j] |= (src[4+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 16) & 16777215;
		des[4+j] |= (src[8+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 24) & 16777215;
		des[16+j] |= (src[16+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 16) & 16777215;
		des[20+j] |= (src[20+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[24+j] >> 24) & 16777215;
		des[32+j] |= (src[28+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[28+j] >> 16) & 16777215;
		des[36+j] |= (src[32+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[32+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[36+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[36+j] >> 24) & 16777215;
		des[48+j] |= (src[40+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[40+j] >> 16) & 16777215;
		des[52+j] |= (src[44+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[44+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[48+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[48+j] >> 24) & 16777215;
		des[64+j] |= (src[52+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[52+j] >> 16) & 16777215;
		des[68+j] |= (src[56+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[56+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[60+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[60+j] >> 24) & 16777215;
		des[80+j] |= (src[64+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[64+j] >> 16) & 16777215;
		des[84+j] |= (src[68+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[68+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[72+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[72+j] >> 24) & 16777215;
		des[96+j] |= (src[76+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[76+j] >> 16) & 16777215;
		des[100+j] |= (src[80+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[80+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[84+j]) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[84+j] >> 24) & 16777215;
		des[112+j] |= (src[88+j] << 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[88+j] >> 16) & 16777215;
		des[116+j] |= (src[92+j] << 16) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[92+j] >> 8) & 16777215;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[96+j]) & 16777215;
	}
}

template<typename T>
void KAFOR_unpack_32len_25bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 25) & 33554431;
		des[4+j] |= (src[4+j] << 7) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 18) & 33554431;
		des[8+j] |= (src[8+j] << 14) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 11) & 33554431;
		des[12+j] |= (src[12+j] << 21) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 4) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 29) & 33554431;
		des[20+j] |= (src[16+j] << 3) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 22) & 33554431;
		des[24+j] |= (src[20+j] << 10) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 15) & 33554431;
		des[28+j] |= (src[24+j] << 17) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[24+j] >> 8) & 33554431;
		des[32+j] |= (src[28+j] << 24) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[28+j] >> 1) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[28+j] >> 26) & 33554431;
		des[40+j] |= (src[32+j] << 6) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[32+j] >> 19) & 33554431;
		des[44+j] |= (src[36+j] << 13) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[36+j] >> 12) & 33554431;
		des[48+j] |= (src[40+j] << 20) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[40+j] >> 5) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[40+j] >> 30) & 33554431;
		des[56+j] |= (src[44+j] << 2) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[44+j] >> 23) & 33554431;
		des[60+j] |= (src[48+j] << 9) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[48+j] >> 16) & 33554431;
		des[64+j] |= (src[52+j] << 16) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[52+j] >> 9) & 33554431;
		des[68+j] |= (src[56+j] << 23) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[56+j] >> 2) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[56+j] >> 27) & 33554431;
		des[76+j] |= (src[60+j] << 5) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[60+j] >> 20) & 33554431;
		des[80+j] |= (src[64+j] << 12) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[64+j] >> 13) & 33554431;
		des[84+j] |= (src[68+j] << 19) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[68+j] >> 6) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[68+j] >> 31) & 33554431;
		des[92+j] |= (src[72+j] << 1) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[72+j] >> 24) & 33554431;
		des[96+j] |= (src[76+j] << 8) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[76+j] >> 17) & 33554431;
		des[100+j] |= (src[80+j] << 15) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[80+j] >> 10) & 33554431;
		des[104+j] |= (src[84+j] << 22) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[84+j] >> 3) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[84+j] >> 28) & 33554431;
		des[112+j] |= (src[88+j] << 4) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[88+j] >> 21) & 33554431;
		des[116+j] |= (src[92+j] << 11) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[92+j] >> 14) & 33554431;
		des[120+j] |= (src[96+j] << 18) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[96+j] >> 7) & 33554431;
	}
}

template<typename T>
void KAFOR_unpack_32len_25bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 33554431;
		des[j] |= (src[4+j] << 24) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 1) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 26) & 33554431;
		des[8+j] |= (src[8+j] << 6) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 19) & 33554431;
		des[12+j] |= (src[12+j] << 13) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 12) & 33554431;
		des[16+j] |= (src[16+j] << 20) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 5) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 30) & 33554431;
		des[24+j] |= (src[20+j] << 2) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 23) & 33554431;
		des[28+j] |= (src[24+j] << 9) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[24+j] >> 16) & 33554431;
		des[32+j] |= (src[28+j] << 16) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[28+j] >> 9) & 33554431;
		des[36+j] |= (src[32+j] << 23) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[32+j] >> 2) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[32+j] >> 27) & 33554431;
		des[44+j] |= (src[36+j] << 5) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[36+j] >> 20) & 33554431;
		des[48+j] |= (src[40+j] << 12) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[40+j] >> 13) & 33554431;
		des[52+j] |= (src[44+j] << 19) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[44+j] >> 6) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[44+j] >> 31) & 33554431;
		des[60+j] |= (src[48+j] << 1) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[48+j] >> 24) & 33554431;
		des[64+j] |= (src[52+j] << 8) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[52+j] >> 17) & 33554431;
		des[68+j] |= (src[56+j] << 15) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[56+j] >> 10) & 33554431;
		des[72+j] |= (src[60+j] << 22) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[60+j] >> 3) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[60+j] >> 28) & 33554431;
		des[80+j] |= (src[64+j] << 4) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[64+j] >> 21) & 33554431;
		des[84+j] |= (src[68+j] << 11) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[68+j] >> 14) & 33554431;
		des[88+j] |= (src[72+j] << 18) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[72+j] >> 7) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[76+j]) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[76+j] >> 25) & 33554431;
		des[100+j] |= (src[80+j] << 7) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[80+j] >> 18) & 33554431;
		des[104+j] |= (src[84+j] << 14) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[84+j] >> 11) & 33554431;
		des[108+j] |= (src[88+j] << 21) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[88+j] >> 4) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[88+j] >> 29) & 33554431;
		des[116+j] |= (src[92+j] << 3) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[92+j] >> 22) & 33554431;
		des[120+j] |= (src[96+j] << 10) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[96+j] >> 15) & 33554431;
		des[124+j] |= (src[100+j] << 17) & 33554431;
	}
}

template<typename T>
void KAFOR_unpack_32len_25bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 33554431;
		des[j] |= (src[4+j] << 16) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 9) & 33554431;
		des[4+j] |= (src[8+j] << 23) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 2) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 27) & 33554431;
		des[12+j] |= (src[12+j] << 5) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 20) & 33554431;
		des[16+j] |= (src[16+j] << 12) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 13) & 33554431;
		des[20+j] |= (src[20+j] << 19) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 6) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 31) & 33554431;
		des[28+j] |= (src[24+j] << 1) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[24+j] >> 24) & 33554431;
		des[32+j] |= (src[28+j] << 8) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[28+j] >> 17) & 33554431;
		des[36+j] |= (src[32+j] << 15) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[32+j] >> 10) & 33554431;
		des[40+j] |= (src[36+j] << 22) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[36+j] >> 3) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[36+j] >> 28) & 33554431;
		des[48+j] |= (src[40+j] << 4) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[40+j] >> 21) & 33554431;
		des[52+j] |= (src[44+j] << 11) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[44+j] >> 14) & 33554431;
		des[56+j] |= (src[48+j] << 18) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[48+j] >> 7) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[52+j]) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[52+j] >> 25) & 33554431;
		des[68+j] |= (src[56+j] << 7) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[56+j] >> 18) & 33554431;
		des[72+j] |= (src[60+j] << 14) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[60+j] >> 11) & 33554431;
		des[76+j] |= (src[64+j] << 21) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[64+j] >> 4) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[64+j] >> 29) & 33554431;
		des[84+j] |= (src[68+j] << 3) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[68+j] >> 22) & 33554431;
		des[88+j] |= (src[72+j] << 10) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[72+j] >> 15) & 33554431;
		des[92+j] |= (src[76+j] << 17) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[76+j] >> 8) & 33554431;
		des[96+j] |= (src[80+j] << 24) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[80+j] >> 1) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[80+j] >> 26) & 33554431;
		des[104+j] |= (src[84+j] << 6) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[84+j] >> 19) & 33554431;
		des[108+j] |= (src[88+j] << 13) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[88+j] >> 12) & 33554431;
		des[112+j] |= (src[92+j] << 20) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[92+j] >> 5) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[92+j] >> 30) & 33554431;
		des[120+j] |= (src[96+j] << 2) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[96+j] >> 23) & 33554431;
		des[124+j] |= (src[100+j] << 9) & 33554431;
	}
}

template<typename T>
void KAFOR_unpack_32len_25bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 33554431;
		des[j] |= (src[4+j] << 8) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 17) & 33554431;
		des[4+j] |= (src[8+j] << 15) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 10) & 33554431;
		des[8+j] |= (src[12+j] << 22) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 3) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 28) & 33554431;
		des[16+j] |= (src[16+j] << 4) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 21) & 33554431;
		des[20+j] |= (src[20+j] << 11) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 14) & 33554431;
		des[24+j] |= (src[24+j] << 18) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j] >> 7) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[28+j]) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[28+j] >> 25) & 33554431;
		des[36+j] |= (src[32+j] << 7) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[32+j] >> 18) & 33554431;
		des[40+j] |= (src[36+j] << 14) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[36+j] >> 11) & 33554431;
		des[44+j] |= (src[40+j] << 21) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[40+j] >> 4) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[40+j] >> 29) & 33554431;
		des[52+j] |= (src[44+j] << 3) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[44+j] >> 22) & 33554431;
		des[56+j] |= (src[48+j] << 10) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[48+j] >> 15) & 33554431;
		des[60+j] |= (src[52+j] << 17) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[52+j] >> 8) & 33554431;
		des[64+j] |= (src[56+j] << 24) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[56+j] >> 1) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[56+j] >> 26) & 33554431;
		des[72+j] |= (src[60+j] << 6) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[60+j] >> 19) & 33554431;
		des[76+j] |= (src[64+j] << 13) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[64+j] >> 12) & 33554431;
		des[80+j] |= (src[68+j] << 20) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[68+j] >> 5) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[68+j] >> 30) & 33554431;
		des[88+j] |= (src[72+j] << 2) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[72+j] >> 23) & 33554431;
		des[92+j] |= (src[76+j] << 9) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[76+j] >> 16) & 33554431;
		des[96+j] |= (src[80+j] << 16) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[80+j] >> 9) & 33554431;
		des[100+j] |= (src[84+j] << 23) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[84+j] >> 2) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[84+j] >> 27) & 33554431;
		des[108+j] |= (src[88+j] << 5) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[88+j] >> 20) & 33554431;
		des[112+j] |= (src[92+j] << 12) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[92+j] >> 13) & 33554431;
		des[116+j] |= (src[96+j] << 19) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[96+j] >> 6) & 33554431;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[96+j] >> 31) & 33554431;
		des[124+j] |= (src[100+j] << 1) & 33554431;
	}
}

template<typename T>
void KAFOR_unpack_32len_26bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 26) & 67108863;
		des[4+j] |= (src[4+j] << 6) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 20) & 67108863;
		des[8+j] |= (src[8+j] << 12) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 14) & 67108863;
		des[12+j] |= (src[12+j] << 18) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 8) & 67108863;
		des[16+j] |= (src[16+j] << 24) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 2) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 28) & 67108863;
		des[24+j] |= (src[20+j] << 4) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 22) & 67108863;
		des[28+j] |= (src[24+j] << 10) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[24+j] >> 16) & 67108863;
		des[32+j] |= (src[28+j] << 16) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[28+j] >> 10) & 67108863;
		des[36+j] |= (src[32+j] << 22) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[32+j] >> 4) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[32+j] >> 30) & 67108863;
		des[44+j] |= (src[36+j] << 2) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[36+j] >> 24) & 67108863;
		des[48+j] |= (src[40+j] << 8) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[40+j] >> 18) & 67108863;
		des[52+j] |= (src[44+j] << 14) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[44+j] >> 12) & 67108863;
		des[56+j] |= (src[48+j] << 20) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[48+j] >> 6) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[52+j]) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[52+j] >> 26) & 67108863;
		des[68+j] |= (src[56+j] << 6) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[56+j] >> 20) & 67108863;
		des[72+j] |= (src[60+j] << 12) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[60+j] >> 14) & 67108863;
		des[76+j] |= (src[64+j] << 18) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[64+j] >> 8) & 67108863;
		des[80+j] |= (src[68+j] << 24) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[68+j] >> 2) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[68+j] >> 28) & 67108863;
		des[88+j] |= (src[72+j] << 4) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[72+j] >> 22) & 67108863;
		des[92+j] |= (src[76+j] << 10) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[76+j] >> 16) & 67108863;
		des[96+j] |= (src[80+j] << 16) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[80+j] >> 10) & 67108863;
		des[100+j] |= (src[84+j] << 22) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[84+j] >> 4) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[84+j] >> 30) & 67108863;
		des[108+j] |= (src[88+j] << 2) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[88+j] >> 24) & 67108863;
		des[112+j] |= (src[92+j] << 8) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[92+j] >> 18) & 67108863;
		des[116+j] |= (src[96+j] << 14) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[96+j] >> 12) & 67108863;
		des[120+j] |= (src[100+j] << 20) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[100+j] >> 6) & 67108863;
	}
}

template<typename T>
void KAFOR_unpack_32len_26bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 67108863;
		des[j] |= (src[4+j] << 24) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 2) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 28) & 67108863;
		des[8+j] |= (src[8+j] << 4) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 22) & 67108863;
		des[12+j] |= (src[12+j] << 10) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 16) & 67108863;
		des[16+j] |= (src[16+j] << 16) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 10) & 67108863;
		des[20+j] |= (src[20+j] << 22) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 4) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 30) & 67108863;
		des[28+j] |= (src[24+j] << 2) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[24+j] >> 24) & 67108863;
		des[32+j] |= (src[28+j] << 8) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[28+j] >> 18) & 67108863;
		des[36+j] |= (src[32+j] << 14) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[32+j] >> 12) & 67108863;
		des[40+j] |= (src[36+j] << 20) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[36+j] >> 6) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[40+j]) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[40+j] >> 26) & 67108863;
		des[52+j] |= (src[44+j] << 6) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[44+j] >> 20) & 67108863;
		des[56+j] |= (src[48+j] << 12) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[48+j] >> 14) & 67108863;
		des[60+j] |= (src[52+j] << 18) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[52+j] >> 8) & 67108863;
		des[64+j] |= (src[56+j] << 24) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[56+j] >> 2) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[56+j] >> 28) & 67108863;
		des[72+j] |= (src[60+j] << 4) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[60+j] >> 22) & 67108863;
		des[76+j] |= (src[64+j] << 10) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[64+j] >> 16) & 67108863;
		des[80+j] |= (src[68+j] << 16) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[68+j] >> 10) & 67108863;
		des[84+j] |= (src[72+j] << 22) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[72+j] >> 4) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[72+j] >> 30) & 67108863;
		des[92+j] |= (src[76+j] << 2) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[76+j] >> 24) & 67108863;
		des[96+j] |= (src[80+j] << 8) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[80+j] >> 18) & 67108863;
		des[100+j] |= (src[84+j] << 14) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[84+j] >> 12) & 67108863;
		des[104+j] |= (src[88+j] << 20) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[88+j] >> 6) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[92+j]) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[92+j] >> 26) & 67108863;
		des[116+j] |= (src[96+j] << 6) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[96+j] >> 20) & 67108863;
		des[120+j] |= (src[100+j] << 12) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[100+j] >> 14) & 67108863;
		des[124+j] |= (src[104+j] << 18) & 67108863;
	}
}

template<typename T>
void KAFOR_unpack_32len_26bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 67108863;
		des[j] |= (src[4+j] << 16) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 10) & 67108863;
		des[4+j] |= (src[8+j] << 22) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 4) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 30) & 67108863;
		des[12+j] |= (src[12+j] << 2) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 24) & 67108863;
		des[16+j] |= (src[16+j] << 8) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 18) & 67108863;
		des[20+j] |= (src[20+j] << 14) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 12) & 67108863;
		des[24+j] |= (src[24+j] << 20) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j] >> 6) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[28+j]) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[28+j] >> 26) & 67108863;
		des[36+j] |= (src[32+j] << 6) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[32+j] >> 20) & 67108863;
		des[40+j] |= (src[36+j] << 12) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[36+j] >> 14) & 67108863;
		des[44+j] |= (src[40+j] << 18) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[40+j] >> 8) & 67108863;
		des[48+j] |= (src[44+j] << 24) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[44+j] >> 2) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[44+j] >> 28) & 67108863;
		des[56+j] |= (src[48+j] << 4) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[48+j] >> 22) & 67108863;
		des[60+j] |= (src[52+j] << 10) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[52+j] >> 16) & 67108863;
		des[64+j] |= (src[56+j] << 16) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[56+j] >> 10) & 67108863;
		des[68+j] |= (src[60+j] << 22) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[60+j] >> 4) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[60+j] >> 30) & 67108863;
		des[76+j] |= (src[64+j] << 2) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[64+j] >> 24) & 67108863;
		des[80+j] |= (src[68+j] << 8) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[68+j] >> 18) & 67108863;
		des[84+j] |= (src[72+j] << 14) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[72+j] >> 12) & 67108863;
		des[88+j] |= (src[76+j] << 20) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[76+j] >> 6) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[80+j]) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[80+j] >> 26) & 67108863;
		des[100+j] |= (src[84+j] << 6) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[84+j] >> 20) & 67108863;
		des[104+j] |= (src[88+j] << 12) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[88+j] >> 14) & 67108863;
		des[108+j] |= (src[92+j] << 18) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[92+j] >> 8) & 67108863;
		des[112+j] |= (src[96+j] << 24) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[96+j] >> 2) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[96+j] >> 28) & 67108863;
		des[120+j] |= (src[100+j] << 4) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[100+j] >> 22) & 67108863;
		des[124+j] |= (src[104+j] << 10) & 67108863;
	}
}

template<typename T>
void KAFOR_unpack_32len_26bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 67108863;
		des[j] |= (src[4+j] << 8) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 18) & 67108863;
		des[4+j] |= (src[8+j] << 14) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 12) & 67108863;
		des[8+j] |= (src[12+j] << 20) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 6) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j]) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 26) & 67108863;
		des[20+j] |= (src[20+j] << 6) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 20) & 67108863;
		des[24+j] |= (src[24+j] << 12) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j] >> 14) & 67108863;
		des[28+j] |= (src[28+j] << 18) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[28+j] >> 8) & 67108863;
		des[32+j] |= (src[32+j] << 24) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[32+j] >> 2) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[32+j] >> 28) & 67108863;
		des[40+j] |= (src[36+j] << 4) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[36+j] >> 22) & 67108863;
		des[44+j] |= (src[40+j] << 10) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[40+j] >> 16) & 67108863;
		des[48+j] |= (src[44+j] << 16) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[44+j] >> 10) & 67108863;
		des[52+j] |= (src[48+j] << 22) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[48+j] >> 4) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[48+j] >> 30) & 67108863;
		des[60+j] |= (src[52+j] << 2) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[52+j] >> 24) & 67108863;
		des[64+j] |= (src[56+j] << 8) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[56+j] >> 18) & 67108863;
		des[68+j] |= (src[60+j] << 14) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[60+j] >> 12) & 67108863;
		des[72+j] |= (src[64+j] << 20) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[64+j] >> 6) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[68+j]) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[68+j] >> 26) & 67108863;
		des[84+j] |= (src[72+j] << 6) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[72+j] >> 20) & 67108863;
		des[88+j] |= (src[76+j] << 12) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[76+j] >> 14) & 67108863;
		des[92+j] |= (src[80+j] << 18) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[80+j] >> 8) & 67108863;
		des[96+j] |= (src[84+j] << 24) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[84+j] >> 2) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[84+j] >> 28) & 67108863;
		des[104+j] |= (src[88+j] << 4) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[88+j] >> 22) & 67108863;
		des[108+j] |= (src[92+j] << 10) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[92+j] >> 16) & 67108863;
		des[112+j] |= (src[96+j] << 16) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[96+j] >> 10) & 67108863;
		des[116+j] |= (src[100+j] << 22) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[100+j] >> 4) & 67108863;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[100+j] >> 30) & 67108863;
		des[124+j] |= (src[104+j] << 2) & 67108863;
	}
}

template<typename T>
void KAFOR_unpack_32len_27bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 27) & 134217727;
		des[4+j] |= (src[4+j] << 5) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 22) & 134217727;
		des[8+j] |= (src[8+j] << 10) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 17) & 134217727;
		des[12+j] |= (src[12+j] << 15) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 12) & 134217727;
		des[16+j] |= (src[16+j] << 20) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 7) & 134217727;
		des[20+j] |= (src[20+j] << 25) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 2) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 29) & 134217727;
		des[28+j] |= (src[24+j] << 3) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[24+j] >> 24) & 134217727;
		des[32+j] |= (src[28+j] << 8) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[28+j] >> 19) & 134217727;
		des[36+j] |= (src[32+j] << 13) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[32+j] >> 14) & 134217727;
		des[40+j] |= (src[36+j] << 18) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[36+j] >> 9) & 134217727;
		des[44+j] |= (src[40+j] << 23) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[40+j] >> 4) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[40+j] >> 31) & 134217727;
		des[52+j] |= (src[44+j] << 1) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[44+j] >> 26) & 134217727;
		des[56+j] |= (src[48+j] << 6) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[48+j] >> 21) & 134217727;
		des[60+j] |= (src[52+j] << 11) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[52+j] >> 16) & 134217727;
		des[64+j] |= (src[56+j] << 16) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[56+j] >> 11) & 134217727;
		des[68+j] |= (src[60+j] << 21) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[60+j] >> 6) & 134217727;
		des[72+j] |= (src[64+j] << 26) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[64+j] >> 1) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[64+j] >> 28) & 134217727;
		des[80+j] |= (src[68+j] << 4) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[68+j] >> 23) & 134217727;
		des[84+j] |= (src[72+j] << 9) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[72+j] >> 18) & 134217727;
		des[88+j] |= (src[76+j] << 14) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[76+j] >> 13) & 134217727;
		des[92+j] |= (src[80+j] << 19) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[80+j] >> 8) & 134217727;
		des[96+j] |= (src[84+j] << 24) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[84+j] >> 3) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[84+j] >> 30) & 134217727;
		des[104+j] |= (src[88+j] << 2) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[88+j] >> 25) & 134217727;
		des[108+j] |= (src[92+j] << 7) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[92+j] >> 20) & 134217727;
		des[112+j] |= (src[96+j] << 12) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[96+j] >> 15) & 134217727;
		des[116+j] |= (src[100+j] << 17) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[100+j] >> 10) & 134217727;
		des[120+j] |= (src[104+j] << 22) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[104+j] >> 5) & 134217727;
	}
}

template<typename T>
void KAFOR_unpack_32len_27bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 134217727;
		des[j] |= (src[4+j] << 24) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 3) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 30) & 134217727;
		des[8+j] |= (src[8+j] << 2) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 25) & 134217727;
		des[12+j] |= (src[12+j] << 7) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 20) & 134217727;
		des[16+j] |= (src[16+j] << 12) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 15) & 134217727;
		des[20+j] |= (src[20+j] << 17) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 10) & 134217727;
		des[24+j] |= (src[24+j] << 22) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j] >> 5) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[28+j]) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[28+j] >> 27) & 134217727;
		des[36+j] |= (src[32+j] << 5) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[32+j] >> 22) & 134217727;
		des[40+j] |= (src[36+j] << 10) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[36+j] >> 17) & 134217727;
		des[44+j] |= (src[40+j] << 15) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[40+j] >> 12) & 134217727;
		des[48+j] |= (src[44+j] << 20) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[44+j] >> 7) & 134217727;
		des[52+j] |= (src[48+j] << 25) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[48+j] >> 2) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[48+j] >> 29) & 134217727;
		des[60+j] |= (src[52+j] << 3) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[52+j] >> 24) & 134217727;
		des[64+j] |= (src[56+j] << 8) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[56+j] >> 19) & 134217727;
		des[68+j] |= (src[60+j] << 13) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[60+j] >> 14) & 134217727;
		des[72+j] |= (src[64+j] << 18) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[64+j] >> 9) & 134217727;
		des[76+j] |= (src[68+j] << 23) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[68+j] >> 4) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[68+j] >> 31) & 134217727;
		des[84+j] |= (src[72+j] << 1) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[72+j] >> 26) & 134217727;
		des[88+j] |= (src[76+j] << 6) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[76+j] >> 21) & 134217727;
		des[92+j] |= (src[80+j] << 11) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[80+j] >> 16) & 134217727;
		des[96+j] |= (src[84+j] << 16) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[84+j] >> 11) & 134217727;
		des[100+j] |= (src[88+j] << 21) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[88+j] >> 6) & 134217727;
		des[104+j] |= (src[92+j] << 26) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[92+j] >> 1) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[92+j] >> 28) & 134217727;
		des[112+j] |= (src[96+j] << 4) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[96+j] >> 23) & 134217727;
		des[116+j] |= (src[100+j] << 9) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[100+j] >> 18) & 134217727;
		des[120+j] |= (src[104+j] << 14) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[104+j] >> 13) & 134217727;
		des[124+j] |= (src[108+j] << 19) & 134217727;
	}
}

template<typename T>
void KAFOR_unpack_32len_27bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 134217727;
		des[j] |= (src[4+j] << 16) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 11) & 134217727;
		des[4+j] |= (src[8+j] << 21) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 6) & 134217727;
		des[8+j] |= (src[12+j] << 26) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 1) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 28) & 134217727;
		des[16+j] |= (src[16+j] << 4) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 23) & 134217727;
		des[20+j] |= (src[20+j] << 9) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 18) & 134217727;
		des[24+j] |= (src[24+j] << 14) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j] >> 13) & 134217727;
		des[28+j] |= (src[28+j] << 19) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[28+j] >> 8) & 134217727;
		des[32+j] |= (src[32+j] << 24) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[32+j] >> 3) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[32+j] >> 30) & 134217727;
		des[40+j] |= (src[36+j] << 2) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[36+j] >> 25) & 134217727;
		des[44+j] |= (src[40+j] << 7) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[40+j] >> 20) & 134217727;
		des[48+j] |= (src[44+j] << 12) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[44+j] >> 15) & 134217727;
		des[52+j] |= (src[48+j] << 17) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[48+j] >> 10) & 134217727;
		des[56+j] |= (src[52+j] << 22) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[52+j] >> 5) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[56+j]) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[56+j] >> 27) & 134217727;
		des[68+j] |= (src[60+j] << 5) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[60+j] >> 22) & 134217727;
		des[72+j] |= (src[64+j] << 10) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[64+j] >> 17) & 134217727;
		des[76+j] |= (src[68+j] << 15) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[68+j] >> 12) & 134217727;
		des[80+j] |= (src[72+j] << 20) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[72+j] >> 7) & 134217727;
		des[84+j] |= (src[76+j] << 25) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[76+j] >> 2) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[76+j] >> 29) & 134217727;
		des[92+j] |= (src[80+j] << 3) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[80+j] >> 24) & 134217727;
		des[96+j] |= (src[84+j] << 8) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[84+j] >> 19) & 134217727;
		des[100+j] |= (src[88+j] << 13) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[88+j] >> 14) & 134217727;
		des[104+j] |= (src[92+j] << 18) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[92+j] >> 9) & 134217727;
		des[108+j] |= (src[96+j] << 23) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[96+j] >> 4) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[96+j] >> 31) & 134217727;
		des[116+j] |= (src[100+j] << 1) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[100+j] >> 26) & 134217727;
		des[120+j] |= (src[104+j] << 6) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[104+j] >> 21) & 134217727;
		des[124+j] |= (src[108+j] << 11) & 134217727;
	}
}

template<typename T>
void KAFOR_unpack_32len_27bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 134217727;
		des[j] |= (src[4+j] << 8) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 19) & 134217727;
		des[4+j] |= (src[8+j] << 13) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 14) & 134217727;
		des[8+j] |= (src[12+j] << 18) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 9) & 134217727;
		des[12+j] |= (src[16+j] << 23) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j] >> 4) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 31) & 134217727;
		des[20+j] |= (src[20+j] << 1) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 26) & 134217727;
		des[24+j] |= (src[24+j] << 6) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j] >> 21) & 134217727;
		des[28+j] |= (src[28+j] << 11) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[28+j] >> 16) & 134217727;
		des[32+j] |= (src[32+j] << 16) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[32+j] >> 11) & 134217727;
		des[36+j] |= (src[36+j] << 21) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[36+j] >> 6) & 134217727;
		des[40+j] |= (src[40+j] << 26) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[40+j] >> 1) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[40+j] >> 28) & 134217727;
		des[48+j] |= (src[44+j] << 4) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[44+j] >> 23) & 134217727;
		des[52+j] |= (src[48+j] << 9) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[48+j] >> 18) & 134217727;
		des[56+j] |= (src[52+j] << 14) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[52+j] >> 13) & 134217727;
		des[60+j] |= (src[56+j] << 19) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[56+j] >> 8) & 134217727;
		des[64+j] |= (src[60+j] << 24) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[60+j] >> 3) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[60+j] >> 30) & 134217727;
		des[72+j] |= (src[64+j] << 2) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[64+j] >> 25) & 134217727;
		des[76+j] |= (src[68+j] << 7) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[68+j] >> 20) & 134217727;
		des[80+j] |= (src[72+j] << 12) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[72+j] >> 15) & 134217727;
		des[84+j] |= (src[76+j] << 17) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[76+j] >> 10) & 134217727;
		des[88+j] |= (src[80+j] << 22) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[80+j] >> 5) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[84+j]) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[84+j] >> 27) & 134217727;
		des[100+j] |= (src[88+j] << 5) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[88+j] >> 22) & 134217727;
		des[104+j] |= (src[92+j] << 10) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[92+j] >> 17) & 134217727;
		des[108+j] |= (src[96+j] << 15) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[96+j] >> 12) & 134217727;
		des[112+j] |= (src[100+j] << 20) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[100+j] >> 7) & 134217727;
		des[116+j] |= (src[104+j] << 25) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[104+j] >> 2) & 134217727;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[104+j] >> 29) & 134217727;
		des[124+j] |= (src[108+j] << 3) & 134217727;
	}
}

template<typename T>
void KAFOR_unpack_32len_28bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 28) & 268435455;
		des[4+j] |= (src[4+j] << 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 24) & 268435455;
		des[8+j] |= (src[8+j] << 8) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 20) & 268435455;
		des[12+j] |= (src[12+j] << 12) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 16) & 268435455;
		des[16+j] |= (src[16+j] << 16) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 12) & 268435455;
		des[20+j] |= (src[20+j] << 20) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 8) & 268435455;
		des[24+j] |= (src[24+j] << 24) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j] >> 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[28+j]) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[28+j] >> 28) & 268435455;
		des[36+j] |= (src[32+j] << 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[32+j] >> 24) & 268435455;
		des[40+j] |= (src[36+j] << 8) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[36+j] >> 20) & 268435455;
		des[44+j] |= (src[40+j] << 12) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[40+j] >> 16) & 268435455;
		des[48+j] |= (src[44+j] << 16) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[44+j] >> 12) & 268435455;
		des[52+j] |= (src[48+j] << 20) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[48+j] >> 8) & 268435455;
		des[56+j] |= (src[52+j] << 24) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[52+j] >> 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[56+j]) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[56+j] >> 28) & 268435455;
		des[68+j] |= (src[60+j] << 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[60+j] >> 24) & 268435455;
		des[72+j] |= (src[64+j] << 8) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[64+j] >> 20) & 268435455;
		des[76+j] |= (src[68+j] << 12) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[68+j] >> 16) & 268435455;
		des[80+j] |= (src[72+j] << 16) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[72+j] >> 12) & 268435455;
		des[84+j] |= (src[76+j] << 20) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[76+j] >> 8) & 268435455;
		des[88+j] |= (src[80+j] << 24) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[80+j] >> 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[84+j]) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[84+j] >> 28) & 268435455;
		des[100+j] |= (src[88+j] << 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[88+j] >> 24) & 268435455;
		des[104+j] |= (src[92+j] << 8) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[92+j] >> 20) & 268435455;
		des[108+j] |= (src[96+j] << 12) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[96+j] >> 16) & 268435455;
		des[112+j] |= (src[100+j] << 16) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[100+j] >> 12) & 268435455;
		des[116+j] |= (src[104+j] << 20) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[104+j] >> 8) & 268435455;
		des[120+j] |= (src[108+j] << 24) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[108+j] >> 4) & 268435455;
	}
}

template<typename T>
void KAFOR_unpack_32len_28bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 268435455;
		des[j] |= (src[4+j] << 24) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j]) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 28) & 268435455;
		des[12+j] |= (src[12+j] << 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 24) & 268435455;
		des[16+j] |= (src[16+j] << 8) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 20) & 268435455;
		des[20+j] |= (src[20+j] << 12) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 16) & 268435455;
		des[24+j] |= (src[24+j] << 16) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j] >> 12) & 268435455;
		des[28+j] |= (src[28+j] << 20) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[28+j] >> 8) & 268435455;
		des[32+j] |= (src[32+j] << 24) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[32+j] >> 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[36+j]) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[36+j] >> 28) & 268435455;
		des[44+j] |= (src[40+j] << 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[40+j] >> 24) & 268435455;
		des[48+j] |= (src[44+j] << 8) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[44+j] >> 20) & 268435455;
		des[52+j] |= (src[48+j] << 12) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[48+j] >> 16) & 268435455;
		des[56+j] |= (src[52+j] << 16) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[52+j] >> 12) & 268435455;
		des[60+j] |= (src[56+j] << 20) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[56+j] >> 8) & 268435455;
		des[64+j] |= (src[60+j] << 24) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[60+j] >> 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[64+j]) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[64+j] >> 28) & 268435455;
		des[76+j] |= (src[68+j] << 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[68+j] >> 24) & 268435455;
		des[80+j] |= (src[72+j] << 8) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[72+j] >> 20) & 268435455;
		des[84+j] |= (src[76+j] << 12) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[76+j] >> 16) & 268435455;
		des[88+j] |= (src[80+j] << 16) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[80+j] >> 12) & 268435455;
		des[92+j] |= (src[84+j] << 20) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[84+j] >> 8) & 268435455;
		des[96+j] |= (src[88+j] << 24) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[88+j] >> 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[92+j]) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[92+j] >> 28) & 268435455;
		des[108+j] |= (src[96+j] << 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[96+j] >> 24) & 268435455;
		des[112+j] |= (src[100+j] << 8) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[100+j] >> 20) & 268435455;
		des[116+j] |= (src[104+j] << 12) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[104+j] >> 16) & 268435455;
		des[120+j] |= (src[108+j] << 16) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[108+j] >> 12) & 268435455;
		des[124+j] |= (src[112+j] << 20) & 268435455;
	}
}

template<typename T>
void KAFOR_unpack_32len_28bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 268435455;
		des[j] |= (src[4+j] << 16) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 12) & 268435455;
		des[4+j] |= (src[8+j] << 20) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 8) & 268435455;
		des[8+j] |= (src[12+j] << 24) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j]) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 28) & 268435455;
		des[20+j] |= (src[20+j] << 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 24) & 268435455;
		des[24+j] |= (src[24+j] << 8) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j] >> 20) & 268435455;
		des[28+j] |= (src[28+j] << 12) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[28+j] >> 16) & 268435455;
		des[32+j] |= (src[32+j] << 16) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[32+j] >> 12) & 268435455;
		des[36+j] |= (src[36+j] << 20) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[36+j] >> 8) & 268435455;
		des[40+j] |= (src[40+j] << 24) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[40+j] >> 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[44+j]) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[44+j] >> 28) & 268435455;
		des[52+j] |= (src[48+j] << 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[48+j] >> 24) & 268435455;
		des[56+j] |= (src[52+j] << 8) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[52+j] >> 20) & 268435455;
		des[60+j] |= (src[56+j] << 12) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[56+j] >> 16) & 268435455;
		des[64+j] |= (src[60+j] << 16) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[60+j] >> 12) & 268435455;
		des[68+j] |= (src[64+j] << 20) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[64+j] >> 8) & 268435455;
		des[72+j] |= (src[68+j] << 24) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[68+j] >> 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[72+j]) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[72+j] >> 28) & 268435455;
		des[84+j] |= (src[76+j] << 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[76+j] >> 24) & 268435455;
		des[88+j] |= (src[80+j] << 8) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[80+j] >> 20) & 268435455;
		des[92+j] |= (src[84+j] << 12) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[84+j] >> 16) & 268435455;
		des[96+j] |= (src[88+j] << 16) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[88+j] >> 12) & 268435455;
		des[100+j] |= (src[92+j] << 20) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[92+j] >> 8) & 268435455;
		des[104+j] |= (src[96+j] << 24) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[96+j] >> 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[100+j]) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[100+j] >> 28) & 268435455;
		des[116+j] |= (src[104+j] << 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[104+j] >> 24) & 268435455;
		des[120+j] |= (src[108+j] << 8) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[108+j] >> 20) & 268435455;
		des[124+j] |= (src[112+j] << 12) & 268435455;
	}
}

template<typename T>
void KAFOR_unpack_32len_28bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 268435455;
		des[j] |= (src[4+j] << 8) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 20) & 268435455;
		des[4+j] |= (src[8+j] << 12) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 16) & 268435455;
		des[8+j] |= (src[12+j] << 16) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 12) & 268435455;
		des[12+j] |= (src[16+j] << 20) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j] >> 8) & 268435455;
		des[16+j] |= (src[20+j] << 24) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[20+j] >> 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[24+j]) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j] >> 28) & 268435455;
		des[28+j] |= (src[28+j] << 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[28+j] >> 24) & 268435455;
		des[32+j] |= (src[32+j] << 8) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[32+j] >> 20) & 268435455;
		des[36+j] |= (src[36+j] << 12) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[36+j] >> 16) & 268435455;
		des[40+j] |= (src[40+j] << 16) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[40+j] >> 12) & 268435455;
		des[44+j] |= (src[44+j] << 20) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[44+j] >> 8) & 268435455;
		des[48+j] |= (src[48+j] << 24) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[48+j] >> 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[52+j]) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[52+j] >> 28) & 268435455;
		des[60+j] |= (src[56+j] << 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[56+j] >> 24) & 268435455;
		des[64+j] |= (src[60+j] << 8) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[60+j] >> 20) & 268435455;
		des[68+j] |= (src[64+j] << 12) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[64+j] >> 16) & 268435455;
		des[72+j] |= (src[68+j] << 16) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[68+j] >> 12) & 268435455;
		des[76+j] |= (src[72+j] << 20) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[72+j] >> 8) & 268435455;
		des[80+j] |= (src[76+j] << 24) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[76+j] >> 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[80+j]) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[80+j] >> 28) & 268435455;
		des[92+j] |= (src[84+j] << 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[84+j] >> 24) & 268435455;
		des[96+j] |= (src[88+j] << 8) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[88+j] >> 20) & 268435455;
		des[100+j] |= (src[92+j] << 12) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[92+j] >> 16) & 268435455;
		des[104+j] |= (src[96+j] << 16) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[96+j] >> 12) & 268435455;
		des[108+j] |= (src[100+j] << 20) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[100+j] >> 8) & 268435455;
		des[112+j] |= (src[104+j] << 24) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[104+j] >> 4) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[108+j]) & 268435455;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[108+j] >> 28) & 268435455;
		des[124+j] |= (src[112+j] << 4) & 268435455;
	}
}

template<typename T>
void KAFOR_unpack_32len_29bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 29) & 536870911;
		des[4+j] |= (src[4+j] << 3) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 26) & 536870911;
		des[8+j] |= (src[8+j] << 6) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 23) & 536870911;
		des[12+j] |= (src[12+j] << 9) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 20) & 536870911;
		des[16+j] |= (src[16+j] << 12) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 17) & 536870911;
		des[20+j] |= (src[20+j] << 15) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 14) & 536870911;
		des[24+j] |= (src[24+j] << 18) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j] >> 11) & 536870911;
		des[28+j] |= (src[28+j] << 21) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[28+j] >> 8) & 536870911;
		des[32+j] |= (src[32+j] << 24) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[32+j] >> 5) & 536870911;
		des[36+j] |= (src[36+j] << 27) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[36+j] >> 2) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[36+j] >> 31) & 536870911;
		des[44+j] |= (src[40+j] << 1) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[40+j] >> 28) & 536870911;
		des[48+j] |= (src[44+j] << 4) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[44+j] >> 25) & 536870911;
		des[52+j] |= (src[48+j] << 7) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[48+j] >> 22) & 536870911;
		des[56+j] |= (src[52+j] << 10) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[52+j] >> 19) & 536870911;
		des[60+j] |= (src[56+j] << 13) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[56+j] >> 16) & 536870911;
		des[64+j] |= (src[60+j] << 16) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[60+j] >> 13) & 536870911;
		des[68+j] |= (src[64+j] << 19) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[64+j] >> 10) & 536870911;
		des[72+j] |= (src[68+j] << 22) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[68+j] >> 7) & 536870911;
		des[76+j] |= (src[72+j] << 25) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[72+j] >> 4) & 536870911;
		des[80+j] |= (src[76+j] << 28) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[76+j] >> 1) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[76+j] >> 30) & 536870911;
		des[88+j] |= (src[80+j] << 2) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[80+j] >> 27) & 536870911;
		des[92+j] |= (src[84+j] << 5) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[84+j] >> 24) & 536870911;
		des[96+j] |= (src[88+j] << 8) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[88+j] >> 21) & 536870911;
		des[100+j] |= (src[92+j] << 11) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[92+j] >> 18) & 536870911;
		des[104+j] |= (src[96+j] << 14) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[96+j] >> 15) & 536870911;
		des[108+j] |= (src[100+j] << 17) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[100+j] >> 12) & 536870911;
		des[112+j] |= (src[104+j] << 20) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[104+j] >> 9) & 536870911;
		des[116+j] |= (src[108+j] << 23) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[108+j] >> 6) & 536870911;
		des[120+j] |= (src[112+j] << 26) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[112+j] >> 3) & 536870911;
	}
}

template<typename T>
void KAFOR_unpack_32len_29bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 536870911;
		des[j] |= (src[4+j] << 24) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 5) & 536870911;
		des[4+j] |= (src[8+j] << 27) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 2) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 31) & 536870911;
		des[12+j] |= (src[12+j] << 1) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 28) & 536870911;
		des[16+j] |= (src[16+j] << 4) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 25) & 536870911;
		des[20+j] |= (src[20+j] << 7) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 22) & 536870911;
		des[24+j] |= (src[24+j] << 10) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j] >> 19) & 536870911;
		des[28+j] |= (src[28+j] << 13) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[28+j] >> 16) & 536870911;
		des[32+j] |= (src[32+j] << 16) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[32+j] >> 13) & 536870911;
		des[36+j] |= (src[36+j] << 19) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[36+j] >> 10) & 536870911;
		des[40+j] |= (src[40+j] << 22) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[40+j] >> 7) & 536870911;
		des[44+j] |= (src[44+j] << 25) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[44+j] >> 4) & 536870911;
		des[48+j] |= (src[48+j] << 28) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[48+j] >> 1) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[48+j] >> 30) & 536870911;
		des[56+j] |= (src[52+j] << 2) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[52+j] >> 27) & 536870911;
		des[60+j] |= (src[56+j] << 5) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[56+j] >> 24) & 536870911;
		des[64+j] |= (src[60+j] << 8) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[60+j] >> 21) & 536870911;
		des[68+j] |= (src[64+j] << 11) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[64+j] >> 18) & 536870911;
		des[72+j] |= (src[68+j] << 14) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[68+j] >> 15) & 536870911;
		des[76+j] |= (src[72+j] << 17) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[72+j] >> 12) & 536870911;
		des[80+j] |= (src[76+j] << 20) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[76+j] >> 9) & 536870911;
		des[84+j] |= (src[80+j] << 23) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[80+j] >> 6) & 536870911;
		des[88+j] |= (src[84+j] << 26) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[84+j] >> 3) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[88+j]) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[88+j] >> 29) & 536870911;
		des[100+j] |= (src[92+j] << 3) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[92+j] >> 26) & 536870911;
		des[104+j] |= (src[96+j] << 6) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[96+j] >> 23) & 536870911;
		des[108+j] |= (src[100+j] << 9) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[100+j] >> 20) & 536870911;
		des[112+j] |= (src[104+j] << 12) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[104+j] >> 17) & 536870911;
		des[116+j] |= (src[108+j] << 15) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[108+j] >> 14) & 536870911;
		des[120+j] |= (src[112+j] << 18) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[112+j] >> 11) & 536870911;
		des[124+j] |= (src[116+j] << 21) & 536870911;
	}
}

template<typename T>
void KAFOR_unpack_32len_29bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 536870911;
		des[j] |= (src[4+j] << 16) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 13) & 536870911;
		des[4+j] |= (src[8+j] << 19) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 10) & 536870911;
		des[8+j] |= (src[12+j] << 22) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 7) & 536870911;
		des[12+j] |= (src[16+j] << 25) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j] >> 4) & 536870911;
		des[16+j] |= (src[20+j] << 28) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[20+j] >> 1) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 30) & 536870911;
		des[24+j] |= (src[24+j] << 2) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j] >> 27) & 536870911;
		des[28+j] |= (src[28+j] << 5) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[28+j] >> 24) & 536870911;
		des[32+j] |= (src[32+j] << 8) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[32+j] >> 21) & 536870911;
		des[36+j] |= (src[36+j] << 11) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[36+j] >> 18) & 536870911;
		des[40+j] |= (src[40+j] << 14) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[40+j] >> 15) & 536870911;
		des[44+j] |= (src[44+j] << 17) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[44+j] >> 12) & 536870911;
		des[48+j] |= (src[48+j] << 20) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[48+j] >> 9) & 536870911;
		des[52+j] |= (src[52+j] << 23) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[52+j] >> 6) & 536870911;
		des[56+j] |= (src[56+j] << 26) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[56+j] >> 3) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[60+j]) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[60+j] >> 29) & 536870911;
		des[68+j] |= (src[64+j] << 3) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[64+j] >> 26) & 536870911;
		des[72+j] |= (src[68+j] << 6) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[68+j] >> 23) & 536870911;
		des[76+j] |= (src[72+j] << 9) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[72+j] >> 20) & 536870911;
		des[80+j] |= (src[76+j] << 12) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[76+j] >> 17) & 536870911;
		des[84+j] |= (src[80+j] << 15) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[80+j] >> 14) & 536870911;
		des[88+j] |= (src[84+j] << 18) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[84+j] >> 11) & 536870911;
		des[92+j] |= (src[88+j] << 21) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[88+j] >> 8) & 536870911;
		des[96+j] |= (src[92+j] << 24) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[92+j] >> 5) & 536870911;
		des[100+j] |= (src[96+j] << 27) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[96+j] >> 2) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[96+j] >> 31) & 536870911;
		des[108+j] |= (src[100+j] << 1) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[100+j] >> 28) & 536870911;
		des[112+j] |= (src[104+j] << 4) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[104+j] >> 25) & 536870911;
		des[116+j] |= (src[108+j] << 7) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[108+j] >> 22) & 536870911;
		des[120+j] |= (src[112+j] << 10) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[112+j] >> 19) & 536870911;
		des[124+j] |= (src[116+j] << 13) & 536870911;
	}
}

template<typename T>
void KAFOR_unpack_32len_29bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 536870911;
		des[j] |= (src[4+j] << 8) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 21) & 536870911;
		des[4+j] |= (src[8+j] << 11) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 18) & 536870911;
		des[8+j] |= (src[12+j] << 14) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 15) & 536870911;
		des[12+j] |= (src[16+j] << 17) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j] >> 12) & 536870911;
		des[16+j] |= (src[20+j] << 20) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[20+j] >> 9) & 536870911;
		des[20+j] |= (src[24+j] << 23) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[24+j] >> 6) & 536870911;
		des[24+j] |= (src[28+j] << 26) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[28+j] >> 3) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[32+j]) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[32+j] >> 29) & 536870911;
		des[36+j] |= (src[36+j] << 3) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[36+j] >> 26) & 536870911;
		des[40+j] |= (src[40+j] << 6) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[40+j] >> 23) & 536870911;
		des[44+j] |= (src[44+j] << 9) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[44+j] >> 20) & 536870911;
		des[48+j] |= (src[48+j] << 12) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[48+j] >> 17) & 536870911;
		des[52+j] |= (src[52+j] << 15) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[52+j] >> 14) & 536870911;
		des[56+j] |= (src[56+j] << 18) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[56+j] >> 11) & 536870911;
		des[60+j] |= (src[60+j] << 21) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[60+j] >> 8) & 536870911;
		des[64+j] |= (src[64+j] << 24) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[64+j] >> 5) & 536870911;
		des[68+j] |= (src[68+j] << 27) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[68+j] >> 2) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[68+j] >> 31) & 536870911;
		des[76+j] |= (src[72+j] << 1) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[72+j] >> 28) & 536870911;
		des[80+j] |= (src[76+j] << 4) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[76+j] >> 25) & 536870911;
		des[84+j] |= (src[80+j] << 7) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[80+j] >> 22) & 536870911;
		des[88+j] |= (src[84+j] << 10) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[84+j] >> 19) & 536870911;
		des[92+j] |= (src[88+j] << 13) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[88+j] >> 16) & 536870911;
		des[96+j] |= (src[92+j] << 16) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[92+j] >> 13) & 536870911;
		des[100+j] |= (src[96+j] << 19) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[96+j] >> 10) & 536870911;
		des[104+j] |= (src[100+j] << 22) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[100+j] >> 7) & 536870911;
		des[108+j] |= (src[104+j] << 25) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[104+j] >> 4) & 536870911;
		des[112+j] |= (src[108+j] << 28) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[108+j] >> 1) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[108+j] >> 30) & 536870911;
		des[120+j] |= (src[112+j] << 2) & 536870911;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[112+j] >> 27) & 536870911;
		des[124+j] |= (src[116+j] << 5) & 536870911;
	}
}

template<typename T>
void KAFOR_unpack_32len_30bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 30) & 1073741823;
		des[4+j] |= (src[4+j] << 2) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 28) & 1073741823;
		des[8+j] |= (src[8+j] << 4) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 26) & 1073741823;
		des[12+j] |= (src[12+j] << 6) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 24) & 1073741823;
		des[16+j] |= (src[16+j] << 8) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 22) & 1073741823;
		des[20+j] |= (src[20+j] << 10) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 20) & 1073741823;
		des[24+j] |= (src[24+j] << 12) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j] >> 18) & 1073741823;
		des[28+j] |= (src[28+j] << 14) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[28+j] >> 16) & 1073741823;
		des[32+j] |= (src[32+j] << 16) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[32+j] >> 14) & 1073741823;
		des[36+j] |= (src[36+j] << 18) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[36+j] >> 12) & 1073741823;
		des[40+j] |= (src[40+j] << 20) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[40+j] >> 10) & 1073741823;
		des[44+j] |= (src[44+j] << 22) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[44+j] >> 8) & 1073741823;
		des[48+j] |= (src[48+j] << 24) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[48+j] >> 6) & 1073741823;
		des[52+j] |= (src[52+j] << 26) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[52+j] >> 4) & 1073741823;
		des[56+j] |= (src[56+j] << 28) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[56+j] >> 2) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[60+j]) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[60+j] >> 30) & 1073741823;
		des[68+j] |= (src[64+j] << 2) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[64+j] >> 28) & 1073741823;
		des[72+j] |= (src[68+j] << 4) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[68+j] >> 26) & 1073741823;
		des[76+j] |= (src[72+j] << 6) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[72+j] >> 24) & 1073741823;
		des[80+j] |= (src[76+j] << 8) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[76+j] >> 22) & 1073741823;
		des[84+j] |= (src[80+j] << 10) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[80+j] >> 20) & 1073741823;
		des[88+j] |= (src[84+j] << 12) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[84+j] >> 18) & 1073741823;
		des[92+j] |= (src[88+j] << 14) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[88+j] >> 16) & 1073741823;
		des[96+j] |= (src[92+j] << 16) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[92+j] >> 14) & 1073741823;
		des[100+j] |= (src[96+j] << 18) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[96+j] >> 12) & 1073741823;
		des[104+j] |= (src[100+j] << 20) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[100+j] >> 10) & 1073741823;
		des[108+j] |= (src[104+j] << 22) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[104+j] >> 8) & 1073741823;
		des[112+j] |= (src[108+j] << 24) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[108+j] >> 6) & 1073741823;
		des[116+j] |= (src[112+j] << 26) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[112+j] >> 4) & 1073741823;
		des[120+j] |= (src[116+j] << 28) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[116+j] >> 2) & 1073741823;
	}
}

template<typename T>
void KAFOR_unpack_32len_30bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 1073741823;
		des[j] |= (src[4+j] << 24) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 6) & 1073741823;
		des[4+j] |= (src[8+j] << 26) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 4) & 1073741823;
		des[8+j] |= (src[12+j] << 28) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 2) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j]) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 30) & 1073741823;
		des[20+j] |= (src[20+j] << 2) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 28) & 1073741823;
		des[24+j] |= (src[24+j] << 4) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j] >> 26) & 1073741823;
		des[28+j] |= (src[28+j] << 6) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[28+j] >> 24) & 1073741823;
		des[32+j] |= (src[32+j] << 8) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[32+j] >> 22) & 1073741823;
		des[36+j] |= (src[36+j] << 10) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[36+j] >> 20) & 1073741823;
		des[40+j] |= (src[40+j] << 12) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[40+j] >> 18) & 1073741823;
		des[44+j] |= (src[44+j] << 14) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[44+j] >> 16) & 1073741823;
		des[48+j] |= (src[48+j] << 16) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[48+j] >> 14) & 1073741823;
		des[52+j] |= (src[52+j] << 18) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[52+j] >> 12) & 1073741823;
		des[56+j] |= (src[56+j] << 20) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[56+j] >> 10) & 1073741823;
		des[60+j] |= (src[60+j] << 22) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[60+j] >> 8) & 1073741823;
		des[64+j] |= (src[64+j] << 24) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[64+j] >> 6) & 1073741823;
		des[68+j] |= (src[68+j] << 26) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[68+j] >> 4) & 1073741823;
		des[72+j] |= (src[72+j] << 28) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[72+j] >> 2) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[76+j]) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[76+j] >> 30) & 1073741823;
		des[84+j] |= (src[80+j] << 2) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[80+j] >> 28) & 1073741823;
		des[88+j] |= (src[84+j] << 4) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[84+j] >> 26) & 1073741823;
		des[92+j] |= (src[88+j] << 6) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[88+j] >> 24) & 1073741823;
		des[96+j] |= (src[92+j] << 8) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[92+j] >> 22) & 1073741823;
		des[100+j] |= (src[96+j] << 10) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[96+j] >> 20) & 1073741823;
		des[104+j] |= (src[100+j] << 12) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[100+j] >> 18) & 1073741823;
		des[108+j] |= (src[104+j] << 14) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[104+j] >> 16) & 1073741823;
		des[112+j] |= (src[108+j] << 16) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[108+j] >> 14) & 1073741823;
		des[116+j] |= (src[112+j] << 18) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[112+j] >> 12) & 1073741823;
		des[120+j] |= (src[116+j] << 20) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[116+j] >> 10) & 1073741823;
		des[124+j] |= (src[120+j] << 22) & 1073741823;
	}
}

template<typename T>
void KAFOR_unpack_32len_30bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 1073741823;
		des[j] |= (src[4+j] << 16) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 14) & 1073741823;
		des[4+j] |= (src[8+j] << 18) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 12) & 1073741823;
		des[8+j] |= (src[12+j] << 20) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 10) & 1073741823;
		des[12+j] |= (src[16+j] << 22) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j] >> 8) & 1073741823;
		des[16+j] |= (src[20+j] << 24) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[20+j] >> 6) & 1073741823;
		des[20+j] |= (src[24+j] << 26) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[24+j] >> 4) & 1073741823;
		des[24+j] |= (src[28+j] << 28) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[28+j] >> 2) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[32+j]) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[32+j] >> 30) & 1073741823;
		des[36+j] |= (src[36+j] << 2) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[36+j] >> 28) & 1073741823;
		des[40+j] |= (src[40+j] << 4) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[40+j] >> 26) & 1073741823;
		des[44+j] |= (src[44+j] << 6) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[44+j] >> 24) & 1073741823;
		des[48+j] |= (src[48+j] << 8) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[48+j] >> 22) & 1073741823;
		des[52+j] |= (src[52+j] << 10) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[52+j] >> 20) & 1073741823;
		des[56+j] |= (src[56+j] << 12) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[56+j] >> 18) & 1073741823;
		des[60+j] |= (src[60+j] << 14) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[60+j] >> 16) & 1073741823;
		des[64+j] |= (src[64+j] << 16) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[64+j] >> 14) & 1073741823;
		des[68+j] |= (src[68+j] << 18) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[68+j] >> 12) & 1073741823;
		des[72+j] |= (src[72+j] << 20) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[72+j] >> 10) & 1073741823;
		des[76+j] |= (src[76+j] << 22) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[76+j] >> 8) & 1073741823;
		des[80+j] |= (src[80+j] << 24) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[80+j] >> 6) & 1073741823;
		des[84+j] |= (src[84+j] << 26) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[84+j] >> 4) & 1073741823;
		des[88+j] |= (src[88+j] << 28) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[88+j] >> 2) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[92+j]) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[92+j] >> 30) & 1073741823;
		des[100+j] |= (src[96+j] << 2) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[96+j] >> 28) & 1073741823;
		des[104+j] |= (src[100+j] << 4) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[100+j] >> 26) & 1073741823;
		des[108+j] |= (src[104+j] << 6) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[104+j] >> 24) & 1073741823;
		des[112+j] |= (src[108+j] << 8) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[108+j] >> 22) & 1073741823;
		des[116+j] |= (src[112+j] << 10) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[112+j] >> 20) & 1073741823;
		des[120+j] |= (src[116+j] << 12) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[116+j] >> 18) & 1073741823;
		des[124+j] |= (src[120+j] << 14) & 1073741823;
	}
}

template<typename T>
void KAFOR_unpack_32len_30bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 1073741823;
		des[j] |= (src[4+j] << 8) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 22) & 1073741823;
		des[4+j] |= (src[8+j] << 10) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 20) & 1073741823;
		des[8+j] |= (src[12+j] << 12) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 18) & 1073741823;
		des[12+j] |= (src[16+j] << 14) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j] >> 16) & 1073741823;
		des[16+j] |= (src[20+j] << 16) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[20+j] >> 14) & 1073741823;
		des[20+j] |= (src[24+j] << 18) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[24+j] >> 12) & 1073741823;
		des[24+j] |= (src[28+j] << 20) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[28+j] >> 10) & 1073741823;
		des[28+j] |= (src[32+j] << 22) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[32+j] >> 8) & 1073741823;
		des[32+j] |= (src[36+j] << 24) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[36+j] >> 6) & 1073741823;
		des[36+j] |= (src[40+j] << 26) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[40+j] >> 4) & 1073741823;
		des[40+j] |= (src[44+j] << 28) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[44+j] >> 2) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[48+j]) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[48+j] >> 30) & 1073741823;
		des[52+j] |= (src[52+j] << 2) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[52+j] >> 28) & 1073741823;
		des[56+j] |= (src[56+j] << 4) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[56+j] >> 26) & 1073741823;
		des[60+j] |= (src[60+j] << 6) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[60+j] >> 24) & 1073741823;
		des[64+j] |= (src[64+j] << 8) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[64+j] >> 22) & 1073741823;
		des[68+j] |= (src[68+j] << 10) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[68+j] >> 20) & 1073741823;
		des[72+j] |= (src[72+j] << 12) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[72+j] >> 18) & 1073741823;
		des[76+j] |= (src[76+j] << 14) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[76+j] >> 16) & 1073741823;
		des[80+j] |= (src[80+j] << 16) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[80+j] >> 14) & 1073741823;
		des[84+j] |= (src[84+j] << 18) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[84+j] >> 12) & 1073741823;
		des[88+j] |= (src[88+j] << 20) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[88+j] >> 10) & 1073741823;
		des[92+j] |= (src[92+j] << 22) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[92+j] >> 8) & 1073741823;
		des[96+j] |= (src[96+j] << 24) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[96+j] >> 6) & 1073741823;
		des[100+j] |= (src[100+j] << 26) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[100+j] >> 4) & 1073741823;
		des[104+j] |= (src[104+j] << 28) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[104+j] >> 2) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[108+j]) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[108+j] >> 30) & 1073741823;
		des[116+j] |= (src[112+j] << 2) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[112+j] >> 28) & 1073741823;
		des[120+j] |= (src[116+j] << 4) & 1073741823;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[116+j] >> 26) & 1073741823;
		des[124+j] |= (src[120+j] << 6) & 1073741823;
	}
}

template<typename T>
void KAFOR_unpack_32len_31bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 31) & 2147483647;
		des[4+j] |= (src[4+j] << 1) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 30) & 2147483647;
		des[8+j] |= (src[8+j] << 2) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 29) & 2147483647;
		des[12+j] |= (src[12+j] << 3) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 28) & 2147483647;
		des[16+j] |= (src[16+j] << 4) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[16+j] >> 27) & 2147483647;
		des[20+j] |= (src[20+j] << 5) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[20+j] >> 26) & 2147483647;
		des[24+j] |= (src[24+j] << 6) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[24+j] >> 25) & 2147483647;
		des[28+j] |= (src[28+j] << 7) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[28+j] >> 24) & 2147483647;
		des[32+j] |= (src[32+j] << 8) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[32+j] >> 23) & 2147483647;
		des[36+j] |= (src[36+j] << 9) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[36+j] >> 22) & 2147483647;
		des[40+j] |= (src[40+j] << 10) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[40+j] >> 21) & 2147483647;
		des[44+j] |= (src[44+j] << 11) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[44+j] >> 20) & 2147483647;
		des[48+j] |= (src[48+j] << 12) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[48+j] >> 19) & 2147483647;
		des[52+j] |= (src[52+j] << 13) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[52+j] >> 18) & 2147483647;
		des[56+j] |= (src[56+j] << 14) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[56+j] >> 17) & 2147483647;
		des[60+j] |= (src[60+j] << 15) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[60+j] >> 16) & 2147483647;
		des[64+j] |= (src[64+j] << 16) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[64+j] >> 15) & 2147483647;
		des[68+j] |= (src[68+j] << 17) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[68+j] >> 14) & 2147483647;
		des[72+j] |= (src[72+j] << 18) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[72+j] >> 13) & 2147483647;
		des[76+j] |= (src[76+j] << 19) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[76+j] >> 12) & 2147483647;
		des[80+j] |= (src[80+j] << 20) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[80+j] >> 11) & 2147483647;
		des[84+j] |= (src[84+j] << 21) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[84+j] >> 10) & 2147483647;
		des[88+j] |= (src[88+j] << 22) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[88+j] >> 9) & 2147483647;
		des[92+j] |= (src[92+j] << 23) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[92+j] >> 8) & 2147483647;
		des[96+j] |= (src[96+j] << 24) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[96+j] >> 7) & 2147483647;
		des[100+j] |= (src[100+j] << 25) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[100+j] >> 6) & 2147483647;
		des[104+j] |= (src[104+j] << 26) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[104+j] >> 5) & 2147483647;
		des[108+j] |= (src[108+j] << 27) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[108+j] >> 4) & 2147483647;
		des[112+j] |= (src[112+j] << 28) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[112+j] >> 3) & 2147483647;
		des[116+j] |= (src[116+j] << 29) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[116+j] >> 2) & 2147483647;
		des[120+j] |= (src[120+j] << 30) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[120+j] >> 1) & 2147483647;
	}
}

template<typename T>
void KAFOR_unpack_32len_31bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 2147483647;
		des[j] |= (src[4+j] << 24) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 7) & 2147483647;
		des[4+j] |= (src[8+j] << 25) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 6) & 2147483647;
		des[8+j] |= (src[12+j] << 26) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 5) & 2147483647;
		des[12+j] |= (src[16+j] << 27) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j] >> 4) & 2147483647;
		des[16+j] |= (src[20+j] << 28) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[20+j] >> 3) & 2147483647;
		des[20+j] |= (src[24+j] << 29) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[24+j] >> 2) & 2147483647;
		des[24+j] |= (src[28+j] << 30) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[28+j] >> 1) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[32+j]) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[32+j] >> 31) & 2147483647;
		des[36+j] |= (src[36+j] << 1) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[36+j] >> 30) & 2147483647;
		des[40+j] |= (src[40+j] << 2) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[40+j] >> 29) & 2147483647;
		des[44+j] |= (src[44+j] << 3) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[44+j] >> 28) & 2147483647;
		des[48+j] |= (src[48+j] << 4) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[48+j] >> 27) & 2147483647;
		des[52+j] |= (src[52+j] << 5) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[52+j] >> 26) & 2147483647;
		des[56+j] |= (src[56+j] << 6) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[56+j] >> 25) & 2147483647;
		des[60+j] |= (src[60+j] << 7) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[60+j] >> 24) & 2147483647;
		des[64+j] |= (src[64+j] << 8) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[64+j] >> 23) & 2147483647;
		des[68+j] |= (src[68+j] << 9) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[68+j] >> 22) & 2147483647;
		des[72+j] |= (src[72+j] << 10) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[72+j] >> 21) & 2147483647;
		des[76+j] |= (src[76+j] << 11) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[76+j] >> 20) & 2147483647;
		des[80+j] |= (src[80+j] << 12) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[80+j] >> 19) & 2147483647;
		des[84+j] |= (src[84+j] << 13) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[84+j] >> 18) & 2147483647;
		des[88+j] |= (src[88+j] << 14) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[88+j] >> 17) & 2147483647;
		des[92+j] |= (src[92+j] << 15) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[92+j] >> 16) & 2147483647;
		des[96+j] |= (src[96+j] << 16) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[96+j] >> 15) & 2147483647;
		des[100+j] |= (src[100+j] << 17) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[100+j] >> 14) & 2147483647;
		des[104+j] |= (src[104+j] << 18) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[104+j] >> 13) & 2147483647;
		des[108+j] |= (src[108+j] << 19) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[108+j] >> 12) & 2147483647;
		des[112+j] |= (src[112+j] << 20) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[112+j] >> 11) & 2147483647;
		des[116+j] |= (src[116+j] << 21) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[116+j] >> 10) & 2147483647;
		des[120+j] |= (src[120+j] << 22) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[120+j] >> 9) & 2147483647;
		des[124+j] |= (src[124+j] << 23) & 2147483647;
	}
}

template<typename T>
void KAFOR_unpack_32len_31bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 2147483647;
		des[j] |= (src[4+j] << 16) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 15) & 2147483647;
		des[4+j] |= (src[8+j] << 17) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 14) & 2147483647;
		des[8+j] |= (src[12+j] << 18) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 13) & 2147483647;
		des[12+j] |= (src[16+j] << 19) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j] >> 12) & 2147483647;
		des[16+j] |= (src[20+j] << 20) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[20+j] >> 11) & 2147483647;
		des[20+j] |= (src[24+j] << 21) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[24+j] >> 10) & 2147483647;
		des[24+j] |= (src[28+j] << 22) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[28+j] >> 9) & 2147483647;
		des[28+j] |= (src[32+j] << 23) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[32+j] >> 8) & 2147483647;
		des[32+j] |= (src[36+j] << 24) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[36+j] >> 7) & 2147483647;
		des[36+j] |= (src[40+j] << 25) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[40+j] >> 6) & 2147483647;
		des[40+j] |= (src[44+j] << 26) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[44+j] >> 5) & 2147483647;
		des[44+j] |= (src[48+j] << 27) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[48+j] >> 4) & 2147483647;
		des[48+j] |= (src[52+j] << 28) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[52+j] >> 3) & 2147483647;
		des[52+j] |= (src[56+j] << 29) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[56+j] >> 2) & 2147483647;
		des[56+j] |= (src[60+j] << 30) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[60+j] >> 1) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[64+j]) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[64+j] >> 31) & 2147483647;
		des[68+j] |= (src[68+j] << 1) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[68+j] >> 30) & 2147483647;
		des[72+j] |= (src[72+j] << 2) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[72+j] >> 29) & 2147483647;
		des[76+j] |= (src[76+j] << 3) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[76+j] >> 28) & 2147483647;
		des[80+j] |= (src[80+j] << 4) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[80+j] >> 27) & 2147483647;
		des[84+j] |= (src[84+j] << 5) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[84+j] >> 26) & 2147483647;
		des[88+j] |= (src[88+j] << 6) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[88+j] >> 25) & 2147483647;
		des[92+j] |= (src[92+j] << 7) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[92+j] >> 24) & 2147483647;
		des[96+j] |= (src[96+j] << 8) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[96+j] >> 23) & 2147483647;
		des[100+j] |= (src[100+j] << 9) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[100+j] >> 22) & 2147483647;
		des[104+j] |= (src[104+j] << 10) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[104+j] >> 21) & 2147483647;
		des[108+j] |= (src[108+j] << 11) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[108+j] >> 20) & 2147483647;
		des[112+j] |= (src[112+j] << 12) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[112+j] >> 19) & 2147483647;
		des[116+j] |= (src[116+j] << 13) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[116+j] >> 18) & 2147483647;
		des[120+j] |= (src[120+j] << 14) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[120+j] >> 17) & 2147483647;
		des[124+j] |= (src[124+j] << 15) & 2147483647;
	}
}

template<typename T>
void KAFOR_unpack_32len_31bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 2147483647;
		des[j] |= (src[4+j] << 8) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 23) & 2147483647;
		des[4+j] |= (src[8+j] << 9) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 22) & 2147483647;
		des[8+j] |= (src[12+j] << 10) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 21) & 2147483647;
		des[12+j] |= (src[16+j] << 11) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j] >> 20) & 2147483647;
		des[16+j] |= (src[20+j] << 12) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[20+j] >> 19) & 2147483647;
		des[20+j] |= (src[24+j] << 13) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[24+j] >> 18) & 2147483647;
		des[24+j] |= (src[28+j] << 14) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[28+j] >> 17) & 2147483647;
		des[28+j] |= (src[32+j] << 15) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[32+j] >> 16) & 2147483647;
		des[32+j] |= (src[36+j] << 16) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[36+j] >> 15) & 2147483647;
		des[36+j] |= (src[40+j] << 17) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[40+j] >> 14) & 2147483647;
		des[40+j] |= (src[44+j] << 18) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[44+j] >> 13) & 2147483647;
		des[44+j] |= (src[48+j] << 19) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[48+j] >> 12) & 2147483647;
		des[48+j] |= (src[52+j] << 20) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[52+j] >> 11) & 2147483647;
		des[52+j] |= (src[56+j] << 21) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[56+j] >> 10) & 2147483647;
		des[56+j] |= (src[60+j] << 22) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[60+j] >> 9) & 2147483647;
		des[60+j] |= (src[64+j] << 23) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[64+j] >> 8) & 2147483647;
		des[64+j] |= (src[68+j] << 24) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[68+j] >> 7) & 2147483647;
		des[68+j] |= (src[72+j] << 25) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[72+j] >> 6) & 2147483647;
		des[72+j] |= (src[76+j] << 26) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[76+j] >> 5) & 2147483647;
		des[76+j] |= (src[80+j] << 27) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[80+j] >> 4) & 2147483647;
		des[80+j] |= (src[84+j] << 28) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[84+j] >> 3) & 2147483647;
		des[84+j] |= (src[88+j] << 29) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[88+j] >> 2) & 2147483647;
		des[88+j] |= (src[92+j] << 30) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[92+j] >> 1) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[96+j]) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[96+j] >> 31) & 2147483647;
		des[100+j] |= (src[100+j] << 1) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[100+j] >> 30) & 2147483647;
		des[104+j] |= (src[104+j] << 2) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[104+j] >> 29) & 2147483647;
		des[108+j] |= (src[108+j] << 3) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[108+j] >> 28) & 2147483647;
		des[112+j] |= (src[112+j] << 4) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[112+j] >> 27) & 2147483647;
		des[116+j] |= (src[116+j] << 5) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[116+j] >> 26) & 2147483647;
		des[120+j] |= (src[120+j] << 6) & 2147483647;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[120+j] >> 25) & 2147483647;
		des[124+j] |= (src[124+j] << 7) & 2147483647;
	}
}

template<typename T>
void KAFOR_unpack_32len_32bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j]);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j]);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j]);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j]);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[20+j]);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[24+j]);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[28+j]);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[32+j]);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[36+j]);
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[40+j]);
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[44+j]);
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[48+j]);
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[52+j]);
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[56+j]);
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[60+j]);
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[64+j]);
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[68+j]);
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[72+j]);
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[76+j]);
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[80+j]);
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[84+j]);
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[88+j]);
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[92+j]);
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[96+j]);
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[100+j]);
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[104+j]);
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[108+j]);
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[112+j]);
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[116+j]);
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[120+j]);
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[124+j]);
	}
}

template<typename T>
void KAFOR_unpack_32len_32bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8);
		des[j] |= (src[4+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 8);
		des[4+j] |= (src[8+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 8);
		des[8+j] |= (src[12+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 8);
		des[12+j] |= (src[16+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j] >> 8);
		des[16+j] |= (src[20+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[20+j] >> 8);
		des[20+j] |= (src[24+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[24+j] >> 8);
		des[24+j] |= (src[28+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[28+j] >> 8);
		des[28+j] |= (src[32+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[32+j] >> 8);
		des[32+j] |= (src[36+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[36+j] >> 8);
		des[36+j] |= (src[40+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[40+j] >> 8);
		des[40+j] |= (src[44+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[44+j] >> 8);
		des[44+j] |= (src[48+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[48+j] >> 8);
		des[48+j] |= (src[52+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[52+j] >> 8);
		des[52+j] |= (src[56+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[56+j] >> 8);
		des[56+j] |= (src[60+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[60+j] >> 8);
		des[60+j] |= (src[64+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[64+j] >> 8);
		des[64+j] |= (src[68+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[68+j] >> 8);
		des[68+j] |= (src[72+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[72+j] >> 8);
		des[72+j] |= (src[76+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[76+j] >> 8);
		des[76+j] |= (src[80+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[80+j] >> 8);
		des[80+j] |= (src[84+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[84+j] >> 8);
		des[84+j] |= (src[88+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[88+j] >> 8);
		des[88+j] |= (src[92+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[92+j] >> 8);
		des[92+j] |= (src[96+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[96+j] >> 8);
		des[96+j] |= (src[100+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[100+j] >> 8);
		des[100+j] |= (src[104+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[104+j] >> 8);
		des[104+j] |= (src[108+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[108+j] >> 8);
		des[108+j] |= (src[112+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[112+j] >> 8);
		des[112+j] |= (src[116+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[116+j] >> 8);
		des[116+j] |= (src[120+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[120+j] >> 8);
		des[120+j] |= (src[124+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[124+j] >> 8);
		des[124+j] |= (src[128+j] << 24);
	}
}

template<typename T>
void KAFOR_unpack_32len_32bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16);
		des[j] |= (src[4+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 16);
		des[4+j] |= (src[8+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 16);
		des[8+j] |= (src[12+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 16);
		des[12+j] |= (src[16+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j] >> 16);
		des[16+j] |= (src[20+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[20+j] >> 16);
		des[20+j] |= (src[24+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[24+j] >> 16);
		des[24+j] |= (src[28+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[28+j] >> 16);
		des[28+j] |= (src[32+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[32+j] >> 16);
		des[32+j] |= (src[36+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[36+j] >> 16);
		des[36+j] |= (src[40+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[40+j] >> 16);
		des[40+j] |= (src[44+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[44+j] >> 16);
		des[44+j] |= (src[48+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[48+j] >> 16);
		des[48+j] |= (src[52+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[52+j] >> 16);
		des[52+j] |= (src[56+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[56+j] >> 16);
		des[56+j] |= (src[60+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[60+j] >> 16);
		des[60+j] |= (src[64+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[64+j] >> 16);
		des[64+j] |= (src[68+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[68+j] >> 16);
		des[68+j] |= (src[72+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[72+j] >> 16);
		des[72+j] |= (src[76+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[76+j] >> 16);
		des[76+j] |= (src[80+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[80+j] >> 16);
		des[80+j] |= (src[84+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[84+j] >> 16);
		des[84+j] |= (src[88+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[88+j] >> 16);
		des[88+j] |= (src[92+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[92+j] >> 16);
		des[92+j] |= (src[96+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[96+j] >> 16);
		des[96+j] |= (src[100+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[100+j] >> 16);
		des[100+j] |= (src[104+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[104+j] >> 16);
		des[104+j] |= (src[108+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[108+j] >> 16);
		des[108+j] |= (src[112+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[112+j] >> 16);
		des[112+j] |= (src[116+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[116+j] >> 16);
		des[116+j] |= (src[120+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[120+j] >> 16);
		des[120+j] |= (src[124+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[124+j] >> 16);
		des[124+j] |= (src[128+j] << 16);
	}
}

template<typename T>
void KAFOR_unpack_32len_32bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24);
		des[j] |= (src[4+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 24);
		des[4+j] |= (src[8+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] >> 24);
		des[8+j] |= (src[12+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] >> 24);
		des[12+j] |= (src[16+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j] >> 24);
		des[16+j] |= (src[20+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[20+j] >> 24);
		des[20+j] |= (src[24+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[24+j] >> 24);
		des[24+j] |= (src[28+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[28+j] >> 24);
		des[28+j] |= (src[32+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[32+j] >> 24);
		des[32+j] |= (src[36+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[36+j] >> 24);
		des[36+j] |= (src[40+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[40+j] >> 24);
		des[40+j] |= (src[44+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[44+j] >> 24);
		des[44+j] |= (src[48+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[48+j] >> 24);
		des[48+j] |= (src[52+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[52+j] >> 24);
		des[52+j] |= (src[56+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[56+j] >> 24);
		des[56+j] |= (src[60+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[60+j] >> 24);
		des[60+j] |= (src[64+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[64+j] >> 24);
		des[64+j] |= (src[68+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[68+j] >> 24);
		des[68+j] |= (src[72+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[72+j] >> 24);
		des[72+j] |= (src[76+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[76+j] >> 24);
		des[76+j] |= (src[80+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[80+j] >> 24);
		des[80+j] |= (src[84+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[84+j] >> 24);
		des[84+j] |= (src[88+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[88+j] >> 24);
		des[88+j] |= (src[92+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[92+j] >> 24);
		des[92+j] |= (src[96+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[96+j] >> 24);
		des[96+j] |= (src[100+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[100+j] >> 24);
		des[100+j] |= (src[104+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[104+j] >> 24);
		des[104+j] |= (src[108+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[108+j] >> 24);
		des[108+j] |= (src[112+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[112+j] >> 24);
		des[112+j] |= (src[116+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[116+j] >> 24);
		des[116+j] |= (src[120+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[120+j] >> 24);
		des[120+j] |= (src[124+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[124+j] >> 24);
		des[124+j] |= (src[128+j] << 8);
	}
}


static KAFORUnpackInfo KAFORUnpackInfo_0 = { KAFOR_unpack_8len_1bw_0offset<uint32_t>, 0, 8, 0, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_1 = { KAFOR_unpack_8len_1bw_8offset<uint32_t>, 8, 16, 0, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_2 = { KAFOR_unpack_8len_1bw_16offset<uint32_t>, 16, 24, 0, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_3 = { KAFOR_unpack_8len_1bw_24offset<uint32_t>, 24, 0, 4, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_4 = { KAFOR_unpack_8len_2bw_0offset<uint32_t>, 0, 16, 0, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_5 = { KAFOR_unpack_8len_2bw_8offset<uint32_t>, 8, 24, 0, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_6 = { KAFOR_unpack_8len_2bw_16offset<uint32_t>, 16, 0, 4, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_7 = { KAFOR_unpack_8len_2bw_24offset<uint32_t>, 24, 8, 4, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_8 = { KAFOR_unpack_8len_3bw_0offset<uint32_t>, 0, 24, 0, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_9 = { KAFOR_unpack_8len_3bw_8offset<uint32_t>, 8, 0, 4, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_10 = { KAFOR_unpack_8len_3bw_16offset<uint32_t>, 16, 8, 4, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_11 = { KAFOR_unpack_8len_3bw_24offset<uint32_t>, 24, 16, 4, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_12 = { KAFOR_unpack_8len_4bw_0offset<uint32_t>, 0, 0, 4, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_13 = { KAFOR_unpack_8len_4bw_8offset<uint32_t>, 8, 8, 4, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_14 = { KAFOR_unpack_8len_4bw_16offset<uint32_t>, 16, 16, 4, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_15 = { KAFOR_unpack_8len_4bw_24offset<uint32_t>, 24, 24, 4, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_16 = { KAFOR_unpack_8len_5bw_0offset<uint32_t>, 0, 8, 4, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_17 = { KAFOR_unpack_8len_5bw_8offset<uint32_t>, 8, 16, 4, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_18 = { KAFOR_unpack_8len_5bw_16offset<uint32_t>, 16, 24, 4, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_19 = { KAFOR_unpack_8len_5bw_24offset<uint32_t>, 24, 0, 8, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_20 = { KAFOR_unpack_8len_6bw_0offset<uint32_t>, 0, 16, 4, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_21 = { KAFOR_unpack_8len_6bw_8offset<uint32_t>, 8, 24, 4, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_22 = { KAFOR_unpack_8len_6bw_16offset<uint32_t>, 16, 0, 8, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_23 = { KAFOR_unpack_8len_6bw_24offset<uint32_t>, 24, 8, 8, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_24 = { KAFOR_unpack_8len_7bw_0offset<uint32_t>, 0, 24, 4, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_25 = { KAFOR_unpack_8len_7bw_8offset<uint32_t>, 8, 0, 8, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_26 = { KAFOR_unpack_8len_7bw_16offset<uint32_t>, 16, 8, 8, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_27 = { KAFOR_unpack_8len_7bw_24offset<uint32_t>, 24, 16, 8, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_28 = { KAFOR_unpack_8len_8bw_0offset<uint32_t>, 0, 0, 8, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_29 = { KAFOR_unpack_8len_8bw_8offset<uint32_t>, 8, 8, 8, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_30 = { KAFOR_unpack_8len_8bw_16offset<uint32_t>, 16, 16, 8, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_31 = { KAFOR_unpack_8len_8bw_24offset<uint32_t>, 24, 24, 8, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_32 = { KAFOR_unpack_8len_9bw_0offset<uint32_t>, 0, 8, 8, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_33 = { KAFOR_unpack_8len_9bw_8offset<uint32_t>, 8, 16, 8, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_34 = { KAFOR_unpack_8len_9bw_16offset<uint32_t>, 16, 24, 8, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_35 = { KAFOR_unpack_8len_9bw_24offset<uint32_t>, 24, 0, 12, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_36 = { KAFOR_unpack_8len_10bw_0offset<uint32_t>, 0, 16, 8, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_37 = { KAFOR_unpack_8len_10bw_8offset<uint32_t>, 8, 24, 8, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_38 = { KAFOR_unpack_8len_10bw_16offset<uint32_t>, 16, 0, 12, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_39 = { KAFOR_unpack_8len_10bw_24offset<uint32_t>, 24, 8, 12, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_40 = { KAFOR_unpack_8len_11bw_0offset<uint32_t>, 0, 24, 8, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_41 = { KAFOR_unpack_8len_11bw_8offset<uint32_t>, 8, 0, 12, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_42 = { KAFOR_unpack_8len_11bw_16offset<uint32_t>, 16, 8, 12, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_43 = { KAFOR_unpack_8len_11bw_24offset<uint32_t>, 24, 16, 12, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_44 = { KAFOR_unpack_8len_12bw_0offset<uint32_t>, 0, 0, 12, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_45 = { KAFOR_unpack_8len_12bw_8offset<uint32_t>, 8, 8, 12, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_46 = { KAFOR_unpack_8len_12bw_16offset<uint32_t>, 16, 16, 12, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_47 = { KAFOR_unpack_8len_12bw_24offset<uint32_t>, 24, 24, 12, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_48 = { KAFOR_unpack_8len_13bw_0offset<uint32_t>, 0, 8, 12, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_49 = { KAFOR_unpack_8len_13bw_8offset<uint32_t>, 8, 16, 12, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_50 = { KAFOR_unpack_8len_13bw_16offset<uint32_t>, 16, 24, 12, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_51 = { KAFOR_unpack_8len_13bw_24offset<uint32_t>, 24, 0, 16, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_52 = { KAFOR_unpack_8len_14bw_0offset<uint32_t>, 0, 16, 12, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_53 = { KAFOR_unpack_8len_14bw_8offset<uint32_t>, 8, 24, 12, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_54 = { KAFOR_unpack_8len_14bw_16offset<uint32_t>, 16, 0, 16, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_55 = { KAFOR_unpack_8len_14bw_24offset<uint32_t>, 24, 8, 16, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_56 = { KAFOR_unpack_8len_15bw_0offset<uint32_t>, 0, 24, 12, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_57 = { KAFOR_unpack_8len_15bw_8offset<uint32_t>, 8, 0, 16, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_58 = { KAFOR_unpack_8len_15bw_16offset<uint32_t>, 16, 8, 16, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_59 = { KAFOR_unpack_8len_15bw_24offset<uint32_t>, 24, 16, 16, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_60 = { KAFOR_unpack_8len_16bw_0offset<uint32_t>, 0, 0, 16, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_61 = { KAFOR_unpack_8len_16bw_8offset<uint32_t>, 8, 8, 16, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_62 = { KAFOR_unpack_8len_16bw_16offset<uint32_t>, 16, 16, 16, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_63 = { KAFOR_unpack_8len_16bw_24offset<uint32_t>, 24, 24, 16, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_64 = { KAFOR_unpack_8len_17bw_0offset<uint32_t>, 0, 8, 16, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_65 = { KAFOR_unpack_8len_17bw_8offset<uint32_t>, 8, 16, 16, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_66 = { KAFOR_unpack_8len_17bw_16offset<uint32_t>, 16, 24, 16, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_67 = { KAFOR_unpack_8len_17bw_24offset<uint32_t>, 24, 0, 20, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_68 = { KAFOR_unpack_8len_18bw_0offset<uint32_t>, 0, 16, 16, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_69 = { KAFOR_unpack_8len_18bw_8offset<uint32_t>, 8, 24, 16, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_70 = { KAFOR_unpack_8len_18bw_16offset<uint32_t>, 16, 0, 20, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_71 = { KAFOR_unpack_8len_18bw_24offset<uint32_t>, 24, 8, 20, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_72 = { KAFOR_unpack_8len_19bw_0offset<uint32_t>, 0, 24, 16, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_73 = { KAFOR_unpack_8len_19bw_8offset<uint32_t>, 8, 0, 20, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_74 = { KAFOR_unpack_8len_19bw_16offset<uint32_t>, 16, 8, 20, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_75 = { KAFOR_unpack_8len_19bw_24offset<uint32_t>, 24, 16, 20, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_76 = { KAFOR_unpack_8len_20bw_0offset<uint32_t>, 0, 0, 20, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_77 = { KAFOR_unpack_8len_20bw_8offset<uint32_t>, 8, 8, 20, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_78 = { KAFOR_unpack_8len_20bw_16offset<uint32_t>, 16, 16, 20, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_79 = { KAFOR_unpack_8len_20bw_24offset<uint32_t>, 24, 24, 20, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_80 = { KAFOR_unpack_8len_21bw_0offset<uint32_t>, 0, 8, 20, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_81 = { KAFOR_unpack_8len_21bw_8offset<uint32_t>, 8, 16, 20, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_82 = { KAFOR_unpack_8len_21bw_16offset<uint32_t>, 16, 24, 20, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_83 = { KAFOR_unpack_8len_21bw_24offset<uint32_t>, 24, 0, 24, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_84 = { KAFOR_unpack_8len_22bw_0offset<uint32_t>, 0, 16, 20, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_85 = { KAFOR_unpack_8len_22bw_8offset<uint32_t>, 8, 24, 20, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_86 = { KAFOR_unpack_8len_22bw_16offset<uint32_t>, 16, 0, 24, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_87 = { KAFOR_unpack_8len_22bw_24offset<uint32_t>, 24, 8, 24, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_88 = { KAFOR_unpack_8len_23bw_0offset<uint32_t>, 0, 24, 20, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_89 = { KAFOR_unpack_8len_23bw_8offset<uint32_t>, 8, 0, 24, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_90 = { KAFOR_unpack_8len_23bw_16offset<uint32_t>, 16, 8, 24, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_91 = { KAFOR_unpack_8len_23bw_24offset<uint32_t>, 24, 16, 24, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_92 = { KAFOR_unpack_8len_24bw_0offset<uint32_t>, 0, 0, 24, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_93 = { KAFOR_unpack_8len_24bw_8offset<uint32_t>, 8, 8, 24, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_94 = { KAFOR_unpack_8len_24bw_16offset<uint32_t>, 16, 16, 24, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_95 = { KAFOR_unpack_8len_24bw_24offset<uint32_t>, 24, 24, 24, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_96 = { KAFOR_unpack_8len_25bw_0offset<uint32_t>, 0, 8, 24, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_97 = { KAFOR_unpack_8len_25bw_8offset<uint32_t>, 8, 16, 24, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_98 = { KAFOR_unpack_8len_25bw_16offset<uint32_t>, 16, 24, 24, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_99 = { KAFOR_unpack_8len_25bw_24offset<uint32_t>, 24, 0, 28, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_100 = { KAFOR_unpack_8len_26bw_0offset<uint32_t>, 0, 16, 24, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_101 = { KAFOR_unpack_8len_26bw_8offset<uint32_t>, 8, 24, 24, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_102 = { KAFOR_unpack_8len_26bw_16offset<uint32_t>, 16, 0, 28, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_103 = { KAFOR_unpack_8len_26bw_24offset<uint32_t>, 24, 8, 28, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_104 = { KAFOR_unpack_8len_27bw_0offset<uint32_t>, 0, 24, 24, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_105 = { KAFOR_unpack_8len_27bw_8offset<uint32_t>, 8, 0, 28, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_106 = { KAFOR_unpack_8len_27bw_16offset<uint32_t>, 16, 8, 28, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_107 = { KAFOR_unpack_8len_27bw_24offset<uint32_t>, 24, 16, 28, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_108 = { KAFOR_unpack_8len_28bw_0offset<uint32_t>, 0, 0, 28, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_109 = { KAFOR_unpack_8len_28bw_8offset<uint32_t>, 8, 8, 28, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_110 = { KAFOR_unpack_8len_28bw_16offset<uint32_t>, 16, 16, 28, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_111 = { KAFOR_unpack_8len_28bw_24offset<uint32_t>, 24, 24, 28, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_112 = { KAFOR_unpack_8len_29bw_0offset<uint32_t>, 0, 8, 28, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_113 = { KAFOR_unpack_8len_29bw_8offset<uint32_t>, 8, 16, 28, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_114 = { KAFOR_unpack_8len_29bw_16offset<uint32_t>, 16, 24, 28, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_115 = { KAFOR_unpack_8len_29bw_24offset<uint32_t>, 24, 0, 32, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_116 = { KAFOR_unpack_8len_30bw_0offset<uint32_t>, 0, 16, 28, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_117 = { KAFOR_unpack_8len_30bw_8offset<uint32_t>, 8, 24, 28, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_118 = { KAFOR_unpack_8len_30bw_16offset<uint32_t>, 16, 0, 32, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_119 = { KAFOR_unpack_8len_30bw_24offset<uint32_t>, 24, 8, 32, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_120 = { KAFOR_unpack_8len_31bw_0offset<uint32_t>, 0, 24, 28, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_121 = { KAFOR_unpack_8len_31bw_8offset<uint32_t>, 8, 0, 32, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_122 = { KAFOR_unpack_8len_31bw_16offset<uint32_t>, 16, 8, 32, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_123 = { KAFOR_unpack_8len_31bw_24offset<uint32_t>, 24, 16, 32, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_124 = { KAFOR_unpack_8len_32bw_0offset<uint32_t>, 0, 0, 32, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_125 = { KAFOR_unpack_8len_32bw_8offset<uint32_t>, 8, 8, 32, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_126 = { KAFOR_unpack_8len_32bw_16offset<uint32_t>, 16, 16, 32, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_127 = { KAFOR_unpack_8len_32bw_24offset<uint32_t>, 24, 24, 32, 32, };
static KAFORUnpackInfo KAFORUnpackInfo_128 = { KAFOR_unpack_16len_1bw_0offset<uint32_t>, 0, 16, 0, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_129 = { KAFOR_unpack_16len_1bw_8offset<uint32_t>, 8, 24, 0, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_130 = { KAFOR_unpack_16len_1bw_16offset<uint32_t>, 16, 0, 4, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_131 = { KAFOR_unpack_16len_1bw_24offset<uint32_t>, 24, 8, 4, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_132 = { KAFOR_unpack_16len_2bw_0offset<uint32_t>, 0, 0, 4, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_133 = { KAFOR_unpack_16len_2bw_8offset<uint32_t>, 8, 8, 4, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_134 = { KAFOR_unpack_16len_2bw_16offset<uint32_t>, 16, 16, 4, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_135 = { KAFOR_unpack_16len_2bw_24offset<uint32_t>, 24, 24, 4, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_136 = { KAFOR_unpack_16len_3bw_0offset<uint32_t>, 0, 16, 4, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_137 = { KAFOR_unpack_16len_3bw_8offset<uint32_t>, 8, 24, 4, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_138 = { KAFOR_unpack_16len_3bw_16offset<uint32_t>, 16, 0, 8, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_139 = { KAFOR_unpack_16len_3bw_24offset<uint32_t>, 24, 8, 8, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_140 = { KAFOR_unpack_16len_4bw_0offset<uint32_t>, 0, 0, 8, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_141 = { KAFOR_unpack_16len_4bw_8offset<uint32_t>, 8, 8, 8, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_142 = { KAFOR_unpack_16len_4bw_16offset<uint32_t>, 16, 16, 8, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_143 = { KAFOR_unpack_16len_4bw_24offset<uint32_t>, 24, 24, 8, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_144 = { KAFOR_unpack_16len_5bw_0offset<uint32_t>, 0, 16, 8, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_145 = { KAFOR_unpack_16len_5bw_8offset<uint32_t>, 8, 24, 8, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_146 = { KAFOR_unpack_16len_5bw_16offset<uint32_t>, 16, 0, 12, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_147 = { KAFOR_unpack_16len_5bw_24offset<uint32_t>, 24, 8, 12, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_148 = { KAFOR_unpack_16len_6bw_0offset<uint32_t>, 0, 0, 12, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_149 = { KAFOR_unpack_16len_6bw_8offset<uint32_t>, 8, 8, 12, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_150 = { KAFOR_unpack_16len_6bw_16offset<uint32_t>, 16, 16, 12, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_151 = { KAFOR_unpack_16len_6bw_24offset<uint32_t>, 24, 24, 12, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_152 = { KAFOR_unpack_16len_7bw_0offset<uint32_t>, 0, 16, 12, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_153 = { KAFOR_unpack_16len_7bw_8offset<uint32_t>, 8, 24, 12, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_154 = { KAFOR_unpack_16len_7bw_16offset<uint32_t>, 16, 0, 16, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_155 = { KAFOR_unpack_16len_7bw_24offset<uint32_t>, 24, 8, 16, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_156 = { KAFOR_unpack_16len_8bw_0offset<uint32_t>, 0, 0, 16, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_157 = { KAFOR_unpack_16len_8bw_8offset<uint32_t>, 8, 8, 16, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_158 = { KAFOR_unpack_16len_8bw_16offset<uint32_t>, 16, 16, 16, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_159 = { KAFOR_unpack_16len_8bw_24offset<uint32_t>, 24, 24, 16, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_160 = { KAFOR_unpack_16len_9bw_0offset<uint32_t>, 0, 16, 16, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_161 = { KAFOR_unpack_16len_9bw_8offset<uint32_t>, 8, 24, 16, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_162 = { KAFOR_unpack_16len_9bw_16offset<uint32_t>, 16, 0, 20, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_163 = { KAFOR_unpack_16len_9bw_24offset<uint32_t>, 24, 8, 20, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_164 = { KAFOR_unpack_16len_10bw_0offset<uint32_t>, 0, 0, 20, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_165 = { KAFOR_unpack_16len_10bw_8offset<uint32_t>, 8, 8, 20, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_166 = { KAFOR_unpack_16len_10bw_16offset<uint32_t>, 16, 16, 20, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_167 = { KAFOR_unpack_16len_10bw_24offset<uint32_t>, 24, 24, 20, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_168 = { KAFOR_unpack_16len_11bw_0offset<uint32_t>, 0, 16, 20, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_169 = { KAFOR_unpack_16len_11bw_8offset<uint32_t>, 8, 24, 20, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_170 = { KAFOR_unpack_16len_11bw_16offset<uint32_t>, 16, 0, 24, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_171 = { KAFOR_unpack_16len_11bw_24offset<uint32_t>, 24, 8, 24, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_172 = { KAFOR_unpack_16len_12bw_0offset<uint32_t>, 0, 0, 24, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_173 = { KAFOR_unpack_16len_12bw_8offset<uint32_t>, 8, 8, 24, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_174 = { KAFOR_unpack_16len_12bw_16offset<uint32_t>, 16, 16, 24, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_175 = { KAFOR_unpack_16len_12bw_24offset<uint32_t>, 24, 24, 24, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_176 = { KAFOR_unpack_16len_13bw_0offset<uint32_t>, 0, 16, 24, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_177 = { KAFOR_unpack_16len_13bw_8offset<uint32_t>, 8, 24, 24, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_178 = { KAFOR_unpack_16len_13bw_16offset<uint32_t>, 16, 0, 28, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_179 = { KAFOR_unpack_16len_13bw_24offset<uint32_t>, 24, 8, 28, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_180 = { KAFOR_unpack_16len_14bw_0offset<uint32_t>, 0, 0, 28, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_181 = { KAFOR_unpack_16len_14bw_8offset<uint32_t>, 8, 8, 28, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_182 = { KAFOR_unpack_16len_14bw_16offset<uint32_t>, 16, 16, 28, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_183 = { KAFOR_unpack_16len_14bw_24offset<uint32_t>, 24, 24, 28, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_184 = { KAFOR_unpack_16len_15bw_0offset<uint32_t>, 0, 16, 28, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_185 = { KAFOR_unpack_16len_15bw_8offset<uint32_t>, 8, 24, 28, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_186 = { KAFOR_unpack_16len_15bw_16offset<uint32_t>, 16, 0, 32, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_187 = { KAFOR_unpack_16len_15bw_24offset<uint32_t>, 24, 8, 32, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_188 = { KAFOR_unpack_16len_16bw_0offset<uint32_t>, 0, 0, 32, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_189 = { KAFOR_unpack_16len_16bw_8offset<uint32_t>, 8, 8, 32, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_190 = { KAFOR_unpack_16len_16bw_16offset<uint32_t>, 16, 16, 32, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_191 = { KAFOR_unpack_16len_16bw_24offset<uint32_t>, 24, 24, 32, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_192 = { KAFOR_unpack_16len_17bw_0offset<uint32_t>, 0, 16, 32, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_193 = { KAFOR_unpack_16len_17bw_8offset<uint32_t>, 8, 24, 32, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_194 = { KAFOR_unpack_16len_17bw_16offset<uint32_t>, 16, 0, 36, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_195 = { KAFOR_unpack_16len_17bw_24offset<uint32_t>, 24, 8, 36, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_196 = { KAFOR_unpack_16len_18bw_0offset<uint32_t>, 0, 0, 36, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_197 = { KAFOR_unpack_16len_18bw_8offset<uint32_t>, 8, 8, 36, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_198 = { KAFOR_unpack_16len_18bw_16offset<uint32_t>, 16, 16, 36, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_199 = { KAFOR_unpack_16len_18bw_24offset<uint32_t>, 24, 24, 36, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_200 = { KAFOR_unpack_16len_19bw_0offset<uint32_t>, 0, 16, 36, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_201 = { KAFOR_unpack_16len_19bw_8offset<uint32_t>, 8, 24, 36, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_202 = { KAFOR_unpack_16len_19bw_16offset<uint32_t>, 16, 0, 40, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_203 = { KAFOR_unpack_16len_19bw_24offset<uint32_t>, 24, 8, 40, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_204 = { KAFOR_unpack_16len_20bw_0offset<uint32_t>, 0, 0, 40, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_205 = { KAFOR_unpack_16len_20bw_8offset<uint32_t>, 8, 8, 40, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_206 = { KAFOR_unpack_16len_20bw_16offset<uint32_t>, 16, 16, 40, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_207 = { KAFOR_unpack_16len_20bw_24offset<uint32_t>, 24, 24, 40, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_208 = { KAFOR_unpack_16len_21bw_0offset<uint32_t>, 0, 16, 40, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_209 = { KAFOR_unpack_16len_21bw_8offset<uint32_t>, 8, 24, 40, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_210 = { KAFOR_unpack_16len_21bw_16offset<uint32_t>, 16, 0, 44, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_211 = { KAFOR_unpack_16len_21bw_24offset<uint32_t>, 24, 8, 44, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_212 = { KAFOR_unpack_16len_22bw_0offset<uint32_t>, 0, 0, 44, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_213 = { KAFOR_unpack_16len_22bw_8offset<uint32_t>, 8, 8, 44, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_214 = { KAFOR_unpack_16len_22bw_16offset<uint32_t>, 16, 16, 44, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_215 = { KAFOR_unpack_16len_22bw_24offset<uint32_t>, 24, 24, 44, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_216 = { KAFOR_unpack_16len_23bw_0offset<uint32_t>, 0, 16, 44, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_217 = { KAFOR_unpack_16len_23bw_8offset<uint32_t>, 8, 24, 44, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_218 = { KAFOR_unpack_16len_23bw_16offset<uint32_t>, 16, 0, 48, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_219 = { KAFOR_unpack_16len_23bw_24offset<uint32_t>, 24, 8, 48, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_220 = { KAFOR_unpack_16len_24bw_0offset<uint32_t>, 0, 0, 48, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_221 = { KAFOR_unpack_16len_24bw_8offset<uint32_t>, 8, 8, 48, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_222 = { KAFOR_unpack_16len_24bw_16offset<uint32_t>, 16, 16, 48, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_223 = { KAFOR_unpack_16len_24bw_24offset<uint32_t>, 24, 24, 48, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_224 = { KAFOR_unpack_16len_25bw_0offset<uint32_t>, 0, 16, 48, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_225 = { KAFOR_unpack_16len_25bw_8offset<uint32_t>, 8, 24, 48, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_226 = { KAFOR_unpack_16len_25bw_16offset<uint32_t>, 16, 0, 52, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_227 = { KAFOR_unpack_16len_25bw_24offset<uint32_t>, 24, 8, 52, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_228 = { KAFOR_unpack_16len_26bw_0offset<uint32_t>, 0, 0, 52, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_229 = { KAFOR_unpack_16len_26bw_8offset<uint32_t>, 8, 8, 52, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_230 = { KAFOR_unpack_16len_26bw_16offset<uint32_t>, 16, 16, 52, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_231 = { KAFOR_unpack_16len_26bw_24offset<uint32_t>, 24, 24, 52, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_232 = { KAFOR_unpack_16len_27bw_0offset<uint32_t>, 0, 16, 52, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_233 = { KAFOR_unpack_16len_27bw_8offset<uint32_t>, 8, 24, 52, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_234 = { KAFOR_unpack_16len_27bw_16offset<uint32_t>, 16, 0, 56, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_235 = { KAFOR_unpack_16len_27bw_24offset<uint32_t>, 24, 8, 56, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_236 = { KAFOR_unpack_16len_28bw_0offset<uint32_t>, 0, 0, 56, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_237 = { KAFOR_unpack_16len_28bw_8offset<uint32_t>, 8, 8, 56, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_238 = { KAFOR_unpack_16len_28bw_16offset<uint32_t>, 16, 16, 56, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_239 = { KAFOR_unpack_16len_28bw_24offset<uint32_t>, 24, 24, 56, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_240 = { KAFOR_unpack_16len_29bw_0offset<uint32_t>, 0, 16, 56, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_241 = { KAFOR_unpack_16len_29bw_8offset<uint32_t>, 8, 24, 56, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_242 = { KAFOR_unpack_16len_29bw_16offset<uint32_t>, 16, 0, 60, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_243 = { KAFOR_unpack_16len_29bw_24offset<uint32_t>, 24, 8, 60, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_244 = { KAFOR_unpack_16len_30bw_0offset<uint32_t>, 0, 0, 60, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_245 = { KAFOR_unpack_16len_30bw_8offset<uint32_t>, 8, 8, 60, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_246 = { KAFOR_unpack_16len_30bw_16offset<uint32_t>, 16, 16, 60, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_247 = { KAFOR_unpack_16len_30bw_24offset<uint32_t>, 24, 24, 60, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_248 = { KAFOR_unpack_16len_31bw_0offset<uint32_t>, 0, 16, 60, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_249 = { KAFOR_unpack_16len_31bw_8offset<uint32_t>, 8, 24, 60, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_250 = { KAFOR_unpack_16len_31bw_16offset<uint32_t>, 16, 0, 64, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_251 = { KAFOR_unpack_16len_31bw_24offset<uint32_t>, 24, 8, 64, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_252 = { KAFOR_unpack_16len_32bw_0offset<uint32_t>, 0, 0, 64, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_253 = { KAFOR_unpack_16len_32bw_8offset<uint32_t>, 8, 8, 64, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_254 = { KAFOR_unpack_16len_32bw_16offset<uint32_t>, 16, 16, 64, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_255 = { KAFOR_unpack_16len_32bw_24offset<uint32_t>, 24, 24, 64, 64, };
static KAFORUnpackInfo KAFORUnpackInfo_256 = { KAFOR_unpack_32len_1bw_0offset<uint32_t>, 0, 0, 4, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_257 = { KAFOR_unpack_32len_1bw_8offset<uint32_t>, 8, 8, 4, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_258 = { KAFOR_unpack_32len_1bw_16offset<uint32_t>, 16, 16, 4, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_259 = { KAFOR_unpack_32len_1bw_24offset<uint32_t>, 24, 24, 4, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_260 = { KAFOR_unpack_32len_2bw_0offset<uint32_t>, 0, 0, 8, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_261 = { KAFOR_unpack_32len_2bw_8offset<uint32_t>, 8, 8, 8, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_262 = { KAFOR_unpack_32len_2bw_16offset<uint32_t>, 16, 16, 8, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_263 = { KAFOR_unpack_32len_2bw_24offset<uint32_t>, 24, 24, 8, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_264 = { KAFOR_unpack_32len_3bw_0offset<uint32_t>, 0, 0, 12, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_265 = { KAFOR_unpack_32len_3bw_8offset<uint32_t>, 8, 8, 12, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_266 = { KAFOR_unpack_32len_3bw_16offset<uint32_t>, 16, 16, 12, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_267 = { KAFOR_unpack_32len_3bw_24offset<uint32_t>, 24, 24, 12, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_268 = { KAFOR_unpack_32len_4bw_0offset<uint32_t>, 0, 0, 16, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_269 = { KAFOR_unpack_32len_4bw_8offset<uint32_t>, 8, 8, 16, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_270 = { KAFOR_unpack_32len_4bw_16offset<uint32_t>, 16, 16, 16, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_271 = { KAFOR_unpack_32len_4bw_24offset<uint32_t>, 24, 24, 16, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_272 = { KAFOR_unpack_32len_5bw_0offset<uint32_t>, 0, 0, 20, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_273 = { KAFOR_unpack_32len_5bw_8offset<uint32_t>, 8, 8, 20, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_274 = { KAFOR_unpack_32len_5bw_16offset<uint32_t>, 16, 16, 20, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_275 = { KAFOR_unpack_32len_5bw_24offset<uint32_t>, 24, 24, 20, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_276 = { KAFOR_unpack_32len_6bw_0offset<uint32_t>, 0, 0, 24, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_277 = { KAFOR_unpack_32len_6bw_8offset<uint32_t>, 8, 8, 24, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_278 = { KAFOR_unpack_32len_6bw_16offset<uint32_t>, 16, 16, 24, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_279 = { KAFOR_unpack_32len_6bw_24offset<uint32_t>, 24, 24, 24, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_280 = { KAFOR_unpack_32len_7bw_0offset<uint32_t>, 0, 0, 28, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_281 = { KAFOR_unpack_32len_7bw_8offset<uint32_t>, 8, 8, 28, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_282 = { KAFOR_unpack_32len_7bw_16offset<uint32_t>, 16, 16, 28, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_283 = { KAFOR_unpack_32len_7bw_24offset<uint32_t>, 24, 24, 28, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_284 = { KAFOR_unpack_32len_8bw_0offset<uint32_t>, 0, 0, 32, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_285 = { KAFOR_unpack_32len_8bw_8offset<uint32_t>, 8, 8, 32, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_286 = { KAFOR_unpack_32len_8bw_16offset<uint32_t>, 16, 16, 32, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_287 = { KAFOR_unpack_32len_8bw_24offset<uint32_t>, 24, 24, 32, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_288 = { KAFOR_unpack_32len_9bw_0offset<uint32_t>, 0, 0, 36, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_289 = { KAFOR_unpack_32len_9bw_8offset<uint32_t>, 8, 8, 36, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_290 = { KAFOR_unpack_32len_9bw_16offset<uint32_t>, 16, 16, 36, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_291 = { KAFOR_unpack_32len_9bw_24offset<uint32_t>, 24, 24, 36, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_292 = { KAFOR_unpack_32len_10bw_0offset<uint32_t>, 0, 0, 40, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_293 = { KAFOR_unpack_32len_10bw_8offset<uint32_t>, 8, 8, 40, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_294 = { KAFOR_unpack_32len_10bw_16offset<uint32_t>, 16, 16, 40, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_295 = { KAFOR_unpack_32len_10bw_24offset<uint32_t>, 24, 24, 40, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_296 = { KAFOR_unpack_32len_11bw_0offset<uint32_t>, 0, 0, 44, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_297 = { KAFOR_unpack_32len_11bw_8offset<uint32_t>, 8, 8, 44, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_298 = { KAFOR_unpack_32len_11bw_16offset<uint32_t>, 16, 16, 44, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_299 = { KAFOR_unpack_32len_11bw_24offset<uint32_t>, 24, 24, 44, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_300 = { KAFOR_unpack_32len_12bw_0offset<uint32_t>, 0, 0, 48, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_301 = { KAFOR_unpack_32len_12bw_8offset<uint32_t>, 8, 8, 48, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_302 = { KAFOR_unpack_32len_12bw_16offset<uint32_t>, 16, 16, 48, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_303 = { KAFOR_unpack_32len_12bw_24offset<uint32_t>, 24, 24, 48, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_304 = { KAFOR_unpack_32len_13bw_0offset<uint32_t>, 0, 0, 52, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_305 = { KAFOR_unpack_32len_13bw_8offset<uint32_t>, 8, 8, 52, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_306 = { KAFOR_unpack_32len_13bw_16offset<uint32_t>, 16, 16, 52, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_307 = { KAFOR_unpack_32len_13bw_24offset<uint32_t>, 24, 24, 52, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_308 = { KAFOR_unpack_32len_14bw_0offset<uint32_t>, 0, 0, 56, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_309 = { KAFOR_unpack_32len_14bw_8offset<uint32_t>, 8, 8, 56, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_310 = { KAFOR_unpack_32len_14bw_16offset<uint32_t>, 16, 16, 56, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_311 = { KAFOR_unpack_32len_14bw_24offset<uint32_t>, 24, 24, 56, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_312 = { KAFOR_unpack_32len_15bw_0offset<uint32_t>, 0, 0, 60, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_313 = { KAFOR_unpack_32len_15bw_8offset<uint32_t>, 8, 8, 60, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_314 = { KAFOR_unpack_32len_15bw_16offset<uint32_t>, 16, 16, 60, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_315 = { KAFOR_unpack_32len_15bw_24offset<uint32_t>, 24, 24, 60, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_316 = { KAFOR_unpack_32len_16bw_0offset<uint32_t>, 0, 0, 64, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_317 = { KAFOR_unpack_32len_16bw_8offset<uint32_t>, 8, 8, 64, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_318 = { KAFOR_unpack_32len_16bw_16offset<uint32_t>, 16, 16, 64, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_319 = { KAFOR_unpack_32len_16bw_24offset<uint32_t>, 24, 24, 64, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_320 = { KAFOR_unpack_32len_17bw_0offset<uint32_t>, 0, 0, 68, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_321 = { KAFOR_unpack_32len_17bw_8offset<uint32_t>, 8, 8, 68, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_322 = { KAFOR_unpack_32len_17bw_16offset<uint32_t>, 16, 16, 68, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_323 = { KAFOR_unpack_32len_17bw_24offset<uint32_t>, 24, 24, 68, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_324 = { KAFOR_unpack_32len_18bw_0offset<uint32_t>, 0, 0, 72, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_325 = { KAFOR_unpack_32len_18bw_8offset<uint32_t>, 8, 8, 72, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_326 = { KAFOR_unpack_32len_18bw_16offset<uint32_t>, 16, 16, 72, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_327 = { KAFOR_unpack_32len_18bw_24offset<uint32_t>, 24, 24, 72, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_328 = { KAFOR_unpack_32len_19bw_0offset<uint32_t>, 0, 0, 76, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_329 = { KAFOR_unpack_32len_19bw_8offset<uint32_t>, 8, 8, 76, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_330 = { KAFOR_unpack_32len_19bw_16offset<uint32_t>, 16, 16, 76, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_331 = { KAFOR_unpack_32len_19bw_24offset<uint32_t>, 24, 24, 76, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_332 = { KAFOR_unpack_32len_20bw_0offset<uint32_t>, 0, 0, 80, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_333 = { KAFOR_unpack_32len_20bw_8offset<uint32_t>, 8, 8, 80, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_334 = { KAFOR_unpack_32len_20bw_16offset<uint32_t>, 16, 16, 80, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_335 = { KAFOR_unpack_32len_20bw_24offset<uint32_t>, 24, 24, 80, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_336 = { KAFOR_unpack_32len_21bw_0offset<uint32_t>, 0, 0, 84, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_337 = { KAFOR_unpack_32len_21bw_8offset<uint32_t>, 8, 8, 84, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_338 = { KAFOR_unpack_32len_21bw_16offset<uint32_t>, 16, 16, 84, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_339 = { KAFOR_unpack_32len_21bw_24offset<uint32_t>, 24, 24, 84, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_340 = { KAFOR_unpack_32len_22bw_0offset<uint32_t>, 0, 0, 88, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_341 = { KAFOR_unpack_32len_22bw_8offset<uint32_t>, 8, 8, 88, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_342 = { KAFOR_unpack_32len_22bw_16offset<uint32_t>, 16, 16, 88, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_343 = { KAFOR_unpack_32len_22bw_24offset<uint32_t>, 24, 24, 88, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_344 = { KAFOR_unpack_32len_23bw_0offset<uint32_t>, 0, 0, 92, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_345 = { KAFOR_unpack_32len_23bw_8offset<uint32_t>, 8, 8, 92, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_346 = { KAFOR_unpack_32len_23bw_16offset<uint32_t>, 16, 16, 92, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_347 = { KAFOR_unpack_32len_23bw_24offset<uint32_t>, 24, 24, 92, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_348 = { KAFOR_unpack_32len_24bw_0offset<uint32_t>, 0, 0, 96, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_349 = { KAFOR_unpack_32len_24bw_8offset<uint32_t>, 8, 8, 96, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_350 = { KAFOR_unpack_32len_24bw_16offset<uint32_t>, 16, 16, 96, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_351 = { KAFOR_unpack_32len_24bw_24offset<uint32_t>, 24, 24, 96, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_352 = { KAFOR_unpack_32len_25bw_0offset<uint32_t>, 0, 0, 100, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_353 = { KAFOR_unpack_32len_25bw_8offset<uint32_t>, 8, 8, 100, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_354 = { KAFOR_unpack_32len_25bw_16offset<uint32_t>, 16, 16, 100, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_355 = { KAFOR_unpack_32len_25bw_24offset<uint32_t>, 24, 24, 100, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_356 = { KAFOR_unpack_32len_26bw_0offset<uint32_t>, 0, 0, 104, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_357 = { KAFOR_unpack_32len_26bw_8offset<uint32_t>, 8, 8, 104, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_358 = { KAFOR_unpack_32len_26bw_16offset<uint32_t>, 16, 16, 104, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_359 = { KAFOR_unpack_32len_26bw_24offset<uint32_t>, 24, 24, 104, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_360 = { KAFOR_unpack_32len_27bw_0offset<uint32_t>, 0, 0, 108, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_361 = { KAFOR_unpack_32len_27bw_8offset<uint32_t>, 8, 8, 108, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_362 = { KAFOR_unpack_32len_27bw_16offset<uint32_t>, 16, 16, 108, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_363 = { KAFOR_unpack_32len_27bw_24offset<uint32_t>, 24, 24, 108, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_364 = { KAFOR_unpack_32len_28bw_0offset<uint32_t>, 0, 0, 112, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_365 = { KAFOR_unpack_32len_28bw_8offset<uint32_t>, 8, 8, 112, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_366 = { KAFOR_unpack_32len_28bw_16offset<uint32_t>, 16, 16, 112, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_367 = { KAFOR_unpack_32len_28bw_24offset<uint32_t>, 24, 24, 112, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_368 = { KAFOR_unpack_32len_29bw_0offset<uint32_t>, 0, 0, 116, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_369 = { KAFOR_unpack_32len_29bw_8offset<uint32_t>, 8, 8, 116, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_370 = { KAFOR_unpack_32len_29bw_16offset<uint32_t>, 16, 16, 116, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_371 = { KAFOR_unpack_32len_29bw_24offset<uint32_t>, 24, 24, 116, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_372 = { KAFOR_unpack_32len_30bw_0offset<uint32_t>, 0, 0, 120, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_373 = { KAFOR_unpack_32len_30bw_8offset<uint32_t>, 8, 8, 120, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_374 = { KAFOR_unpack_32len_30bw_16offset<uint32_t>, 16, 16, 120, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_375 = { KAFOR_unpack_32len_30bw_24offset<uint32_t>, 24, 24, 120, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_376 = { KAFOR_unpack_32len_31bw_0offset<uint32_t>, 0, 0, 124, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_377 = { KAFOR_unpack_32len_31bw_8offset<uint32_t>, 8, 8, 124, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_378 = { KAFOR_unpack_32len_31bw_16offset<uint32_t>, 16, 16, 124, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_379 = { KAFOR_unpack_32len_31bw_24offset<uint32_t>, 24, 24, 124, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_380 = { KAFOR_unpack_32len_32bw_0offset<uint32_t>, 0, 0, 128, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_381 = { KAFOR_unpack_32len_32bw_8offset<uint32_t>, 8, 8, 128, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_382 = { KAFOR_unpack_32len_32bw_16offset<uint32_t>, 16, 16, 128, 128, };
static KAFORUnpackInfo KAFORUnpackInfo_383 = { KAFOR_unpack_32len_32bw_24offset<uint32_t>, 24, 24, 128, 128, };

static KAFORUnpackInfo KAFORUnpackInfoArr[384] = {
	KAFORUnpackInfo_0, KAFORUnpackInfo_1, KAFORUnpackInfo_2, KAFORUnpackInfo_3,
	KAFORUnpackInfo_4, KAFORUnpackInfo_5, KAFORUnpackInfo_6, KAFORUnpackInfo_7,
	KAFORUnpackInfo_8, KAFORUnpackInfo_9, KAFORUnpackInfo_10, KAFORUnpackInfo_11,
	KAFORUnpackInfo_12, KAFORUnpackInfo_13, KAFORUnpackInfo_14, KAFORUnpackInfo_15,
	KAFORUnpackInfo_16, KAFORUnpackInfo_17, KAFORUnpackInfo_18, KAFORUnpackInfo_19,
	KAFORUnpackInfo_20, KAFORUnpackInfo_21, KAFORUnpackInfo_22, KAFORUnpackInfo_23,
	KAFORUnpackInfo_24, KAFORUnpackInfo_25, KAFORUnpackInfo_26, KAFORUnpackInfo_27,
	KAFORUnpackInfo_28, KAFORUnpackInfo_29, KAFORUnpackInfo_30, KAFORUnpackInfo_31,
	KAFORUnpackInfo_32, KAFORUnpackInfo_33, KAFORUnpackInfo_34, KAFORUnpackInfo_35,
	KAFORUnpackInfo_36, KAFORUnpackInfo_37, KAFORUnpackInfo_38, KAFORUnpackInfo_39,
	KAFORUnpackInfo_40, KAFORUnpackInfo_41, KAFORUnpackInfo_42, KAFORUnpackInfo_43,
	KAFORUnpackInfo_44, KAFORUnpackInfo_45, KAFORUnpackInfo_46, KAFORUnpackInfo_47,
	KAFORUnpackInfo_48, KAFORUnpackInfo_49, KAFORUnpackInfo_50, KAFORUnpackInfo_51,
	KAFORUnpackInfo_52, KAFORUnpackInfo_53, KAFORUnpackInfo_54, KAFORUnpackInfo_55,
	KAFORUnpackInfo_56, KAFORUnpackInfo_57, KAFORUnpackInfo_58, KAFORUnpackInfo_59,
	KAFORUnpackInfo_60, KAFORUnpackInfo_61, KAFORUnpackInfo_62, KAFORUnpackInfo_63,
	KAFORUnpackInfo_64, KAFORUnpackInfo_65, KAFORUnpackInfo_66, KAFORUnpackInfo_67,
	KAFORUnpackInfo_68, KAFORUnpackInfo_69, KAFORUnpackInfo_70, KAFORUnpackInfo_71,
	KAFORUnpackInfo_72, KAFORUnpackInfo_73, KAFORUnpackInfo_74, KAFORUnpackInfo_75,
	KAFORUnpackInfo_76, KAFORUnpackInfo_77, KAFORUnpackInfo_78, KAFORUnpackInfo_79,
	KAFORUnpackInfo_80, KAFORUnpackInfo_81, KAFORUnpackInfo_82, KAFORUnpackInfo_83,
	KAFORUnpackInfo_84, KAFORUnpackInfo_85, KAFORUnpackInfo_86, KAFORUnpackInfo_87,
	KAFORUnpackInfo_88, KAFORUnpackInfo_89, KAFORUnpackInfo_90, KAFORUnpackInfo_91,
	KAFORUnpackInfo_92, KAFORUnpackInfo_93, KAFORUnpackInfo_94, KAFORUnpackInfo_95,
	KAFORUnpackInfo_96, KAFORUnpackInfo_97, KAFORUnpackInfo_98, KAFORUnpackInfo_99,
	KAFORUnpackInfo_100, KAFORUnpackInfo_101, KAFORUnpackInfo_102, KAFORUnpackInfo_103,
	KAFORUnpackInfo_104, KAFORUnpackInfo_105, KAFORUnpackInfo_106, KAFORUnpackInfo_107,
	KAFORUnpackInfo_108, KAFORUnpackInfo_109, KAFORUnpackInfo_110, KAFORUnpackInfo_111,
	KAFORUnpackInfo_112, KAFORUnpackInfo_113, KAFORUnpackInfo_114, KAFORUnpackInfo_115,
	KAFORUnpackInfo_116, KAFORUnpackInfo_117, KAFORUnpackInfo_118, KAFORUnpackInfo_119,
	KAFORUnpackInfo_120, KAFORUnpackInfo_121, KAFORUnpackInfo_122, KAFORUnpackInfo_123,
	KAFORUnpackInfo_124, KAFORUnpackInfo_125, KAFORUnpackInfo_126, KAFORUnpackInfo_127,
	KAFORUnpackInfo_128, KAFORUnpackInfo_129, KAFORUnpackInfo_130, KAFORUnpackInfo_131,
	KAFORUnpackInfo_132, KAFORUnpackInfo_133, KAFORUnpackInfo_134, KAFORUnpackInfo_135,
	KAFORUnpackInfo_136, KAFORUnpackInfo_137, KAFORUnpackInfo_138, KAFORUnpackInfo_139,
	KAFORUnpackInfo_140, KAFORUnpackInfo_141, KAFORUnpackInfo_142, KAFORUnpackInfo_143,
	KAFORUnpackInfo_144, KAFORUnpackInfo_145, KAFORUnpackInfo_146, KAFORUnpackInfo_147,
	KAFORUnpackInfo_148, KAFORUnpackInfo_149, KAFORUnpackInfo_150, KAFORUnpackInfo_151,
	KAFORUnpackInfo_152, KAFORUnpackInfo_153, KAFORUnpackInfo_154, KAFORUnpackInfo_155,
	KAFORUnpackInfo_156, KAFORUnpackInfo_157, KAFORUnpackInfo_158, KAFORUnpackInfo_159,
	KAFORUnpackInfo_160, KAFORUnpackInfo_161, KAFORUnpackInfo_162, KAFORUnpackInfo_163,
	KAFORUnpackInfo_164, KAFORUnpackInfo_165, KAFORUnpackInfo_166, KAFORUnpackInfo_167,
	KAFORUnpackInfo_168, KAFORUnpackInfo_169, KAFORUnpackInfo_170, KAFORUnpackInfo_171,
	KAFORUnpackInfo_172, KAFORUnpackInfo_173, KAFORUnpackInfo_174, KAFORUnpackInfo_175,
	KAFORUnpackInfo_176, KAFORUnpackInfo_177, KAFORUnpackInfo_178, KAFORUnpackInfo_179,
	KAFORUnpackInfo_180, KAFORUnpackInfo_181, KAFORUnpackInfo_182, KAFORUnpackInfo_183,
	KAFORUnpackInfo_184, KAFORUnpackInfo_185, KAFORUnpackInfo_186, KAFORUnpackInfo_187,
	KAFORUnpackInfo_188, KAFORUnpackInfo_189, KAFORUnpackInfo_190, KAFORUnpackInfo_191,
	KAFORUnpackInfo_192, KAFORUnpackInfo_193, KAFORUnpackInfo_194, KAFORUnpackInfo_195,
	KAFORUnpackInfo_196, KAFORUnpackInfo_197, KAFORUnpackInfo_198, KAFORUnpackInfo_199,
	KAFORUnpackInfo_200, KAFORUnpackInfo_201, KAFORUnpackInfo_202, KAFORUnpackInfo_203,
	KAFORUnpackInfo_204, KAFORUnpackInfo_205, KAFORUnpackInfo_206, KAFORUnpackInfo_207,
	KAFORUnpackInfo_208, KAFORUnpackInfo_209, KAFORUnpackInfo_210, KAFORUnpackInfo_211,
	KAFORUnpackInfo_212, KAFORUnpackInfo_213, KAFORUnpackInfo_214, KAFORUnpackInfo_215,
	KAFORUnpackInfo_216, KAFORUnpackInfo_217, KAFORUnpackInfo_218, KAFORUnpackInfo_219,
	KAFORUnpackInfo_220, KAFORUnpackInfo_221, KAFORUnpackInfo_222, KAFORUnpackInfo_223,
	KAFORUnpackInfo_224, KAFORUnpackInfo_225, KAFORUnpackInfo_226, KAFORUnpackInfo_227,
	KAFORUnpackInfo_228, KAFORUnpackInfo_229, KAFORUnpackInfo_230, KAFORUnpackInfo_231,
	KAFORUnpackInfo_232, KAFORUnpackInfo_233, KAFORUnpackInfo_234, KAFORUnpackInfo_235,
	KAFORUnpackInfo_236, KAFORUnpackInfo_237, KAFORUnpackInfo_238, KAFORUnpackInfo_239,
	KAFORUnpackInfo_240, KAFORUnpackInfo_241, KAFORUnpackInfo_242, KAFORUnpackInfo_243,
	KAFORUnpackInfo_244, KAFORUnpackInfo_245, KAFORUnpackInfo_246, KAFORUnpackInfo_247,
	KAFORUnpackInfo_248, KAFORUnpackInfo_249, KAFORUnpackInfo_250, KAFORUnpackInfo_251,
	KAFORUnpackInfo_252, KAFORUnpackInfo_253, KAFORUnpackInfo_254, KAFORUnpackInfo_255,
	KAFORUnpackInfo_256, KAFORUnpackInfo_257, KAFORUnpackInfo_258, KAFORUnpackInfo_259,
	KAFORUnpackInfo_260, KAFORUnpackInfo_261, KAFORUnpackInfo_262, KAFORUnpackInfo_263,
	KAFORUnpackInfo_264, KAFORUnpackInfo_265, KAFORUnpackInfo_266, KAFORUnpackInfo_267,
	KAFORUnpackInfo_268, KAFORUnpackInfo_269, KAFORUnpackInfo_270, KAFORUnpackInfo_271,
	KAFORUnpackInfo_272, KAFORUnpackInfo_273, KAFORUnpackInfo_274, KAFORUnpackInfo_275,
	KAFORUnpackInfo_276, KAFORUnpackInfo_277, KAFORUnpackInfo_278, KAFORUnpackInfo_279,
	KAFORUnpackInfo_280, KAFORUnpackInfo_281, KAFORUnpackInfo_282, KAFORUnpackInfo_283,
	KAFORUnpackInfo_284, KAFORUnpackInfo_285, KAFORUnpackInfo_286, KAFORUnpackInfo_287,
	KAFORUnpackInfo_288, KAFORUnpackInfo_289, KAFORUnpackInfo_290, KAFORUnpackInfo_291,
	KAFORUnpackInfo_292, KAFORUnpackInfo_293, KAFORUnpackInfo_294, KAFORUnpackInfo_295,
	KAFORUnpackInfo_296, KAFORUnpackInfo_297, KAFORUnpackInfo_298, KAFORUnpackInfo_299,
	KAFORUnpackInfo_300, KAFORUnpackInfo_301, KAFORUnpackInfo_302, KAFORUnpackInfo_303,
	KAFORUnpackInfo_304, KAFORUnpackInfo_305, KAFORUnpackInfo_306, KAFORUnpackInfo_307,
	KAFORUnpackInfo_308, KAFORUnpackInfo_309, KAFORUnpackInfo_310, KAFORUnpackInfo_311,
	KAFORUnpackInfo_312, KAFORUnpackInfo_313, KAFORUnpackInfo_314, KAFORUnpackInfo_315,
	KAFORUnpackInfo_316, KAFORUnpackInfo_317, KAFORUnpackInfo_318, KAFORUnpackInfo_319,
	KAFORUnpackInfo_320, KAFORUnpackInfo_321, KAFORUnpackInfo_322, KAFORUnpackInfo_323,
	KAFORUnpackInfo_324, KAFORUnpackInfo_325, KAFORUnpackInfo_326, KAFORUnpackInfo_327,
	KAFORUnpackInfo_328, KAFORUnpackInfo_329, KAFORUnpackInfo_330, KAFORUnpackInfo_331,
	KAFORUnpackInfo_332, KAFORUnpackInfo_333, KAFORUnpackInfo_334, KAFORUnpackInfo_335,
	KAFORUnpackInfo_336, KAFORUnpackInfo_337, KAFORUnpackInfo_338, KAFORUnpackInfo_339,
	KAFORUnpackInfo_340, KAFORUnpackInfo_341, KAFORUnpackInfo_342, KAFORUnpackInfo_343,
	KAFORUnpackInfo_344, KAFORUnpackInfo_345, KAFORUnpackInfo_346, KAFORUnpackInfo_347,
	KAFORUnpackInfo_348, KAFORUnpackInfo_349, KAFORUnpackInfo_350, KAFORUnpackInfo_351,
	KAFORUnpackInfo_352, KAFORUnpackInfo_353, KAFORUnpackInfo_354, KAFORUnpackInfo_355,
	KAFORUnpackInfo_356, KAFORUnpackInfo_357, KAFORUnpackInfo_358, KAFORUnpackInfo_359,
	KAFORUnpackInfo_360, KAFORUnpackInfo_361, KAFORUnpackInfo_362, KAFORUnpackInfo_363,
	KAFORUnpackInfo_364, KAFORUnpackInfo_365, KAFORUnpackInfo_366, KAFORUnpackInfo_367,
	KAFORUnpackInfo_368, KAFORUnpackInfo_369, KAFORUnpackInfo_370, KAFORUnpackInfo_371,
	KAFORUnpackInfo_372, KAFORUnpackInfo_373, KAFORUnpackInfo_374, KAFORUnpackInfo_375,
	KAFORUnpackInfo_376, KAFORUnpackInfo_377, KAFORUnpackInfo_378, KAFORUnpackInfo_379,
	KAFORUnpackInfo_380, KAFORUnpackInfo_381, KAFORUnpackInfo_382, KAFORUnpackInfo_383,
};

}
}

#endif /* KAFOR_UNPACK_HPP_ */

/*
 *
#include <iostream>
#include <sstream>
#include <string>
#include <stdint.h>

using namespace std;

void GenCode(int num, int base, ostringstream &oss, ostringstream &infoOss) {
	//string IDX_STR = "i";

	for (int i=1; i<=32; i++) {
		for (int k=0; k<4; k++) {	//ori byte offset
			oss << "template<typename T>" << endl;
			oss << "void KAFOR_unpack_" << num << "len_" << i << "bw_" << (k*8) << "offset(T * des, const uint32_t *src) {" << endl;
			int infoIdx = (base << 7) + ((i - 1) << 2) + k;
			infoOss << "static KAFORUnpackInfo KAFORUnpackInfo_" << infoIdx << " = { " << "KAFOR_unpack_"
					<< num << "len_" << i << "bw_" << (k*8) << "offset<uint32_t>, ";

			int offsetInWord = k << 3;
			int curWordIdx = 0;
			int j = 0;
			uint32_t mask  = (1LL << i) - 1;
			while (j < num) {
				oss << "\tfor (int j=0; j<4; ++j) {" << endl;

				ostringstream tmp1;
				tmp1 << "\t\t" << "des[";
				if (j>0)
					tmp1 << j*4 << "+";
				tmp1 << "j] = (src[" ;
				if (curWordIdx > 0)
					tmp1 << curWordIdx*4 << "+";
				tmp1 << "j]";
				if (offsetInWord > 0)
					tmp1 << " >> " << offsetInWord;
				tmp1 << ")";
				if (i < 32)
					tmp1 << " & " << mask;
				tmp1 << ";" << endl;
				oss << tmp1.str();

				if (offsetInWord + i > 32) {
					ostringstream tmp2;
					tmp2 << "\t\t" << "des[";
					if (j>0)
						tmp2 << j*4 << "+";
					tmp2 << "j] |= (src[" << (curWordIdx + 1)*4 << "+j]";
					tmp2 << " << " << 32 - offsetInWord;
					tmp2 << ")";
					if (i < 32)
						tmp2 << " & " << mask;
					tmp2 << ";" << endl;
                        		oss << tmp2.str();
				}

				oss << "\t}" << endl;
				curWordIdx += (offsetInWord + i) / 32;
				offsetInWord = (offsetInWord + i) % 32;
				j++;
			}
			oss << "}" << endl;
			oss << endl;
			infoOss << (k << 3) << ", "	//begOffset
				<< (offsetInWord) << ", "	//newOffset
				<< (curWordIdx << 2) << ", "	//wordskipped
				<< (num << 2) << ", "		//integer decoded
				<< "};" << endl;
		}
	}
}

string printInfoArr(int arrNum) {
	ostringstream oss;
	oss << "static KAFORUnpackInfo KAFORUnpackInfoArr[" << arrNum << "] = {" << endl;
	for (int i=0; i<arrNum; ++i) {
		if (i % 4 == 0)
			oss << "\t";
		oss << "KAFORUnpackInfo_" << i << ", ";
		if (i % 4 == 3)
			oss << endl;
	}
	oss << "};" << endl;
	return oss.str();
}


int main() {
	ostringstream oss, infoOss;
	GenCode(8, 0, oss, infoOss);
	GenCode(16, 1, oss, infoOss);
	GenCode(32, 2, oss, infoOss);

	cout << oss.str();
	cout << endl;
	cout << infoOss.str();
	cout << endl;
	cout << printInfoArr(3 * 32 * 4);

	return 0;
}
 *
 */

