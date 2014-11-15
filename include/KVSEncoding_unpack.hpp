/*
 * KVSEncoding_unpack.hpp
 *
 *  Created on: 2013-11-18
 *      Author: zxd
 */

#ifndef KVSEncoding_UNPACK_HPP_
#define KVSEncoding_UNPACK_HPP_

namespace paradise {
namespace index {

struct KVSEUnpackInfo {
	void (*m_subFunc)(uint32_t *des, const uint32_t *src);
	uint8_t m_offset;
	uint8_t m_newOffset;
	uint16_t m_wordSkipped;
	uint16_t m_intDecoded;
};

template<typename T>
void KVSE_unpack_1len_0bw_0offset(T * des, const uint32_t *src) {
	ZMEMCPY128(des);
}

template<typename T>
void KVSE_unpack_1len_0bw_8offset(T * des, const uint32_t *src) {
	ZMEMCPY128(des);
}

template<typename T>
void KVSE_unpack_1len_0bw_16offset(T * des, const uint32_t *src) {
	ZMEMCPY128(des);
}

template<typename T>
void KVSE_unpack_1len_0bw_24offset(T * des, const uint32_t *src) {
	ZMEMCPY128(des);
}

template<typename T>
void KVSE_unpack_1len_1bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x1;
	}
}

template<typename T>
void KVSE_unpack_1len_1bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x1;
	}
}

template<typename T>
void KVSE_unpack_1len_1bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x1;
	}
}

template<typename T>
void KVSE_unpack_1len_1bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x1;
	}
}

template<typename T>
void KVSE_unpack_1len_2bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x3;
	}
}

template<typename T>
void KVSE_unpack_1len_2bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x3;
	}
}

template<typename T>
void KVSE_unpack_1len_2bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x3;
	}
}

template<typename T>
void KVSE_unpack_1len_2bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x3;
	}
}

template<typename T>
void KVSE_unpack_1len_3bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x7;
	}
}

template<typename T>
void KVSE_unpack_1len_3bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x7;
	}
}

template<typename T>
void KVSE_unpack_1len_3bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x7;
	}
}

template<typename T>
void KVSE_unpack_1len_3bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x7;
	}
}

template<typename T>
void KVSE_unpack_1len_4bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0xf;
	}
}

template<typename T>
void KVSE_unpack_1len_4bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0xf;
	}
}

template<typename T>
void KVSE_unpack_1len_4bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0xf;
	}
}

template<typename T>
void KVSE_unpack_1len_4bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0xf;
	}
}

template<typename T>
void KVSE_unpack_1len_5bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x1f;
	}
}

template<typename T>
void KVSE_unpack_1len_5bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x1f;
	}
}

template<typename T>
void KVSE_unpack_1len_5bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x1f;
	}
}

template<typename T>
void KVSE_unpack_1len_5bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x1f;
	}
}

template<typename T>
void KVSE_unpack_1len_6bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x3f;
	}
}

template<typename T>
void KVSE_unpack_1len_6bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x3f;
	}
}

template<typename T>
void KVSE_unpack_1len_6bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x3f;
	}
}

template<typename T>
void KVSE_unpack_1len_6bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x3f;
	}
}

template<typename T>
void KVSE_unpack_1len_7bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x7f;
	}
}

template<typename T>
void KVSE_unpack_1len_7bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x7f;
	}
}

template<typename T>
void KVSE_unpack_1len_7bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x7f;
	}
}

template<typename T>
void KVSE_unpack_1len_7bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x7f;
	}
}

template<typename T>
void KVSE_unpack_1len_8bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0xff;
	}
}

template<typename T>
void KVSE_unpack_1len_8bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0xff;
	}
}

template<typename T>
void KVSE_unpack_1len_8bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0xff;
	}
}

template<typename T>
void KVSE_unpack_1len_8bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0xff;
	}
}

template<typename T>
void KVSE_unpack_1len_9bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x1ff;
	}
}

template<typename T>
void KVSE_unpack_1len_9bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x1ff;
	}
}

template<typename T>
void KVSE_unpack_1len_9bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x1ff;
	}
}

template<typename T>
void KVSE_unpack_1len_9bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x1ff;
		des[j] |= (src[4+j] << 8) & 0x1ff;
	}
}

template<typename T>
void KVSE_unpack_1len_10bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x3ff;
	}
}

template<typename T>
void KVSE_unpack_1len_10bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x3ff;
	}
}

template<typename T>
void KVSE_unpack_1len_10bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x3ff;
	}
}

template<typename T>
void KVSE_unpack_1len_10bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x3ff;
		des[j] |= (src[4+j] << 8) & 0x3ff;
	}
}

template<typename T>
void KVSE_unpack_1len_11bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x7ff;
	}
}

template<typename T>
void KVSE_unpack_1len_11bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x7ff;
	}
}

template<typename T>
void KVSE_unpack_1len_11bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x7ff;
	}
}

template<typename T>
void KVSE_unpack_1len_11bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x7ff;
		des[j] |= (src[4+j] << 8) & 0x7ff;
	}
}

template<typename T>
void KVSE_unpack_1len_12bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0xfff;
	}
}

template<typename T>
void KVSE_unpack_1len_12bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0xfff;
	}
}

template<typename T>
void KVSE_unpack_1len_12bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0xfff;
	}
}

template<typename T>
void KVSE_unpack_1len_12bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0xfff;
		des[j] |= (src[4+j] << 8) & 0xfff;
	}
}

template<typename T>
void KVSE_unpack_1len_16bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0xffff;
	}
}

template<typename T>
void KVSE_unpack_1len_16bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0xffff;
	}
}

template<typename T>
void KVSE_unpack_1len_16bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0xffff;
	}
}

template<typename T>
void KVSE_unpack_1len_16bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0xffff;
		des[j] |= (src[4+j] << 8) & 0xffff;
	}
}

template<typename T>
void KVSE_unpack_1len_20bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0xfffff;
	}
}

template<typename T>
void KVSE_unpack_1len_20bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0xfffff;
	}
}

template<typename T>
void KVSE_unpack_1len_20bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0xfffff;
		des[j] |= (src[4+j] << 16) & 0xfffff;
	}
}

template<typename T>
void KVSE_unpack_1len_20bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0xfffff;
		des[j] |= (src[4+j] << 8) & 0xfffff;
	}
}

template<typename T>
void KVSE_unpack_1len_32bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]);
	}
}

template<typename T>
void KVSE_unpack_1len_32bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8);
		des[j] |= (src[4+j] << 24);
	}
}

template<typename T>
void KVSE_unpack_1len_32bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16);
		des[j] |= (src[4+j] << 16);
	}
}

template<typename T>
void KVSE_unpack_1len_32bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24);
		des[j] |= (src[4+j] << 8);
	}
}

template<typename T>
void KVSE_unpack_2len_0bw_0offset(T * des, const uint32_t *src) {
	ZMEMCPY128(des);
	ZMEMCPY128(des + 4);
}

template<typename T>
void KVSE_unpack_2len_0bw_8offset(T * des, const uint32_t *src) {
	ZMEMCPY128(des);
	ZMEMCPY128(des + 4);
}

template<typename T>
void KVSE_unpack_2len_0bw_16offset(T * des, const uint32_t *src) {
	ZMEMCPY128(des);
	ZMEMCPY128(des + 4);
}

template<typename T>
void KVSE_unpack_2len_0bw_24offset(T * des, const uint32_t *src) {
	ZMEMCPY128(des);
	ZMEMCPY128(des + 4);
}

template<typename T>
void KVSE_unpack_2len_1bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 1) & 0x1;
	}
}

template<typename T>
void KVSE_unpack_2len_1bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 9) & 0x1;
	}
}

template<typename T>
void KVSE_unpack_2len_1bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 17) & 0x1;
	}
}

template<typename T>
void KVSE_unpack_2len_1bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 25) & 0x1;
	}
}

template<typename T>
void KVSE_unpack_2len_2bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 2) & 0x3;
	}
}

template<typename T>
void KVSE_unpack_2len_2bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 10) & 0x3;
	}
}

template<typename T>
void KVSE_unpack_2len_2bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 18) & 0x3;
	}
}

template<typename T>
void KVSE_unpack_2len_2bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 26) & 0x3;
	}
}

template<typename T>
void KVSE_unpack_2len_3bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 3) & 0x7;
	}
}

template<typename T>
void KVSE_unpack_2len_3bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 11) & 0x7;
	}
}

template<typename T>
void KVSE_unpack_2len_3bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 19) & 0x7;
	}
}

template<typename T>
void KVSE_unpack_2len_3bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 27) & 0x7;
	}
}

template<typename T>
void KVSE_unpack_2len_4bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 4) & 0xf;
	}
}

template<typename T>
void KVSE_unpack_2len_4bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 12) & 0xf;
	}
}

template<typename T>
void KVSE_unpack_2len_4bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 20) & 0xf;
	}
}

template<typename T>
void KVSE_unpack_2len_4bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 28) & 0xf;
	}
}

template<typename T>
void KVSE_unpack_2len_5bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 5) & 0x1f;
	}
}

template<typename T>
void KVSE_unpack_2len_5bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 13) & 0x1f;
	}
}

template<typename T>
void KVSE_unpack_2len_5bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 21) & 0x1f;
	}
}

template<typename T>
void KVSE_unpack_2len_5bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 29) & 0x1f;
		des[4+j] |= (src[4+j] << 3) & 0x1f;
	}
}

template<typename T>
void KVSE_unpack_2len_6bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 6) & 0x3f;
	}
}

template<typename T>
void KVSE_unpack_2len_6bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 14) & 0x3f;
	}
}

template<typename T>
void KVSE_unpack_2len_6bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 22) & 0x3f;
	}
}

template<typename T>
void KVSE_unpack_2len_6bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 30) & 0x3f;
		des[4+j] |= (src[4+j] << 2) & 0x3f;
	}
}

template<typename T>
void KVSE_unpack_2len_7bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 7) & 0x7f;
	}
}

template<typename T>
void KVSE_unpack_2len_7bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 15) & 0x7f;
	}
}

template<typename T>
void KVSE_unpack_2len_7bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 23) & 0x7f;
	}
}

template<typename T>
void KVSE_unpack_2len_7bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 31) & 0x7f;
		des[4+j] |= (src[4+j] << 1) & 0x7f;
	}
}

template<typename T>
void KVSE_unpack_2len_8bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 8) & 0xff;
	}
}

template<typename T>
void KVSE_unpack_2len_8bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 16) & 0xff;
	}
}

template<typename T>
void KVSE_unpack_2len_8bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 24) & 0xff;
	}
}

template<typename T>
void KVSE_unpack_2len_8bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j]) & 0xff;
	}
}

template<typename T>
void KVSE_unpack_2len_9bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 9) & 0x1ff;
	}
}

template<typename T>
void KVSE_unpack_2len_9bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 17) & 0x1ff;
	}
}

template<typename T>
void KVSE_unpack_2len_9bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 25) & 0x1ff;
		des[4+j] |= (src[4+j] << 7) & 0x1ff;
	}
}

template<typename T>
void KVSE_unpack_2len_9bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x1ff;
		des[j] |= (src[4+j] << 8) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 1) & 0x1ff;
	}
}

template<typename T>
void KVSE_unpack_2len_10bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 10) & 0x3ff;
	}
}

template<typename T>
void KVSE_unpack_2len_10bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 18) & 0x3ff;
	}
}

template<typename T>
void KVSE_unpack_2len_10bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 26) & 0x3ff;
		des[4+j] |= (src[4+j] << 6) & 0x3ff;
	}
}

template<typename T>
void KVSE_unpack_2len_10bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x3ff;
		des[j] |= (src[4+j] << 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 2) & 0x3ff;
	}
}

template<typename T>
void KVSE_unpack_2len_11bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 11) & 0x7ff;
	}
}

template<typename T>
void KVSE_unpack_2len_11bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 19) & 0x7ff;
	}
}

template<typename T>
void KVSE_unpack_2len_11bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 27) & 0x7ff;
		des[4+j] |= (src[4+j] << 5) & 0x7ff;
	}
}

template<typename T>
void KVSE_unpack_2len_11bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x7ff;
		des[j] |= (src[4+j] << 8) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 3) & 0x7ff;
	}
}

template<typename T>
void KVSE_unpack_2len_12bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 12) & 0xfff;
	}
}

template<typename T>
void KVSE_unpack_2len_12bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 20) & 0xfff;
	}
}

template<typename T>
void KVSE_unpack_2len_12bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 28) & 0xfff;
		des[4+j] |= (src[4+j] << 4) & 0xfff;
	}
}

template<typename T>
void KVSE_unpack_2len_12bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0xfff;
		des[j] |= (src[4+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 4) & 0xfff;
	}
}

template<typename T>
void KVSE_unpack_2len_16bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 16) & 0xffff;
	}
}

template<typename T>
void KVSE_unpack_2len_16bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 24) & 0xffff;
		des[4+j] |= (src[4+j] << 8) & 0xffff;
	}
}

template<typename T>
void KVSE_unpack_2len_16bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j]) & 0xffff;
	}
}

template<typename T>
void KVSE_unpack_2len_16bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0xffff;
		des[j] |= (src[4+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 8) & 0xffff;
	}
}

template<typename T>
void KVSE_unpack_2len_20bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 20) & 0xfffff;
		des[4+j] |= (src[4+j] << 12) & 0xfffff;
	}
}

template<typename T>
void KVSE_unpack_2len_20bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 28) & 0xfffff;
		des[4+j] |= (src[4+j] << 4) & 0xfffff;
	}
}

template<typename T>
void KVSE_unpack_2len_20bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0xfffff;
		des[j] |= (src[4+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 4) & 0xfffff;
	}
}

template<typename T>
void KVSE_unpack_2len_20bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0xfffff;
		des[j] |= (src[4+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 12) & 0xfffff;
	}
}

template<typename T>
void KVSE_unpack_2len_32bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j]);
	}
}

template<typename T>
void KVSE_unpack_2len_32bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8);
		des[j] |= (src[4+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 8);
		des[4+j] |= (src[8+j] << 24);
	}
}

template<typename T>
void KVSE_unpack_2len_32bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16);
		des[j] |= (src[4+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 16);
		des[4+j] |= (src[8+j] << 16);
	}
}

template<typename T>
void KVSE_unpack_2len_32bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24);
		des[j] |= (src[4+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 24);
		des[4+j] |= (src[8+j] << 8);
	}
}

template<typename T>
void KVSE_unpack_4len_0bw_0offset(T * des, const uint32_t *src) {
	ZMEMCPY128(des);
	ZMEMCPY128(des + 4);
	ZMEMCPY128(des + 8);
	ZMEMCPY128(des + 12);
}

template<typename T>
void KVSE_unpack_4len_0bw_8offset(T * des, const uint32_t *src) {
	ZMEMCPY128(des);
	ZMEMCPY128(des + 4);
	ZMEMCPY128(des + 8);
	ZMEMCPY128(des + 12);
}

template<typename T>
void KVSE_unpack_4len_0bw_16offset(T * des, const uint32_t *src) {
	ZMEMCPY128(des);
	ZMEMCPY128(des + 4);
	ZMEMCPY128(des + 8);
	ZMEMCPY128(des + 12);
}

template<typename T>
void KVSE_unpack_4len_0bw_24offset(T * des, const uint32_t *src) {
	ZMEMCPY128(des);
	ZMEMCPY128(des + 4);
	ZMEMCPY128(des + 8);
	ZMEMCPY128(des + 12);
}

template<typename T>
void KVSE_unpack_4len_1bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 1) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 2) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 3) & 0x1;
	}
}

template<typename T>
void KVSE_unpack_4len_1bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 9) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 10) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 11) & 0x1;
	}
}

template<typename T>
void KVSE_unpack_4len_1bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 17) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 18) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 19) & 0x1;
	}
}

template<typename T>
void KVSE_unpack_4len_1bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 25) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 26) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 27) & 0x1;
	}
}

template<typename T>
void KVSE_unpack_4len_2bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 2) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 4) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 6) & 0x3;
	}
}

template<typename T>
void KVSE_unpack_4len_2bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 10) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 12) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 14) & 0x3;
	}
}

template<typename T>
void KVSE_unpack_4len_2bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 18) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 20) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 22) & 0x3;
	}
}

template<typename T>
void KVSE_unpack_4len_2bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 26) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 28) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 30) & 0x3;
	}
}

template<typename T>
void KVSE_unpack_4len_3bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 3) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 6) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 9) & 0x7;
	}
}

template<typename T>
void KVSE_unpack_4len_3bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 11) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 14) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 17) & 0x7;
	}
}

template<typename T>
void KVSE_unpack_4len_3bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 19) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 22) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 25) & 0x7;
	}
}

template<typename T>
void KVSE_unpack_4len_3bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 27) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 30) & 0x7;
		des[8+j] |= (src[4+j] << 2) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 1) & 0x7;
	}
}

template<typename T>
void KVSE_unpack_4len_4bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 12) & 0xf;
	}
}

template<typename T>
void KVSE_unpack_4len_4bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 20) & 0xf;
	}
}

template<typename T>
void KVSE_unpack_4len_4bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 28) & 0xf;
	}
}

template<typename T>
void KVSE_unpack_4len_4bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 4) & 0xf;
	}
}

template<typename T>
void KVSE_unpack_4len_5bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 5) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 10) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 15) & 0x1f;
	}
}

template<typename T>
void KVSE_unpack_4len_5bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 13) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 18) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 23) & 0x1f;
	}
}

template<typename T>
void KVSE_unpack_4len_5bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 21) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 26) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 31) & 0x1f;
		des[12+j] |= (src[4+j] << 1) & 0x1f;
	}
}

template<typename T>
void KVSE_unpack_4len_5bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 29) & 0x1f;
		des[4+j] |= (src[4+j] << 3) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 2) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 7) & 0x1f;
	}
}

template<typename T>
void KVSE_unpack_4len_6bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 6) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 12) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 18) & 0x3f;
	}
}

template<typename T>
void KVSE_unpack_4len_6bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 14) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 20) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 26) & 0x3f;
	}
}

template<typename T>
void KVSE_unpack_4len_6bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 22) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 28) & 0x3f;
		des[8+j] |= (src[4+j] << 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 2) & 0x3f;
	}
}

template<typename T>
void KVSE_unpack_4len_6bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 30) & 0x3f;
		des[4+j] |= (src[4+j] << 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 10) & 0x3f;
	}
}

template<typename T>
void KVSE_unpack_4len_7bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 7) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 14) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 21) & 0x7f;
	}
}

template<typename T>
void KVSE_unpack_4len_7bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 15) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 22) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 29) & 0x7f;
		des[12+j] |= (src[4+j] << 3) & 0x7f;
	}
}

template<typename T>
void KVSE_unpack_4len_7bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 23) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 30) & 0x7f;
		des[8+j] |= (src[4+j] << 2) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 5) & 0x7f;
	}
}

template<typename T>
void KVSE_unpack_4len_7bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 31) & 0x7f;
		des[4+j] |= (src[4+j] << 1) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 6) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 13) & 0x7f;
	}
}

template<typename T>
void KVSE_unpack_4len_8bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 24) & 0xff;
	}
}

template<typename T>
void KVSE_unpack_4len_8bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j]) & 0xff;
	}
}

template<typename T>
void KVSE_unpack_4len_8bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 8) & 0xff;
	}
}

template<typename T>
void KVSE_unpack_4len_8bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 16) & 0xff;
	}
}

template<typename T>
void KVSE_unpack_4len_9bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 9) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 18) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 27) & 0x1ff;
		des[12+j] |= (src[4+j] << 5) & 0x1ff;
	}
}

template<typename T>
void KVSE_unpack_4len_9bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 17) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 26) & 0x1ff;
		des[8+j] |= (src[4+j] << 6) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 3) & 0x1ff;
	}
}

template<typename T>
void KVSE_unpack_4len_9bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 25) & 0x1ff;
		des[4+j] |= (src[4+j] << 7) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 2) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 11) & 0x1ff;
	}
}

template<typename T>
void KVSE_unpack_4len_9bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x1ff;
		des[j] |= (src[4+j] << 8) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 1) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 10) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 19) & 0x1ff;
	}
}

template<typename T>
void KVSE_unpack_4len_10bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 10) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 20) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 30) & 0x3ff;
		des[12+j] |= (src[4+j] << 2) & 0x3ff;
	}
}

template<typename T>
void KVSE_unpack_4len_10bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 18) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 28) & 0x3ff;
		des[8+j] |= (src[4+j] << 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 6) & 0x3ff;
	}
}

template<typename T>
void KVSE_unpack_4len_10bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 26) & 0x3ff;
		des[4+j] |= (src[4+j] << 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 14) & 0x3ff;
	}
}

template<typename T>
void KVSE_unpack_4len_10bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x3ff;
		des[j] |= (src[4+j] << 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 12) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 22) & 0x3ff;
	}
}

template<typename T>
void KVSE_unpack_4len_11bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 11) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 22) & 0x7ff;
		des[8+j] |= (src[4+j] << 10) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 1) & 0x7ff;
	}
}

template<typename T>
void KVSE_unpack_4len_11bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 19) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 30) & 0x7ff;
		des[8+j] |= (src[4+j] << 2) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 9) & 0x7ff;
	}
}

template<typename T>
void KVSE_unpack_4len_11bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 27) & 0x7ff;
		des[4+j] |= (src[4+j] << 5) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 6) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 17) & 0x7ff;
	}
}

template<typename T>
void KVSE_unpack_4len_11bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x7ff;
		des[j] |= (src[4+j] << 8) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 3) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 14) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 25) & 0x7ff;
		des[12+j] |= (src[8+j] << 7) & 0x7ff;
	}
}

template<typename T>
void KVSE_unpack_4len_12bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 24) & 0xfff;
		des[8+j] |= (src[4+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 4) & 0xfff;
	}
}

template<typename T>
void KVSE_unpack_4len_12bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 12) & 0xfff;
	}
}

template<typename T>
void KVSE_unpack_4len_12bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 28) & 0xfff;
		des[4+j] |= (src[4+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 20) & 0xfff;
	}
}

template<typename T>
void KVSE_unpack_4len_12bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0xfff;
		des[j] |= (src[4+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 28) & 0xfff;
		des[12+j] |= (src[8+j] << 4) & 0xfff;
	}
}

template<typename T>
void KVSE_unpack_4len_16bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 16) & 0xffff;
	}
}

template<typename T>
void KVSE_unpack_4len_16bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 24) & 0xffff;
		des[4+j] |= (src[4+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 24) & 0xffff;
		des[12+j] |= (src[8+j] << 8) & 0xffff;
	}
}

template<typename T>
void KVSE_unpack_4len_16bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j]) & 0xffff;
	}
}

template<typename T>
void KVSE_unpack_4len_16bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0xffff;
		des[j] |= (src[4+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 24) & 0xffff;
		des[8+j] |= (src[8+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 8) & 0xffff;
	}
}

template<typename T>
void KVSE_unpack_4len_20bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 20) & 0xfffff;
		des[4+j] |= (src[4+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 28) & 0xfffff;
		des[12+j] |= (src[8+j] << 4) & 0xfffff;
	}
}

template<typename T>
void KVSE_unpack_4len_20bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 28) & 0xfffff;
		des[4+j] |= (src[4+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 16) & 0xfffff;
		des[8+j] |= (src[8+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 4) & 0xfffff;
	}
}

template<typename T>
void KVSE_unpack_4len_20bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0xfffff;
		des[j] |= (src[4+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 24) & 0xfffff;
		des[8+j] |= (src[8+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 12) & 0xfffff;
	}
}

template<typename T>
void KVSE_unpack_4len_20bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0xfffff;
		des[j] |= (src[4+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 20) & 0xfffff;
		des[12+j] |= (src[12+j] << 12) & 0xfffff;
	}
}

template<typename T>
void KVSE_unpack_4len_32bw_0offset(T * des, const uint32_t *src) {
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
}

template<typename T>
void KVSE_unpack_4len_32bw_8offset(T * des, const uint32_t *src) {
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
}

template<typename T>
void KVSE_unpack_4len_32bw_16offset(T * des, const uint32_t *src) {
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
}

template<typename T>
void KVSE_unpack_4len_32bw_24offset(T * des, const uint32_t *src) {
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
}

template<typename T>
void KVSE_unpack_8len_0bw_0offset(T * des, const uint32_t *src) {
	ZMEMCPY128(des);
	ZMEMCPY128(des + 4);
	ZMEMCPY128(des + 8);
	ZMEMCPY128(des + 12);
	ZMEMCPY128(des + 16);
	ZMEMCPY128(des + 20);
	ZMEMCPY128(des + 24);
	ZMEMCPY128(des + 28);
}

template<typename T>
void KVSE_unpack_8len_0bw_8offset(T * des, const uint32_t *src) {
	ZMEMCPY128(des);
	ZMEMCPY128(des + 4);
	ZMEMCPY128(des + 8);
	ZMEMCPY128(des + 12);
	ZMEMCPY128(des + 16);
	ZMEMCPY128(des + 20);
	ZMEMCPY128(des + 24);
	ZMEMCPY128(des + 28);
}

template<typename T>
void KVSE_unpack_8len_0bw_16offset(T * des, const uint32_t *src) {
	ZMEMCPY128(des);
	ZMEMCPY128(des + 4);
	ZMEMCPY128(des + 8);
	ZMEMCPY128(des + 12);
	ZMEMCPY128(des + 16);
	ZMEMCPY128(des + 20);
	ZMEMCPY128(des + 24);
	ZMEMCPY128(des + 28);
}

template<typename T>
void KVSE_unpack_8len_0bw_24offset(T * des, const uint32_t *src) {
	ZMEMCPY128(des);
	ZMEMCPY128(des + 4);
	ZMEMCPY128(des + 8);
	ZMEMCPY128(des + 12);
	ZMEMCPY128(des + 16);
	ZMEMCPY128(des + 20);
	ZMEMCPY128(des + 24);
	ZMEMCPY128(des + 28);
}

template<typename T>
void KVSE_unpack_8len_1bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 1) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 2) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 3) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 4) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 5) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 6) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 7) & 0x1;
	}
}

template<typename T>
void KVSE_unpack_8len_1bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 9) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 10) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 11) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 12) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 13) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 14) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 15) & 0x1;
	}
}

template<typename T>
void KVSE_unpack_8len_1bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 17) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 18) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 19) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 20) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 21) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 22) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 23) & 0x1;
	}
}

template<typename T>
void KVSE_unpack_8len_1bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 25) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 26) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 27) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 28) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 29) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 30) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 31) & 0x1;
	}
}

template<typename T>
void KVSE_unpack_8len_2bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 2) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 4) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 6) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 8) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 10) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 12) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 14) & 0x3;
	}
}

template<typename T>
void KVSE_unpack_8len_2bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 10) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 12) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 14) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 16) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 18) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 20) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 22) & 0x3;
	}
}

template<typename T>
void KVSE_unpack_8len_2bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 18) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 20) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 22) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 24) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 26) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 28) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 30) & 0x3;
	}
}

template<typename T>
void KVSE_unpack_8len_2bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 26) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 28) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 30) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j]) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 2) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 4) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 6) & 0x3;
	}
}

template<typename T>
void KVSE_unpack_8len_3bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 3) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 6) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 9) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 12) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 15) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 18) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 21) & 0x7;
	}
}

template<typename T>
void KVSE_unpack_8len_3bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 11) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 14) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 17) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 20) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 23) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 26) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 29) & 0x7;
	}
}

template<typename T>
void KVSE_unpack_8len_3bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 19) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 22) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 25) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 28) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 31) & 0x7;
		des[20+j] |= (src[4+j] << 1) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 2) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 5) & 0x7;
	}
}

template<typename T>
void KVSE_unpack_8len_3bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 27) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 30) & 0x7;
		des[8+j] |= (src[4+j] << 2) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 1) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 4) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 7) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 10) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 13) & 0x7;
	}
}

template<typename T>
void KVSE_unpack_8len_4bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 28) & 0xf;
	}
}

template<typename T>
void KVSE_unpack_8len_4bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 4) & 0xf;
	}
}

template<typename T>
void KVSE_unpack_8len_4bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 12) & 0xf;
	}
}

template<typename T>
void KVSE_unpack_8len_4bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 20) & 0xf;
	}
}

template<typename T>
void KVSE_unpack_8len_5bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 5) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 10) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 15) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 20) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 25) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 30) & 0x1f;
		des[24+j] |= (src[4+j] << 2) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 3) & 0x1f;
	}
}

template<typename T>
void KVSE_unpack_8len_5bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 13) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 18) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 23) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 28) & 0x1f;
		des[16+j] |= (src[4+j] << 4) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 1) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 6) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 11) & 0x1f;
	}
}

template<typename T>
void KVSE_unpack_8len_5bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 21) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 26) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 31) & 0x1f;
		des[12+j] |= (src[4+j] << 1) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 4) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 9) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 14) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 19) & 0x1f;
	}
}

template<typename T>
void KVSE_unpack_8len_5bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 29) & 0x1f;
		des[4+j] |= (src[4+j] << 3) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 2) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 7) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 12) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 17) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 22) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 27) & 0x1f;
	}
}

template<typename T>
void KVSE_unpack_8len_6bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 6) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 12) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 18) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 24) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 30) & 0x3f;
		des[20+j] |= (src[4+j] << 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 10) & 0x3f;
	}
}

template<typename T>
void KVSE_unpack_8len_6bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 14) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 20) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 26) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j]) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 6) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 12) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 18) & 0x3f;
	}
}

template<typename T>
void KVSE_unpack_8len_6bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 22) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 28) & 0x3f;
		des[8+j] |= (src[4+j] << 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 8) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 14) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 20) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 26) & 0x3f;
	}
}

template<typename T>
void KVSE_unpack_8len_6bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 30) & 0x3f;
		des[4+j] |= (src[4+j] << 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 10) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 16) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 22) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 28) & 0x3f;
		des[24+j] |= (src[8+j] << 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 2) & 0x3f;
	}
}

template<typename T>
void KVSE_unpack_8len_7bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 7) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 14) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 21) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 28) & 0x7f;
		des[16+j] |= (src[4+j] << 4) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 3) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 10) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 17) & 0x7f;
	}
}

template<typename T>
void KVSE_unpack_8len_7bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 15) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 22) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 29) & 0x7f;
		des[12+j] |= (src[4+j] << 3) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 4) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 11) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 18) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 25) & 0x7f;
	}
}

template<typename T>
void KVSE_unpack_8len_7bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 23) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 30) & 0x7f;
		des[8+j] |= (src[4+j] << 2) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 5) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 12) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 19) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 26) & 0x7f;
		des[24+j] |= (src[8+j] << 6) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 1) & 0x7f;
	}
}

template<typename T>
void KVSE_unpack_8len_7bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 31) & 0x7f;
		des[4+j] |= (src[4+j] << 1) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 6) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 13) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 20) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 27) & 0x7f;
		des[20+j] |= (src[8+j] << 5) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 2) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 9) & 0x7f;
	}
}

template<typename T>
void KVSE_unpack_8len_8bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 24) & 0xff;
	}
}

template<typename T>
void KVSE_unpack_8len_8bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j]) & 0xff;
	}
}

template<typename T>
void KVSE_unpack_8len_8bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 8) & 0xff;
	}
}

template<typename T>
void KVSE_unpack_8len_8bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 16) & 0xff;
	}
}

template<typename T>
void KVSE_unpack_8len_9bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 9) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 18) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 27) & 0x1ff;
		des[12+j] |= (src[4+j] << 5) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 4) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 13) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 22) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 31) & 0x1ff;
		des[28+j] |= (src[8+j] << 1) & 0x1ff;
	}
}

template<typename T>
void KVSE_unpack_8len_9bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 17) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 26) & 0x1ff;
		des[8+j] |= (src[4+j] << 6) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 3) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 12) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 21) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 30) & 0x1ff;
		des[24+j] |= (src[8+j] << 2) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 7) & 0x1ff;
	}
}

template<typename T>
void KVSE_unpack_8len_9bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 25) & 0x1ff;
		des[4+j] |= (src[4+j] << 7) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 2) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 11) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 20) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 29) & 0x1ff;
		des[20+j] |= (src[8+j] << 3) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 6) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 15) & 0x1ff;
	}
}

template<typename T>
void KVSE_unpack_8len_9bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x1ff;
		des[j] |= (src[4+j] << 8) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 1) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 10) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 19) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 28) & 0x1ff;
		des[16+j] |= (src[8+j] << 4) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 5) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 14) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 23) & 0x1ff;
	}
}

template<typename T>
void KVSE_unpack_8len_10bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 10) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 20) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 30) & 0x3ff;
		des[12+j] |= (src[4+j] << 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 18) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 28) & 0x3ff;
		des[24+j] |= (src[8+j] << 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 6) & 0x3ff;
	}
}

template<typename T>
void KVSE_unpack_8len_10bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 18) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 28) & 0x3ff;
		des[8+j] |= (src[4+j] << 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 16) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 26) & 0x3ff;
		des[20+j] |= (src[8+j] << 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 14) & 0x3ff;
	}
}

template<typename T>
void KVSE_unpack_8len_10bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 26) & 0x3ff;
		des[4+j] |= (src[4+j] << 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 14) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 24) & 0x3ff;
		des[16+j] |= (src[8+j] << 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 12) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 22) & 0x3ff;
	}
}

template<typename T>
void KVSE_unpack_8len_10bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x3ff;
		des[j] |= (src[4+j] << 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 12) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 22) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j]) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 10) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 20) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 30) & 0x3ff;
		des[28+j] |= (src[12+j] << 2) & 0x3ff;
	}
}

template<typename T>
void KVSE_unpack_8len_11bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 11) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 22) & 0x7ff;
		des[8+j] |= (src[4+j] << 10) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 1) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 12) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 23) & 0x7ff;
		des[20+j] |= (src[8+j] << 9) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 2) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 13) & 0x7ff;
	}
}

template<typename T>
void KVSE_unpack_8len_11bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 19) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 30) & 0x7ff;
		des[8+j] |= (src[4+j] << 2) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 9) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 20) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 31) & 0x7ff;
		des[20+j] |= (src[8+j] << 1) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 10) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 21) & 0x7ff;
	}
}

template<typename T>
void KVSE_unpack_8len_11bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 27) & 0x7ff;
		des[4+j] |= (src[4+j] << 5) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 6) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 17) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 28) & 0x7ff;
		des[16+j] |= (src[8+j] << 4) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 7) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 18) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 29) & 0x7ff;
		des[28+j] |= (src[12+j] << 3) & 0x7ff;
	}
}

template<typename T>
void KVSE_unpack_8len_11bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x7ff;
		des[j] |= (src[4+j] << 8) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 3) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 14) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 25) & 0x7ff;
		des[12+j] |= (src[8+j] << 7) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 4) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 15) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 26) & 0x7ff;
		des[24+j] |= (src[12+j] << 6) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 5) & 0x7ff;
	}
}

template<typename T>
void KVSE_unpack_8len_12bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 24) & 0xfff;
		des[8+j] |= (src[4+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 28) & 0xfff;
		des[20+j] |= (src[8+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 20) & 0xfff;
	}
}

template<typename T>
void KVSE_unpack_8len_12bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 24) & 0xfff;
		des[16+j] |= (src[8+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 28) & 0xfff;
		des[28+j] |= (src[12+j] << 4) & 0xfff;
	}
}

template<typename T>
void KVSE_unpack_8len_12bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 28) & 0xfff;
		des[4+j] |= (src[4+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 24) & 0xfff;
		des[24+j] |= (src[12+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 4) & 0xfff;
	}
}

template<typename T>
void KVSE_unpack_8len_12bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0xfff;
		des[j] |= (src[4+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 28) & 0xfff;
		des[12+j] |= (src[8+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 12) & 0xfff;
	}
}

template<typename T>
void KVSE_unpack_8len_16bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 16) & 0xffff;
	}
}

template<typename T>
void KVSE_unpack_8len_16bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 24) & 0xffff;
		des[4+j] |= (src[4+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 24) & 0xffff;
		des[12+j] |= (src[8+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 24) & 0xffff;
		des[20+j] |= (src[12+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 24) & 0xffff;
		des[28+j] |= (src[16+j] << 8) & 0xffff;
	}
}

template<typename T>
void KVSE_unpack_8len_16bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j]) & 0xffff;
	}
}

template<typename T>
void KVSE_unpack_8len_16bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0xffff;
		des[j] |= (src[4+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 24) & 0xffff;
		des[8+j] |= (src[8+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 24) & 0xffff;
		des[16+j] |= (src[12+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 24) & 0xffff;
		des[24+j] |= (src[16+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 8) & 0xffff;
	}
}

template<typename T>
void KVSE_unpack_8len_20bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 20) & 0xfffff;
		des[4+j] |= (src[4+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 28) & 0xfffff;
		des[12+j] |= (src[8+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 16) & 0xfffff;
		des[16+j] |= (src[12+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 24) & 0xfffff;
		des[24+j] |= (src[16+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 12) & 0xfffff;
	}
}

template<typename T>
void KVSE_unpack_8len_20bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 28) & 0xfffff;
		des[4+j] |= (src[4+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 16) & 0xfffff;
		des[8+j] |= (src[8+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 24) & 0xfffff;
		des[16+j] |= (src[12+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 20) & 0xfffff;
		des[28+j] |= (src[20+j] << 12) & 0xfffff;
	}
}

template<typename T>
void KVSE_unpack_8len_20bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0xfffff;
		des[j] |= (src[4+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 24) & 0xfffff;
		des[8+j] |= (src[8+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 20) & 0xfffff;
		des[20+j] |= (src[16+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 28) & 0xfffff;
		des[28+j] |= (src[20+j] << 4) & 0xfffff;
	}
}

template<typename T>
void KVSE_unpack_8len_20bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0xfffff;
		des[j] |= (src[4+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 20) & 0xfffff;
		des[12+j] |= (src[12+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 28) & 0xfffff;
		des[20+j] |= (src[16+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 16) & 0xfffff;
		des[24+j] |= (src[20+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 4) & 0xfffff;
	}
}

template<typename T>
void KVSE_unpack_8len_32bw_0offset(T * des, const uint32_t *src) {
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
void KVSE_unpack_8len_32bw_8offset(T * des, const uint32_t *src) {
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
void KVSE_unpack_8len_32bw_16offset(T * des, const uint32_t *src) {
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
void KVSE_unpack_8len_32bw_24offset(T * des, const uint32_t *src) {
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
void KVSE_unpack_12len_0bw_0offset(T * des, const uint32_t *src) {
	ZMEMCPY128(des);
	ZMEMCPY128(des + 4);
	ZMEMCPY128(des + 8);
	ZMEMCPY128(des + 12);
	ZMEMCPY128(des + 16);
	ZMEMCPY128(des + 20);
	ZMEMCPY128(des + 24);
	ZMEMCPY128(des + 28);
	ZMEMCPY128(des + 32);
	ZMEMCPY128(des + 36);
	ZMEMCPY128(des + 40);
	ZMEMCPY128(des + 44);
}

template<typename T>
void KVSE_unpack_12len_0bw_8offset(T * des, const uint32_t *src) {
	ZMEMCPY128(des);
	ZMEMCPY128(des + 4);
	ZMEMCPY128(des + 8);
	ZMEMCPY128(des + 12);
	ZMEMCPY128(des + 16);
	ZMEMCPY128(des + 20);
	ZMEMCPY128(des + 24);
	ZMEMCPY128(des + 28);
	ZMEMCPY128(des + 32);
	ZMEMCPY128(des + 36);
	ZMEMCPY128(des + 40);
	ZMEMCPY128(des + 44);
}

template<typename T>
void KVSE_unpack_12len_0bw_16offset(T * des, const uint32_t *src) {
	ZMEMCPY128(des);
	ZMEMCPY128(des + 4);
	ZMEMCPY128(des + 8);
	ZMEMCPY128(des + 12);
	ZMEMCPY128(des + 16);
	ZMEMCPY128(des + 20);
	ZMEMCPY128(des + 24);
	ZMEMCPY128(des + 28);
	ZMEMCPY128(des + 32);
	ZMEMCPY128(des + 36);
	ZMEMCPY128(des + 40);
	ZMEMCPY128(des + 44);
}

template<typename T>
void KVSE_unpack_12len_0bw_24offset(T * des, const uint32_t *src) {
	ZMEMCPY128(des);
	ZMEMCPY128(des + 4);
	ZMEMCPY128(des + 8);
	ZMEMCPY128(des + 12);
	ZMEMCPY128(des + 16);
	ZMEMCPY128(des + 20);
	ZMEMCPY128(des + 24);
	ZMEMCPY128(des + 28);
	ZMEMCPY128(des + 32);
	ZMEMCPY128(des + 36);
	ZMEMCPY128(des + 40);
	ZMEMCPY128(des + 44);
}

template<typename T>
void KVSE_unpack_12len_1bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 1) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 2) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 3) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 4) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 5) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 6) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 7) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[j] >> 8) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[j] >> 9) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[j] >> 10) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[j] >> 11) & 0x1;
	}
}

template<typename T>
void KVSE_unpack_12len_1bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 9) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 10) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 11) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 12) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 13) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 14) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 15) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[j] >> 16) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[j] >> 17) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[j] >> 18) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[j] >> 19) & 0x1;
	}
}

template<typename T>
void KVSE_unpack_12len_1bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 17) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 18) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 19) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 20) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 21) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 22) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 23) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[j] >> 24) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[j] >> 25) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[j] >> 26) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[j] >> 27) & 0x1;
	}
}

template<typename T>
void KVSE_unpack_12len_1bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 25) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 26) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 27) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 28) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 29) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 30) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 31) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j]) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 1) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 2) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 3) & 0x1;
	}
}

template<typename T>
void KVSE_unpack_12len_2bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 2) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 4) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 6) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 8) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 10) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 12) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 14) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[j] >> 16) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[j] >> 18) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[j] >> 20) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[j] >> 22) & 0x3;
	}
}

template<typename T>
void KVSE_unpack_12len_2bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 10) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 12) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 14) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 16) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 18) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 20) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 22) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[j] >> 24) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[j] >> 26) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[j] >> 28) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[j] >> 30) & 0x3;
	}
}

template<typename T>
void KVSE_unpack_12len_2bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 18) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 20) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 22) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 24) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 26) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 28) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 30) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j]) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 2) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 4) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 6) & 0x3;
	}
}

template<typename T>
void KVSE_unpack_12len_2bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 26) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 28) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 30) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j]) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 2) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 4) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 6) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 8) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 10) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 12) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 14) & 0x3;
	}
}

template<typename T>
void KVSE_unpack_12len_3bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 3) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 6) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 9) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 12) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 15) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 18) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 21) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[j] >> 24) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[j] >> 27) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[j] >> 30) & 0x7;
		des[40+j] |= (src[4+j] << 2) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 1) & 0x7;
	}
}

template<typename T>
void KVSE_unpack_12len_3bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 11) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 14) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 17) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 20) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 23) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 26) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 29) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j]) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 3) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 6) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 9) & 0x7;
	}
}

template<typename T>
void KVSE_unpack_12len_3bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 19) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 22) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 25) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 28) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 31) & 0x7;
		des[20+j] |= (src[4+j] << 1) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 2) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 5) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 8) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 11) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 14) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 17) & 0x7;
	}
}

template<typename T>
void KVSE_unpack_12len_3bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 27) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 30) & 0x7;
		des[8+j] |= (src[4+j] << 2) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 1) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 4) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 7) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 10) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 13) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 16) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 19) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 22) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 25) & 0x7;
	}
}

template<typename T>
void KVSE_unpack_12len_4bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 12) & 0xf;
	}
}

template<typename T>
void KVSE_unpack_12len_4bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 20) & 0xf;
	}
}

template<typename T>
void KVSE_unpack_12len_4bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 28) & 0xf;
	}
}

template<typename T>
void KVSE_unpack_12len_4bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 4) & 0xf;
	}
}

template<typename T>
void KVSE_unpack_12len_5bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 5) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 10) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 15) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 20) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 25) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 30) & 0x1f;
		des[24+j] |= (src[4+j] << 2) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 3) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 8) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 13) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 18) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 23) & 0x1f;
	}
}

template<typename T>
void KVSE_unpack_12len_5bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 13) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 18) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 23) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 28) & 0x1f;
		des[16+j] |= (src[4+j] << 4) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 1) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 6) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 11) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 16) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 21) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 26) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 31) & 0x1f;
		des[44+j] |= (src[8+j] << 1) & 0x1f;
	}
}

template<typename T>
void KVSE_unpack_12len_5bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 21) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 26) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 31) & 0x1f;
		des[12+j] |= (src[4+j] << 1) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 4) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 9) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 14) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 19) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 24) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 29) & 0x1f;
		des[36+j] |= (src[8+j] << 3) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 2) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 7) & 0x1f;
	}
}

template<typename T>
void KVSE_unpack_12len_5bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 29) & 0x1f;
		des[4+j] |= (src[4+j] << 3) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 2) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 7) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 12) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 17) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 22) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 27) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j]) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 5) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 10) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 15) & 0x1f;
	}
}

template<typename T>
void KVSE_unpack_12len_6bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 6) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 12) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 18) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 24) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 30) & 0x3f;
		des[20+j] |= (src[4+j] << 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 10) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 16) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 22) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 28) & 0x3f;
		des[40+j] |= (src[8+j] << 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 2) & 0x3f;
	}
}

template<typename T>
void KVSE_unpack_12len_6bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 14) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 20) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 26) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j]) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 6) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 12) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 18) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 24) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 30) & 0x3f;
		des[36+j] |= (src[8+j] << 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 10) & 0x3f;
	}
}

template<typename T>
void KVSE_unpack_12len_6bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 22) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 28) & 0x3f;
		des[8+j] |= (src[4+j] << 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 8) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 14) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 20) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 26) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j]) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 6) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 12) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 18) & 0x3f;
	}
}

template<typename T>
void KVSE_unpack_12len_6bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 30) & 0x3f;
		des[4+j] |= (src[4+j] << 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 10) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 16) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 22) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 28) & 0x3f;
		des[24+j] |= (src[8+j] << 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 8) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 14) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 20) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 26) & 0x3f;
	}
}

template<typename T>
void KVSE_unpack_12len_7bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 7) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 14) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 21) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 28) & 0x7f;
		des[16+j] |= (src[4+j] << 4) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 3) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 10) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 17) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 24) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 31) & 0x7f;
		des[36+j] |= (src[8+j] << 1) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 6) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 13) & 0x7f;
	}
}

template<typename T>
void KVSE_unpack_12len_7bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 15) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 22) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 29) & 0x7f;
		des[12+j] |= (src[4+j] << 3) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 4) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 11) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 18) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 25) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j]) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 7) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 14) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 21) & 0x7f;
	}
}

template<typename T>
void KVSE_unpack_12len_7bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 23) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 30) & 0x7f;
		des[8+j] |= (src[4+j] << 2) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 5) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 12) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 19) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 26) & 0x7f;
		des[24+j] |= (src[8+j] << 6) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 1) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 8) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 15) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 22) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 29) & 0x7f;
		des[44+j] |= (src[12+j] << 3) & 0x7f;
	}
}

template<typename T>
void KVSE_unpack_12len_7bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 31) & 0x7f;
		des[4+j] |= (src[4+j] << 1) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 6) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 13) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 20) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 27) & 0x7f;
		des[20+j] |= (src[8+j] << 5) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 2) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 9) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 16) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 23) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 30) & 0x7f;
		des[40+j] |= (src[12+j] << 2) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 5) & 0x7f;
	}
}

template<typename T>
void KVSE_unpack_12len_8bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 24) & 0xff;
	}
}

template<typename T>
void KVSE_unpack_12len_8bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j]) & 0xff;
	}
}

template<typename T>
void KVSE_unpack_12len_8bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 8) & 0xff;
	}
}

template<typename T>
void KVSE_unpack_12len_8bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 16) & 0xff;
	}
}

template<typename T>
void KVSE_unpack_12len_9bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 9) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 18) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 27) & 0x1ff;
		des[12+j] |= (src[4+j] << 5) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 4) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 13) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 22) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 31) & 0x1ff;
		des[28+j] |= (src[8+j] << 1) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 8) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 17) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 26) & 0x1ff;
		des[40+j] |= (src[12+j] << 6) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 3) & 0x1ff;
	}
}

template<typename T>
void KVSE_unpack_12len_9bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 17) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 26) & 0x1ff;
		des[8+j] |= (src[4+j] << 6) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 3) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 12) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 21) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 30) & 0x1ff;
		des[24+j] |= (src[8+j] << 2) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 7) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 16) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 25) & 0x1ff;
		des[36+j] |= (src[12+j] << 7) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 2) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 11) & 0x1ff;
	}
}

template<typename T>
void KVSE_unpack_12len_9bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 25) & 0x1ff;
		des[4+j] |= (src[4+j] << 7) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 2) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 11) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 20) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 29) & 0x1ff;
		des[20+j] |= (src[8+j] << 3) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 6) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 15) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 24) & 0x1ff;
		des[32+j] |= (src[12+j] << 8) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 1) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 10) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 19) & 0x1ff;
	}
}

template<typename T>
void KVSE_unpack_12len_9bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x1ff;
		des[j] |= (src[4+j] << 8) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 1) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 10) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 19) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 28) & 0x1ff;
		des[16+j] |= (src[8+j] << 4) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 5) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 14) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 23) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j]) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 9) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 18) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 27) & 0x1ff;
		des[44+j] |= (src[16+j] << 5) & 0x1ff;
	}
}

template<typename T>
void KVSE_unpack_12len_10bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 10) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 20) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 30) & 0x3ff;
		des[12+j] |= (src[4+j] << 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 18) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 28) & 0x3ff;
		des[24+j] |= (src[8+j] << 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 16) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 26) & 0x3ff;
		des[36+j] |= (src[12+j] << 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 14) & 0x3ff;
	}
}

template<typename T>
void KVSE_unpack_12len_10bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 18) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 28) & 0x3ff;
		des[8+j] |= (src[4+j] << 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 16) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 26) & 0x3ff;
		des[20+j] |= (src[8+j] << 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 14) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 24) & 0x3ff;
		des[32+j] |= (src[12+j] << 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 12) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 22) & 0x3ff;
	}
}

template<typename T>
void KVSE_unpack_12len_10bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 26) & 0x3ff;
		des[4+j] |= (src[4+j] << 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 14) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 24) & 0x3ff;
		des[16+j] |= (src[8+j] << 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 12) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 22) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j]) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 10) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 20) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 30) & 0x3ff;
		des[44+j] |= (src[16+j] << 2) & 0x3ff;
	}
}

template<typename T>
void KVSE_unpack_12len_10bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x3ff;
		des[j] |= (src[4+j] << 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 12) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 22) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j]) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 10) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 20) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 30) & 0x3ff;
		des[28+j] |= (src[12+j] << 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j] >> 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 18) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 28) & 0x3ff;
		des[40+j] |= (src[16+j] << 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 6) & 0x3ff;
	}
}

template<typename T>
void KVSE_unpack_12len_11bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 11) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 22) & 0x7ff;
		des[8+j] |= (src[4+j] << 10) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 1) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 12) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 23) & 0x7ff;
		des[20+j] |= (src[8+j] << 9) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 2) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 13) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 24) & 0x7ff;
		des[32+j] |= (src[12+j] << 8) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 3) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 14) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 25) & 0x7ff;
		des[44+j] |= (src[16+j] << 7) & 0x7ff;
	}
}

template<typename T>
void KVSE_unpack_12len_11bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 19) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 30) & 0x7ff;
		des[8+j] |= (src[4+j] << 2) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 9) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 20) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 31) & 0x7ff;
		des[20+j] |= (src[8+j] << 1) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 10) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 21) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j]) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 11) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 22) & 0x7ff;
		des[40+j] |= (src[16+j] << 10) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 1) & 0x7ff;
	}
}

template<typename T>
void KVSE_unpack_12len_11bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 27) & 0x7ff;
		des[4+j] |= (src[4+j] << 5) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 6) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 17) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 28) & 0x7ff;
		des[16+j] |= (src[8+j] << 4) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 7) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 18) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 29) & 0x7ff;
		des[28+j] |= (src[12+j] << 3) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j] >> 8) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 19) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 30) & 0x7ff;
		des[40+j] |= (src[16+j] << 2) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 9) & 0x7ff;
	}
}

template<typename T>
void KVSE_unpack_12len_11bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x7ff;
		des[j] |= (src[4+j] << 8) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 3) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 14) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 25) & 0x7ff;
		des[12+j] |= (src[8+j] << 7) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 4) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 15) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 26) & 0x7ff;
		des[24+j] |= (src[12+j] << 6) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 5) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j] >> 16) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 27) & 0x7ff;
		des[36+j] |= (src[16+j] << 5) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[16+j] >> 6) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 17) & 0x7ff;
	}
}

template<typename T>
void KVSE_unpack_12len_12bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 24) & 0xfff;
		des[8+j] |= (src[4+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 28) & 0xfff;
		des[20+j] |= (src[8+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 24) & 0xfff;
		des[40+j] |= (src[16+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 4) & 0xfff;
	}
}

template<typename T>
void KVSE_unpack_12len_12bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 24) & 0xfff;
		des[16+j] |= (src[8+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 28) & 0xfff;
		des[28+j] |= (src[12+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[16+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 12) & 0xfff;
	}
}

template<typename T>
void KVSE_unpack_12len_12bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 28) & 0xfff;
		des[4+j] |= (src[4+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 24) & 0xfff;
		des[24+j] |= (src[12+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 28) & 0xfff;
		des[36+j] |= (src[16+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[16+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 20) & 0xfff;
	}
}

template<typename T>
void KVSE_unpack_12len_12bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0xfff;
		des[j] |= (src[4+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 28) & 0xfff;
		des[12+j] |= (src[8+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j] >> 24) & 0xfff;
		des[32+j] |= (src[16+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[16+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[16+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 28) & 0xfff;
		des[44+j] |= (src[20+j] << 4) & 0xfff;
	}
}

template<typename T>
void KVSE_unpack_12len_16bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[16+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[16+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[20+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[20+j] >> 16) & 0xffff;
	}
}

template<typename T>
void KVSE_unpack_12len_16bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 24) & 0xffff;
		des[4+j] |= (src[4+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 24) & 0xffff;
		des[12+j] |= (src[8+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 24) & 0xffff;
		des[20+j] |= (src[12+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 24) & 0xffff;
		des[28+j] |= (src[16+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[16+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[16+j] >> 24) & 0xffff;
		des[36+j] |= (src[20+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[20+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[20+j] >> 24) & 0xffff;
		des[44+j] |= (src[24+j] << 8) & 0xffff;
	}
}

template<typename T>
void KVSE_unpack_12len_16bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[16+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[20+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[20+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[24+j]) & 0xffff;
	}
}

template<typename T>
void KVSE_unpack_12len_16bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0xffff;
		des[j] |= (src[4+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 24) & 0xffff;
		des[8+j] |= (src[8+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 24) & 0xffff;
		des[16+j] |= (src[12+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 24) & 0xffff;
		des[24+j] |= (src[16+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[16+j] >> 24) & 0xffff;
		des[32+j] |= (src[20+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[20+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[20+j] >> 24) & 0xffff;
		des[40+j] |= (src[24+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[24+j] >> 8) & 0xffff;
	}
}

template<typename T>
void KVSE_unpack_12len_20bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 20) & 0xfffff;
		des[4+j] |= (src[4+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 28) & 0xfffff;
		des[12+j] |= (src[8+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 16) & 0xfffff;
		des[16+j] |= (src[12+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 24) & 0xfffff;
		des[24+j] |= (src[16+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[20+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[20+j] >> 20) & 0xfffff;
		des[36+j] |= (src[24+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[24+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[24+j] >> 28) & 0xfffff;
		des[44+j] |= (src[28+j] << 4) & 0xfffff;
	}
}

template<typename T>
void KVSE_unpack_12len_20bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 28) & 0xfffff;
		des[4+j] |= (src[4+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 16) & 0xfffff;
		des[8+j] |= (src[8+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 24) & 0xfffff;
		des[16+j] |= (src[12+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 20) & 0xfffff;
		des[28+j] |= (src[20+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[20+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[20+j] >> 28) & 0xfffff;
		des[36+j] |= (src[24+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[24+j] >> 16) & 0xfffff;
		des[40+j] |= (src[28+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[28+j] >> 4) & 0xfffff;
	}
}

template<typename T>
void KVSE_unpack_12len_20bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0xfffff;
		des[j] |= (src[4+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 24) & 0xfffff;
		des[8+j] |= (src[8+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 20) & 0xfffff;
		des[20+j] |= (src[16+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 28) & 0xfffff;
		des[28+j] |= (src[20+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[20+j] >> 16) & 0xfffff;
		des[32+j] |= (src[24+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[24+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[24+j] >> 24) & 0xfffff;
		des[40+j] |= (src[28+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[28+j] >> 12) & 0xfffff;
	}
}

template<typename T>
void KVSE_unpack_12len_20bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0xfffff;
		des[j] |= (src[4+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 20) & 0xfffff;
		des[12+j] |= (src[12+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 28) & 0xfffff;
		des[20+j] |= (src[16+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 16) & 0xfffff;
		des[24+j] |= (src[20+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[20+j] >> 24) & 0xfffff;
		des[32+j] |= (src[24+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[24+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[28+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[28+j] >> 20) & 0xfffff;
		des[44+j] |= (src[32+j] << 12) & 0xfffff;
	}
}

template<typename T>
void KVSE_unpack_12len_32bw_0offset(T * des, const uint32_t *src) {
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
}

template<typename T>
void KVSE_unpack_12len_32bw_8offset(T * des, const uint32_t *src) {
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
}

template<typename T>
void KVSE_unpack_12len_32bw_16offset(T * des, const uint32_t *src) {
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
}

template<typename T>
void KVSE_unpack_12len_32bw_24offset(T * des, const uint32_t *src) {
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
}

template<typename T>
void KVSE_unpack_16len_0bw_0offset(T * des, const uint32_t *src) {
	ZMEMCPY128(des);
	ZMEMCPY128(des + 4);
	ZMEMCPY128(des + 8);
	ZMEMCPY128(des + 12);
	ZMEMCPY128(des + 16);
	ZMEMCPY128(des + 20);
	ZMEMCPY128(des + 24);
	ZMEMCPY128(des + 28);
	ZMEMCPY128(des + 32);
	ZMEMCPY128(des + 36);
	ZMEMCPY128(des + 40);
	ZMEMCPY128(des + 44);
	ZMEMCPY128(des + 48);
	ZMEMCPY128(des + 52);
	ZMEMCPY128(des + 56);
	ZMEMCPY128(des + 60);
}

template<typename T>
void KVSE_unpack_16len_0bw_8offset(T * des, const uint32_t *src) {
	ZMEMCPY128(des);
	ZMEMCPY128(des + 4);
	ZMEMCPY128(des + 8);
	ZMEMCPY128(des + 12);
	ZMEMCPY128(des + 16);
	ZMEMCPY128(des + 20);
	ZMEMCPY128(des + 24);
	ZMEMCPY128(des + 28);
	ZMEMCPY128(des + 32);
	ZMEMCPY128(des + 36);
	ZMEMCPY128(des + 40);
	ZMEMCPY128(des + 44);
	ZMEMCPY128(des + 48);
	ZMEMCPY128(des + 52);
	ZMEMCPY128(des + 56);
	ZMEMCPY128(des + 60);
}

template<typename T>
void KVSE_unpack_16len_0bw_16offset(T * des, const uint32_t *src) {
	ZMEMCPY128(des);
	ZMEMCPY128(des + 4);
	ZMEMCPY128(des + 8);
	ZMEMCPY128(des + 12);
	ZMEMCPY128(des + 16);
	ZMEMCPY128(des + 20);
	ZMEMCPY128(des + 24);
	ZMEMCPY128(des + 28);
	ZMEMCPY128(des + 32);
	ZMEMCPY128(des + 36);
	ZMEMCPY128(des + 40);
	ZMEMCPY128(des + 44);
	ZMEMCPY128(des + 48);
	ZMEMCPY128(des + 52);
	ZMEMCPY128(des + 56);
	ZMEMCPY128(des + 60);
}

template<typename T>
void KVSE_unpack_16len_0bw_24offset(T * des, const uint32_t *src) {
	ZMEMCPY128(des);
	ZMEMCPY128(des + 4);
	ZMEMCPY128(des + 8);
	ZMEMCPY128(des + 12);
	ZMEMCPY128(des + 16);
	ZMEMCPY128(des + 20);
	ZMEMCPY128(des + 24);
	ZMEMCPY128(des + 28);
	ZMEMCPY128(des + 32);
	ZMEMCPY128(des + 36);
	ZMEMCPY128(des + 40);
	ZMEMCPY128(des + 44);
	ZMEMCPY128(des + 48);
	ZMEMCPY128(des + 52);
	ZMEMCPY128(des + 56);
	ZMEMCPY128(des + 60);
}

template<typename T>
void KVSE_unpack_16len_1bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 1) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 2) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 3) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 4) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 5) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 6) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 7) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[j] >> 8) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[j] >> 9) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[j] >> 10) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[j] >> 11) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[j] >> 12) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[j] >> 13) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[j] >> 14) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[j] >> 15) & 0x1;
	}
}

template<typename T>
void KVSE_unpack_16len_1bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 9) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 10) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 11) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 12) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 13) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 14) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 15) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[j] >> 16) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[j] >> 17) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[j] >> 18) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[j] >> 19) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[j] >> 20) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[j] >> 21) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[j] >> 22) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[j] >> 23) & 0x1;
	}
}

template<typename T>
void KVSE_unpack_16len_1bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 17) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 18) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 19) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 20) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 21) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 22) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 23) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[j] >> 24) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[j] >> 25) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[j] >> 26) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[j] >> 27) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[j] >> 28) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[j] >> 29) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[j] >> 30) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[j] >> 31) & 0x1;
	}
}

template<typename T>
void KVSE_unpack_16len_1bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 25) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 26) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 27) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 28) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 29) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 30) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 31) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j]) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 1) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 2) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 3) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 4) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 5) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[4+j] >> 6) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[4+j] >> 7) & 0x1;
	}
}

template<typename T>
void KVSE_unpack_16len_2bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 2) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 4) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 6) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 8) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 10) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 12) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 14) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[j] >> 16) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[j] >> 18) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[j] >> 20) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[j] >> 22) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[j] >> 24) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[j] >> 26) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[j] >> 28) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[j] >> 30) & 0x3;
	}
}

template<typename T>
void KVSE_unpack_16len_2bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 10) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 12) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 14) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 16) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 18) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 20) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 22) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[j] >> 24) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[j] >> 26) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[j] >> 28) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[j] >> 30) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j]) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 2) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[4+j] >> 4) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[4+j] >> 6) & 0x3;
	}
}

template<typename T>
void KVSE_unpack_16len_2bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 18) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 20) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 22) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 24) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 26) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 28) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 30) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j]) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 2) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 4) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 6) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 8) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 10) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[4+j] >> 12) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[4+j] >> 14) & 0x3;
	}
}

template<typename T>
void KVSE_unpack_16len_2bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 26) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 28) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 30) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j]) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 2) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 4) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 6) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 8) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 10) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 12) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 14) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 16) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 18) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[4+j] >> 20) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[4+j] >> 22) & 0x3;
	}
}

template<typename T>
void KVSE_unpack_16len_3bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 3) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 6) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 9) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 12) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 15) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 18) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 21) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[j] >> 24) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[j] >> 27) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[j] >> 30) & 0x7;
		des[40+j] |= (src[4+j] << 2) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 1) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 4) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 7) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[4+j] >> 10) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[4+j] >> 13) & 0x7;
	}
}

template<typename T>
void KVSE_unpack_16len_3bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 11) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 14) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 17) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 20) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 23) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 26) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 29) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j]) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 3) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 6) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 9) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 12) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 15) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[4+j] >> 18) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[4+j] >> 21) & 0x7;
	}
}

template<typename T>
void KVSE_unpack_16len_3bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 19) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 22) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 25) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 28) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 31) & 0x7;
		des[20+j] |= (src[4+j] << 1) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 2) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 5) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 8) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 11) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 14) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 17) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 20) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 23) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[4+j] >> 26) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[4+j] >> 29) & 0x7;
	}
}

template<typename T>
void KVSE_unpack_16len_3bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 27) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 30) & 0x7;
		des[8+j] |= (src[4+j] << 2) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 1) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 4) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 7) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 10) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 13) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 16) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 19) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 22) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 25) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 28) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 31) & 0x7;
		des[52+j] |= (src[8+j] << 1) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j] >> 2) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[8+j] >> 5) & 0x7;
	}
}

template<typename T>
void KVSE_unpack_16len_4bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[4+j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[4+j] >> 28) & 0xf;
	}
}

template<typename T>
void KVSE_unpack_16len_4bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[8+j] >> 4) & 0xf;
	}
}

template<typename T>
void KVSE_unpack_16len_4bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[8+j] >> 12) & 0xf;
	}
}

template<typename T>
void KVSE_unpack_16len_4bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[8+j] >> 20) & 0xf;
	}
}

template<typename T>
void KVSE_unpack_16len_5bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 5) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 10) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 15) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 20) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 25) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 30) & 0x1f;
		des[24+j] |= (src[4+j] << 2) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 3) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 8) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 13) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 18) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 23) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 28) & 0x1f;
		des[48+j] |= (src[8+j] << 4) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 1) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j] >> 6) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[8+j] >> 11) & 0x1f;
	}
}

template<typename T>
void KVSE_unpack_16len_5bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 13) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 18) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 23) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 28) & 0x1f;
		des[16+j] |= (src[4+j] << 4) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 1) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 6) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 11) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 16) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 21) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 26) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 31) & 0x1f;
		des[44+j] |= (src[8+j] << 1) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j] >> 4) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 9) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j] >> 14) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[8+j] >> 19) & 0x1f;
	}
}

template<typename T>
void KVSE_unpack_16len_5bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 21) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 26) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 31) & 0x1f;
		des[12+j] |= (src[4+j] << 1) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 4) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 9) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 14) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 19) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 24) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 29) & 0x1f;
		des[36+j] |= (src[8+j] << 3) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 2) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 7) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j] >> 12) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 17) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j] >> 22) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[8+j] >> 27) & 0x1f;
	}
}

template<typename T>
void KVSE_unpack_16len_5bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 29) & 0x1f;
		des[4+j] |= (src[4+j] << 3) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 2) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 7) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 12) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 17) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 22) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 27) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j]) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 5) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 10) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 15) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j] >> 20) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 25) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j] >> 30) & 0x1f;
		des[56+j] |= (src[12+j] << 2) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[12+j] >> 3) & 0x1f;
	}
}

template<typename T>
void KVSE_unpack_16len_6bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 6) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 12) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 18) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 24) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 30) & 0x3f;
		des[20+j] |= (src[4+j] << 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 10) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 16) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 22) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 28) & 0x3f;
		des[40+j] |= (src[8+j] << 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j] >> 8) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 14) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j] >> 20) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[8+j] >> 26) & 0x3f;
	}
}

template<typename T>
void KVSE_unpack_16len_6bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 14) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 20) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 26) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j]) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 6) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 12) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 18) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 24) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 30) & 0x3f;
		des[36+j] |= (src[8+j] << 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 10) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j] >> 16) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 22) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j] >> 28) & 0x3f;
		des[56+j] |= (src[12+j] << 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[12+j] >> 2) & 0x3f;
	}
}

template<typename T>
void KVSE_unpack_16len_6bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 22) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 28) & 0x3f;
		des[8+j] |= (src[4+j] << 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 8) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 14) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 20) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 26) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j]) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 6) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 12) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 18) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j] >> 24) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 30) & 0x3f;
		des[52+j] |= (src[12+j] << 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[12+j] >> 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[12+j] >> 10) & 0x3f;
	}
}

template<typename T>
void KVSE_unpack_16len_6bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 30) & 0x3f;
		des[4+j] |= (src[4+j] << 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 10) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 16) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 22) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 28) & 0x3f;
		des[24+j] |= (src[8+j] << 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 8) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 14) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 20) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 26) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j]) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[12+j] >> 6) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[12+j] >> 12) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[12+j] >> 18) & 0x3f;
	}
}

template<typename T>
void KVSE_unpack_16len_7bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 7) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 14) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 21) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 28) & 0x7f;
		des[16+j] |= (src[4+j] << 4) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 3) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 10) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 17) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 24) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 31) & 0x7f;
		des[36+j] |= (src[8+j] << 1) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 6) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 13) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j] >> 20) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 27) & 0x7f;
		des[52+j] |= (src[12+j] << 5) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[12+j] >> 2) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[12+j] >> 9) & 0x7f;
	}
}

template<typename T>
void KVSE_unpack_16len_7bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 15) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 22) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 29) & 0x7f;
		des[12+j] |= (src[4+j] << 3) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 4) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 11) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 18) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 25) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j]) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 7) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 14) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 21) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j] >> 28) & 0x7f;
		des[48+j] |= (src[12+j] << 4) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[12+j] >> 3) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[12+j] >> 10) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[12+j] >> 17) & 0x7f;
	}
}

template<typename T>
void KVSE_unpack_16len_7bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 23) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 30) & 0x7f;
		des[8+j] |= (src[4+j] << 2) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 5) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 12) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 19) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 26) & 0x7f;
		des[24+j] |= (src[8+j] << 6) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 1) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 8) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 15) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 22) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 29) & 0x7f;
		des[44+j] |= (src[12+j] << 3) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j] >> 4) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[12+j] >> 11) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[12+j] >> 18) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[12+j] >> 25) & 0x7f;
	}
}

template<typename T>
void KVSE_unpack_16len_7bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 31) & 0x7f;
		des[4+j] |= (src[4+j] << 1) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 6) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 13) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 20) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 27) & 0x7f;
		des[20+j] |= (src[8+j] << 5) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 2) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 9) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 16) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 23) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 30) & 0x7f;
		des[40+j] |= (src[12+j] << 2) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 5) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j] >> 12) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[12+j] >> 19) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[12+j] >> 26) & 0x7f;
		des[56+j] |= (src[16+j] << 6) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j] >> 1) & 0x7f;
	}
}

template<typename T>
void KVSE_unpack_16len_8bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[12+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[12+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[12+j] >> 24) & 0xff;
	}
}

template<typename T>
void KVSE_unpack_16len_8bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[12+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[12+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j]) & 0xff;
	}
}

template<typename T>
void KVSE_unpack_16len_8bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[12+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[16+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j] >> 8) & 0xff;
	}
}

template<typename T>
void KVSE_unpack_16len_8bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[16+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j] >> 16) & 0xff;
	}
}

template<typename T>
void KVSE_unpack_16len_9bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 9) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 18) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 27) & 0x1ff;
		des[12+j] |= (src[4+j] << 5) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 4) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 13) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 22) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 31) & 0x1ff;
		des[28+j] |= (src[8+j] << 1) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 8) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 17) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 26) & 0x1ff;
		des[40+j] |= (src[12+j] << 6) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 3) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j] >> 12) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[12+j] >> 21) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[12+j] >> 30) & 0x1ff;
		des[56+j] |= (src[16+j] << 2) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j] >> 7) & 0x1ff;
	}
}

template<typename T>
void KVSE_unpack_16len_9bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 17) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 26) & 0x1ff;
		des[8+j] |= (src[4+j] << 6) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 3) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 12) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 21) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 30) & 0x1ff;
		des[24+j] |= (src[8+j] << 2) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 7) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 16) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 25) & 0x1ff;
		des[36+j] |= (src[12+j] << 7) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 2) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 11) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j] >> 20) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[12+j] >> 29) & 0x1ff;
		des[52+j] |= (src[16+j] << 3) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[16+j] >> 6) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j] >> 15) & 0x1ff;
	}
}

template<typename T>
void KVSE_unpack_16len_9bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 25) & 0x1ff;
		des[4+j] |= (src[4+j] << 7) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 2) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 11) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 20) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 29) & 0x1ff;
		des[20+j] |= (src[8+j] << 3) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 6) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 15) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 24) & 0x1ff;
		des[32+j] |= (src[12+j] << 8) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 1) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 10) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 19) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j] >> 28) & 0x1ff;
		des[48+j] |= (src[16+j] << 4) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 5) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[16+j] >> 14) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j] >> 23) & 0x1ff;
	}
}

template<typename T>
void KVSE_unpack_16len_9bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x1ff;
		des[j] |= (src[4+j] << 8) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 1) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 10) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 19) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 28) & 0x1ff;
		des[16+j] |= (src[8+j] << 4) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 5) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 14) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 23) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j]) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 9) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 18) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 27) & 0x1ff;
		des[44+j] |= (src[16+j] << 5) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j] >> 4) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 13) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[16+j] >> 22) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j] >> 31) & 0x1ff;
		des[60+j] |= (src[20+j] << 1) & 0x1ff;
	}
}

template<typename T>
void KVSE_unpack_16len_10bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 10) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 20) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 30) & 0x3ff;
		des[12+j] |= (src[4+j] << 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 18) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 28) & 0x3ff;
		des[24+j] |= (src[8+j] << 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 16) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 26) & 0x3ff;
		des[36+j] |= (src[12+j] << 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 14) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j] >> 24) & 0x3ff;
		des[48+j] |= (src[16+j] << 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[16+j] >> 12) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j] >> 22) & 0x3ff;
	}
}

template<typename T>
void KVSE_unpack_16len_10bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 18) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 28) & 0x3ff;
		des[8+j] |= (src[4+j] << 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 16) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 26) & 0x3ff;
		des[20+j] |= (src[8+j] << 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 14) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 24) & 0x3ff;
		des[32+j] |= (src[12+j] << 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 12) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 22) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j]) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 10) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[16+j] >> 20) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j] >> 30) & 0x3ff;
		des[60+j] |= (src[20+j] << 2) & 0x3ff;
	}
}

template<typename T>
void KVSE_unpack_16len_10bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 26) & 0x3ff;
		des[4+j] |= (src[4+j] << 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 14) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 24) & 0x3ff;
		des[16+j] |= (src[8+j] << 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 12) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 22) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j]) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 10) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 20) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 30) & 0x3ff;
		des[44+j] |= (src[16+j] << 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j] >> 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 18) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[16+j] >> 28) & 0x3ff;
		des[56+j] |= (src[20+j] << 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[20+j] >> 6) & 0x3ff;
	}
}

template<typename T>
void KVSE_unpack_16len_10bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x3ff;
		des[j] |= (src[4+j] << 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 12) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 22) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j]) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 10) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 20) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 30) & 0x3ff;
		des[28+j] |= (src[12+j] << 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j] >> 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 18) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 28) & 0x3ff;
		des[40+j] |= (src[16+j] << 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j] >> 16) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 26) & 0x3ff;
		des[52+j] |= (src[20+j] << 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[20+j] >> 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[20+j] >> 14) & 0x3ff;
	}
}

template<typename T>
void KVSE_unpack_16len_11bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 11) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 22) & 0x7ff;
		des[8+j] |= (src[4+j] << 10) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 1) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 12) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 23) & 0x7ff;
		des[20+j] |= (src[8+j] << 9) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 2) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 13) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 24) & 0x7ff;
		des[32+j] |= (src[12+j] << 8) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 3) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 14) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 25) & 0x7ff;
		des[44+j] |= (src[16+j] << 7) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j] >> 4) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 15) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[16+j] >> 26) & 0x7ff;
		des[56+j] |= (src[20+j] << 6) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[20+j] >> 5) & 0x7ff;
	}
}

template<typename T>
void KVSE_unpack_16len_11bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 19) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 30) & 0x7ff;
		des[8+j] |= (src[4+j] << 2) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 9) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 20) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 31) & 0x7ff;
		des[20+j] |= (src[8+j] << 1) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 10) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 21) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j]) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 11) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 22) & 0x7ff;
		des[40+j] |= (src[16+j] << 10) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 1) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j] >> 12) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 23) & 0x7ff;
		des[52+j] |= (src[20+j] << 9) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[20+j] >> 2) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[20+j] >> 13) & 0x7ff;
	}
}

template<typename T>
void KVSE_unpack_16len_11bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 27) & 0x7ff;
		des[4+j] |= (src[4+j] << 5) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 6) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 17) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 28) & 0x7ff;
		des[16+j] |= (src[8+j] << 4) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 7) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 18) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 29) & 0x7ff;
		des[28+j] |= (src[12+j] << 3) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j] >> 8) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 19) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 30) & 0x7ff;
		des[40+j] |= (src[16+j] << 2) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 9) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j] >> 20) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 31) & 0x7ff;
		des[52+j] |= (src[20+j] << 1) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[20+j] >> 10) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[20+j] >> 21) & 0x7ff;
	}
}

template<typename T>
void KVSE_unpack_16len_11bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x7ff;
		des[j] |= (src[4+j] << 8) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 3) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 14) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 25) & 0x7ff;
		des[12+j] |= (src[8+j] << 7) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 4) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 15) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 26) & 0x7ff;
		des[24+j] |= (src[12+j] << 6) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 5) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j] >> 16) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 27) & 0x7ff;
		des[36+j] |= (src[16+j] << 5) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[16+j] >> 6) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 17) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j] >> 28) & 0x7ff;
		des[48+j] |= (src[20+j] << 4) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[20+j] >> 7) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[20+j] >> 18) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[20+j] >> 29) & 0x7ff;
		des[60+j] |= (src[24+j] << 3) & 0x7ff;
	}
}

template<typename T>
void KVSE_unpack_16len_12bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 24) & 0xfff;
		des[8+j] |= (src[4+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 28) & 0xfff;
		des[20+j] |= (src[8+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 24) & 0xfff;
		des[40+j] |= (src[16+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 28) & 0xfff;
		des[52+j] |= (src[20+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[20+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[20+j] >> 20) & 0xfff;
	}
}

template<typename T>
void KVSE_unpack_16len_12bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 24) & 0xfff;
		des[16+j] |= (src[8+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 28) & 0xfff;
		des[28+j] |= (src[12+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[16+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j] >> 24) & 0xfff;
		des[48+j] |= (src[20+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[20+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[20+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[20+j] >> 28) & 0xfff;
		des[60+j] |= (src[24+j] << 4) & 0xfff;
	}
}

template<typename T>
void KVSE_unpack_16len_12bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 28) & 0xfff;
		des[4+j] |= (src[4+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 24) & 0xfff;
		des[24+j] |= (src[12+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 28) & 0xfff;
		des[36+j] |= (src[16+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[16+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[20+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[20+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[20+j] >> 24) & 0xfff;
		des[56+j] |= (src[24+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[24+j] >> 4) & 0xfff;
	}
}

template<typename T>
void KVSE_unpack_16len_12bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0xfff;
		des[j] |= (src[4+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 28) & 0xfff;
		des[12+j] |= (src[8+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j] >> 24) & 0xfff;
		des[32+j] |= (src[16+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[16+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[16+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 28) & 0xfff;
		des[44+j] |= (src[20+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[20+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[20+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[24+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[24+j] >> 12) & 0xfff;
	}
}

template<typename T>
void KVSE_unpack_16len_16bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[16+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[16+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[20+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[20+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[24+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[24+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[28+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[28+j] >> 16) & 0xffff;
	}
}

template<typename T>
void KVSE_unpack_16len_16bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 24) & 0xffff;
		des[4+j] |= (src[4+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 24) & 0xffff;
		des[12+j] |= (src[8+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 24) & 0xffff;
		des[20+j] |= (src[12+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 24) & 0xffff;
		des[28+j] |= (src[16+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[16+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[16+j] >> 24) & 0xffff;
		des[36+j] |= (src[20+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[20+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[20+j] >> 24) & 0xffff;
		des[44+j] |= (src[24+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[24+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[24+j] >> 24) & 0xffff;
		des[52+j] |= (src[28+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[28+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[28+j] >> 24) & 0xffff;
		des[60+j] |= (src[32+j] << 8) & 0xffff;
	}
}

template<typename T>
void KVSE_unpack_16len_16bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[16+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[20+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[20+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[24+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[24+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[28+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[28+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[32+j]) & 0xffff;
	}
}

template<typename T>
void KVSE_unpack_16len_16bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0xffff;
		des[j] |= (src[4+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 24) & 0xffff;
		des[8+j] |= (src[8+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 24) & 0xffff;
		des[16+j] |= (src[12+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 24) & 0xffff;
		des[24+j] |= (src[16+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[16+j] >> 24) & 0xffff;
		des[32+j] |= (src[20+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[20+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[20+j] >> 24) & 0xffff;
		des[40+j] |= (src[24+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[24+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[24+j] >> 24) & 0xffff;
		des[48+j] |= (src[28+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[28+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[28+j] >> 24) & 0xffff;
		des[56+j] |= (src[32+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[32+j] >> 8) & 0xffff;
	}
}

template<typename T>
void KVSE_unpack_16len_20bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 20) & 0xfffff;
		des[4+j] |= (src[4+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 28) & 0xfffff;
		des[12+j] |= (src[8+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 16) & 0xfffff;
		des[16+j] |= (src[12+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 24) & 0xfffff;
		des[24+j] |= (src[16+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[20+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[20+j] >> 20) & 0xfffff;
		des[36+j] |= (src[24+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[24+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[24+j] >> 28) & 0xfffff;
		des[44+j] |= (src[28+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[28+j] >> 16) & 0xfffff;
		des[48+j] |= (src[32+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[32+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[32+j] >> 24) & 0xfffff;
		des[56+j] |= (src[36+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[36+j] >> 12) & 0xfffff;
	}
}

template<typename T>
void KVSE_unpack_16len_20bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 28) & 0xfffff;
		des[4+j] |= (src[4+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 16) & 0xfffff;
		des[8+j] |= (src[8+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 24) & 0xfffff;
		des[16+j] |= (src[12+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 20) & 0xfffff;
		des[28+j] |= (src[20+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[20+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[20+j] >> 28) & 0xfffff;
		des[36+j] |= (src[24+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[24+j] >> 16) & 0xfffff;
		des[40+j] |= (src[28+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[28+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[28+j] >> 24) & 0xfffff;
		des[48+j] |= (src[32+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[32+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[36+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[36+j] >> 20) & 0xfffff;
		des[60+j] |= (src[40+j] << 12) & 0xfffff;
	}
}

template<typename T>
void KVSE_unpack_16len_20bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0xfffff;
		des[j] |= (src[4+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 24) & 0xfffff;
		des[8+j] |= (src[8+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 20) & 0xfffff;
		des[20+j] |= (src[16+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 28) & 0xfffff;
		des[28+j] |= (src[20+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[20+j] >> 16) & 0xfffff;
		des[32+j] |= (src[24+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[24+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[24+j] >> 24) & 0xfffff;
		des[40+j] |= (src[28+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[28+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[32+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[32+j] >> 20) & 0xfffff;
		des[52+j] |= (src[36+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[36+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[36+j] >> 28) & 0xfffff;
		des[60+j] |= (src[40+j] << 4) & 0xfffff;
	}
}

template<typename T>
void KVSE_unpack_16len_20bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0xfffff;
		des[j] |= (src[4+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 20) & 0xfffff;
		des[12+j] |= (src[12+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 28) & 0xfffff;
		des[20+j] |= (src[16+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 16) & 0xfffff;
		des[24+j] |= (src[20+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[20+j] >> 24) & 0xfffff;
		des[32+j] |= (src[24+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[24+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[28+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[28+j] >> 20) & 0xfffff;
		des[44+j] |= (src[32+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[32+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[32+j] >> 28) & 0xfffff;
		des[52+j] |= (src[36+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[36+j] >> 16) & 0xfffff;
		des[56+j] |= (src[40+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[40+j] >> 4) & 0xfffff;
	}
}

template<typename T>
void KVSE_unpack_16len_32bw_0offset(T * des, const uint32_t *src) {
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
void KVSE_unpack_16len_32bw_8offset(T * des, const uint32_t *src) {
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
void KVSE_unpack_16len_32bw_16offset(T * des, const uint32_t *src) {
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
void KVSE_unpack_16len_32bw_24offset(T * des, const uint32_t *src) {
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
void KVSE_unpack_32len_0bw_0offset(T * des, const uint32_t *src) {
	ZMEMCPY128(des);
	ZMEMCPY128(des + 4);
	ZMEMCPY128(des + 8);
	ZMEMCPY128(des + 12);
	ZMEMCPY128(des + 16);
	ZMEMCPY128(des + 20);
	ZMEMCPY128(des + 24);
	ZMEMCPY128(des + 28);
	ZMEMCPY128(des + 32);
	ZMEMCPY128(des + 36);
	ZMEMCPY128(des + 40);
	ZMEMCPY128(des + 44);
	ZMEMCPY128(des + 48);
	ZMEMCPY128(des + 52);
	ZMEMCPY128(des + 56);
	ZMEMCPY128(des + 60);
	ZMEMCPY128(des + 64);
	ZMEMCPY128(des + 68);
	ZMEMCPY128(des + 72);
	ZMEMCPY128(des + 76);
	ZMEMCPY128(des + 80);
	ZMEMCPY128(des + 84);
	ZMEMCPY128(des + 88);
	ZMEMCPY128(des + 92);
	ZMEMCPY128(des + 96);
	ZMEMCPY128(des + 100);
	ZMEMCPY128(des + 104);
	ZMEMCPY128(des + 108);
	ZMEMCPY128(des + 112);
	ZMEMCPY128(des + 116);
	ZMEMCPY128(des + 120);
	ZMEMCPY128(des + 124);
}

template<typename T>
void KVSE_unpack_32len_0bw_8offset(T * des, const uint32_t *src) {
	ZMEMCPY128(des);
	ZMEMCPY128(des + 4);
	ZMEMCPY128(des + 8);
	ZMEMCPY128(des + 12);
	ZMEMCPY128(des + 16);
	ZMEMCPY128(des + 20);
	ZMEMCPY128(des + 24);
	ZMEMCPY128(des + 28);
	ZMEMCPY128(des + 32);
	ZMEMCPY128(des + 36);
	ZMEMCPY128(des + 40);
	ZMEMCPY128(des + 44);
	ZMEMCPY128(des + 48);
	ZMEMCPY128(des + 52);
	ZMEMCPY128(des + 56);
	ZMEMCPY128(des + 60);
	ZMEMCPY128(des + 64);
	ZMEMCPY128(des + 68);
	ZMEMCPY128(des + 72);
	ZMEMCPY128(des + 76);
	ZMEMCPY128(des + 80);
	ZMEMCPY128(des + 84);
	ZMEMCPY128(des + 88);
	ZMEMCPY128(des + 92);
	ZMEMCPY128(des + 96);
	ZMEMCPY128(des + 100);
	ZMEMCPY128(des + 104);
	ZMEMCPY128(des + 108);
	ZMEMCPY128(des + 112);
	ZMEMCPY128(des + 116);
	ZMEMCPY128(des + 120);
	ZMEMCPY128(des + 124);
}

template<typename T>
void KVSE_unpack_32len_0bw_16offset(T * des, const uint32_t *src) {
	ZMEMCPY128(des);
	ZMEMCPY128(des + 4);
	ZMEMCPY128(des + 8);
	ZMEMCPY128(des + 12);
	ZMEMCPY128(des + 16);
	ZMEMCPY128(des + 20);
	ZMEMCPY128(des + 24);
	ZMEMCPY128(des + 28);
	ZMEMCPY128(des + 32);
	ZMEMCPY128(des + 36);
	ZMEMCPY128(des + 40);
	ZMEMCPY128(des + 44);
	ZMEMCPY128(des + 48);
	ZMEMCPY128(des + 52);
	ZMEMCPY128(des + 56);
	ZMEMCPY128(des + 60);
	ZMEMCPY128(des + 64);
	ZMEMCPY128(des + 68);
	ZMEMCPY128(des + 72);
	ZMEMCPY128(des + 76);
	ZMEMCPY128(des + 80);
	ZMEMCPY128(des + 84);
	ZMEMCPY128(des + 88);
	ZMEMCPY128(des + 92);
	ZMEMCPY128(des + 96);
	ZMEMCPY128(des + 100);
	ZMEMCPY128(des + 104);
	ZMEMCPY128(des + 108);
	ZMEMCPY128(des + 112);
	ZMEMCPY128(des + 116);
	ZMEMCPY128(des + 120);
	ZMEMCPY128(des + 124);
}

template<typename T>
void KVSE_unpack_32len_0bw_24offset(T * des, const uint32_t *src) {
	ZMEMCPY128(des);
	ZMEMCPY128(des + 4);
	ZMEMCPY128(des + 8);
	ZMEMCPY128(des + 12);
	ZMEMCPY128(des + 16);
	ZMEMCPY128(des + 20);
	ZMEMCPY128(des + 24);
	ZMEMCPY128(des + 28);
	ZMEMCPY128(des + 32);
	ZMEMCPY128(des + 36);
	ZMEMCPY128(des + 40);
	ZMEMCPY128(des + 44);
	ZMEMCPY128(des + 48);
	ZMEMCPY128(des + 52);
	ZMEMCPY128(des + 56);
	ZMEMCPY128(des + 60);
	ZMEMCPY128(des + 64);
	ZMEMCPY128(des + 68);
	ZMEMCPY128(des + 72);
	ZMEMCPY128(des + 76);
	ZMEMCPY128(des + 80);
	ZMEMCPY128(des + 84);
	ZMEMCPY128(des + 88);
	ZMEMCPY128(des + 92);
	ZMEMCPY128(des + 96);
	ZMEMCPY128(des + 100);
	ZMEMCPY128(des + 104);
	ZMEMCPY128(des + 108);
	ZMEMCPY128(des + 112);
	ZMEMCPY128(des + 116);
	ZMEMCPY128(des + 120);
	ZMEMCPY128(des + 124);
}

template<typename T>
void KVSE_unpack_32len_1bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 1) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 2) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 3) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 4) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 5) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 6) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 7) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[j] >> 8) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[j] >> 9) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[j] >> 10) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[j] >> 11) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[j] >> 12) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[j] >> 13) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[j] >> 14) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[j] >> 15) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[j] >> 16) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[j] >> 17) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[j] >> 18) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[j] >> 19) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[j] >> 20) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[j] >> 21) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[j] >> 22) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[j] >> 23) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[j] >> 24) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[j] >> 25) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[j] >> 26) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[j] >> 27) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[j] >> 28) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[j] >> 29) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[j] >> 30) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[j] >> 31) & 0x1;
	}
}

template<typename T>
void KVSE_unpack_32len_1bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 9) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 10) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 11) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 12) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 13) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 14) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 15) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[j] >> 16) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[j] >> 17) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[j] >> 18) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[j] >> 19) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[j] >> 20) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[j] >> 21) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[j] >> 22) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[j] >> 23) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[j] >> 24) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[j] >> 25) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[j] >> 26) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[j] >> 27) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[j] >> 28) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[j] >> 29) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[j] >> 30) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[j] >> 31) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[4+j]) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[4+j] >> 1) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[4+j] >> 2) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[4+j] >> 3) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[4+j] >> 4) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[4+j] >> 5) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[4+j] >> 6) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[4+j] >> 7) & 0x1;
	}
}

template<typename T>
void KVSE_unpack_32len_1bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 17) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 18) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 19) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 20) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 21) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 22) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 23) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[j] >> 24) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[j] >> 25) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[j] >> 26) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[j] >> 27) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[j] >> 28) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[j] >> 29) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[j] >> 30) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[j] >> 31) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[4+j]) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[4+j] >> 1) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[4+j] >> 2) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[4+j] >> 3) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[4+j] >> 4) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[4+j] >> 5) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[4+j] >> 6) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[4+j] >> 7) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[4+j] >> 8) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[4+j] >> 9) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[4+j] >> 10) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[4+j] >> 11) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[4+j] >> 12) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[4+j] >> 13) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[4+j] >> 14) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[4+j] >> 15) & 0x1;
	}
}

template<typename T>
void KVSE_unpack_32len_1bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 25) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 26) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 27) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 28) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 29) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 30) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 31) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j]) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 1) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 2) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 3) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 4) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 5) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[4+j] >> 6) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[4+j] >> 7) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[4+j] >> 8) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[4+j] >> 9) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[4+j] >> 10) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[4+j] >> 11) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[4+j] >> 12) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[4+j] >> 13) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[4+j] >> 14) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[4+j] >> 15) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[4+j] >> 16) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[4+j] >> 17) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[4+j] >> 18) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[4+j] >> 19) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[4+j] >> 20) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[4+j] >> 21) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[4+j] >> 22) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[4+j] >> 23) & 0x1;
	}
}

template<typename T>
void KVSE_unpack_32len_2bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 2) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 4) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 6) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 8) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 10) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 12) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 14) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[j] >> 16) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[j] >> 18) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[j] >> 20) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[j] >> 22) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[j] >> 24) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[j] >> 26) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[j] >> 28) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[j] >> 30) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[4+j]) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[4+j] >> 2) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[4+j] >> 4) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[4+j] >> 6) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[4+j] >> 8) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[4+j] >> 10) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[4+j] >> 12) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[4+j] >> 14) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[4+j] >> 16) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[4+j] >> 18) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[4+j] >> 20) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[4+j] >> 22) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[4+j] >> 24) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[4+j] >> 26) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[4+j] >> 28) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[4+j] >> 30) & 0x3;
	}
}

template<typename T>
void KVSE_unpack_32len_2bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 10) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 12) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 14) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 16) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 18) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 20) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 22) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[j] >> 24) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[j] >> 26) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[j] >> 28) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[j] >> 30) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j]) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 2) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[4+j] >> 4) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[4+j] >> 6) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[4+j] >> 8) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[4+j] >> 10) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[4+j] >> 12) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[4+j] >> 14) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[4+j] >> 16) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[4+j] >> 18) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[4+j] >> 20) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[4+j] >> 22) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[4+j] >> 24) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[4+j] >> 26) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[4+j] >> 28) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[4+j] >> 30) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[8+j]) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[8+j] >> 2) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[8+j] >> 4) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[8+j] >> 6) & 0x3;
	}
}

template<typename T>
void KVSE_unpack_32len_2bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 18) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 20) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 22) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 24) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 26) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 28) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 30) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j]) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 2) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 4) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 6) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 8) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 10) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[4+j] >> 12) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[4+j] >> 14) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[4+j] >> 16) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[4+j] >> 18) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[4+j] >> 20) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[4+j] >> 22) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[4+j] >> 24) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[4+j] >> 26) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[4+j] >> 28) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[4+j] >> 30) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[8+j]) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[8+j] >> 2) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[8+j] >> 4) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[8+j] >> 6) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[8+j] >> 8) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[8+j] >> 10) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[8+j] >> 12) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[8+j] >> 14) & 0x3;
	}
}

template<typename T>
void KVSE_unpack_32len_2bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 26) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 28) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 30) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j]) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 2) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 4) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 6) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 8) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 10) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 12) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 14) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 16) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 18) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[4+j] >> 20) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[4+j] >> 22) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[4+j] >> 24) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[4+j] >> 26) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[4+j] >> 28) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[4+j] >> 30) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[8+j]) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[8+j] >> 2) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[8+j] >> 4) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[8+j] >> 6) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[8+j] >> 8) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[8+j] >> 10) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[8+j] >> 12) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[8+j] >> 14) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[8+j] >> 16) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[8+j] >> 18) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[8+j] >> 20) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[8+j] >> 22) & 0x3;
	}
}

template<typename T>
void KVSE_unpack_32len_3bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 3) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 6) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 9) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 12) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 15) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 18) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 21) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[j] >> 24) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[j] >> 27) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[j] >> 30) & 0x7;
		des[40+j] |= (src[4+j] << 2) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 1) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 4) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 7) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[4+j] >> 10) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[4+j] >> 13) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[4+j] >> 16) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[4+j] >> 19) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[4+j] >> 22) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[4+j] >> 25) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[4+j] >> 28) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[4+j] >> 31) & 0x7;
		des[84+j] |= (src[8+j] << 1) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[8+j] >> 2) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[8+j] >> 5) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[8+j] >> 8) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[8+j] >> 11) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[8+j] >> 14) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[8+j] >> 17) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[8+j] >> 20) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[8+j] >> 23) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[8+j] >> 26) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[8+j] >> 29) & 0x7;
	}
}

template<typename T>
void KVSE_unpack_32len_3bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 11) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 14) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 17) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 20) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 23) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 26) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 29) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j]) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 3) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 6) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 9) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 12) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 15) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[4+j] >> 18) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[4+j] >> 21) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[4+j] >> 24) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[4+j] >> 27) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[4+j] >> 30) & 0x7;
		des[72+j] |= (src[8+j] << 2) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[8+j] >> 1) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[8+j] >> 4) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[8+j] >> 7) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[8+j] >> 10) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[8+j] >> 13) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[8+j] >> 16) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[8+j] >> 19) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[8+j] >> 22) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[8+j] >> 25) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[8+j] >> 28) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[8+j] >> 31) & 0x7;
		des[116+j] |= (src[12+j] << 1) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[12+j] >> 2) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[12+j] >> 5) & 0x7;
	}
}

template<typename T>
void KVSE_unpack_32len_3bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 19) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 22) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 25) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 28) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 31) & 0x7;
		des[20+j] |= (src[4+j] << 1) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 2) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 5) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 8) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 11) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 14) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 17) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 20) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 23) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[4+j] >> 26) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[4+j] >> 29) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[8+j]) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[8+j] >> 3) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[8+j] >> 6) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[8+j] >> 9) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[8+j] >> 12) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[8+j] >> 15) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[8+j] >> 18) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[8+j] >> 21) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[8+j] >> 24) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[8+j] >> 27) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[8+j] >> 30) & 0x7;
		des[104+j] |= (src[12+j] << 2) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[12+j] >> 1) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[12+j] >> 4) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[12+j] >> 7) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[12+j] >> 10) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[12+j] >> 13) & 0x7;
	}
}

template<typename T>
void KVSE_unpack_32len_3bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 27) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 30) & 0x7;
		des[8+j] |= (src[4+j] << 2) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 1) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 4) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 7) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 10) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 13) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 16) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 19) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 22) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 25) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 28) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 31) & 0x7;
		des[52+j] |= (src[8+j] << 1) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j] >> 2) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[8+j] >> 5) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[8+j] >> 8) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[8+j] >> 11) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[8+j] >> 14) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[8+j] >> 17) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[8+j] >> 20) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[8+j] >> 23) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[8+j] >> 26) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[8+j] >> 29) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[12+j]) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[12+j] >> 3) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[12+j] >> 6) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[12+j] >> 9) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[12+j] >> 12) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[12+j] >> 15) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[12+j] >> 18) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[12+j] >> 21) & 0x7;
	}
}

template<typename T>
void KVSE_unpack_32len_4bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[4+j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[4+j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[8+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[8+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[8+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[8+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[8+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[8+j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[8+j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[8+j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[12+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[12+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[12+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[12+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[12+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[12+j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[12+j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[12+j] >> 28) & 0xf;
	}
}

template<typename T>
void KVSE_unpack_32len_4bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[8+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[8+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[8+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[8+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[8+j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[8+j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[8+j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[12+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[12+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[12+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[12+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[12+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[12+j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[12+j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[12+j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[16+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[16+j] >> 4) & 0xf;
	}
}

template<typename T>
void KVSE_unpack_32len_4bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[8+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[8+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[8+j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[8+j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[8+j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[12+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[12+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[12+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[12+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[12+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[12+j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[12+j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[12+j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[16+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[16+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[16+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[16+j] >> 12) & 0xf;
	}
}

template<typename T>
void KVSE_unpack_32len_4bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[8+j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[8+j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[8+j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[12+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[12+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[12+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[12+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[12+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[12+j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[12+j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[12+j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[16+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[16+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[16+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[16+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[16+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[16+j] >> 20) & 0xf;
	}
}

template<typename T>
void KVSE_unpack_32len_5bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 5) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 10) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 15) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 20) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 25) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 30) & 0x1f;
		des[24+j] |= (src[4+j] << 2) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 3) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 8) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 13) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 18) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 23) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 28) & 0x1f;
		des[48+j] |= (src[8+j] << 4) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 1) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j] >> 6) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[8+j] >> 11) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[8+j] >> 16) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[8+j] >> 21) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[8+j] >> 26) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[8+j] >> 31) & 0x1f;
		des[76+j] |= (src[12+j] << 1) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[12+j] >> 4) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[12+j] >> 9) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[12+j] >> 14) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[12+j] >> 19) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[12+j] >> 24) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[12+j] >> 29) & 0x1f;
		des[100+j] |= (src[16+j] << 3) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[16+j] >> 2) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[16+j] >> 7) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[16+j] >> 12) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[16+j] >> 17) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[16+j] >> 22) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[16+j] >> 27) & 0x1f;
	}
}

template<typename T>
void KVSE_unpack_32len_5bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 13) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 18) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 23) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 28) & 0x1f;
		des[16+j] |= (src[4+j] << 4) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 1) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 6) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 11) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 16) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 21) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 26) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 31) & 0x1f;
		des[44+j] |= (src[8+j] << 1) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j] >> 4) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 9) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j] >> 14) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[8+j] >> 19) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[8+j] >> 24) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[8+j] >> 29) & 0x1f;
		des[68+j] |= (src[12+j] << 3) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[12+j] >> 2) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[12+j] >> 7) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[12+j] >> 12) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[12+j] >> 17) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[12+j] >> 22) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[12+j] >> 27) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[16+j]) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[16+j] >> 5) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[16+j] >> 10) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[16+j] >> 15) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[16+j] >> 20) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[16+j] >> 25) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[16+j] >> 30) & 0x1f;
		des[120+j] |= (src[20+j] << 2) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[20+j] >> 3) & 0x1f;
	}
}

template<typename T>
void KVSE_unpack_32len_5bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 21) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 26) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 31) & 0x1f;
		des[12+j] |= (src[4+j] << 1) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 4) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 9) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 14) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 19) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 24) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 29) & 0x1f;
		des[36+j] |= (src[8+j] << 3) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 2) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 7) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j] >> 12) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 17) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j] >> 22) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[8+j] >> 27) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[12+j]) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[12+j] >> 5) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[12+j] >> 10) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[12+j] >> 15) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[12+j] >> 20) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[12+j] >> 25) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[12+j] >> 30) & 0x1f;
		des[88+j] |= (src[16+j] << 2) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[16+j] >> 3) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[16+j] >> 8) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[16+j] >> 13) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[16+j] >> 18) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[16+j] >> 23) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[16+j] >> 28) & 0x1f;
		des[112+j] |= (src[20+j] << 4) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[20+j] >> 1) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[20+j] >> 6) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[20+j] >> 11) & 0x1f;
	}
}

template<typename T>
void KVSE_unpack_32len_5bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 29) & 0x1f;
		des[4+j] |= (src[4+j] << 3) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 2) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 7) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 12) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 17) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 22) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 27) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j]) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 5) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 10) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 15) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j] >> 20) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 25) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j] >> 30) & 0x1f;
		des[56+j] |= (src[12+j] << 2) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[12+j] >> 3) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[12+j] >> 8) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[12+j] >> 13) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[12+j] >> 18) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[12+j] >> 23) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[12+j] >> 28) & 0x1f;
		des[80+j] |= (src[16+j] << 4) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[16+j] >> 1) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[16+j] >> 6) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[16+j] >> 11) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[16+j] >> 16) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[16+j] >> 21) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[16+j] >> 26) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[16+j] >> 31) & 0x1f;
		des[108+j] |= (src[20+j] << 1) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[20+j] >> 4) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[20+j] >> 9) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[20+j] >> 14) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[20+j] >> 19) & 0x1f;
	}
}

template<typename T>
void KVSE_unpack_32len_6bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 6) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 12) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 18) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 24) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 30) & 0x3f;
		des[20+j] |= (src[4+j] << 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 10) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 16) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 22) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 28) & 0x3f;
		des[40+j] |= (src[8+j] << 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j] >> 8) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 14) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j] >> 20) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[8+j] >> 26) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[12+j]) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[12+j] >> 6) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[12+j] >> 12) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[12+j] >> 18) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[12+j] >> 24) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[12+j] >> 30) & 0x3f;
		des[84+j] |= (src[16+j] << 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[16+j] >> 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[16+j] >> 10) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[16+j] >> 16) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[16+j] >> 22) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[16+j] >> 28) & 0x3f;
		des[104+j] |= (src[20+j] << 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[20+j] >> 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[20+j] >> 8) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[20+j] >> 14) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[20+j] >> 20) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[20+j] >> 26) & 0x3f;
	}
}

template<typename T>
void KVSE_unpack_32len_6bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 14) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 20) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 26) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j]) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 6) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 12) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 18) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 24) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 30) & 0x3f;
		des[36+j] |= (src[8+j] << 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 10) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j] >> 16) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 22) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j] >> 28) & 0x3f;
		des[56+j] |= (src[12+j] << 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[12+j] >> 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[12+j] >> 8) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[12+j] >> 14) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[12+j] >> 20) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[12+j] >> 26) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[16+j]) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[16+j] >> 6) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[16+j] >> 12) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[16+j] >> 18) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[16+j] >> 24) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[16+j] >> 30) & 0x3f;
		des[100+j] |= (src[20+j] << 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[20+j] >> 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[20+j] >> 10) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[20+j] >> 16) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[20+j] >> 22) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[20+j] >> 28) & 0x3f;
		des[120+j] |= (src[24+j] << 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[24+j] >> 2) & 0x3f;
	}
}

template<typename T>
void KVSE_unpack_32len_6bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 22) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 28) & 0x3f;
		des[8+j] |= (src[4+j] << 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 8) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 14) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 20) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 26) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j]) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 6) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 12) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 18) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j] >> 24) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 30) & 0x3f;
		des[52+j] |= (src[12+j] << 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[12+j] >> 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[12+j] >> 10) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[12+j] >> 16) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[12+j] >> 22) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[12+j] >> 28) & 0x3f;
		des[72+j] |= (src[16+j] << 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[16+j] >> 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[16+j] >> 8) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[16+j] >> 14) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[16+j] >> 20) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[16+j] >> 26) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[20+j]) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[20+j] >> 6) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[20+j] >> 12) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[20+j] >> 18) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[20+j] >> 24) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[20+j] >> 30) & 0x3f;
		des[116+j] |= (src[24+j] << 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[24+j] >> 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[24+j] >> 10) & 0x3f;
	}
}

template<typename T>
void KVSE_unpack_32len_6bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 30) & 0x3f;
		des[4+j] |= (src[4+j] << 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 10) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 16) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 22) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 28) & 0x3f;
		des[24+j] |= (src[8+j] << 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 8) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 14) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 20) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 26) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j]) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[12+j] >> 6) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[12+j] >> 12) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[12+j] >> 18) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[12+j] >> 24) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[12+j] >> 30) & 0x3f;
		des[68+j] |= (src[16+j] << 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[16+j] >> 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[16+j] >> 10) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[16+j] >> 16) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[16+j] >> 22) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[16+j] >> 28) & 0x3f;
		des[88+j] |= (src[20+j] << 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[20+j] >> 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[20+j] >> 8) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[20+j] >> 14) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[20+j] >> 20) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[20+j] >> 26) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[24+j]) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[24+j] >> 6) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[24+j] >> 12) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[24+j] >> 18) & 0x3f;
	}
}

template<typename T>
void KVSE_unpack_32len_7bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 7) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 14) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 21) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 28) & 0x7f;
		des[16+j] |= (src[4+j] << 4) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 3) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 10) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 17) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 24) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 31) & 0x7f;
		des[36+j] |= (src[8+j] << 1) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 6) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 13) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j] >> 20) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 27) & 0x7f;
		des[52+j] |= (src[12+j] << 5) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[12+j] >> 2) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[12+j] >> 9) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[12+j] >> 16) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[12+j] >> 23) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[12+j] >> 30) & 0x7f;
		des[72+j] |= (src[16+j] << 2) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[16+j] >> 5) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[16+j] >> 12) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[16+j] >> 19) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[16+j] >> 26) & 0x7f;
		des[88+j] |= (src[20+j] << 6) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[20+j] >> 1) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[20+j] >> 8) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[20+j] >> 15) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[20+j] >> 22) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[20+j] >> 29) & 0x7f;
		des[108+j] |= (src[24+j] << 3) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[24+j] >> 4) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[24+j] >> 11) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[24+j] >> 18) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[24+j] >> 25) & 0x7f;
	}
}

template<typename T>
void KVSE_unpack_32len_7bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 15) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 22) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 29) & 0x7f;
		des[12+j] |= (src[4+j] << 3) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 4) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 11) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 18) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 25) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j]) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 7) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 14) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 21) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j] >> 28) & 0x7f;
		des[48+j] |= (src[12+j] << 4) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[12+j] >> 3) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[12+j] >> 10) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[12+j] >> 17) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[12+j] >> 24) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[12+j] >> 31) & 0x7f;
		des[68+j] |= (src[16+j] << 1) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[16+j] >> 6) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[16+j] >> 13) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[16+j] >> 20) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[16+j] >> 27) & 0x7f;
		des[84+j] |= (src[20+j] << 5) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[20+j] >> 2) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[20+j] >> 9) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[20+j] >> 16) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[20+j] >> 23) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[20+j] >> 30) & 0x7f;
		des[104+j] |= (src[24+j] << 2) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[24+j] >> 5) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[24+j] >> 12) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[24+j] >> 19) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[24+j] >> 26) & 0x7f;
		des[120+j] |= (src[28+j] << 6) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[28+j] >> 1) & 0x7f;
	}
}

template<typename T>
void KVSE_unpack_32len_7bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 23) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 30) & 0x7f;
		des[8+j] |= (src[4+j] << 2) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 5) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 12) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 19) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 26) & 0x7f;
		des[24+j] |= (src[8+j] << 6) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 1) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 8) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 15) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 22) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 29) & 0x7f;
		des[44+j] |= (src[12+j] << 3) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j] >> 4) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[12+j] >> 11) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[12+j] >> 18) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[12+j] >> 25) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[16+j]) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[16+j] >> 7) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[16+j] >> 14) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[16+j] >> 21) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[16+j] >> 28) & 0x7f;
		des[80+j] |= (src[20+j] << 4) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[20+j] >> 3) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[20+j] >> 10) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[20+j] >> 17) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[20+j] >> 24) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[20+j] >> 31) & 0x7f;
		des[100+j] |= (src[24+j] << 1) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[24+j] >> 6) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[24+j] >> 13) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[24+j] >> 20) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[24+j] >> 27) & 0x7f;
		des[116+j] |= (src[28+j] << 5) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[28+j] >> 2) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[28+j] >> 9) & 0x7f;
	}
}

template<typename T>
void KVSE_unpack_32len_7bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 31) & 0x7f;
		des[4+j] |= (src[4+j] << 1) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 6) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 13) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 20) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 27) & 0x7f;
		des[20+j] |= (src[8+j] << 5) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 2) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 9) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 16) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 23) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 30) & 0x7f;
		des[40+j] |= (src[12+j] << 2) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 5) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j] >> 12) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[12+j] >> 19) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[12+j] >> 26) & 0x7f;
		des[56+j] |= (src[16+j] << 6) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j] >> 1) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[16+j] >> 8) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[16+j] >> 15) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[16+j] >> 22) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[16+j] >> 29) & 0x7f;
		des[76+j] |= (src[20+j] << 3) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[20+j] >> 4) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[20+j] >> 11) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[20+j] >> 18) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[20+j] >> 25) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[24+j]) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[24+j] >> 7) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[24+j] >> 14) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[24+j] >> 21) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[24+j] >> 28) & 0x7f;
		des[112+j] |= (src[28+j] << 4) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[28+j] >> 3) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[28+j] >> 10) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[28+j] >> 17) & 0x7f;
	}
}

template<typename T>
void KVSE_unpack_32len_8bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[12+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[12+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[12+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[16+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[16+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[16+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[16+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[20+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[20+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[20+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[20+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[24+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[24+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[24+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[24+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[28+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[28+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[28+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[28+j] >> 24) & 0xff;
	}
}

template<typename T>
void KVSE_unpack_32len_8bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[12+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[12+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[16+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[16+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[16+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[20+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[20+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[20+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[20+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[24+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[24+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[24+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[24+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[28+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[28+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[28+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[28+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[32+j]) & 0xff;
	}
}

template<typename T>
void KVSE_unpack_32len_8bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[12+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[16+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[16+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[16+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[20+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[20+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[20+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[20+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[24+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[24+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[24+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[24+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[28+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[28+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[28+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[28+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[32+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[32+j] >> 8) & 0xff;
	}
}

template<typename T>
void KVSE_unpack_32len_8bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[16+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[16+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[20+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[20+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[20+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[20+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[24+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[24+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[24+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[24+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[28+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[28+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[28+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[28+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[32+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[32+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[32+j] >> 16) & 0xff;
	}
}

template<typename T>
void KVSE_unpack_32len_9bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 9) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 18) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 27) & 0x1ff;
		des[12+j] |= (src[4+j] << 5) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 4) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 13) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 22) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 31) & 0x1ff;
		des[28+j] |= (src[8+j] << 1) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 8) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 17) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 26) & 0x1ff;
		des[40+j] |= (src[12+j] << 6) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 3) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j] >> 12) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[12+j] >> 21) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[12+j] >> 30) & 0x1ff;
		des[56+j] |= (src[16+j] << 2) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j] >> 7) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[16+j] >> 16) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[16+j] >> 25) & 0x1ff;
		des[68+j] |= (src[20+j] << 7) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[20+j] >> 2) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[20+j] >> 11) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[20+j] >> 20) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[20+j] >> 29) & 0x1ff;
		des[84+j] |= (src[24+j] << 3) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[24+j] >> 6) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[24+j] >> 15) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[24+j] >> 24) & 0x1ff;
		des[96+j] |= (src[28+j] << 8) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[28+j] >> 1) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[28+j] >> 10) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[28+j] >> 19) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[28+j] >> 28) & 0x1ff;
		des[112+j] |= (src[32+j] << 4) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[32+j] >> 5) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[32+j] >> 14) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[32+j] >> 23) & 0x1ff;
	}
}

template<typename T>
void KVSE_unpack_32len_9bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 17) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 26) & 0x1ff;
		des[8+j] |= (src[4+j] << 6) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 3) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 12) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 21) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 30) & 0x1ff;
		des[24+j] |= (src[8+j] << 2) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 7) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 16) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 25) & 0x1ff;
		des[36+j] |= (src[12+j] << 7) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 2) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 11) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j] >> 20) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[12+j] >> 29) & 0x1ff;
		des[52+j] |= (src[16+j] << 3) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[16+j] >> 6) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j] >> 15) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[16+j] >> 24) & 0x1ff;
		des[64+j] |= (src[20+j] << 8) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[20+j] >> 1) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[20+j] >> 10) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[20+j] >> 19) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[20+j] >> 28) & 0x1ff;
		des[80+j] |= (src[24+j] << 4) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[24+j] >> 5) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[24+j] >> 14) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[24+j] >> 23) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[28+j]) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[28+j] >> 9) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[28+j] >> 18) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[28+j] >> 27) & 0x1ff;
		des[108+j] |= (src[32+j] << 5) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[32+j] >> 4) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[32+j] >> 13) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[32+j] >> 22) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[32+j] >> 31) & 0x1ff;
		des[124+j] |= (src[36+j] << 1) & 0x1ff;
	}
}

template<typename T>
void KVSE_unpack_32len_9bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 25) & 0x1ff;
		des[4+j] |= (src[4+j] << 7) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 2) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 11) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 20) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 29) & 0x1ff;
		des[20+j] |= (src[8+j] << 3) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 6) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 15) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 24) & 0x1ff;
		des[32+j] |= (src[12+j] << 8) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 1) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 10) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 19) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j] >> 28) & 0x1ff;
		des[48+j] |= (src[16+j] << 4) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 5) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[16+j] >> 14) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j] >> 23) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[20+j]) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[20+j] >> 9) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[20+j] >> 18) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[20+j] >> 27) & 0x1ff;
		des[76+j] |= (src[24+j] << 5) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[24+j] >> 4) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[24+j] >> 13) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[24+j] >> 22) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[24+j] >> 31) & 0x1ff;
		des[92+j] |= (src[28+j] << 1) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[28+j] >> 8) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[28+j] >> 17) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[28+j] >> 26) & 0x1ff;
		des[104+j] |= (src[32+j] << 6) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[32+j] >> 3) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[32+j] >> 12) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[32+j] >> 21) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[32+j] >> 30) & 0x1ff;
		des[120+j] |= (src[36+j] << 2) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[36+j] >> 7) & 0x1ff;
	}
}

template<typename T>
void KVSE_unpack_32len_9bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x1ff;
		des[j] |= (src[4+j] << 8) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 1) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 10) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 19) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 28) & 0x1ff;
		des[16+j] |= (src[8+j] << 4) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 5) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 14) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 23) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j]) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 9) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 18) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 27) & 0x1ff;
		des[44+j] |= (src[16+j] << 5) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j] >> 4) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 13) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[16+j] >> 22) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j] >> 31) & 0x1ff;
		des[60+j] |= (src[20+j] << 1) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[20+j] >> 8) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[20+j] >> 17) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[20+j] >> 26) & 0x1ff;
		des[72+j] |= (src[24+j] << 6) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[24+j] >> 3) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[24+j] >> 12) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[24+j] >> 21) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[24+j] >> 30) & 0x1ff;
		des[88+j] |= (src[28+j] << 2) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[28+j] >> 7) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[28+j] >> 16) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[28+j] >> 25) & 0x1ff;
		des[100+j] |= (src[32+j] << 7) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[32+j] >> 2) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[32+j] >> 11) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[32+j] >> 20) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[32+j] >> 29) & 0x1ff;
		des[116+j] |= (src[36+j] << 3) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[36+j] >> 6) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[36+j] >> 15) & 0x1ff;
	}
}

template<typename T>
void KVSE_unpack_32len_10bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 10) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 20) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 30) & 0x3ff;
		des[12+j] |= (src[4+j] << 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 18) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 28) & 0x3ff;
		des[24+j] |= (src[8+j] << 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 16) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 26) & 0x3ff;
		des[36+j] |= (src[12+j] << 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 14) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j] >> 24) & 0x3ff;
		des[48+j] |= (src[16+j] << 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[16+j] >> 12) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j] >> 22) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[20+j]) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[20+j] >> 10) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[20+j] >> 20) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[20+j] >> 30) & 0x3ff;
		des[76+j] |= (src[24+j] << 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[24+j] >> 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[24+j] >> 18) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[24+j] >> 28) & 0x3ff;
		des[88+j] |= (src[28+j] << 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[28+j] >> 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[28+j] >> 16) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[28+j] >> 26) & 0x3ff;
		des[100+j] |= (src[32+j] << 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[32+j] >> 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[32+j] >> 14) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[32+j] >> 24) & 0x3ff;
		des[112+j] |= (src[36+j] << 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[36+j] >> 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[36+j] >> 12) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[36+j] >> 22) & 0x3ff;
	}
}

template<typename T>
void KVSE_unpack_32len_10bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 18) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 28) & 0x3ff;
		des[8+j] |= (src[4+j] << 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 16) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 26) & 0x3ff;
		des[20+j] |= (src[8+j] << 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 14) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 24) & 0x3ff;
		des[32+j] |= (src[12+j] << 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 12) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 22) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j]) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 10) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[16+j] >> 20) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j] >> 30) & 0x3ff;
		des[60+j] |= (src[20+j] << 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[20+j] >> 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[20+j] >> 18) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[20+j] >> 28) & 0x3ff;
		des[72+j] |= (src[24+j] << 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[24+j] >> 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[24+j] >> 16) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[24+j] >> 26) & 0x3ff;
		des[84+j] |= (src[28+j] << 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[28+j] >> 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[28+j] >> 14) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[28+j] >> 24) & 0x3ff;
		des[96+j] |= (src[32+j] << 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[32+j] >> 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[32+j] >> 12) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[32+j] >> 22) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[36+j]) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[36+j] >> 10) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[36+j] >> 20) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[36+j] >> 30) & 0x3ff;
		des[124+j] |= (src[40+j] << 2) & 0x3ff;
	}
}

template<typename T>
void KVSE_unpack_32len_10bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 26) & 0x3ff;
		des[4+j] |= (src[4+j] << 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 14) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 24) & 0x3ff;
		des[16+j] |= (src[8+j] << 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 12) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 22) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j]) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 10) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 20) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 30) & 0x3ff;
		des[44+j] |= (src[16+j] << 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j] >> 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 18) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[16+j] >> 28) & 0x3ff;
		des[56+j] |= (src[20+j] << 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[20+j] >> 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[20+j] >> 16) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[20+j] >> 26) & 0x3ff;
		des[68+j] |= (src[24+j] << 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[24+j] >> 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[24+j] >> 14) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[24+j] >> 24) & 0x3ff;
		des[80+j] |= (src[28+j] << 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[28+j] >> 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[28+j] >> 12) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[28+j] >> 22) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[32+j]) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[32+j] >> 10) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[32+j] >> 20) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[32+j] >> 30) & 0x3ff;
		des[108+j] |= (src[36+j] << 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[36+j] >> 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[36+j] >> 18) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[36+j] >> 28) & 0x3ff;
		des[120+j] |= (src[40+j] << 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[40+j] >> 6) & 0x3ff;
	}
}

template<typename T>
void KVSE_unpack_32len_10bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x3ff;
		des[j] |= (src[4+j] << 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 12) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 22) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j]) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 10) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 20) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 30) & 0x3ff;
		des[28+j] |= (src[12+j] << 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j] >> 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 18) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 28) & 0x3ff;
		des[40+j] |= (src[16+j] << 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j] >> 16) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 26) & 0x3ff;
		des[52+j] |= (src[20+j] << 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[20+j] >> 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[20+j] >> 14) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[20+j] >> 24) & 0x3ff;
		des[64+j] |= (src[24+j] << 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[24+j] >> 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[24+j] >> 12) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[24+j] >> 22) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[28+j]) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[28+j] >> 10) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[28+j] >> 20) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[28+j] >> 30) & 0x3ff;
		des[92+j] |= (src[32+j] << 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[32+j] >> 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[32+j] >> 18) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[32+j] >> 28) & 0x3ff;
		des[104+j] |= (src[36+j] << 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[36+j] >> 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[36+j] >> 16) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[36+j] >> 26) & 0x3ff;
		des[116+j] |= (src[40+j] << 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[40+j] >> 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[40+j] >> 14) & 0x3ff;
	}
}

template<typename T>
void KVSE_unpack_32len_11bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 11) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 22) & 0x7ff;
		des[8+j] |= (src[4+j] << 10) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 1) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 12) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 23) & 0x7ff;
		des[20+j] |= (src[8+j] << 9) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 2) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 13) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 24) & 0x7ff;
		des[32+j] |= (src[12+j] << 8) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 3) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 14) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 25) & 0x7ff;
		des[44+j] |= (src[16+j] << 7) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j] >> 4) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 15) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[16+j] >> 26) & 0x7ff;
		des[56+j] |= (src[20+j] << 6) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[20+j] >> 5) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[20+j] >> 16) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[20+j] >> 27) & 0x7ff;
		des[68+j] |= (src[24+j] << 5) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[24+j] >> 6) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[24+j] >> 17) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[24+j] >> 28) & 0x7ff;
		des[80+j] |= (src[28+j] << 4) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[28+j] >> 7) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[28+j] >> 18) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[28+j] >> 29) & 0x7ff;
		des[92+j] |= (src[32+j] << 3) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[32+j] >> 8) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[32+j] >> 19) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[32+j] >> 30) & 0x7ff;
		des[104+j] |= (src[36+j] << 2) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[36+j] >> 9) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[36+j] >> 20) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[36+j] >> 31) & 0x7ff;
		des[116+j] |= (src[40+j] << 1) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[40+j] >> 10) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[40+j] >> 21) & 0x7ff;
	}
}

template<typename T>
void KVSE_unpack_32len_11bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 19) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 30) & 0x7ff;
		des[8+j] |= (src[4+j] << 2) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 9) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 20) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 31) & 0x7ff;
		des[20+j] |= (src[8+j] << 1) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 10) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 21) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j]) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 11) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 22) & 0x7ff;
		des[40+j] |= (src[16+j] << 10) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 1) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j] >> 12) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 23) & 0x7ff;
		des[52+j] |= (src[20+j] << 9) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[20+j] >> 2) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[20+j] >> 13) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[20+j] >> 24) & 0x7ff;
		des[64+j] |= (src[24+j] << 8) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[24+j] >> 3) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[24+j] >> 14) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[24+j] >> 25) & 0x7ff;
		des[76+j] |= (src[28+j] << 7) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[28+j] >> 4) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[28+j] >> 15) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[28+j] >> 26) & 0x7ff;
		des[88+j] |= (src[32+j] << 6) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[32+j] >> 5) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[32+j] >> 16) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[32+j] >> 27) & 0x7ff;
		des[100+j] |= (src[36+j] << 5) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[36+j] >> 6) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[36+j] >> 17) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[36+j] >> 28) & 0x7ff;
		des[112+j] |= (src[40+j] << 4) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[40+j] >> 7) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[40+j] >> 18) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[40+j] >> 29) & 0x7ff;
		des[124+j] |= (src[44+j] << 3) & 0x7ff;
	}
}

template<typename T>
void KVSE_unpack_32len_11bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 27) & 0x7ff;
		des[4+j] |= (src[4+j] << 5) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 6) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 17) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 28) & 0x7ff;
		des[16+j] |= (src[8+j] << 4) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 7) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 18) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 29) & 0x7ff;
		des[28+j] |= (src[12+j] << 3) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j] >> 8) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 19) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 30) & 0x7ff;
		des[40+j] |= (src[16+j] << 2) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 9) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j] >> 20) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 31) & 0x7ff;
		des[52+j] |= (src[20+j] << 1) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[20+j] >> 10) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[20+j] >> 21) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[24+j]) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[24+j] >> 11) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[24+j] >> 22) & 0x7ff;
		des[72+j] |= (src[28+j] << 10) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[28+j] >> 1) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[28+j] >> 12) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[28+j] >> 23) & 0x7ff;
		des[84+j] |= (src[32+j] << 9) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[32+j] >> 2) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[32+j] >> 13) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[32+j] >> 24) & 0x7ff;
		des[96+j] |= (src[36+j] << 8) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[36+j] >> 3) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[36+j] >> 14) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[36+j] >> 25) & 0x7ff;
		des[108+j] |= (src[40+j] << 7) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[40+j] >> 4) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[40+j] >> 15) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[40+j] >> 26) & 0x7ff;
		des[120+j] |= (src[44+j] << 6) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[44+j] >> 5) & 0x7ff;
	}
}

template<typename T>
void KVSE_unpack_32len_11bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x7ff;
		des[j] |= (src[4+j] << 8) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 3) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 14) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 25) & 0x7ff;
		des[12+j] |= (src[8+j] << 7) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 4) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 15) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 26) & 0x7ff;
		des[24+j] |= (src[12+j] << 6) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 5) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j] >> 16) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 27) & 0x7ff;
		des[36+j] |= (src[16+j] << 5) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[16+j] >> 6) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 17) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j] >> 28) & 0x7ff;
		des[48+j] |= (src[20+j] << 4) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[20+j] >> 7) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[20+j] >> 18) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[20+j] >> 29) & 0x7ff;
		des[60+j] |= (src[24+j] << 3) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[24+j] >> 8) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[24+j] >> 19) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[24+j] >> 30) & 0x7ff;
		des[72+j] |= (src[28+j] << 2) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[28+j] >> 9) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[28+j] >> 20) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[28+j] >> 31) & 0x7ff;
		des[84+j] |= (src[32+j] << 1) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[32+j] >> 10) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[32+j] >> 21) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[36+j]) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[36+j] >> 11) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[36+j] >> 22) & 0x7ff;
		des[104+j] |= (src[40+j] << 10) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[40+j] >> 1) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[40+j] >> 12) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[40+j] >> 23) & 0x7ff;
		des[116+j] |= (src[44+j] << 9) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[44+j] >> 2) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[44+j] >> 13) & 0x7ff;
	}
}

template<typename T>
void KVSE_unpack_32len_12bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 24) & 0xfff;
		des[8+j] |= (src[4+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 28) & 0xfff;
		des[20+j] |= (src[8+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 24) & 0xfff;
		des[40+j] |= (src[16+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 28) & 0xfff;
		des[52+j] |= (src[20+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[20+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[20+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[24+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[24+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[24+j] >> 24) & 0xfff;
		des[72+j] |= (src[28+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[28+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[28+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[28+j] >> 28) & 0xfff;
		des[84+j] |= (src[32+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[32+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[32+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[36+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[36+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[36+j] >> 24) & 0xfff;
		des[104+j] |= (src[40+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[40+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[40+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[40+j] >> 28) & 0xfff;
		des[116+j] |= (src[44+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[44+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[44+j] >> 20) & 0xfff;
	}
}

template<typename T>
void KVSE_unpack_32len_12bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 24) & 0xfff;
		des[16+j] |= (src[8+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 28) & 0xfff;
		des[28+j] |= (src[12+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[16+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j] >> 24) & 0xfff;
		des[48+j] |= (src[20+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[20+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[20+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[20+j] >> 28) & 0xfff;
		des[60+j] |= (src[24+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[24+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[24+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[28+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[28+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[28+j] >> 24) & 0xfff;
		des[80+j] |= (src[32+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[32+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[32+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[32+j] >> 28) & 0xfff;
		des[92+j] |= (src[36+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[36+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[36+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[40+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[40+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[40+j] >> 24) & 0xfff;
		des[112+j] |= (src[44+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[44+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[44+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[44+j] >> 28) & 0xfff;
		des[124+j] |= (src[48+j] << 4) & 0xfff;
	}
}

template<typename T>
void KVSE_unpack_32len_12bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 28) & 0xfff;
		des[4+j] |= (src[4+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 24) & 0xfff;
		des[24+j] |= (src[12+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 28) & 0xfff;
		des[36+j] |= (src[16+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[16+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[20+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[20+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[20+j] >> 24) & 0xfff;
		des[56+j] |= (src[24+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[24+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[24+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[24+j] >> 28) & 0xfff;
		des[68+j] |= (src[28+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[28+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[28+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[32+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[32+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[32+j] >> 24) & 0xfff;
		des[88+j] |= (src[36+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[36+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[36+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[36+j] >> 28) & 0xfff;
		des[100+j] |= (src[40+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[40+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[40+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[44+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[44+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[44+j] >> 24) & 0xfff;
		des[120+j] |= (src[48+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[48+j] >> 4) & 0xfff;
	}
}

template<typename T>
void KVSE_unpack_32len_12bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0xfff;
		des[j] |= (src[4+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 28) & 0xfff;
		des[12+j] |= (src[8+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j] >> 24) & 0xfff;
		des[32+j] |= (src[16+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[16+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[16+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 28) & 0xfff;
		des[44+j] |= (src[20+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[20+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[20+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[24+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[24+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[24+j] >> 24) & 0xfff;
		des[64+j] |= (src[28+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[28+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[28+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[28+j] >> 28) & 0xfff;
		des[76+j] |= (src[32+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[32+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[32+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[36+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[36+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[36+j] >> 24) & 0xfff;
		des[96+j] |= (src[40+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[40+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[40+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[40+j] >> 28) & 0xfff;
		des[108+j] |= (src[44+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[44+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[44+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[48+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[48+j] >> 12) & 0xfff;
	}
}

template<typename T>
void KVSE_unpack_32len_16bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[16+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[16+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[20+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[20+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[24+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[24+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[28+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[28+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[32+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[32+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[36+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[36+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[40+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[40+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[44+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[44+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[48+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[48+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[52+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[52+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[56+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[56+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[60+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[60+j] >> 16) & 0xffff;
	}
}

template<typename T>
void KVSE_unpack_32len_16bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 24) & 0xffff;
		des[4+j] |= (src[4+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 24) & 0xffff;
		des[12+j] |= (src[8+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 24) & 0xffff;
		des[20+j] |= (src[12+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 24) & 0xffff;
		des[28+j] |= (src[16+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[16+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[16+j] >> 24) & 0xffff;
		des[36+j] |= (src[20+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[20+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[20+j] >> 24) & 0xffff;
		des[44+j] |= (src[24+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[24+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[24+j] >> 24) & 0xffff;
		des[52+j] |= (src[28+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[28+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[28+j] >> 24) & 0xffff;
		des[60+j] |= (src[32+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[32+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[32+j] >> 24) & 0xffff;
		des[68+j] |= (src[36+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[36+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[36+j] >> 24) & 0xffff;
		des[76+j] |= (src[40+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[40+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[40+j] >> 24) & 0xffff;
		des[84+j] |= (src[44+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[44+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[44+j] >> 24) & 0xffff;
		des[92+j] |= (src[48+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[48+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[48+j] >> 24) & 0xffff;
		des[100+j] |= (src[52+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[52+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[52+j] >> 24) & 0xffff;
		des[108+j] |= (src[56+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[56+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[56+j] >> 24) & 0xffff;
		des[116+j] |= (src[60+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[60+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[60+j] >> 24) & 0xffff;
		des[124+j] |= (src[64+j] << 8) & 0xffff;
	}
}

template<typename T>
void KVSE_unpack_32len_16bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[16+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[20+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[20+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[24+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[24+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[28+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[28+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[32+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[32+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[36+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[36+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[40+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[40+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[44+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[44+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[48+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[48+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[52+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[52+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[56+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[56+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[60+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[60+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[64+j]) & 0xffff;
	}
}

template<typename T>
void KVSE_unpack_32len_16bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0xffff;
		des[j] |= (src[4+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 24) & 0xffff;
		des[8+j] |= (src[8+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 24) & 0xffff;
		des[16+j] |= (src[12+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 24) & 0xffff;
		des[24+j] |= (src[16+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[16+j] >> 24) & 0xffff;
		des[32+j] |= (src[20+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[20+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[20+j] >> 24) & 0xffff;
		des[40+j] |= (src[24+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[24+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[24+j] >> 24) & 0xffff;
		des[48+j] |= (src[28+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[28+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[28+j] >> 24) & 0xffff;
		des[56+j] |= (src[32+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[32+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[32+j] >> 24) & 0xffff;
		des[64+j] |= (src[36+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[36+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[36+j] >> 24) & 0xffff;
		des[72+j] |= (src[40+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[40+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[40+j] >> 24) & 0xffff;
		des[80+j] |= (src[44+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[44+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[44+j] >> 24) & 0xffff;
		des[88+j] |= (src[48+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[48+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[48+j] >> 24) & 0xffff;
		des[96+j] |= (src[52+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[52+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[52+j] >> 24) & 0xffff;
		des[104+j] |= (src[56+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[56+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[56+j] >> 24) & 0xffff;
		des[112+j] |= (src[60+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[60+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[60+j] >> 24) & 0xffff;
		des[120+j] |= (src[64+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[64+j] >> 8) & 0xffff;
	}
}

template<typename T>
void KVSE_unpack_32len_20bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 20) & 0xfffff;
		des[4+j] |= (src[4+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 28) & 0xfffff;
		des[12+j] |= (src[8+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 16) & 0xfffff;
		des[16+j] |= (src[12+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 24) & 0xfffff;
		des[24+j] |= (src[16+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[20+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[20+j] >> 20) & 0xfffff;
		des[36+j] |= (src[24+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[24+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[24+j] >> 28) & 0xfffff;
		des[44+j] |= (src[28+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[28+j] >> 16) & 0xfffff;
		des[48+j] |= (src[32+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[32+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[32+j] >> 24) & 0xfffff;
		des[56+j] |= (src[36+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[36+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[40+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[40+j] >> 20) & 0xfffff;
		des[68+j] |= (src[44+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[44+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[44+j] >> 28) & 0xfffff;
		des[76+j] |= (src[48+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[48+j] >> 16) & 0xfffff;
		des[80+j] |= (src[52+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[52+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[52+j] >> 24) & 0xfffff;
		des[88+j] |= (src[56+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[56+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[60+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[60+j] >> 20) & 0xfffff;
		des[100+j] |= (src[64+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[64+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[64+j] >> 28) & 0xfffff;
		des[108+j] |= (src[68+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[68+j] >> 16) & 0xfffff;
		des[112+j] |= (src[72+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[72+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[72+j] >> 24) & 0xfffff;
		des[120+j] |= (src[76+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[76+j] >> 12) & 0xfffff;
	}
}

template<typename T>
void KVSE_unpack_32len_20bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 28) & 0xfffff;
		des[4+j] |= (src[4+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 16) & 0xfffff;
		des[8+j] |= (src[8+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 24) & 0xfffff;
		des[16+j] |= (src[12+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 20) & 0xfffff;
		des[28+j] |= (src[20+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[20+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[20+j] >> 28) & 0xfffff;
		des[36+j] |= (src[24+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[24+j] >> 16) & 0xfffff;
		des[40+j] |= (src[28+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[28+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[28+j] >> 24) & 0xfffff;
		des[48+j] |= (src[32+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[32+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[36+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[36+j] >> 20) & 0xfffff;
		des[60+j] |= (src[40+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[40+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[40+j] >> 28) & 0xfffff;
		des[68+j] |= (src[44+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[44+j] >> 16) & 0xfffff;
		des[72+j] |= (src[48+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[48+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[48+j] >> 24) & 0xfffff;
		des[80+j] |= (src[52+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[52+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[56+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[56+j] >> 20) & 0xfffff;
		des[92+j] |= (src[60+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[60+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[60+j] >> 28) & 0xfffff;
		des[100+j] |= (src[64+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[64+j] >> 16) & 0xfffff;
		des[104+j] |= (src[68+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[68+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[68+j] >> 24) & 0xfffff;
		des[112+j] |= (src[72+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[72+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[76+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[76+j] >> 20) & 0xfffff;
		des[124+j] |= (src[80+j] << 12) & 0xfffff;
	}
}

template<typename T>
void KVSE_unpack_32len_20bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0xfffff;
		des[j] |= (src[4+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 24) & 0xfffff;
		des[8+j] |= (src[8+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 20) & 0xfffff;
		des[20+j] |= (src[16+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 28) & 0xfffff;
		des[28+j] |= (src[20+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[20+j] >> 16) & 0xfffff;
		des[32+j] |= (src[24+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[24+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[24+j] >> 24) & 0xfffff;
		des[40+j] |= (src[28+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[28+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[32+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[32+j] >> 20) & 0xfffff;
		des[52+j] |= (src[36+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[36+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[36+j] >> 28) & 0xfffff;
		des[60+j] |= (src[40+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[40+j] >> 16) & 0xfffff;
		des[64+j] |= (src[44+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[44+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[44+j] >> 24) & 0xfffff;
		des[72+j] |= (src[48+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[48+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[52+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[52+j] >> 20) & 0xfffff;
		des[84+j] |= (src[56+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[56+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[56+j] >> 28) & 0xfffff;
		des[92+j] |= (src[60+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[60+j] >> 16) & 0xfffff;
		des[96+j] |= (src[64+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[64+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[64+j] >> 24) & 0xfffff;
		des[104+j] |= (src[68+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[68+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[72+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[72+j] >> 20) & 0xfffff;
		des[116+j] |= (src[76+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[76+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[76+j] >> 28) & 0xfffff;
		des[124+j] |= (src[80+j] << 4) & 0xfffff;
	}
}

template<typename T>
void KVSE_unpack_32len_20bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0xfffff;
		des[j] |= (src[4+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 20) & 0xfffff;
		des[12+j] |= (src[12+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 28) & 0xfffff;
		des[20+j] |= (src[16+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 16) & 0xfffff;
		des[24+j] |= (src[20+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[20+j] >> 24) & 0xfffff;
		des[32+j] |= (src[24+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[24+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[28+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[28+j] >> 20) & 0xfffff;
		des[44+j] |= (src[32+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[32+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[32+j] >> 28) & 0xfffff;
		des[52+j] |= (src[36+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[36+j] >> 16) & 0xfffff;
		des[56+j] |= (src[40+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[40+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[40+j] >> 24) & 0xfffff;
		des[64+j] |= (src[44+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[44+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[48+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[48+j] >> 20) & 0xfffff;
		des[76+j] |= (src[52+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[52+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[52+j] >> 28) & 0xfffff;
		des[84+j] |= (src[56+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[56+j] >> 16) & 0xfffff;
		des[88+j] |= (src[60+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[60+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[60+j] >> 24) & 0xfffff;
		des[96+j] |= (src[64+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[64+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[68+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[68+j] >> 20) & 0xfffff;
		des[108+j] |= (src[72+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[72+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[72+j] >> 28) & 0xfffff;
		des[116+j] |= (src[76+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[76+j] >> 16) & 0xfffff;
		des[120+j] |= (src[80+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[80+j] >> 4) & 0xfffff;
	}
}

template<typename T>
void KVSE_unpack_32len_32bw_0offset(T * des, const uint32_t *src) {
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
void KVSE_unpack_32len_32bw_8offset(T * des, const uint32_t *src) {
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
void KVSE_unpack_32len_32bw_16offset(T * des, const uint32_t *src) {
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
void KVSE_unpack_32len_32bw_24offset(T * des, const uint32_t *src) {
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

template<typename T>
void KVSE_unpack_64len_0bw_0offset(T * des, const uint32_t *src) {
	ZMEMCPY128(des);
	ZMEMCPY128(des + 4);
	ZMEMCPY128(des + 8);
	ZMEMCPY128(des + 12);
	ZMEMCPY128(des + 16);
	ZMEMCPY128(des + 20);
	ZMEMCPY128(des + 24);
	ZMEMCPY128(des + 28);
	ZMEMCPY128(des + 32);
	ZMEMCPY128(des + 36);
	ZMEMCPY128(des + 40);
	ZMEMCPY128(des + 44);
	ZMEMCPY128(des + 48);
	ZMEMCPY128(des + 52);
	ZMEMCPY128(des + 56);
	ZMEMCPY128(des + 60);
	ZMEMCPY128(des + 64);
	ZMEMCPY128(des + 68);
	ZMEMCPY128(des + 72);
	ZMEMCPY128(des + 76);
	ZMEMCPY128(des + 80);
	ZMEMCPY128(des + 84);
	ZMEMCPY128(des + 88);
	ZMEMCPY128(des + 92);
	ZMEMCPY128(des + 96);
	ZMEMCPY128(des + 100);
	ZMEMCPY128(des + 104);
	ZMEMCPY128(des + 108);
	ZMEMCPY128(des + 112);
	ZMEMCPY128(des + 116);
	ZMEMCPY128(des + 120);
	ZMEMCPY128(des + 124);
	ZMEMCPY128(des + 128);
	ZMEMCPY128(des + 132);
	ZMEMCPY128(des + 136);
	ZMEMCPY128(des + 140);
	ZMEMCPY128(des + 144);
	ZMEMCPY128(des + 148);
	ZMEMCPY128(des + 152);
	ZMEMCPY128(des + 156);
	ZMEMCPY128(des + 160);
	ZMEMCPY128(des + 164);
	ZMEMCPY128(des + 168);
	ZMEMCPY128(des + 172);
	ZMEMCPY128(des + 176);
	ZMEMCPY128(des + 180);
	ZMEMCPY128(des + 184);
	ZMEMCPY128(des + 188);
	ZMEMCPY128(des + 192);
	ZMEMCPY128(des + 196);
	ZMEMCPY128(des + 200);
	ZMEMCPY128(des + 204);
	ZMEMCPY128(des + 208);
	ZMEMCPY128(des + 212);
	ZMEMCPY128(des + 216);
	ZMEMCPY128(des + 220);
	ZMEMCPY128(des + 224);
	ZMEMCPY128(des + 228);
	ZMEMCPY128(des + 232);
	ZMEMCPY128(des + 236);
	ZMEMCPY128(des + 240);
	ZMEMCPY128(des + 244);
	ZMEMCPY128(des + 248);
	ZMEMCPY128(des + 252);
}

template<typename T>
void KVSE_unpack_64len_0bw_8offset(T * des, const uint32_t *src) {
	ZMEMCPY128(des);
	ZMEMCPY128(des + 4);
	ZMEMCPY128(des + 8);
	ZMEMCPY128(des + 12);
	ZMEMCPY128(des + 16);
	ZMEMCPY128(des + 20);
	ZMEMCPY128(des + 24);
	ZMEMCPY128(des + 28);
	ZMEMCPY128(des + 32);
	ZMEMCPY128(des + 36);
	ZMEMCPY128(des + 40);
	ZMEMCPY128(des + 44);
	ZMEMCPY128(des + 48);
	ZMEMCPY128(des + 52);
	ZMEMCPY128(des + 56);
	ZMEMCPY128(des + 60);
	ZMEMCPY128(des + 64);
	ZMEMCPY128(des + 68);
	ZMEMCPY128(des + 72);
	ZMEMCPY128(des + 76);
	ZMEMCPY128(des + 80);
	ZMEMCPY128(des + 84);
	ZMEMCPY128(des + 88);
	ZMEMCPY128(des + 92);
	ZMEMCPY128(des + 96);
	ZMEMCPY128(des + 100);
	ZMEMCPY128(des + 104);
	ZMEMCPY128(des + 108);
	ZMEMCPY128(des + 112);
	ZMEMCPY128(des + 116);
	ZMEMCPY128(des + 120);
	ZMEMCPY128(des + 124);
	ZMEMCPY128(des + 128);
	ZMEMCPY128(des + 132);
	ZMEMCPY128(des + 136);
	ZMEMCPY128(des + 140);
	ZMEMCPY128(des + 144);
	ZMEMCPY128(des + 148);
	ZMEMCPY128(des + 152);
	ZMEMCPY128(des + 156);
	ZMEMCPY128(des + 160);
	ZMEMCPY128(des + 164);
	ZMEMCPY128(des + 168);
	ZMEMCPY128(des + 172);
	ZMEMCPY128(des + 176);
	ZMEMCPY128(des + 180);
	ZMEMCPY128(des + 184);
	ZMEMCPY128(des + 188);
	ZMEMCPY128(des + 192);
	ZMEMCPY128(des + 196);
	ZMEMCPY128(des + 200);
	ZMEMCPY128(des + 204);
	ZMEMCPY128(des + 208);
	ZMEMCPY128(des + 212);
	ZMEMCPY128(des + 216);
	ZMEMCPY128(des + 220);
	ZMEMCPY128(des + 224);
	ZMEMCPY128(des + 228);
	ZMEMCPY128(des + 232);
	ZMEMCPY128(des + 236);
	ZMEMCPY128(des + 240);
	ZMEMCPY128(des + 244);
	ZMEMCPY128(des + 248);
	ZMEMCPY128(des + 252);
}

template<typename T>
void KVSE_unpack_64len_0bw_16offset(T * des, const uint32_t *src) {
	ZMEMCPY128(des);
	ZMEMCPY128(des + 4);
	ZMEMCPY128(des + 8);
	ZMEMCPY128(des + 12);
	ZMEMCPY128(des + 16);
	ZMEMCPY128(des + 20);
	ZMEMCPY128(des + 24);
	ZMEMCPY128(des + 28);
	ZMEMCPY128(des + 32);
	ZMEMCPY128(des + 36);
	ZMEMCPY128(des + 40);
	ZMEMCPY128(des + 44);
	ZMEMCPY128(des + 48);
	ZMEMCPY128(des + 52);
	ZMEMCPY128(des + 56);
	ZMEMCPY128(des + 60);
	ZMEMCPY128(des + 64);
	ZMEMCPY128(des + 68);
	ZMEMCPY128(des + 72);
	ZMEMCPY128(des + 76);
	ZMEMCPY128(des + 80);
	ZMEMCPY128(des + 84);
	ZMEMCPY128(des + 88);
	ZMEMCPY128(des + 92);
	ZMEMCPY128(des + 96);
	ZMEMCPY128(des + 100);
	ZMEMCPY128(des + 104);
	ZMEMCPY128(des + 108);
	ZMEMCPY128(des + 112);
	ZMEMCPY128(des + 116);
	ZMEMCPY128(des + 120);
	ZMEMCPY128(des + 124);
	ZMEMCPY128(des + 128);
	ZMEMCPY128(des + 132);
	ZMEMCPY128(des + 136);
	ZMEMCPY128(des + 140);
	ZMEMCPY128(des + 144);
	ZMEMCPY128(des + 148);
	ZMEMCPY128(des + 152);
	ZMEMCPY128(des + 156);
	ZMEMCPY128(des + 160);
	ZMEMCPY128(des + 164);
	ZMEMCPY128(des + 168);
	ZMEMCPY128(des + 172);
	ZMEMCPY128(des + 176);
	ZMEMCPY128(des + 180);
	ZMEMCPY128(des + 184);
	ZMEMCPY128(des + 188);
	ZMEMCPY128(des + 192);
	ZMEMCPY128(des + 196);
	ZMEMCPY128(des + 200);
	ZMEMCPY128(des + 204);
	ZMEMCPY128(des + 208);
	ZMEMCPY128(des + 212);
	ZMEMCPY128(des + 216);
	ZMEMCPY128(des + 220);
	ZMEMCPY128(des + 224);
	ZMEMCPY128(des + 228);
	ZMEMCPY128(des + 232);
	ZMEMCPY128(des + 236);
	ZMEMCPY128(des + 240);
	ZMEMCPY128(des + 244);
	ZMEMCPY128(des + 248);
	ZMEMCPY128(des + 252);
}

template<typename T>
void KVSE_unpack_64len_0bw_24offset(T * des, const uint32_t *src) {
	ZMEMCPY128(des);
	ZMEMCPY128(des + 4);
	ZMEMCPY128(des + 8);
	ZMEMCPY128(des + 12);
	ZMEMCPY128(des + 16);
	ZMEMCPY128(des + 20);
	ZMEMCPY128(des + 24);
	ZMEMCPY128(des + 28);
	ZMEMCPY128(des + 32);
	ZMEMCPY128(des + 36);
	ZMEMCPY128(des + 40);
	ZMEMCPY128(des + 44);
	ZMEMCPY128(des + 48);
	ZMEMCPY128(des + 52);
	ZMEMCPY128(des + 56);
	ZMEMCPY128(des + 60);
	ZMEMCPY128(des + 64);
	ZMEMCPY128(des + 68);
	ZMEMCPY128(des + 72);
	ZMEMCPY128(des + 76);
	ZMEMCPY128(des + 80);
	ZMEMCPY128(des + 84);
	ZMEMCPY128(des + 88);
	ZMEMCPY128(des + 92);
	ZMEMCPY128(des + 96);
	ZMEMCPY128(des + 100);
	ZMEMCPY128(des + 104);
	ZMEMCPY128(des + 108);
	ZMEMCPY128(des + 112);
	ZMEMCPY128(des + 116);
	ZMEMCPY128(des + 120);
	ZMEMCPY128(des + 124);
	ZMEMCPY128(des + 128);
	ZMEMCPY128(des + 132);
	ZMEMCPY128(des + 136);
	ZMEMCPY128(des + 140);
	ZMEMCPY128(des + 144);
	ZMEMCPY128(des + 148);
	ZMEMCPY128(des + 152);
	ZMEMCPY128(des + 156);
	ZMEMCPY128(des + 160);
	ZMEMCPY128(des + 164);
	ZMEMCPY128(des + 168);
	ZMEMCPY128(des + 172);
	ZMEMCPY128(des + 176);
	ZMEMCPY128(des + 180);
	ZMEMCPY128(des + 184);
	ZMEMCPY128(des + 188);
	ZMEMCPY128(des + 192);
	ZMEMCPY128(des + 196);
	ZMEMCPY128(des + 200);
	ZMEMCPY128(des + 204);
	ZMEMCPY128(des + 208);
	ZMEMCPY128(des + 212);
	ZMEMCPY128(des + 216);
	ZMEMCPY128(des + 220);
	ZMEMCPY128(des + 224);
	ZMEMCPY128(des + 228);
	ZMEMCPY128(des + 232);
	ZMEMCPY128(des + 236);
	ZMEMCPY128(des + 240);
	ZMEMCPY128(des + 244);
	ZMEMCPY128(des + 248);
	ZMEMCPY128(des + 252);
}

template<typename T>
void KVSE_unpack_64len_1bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 1) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 2) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 3) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 4) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 5) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 6) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 7) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[j] >> 8) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[j] >> 9) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[j] >> 10) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[j] >> 11) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[j] >> 12) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[j] >> 13) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[j] >> 14) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[j] >> 15) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[j] >> 16) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[j] >> 17) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[j] >> 18) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[j] >> 19) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[j] >> 20) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[j] >> 21) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[j] >> 22) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[j] >> 23) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[j] >> 24) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[j] >> 25) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[j] >> 26) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[j] >> 27) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[j] >> 28) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[j] >> 29) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[j] >> 30) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[j] >> 31) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[4+j]) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[4+j] >> 1) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[4+j] >> 2) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[4+j] >> 3) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[4+j] >> 4) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[4+j] >> 5) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[4+j] >> 6) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[4+j] >> 7) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[4+j] >> 8) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[4+j] >> 9) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[4+j] >> 10) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[4+j] >> 11) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[4+j] >> 12) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[4+j] >> 13) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[4+j] >> 14) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[4+j] >> 15) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[4+j] >> 16) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[4+j] >> 17) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[4+j] >> 18) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[4+j] >> 19) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[4+j] >> 20) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[4+j] >> 21) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[4+j] >> 22) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[4+j] >> 23) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[4+j] >> 24) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[4+j] >> 25) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[4+j] >> 26) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[4+j] >> 27) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[4+j] >> 28) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[4+j] >> 29) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[4+j] >> 30) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[4+j] >> 31) & 0x1;
	}
}

template<typename T>
void KVSE_unpack_64len_1bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 9) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 10) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 11) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 12) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 13) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 14) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 15) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[j] >> 16) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[j] >> 17) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[j] >> 18) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[j] >> 19) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[j] >> 20) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[j] >> 21) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[j] >> 22) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[j] >> 23) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[j] >> 24) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[j] >> 25) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[j] >> 26) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[j] >> 27) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[j] >> 28) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[j] >> 29) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[j] >> 30) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[j] >> 31) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[4+j]) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[4+j] >> 1) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[4+j] >> 2) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[4+j] >> 3) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[4+j] >> 4) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[4+j] >> 5) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[4+j] >> 6) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[4+j] >> 7) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[4+j] >> 8) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[4+j] >> 9) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[4+j] >> 10) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[4+j] >> 11) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[4+j] >> 12) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[4+j] >> 13) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[4+j] >> 14) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[4+j] >> 15) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[4+j] >> 16) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[4+j] >> 17) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[4+j] >> 18) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[4+j] >> 19) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[4+j] >> 20) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[4+j] >> 21) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[4+j] >> 22) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[4+j] >> 23) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[4+j] >> 24) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[4+j] >> 25) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[4+j] >> 26) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[4+j] >> 27) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[4+j] >> 28) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[4+j] >> 29) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[4+j] >> 30) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[4+j] >> 31) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[8+j]) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[8+j] >> 1) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[8+j] >> 2) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[8+j] >> 3) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[8+j] >> 4) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[8+j] >> 5) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[8+j] >> 6) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[8+j] >> 7) & 0x1;
	}
}

template<typename T>
void KVSE_unpack_64len_1bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 17) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 18) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 19) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 20) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 21) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 22) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 23) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[j] >> 24) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[j] >> 25) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[j] >> 26) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[j] >> 27) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[j] >> 28) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[j] >> 29) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[j] >> 30) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[j] >> 31) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[4+j]) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[4+j] >> 1) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[4+j] >> 2) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[4+j] >> 3) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[4+j] >> 4) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[4+j] >> 5) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[4+j] >> 6) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[4+j] >> 7) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[4+j] >> 8) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[4+j] >> 9) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[4+j] >> 10) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[4+j] >> 11) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[4+j] >> 12) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[4+j] >> 13) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[4+j] >> 14) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[4+j] >> 15) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[4+j] >> 16) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[4+j] >> 17) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[4+j] >> 18) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[4+j] >> 19) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[4+j] >> 20) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[4+j] >> 21) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[4+j] >> 22) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[4+j] >> 23) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[4+j] >> 24) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[4+j] >> 25) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[4+j] >> 26) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[4+j] >> 27) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[4+j] >> 28) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[4+j] >> 29) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[4+j] >> 30) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[4+j] >> 31) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[8+j]) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[8+j] >> 1) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[8+j] >> 2) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[8+j] >> 3) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[8+j] >> 4) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[8+j] >> 5) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[8+j] >> 6) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[8+j] >> 7) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[8+j] >> 8) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[8+j] >> 9) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[8+j] >> 10) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[8+j] >> 11) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[8+j] >> 12) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[8+j] >> 13) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[8+j] >> 14) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[8+j] >> 15) & 0x1;
	}
}

template<typename T>
void KVSE_unpack_64len_1bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 25) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 26) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 27) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 28) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 29) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 30) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 31) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j]) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 1) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 2) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 3) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 4) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 5) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[4+j] >> 6) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[4+j] >> 7) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[4+j] >> 8) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[4+j] >> 9) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[4+j] >> 10) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[4+j] >> 11) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[4+j] >> 12) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[4+j] >> 13) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[4+j] >> 14) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[4+j] >> 15) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[4+j] >> 16) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[4+j] >> 17) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[4+j] >> 18) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[4+j] >> 19) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[4+j] >> 20) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[4+j] >> 21) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[4+j] >> 22) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[4+j] >> 23) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[4+j] >> 24) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[4+j] >> 25) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[4+j] >> 26) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[4+j] >> 27) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[4+j] >> 28) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[4+j] >> 29) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[4+j] >> 30) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[4+j] >> 31) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[8+j]) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[8+j] >> 1) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[8+j] >> 2) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[8+j] >> 3) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[8+j] >> 4) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[8+j] >> 5) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[8+j] >> 6) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[8+j] >> 7) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[8+j] >> 8) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[8+j] >> 9) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[8+j] >> 10) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[8+j] >> 11) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[8+j] >> 12) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[8+j] >> 13) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[8+j] >> 14) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[8+j] >> 15) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[8+j] >> 16) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[8+j] >> 17) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[8+j] >> 18) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[8+j] >> 19) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[8+j] >> 20) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[8+j] >> 21) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[8+j] >> 22) & 0x1;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[8+j] >> 23) & 0x1;
	}
}

template<typename T>
void KVSE_unpack_64len_2bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 2) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 4) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 6) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 8) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 10) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 12) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 14) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[j] >> 16) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[j] >> 18) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[j] >> 20) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[j] >> 22) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[j] >> 24) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[j] >> 26) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[j] >> 28) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[j] >> 30) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[4+j]) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[4+j] >> 2) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[4+j] >> 4) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[4+j] >> 6) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[4+j] >> 8) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[4+j] >> 10) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[4+j] >> 12) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[4+j] >> 14) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[4+j] >> 16) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[4+j] >> 18) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[4+j] >> 20) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[4+j] >> 22) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[4+j] >> 24) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[4+j] >> 26) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[4+j] >> 28) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[4+j] >> 30) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[8+j]) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[8+j] >> 2) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[8+j] >> 4) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[8+j] >> 6) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[8+j] >> 8) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[8+j] >> 10) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[8+j] >> 12) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[8+j] >> 14) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[8+j] >> 16) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[8+j] >> 18) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[8+j] >> 20) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[8+j] >> 22) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[8+j] >> 24) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[8+j] >> 26) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[8+j] >> 28) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[8+j] >> 30) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[12+j]) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[12+j] >> 2) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[12+j] >> 4) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[12+j] >> 6) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[12+j] >> 8) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[12+j] >> 10) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[12+j] >> 12) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[12+j] >> 14) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[12+j] >> 16) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[12+j] >> 18) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[12+j] >> 20) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[12+j] >> 22) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[12+j] >> 24) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[12+j] >> 26) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[12+j] >> 28) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[12+j] >> 30) & 0x3;
	}
}

template<typename T>
void KVSE_unpack_64len_2bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 10) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 12) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 14) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 16) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 18) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 20) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 22) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[j] >> 24) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[j] >> 26) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[j] >> 28) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[j] >> 30) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j]) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 2) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[4+j] >> 4) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[4+j] >> 6) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[4+j] >> 8) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[4+j] >> 10) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[4+j] >> 12) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[4+j] >> 14) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[4+j] >> 16) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[4+j] >> 18) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[4+j] >> 20) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[4+j] >> 22) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[4+j] >> 24) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[4+j] >> 26) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[4+j] >> 28) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[4+j] >> 30) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[8+j]) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[8+j] >> 2) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[8+j] >> 4) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[8+j] >> 6) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[8+j] >> 8) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[8+j] >> 10) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[8+j] >> 12) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[8+j] >> 14) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[8+j] >> 16) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[8+j] >> 18) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[8+j] >> 20) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[8+j] >> 22) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[8+j] >> 24) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[8+j] >> 26) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[8+j] >> 28) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[8+j] >> 30) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[12+j]) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[12+j] >> 2) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[12+j] >> 4) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[12+j] >> 6) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[12+j] >> 8) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[12+j] >> 10) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[12+j] >> 12) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[12+j] >> 14) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[12+j] >> 16) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[12+j] >> 18) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[12+j] >> 20) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[12+j] >> 22) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[12+j] >> 24) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[12+j] >> 26) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[12+j] >> 28) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[12+j] >> 30) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[16+j]) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[16+j] >> 2) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[16+j] >> 4) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[16+j] >> 6) & 0x3;
	}
}

template<typename T>
void KVSE_unpack_64len_2bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 18) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 20) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 22) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 24) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 26) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 28) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 30) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j]) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 2) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 4) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 6) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 8) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 10) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[4+j] >> 12) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[4+j] >> 14) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[4+j] >> 16) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[4+j] >> 18) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[4+j] >> 20) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[4+j] >> 22) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[4+j] >> 24) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[4+j] >> 26) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[4+j] >> 28) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[4+j] >> 30) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[8+j]) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[8+j] >> 2) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[8+j] >> 4) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[8+j] >> 6) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[8+j] >> 8) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[8+j] >> 10) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[8+j] >> 12) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[8+j] >> 14) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[8+j] >> 16) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[8+j] >> 18) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[8+j] >> 20) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[8+j] >> 22) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[8+j] >> 24) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[8+j] >> 26) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[8+j] >> 28) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[8+j] >> 30) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[12+j]) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[12+j] >> 2) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[12+j] >> 4) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[12+j] >> 6) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[12+j] >> 8) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[12+j] >> 10) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[12+j] >> 12) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[12+j] >> 14) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[12+j] >> 16) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[12+j] >> 18) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[12+j] >> 20) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[12+j] >> 22) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[12+j] >> 24) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[12+j] >> 26) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[12+j] >> 28) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[12+j] >> 30) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[16+j]) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[16+j] >> 2) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[16+j] >> 4) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[16+j] >> 6) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[16+j] >> 8) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[16+j] >> 10) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[16+j] >> 12) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[16+j] >> 14) & 0x3;
	}
}

template<typename T>
void KVSE_unpack_64len_2bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 26) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 28) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 30) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j]) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 2) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 4) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 6) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 8) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 10) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 12) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 14) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 16) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 18) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[4+j] >> 20) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[4+j] >> 22) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[4+j] >> 24) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[4+j] >> 26) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[4+j] >> 28) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[4+j] >> 30) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[8+j]) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[8+j] >> 2) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[8+j] >> 4) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[8+j] >> 6) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[8+j] >> 8) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[8+j] >> 10) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[8+j] >> 12) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[8+j] >> 14) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[8+j] >> 16) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[8+j] >> 18) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[8+j] >> 20) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[8+j] >> 22) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[8+j] >> 24) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[8+j] >> 26) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[8+j] >> 28) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[8+j] >> 30) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[12+j]) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[12+j] >> 2) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[12+j] >> 4) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[12+j] >> 6) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[12+j] >> 8) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[12+j] >> 10) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[12+j] >> 12) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[12+j] >> 14) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[12+j] >> 16) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[12+j] >> 18) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[12+j] >> 20) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[12+j] >> 22) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[12+j] >> 24) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[12+j] >> 26) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[12+j] >> 28) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[12+j] >> 30) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[16+j]) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[16+j] >> 2) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[16+j] >> 4) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[16+j] >> 6) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[16+j] >> 8) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[16+j] >> 10) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[16+j] >> 12) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[16+j] >> 14) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[16+j] >> 16) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[16+j] >> 18) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[16+j] >> 20) & 0x3;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[16+j] >> 22) & 0x3;
	}
}

template<typename T>
void KVSE_unpack_64len_3bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 3) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 6) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 9) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 12) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 15) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 18) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 21) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[j] >> 24) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[j] >> 27) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[j] >> 30) & 0x7;
		des[40+j] |= (src[4+j] << 2) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 1) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 4) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 7) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[4+j] >> 10) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[4+j] >> 13) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[4+j] >> 16) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[4+j] >> 19) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[4+j] >> 22) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[4+j] >> 25) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[4+j] >> 28) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[4+j] >> 31) & 0x7;
		des[84+j] |= (src[8+j] << 1) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[8+j] >> 2) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[8+j] >> 5) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[8+j] >> 8) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[8+j] >> 11) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[8+j] >> 14) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[8+j] >> 17) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[8+j] >> 20) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[8+j] >> 23) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[8+j] >> 26) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[8+j] >> 29) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[12+j]) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[12+j] >> 3) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[12+j] >> 6) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[12+j] >> 9) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[12+j] >> 12) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[12+j] >> 15) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[12+j] >> 18) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[12+j] >> 21) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[12+j] >> 24) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[12+j] >> 27) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[12+j] >> 30) & 0x7;
		des[168+j] |= (src[16+j] << 2) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[16+j] >> 1) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[16+j] >> 4) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[16+j] >> 7) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[16+j] >> 10) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[16+j] >> 13) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[16+j] >> 16) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[16+j] >> 19) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[16+j] >> 22) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[16+j] >> 25) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[16+j] >> 28) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[16+j] >> 31) & 0x7;
		des[212+j] |= (src[20+j] << 1) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[20+j] >> 2) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[20+j] >> 5) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[20+j] >> 8) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[20+j] >> 11) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[20+j] >> 14) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[20+j] >> 17) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[20+j] >> 20) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[20+j] >> 23) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[20+j] >> 26) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[20+j] >> 29) & 0x7;
	}
}

template<typename T>
void KVSE_unpack_64len_3bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 11) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 14) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 17) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 20) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 23) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 26) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 29) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j]) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 3) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 6) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 9) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 12) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 15) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[4+j] >> 18) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[4+j] >> 21) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[4+j] >> 24) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[4+j] >> 27) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[4+j] >> 30) & 0x7;
		des[72+j] |= (src[8+j] << 2) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[8+j] >> 1) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[8+j] >> 4) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[8+j] >> 7) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[8+j] >> 10) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[8+j] >> 13) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[8+j] >> 16) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[8+j] >> 19) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[8+j] >> 22) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[8+j] >> 25) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[8+j] >> 28) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[8+j] >> 31) & 0x7;
		des[116+j] |= (src[12+j] << 1) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[12+j] >> 2) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[12+j] >> 5) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[12+j] >> 8) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[12+j] >> 11) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[12+j] >> 14) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[12+j] >> 17) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[12+j] >> 20) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[12+j] >> 23) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[12+j] >> 26) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[12+j] >> 29) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[16+j]) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[16+j] >> 3) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[16+j] >> 6) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[16+j] >> 9) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[16+j] >> 12) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[16+j] >> 15) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[16+j] >> 18) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[16+j] >> 21) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[16+j] >> 24) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[16+j] >> 27) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[16+j] >> 30) & 0x7;
		des[200+j] |= (src[20+j] << 2) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[20+j] >> 1) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[20+j] >> 4) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[20+j] >> 7) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[20+j] >> 10) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[20+j] >> 13) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[20+j] >> 16) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[20+j] >> 19) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[20+j] >> 22) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[20+j] >> 25) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[20+j] >> 28) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[20+j] >> 31) & 0x7;
		des[244+j] |= (src[24+j] << 1) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[24+j] >> 2) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[24+j] >> 5) & 0x7;
	}
}

template<typename T>
void KVSE_unpack_64len_3bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 19) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 22) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 25) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 28) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 31) & 0x7;
		des[20+j] |= (src[4+j] << 1) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 2) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 5) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 8) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 11) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 14) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 17) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 20) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 23) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[4+j] >> 26) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[4+j] >> 29) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[8+j]) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[8+j] >> 3) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[8+j] >> 6) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[8+j] >> 9) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[8+j] >> 12) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[8+j] >> 15) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[8+j] >> 18) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[8+j] >> 21) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[8+j] >> 24) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[8+j] >> 27) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[8+j] >> 30) & 0x7;
		des[104+j] |= (src[12+j] << 2) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[12+j] >> 1) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[12+j] >> 4) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[12+j] >> 7) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[12+j] >> 10) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[12+j] >> 13) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[12+j] >> 16) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[12+j] >> 19) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[12+j] >> 22) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[12+j] >> 25) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[12+j] >> 28) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[12+j] >> 31) & 0x7;
		des[148+j] |= (src[16+j] << 1) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[16+j] >> 2) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[16+j] >> 5) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[16+j] >> 8) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[16+j] >> 11) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[16+j] >> 14) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[16+j] >> 17) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[16+j] >> 20) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[16+j] >> 23) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[16+j] >> 26) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[16+j] >> 29) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[20+j]) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[20+j] >> 3) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[20+j] >> 6) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[20+j] >> 9) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[20+j] >> 12) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[20+j] >> 15) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[20+j] >> 18) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[20+j] >> 21) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[20+j] >> 24) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[20+j] >> 27) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[20+j] >> 30) & 0x7;
		des[232+j] |= (src[24+j] << 2) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[24+j] >> 1) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[24+j] >> 4) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[24+j] >> 7) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[24+j] >> 10) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[24+j] >> 13) & 0x7;
	}
}

template<typename T>
void KVSE_unpack_64len_3bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 27) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 30) & 0x7;
		des[8+j] |= (src[4+j] << 2) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 1) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 4) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 7) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 10) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 13) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 16) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 19) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 22) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 25) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 28) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 31) & 0x7;
		des[52+j] |= (src[8+j] << 1) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j] >> 2) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[8+j] >> 5) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[8+j] >> 8) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[8+j] >> 11) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[8+j] >> 14) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[8+j] >> 17) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[8+j] >> 20) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[8+j] >> 23) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[8+j] >> 26) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[8+j] >> 29) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[12+j]) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[12+j] >> 3) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[12+j] >> 6) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[12+j] >> 9) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[12+j] >> 12) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[12+j] >> 15) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[12+j] >> 18) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[12+j] >> 21) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[12+j] >> 24) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[12+j] >> 27) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[12+j] >> 30) & 0x7;
		des[136+j] |= (src[16+j] << 2) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[16+j] >> 1) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[16+j] >> 4) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[16+j] >> 7) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[16+j] >> 10) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[16+j] >> 13) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[16+j] >> 16) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[16+j] >> 19) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[16+j] >> 22) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[16+j] >> 25) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[16+j] >> 28) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[16+j] >> 31) & 0x7;
		des[180+j] |= (src[20+j] << 1) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[20+j] >> 2) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[20+j] >> 5) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[20+j] >> 8) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[20+j] >> 11) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[20+j] >> 14) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[20+j] >> 17) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[20+j] >> 20) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[20+j] >> 23) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[20+j] >> 26) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[20+j] >> 29) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[24+j]) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[24+j] >> 3) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[24+j] >> 6) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[24+j] >> 9) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[24+j] >> 12) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[24+j] >> 15) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[24+j] >> 18) & 0x7;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[24+j] >> 21) & 0x7;
	}
}

template<typename T>
void KVSE_unpack_64len_4bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[4+j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[4+j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[8+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[8+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[8+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[8+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[8+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[8+j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[8+j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[8+j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[12+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[12+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[12+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[12+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[12+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[12+j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[12+j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[12+j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[16+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[16+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[16+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[16+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[16+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[16+j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[16+j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[16+j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[20+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[20+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[20+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[20+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[20+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[20+j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[20+j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[20+j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[24+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[24+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[24+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[24+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[24+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[24+j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[24+j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[24+j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[28+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[28+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[28+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[28+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[28+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[28+j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[28+j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[28+j] >> 28) & 0xf;
	}
}

template<typename T>
void KVSE_unpack_64len_4bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[4+j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[8+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[8+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[8+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[8+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[8+j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[8+j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[8+j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[12+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[12+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[12+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[12+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[12+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[12+j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[12+j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[12+j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[16+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[16+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[16+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[16+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[16+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[16+j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[16+j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[16+j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[20+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[20+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[20+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[20+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[20+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[20+j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[20+j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[20+j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[24+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[24+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[24+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[24+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[24+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[24+j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[24+j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[24+j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[28+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[28+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[28+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[28+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[28+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[28+j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[28+j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[28+j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[32+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[32+j] >> 4) & 0xf;
	}
}

template<typename T>
void KVSE_unpack_64len_4bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[8+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[8+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[8+j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[8+j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[8+j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[12+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[12+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[12+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[12+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[12+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[12+j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[12+j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[12+j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[16+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[16+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[16+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[16+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[16+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[16+j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[16+j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[16+j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[20+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[20+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[20+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[20+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[20+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[20+j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[20+j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[20+j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[24+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[24+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[24+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[24+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[24+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[24+j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[24+j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[24+j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[28+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[28+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[28+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[28+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[28+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[28+j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[28+j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[28+j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[32+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[32+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[32+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[32+j] >> 12) & 0xf;
	}
}

template<typename T>
void KVSE_unpack_64len_4bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[8+j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[8+j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[8+j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[12+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[12+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[12+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[12+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[12+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[12+j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[12+j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[12+j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[16+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[16+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[16+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[16+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[16+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[16+j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[16+j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[16+j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[20+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[20+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[20+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[20+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[20+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[20+j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[20+j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[20+j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[24+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[24+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[24+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[24+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[24+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[24+j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[24+j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[24+j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[28+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[28+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[28+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[28+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[28+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[28+j] >> 20) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[28+j] >> 24) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[28+j] >> 28) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[32+j]) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[32+j] >> 4) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[32+j] >> 8) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[32+j] >> 12) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[32+j] >> 16) & 0xf;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[32+j] >> 20) & 0xf;
	}
}

template<typename T>
void KVSE_unpack_64len_5bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 5) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 10) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 15) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 20) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 25) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[j] >> 30) & 0x1f;
		des[24+j] |= (src[4+j] << 2) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 3) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 8) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 13) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 18) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 23) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[4+j] >> 28) & 0x1f;
		des[48+j] |= (src[8+j] << 4) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 1) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j] >> 6) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[8+j] >> 11) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[8+j] >> 16) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[8+j] >> 21) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[8+j] >> 26) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[8+j] >> 31) & 0x1f;
		des[76+j] |= (src[12+j] << 1) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[12+j] >> 4) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[12+j] >> 9) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[12+j] >> 14) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[12+j] >> 19) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[12+j] >> 24) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[12+j] >> 29) & 0x1f;
		des[100+j] |= (src[16+j] << 3) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[16+j] >> 2) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[16+j] >> 7) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[16+j] >> 12) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[16+j] >> 17) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[16+j] >> 22) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[16+j] >> 27) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[20+j]) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[20+j] >> 5) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[20+j] >> 10) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[20+j] >> 15) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[20+j] >> 20) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[20+j] >> 25) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[20+j] >> 30) & 0x1f;
		des[152+j] |= (src[24+j] << 2) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[24+j] >> 3) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[24+j] >> 8) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[24+j] >> 13) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[24+j] >> 18) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[24+j] >> 23) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[24+j] >> 28) & 0x1f;
		des[176+j] |= (src[28+j] << 4) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[28+j] >> 1) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[28+j] >> 6) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[28+j] >> 11) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[28+j] >> 16) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[28+j] >> 21) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[28+j] >> 26) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[28+j] >> 31) & 0x1f;
		des[204+j] |= (src[32+j] << 1) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[32+j] >> 4) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[32+j] >> 9) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[32+j] >> 14) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[32+j] >> 19) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[32+j] >> 24) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[32+j] >> 29) & 0x1f;
		des[228+j] |= (src[36+j] << 3) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[36+j] >> 2) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[36+j] >> 7) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[36+j] >> 12) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[36+j] >> 17) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[36+j] >> 22) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[36+j] >> 27) & 0x1f;
	}
}

template<typename T>
void KVSE_unpack_64len_5bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 13) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 18) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 23) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 28) & 0x1f;
		des[16+j] |= (src[4+j] << 4) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 1) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 6) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 11) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 16) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 21) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 26) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[4+j] >> 31) & 0x1f;
		des[44+j] |= (src[8+j] << 1) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j] >> 4) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 9) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j] >> 14) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[8+j] >> 19) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[8+j] >> 24) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[8+j] >> 29) & 0x1f;
		des[68+j] |= (src[12+j] << 3) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[12+j] >> 2) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[12+j] >> 7) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[12+j] >> 12) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[12+j] >> 17) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[12+j] >> 22) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[12+j] >> 27) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[16+j]) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[16+j] >> 5) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[16+j] >> 10) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[16+j] >> 15) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[16+j] >> 20) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[16+j] >> 25) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[16+j] >> 30) & 0x1f;
		des[120+j] |= (src[20+j] << 2) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[20+j] >> 3) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[20+j] >> 8) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[20+j] >> 13) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[20+j] >> 18) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[20+j] >> 23) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[20+j] >> 28) & 0x1f;
		des[144+j] |= (src[24+j] << 4) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[24+j] >> 1) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[24+j] >> 6) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[24+j] >> 11) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[24+j] >> 16) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[24+j] >> 21) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[24+j] >> 26) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[24+j] >> 31) & 0x1f;
		des[172+j] |= (src[28+j] << 1) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[28+j] >> 4) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[28+j] >> 9) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[28+j] >> 14) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[28+j] >> 19) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[28+j] >> 24) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[28+j] >> 29) & 0x1f;
		des[196+j] |= (src[32+j] << 3) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[32+j] >> 2) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[32+j] >> 7) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[32+j] >> 12) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[32+j] >> 17) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[32+j] >> 22) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[32+j] >> 27) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[36+j]) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[36+j] >> 5) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[36+j] >> 10) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[36+j] >> 15) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[36+j] >> 20) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[36+j] >> 25) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[36+j] >> 30) & 0x1f;
		des[248+j] |= (src[40+j] << 2) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[40+j] >> 3) & 0x1f;
	}
}

template<typename T>
void KVSE_unpack_64len_5bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 21) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 26) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 31) & 0x1f;
		des[12+j] |= (src[4+j] << 1) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 4) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 9) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 14) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 19) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 24) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 29) & 0x1f;
		des[36+j] |= (src[8+j] << 3) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 2) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 7) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j] >> 12) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 17) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j] >> 22) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[8+j] >> 27) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[12+j]) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[12+j] >> 5) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[12+j] >> 10) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[12+j] >> 15) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[12+j] >> 20) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[12+j] >> 25) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[12+j] >> 30) & 0x1f;
		des[88+j] |= (src[16+j] << 2) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[16+j] >> 3) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[16+j] >> 8) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[16+j] >> 13) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[16+j] >> 18) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[16+j] >> 23) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[16+j] >> 28) & 0x1f;
		des[112+j] |= (src[20+j] << 4) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[20+j] >> 1) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[20+j] >> 6) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[20+j] >> 11) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[20+j] >> 16) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[20+j] >> 21) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[20+j] >> 26) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[20+j] >> 31) & 0x1f;
		des[140+j] |= (src[24+j] << 1) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[24+j] >> 4) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[24+j] >> 9) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[24+j] >> 14) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[24+j] >> 19) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[24+j] >> 24) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[24+j] >> 29) & 0x1f;
		des[164+j] |= (src[28+j] << 3) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[28+j] >> 2) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[28+j] >> 7) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[28+j] >> 12) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[28+j] >> 17) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[28+j] >> 22) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[28+j] >> 27) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[32+j]) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[32+j] >> 5) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[32+j] >> 10) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[32+j] >> 15) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[32+j] >> 20) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[32+j] >> 25) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[32+j] >> 30) & 0x1f;
		des[216+j] |= (src[36+j] << 2) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[36+j] >> 3) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[36+j] >> 8) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[36+j] >> 13) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[36+j] >> 18) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[36+j] >> 23) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[36+j] >> 28) & 0x1f;
		des[240+j] |= (src[40+j] << 4) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[40+j] >> 1) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[40+j] >> 6) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[40+j] >> 11) & 0x1f;
	}
}

template<typename T>
void KVSE_unpack_64len_5bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 29) & 0x1f;
		des[4+j] |= (src[4+j] << 3) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 2) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 7) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 12) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 17) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 22) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 27) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j]) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 5) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 10) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 15) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j] >> 20) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 25) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j] >> 30) & 0x1f;
		des[56+j] |= (src[12+j] << 2) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[12+j] >> 3) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[12+j] >> 8) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[12+j] >> 13) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[12+j] >> 18) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[12+j] >> 23) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[12+j] >> 28) & 0x1f;
		des[80+j] |= (src[16+j] << 4) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[16+j] >> 1) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[16+j] >> 6) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[16+j] >> 11) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[16+j] >> 16) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[16+j] >> 21) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[16+j] >> 26) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[16+j] >> 31) & 0x1f;
		des[108+j] |= (src[20+j] << 1) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[20+j] >> 4) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[20+j] >> 9) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[20+j] >> 14) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[20+j] >> 19) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[20+j] >> 24) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[20+j] >> 29) & 0x1f;
		des[132+j] |= (src[24+j] << 3) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[24+j] >> 2) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[24+j] >> 7) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[24+j] >> 12) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[24+j] >> 17) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[24+j] >> 22) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[24+j] >> 27) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[28+j]) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[28+j] >> 5) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[28+j] >> 10) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[28+j] >> 15) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[28+j] >> 20) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[28+j] >> 25) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[28+j] >> 30) & 0x1f;
		des[184+j] |= (src[32+j] << 2) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[32+j] >> 3) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[32+j] >> 8) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[32+j] >> 13) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[32+j] >> 18) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[32+j] >> 23) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[32+j] >> 28) & 0x1f;
		des[208+j] |= (src[36+j] << 4) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[36+j] >> 1) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[36+j] >> 6) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[36+j] >> 11) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[36+j] >> 16) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[36+j] >> 21) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[36+j] >> 26) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[36+j] >> 31) & 0x1f;
		des[236+j] |= (src[40+j] << 1) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[40+j] >> 4) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[40+j] >> 9) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[40+j] >> 14) & 0x1f;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[40+j] >> 19) & 0x1f;
	}
}

template<typename T>
void KVSE_unpack_64len_6bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 6) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 12) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 18) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 24) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[j] >> 30) & 0x3f;
		des[20+j] |= (src[4+j] << 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 10) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 16) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 22) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[4+j] >> 28) & 0x3f;
		des[40+j] |= (src[8+j] << 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j] >> 8) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 14) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j] >> 20) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[8+j] >> 26) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[12+j]) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[12+j] >> 6) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[12+j] >> 12) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[12+j] >> 18) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[12+j] >> 24) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[12+j] >> 30) & 0x3f;
		des[84+j] |= (src[16+j] << 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[16+j] >> 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[16+j] >> 10) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[16+j] >> 16) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[16+j] >> 22) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[16+j] >> 28) & 0x3f;
		des[104+j] |= (src[20+j] << 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[20+j] >> 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[20+j] >> 8) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[20+j] >> 14) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[20+j] >> 20) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[20+j] >> 26) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[24+j]) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[24+j] >> 6) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[24+j] >> 12) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[24+j] >> 18) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[24+j] >> 24) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[24+j] >> 30) & 0x3f;
		des[148+j] |= (src[28+j] << 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[28+j] >> 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[28+j] >> 10) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[28+j] >> 16) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[28+j] >> 22) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[28+j] >> 28) & 0x3f;
		des[168+j] |= (src[32+j] << 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[32+j] >> 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[32+j] >> 8) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[32+j] >> 14) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[32+j] >> 20) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[32+j] >> 26) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[36+j]) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[36+j] >> 6) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[36+j] >> 12) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[36+j] >> 18) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[36+j] >> 24) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[36+j] >> 30) & 0x3f;
		des[212+j] |= (src[40+j] << 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[40+j] >> 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[40+j] >> 10) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[40+j] >> 16) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[40+j] >> 22) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[40+j] >> 28) & 0x3f;
		des[232+j] |= (src[44+j] << 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[44+j] >> 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[44+j] >> 8) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[44+j] >> 14) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[44+j] >> 20) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[44+j] >> 26) & 0x3f;
	}
}

template<typename T>
void KVSE_unpack_64len_6bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 14) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 20) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 26) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j]) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 6) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 12) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 18) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 24) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 30) & 0x3f;
		des[36+j] |= (src[8+j] << 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 10) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j] >> 16) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 22) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[8+j] >> 28) & 0x3f;
		des[56+j] |= (src[12+j] << 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[12+j] >> 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[12+j] >> 8) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[12+j] >> 14) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[12+j] >> 20) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[12+j] >> 26) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[16+j]) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[16+j] >> 6) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[16+j] >> 12) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[16+j] >> 18) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[16+j] >> 24) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[16+j] >> 30) & 0x3f;
		des[100+j] |= (src[20+j] << 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[20+j] >> 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[20+j] >> 10) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[20+j] >> 16) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[20+j] >> 22) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[20+j] >> 28) & 0x3f;
		des[120+j] |= (src[24+j] << 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[24+j] >> 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[24+j] >> 8) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[24+j] >> 14) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[24+j] >> 20) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[24+j] >> 26) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[28+j]) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[28+j] >> 6) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[28+j] >> 12) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[28+j] >> 18) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[28+j] >> 24) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[28+j] >> 30) & 0x3f;
		des[164+j] |= (src[32+j] << 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[32+j] >> 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[32+j] >> 10) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[32+j] >> 16) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[32+j] >> 22) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[32+j] >> 28) & 0x3f;
		des[184+j] |= (src[36+j] << 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[36+j] >> 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[36+j] >> 8) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[36+j] >> 14) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[36+j] >> 20) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[36+j] >> 26) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[40+j]) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[40+j] >> 6) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[40+j] >> 12) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[40+j] >> 18) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[40+j] >> 24) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[40+j] >> 30) & 0x3f;
		des[228+j] |= (src[44+j] << 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[44+j] >> 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[44+j] >> 10) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[44+j] >> 16) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[44+j] >> 22) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[44+j] >> 28) & 0x3f;
		des[248+j] |= (src[48+j] << 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[48+j] >> 2) & 0x3f;
	}
}

template<typename T>
void KVSE_unpack_64len_6bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 22) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 28) & 0x3f;
		des[8+j] |= (src[4+j] << 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 8) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 14) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 20) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 26) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j]) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 6) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 12) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 18) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j] >> 24) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 30) & 0x3f;
		des[52+j] |= (src[12+j] << 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[12+j] >> 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[12+j] >> 10) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[12+j] >> 16) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[12+j] >> 22) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[12+j] >> 28) & 0x3f;
		des[72+j] |= (src[16+j] << 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[16+j] >> 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[16+j] >> 8) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[16+j] >> 14) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[16+j] >> 20) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[16+j] >> 26) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[20+j]) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[20+j] >> 6) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[20+j] >> 12) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[20+j] >> 18) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[20+j] >> 24) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[20+j] >> 30) & 0x3f;
		des[116+j] |= (src[24+j] << 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[24+j] >> 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[24+j] >> 10) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[24+j] >> 16) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[24+j] >> 22) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[24+j] >> 28) & 0x3f;
		des[136+j] |= (src[28+j] << 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[28+j] >> 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[28+j] >> 8) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[28+j] >> 14) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[28+j] >> 20) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[28+j] >> 26) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[32+j]) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[32+j] >> 6) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[32+j] >> 12) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[32+j] >> 18) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[32+j] >> 24) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[32+j] >> 30) & 0x3f;
		des[180+j] |= (src[36+j] << 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[36+j] >> 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[36+j] >> 10) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[36+j] >> 16) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[36+j] >> 22) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[36+j] >> 28) & 0x3f;
		des[200+j] |= (src[40+j] << 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[40+j] >> 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[40+j] >> 8) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[40+j] >> 14) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[40+j] >> 20) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[40+j] >> 26) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[44+j]) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[44+j] >> 6) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[44+j] >> 12) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[44+j] >> 18) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[44+j] >> 24) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[44+j] >> 30) & 0x3f;
		des[244+j] |= (src[48+j] << 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[48+j] >> 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[48+j] >> 10) & 0x3f;
	}
}

template<typename T>
void KVSE_unpack_64len_6bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 30) & 0x3f;
		des[4+j] |= (src[4+j] << 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 10) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 16) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 22) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 28) & 0x3f;
		des[24+j] |= (src[8+j] << 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 8) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 14) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 20) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 26) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j]) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[12+j] >> 6) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[12+j] >> 12) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[12+j] >> 18) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[12+j] >> 24) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[12+j] >> 30) & 0x3f;
		des[68+j] |= (src[16+j] << 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[16+j] >> 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[16+j] >> 10) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[16+j] >> 16) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[16+j] >> 22) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[16+j] >> 28) & 0x3f;
		des[88+j] |= (src[20+j] << 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[20+j] >> 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[20+j] >> 8) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[20+j] >> 14) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[20+j] >> 20) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[20+j] >> 26) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[24+j]) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[24+j] >> 6) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[24+j] >> 12) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[24+j] >> 18) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[24+j] >> 24) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[24+j] >> 30) & 0x3f;
		des[132+j] |= (src[28+j] << 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[28+j] >> 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[28+j] >> 10) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[28+j] >> 16) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[28+j] >> 22) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[28+j] >> 28) & 0x3f;
		des[152+j] |= (src[32+j] << 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[32+j] >> 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[32+j] >> 8) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[32+j] >> 14) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[32+j] >> 20) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[32+j] >> 26) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[36+j]) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[36+j] >> 6) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[36+j] >> 12) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[36+j] >> 18) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[36+j] >> 24) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[36+j] >> 30) & 0x3f;
		des[196+j] |= (src[40+j] << 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[40+j] >> 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[40+j] >> 10) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[40+j] >> 16) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[40+j] >> 22) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[40+j] >> 28) & 0x3f;
		des[216+j] |= (src[44+j] << 4) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[44+j] >> 2) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[44+j] >> 8) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[44+j] >> 14) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[44+j] >> 20) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[44+j] >> 26) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[48+j]) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[48+j] >> 6) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[48+j] >> 12) & 0x3f;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[48+j] >> 18) & 0x3f;
	}
}

template<typename T>
void KVSE_unpack_64len_7bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 7) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 14) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 21) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[j] >> 28) & 0x7f;
		des[16+j] |= (src[4+j] << 4) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 3) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 10) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 17) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[4+j] >> 24) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[4+j] >> 31) & 0x7f;
		des[36+j] |= (src[8+j] << 1) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 6) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 13) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j] >> 20) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[8+j] >> 27) & 0x7f;
		des[52+j] |= (src[12+j] << 5) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[12+j] >> 2) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[12+j] >> 9) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[12+j] >> 16) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[12+j] >> 23) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[12+j] >> 30) & 0x7f;
		des[72+j] |= (src[16+j] << 2) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[16+j] >> 5) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[16+j] >> 12) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[16+j] >> 19) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[16+j] >> 26) & 0x7f;
		des[88+j] |= (src[20+j] << 6) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[20+j] >> 1) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[20+j] >> 8) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[20+j] >> 15) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[20+j] >> 22) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[20+j] >> 29) & 0x7f;
		des[108+j] |= (src[24+j] << 3) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[24+j] >> 4) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[24+j] >> 11) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[24+j] >> 18) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[24+j] >> 25) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[28+j]) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[28+j] >> 7) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[28+j] >> 14) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[28+j] >> 21) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[28+j] >> 28) & 0x7f;
		des[144+j] |= (src[32+j] << 4) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[32+j] >> 3) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[32+j] >> 10) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[32+j] >> 17) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[32+j] >> 24) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[32+j] >> 31) & 0x7f;
		des[164+j] |= (src[36+j] << 1) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[36+j] >> 6) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[36+j] >> 13) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[36+j] >> 20) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[36+j] >> 27) & 0x7f;
		des[180+j] |= (src[40+j] << 5) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[40+j] >> 2) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[40+j] >> 9) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[40+j] >> 16) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[40+j] >> 23) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[40+j] >> 30) & 0x7f;
		des[200+j] |= (src[44+j] << 2) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[44+j] >> 5) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[44+j] >> 12) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[44+j] >> 19) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[44+j] >> 26) & 0x7f;
		des[216+j] |= (src[48+j] << 6) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[48+j] >> 1) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[48+j] >> 8) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[48+j] >> 15) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[48+j] >> 22) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[48+j] >> 29) & 0x7f;
		des[236+j] |= (src[52+j] << 3) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[52+j] >> 4) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[52+j] >> 11) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[52+j] >> 18) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[52+j] >> 25) & 0x7f;
	}
}

template<typename T>
void KVSE_unpack_64len_7bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 15) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 22) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 29) & 0x7f;
		des[12+j] |= (src[4+j] << 3) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 4) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 11) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 18) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 25) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j]) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 7) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 14) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 21) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[8+j] >> 28) & 0x7f;
		des[48+j] |= (src[12+j] << 4) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[12+j] >> 3) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[12+j] >> 10) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[12+j] >> 17) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[12+j] >> 24) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[12+j] >> 31) & 0x7f;
		des[68+j] |= (src[16+j] << 1) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[16+j] >> 6) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[16+j] >> 13) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[16+j] >> 20) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[16+j] >> 27) & 0x7f;
		des[84+j] |= (src[20+j] << 5) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[20+j] >> 2) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[20+j] >> 9) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[20+j] >> 16) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[20+j] >> 23) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[20+j] >> 30) & 0x7f;
		des[104+j] |= (src[24+j] << 2) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[24+j] >> 5) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[24+j] >> 12) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[24+j] >> 19) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[24+j] >> 26) & 0x7f;
		des[120+j] |= (src[28+j] << 6) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[28+j] >> 1) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[28+j] >> 8) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[28+j] >> 15) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[28+j] >> 22) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[28+j] >> 29) & 0x7f;
		des[140+j] |= (src[32+j] << 3) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[32+j] >> 4) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[32+j] >> 11) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[32+j] >> 18) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[32+j] >> 25) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[36+j]) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[36+j] >> 7) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[36+j] >> 14) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[36+j] >> 21) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[36+j] >> 28) & 0x7f;
		des[176+j] |= (src[40+j] << 4) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[40+j] >> 3) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[40+j] >> 10) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[40+j] >> 17) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[40+j] >> 24) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[40+j] >> 31) & 0x7f;
		des[196+j] |= (src[44+j] << 1) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[44+j] >> 6) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[44+j] >> 13) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[44+j] >> 20) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[44+j] >> 27) & 0x7f;
		des[212+j] |= (src[48+j] << 5) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[48+j] >> 2) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[48+j] >> 9) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[48+j] >> 16) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[48+j] >> 23) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[48+j] >> 30) & 0x7f;
		des[232+j] |= (src[52+j] << 2) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[52+j] >> 5) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[52+j] >> 12) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[52+j] >> 19) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[52+j] >> 26) & 0x7f;
		des[248+j] |= (src[56+j] << 6) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[56+j] >> 1) & 0x7f;
	}
}

template<typename T>
void KVSE_unpack_64len_7bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 23) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 30) & 0x7f;
		des[8+j] |= (src[4+j] << 2) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 5) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 12) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 19) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 26) & 0x7f;
		des[24+j] |= (src[8+j] << 6) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 1) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 8) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 15) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 22) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 29) & 0x7f;
		des[44+j] |= (src[12+j] << 3) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j] >> 4) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[12+j] >> 11) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[12+j] >> 18) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[12+j] >> 25) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[16+j]) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[16+j] >> 7) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[16+j] >> 14) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[16+j] >> 21) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[16+j] >> 28) & 0x7f;
		des[80+j] |= (src[20+j] << 4) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[20+j] >> 3) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[20+j] >> 10) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[20+j] >> 17) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[20+j] >> 24) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[20+j] >> 31) & 0x7f;
		des[100+j] |= (src[24+j] << 1) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[24+j] >> 6) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[24+j] >> 13) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[24+j] >> 20) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[24+j] >> 27) & 0x7f;
		des[116+j] |= (src[28+j] << 5) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[28+j] >> 2) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[28+j] >> 9) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[28+j] >> 16) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[28+j] >> 23) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[28+j] >> 30) & 0x7f;
		des[136+j] |= (src[32+j] << 2) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[32+j] >> 5) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[32+j] >> 12) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[32+j] >> 19) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[32+j] >> 26) & 0x7f;
		des[152+j] |= (src[36+j] << 6) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[36+j] >> 1) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[36+j] >> 8) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[36+j] >> 15) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[36+j] >> 22) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[36+j] >> 29) & 0x7f;
		des[172+j] |= (src[40+j] << 3) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[40+j] >> 4) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[40+j] >> 11) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[40+j] >> 18) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[40+j] >> 25) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[44+j]) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[44+j] >> 7) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[44+j] >> 14) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[44+j] >> 21) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[44+j] >> 28) & 0x7f;
		des[208+j] |= (src[48+j] << 4) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[48+j] >> 3) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[48+j] >> 10) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[48+j] >> 17) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[48+j] >> 24) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[48+j] >> 31) & 0x7f;
		des[228+j] |= (src[52+j] << 1) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[52+j] >> 6) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[52+j] >> 13) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[52+j] >> 20) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[52+j] >> 27) & 0x7f;
		des[244+j] |= (src[56+j] << 5) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[56+j] >> 2) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[56+j] >> 9) & 0x7f;
	}
}

template<typename T>
void KVSE_unpack_64len_7bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 31) & 0x7f;
		des[4+j] |= (src[4+j] << 1) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 6) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 13) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 20) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 27) & 0x7f;
		des[20+j] |= (src[8+j] << 5) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 2) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 9) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 16) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 23) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 30) & 0x7f;
		des[40+j] |= (src[12+j] << 2) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 5) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j] >> 12) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[12+j] >> 19) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[12+j] >> 26) & 0x7f;
		des[56+j] |= (src[16+j] << 6) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j] >> 1) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[16+j] >> 8) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[16+j] >> 15) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[16+j] >> 22) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[16+j] >> 29) & 0x7f;
		des[76+j] |= (src[20+j] << 3) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[20+j] >> 4) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[20+j] >> 11) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[20+j] >> 18) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[20+j] >> 25) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[24+j]) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[24+j] >> 7) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[24+j] >> 14) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[24+j] >> 21) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[24+j] >> 28) & 0x7f;
		des[112+j] |= (src[28+j] << 4) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[28+j] >> 3) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[28+j] >> 10) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[28+j] >> 17) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[28+j] >> 24) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[28+j] >> 31) & 0x7f;
		des[132+j] |= (src[32+j] << 1) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[32+j] >> 6) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[32+j] >> 13) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[32+j] >> 20) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[32+j] >> 27) & 0x7f;
		des[148+j] |= (src[36+j] << 5) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[36+j] >> 2) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[36+j] >> 9) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[36+j] >> 16) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[36+j] >> 23) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[36+j] >> 30) & 0x7f;
		des[168+j] |= (src[40+j] << 2) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[40+j] >> 5) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[40+j] >> 12) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[40+j] >> 19) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[40+j] >> 26) & 0x7f;
		des[184+j] |= (src[44+j] << 6) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[44+j] >> 1) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[44+j] >> 8) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[44+j] >> 15) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[44+j] >> 22) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[44+j] >> 29) & 0x7f;
		des[204+j] |= (src[48+j] << 3) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[48+j] >> 4) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[48+j] >> 11) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[48+j] >> 18) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[48+j] >> 25) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[52+j]) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[52+j] >> 7) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[52+j] >> 14) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[52+j] >> 21) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[52+j] >> 28) & 0x7f;
		des[240+j] |= (src[56+j] << 4) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[56+j] >> 3) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[56+j] >> 10) & 0x7f;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[56+j] >> 17) & 0x7f;
	}
}

template<typename T>
void KVSE_unpack_64len_8bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[8+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[12+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[12+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[12+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[16+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[16+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[16+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[16+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[20+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[20+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[20+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[20+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[24+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[24+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[24+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[24+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[28+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[28+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[28+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[28+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[32+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[32+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[32+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[32+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[36+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[36+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[36+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[36+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[40+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[40+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[40+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[40+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[44+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[44+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[44+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[44+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[48+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[48+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[48+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[48+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[52+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[52+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[52+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[52+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[56+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[56+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[56+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[56+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[60+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[60+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[60+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[60+j] >> 24) & 0xff;
	}
}

template<typename T>
void KVSE_unpack_64len_8bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[12+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[12+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[16+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[16+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[16+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[20+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[20+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[20+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[20+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[24+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[24+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[24+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[24+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[28+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[28+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[28+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[28+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[32+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[32+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[32+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[32+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[36+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[36+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[36+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[36+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[40+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[40+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[40+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[40+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[44+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[44+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[44+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[44+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[48+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[48+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[48+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[48+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[52+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[52+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[52+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[52+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[56+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[56+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[56+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[56+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[60+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[60+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[60+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[60+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[64+j]) & 0xff;
	}
}

template<typename T>
void KVSE_unpack_64len_8bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[12+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[16+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[16+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[16+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[20+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[20+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[20+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[20+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[24+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[24+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[24+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[24+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[28+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[28+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[28+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[28+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[32+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[32+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[32+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[32+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[36+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[36+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[36+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[36+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[40+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[40+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[40+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[40+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[44+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[44+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[44+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[44+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[48+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[48+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[48+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[48+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[52+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[52+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[52+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[52+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[56+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[56+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[56+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[56+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[60+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[60+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[60+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[60+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[64+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[64+j] >> 8) & 0xff;
	}
}

template<typename T>
void KVSE_unpack_64len_8bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[16+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[16+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[20+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[20+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[20+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[20+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[24+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[24+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[24+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[24+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[28+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[28+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[28+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[28+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[32+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[32+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[32+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[32+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[36+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[36+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[36+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[36+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[40+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[40+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[40+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[40+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[44+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[44+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[44+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[44+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[48+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[48+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[48+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[48+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[52+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[52+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[52+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[52+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[56+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[56+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[56+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[56+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[60+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[60+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[60+j] >> 16) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[60+j] >> 24) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[64+j]) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[64+j] >> 8) & 0xff;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[64+j] >> 16) & 0xff;
	}
}

template<typename T>
void KVSE_unpack_64len_9bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 9) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 18) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 27) & 0x1ff;
		des[12+j] |= (src[4+j] << 5) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 4) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 13) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 22) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[4+j] >> 31) & 0x1ff;
		des[28+j] |= (src[8+j] << 1) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 8) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 17) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[8+j] >> 26) & 0x1ff;
		des[40+j] |= (src[12+j] << 6) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 3) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j] >> 12) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[12+j] >> 21) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[12+j] >> 30) & 0x1ff;
		des[56+j] |= (src[16+j] << 2) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j] >> 7) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[16+j] >> 16) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[16+j] >> 25) & 0x1ff;
		des[68+j] |= (src[20+j] << 7) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[20+j] >> 2) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[20+j] >> 11) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[20+j] >> 20) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[20+j] >> 29) & 0x1ff;
		des[84+j] |= (src[24+j] << 3) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[24+j] >> 6) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[24+j] >> 15) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[24+j] >> 24) & 0x1ff;
		des[96+j] |= (src[28+j] << 8) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[28+j] >> 1) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[28+j] >> 10) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[28+j] >> 19) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[28+j] >> 28) & 0x1ff;
		des[112+j] |= (src[32+j] << 4) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[32+j] >> 5) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[32+j] >> 14) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[32+j] >> 23) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[36+j]) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[36+j] >> 9) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[36+j] >> 18) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[36+j] >> 27) & 0x1ff;
		des[140+j] |= (src[40+j] << 5) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[40+j] >> 4) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[40+j] >> 13) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[40+j] >> 22) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[40+j] >> 31) & 0x1ff;
		des[156+j] |= (src[44+j] << 1) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[44+j] >> 8) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[44+j] >> 17) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[44+j] >> 26) & 0x1ff;
		des[168+j] |= (src[48+j] << 6) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[48+j] >> 3) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[48+j] >> 12) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[48+j] >> 21) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[48+j] >> 30) & 0x1ff;
		des[184+j] |= (src[52+j] << 2) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[52+j] >> 7) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[52+j] >> 16) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[52+j] >> 25) & 0x1ff;
		des[196+j] |= (src[56+j] << 7) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[56+j] >> 2) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[56+j] >> 11) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[56+j] >> 20) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[56+j] >> 29) & 0x1ff;
		des[212+j] |= (src[60+j] << 3) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[60+j] >> 6) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[60+j] >> 15) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[60+j] >> 24) & 0x1ff;
		des[224+j] |= (src[64+j] << 8) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[64+j] >> 1) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[64+j] >> 10) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[64+j] >> 19) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[64+j] >> 28) & 0x1ff;
		des[240+j] |= (src[68+j] << 4) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[68+j] >> 5) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[68+j] >> 14) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[68+j] >> 23) & 0x1ff;
	}
}

template<typename T>
void KVSE_unpack_64len_9bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 17) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 26) & 0x1ff;
		des[8+j] |= (src[4+j] << 6) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 3) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 12) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 21) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 30) & 0x1ff;
		des[24+j] |= (src[8+j] << 2) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 7) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 16) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 25) & 0x1ff;
		des[36+j] |= (src[12+j] << 7) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 2) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 11) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j] >> 20) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[12+j] >> 29) & 0x1ff;
		des[52+j] |= (src[16+j] << 3) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[16+j] >> 6) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j] >> 15) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[16+j] >> 24) & 0x1ff;
		des[64+j] |= (src[20+j] << 8) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[20+j] >> 1) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[20+j] >> 10) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[20+j] >> 19) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[20+j] >> 28) & 0x1ff;
		des[80+j] |= (src[24+j] << 4) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[24+j] >> 5) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[24+j] >> 14) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[24+j] >> 23) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[28+j]) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[28+j] >> 9) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[28+j] >> 18) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[28+j] >> 27) & 0x1ff;
		des[108+j] |= (src[32+j] << 5) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[32+j] >> 4) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[32+j] >> 13) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[32+j] >> 22) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[32+j] >> 31) & 0x1ff;
		des[124+j] |= (src[36+j] << 1) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[36+j] >> 8) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[36+j] >> 17) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[36+j] >> 26) & 0x1ff;
		des[136+j] |= (src[40+j] << 6) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[40+j] >> 3) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[40+j] >> 12) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[40+j] >> 21) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[40+j] >> 30) & 0x1ff;
		des[152+j] |= (src[44+j] << 2) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[44+j] >> 7) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[44+j] >> 16) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[44+j] >> 25) & 0x1ff;
		des[164+j] |= (src[48+j] << 7) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[48+j] >> 2) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[48+j] >> 11) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[48+j] >> 20) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[48+j] >> 29) & 0x1ff;
		des[180+j] |= (src[52+j] << 3) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[52+j] >> 6) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[52+j] >> 15) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[52+j] >> 24) & 0x1ff;
		des[192+j] |= (src[56+j] << 8) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[56+j] >> 1) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[56+j] >> 10) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[56+j] >> 19) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[56+j] >> 28) & 0x1ff;
		des[208+j] |= (src[60+j] << 4) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[60+j] >> 5) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[60+j] >> 14) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[60+j] >> 23) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[64+j]) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[64+j] >> 9) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[64+j] >> 18) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[64+j] >> 27) & 0x1ff;
		des[236+j] |= (src[68+j] << 5) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[68+j] >> 4) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[68+j] >> 13) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[68+j] >> 22) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[68+j] >> 31) & 0x1ff;
		des[252+j] |= (src[72+j] << 1) & 0x1ff;
	}
}

template<typename T>
void KVSE_unpack_64len_9bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 25) & 0x1ff;
		des[4+j] |= (src[4+j] << 7) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 2) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 11) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 20) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 29) & 0x1ff;
		des[20+j] |= (src[8+j] << 3) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 6) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 15) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 24) & 0x1ff;
		des[32+j] |= (src[12+j] << 8) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 1) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 10) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 19) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j] >> 28) & 0x1ff;
		des[48+j] |= (src[16+j] << 4) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 5) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[16+j] >> 14) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j] >> 23) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[20+j]) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[20+j] >> 9) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[20+j] >> 18) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[20+j] >> 27) & 0x1ff;
		des[76+j] |= (src[24+j] << 5) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[24+j] >> 4) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[24+j] >> 13) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[24+j] >> 22) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[24+j] >> 31) & 0x1ff;
		des[92+j] |= (src[28+j] << 1) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[28+j] >> 8) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[28+j] >> 17) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[28+j] >> 26) & 0x1ff;
		des[104+j] |= (src[32+j] << 6) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[32+j] >> 3) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[32+j] >> 12) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[32+j] >> 21) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[32+j] >> 30) & 0x1ff;
		des[120+j] |= (src[36+j] << 2) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[36+j] >> 7) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[36+j] >> 16) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[36+j] >> 25) & 0x1ff;
		des[132+j] |= (src[40+j] << 7) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[40+j] >> 2) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[40+j] >> 11) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[40+j] >> 20) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[40+j] >> 29) & 0x1ff;
		des[148+j] |= (src[44+j] << 3) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[44+j] >> 6) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[44+j] >> 15) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[44+j] >> 24) & 0x1ff;
		des[160+j] |= (src[48+j] << 8) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[48+j] >> 1) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[48+j] >> 10) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[48+j] >> 19) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[48+j] >> 28) & 0x1ff;
		des[176+j] |= (src[52+j] << 4) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[52+j] >> 5) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[52+j] >> 14) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[52+j] >> 23) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[56+j]) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[56+j] >> 9) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[56+j] >> 18) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[56+j] >> 27) & 0x1ff;
		des[204+j] |= (src[60+j] << 5) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[60+j] >> 4) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[60+j] >> 13) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[60+j] >> 22) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[60+j] >> 31) & 0x1ff;
		des[220+j] |= (src[64+j] << 1) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[64+j] >> 8) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[64+j] >> 17) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[64+j] >> 26) & 0x1ff;
		des[232+j] |= (src[68+j] << 6) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[68+j] >> 3) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[68+j] >> 12) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[68+j] >> 21) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[68+j] >> 30) & 0x1ff;
		des[248+j] |= (src[72+j] << 2) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[72+j] >> 7) & 0x1ff;
	}
}

template<typename T>
void KVSE_unpack_64len_9bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x1ff;
		des[j] |= (src[4+j] << 8) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 1) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 10) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 19) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 28) & 0x1ff;
		des[16+j] |= (src[8+j] << 4) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 5) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 14) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 23) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j]) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 9) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 18) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 27) & 0x1ff;
		des[44+j] |= (src[16+j] << 5) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j] >> 4) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 13) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[16+j] >> 22) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j] >> 31) & 0x1ff;
		des[60+j] |= (src[20+j] << 1) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[20+j] >> 8) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[20+j] >> 17) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[20+j] >> 26) & 0x1ff;
		des[72+j] |= (src[24+j] << 6) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[24+j] >> 3) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[24+j] >> 12) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[24+j] >> 21) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[24+j] >> 30) & 0x1ff;
		des[88+j] |= (src[28+j] << 2) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[28+j] >> 7) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[28+j] >> 16) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[28+j] >> 25) & 0x1ff;
		des[100+j] |= (src[32+j] << 7) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[32+j] >> 2) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[32+j] >> 11) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[32+j] >> 20) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[32+j] >> 29) & 0x1ff;
		des[116+j] |= (src[36+j] << 3) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[36+j] >> 6) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[36+j] >> 15) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[36+j] >> 24) & 0x1ff;
		des[128+j] |= (src[40+j] << 8) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[40+j] >> 1) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[40+j] >> 10) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[40+j] >> 19) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[40+j] >> 28) & 0x1ff;
		des[144+j] |= (src[44+j] << 4) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[44+j] >> 5) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[44+j] >> 14) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[44+j] >> 23) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[48+j]) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[48+j] >> 9) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[48+j] >> 18) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[48+j] >> 27) & 0x1ff;
		des[172+j] |= (src[52+j] << 5) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[52+j] >> 4) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[52+j] >> 13) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[52+j] >> 22) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[52+j] >> 31) & 0x1ff;
		des[188+j] |= (src[56+j] << 1) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[56+j] >> 8) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[56+j] >> 17) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[56+j] >> 26) & 0x1ff;
		des[200+j] |= (src[60+j] << 6) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[60+j] >> 3) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[60+j] >> 12) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[60+j] >> 21) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[60+j] >> 30) & 0x1ff;
		des[216+j] |= (src[64+j] << 2) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[64+j] >> 7) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[64+j] >> 16) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[64+j] >> 25) & 0x1ff;
		des[228+j] |= (src[68+j] << 7) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[68+j] >> 2) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[68+j] >> 11) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[68+j] >> 20) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[68+j] >> 29) & 0x1ff;
		des[244+j] |= (src[72+j] << 3) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[72+j] >> 6) & 0x1ff;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[72+j] >> 15) & 0x1ff;
	}
}

template<typename T>
void KVSE_unpack_64len_10bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 10) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 20) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[j] >> 30) & 0x3ff;
		des[12+j] |= (src[4+j] << 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 18) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[4+j] >> 28) & 0x3ff;
		des[24+j] |= (src[8+j] << 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 16) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[8+j] >> 26) & 0x3ff;
		des[36+j] |= (src[12+j] << 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 14) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[12+j] >> 24) & 0x3ff;
		des[48+j] |= (src[16+j] << 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[16+j] >> 12) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j] >> 22) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[20+j]) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[20+j] >> 10) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[20+j] >> 20) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[20+j] >> 30) & 0x3ff;
		des[76+j] |= (src[24+j] << 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[24+j] >> 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[24+j] >> 18) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[24+j] >> 28) & 0x3ff;
		des[88+j] |= (src[28+j] << 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[28+j] >> 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[28+j] >> 16) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[28+j] >> 26) & 0x3ff;
		des[100+j] |= (src[32+j] << 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[32+j] >> 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[32+j] >> 14) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[32+j] >> 24) & 0x3ff;
		des[112+j] |= (src[36+j] << 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[36+j] >> 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[36+j] >> 12) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[36+j] >> 22) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[40+j]) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[40+j] >> 10) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[40+j] >> 20) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[40+j] >> 30) & 0x3ff;
		des[140+j] |= (src[44+j] << 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[44+j] >> 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[44+j] >> 18) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[44+j] >> 28) & 0x3ff;
		des[152+j] |= (src[48+j] << 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[48+j] >> 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[48+j] >> 16) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[48+j] >> 26) & 0x3ff;
		des[164+j] |= (src[52+j] << 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[52+j] >> 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[52+j] >> 14) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[52+j] >> 24) & 0x3ff;
		des[176+j] |= (src[56+j] << 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[56+j] >> 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[56+j] >> 12) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[56+j] >> 22) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[60+j]) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[60+j] >> 10) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[60+j] >> 20) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[60+j] >> 30) & 0x3ff;
		des[204+j] |= (src[64+j] << 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[64+j] >> 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[64+j] >> 18) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[64+j] >> 28) & 0x3ff;
		des[216+j] |= (src[68+j] << 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[68+j] >> 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[68+j] >> 16) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[68+j] >> 26) & 0x3ff;
		des[228+j] |= (src[72+j] << 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[72+j] >> 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[72+j] >> 14) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[72+j] >> 24) & 0x3ff;
		des[240+j] |= (src[76+j] << 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[76+j] >> 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[76+j] >> 12) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[76+j] >> 22) & 0x3ff;
	}
}

template<typename T>
void KVSE_unpack_64len_10bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 18) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 28) & 0x3ff;
		des[8+j] |= (src[4+j] << 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 16) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 26) & 0x3ff;
		des[20+j] |= (src[8+j] << 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 14) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 24) & 0x3ff;
		des[32+j] |= (src[12+j] << 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 12) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 22) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j]) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 10) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[16+j] >> 20) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[16+j] >> 30) & 0x3ff;
		des[60+j] |= (src[20+j] << 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[20+j] >> 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[20+j] >> 18) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[20+j] >> 28) & 0x3ff;
		des[72+j] |= (src[24+j] << 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[24+j] >> 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[24+j] >> 16) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[24+j] >> 26) & 0x3ff;
		des[84+j] |= (src[28+j] << 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[28+j] >> 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[28+j] >> 14) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[28+j] >> 24) & 0x3ff;
		des[96+j] |= (src[32+j] << 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[32+j] >> 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[32+j] >> 12) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[32+j] >> 22) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[36+j]) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[36+j] >> 10) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[36+j] >> 20) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[36+j] >> 30) & 0x3ff;
		des[124+j] |= (src[40+j] << 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[40+j] >> 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[40+j] >> 18) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[40+j] >> 28) & 0x3ff;
		des[136+j] |= (src[44+j] << 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[44+j] >> 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[44+j] >> 16) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[44+j] >> 26) & 0x3ff;
		des[148+j] |= (src[48+j] << 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[48+j] >> 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[48+j] >> 14) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[48+j] >> 24) & 0x3ff;
		des[160+j] |= (src[52+j] << 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[52+j] >> 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[52+j] >> 12) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[52+j] >> 22) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[56+j]) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[56+j] >> 10) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[56+j] >> 20) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[56+j] >> 30) & 0x3ff;
		des[188+j] |= (src[60+j] << 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[60+j] >> 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[60+j] >> 18) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[60+j] >> 28) & 0x3ff;
		des[200+j] |= (src[64+j] << 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[64+j] >> 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[64+j] >> 16) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[64+j] >> 26) & 0x3ff;
		des[212+j] |= (src[68+j] << 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[68+j] >> 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[68+j] >> 14) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[68+j] >> 24) & 0x3ff;
		des[224+j] |= (src[72+j] << 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[72+j] >> 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[72+j] >> 12) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[72+j] >> 22) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[76+j]) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[76+j] >> 10) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[76+j] >> 20) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[76+j] >> 30) & 0x3ff;
		des[252+j] |= (src[80+j] << 2) & 0x3ff;
	}
}

template<typename T>
void KVSE_unpack_64len_10bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 26) & 0x3ff;
		des[4+j] |= (src[4+j] << 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 14) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 24) & 0x3ff;
		des[16+j] |= (src[8+j] << 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 12) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 22) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j]) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 10) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 20) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 30) & 0x3ff;
		des[44+j] |= (src[16+j] << 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j] >> 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 18) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[16+j] >> 28) & 0x3ff;
		des[56+j] |= (src[20+j] << 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[20+j] >> 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[20+j] >> 16) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[20+j] >> 26) & 0x3ff;
		des[68+j] |= (src[24+j] << 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[24+j] >> 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[24+j] >> 14) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[24+j] >> 24) & 0x3ff;
		des[80+j] |= (src[28+j] << 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[28+j] >> 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[28+j] >> 12) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[28+j] >> 22) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[32+j]) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[32+j] >> 10) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[32+j] >> 20) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[32+j] >> 30) & 0x3ff;
		des[108+j] |= (src[36+j] << 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[36+j] >> 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[36+j] >> 18) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[36+j] >> 28) & 0x3ff;
		des[120+j] |= (src[40+j] << 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[40+j] >> 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[40+j] >> 16) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[40+j] >> 26) & 0x3ff;
		des[132+j] |= (src[44+j] << 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[44+j] >> 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[44+j] >> 14) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[44+j] >> 24) & 0x3ff;
		des[144+j] |= (src[48+j] << 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[48+j] >> 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[48+j] >> 12) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[48+j] >> 22) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[52+j]) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[52+j] >> 10) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[52+j] >> 20) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[52+j] >> 30) & 0x3ff;
		des[172+j] |= (src[56+j] << 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[56+j] >> 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[56+j] >> 18) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[56+j] >> 28) & 0x3ff;
		des[184+j] |= (src[60+j] << 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[60+j] >> 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[60+j] >> 16) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[60+j] >> 26) & 0x3ff;
		des[196+j] |= (src[64+j] << 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[64+j] >> 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[64+j] >> 14) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[64+j] >> 24) & 0x3ff;
		des[208+j] |= (src[68+j] << 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[68+j] >> 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[68+j] >> 12) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[68+j] >> 22) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[72+j]) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[72+j] >> 10) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[72+j] >> 20) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[72+j] >> 30) & 0x3ff;
		des[236+j] |= (src[76+j] << 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[76+j] >> 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[76+j] >> 18) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[76+j] >> 28) & 0x3ff;
		des[248+j] |= (src[80+j] << 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[80+j] >> 6) & 0x3ff;
	}
}

template<typename T>
void KVSE_unpack_64len_10bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x3ff;
		des[j] |= (src[4+j] << 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 12) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 22) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j]) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 10) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 20) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 30) & 0x3ff;
		des[28+j] |= (src[12+j] << 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j] >> 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 18) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 28) & 0x3ff;
		des[40+j] |= (src[16+j] << 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j] >> 16) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 26) & 0x3ff;
		des[52+j] |= (src[20+j] << 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[20+j] >> 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[20+j] >> 14) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[20+j] >> 24) & 0x3ff;
		des[64+j] |= (src[24+j] << 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[24+j] >> 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[24+j] >> 12) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[24+j] >> 22) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[28+j]) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[28+j] >> 10) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[28+j] >> 20) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[28+j] >> 30) & 0x3ff;
		des[92+j] |= (src[32+j] << 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[32+j] >> 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[32+j] >> 18) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[32+j] >> 28) & 0x3ff;
		des[104+j] |= (src[36+j] << 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[36+j] >> 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[36+j] >> 16) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[36+j] >> 26) & 0x3ff;
		des[116+j] |= (src[40+j] << 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[40+j] >> 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[40+j] >> 14) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[40+j] >> 24) & 0x3ff;
		des[128+j] |= (src[44+j] << 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[44+j] >> 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[44+j] >> 12) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[44+j] >> 22) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[48+j]) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[48+j] >> 10) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[48+j] >> 20) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[48+j] >> 30) & 0x3ff;
		des[156+j] |= (src[52+j] << 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[52+j] >> 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[52+j] >> 18) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[52+j] >> 28) & 0x3ff;
		des[168+j] |= (src[56+j] << 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[56+j] >> 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[56+j] >> 16) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[56+j] >> 26) & 0x3ff;
		des[180+j] |= (src[60+j] << 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[60+j] >> 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[60+j] >> 14) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[60+j] >> 24) & 0x3ff;
		des[192+j] |= (src[64+j] << 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[64+j] >> 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[64+j] >> 12) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[64+j] >> 22) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[68+j]) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[68+j] >> 10) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[68+j] >> 20) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[68+j] >> 30) & 0x3ff;
		des[220+j] |= (src[72+j] << 2) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[72+j] >> 8) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[72+j] >> 18) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[72+j] >> 28) & 0x3ff;
		des[232+j] |= (src[76+j] << 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[76+j] >> 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[76+j] >> 16) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[76+j] >> 26) & 0x3ff;
		des[244+j] |= (src[80+j] << 6) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[80+j] >> 4) & 0x3ff;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[80+j] >> 14) & 0x3ff;
	}
}

template<typename T>
void KVSE_unpack_64len_11bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 11) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 22) & 0x7ff;
		des[8+j] |= (src[4+j] << 10) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 1) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 12) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 23) & 0x7ff;
		des[20+j] |= (src[8+j] << 9) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 2) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 13) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[8+j] >> 24) & 0x7ff;
		des[32+j] |= (src[12+j] << 8) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 3) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 14) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[12+j] >> 25) & 0x7ff;
		des[44+j] |= (src[16+j] << 7) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j] >> 4) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 15) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[16+j] >> 26) & 0x7ff;
		des[56+j] |= (src[20+j] << 6) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[20+j] >> 5) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[20+j] >> 16) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[20+j] >> 27) & 0x7ff;
		des[68+j] |= (src[24+j] << 5) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[24+j] >> 6) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[24+j] >> 17) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[24+j] >> 28) & 0x7ff;
		des[80+j] |= (src[28+j] << 4) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[28+j] >> 7) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[28+j] >> 18) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[28+j] >> 29) & 0x7ff;
		des[92+j] |= (src[32+j] << 3) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[32+j] >> 8) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[32+j] >> 19) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[32+j] >> 30) & 0x7ff;
		des[104+j] |= (src[36+j] << 2) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[36+j] >> 9) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[36+j] >> 20) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[36+j] >> 31) & 0x7ff;
		des[116+j] |= (src[40+j] << 1) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[40+j] >> 10) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[40+j] >> 21) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[44+j]) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[44+j] >> 11) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[44+j] >> 22) & 0x7ff;
		des[136+j] |= (src[48+j] << 10) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[48+j] >> 1) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[48+j] >> 12) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[48+j] >> 23) & 0x7ff;
		des[148+j] |= (src[52+j] << 9) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[52+j] >> 2) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[52+j] >> 13) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[52+j] >> 24) & 0x7ff;
		des[160+j] |= (src[56+j] << 8) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[56+j] >> 3) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[56+j] >> 14) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[56+j] >> 25) & 0x7ff;
		des[172+j] |= (src[60+j] << 7) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[60+j] >> 4) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[60+j] >> 15) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[60+j] >> 26) & 0x7ff;
		des[184+j] |= (src[64+j] << 6) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[64+j] >> 5) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[64+j] >> 16) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[64+j] >> 27) & 0x7ff;
		des[196+j] |= (src[68+j] << 5) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[68+j] >> 6) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[68+j] >> 17) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[68+j] >> 28) & 0x7ff;
		des[208+j] |= (src[72+j] << 4) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[72+j] >> 7) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[72+j] >> 18) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[72+j] >> 29) & 0x7ff;
		des[220+j] |= (src[76+j] << 3) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[76+j] >> 8) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[76+j] >> 19) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[76+j] >> 30) & 0x7ff;
		des[232+j] |= (src[80+j] << 2) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[80+j] >> 9) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[80+j] >> 20) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[80+j] >> 31) & 0x7ff;
		des[244+j] |= (src[84+j] << 1) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[84+j] >> 10) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[84+j] >> 21) & 0x7ff;
	}
}

template<typename T>
void KVSE_unpack_64len_11bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 19) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 30) & 0x7ff;
		des[8+j] |= (src[4+j] << 2) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 9) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 20) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 31) & 0x7ff;
		des[20+j] |= (src[8+j] << 1) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 10) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 21) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j]) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 11) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 22) & 0x7ff;
		des[40+j] |= (src[16+j] << 10) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 1) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j] >> 12) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 23) & 0x7ff;
		des[52+j] |= (src[20+j] << 9) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[20+j] >> 2) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[20+j] >> 13) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[20+j] >> 24) & 0x7ff;
		des[64+j] |= (src[24+j] << 8) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[24+j] >> 3) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[24+j] >> 14) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[24+j] >> 25) & 0x7ff;
		des[76+j] |= (src[28+j] << 7) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[28+j] >> 4) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[28+j] >> 15) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[28+j] >> 26) & 0x7ff;
		des[88+j] |= (src[32+j] << 6) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[32+j] >> 5) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[32+j] >> 16) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[32+j] >> 27) & 0x7ff;
		des[100+j] |= (src[36+j] << 5) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[36+j] >> 6) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[36+j] >> 17) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[36+j] >> 28) & 0x7ff;
		des[112+j] |= (src[40+j] << 4) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[40+j] >> 7) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[40+j] >> 18) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[40+j] >> 29) & 0x7ff;
		des[124+j] |= (src[44+j] << 3) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[44+j] >> 8) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[44+j] >> 19) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[44+j] >> 30) & 0x7ff;
		des[136+j] |= (src[48+j] << 2) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[48+j] >> 9) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[48+j] >> 20) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[48+j] >> 31) & 0x7ff;
		des[148+j] |= (src[52+j] << 1) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[52+j] >> 10) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[52+j] >> 21) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[56+j]) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[56+j] >> 11) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[56+j] >> 22) & 0x7ff;
		des[168+j] |= (src[60+j] << 10) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[60+j] >> 1) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[60+j] >> 12) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[60+j] >> 23) & 0x7ff;
		des[180+j] |= (src[64+j] << 9) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[64+j] >> 2) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[64+j] >> 13) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[64+j] >> 24) & 0x7ff;
		des[192+j] |= (src[68+j] << 8) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[68+j] >> 3) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[68+j] >> 14) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[68+j] >> 25) & 0x7ff;
		des[204+j] |= (src[72+j] << 7) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[72+j] >> 4) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[72+j] >> 15) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[72+j] >> 26) & 0x7ff;
		des[216+j] |= (src[76+j] << 6) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[76+j] >> 5) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[76+j] >> 16) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[76+j] >> 27) & 0x7ff;
		des[228+j] |= (src[80+j] << 5) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[80+j] >> 6) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[80+j] >> 17) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[80+j] >> 28) & 0x7ff;
		des[240+j] |= (src[84+j] << 4) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[84+j] >> 7) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[84+j] >> 18) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[84+j] >> 29) & 0x7ff;
		des[252+j] |= (src[88+j] << 3) & 0x7ff;
	}
}

template<typename T>
void KVSE_unpack_64len_11bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 27) & 0x7ff;
		des[4+j] |= (src[4+j] << 5) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 6) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 17) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 28) & 0x7ff;
		des[16+j] |= (src[8+j] << 4) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 7) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 18) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 29) & 0x7ff;
		des[28+j] |= (src[12+j] << 3) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j] >> 8) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 19) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 30) & 0x7ff;
		des[40+j] |= (src[16+j] << 2) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 9) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j] >> 20) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 31) & 0x7ff;
		des[52+j] |= (src[20+j] << 1) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[20+j] >> 10) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[20+j] >> 21) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[24+j]) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[24+j] >> 11) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[24+j] >> 22) & 0x7ff;
		des[72+j] |= (src[28+j] << 10) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[28+j] >> 1) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[28+j] >> 12) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[28+j] >> 23) & 0x7ff;
		des[84+j] |= (src[32+j] << 9) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[32+j] >> 2) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[32+j] >> 13) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[32+j] >> 24) & 0x7ff;
		des[96+j] |= (src[36+j] << 8) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[36+j] >> 3) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[36+j] >> 14) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[36+j] >> 25) & 0x7ff;
		des[108+j] |= (src[40+j] << 7) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[40+j] >> 4) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[40+j] >> 15) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[40+j] >> 26) & 0x7ff;
		des[120+j] |= (src[44+j] << 6) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[44+j] >> 5) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[44+j] >> 16) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[44+j] >> 27) & 0x7ff;
		des[132+j] |= (src[48+j] << 5) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[48+j] >> 6) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[48+j] >> 17) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[48+j] >> 28) & 0x7ff;
		des[144+j] |= (src[52+j] << 4) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[52+j] >> 7) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[52+j] >> 18) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[52+j] >> 29) & 0x7ff;
		des[156+j] |= (src[56+j] << 3) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[56+j] >> 8) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[56+j] >> 19) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[56+j] >> 30) & 0x7ff;
		des[168+j] |= (src[60+j] << 2) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[60+j] >> 9) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[60+j] >> 20) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[60+j] >> 31) & 0x7ff;
		des[180+j] |= (src[64+j] << 1) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[64+j] >> 10) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[64+j] >> 21) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[68+j]) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[68+j] >> 11) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[68+j] >> 22) & 0x7ff;
		des[200+j] |= (src[72+j] << 10) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[72+j] >> 1) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[72+j] >> 12) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[72+j] >> 23) & 0x7ff;
		des[212+j] |= (src[76+j] << 9) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[76+j] >> 2) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[76+j] >> 13) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[76+j] >> 24) & 0x7ff;
		des[224+j] |= (src[80+j] << 8) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[80+j] >> 3) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[80+j] >> 14) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[80+j] >> 25) & 0x7ff;
		des[236+j] |= (src[84+j] << 7) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[84+j] >> 4) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[84+j] >> 15) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[84+j] >> 26) & 0x7ff;
		des[248+j] |= (src[88+j] << 6) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[88+j] >> 5) & 0x7ff;
	}
}

template<typename T>
void KVSE_unpack_64len_11bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0x7ff;
		des[j] |= (src[4+j] << 8) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 3) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 14) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 25) & 0x7ff;
		des[12+j] |= (src[8+j] << 7) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 4) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 15) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 26) & 0x7ff;
		des[24+j] |= (src[12+j] << 6) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 5) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j] >> 16) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 27) & 0x7ff;
		des[36+j] |= (src[16+j] << 5) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[16+j] >> 6) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 17) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j] >> 28) & 0x7ff;
		des[48+j] |= (src[20+j] << 4) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[20+j] >> 7) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[20+j] >> 18) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[20+j] >> 29) & 0x7ff;
		des[60+j] |= (src[24+j] << 3) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[24+j] >> 8) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[24+j] >> 19) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[24+j] >> 30) & 0x7ff;
		des[72+j] |= (src[28+j] << 2) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[28+j] >> 9) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[28+j] >> 20) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[28+j] >> 31) & 0x7ff;
		des[84+j] |= (src[32+j] << 1) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[32+j] >> 10) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[32+j] >> 21) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[36+j]) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[36+j] >> 11) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[36+j] >> 22) & 0x7ff;
		des[104+j] |= (src[40+j] << 10) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[40+j] >> 1) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[40+j] >> 12) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[40+j] >> 23) & 0x7ff;
		des[116+j] |= (src[44+j] << 9) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[44+j] >> 2) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[44+j] >> 13) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[44+j] >> 24) & 0x7ff;
		des[128+j] |= (src[48+j] << 8) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[48+j] >> 3) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[48+j] >> 14) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[48+j] >> 25) & 0x7ff;
		des[140+j] |= (src[52+j] << 7) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[52+j] >> 4) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[52+j] >> 15) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[52+j] >> 26) & 0x7ff;
		des[152+j] |= (src[56+j] << 6) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[56+j] >> 5) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[56+j] >> 16) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[56+j] >> 27) & 0x7ff;
		des[164+j] |= (src[60+j] << 5) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[60+j] >> 6) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[60+j] >> 17) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[60+j] >> 28) & 0x7ff;
		des[176+j] |= (src[64+j] << 4) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[64+j] >> 7) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[64+j] >> 18) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[64+j] >> 29) & 0x7ff;
		des[188+j] |= (src[68+j] << 3) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[68+j] >> 8) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[68+j] >> 19) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[68+j] >> 30) & 0x7ff;
		des[200+j] |= (src[72+j] << 2) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[72+j] >> 9) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[72+j] >> 20) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[72+j] >> 31) & 0x7ff;
		des[212+j] |= (src[76+j] << 1) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[76+j] >> 10) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[76+j] >> 21) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[80+j]) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[80+j] >> 11) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[80+j] >> 22) & 0x7ff;
		des[232+j] |= (src[84+j] << 10) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[84+j] >> 1) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[84+j] >> 12) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[84+j] >> 23) & 0x7ff;
		des[244+j] |= (src[88+j] << 9) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[88+j] >> 2) & 0x7ff;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[88+j] >> 13) & 0x7ff;
	}
}

template<typename T>
void KVSE_unpack_64len_12bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[j] >> 24) & 0xfff;
		des[8+j] |= (src[4+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[4+j] >> 28) & 0xfff;
		des[20+j] |= (src[8+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[12+j] >> 24) & 0xfff;
		des[40+j] |= (src[16+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[16+j] >> 28) & 0xfff;
		des[52+j] |= (src[20+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[20+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[20+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[24+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[24+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[24+j] >> 24) & 0xfff;
		des[72+j] |= (src[28+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[28+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[28+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[28+j] >> 28) & 0xfff;
		des[84+j] |= (src[32+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[32+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[32+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[36+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[36+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[36+j] >> 24) & 0xfff;
		des[104+j] |= (src[40+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[40+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[40+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[40+j] >> 28) & 0xfff;
		des[116+j] |= (src[44+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[44+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[44+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[48+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[48+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[48+j] >> 24) & 0xfff;
		des[136+j] |= (src[52+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[52+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[52+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[52+j] >> 28) & 0xfff;
		des[148+j] |= (src[56+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[56+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[56+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[60+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[60+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[60+j] >> 24) & 0xfff;
		des[168+j] |= (src[64+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[64+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[64+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[64+j] >> 28) & 0xfff;
		des[180+j] |= (src[68+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[68+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[68+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[72+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[72+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[72+j] >> 24) & 0xfff;
		des[200+j] |= (src[76+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[76+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[76+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[76+j] >> 28) & 0xfff;
		des[212+j] |= (src[80+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[80+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[80+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[84+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[84+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[84+j] >> 24) & 0xfff;
		des[232+j] |= (src[88+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[88+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[88+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[88+j] >> 28) & 0xfff;
		des[244+j] |= (src[92+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[92+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[92+j] >> 20) & 0xfff;
	}
}

template<typename T>
void KVSE_unpack_64len_12bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[4+j] >> 24) & 0xfff;
		des[16+j] |= (src[8+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[8+j] >> 28) & 0xfff;
		des[28+j] |= (src[12+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[16+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[16+j] >> 24) & 0xfff;
		des[48+j] |= (src[20+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[20+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[20+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[20+j] >> 28) & 0xfff;
		des[60+j] |= (src[24+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[24+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[24+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[28+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[28+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[28+j] >> 24) & 0xfff;
		des[80+j] |= (src[32+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[32+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[32+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[32+j] >> 28) & 0xfff;
		des[92+j] |= (src[36+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[36+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[36+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[40+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[40+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[40+j] >> 24) & 0xfff;
		des[112+j] |= (src[44+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[44+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[44+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[44+j] >> 28) & 0xfff;
		des[124+j] |= (src[48+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[48+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[48+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[52+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[52+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[52+j] >> 24) & 0xfff;
		des[144+j] |= (src[56+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[56+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[56+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[56+j] >> 28) & 0xfff;
		des[156+j] |= (src[60+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[60+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[60+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[64+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[64+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[64+j] >> 24) & 0xfff;
		des[176+j] |= (src[68+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[68+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[68+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[68+j] >> 28) & 0xfff;
		des[188+j] |= (src[72+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[72+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[72+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[76+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[76+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[76+j] >> 24) & 0xfff;
		des[208+j] |= (src[80+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[80+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[80+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[80+j] >> 28) & 0xfff;
		des[220+j] |= (src[84+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[84+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[84+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[88+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[88+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[88+j] >> 24) & 0xfff;
		des[240+j] |= (src[92+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[92+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[92+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[92+j] >> 28) & 0xfff;
		des[252+j] |= (src[96+j] << 4) & 0xfff;
	}
}

template<typename T>
void KVSE_unpack_64len_12bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 28) & 0xfff;
		des[4+j] |= (src[4+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[8+j] >> 24) & 0xfff;
		des[24+j] |= (src[12+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[12+j] >> 28) & 0xfff;
		des[36+j] |= (src[16+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[16+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[20+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[20+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[20+j] >> 24) & 0xfff;
		des[56+j] |= (src[24+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[24+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[24+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[24+j] >> 28) & 0xfff;
		des[68+j] |= (src[28+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[28+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[28+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[32+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[32+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[32+j] >> 24) & 0xfff;
		des[88+j] |= (src[36+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[36+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[36+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[36+j] >> 28) & 0xfff;
		des[100+j] |= (src[40+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[40+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[40+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[44+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[44+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[44+j] >> 24) & 0xfff;
		des[120+j] |= (src[48+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[48+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[48+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[48+j] >> 28) & 0xfff;
		des[132+j] |= (src[52+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[52+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[52+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[56+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[56+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[56+j] >> 24) & 0xfff;
		des[152+j] |= (src[60+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[60+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[60+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[60+j] >> 28) & 0xfff;
		des[164+j] |= (src[64+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[64+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[64+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[68+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[68+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[68+j] >> 24) & 0xfff;
		des[184+j] |= (src[72+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[72+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[72+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[72+j] >> 28) & 0xfff;
		des[196+j] |= (src[76+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[76+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[76+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[80+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[80+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[80+j] >> 24) & 0xfff;
		des[216+j] |= (src[84+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[84+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[84+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[84+j] >> 28) & 0xfff;
		des[228+j] |= (src[88+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[88+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[88+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[92+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[92+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[92+j] >> 24) & 0xfff;
		des[248+j] |= (src[96+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[96+j] >> 4) & 0xfff;
	}
}

template<typename T>
void KVSE_unpack_64len_12bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0xfff;
		des[j] |= (src[4+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 28) & 0xfff;
		des[12+j] |= (src[8+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[12+j] >> 24) & 0xfff;
		des[32+j] |= (src[16+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[16+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[16+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[16+j] >> 28) & 0xfff;
		des[44+j] |= (src[20+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[20+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[20+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[24+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[24+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[24+j] >> 24) & 0xfff;
		des[64+j] |= (src[28+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[28+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[28+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[28+j] >> 28) & 0xfff;
		des[76+j] |= (src[32+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[32+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[32+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[36+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[36+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[36+j] >> 24) & 0xfff;
		des[96+j] |= (src[40+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[40+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[40+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[40+j] >> 28) & 0xfff;
		des[108+j] |= (src[44+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[44+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[44+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[48+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[48+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[48+j] >> 24) & 0xfff;
		des[128+j] |= (src[52+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[52+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[52+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[52+j] >> 28) & 0xfff;
		des[140+j] |= (src[56+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[56+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[56+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[60+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[60+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[60+j] >> 24) & 0xfff;
		des[160+j] |= (src[64+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[64+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[64+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[64+j] >> 28) & 0xfff;
		des[172+j] |= (src[68+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[68+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[68+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[72+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[72+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[72+j] >> 24) & 0xfff;
		des[192+j] |= (src[76+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[76+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[76+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[76+j] >> 28) & 0xfff;
		des[204+j] |= (src[80+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[80+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[80+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[84+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[84+j] >> 12) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[84+j] >> 24) & 0xfff;
		des[224+j] |= (src[88+j] << 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[88+j] >> 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[88+j] >> 16) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[88+j] >> 28) & 0xfff;
		des[236+j] |= (src[92+j] << 4) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[92+j] >> 8) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[92+j] >> 20) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[96+j]) & 0xfff;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[96+j] >> 12) & 0xfff;
	}
}

template<typename T>
void KVSE_unpack_64len_16bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[16+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[16+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[20+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[20+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[24+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[24+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[28+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[28+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[32+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[32+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[36+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[36+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[40+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[40+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[44+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[44+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[48+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[48+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[52+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[52+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[56+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[56+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[60+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[60+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[64+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[64+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[68+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[68+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[72+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[72+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[76+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[76+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[80+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[80+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[84+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[84+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[88+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[88+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[92+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[92+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[96+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[96+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[100+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[100+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[104+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[104+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[108+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[108+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[112+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[112+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[116+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[116+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[120+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[120+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[124+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[124+j] >> 16) & 0xffff;
	}
}

template<typename T>
void KVSE_unpack_64len_16bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 24) & 0xffff;
		des[4+j] |= (src[4+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 24) & 0xffff;
		des[12+j] |= (src[8+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[8+j] >> 24) & 0xffff;
		des[20+j] |= (src[12+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[12+j] >> 24) & 0xffff;
		des[28+j] |= (src[16+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[16+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[16+j] >> 24) & 0xffff;
		des[36+j] |= (src[20+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[20+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[20+j] >> 24) & 0xffff;
		des[44+j] |= (src[24+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[24+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[24+j] >> 24) & 0xffff;
		des[52+j] |= (src[28+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[28+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[28+j] >> 24) & 0xffff;
		des[60+j] |= (src[32+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[32+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[32+j] >> 24) & 0xffff;
		des[68+j] |= (src[36+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[36+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[36+j] >> 24) & 0xffff;
		des[76+j] |= (src[40+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[40+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[40+j] >> 24) & 0xffff;
		des[84+j] |= (src[44+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[44+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[44+j] >> 24) & 0xffff;
		des[92+j] |= (src[48+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[48+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[48+j] >> 24) & 0xffff;
		des[100+j] |= (src[52+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[52+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[52+j] >> 24) & 0xffff;
		des[108+j] |= (src[56+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[56+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[56+j] >> 24) & 0xffff;
		des[116+j] |= (src[60+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[60+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[60+j] >> 24) & 0xffff;
		des[124+j] |= (src[64+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[64+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[64+j] >> 24) & 0xffff;
		des[132+j] |= (src[68+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[68+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[68+j] >> 24) & 0xffff;
		des[140+j] |= (src[72+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[72+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[72+j] >> 24) & 0xffff;
		des[148+j] |= (src[76+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[76+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[76+j] >> 24) & 0xffff;
		des[156+j] |= (src[80+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[80+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[80+j] >> 24) & 0xffff;
		des[164+j] |= (src[84+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[84+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[84+j] >> 24) & 0xffff;
		des[172+j] |= (src[88+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[88+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[88+j] >> 24) & 0xffff;
		des[180+j] |= (src[92+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[92+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[92+j] >> 24) & 0xffff;
		des[188+j] |= (src[96+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[96+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[96+j] >> 24) & 0xffff;
		des[196+j] |= (src[100+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[100+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[100+j] >> 24) & 0xffff;
		des[204+j] |= (src[104+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[104+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[104+j] >> 24) & 0xffff;
		des[212+j] |= (src[108+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[108+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[108+j] >> 24) & 0xffff;
		des[220+j] |= (src[112+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[112+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[112+j] >> 24) & 0xffff;
		des[228+j] |= (src[116+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[116+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[116+j] >> 24) & 0xffff;
		des[236+j] |= (src[120+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[120+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[120+j] >> 24) & 0xffff;
		des[244+j] |= (src[124+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[124+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[124+j] >> 24) & 0xffff;
		des[252+j] |= (src[128+j] << 8) & 0xffff;
	}
}

template<typename T>
void KVSE_unpack_64len_16bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[16+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[20+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[20+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[24+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[24+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[28+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[28+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[32+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[32+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[36+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[36+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[40+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[40+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[44+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[44+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[48+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[48+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[52+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[52+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[56+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[56+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[60+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[60+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[64+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[64+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[68+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[68+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[72+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[72+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[76+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[76+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[80+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[80+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[84+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[84+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[88+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[88+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[92+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[92+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[96+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[96+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[100+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[100+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[104+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[104+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[108+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[108+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[112+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[112+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[116+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[116+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[120+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[120+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[124+j]) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[124+j] >> 16) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[128+j]) & 0xffff;
	}
}

template<typename T>
void KVSE_unpack_64len_16bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0xffff;
		des[j] |= (src[4+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 24) & 0xffff;
		des[8+j] |= (src[8+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 24) & 0xffff;
		des[16+j] |= (src[12+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 24) & 0xffff;
		des[24+j] |= (src[16+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[16+j] >> 24) & 0xffff;
		des[32+j] |= (src[20+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[20+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[20+j] >> 24) & 0xffff;
		des[40+j] |= (src[24+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[24+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[24+j] >> 24) & 0xffff;
		des[48+j] |= (src[28+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[28+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[28+j] >> 24) & 0xffff;
		des[56+j] |= (src[32+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[32+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[32+j] >> 24) & 0xffff;
		des[64+j] |= (src[36+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[36+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[36+j] >> 24) & 0xffff;
		des[72+j] |= (src[40+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[40+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[40+j] >> 24) & 0xffff;
		des[80+j] |= (src[44+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[44+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[44+j] >> 24) & 0xffff;
		des[88+j] |= (src[48+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[48+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[48+j] >> 24) & 0xffff;
		des[96+j] |= (src[52+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[52+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[52+j] >> 24) & 0xffff;
		des[104+j] |= (src[56+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[56+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[56+j] >> 24) & 0xffff;
		des[112+j] |= (src[60+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[60+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[60+j] >> 24) & 0xffff;
		des[120+j] |= (src[64+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[64+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[64+j] >> 24) & 0xffff;
		des[128+j] |= (src[68+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[68+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[68+j] >> 24) & 0xffff;
		des[136+j] |= (src[72+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[72+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[72+j] >> 24) & 0xffff;
		des[144+j] |= (src[76+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[76+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[76+j] >> 24) & 0xffff;
		des[152+j] |= (src[80+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[80+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[80+j] >> 24) & 0xffff;
		des[160+j] |= (src[84+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[84+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[84+j] >> 24) & 0xffff;
		des[168+j] |= (src[88+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[88+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[88+j] >> 24) & 0xffff;
		des[176+j] |= (src[92+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[92+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[92+j] >> 24) & 0xffff;
		des[184+j] |= (src[96+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[96+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[96+j] >> 24) & 0xffff;
		des[192+j] |= (src[100+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[100+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[100+j] >> 24) & 0xffff;
		des[200+j] |= (src[104+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[104+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[104+j] >> 24) & 0xffff;
		des[208+j] |= (src[108+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[108+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[108+j] >> 24) & 0xffff;
		des[216+j] |= (src[112+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[112+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[112+j] >> 24) & 0xffff;
		des[224+j] |= (src[116+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[116+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[116+j] >> 24) & 0xffff;
		des[232+j] |= (src[120+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[120+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[120+j] >> 24) & 0xffff;
		des[240+j] |= (src[124+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[124+j] >> 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[124+j] >> 24) & 0xffff;
		des[248+j] |= (src[128+j] << 8) & 0xffff;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[128+j] >> 8) & 0xffff;
	}
}

template<typename T>
void KVSE_unpack_64len_20bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 20) & 0xfffff;
		des[4+j] |= (src[4+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[4+j] >> 28) & 0xfffff;
		des[12+j] |= (src[8+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 16) & 0xfffff;
		des[16+j] |= (src[12+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[12+j] >> 24) & 0xfffff;
		des[24+j] |= (src[16+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[20+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[20+j] >> 20) & 0xfffff;
		des[36+j] |= (src[24+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[24+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[24+j] >> 28) & 0xfffff;
		des[44+j] |= (src[28+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[28+j] >> 16) & 0xfffff;
		des[48+j] |= (src[32+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[32+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[32+j] >> 24) & 0xfffff;
		des[56+j] |= (src[36+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[36+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[40+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[40+j] >> 20) & 0xfffff;
		des[68+j] |= (src[44+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[44+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[44+j] >> 28) & 0xfffff;
		des[76+j] |= (src[48+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[48+j] >> 16) & 0xfffff;
		des[80+j] |= (src[52+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[52+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[52+j] >> 24) & 0xfffff;
		des[88+j] |= (src[56+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[56+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[60+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[60+j] >> 20) & 0xfffff;
		des[100+j] |= (src[64+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[64+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[64+j] >> 28) & 0xfffff;
		des[108+j] |= (src[68+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[68+j] >> 16) & 0xfffff;
		des[112+j] |= (src[72+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[72+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[72+j] >> 24) & 0xfffff;
		des[120+j] |= (src[76+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[76+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[80+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[80+j] >> 20) & 0xfffff;
		des[132+j] |= (src[84+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[84+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[84+j] >> 28) & 0xfffff;
		des[140+j] |= (src[88+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[88+j] >> 16) & 0xfffff;
		des[144+j] |= (src[92+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[92+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[92+j] >> 24) & 0xfffff;
		des[152+j] |= (src[96+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[96+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[100+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[100+j] >> 20) & 0xfffff;
		des[164+j] |= (src[104+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[104+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[104+j] >> 28) & 0xfffff;
		des[172+j] |= (src[108+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[108+j] >> 16) & 0xfffff;
		des[176+j] |= (src[112+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[112+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[112+j] >> 24) & 0xfffff;
		des[184+j] |= (src[116+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[116+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[120+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[120+j] >> 20) & 0xfffff;
		des[196+j] |= (src[124+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[124+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[124+j] >> 28) & 0xfffff;
		des[204+j] |= (src[128+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[128+j] >> 16) & 0xfffff;
		des[208+j] |= (src[132+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[132+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[132+j] >> 24) & 0xfffff;
		des[216+j] |= (src[136+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[136+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[140+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[140+j] >> 20) & 0xfffff;
		des[228+j] |= (src[144+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[144+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[144+j] >> 28) & 0xfffff;
		des[236+j] |= (src[148+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[148+j] >> 16) & 0xfffff;
		des[240+j] |= (src[152+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[152+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[152+j] >> 24) & 0xfffff;
		des[248+j] |= (src[156+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[156+j] >> 12) & 0xfffff;
	}
}

template<typename T>
void KVSE_unpack_64len_20bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[j] >> 28) & 0xfffff;
		des[4+j] |= (src[4+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 16) & 0xfffff;
		des[8+j] |= (src[8+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[8+j] >> 24) & 0xfffff;
		des[16+j] |= (src[12+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 20) & 0xfffff;
		des[28+j] |= (src[20+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[20+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[20+j] >> 28) & 0xfffff;
		des[36+j] |= (src[24+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[24+j] >> 16) & 0xfffff;
		des[40+j] |= (src[28+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[28+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[28+j] >> 24) & 0xfffff;
		des[48+j] |= (src[32+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[32+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[36+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[36+j] >> 20) & 0xfffff;
		des[60+j] |= (src[40+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[40+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[40+j] >> 28) & 0xfffff;
		des[68+j] |= (src[44+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[44+j] >> 16) & 0xfffff;
		des[72+j] |= (src[48+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[48+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[48+j] >> 24) & 0xfffff;
		des[80+j] |= (src[52+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[52+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[56+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[56+j] >> 20) & 0xfffff;
		des[92+j] |= (src[60+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[60+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[60+j] >> 28) & 0xfffff;
		des[100+j] |= (src[64+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[64+j] >> 16) & 0xfffff;
		des[104+j] |= (src[68+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[68+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[68+j] >> 24) & 0xfffff;
		des[112+j] |= (src[72+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[72+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[76+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[76+j] >> 20) & 0xfffff;
		des[124+j] |= (src[80+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[80+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[80+j] >> 28) & 0xfffff;
		des[132+j] |= (src[84+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[84+j] >> 16) & 0xfffff;
		des[136+j] |= (src[88+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[88+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[88+j] >> 24) & 0xfffff;
		des[144+j] |= (src[92+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[92+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[96+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[96+j] >> 20) & 0xfffff;
		des[156+j] |= (src[100+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[100+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[100+j] >> 28) & 0xfffff;
		des[164+j] |= (src[104+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[104+j] >> 16) & 0xfffff;
		des[168+j] |= (src[108+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[108+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[108+j] >> 24) & 0xfffff;
		des[176+j] |= (src[112+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[112+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[116+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[116+j] >> 20) & 0xfffff;
		des[188+j] |= (src[120+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[120+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[120+j] >> 28) & 0xfffff;
		des[196+j] |= (src[124+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[124+j] >> 16) & 0xfffff;
		des[200+j] |= (src[128+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[128+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[128+j] >> 24) & 0xfffff;
		des[208+j] |= (src[132+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[132+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[136+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[136+j] >> 20) & 0xfffff;
		des[220+j] |= (src[140+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[140+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[140+j] >> 28) & 0xfffff;
		des[228+j] |= (src[144+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[144+j] >> 16) & 0xfffff;
		des[232+j] |= (src[148+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[148+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[148+j] >> 24) & 0xfffff;
		des[240+j] |= (src[152+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[152+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[156+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[156+j] >> 20) & 0xfffff;
		des[252+j] |= (src[160+j] << 12) & 0xfffff;
	}
}

template<typename T>
void KVSE_unpack_64len_20bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 16) & 0xfffff;
		des[j] |= (src[4+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[4+j] >> 24) & 0xfffff;
		des[8+j] |= (src[8+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 20) & 0xfffff;
		des[20+j] |= (src[16+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[16+j] >> 28) & 0xfffff;
		des[28+j] |= (src[20+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[20+j] >> 16) & 0xfffff;
		des[32+j] |= (src[24+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[24+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[24+j] >> 24) & 0xfffff;
		des[40+j] |= (src[28+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[28+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[32+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[32+j] >> 20) & 0xfffff;
		des[52+j] |= (src[36+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[36+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[36+j] >> 28) & 0xfffff;
		des[60+j] |= (src[40+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[40+j] >> 16) & 0xfffff;
		des[64+j] |= (src[44+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[44+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[44+j] >> 24) & 0xfffff;
		des[72+j] |= (src[48+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[48+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[52+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[52+j] >> 20) & 0xfffff;
		des[84+j] |= (src[56+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[56+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[56+j] >> 28) & 0xfffff;
		des[92+j] |= (src[60+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[60+j] >> 16) & 0xfffff;
		des[96+j] |= (src[64+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[64+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[64+j] >> 24) & 0xfffff;
		des[104+j] |= (src[68+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[68+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[72+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[72+j] >> 20) & 0xfffff;
		des[116+j] |= (src[76+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[76+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[76+j] >> 28) & 0xfffff;
		des[124+j] |= (src[80+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[80+j] >> 16) & 0xfffff;
		des[128+j] |= (src[84+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[84+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[84+j] >> 24) & 0xfffff;
		des[136+j] |= (src[88+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[88+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[92+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[92+j] >> 20) & 0xfffff;
		des[148+j] |= (src[96+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[96+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[96+j] >> 28) & 0xfffff;
		des[156+j] |= (src[100+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[100+j] >> 16) & 0xfffff;
		des[160+j] |= (src[104+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[104+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[104+j] >> 24) & 0xfffff;
		des[168+j] |= (src[108+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[108+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[112+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[112+j] >> 20) & 0xfffff;
		des[180+j] |= (src[116+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[116+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[116+j] >> 28) & 0xfffff;
		des[188+j] |= (src[120+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[120+j] >> 16) & 0xfffff;
		des[192+j] |= (src[124+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[124+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[124+j] >> 24) & 0xfffff;
		des[200+j] |= (src[128+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[128+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[132+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[132+j] >> 20) & 0xfffff;
		des[212+j] |= (src[136+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[136+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[136+j] >> 28) & 0xfffff;
		des[220+j] |= (src[140+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[140+j] >> 16) & 0xfffff;
		des[224+j] |= (src[144+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[144+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[144+j] >> 24) & 0xfffff;
		des[232+j] |= (src[148+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[148+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[152+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[152+j] >> 20) & 0xfffff;
		des[244+j] |= (src[156+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[156+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[156+j] >> 28) & 0xfffff;
		des[252+j] |= (src[160+j] << 4) & 0xfffff;
	}
}

template<typename T>
void KVSE_unpack_64len_20bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] >> 24) & 0xfffff;
		des[j] |= (src[4+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[8+j] >> 20) & 0xfffff;
		des[12+j] |= (src[12+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[12+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[12+j] >> 28) & 0xfffff;
		des[20+j] |= (src[16+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[16+j] >> 16) & 0xfffff;
		des[24+j] |= (src[20+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[20+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[20+j] >> 24) & 0xfffff;
		des[32+j] |= (src[24+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[24+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[28+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[28+j] >> 20) & 0xfffff;
		des[44+j] |= (src[32+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[32+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[32+j] >> 28) & 0xfffff;
		des[52+j] |= (src[36+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[36+j] >> 16) & 0xfffff;
		des[56+j] |= (src[40+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[40+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[40+j] >> 24) & 0xfffff;
		des[64+j] |= (src[44+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[44+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[48+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[48+j] >> 20) & 0xfffff;
		des[76+j] |= (src[52+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[52+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[52+j] >> 28) & 0xfffff;
		des[84+j] |= (src[56+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[56+j] >> 16) & 0xfffff;
		des[88+j] |= (src[60+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[60+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[60+j] >> 24) & 0xfffff;
		des[96+j] |= (src[64+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[64+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[68+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[68+j] >> 20) & 0xfffff;
		des[108+j] |= (src[72+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[72+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[72+j] >> 28) & 0xfffff;
		des[116+j] |= (src[76+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[76+j] >> 16) & 0xfffff;
		des[120+j] |= (src[80+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[80+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[80+j] >> 24) & 0xfffff;
		des[128+j] |= (src[84+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[84+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[88+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[88+j] >> 20) & 0xfffff;
		des[140+j] |= (src[92+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[92+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[92+j] >> 28) & 0xfffff;
		des[148+j] |= (src[96+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[96+j] >> 16) & 0xfffff;
		des[152+j] |= (src[100+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[100+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[100+j] >> 24) & 0xfffff;
		des[160+j] |= (src[104+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[104+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[108+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[108+j] >> 20) & 0xfffff;
		des[172+j] |= (src[112+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[112+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[112+j] >> 28) & 0xfffff;
		des[180+j] |= (src[116+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[116+j] >> 16) & 0xfffff;
		des[184+j] |= (src[120+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[120+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[120+j] >> 24) & 0xfffff;
		des[192+j] |= (src[124+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[124+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[128+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[128+j] >> 20) & 0xfffff;
		des[204+j] |= (src[132+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[132+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[132+j] >> 28) & 0xfffff;
		des[212+j] |= (src[136+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[136+j] >> 16) & 0xfffff;
		des[216+j] |= (src[140+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[140+j] >> 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[140+j] >> 24) & 0xfffff;
		des[224+j] |= (src[144+j] << 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[144+j] >> 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[148+j]) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[148+j] >> 20) & 0xfffff;
		des[236+j] |= (src[152+j] << 12) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[152+j] >> 8) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[152+j] >> 28) & 0xfffff;
		des[244+j] |= (src[156+j] << 4) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[156+j] >> 16) & 0xfffff;
		des[248+j] |= (src[160+j] << 16) & 0xfffff;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[160+j] >> 4) & 0xfffff;
	}
}

template<typename T>
void KVSE_unpack_64len_32bw_0offset(T * des, const uint32_t *src) {
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
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[128+j]);
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[132+j]);
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[136+j]);
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[140+j]);
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[144+j]);
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[148+j]);
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[152+j]);
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[156+j]);
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[160+j]);
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[164+j]);
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[168+j]);
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[172+j]);
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[176+j]);
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[180+j]);
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[184+j]);
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[188+j]);
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[192+j]);
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[196+j]);
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[200+j]);
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[204+j]);
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[208+j]);
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[212+j]);
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[216+j]);
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[220+j]);
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[224+j]);
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[228+j]);
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[232+j]);
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[236+j]);
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[240+j]);
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[244+j]);
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[248+j]);
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[252+j]);
	}
}

template<typename T>
void KVSE_unpack_64len_32bw_8offset(T * des, const uint32_t *src) {
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
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[128+j] >> 8);
		des[128+j] |= (src[132+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[132+j] >> 8);
		des[132+j] |= (src[136+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[136+j] >> 8);
		des[136+j] |= (src[140+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[140+j] >> 8);
		des[140+j] |= (src[144+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[144+j] >> 8);
		des[144+j] |= (src[148+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[148+j] >> 8);
		des[148+j] |= (src[152+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[152+j] >> 8);
		des[152+j] |= (src[156+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[156+j] >> 8);
		des[156+j] |= (src[160+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[160+j] >> 8);
		des[160+j] |= (src[164+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[164+j] >> 8);
		des[164+j] |= (src[168+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[168+j] >> 8);
		des[168+j] |= (src[172+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[172+j] >> 8);
		des[172+j] |= (src[176+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[176+j] >> 8);
		des[176+j] |= (src[180+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[180+j] >> 8);
		des[180+j] |= (src[184+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[184+j] >> 8);
		des[184+j] |= (src[188+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[188+j] >> 8);
		des[188+j] |= (src[192+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[192+j] >> 8);
		des[192+j] |= (src[196+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[196+j] >> 8);
		des[196+j] |= (src[200+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[200+j] >> 8);
		des[200+j] |= (src[204+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[204+j] >> 8);
		des[204+j] |= (src[208+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[208+j] >> 8);
		des[208+j] |= (src[212+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[212+j] >> 8);
		des[212+j] |= (src[216+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[216+j] >> 8);
		des[216+j] |= (src[220+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[220+j] >> 8);
		des[220+j] |= (src[224+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[224+j] >> 8);
		des[224+j] |= (src[228+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[228+j] >> 8);
		des[228+j] |= (src[232+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[232+j] >> 8);
		des[232+j] |= (src[236+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[236+j] >> 8);
		des[236+j] |= (src[240+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[240+j] >> 8);
		des[240+j] |= (src[244+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[244+j] >> 8);
		des[244+j] |= (src[248+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[248+j] >> 8);
		des[248+j] |= (src[252+j] << 24);
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[252+j] >> 8);
		des[252+j] |= (src[256+j] << 24);
	}
}

template<typename T>
void KVSE_unpack_64len_32bw_16offset(T * des, const uint32_t *src) {
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
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[128+j] >> 16);
		des[128+j] |= (src[132+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[132+j] >> 16);
		des[132+j] |= (src[136+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[136+j] >> 16);
		des[136+j] |= (src[140+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[140+j] >> 16);
		des[140+j] |= (src[144+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[144+j] >> 16);
		des[144+j] |= (src[148+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[148+j] >> 16);
		des[148+j] |= (src[152+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[152+j] >> 16);
		des[152+j] |= (src[156+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[156+j] >> 16);
		des[156+j] |= (src[160+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[160+j] >> 16);
		des[160+j] |= (src[164+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[164+j] >> 16);
		des[164+j] |= (src[168+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[168+j] >> 16);
		des[168+j] |= (src[172+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[172+j] >> 16);
		des[172+j] |= (src[176+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[176+j] >> 16);
		des[176+j] |= (src[180+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[180+j] >> 16);
		des[180+j] |= (src[184+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[184+j] >> 16);
		des[184+j] |= (src[188+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[188+j] >> 16);
		des[188+j] |= (src[192+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[192+j] >> 16);
		des[192+j] |= (src[196+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[196+j] >> 16);
		des[196+j] |= (src[200+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[200+j] >> 16);
		des[200+j] |= (src[204+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[204+j] >> 16);
		des[204+j] |= (src[208+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[208+j] >> 16);
		des[208+j] |= (src[212+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[212+j] >> 16);
		des[212+j] |= (src[216+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[216+j] >> 16);
		des[216+j] |= (src[220+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[220+j] >> 16);
		des[220+j] |= (src[224+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[224+j] >> 16);
		des[224+j] |= (src[228+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[228+j] >> 16);
		des[228+j] |= (src[232+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[232+j] >> 16);
		des[232+j] |= (src[236+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[236+j] >> 16);
		des[236+j] |= (src[240+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[240+j] >> 16);
		des[240+j] |= (src[244+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[244+j] >> 16);
		des[244+j] |= (src[248+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[248+j] >> 16);
		des[248+j] |= (src[252+j] << 16);
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[252+j] >> 16);
		des[252+j] |= (src[256+j] << 16);
	}
}

template<typename T>
void KVSE_unpack_64len_32bw_24offset(T * des, const uint32_t *src) {
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
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[128+j] >> 24);
		des[128+j] |= (src[132+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[132+j] >> 24);
		des[132+j] |= (src[136+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[136+j] >> 24);
		des[136+j] |= (src[140+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[140+j] >> 24);
		des[140+j] |= (src[144+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[144+j] = (src[144+j] >> 24);
		des[144+j] |= (src[148+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[148+j] >> 24);
		des[148+j] |= (src[152+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[152+j] >> 24);
		des[152+j] |= (src[156+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[156+j] >> 24);
		des[156+j] |= (src[160+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[160+j] = (src[160+j] >> 24);
		des[160+j] |= (src[164+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[164+j] = (src[164+j] >> 24);
		des[164+j] |= (src[168+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[168+j] = (src[168+j] >> 24);
		des[168+j] |= (src[172+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[172+j] = (src[172+j] >> 24);
		des[172+j] |= (src[176+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[176+j] = (src[176+j] >> 24);
		des[176+j] |= (src[180+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[180+j] = (src[180+j] >> 24);
		des[180+j] |= (src[184+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[184+j] = (src[184+j] >> 24);
		des[184+j] |= (src[188+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[188+j] = (src[188+j] >> 24);
		des[188+j] |= (src[192+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[192+j] = (src[192+j] >> 24);
		des[192+j] |= (src[196+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[196+j] = (src[196+j] >> 24);
		des[196+j] |= (src[200+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[200+j] = (src[200+j] >> 24);
		des[200+j] |= (src[204+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[204+j] = (src[204+j] >> 24);
		des[204+j] |= (src[208+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[208+j] = (src[208+j] >> 24);
		des[208+j] |= (src[212+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[212+j] = (src[212+j] >> 24);
		des[212+j] |= (src[216+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[216+j] = (src[216+j] >> 24);
		des[216+j] |= (src[220+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[220+j] = (src[220+j] >> 24);
		des[220+j] |= (src[224+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[224+j] = (src[224+j] >> 24);
		des[224+j] |= (src[228+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[228+j] = (src[228+j] >> 24);
		des[228+j] |= (src[232+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[232+j] = (src[232+j] >> 24);
		des[232+j] |= (src[236+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[236+j] = (src[236+j] >> 24);
		des[236+j] |= (src[240+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[240+j] = (src[240+j] >> 24);
		des[240+j] |= (src[244+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[244+j] = (src[244+j] >> 24);
		des[244+j] |= (src[248+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[248+j] = (src[248+j] >> 24);
		des[248+j] |= (src[252+j] << 8);
	}
	for (int j=0; j<4; ++j) {
		des[252+j] = (src[252+j] >> 24);
		des[252+j] |= (src[256+j] << 8);
	}
}


static KVSEUnpackInfo KVSEUnpackInfo_0 = { KVSE_unpack_1len_0bw_0offset<uint32_t>, 0, 0, 0, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_1 = { KVSE_unpack_1len_0bw_8offset<uint32_t>, 8, 8, 0, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_2 = { KVSE_unpack_1len_0bw_16offset<uint32_t>, 16, 16, 0, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_3 = { KVSE_unpack_1len_0bw_24offset<uint32_t>, 24, 24, 0, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_4 = { KVSE_unpack_1len_1bw_0offset<uint32_t>, 0, 8, 0, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_5 = { KVSE_unpack_1len_1bw_8offset<uint32_t>, 8, 16, 0, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_6 = { KVSE_unpack_1len_1bw_16offset<uint32_t>, 16, 24, 0, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_7 = { KVSE_unpack_1len_1bw_24offset<uint32_t>, 24, 0, 4, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_8 = { KVSE_unpack_1len_2bw_0offset<uint32_t>, 0, 8, 0, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_9 = { KVSE_unpack_1len_2bw_8offset<uint32_t>, 8, 16, 0, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_10 = { KVSE_unpack_1len_2bw_16offset<uint32_t>, 16, 24, 0, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_11 = { KVSE_unpack_1len_2bw_24offset<uint32_t>, 24, 0, 4, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_12 = { KVSE_unpack_1len_3bw_0offset<uint32_t>, 0, 8, 0, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_13 = { KVSE_unpack_1len_3bw_8offset<uint32_t>, 8, 16, 0, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_14 = { KVSE_unpack_1len_3bw_16offset<uint32_t>, 16, 24, 0, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_15 = { KVSE_unpack_1len_3bw_24offset<uint32_t>, 24, 0, 4, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_16 = { KVSE_unpack_1len_4bw_0offset<uint32_t>, 0, 8, 0, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_17 = { KVSE_unpack_1len_4bw_8offset<uint32_t>, 8, 16, 0, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_18 = { KVSE_unpack_1len_4bw_16offset<uint32_t>, 16, 24, 0, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_19 = { KVSE_unpack_1len_4bw_24offset<uint32_t>, 24, 0, 4, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_20 = { KVSE_unpack_1len_5bw_0offset<uint32_t>, 0, 8, 0, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_21 = { KVSE_unpack_1len_5bw_8offset<uint32_t>, 8, 16, 0, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_22 = { KVSE_unpack_1len_5bw_16offset<uint32_t>, 16, 24, 0, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_23 = { KVSE_unpack_1len_5bw_24offset<uint32_t>, 24, 0, 4, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_24 = { KVSE_unpack_1len_6bw_0offset<uint32_t>, 0, 8, 0, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_25 = { KVSE_unpack_1len_6bw_8offset<uint32_t>, 8, 16, 0, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_26 = { KVSE_unpack_1len_6bw_16offset<uint32_t>, 16, 24, 0, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_27 = { KVSE_unpack_1len_6bw_24offset<uint32_t>, 24, 0, 4, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_28 = { KVSE_unpack_1len_7bw_0offset<uint32_t>, 0, 8, 0, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_29 = { KVSE_unpack_1len_7bw_8offset<uint32_t>, 8, 16, 0, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_30 = { KVSE_unpack_1len_7bw_16offset<uint32_t>, 16, 24, 0, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_31 = { KVSE_unpack_1len_7bw_24offset<uint32_t>, 24, 0, 4, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_32 = { KVSE_unpack_1len_8bw_0offset<uint32_t>, 0, 8, 0, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_33 = { KVSE_unpack_1len_8bw_8offset<uint32_t>, 8, 16, 0, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_34 = { KVSE_unpack_1len_8bw_16offset<uint32_t>, 16, 24, 0, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_35 = { KVSE_unpack_1len_8bw_24offset<uint32_t>, 24, 0, 4, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_36 = { KVSE_unpack_1len_9bw_0offset<uint32_t>, 0, 16, 0, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_37 = { KVSE_unpack_1len_9bw_8offset<uint32_t>, 8, 24, 0, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_38 = { KVSE_unpack_1len_9bw_16offset<uint32_t>, 16, 0, 4, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_39 = { KVSE_unpack_1len_9bw_24offset<uint32_t>, 24, 8, 4, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_40 = { KVSE_unpack_1len_10bw_0offset<uint32_t>, 0, 16, 0, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_41 = { KVSE_unpack_1len_10bw_8offset<uint32_t>, 8, 24, 0, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_42 = { KVSE_unpack_1len_10bw_16offset<uint32_t>, 16, 0, 4, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_43 = { KVSE_unpack_1len_10bw_24offset<uint32_t>, 24, 8, 4, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_44 = { KVSE_unpack_1len_11bw_0offset<uint32_t>, 0, 16, 0, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_45 = { KVSE_unpack_1len_11bw_8offset<uint32_t>, 8, 24, 0, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_46 = { KVSE_unpack_1len_11bw_16offset<uint32_t>, 16, 0, 4, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_47 = { KVSE_unpack_1len_11bw_24offset<uint32_t>, 24, 8, 4, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_48 = { KVSE_unpack_1len_12bw_0offset<uint32_t>, 0, 16, 0, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_49 = { KVSE_unpack_1len_12bw_8offset<uint32_t>, 8, 24, 0, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_50 = { KVSE_unpack_1len_12bw_16offset<uint32_t>, 16, 0, 4, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_51 = { KVSE_unpack_1len_12bw_24offset<uint32_t>, 24, 8, 4, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_52 = { KVSE_unpack_1len_16bw_0offset<uint32_t>, 0, 16, 0, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_53 = { KVSE_unpack_1len_16bw_8offset<uint32_t>, 8, 24, 0, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_54 = { KVSE_unpack_1len_16bw_16offset<uint32_t>, 16, 0, 4, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_55 = { KVSE_unpack_1len_16bw_24offset<uint32_t>, 24, 8, 4, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_56 = { KVSE_unpack_1len_20bw_0offset<uint32_t>, 0, 24, 0, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_57 = { KVSE_unpack_1len_20bw_8offset<uint32_t>, 8, 0, 4, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_58 = { KVSE_unpack_1len_20bw_16offset<uint32_t>, 16, 8, 4, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_59 = { KVSE_unpack_1len_20bw_24offset<uint32_t>, 24, 16, 4, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_60 = { KVSE_unpack_1len_32bw_0offset<uint32_t>, 0, 0, 4, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_61 = { KVSE_unpack_1len_32bw_8offset<uint32_t>, 8, 8, 4, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_62 = { KVSE_unpack_1len_32bw_16offset<uint32_t>, 16, 16, 4, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_63 = { KVSE_unpack_1len_32bw_24offset<uint32_t>, 24, 24, 4, 4, };
static KVSEUnpackInfo KVSEUnpackInfo_64 = { KVSE_unpack_2len_0bw_0offset<uint32_t>, 0, 0, 0, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_65 = { KVSE_unpack_2len_0bw_8offset<uint32_t>, 8, 8, 0, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_66 = { KVSE_unpack_2len_0bw_16offset<uint32_t>, 16, 16, 0, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_67 = { KVSE_unpack_2len_0bw_24offset<uint32_t>, 24, 24, 0, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_68 = { KVSE_unpack_2len_1bw_0offset<uint32_t>, 0, 8, 0, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_69 = { KVSE_unpack_2len_1bw_8offset<uint32_t>, 8, 16, 0, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_70 = { KVSE_unpack_2len_1bw_16offset<uint32_t>, 16, 24, 0, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_71 = { KVSE_unpack_2len_1bw_24offset<uint32_t>, 24, 0, 4, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_72 = { KVSE_unpack_2len_2bw_0offset<uint32_t>, 0, 8, 0, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_73 = { KVSE_unpack_2len_2bw_8offset<uint32_t>, 8, 16, 0, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_74 = { KVSE_unpack_2len_2bw_16offset<uint32_t>, 16, 24, 0, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_75 = { KVSE_unpack_2len_2bw_24offset<uint32_t>, 24, 0, 4, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_76 = { KVSE_unpack_2len_3bw_0offset<uint32_t>, 0, 8, 0, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_77 = { KVSE_unpack_2len_3bw_8offset<uint32_t>, 8, 16, 0, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_78 = { KVSE_unpack_2len_3bw_16offset<uint32_t>, 16, 24, 0, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_79 = { KVSE_unpack_2len_3bw_24offset<uint32_t>, 24, 0, 4, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_80 = { KVSE_unpack_2len_4bw_0offset<uint32_t>, 0, 8, 0, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_81 = { KVSE_unpack_2len_4bw_8offset<uint32_t>, 8, 16, 0, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_82 = { KVSE_unpack_2len_4bw_16offset<uint32_t>, 16, 24, 0, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_83 = { KVSE_unpack_2len_4bw_24offset<uint32_t>, 24, 0, 4, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_84 = { KVSE_unpack_2len_5bw_0offset<uint32_t>, 0, 16, 0, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_85 = { KVSE_unpack_2len_5bw_8offset<uint32_t>, 8, 24, 0, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_86 = { KVSE_unpack_2len_5bw_16offset<uint32_t>, 16, 0, 4, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_87 = { KVSE_unpack_2len_5bw_24offset<uint32_t>, 24, 8, 4, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_88 = { KVSE_unpack_2len_6bw_0offset<uint32_t>, 0, 16, 0, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_89 = { KVSE_unpack_2len_6bw_8offset<uint32_t>, 8, 24, 0, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_90 = { KVSE_unpack_2len_6bw_16offset<uint32_t>, 16, 0, 4, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_91 = { KVSE_unpack_2len_6bw_24offset<uint32_t>, 24, 8, 4, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_92 = { KVSE_unpack_2len_7bw_0offset<uint32_t>, 0, 16, 0, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_93 = { KVSE_unpack_2len_7bw_8offset<uint32_t>, 8, 24, 0, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_94 = { KVSE_unpack_2len_7bw_16offset<uint32_t>, 16, 0, 4, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_95 = { KVSE_unpack_2len_7bw_24offset<uint32_t>, 24, 8, 4, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_96 = { KVSE_unpack_2len_8bw_0offset<uint32_t>, 0, 16, 0, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_97 = { KVSE_unpack_2len_8bw_8offset<uint32_t>, 8, 24, 0, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_98 = { KVSE_unpack_2len_8bw_16offset<uint32_t>, 16, 0, 4, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_99 = { KVSE_unpack_2len_8bw_24offset<uint32_t>, 24, 8, 4, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_100 = { KVSE_unpack_2len_9bw_0offset<uint32_t>, 0, 24, 0, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_101 = { KVSE_unpack_2len_9bw_8offset<uint32_t>, 8, 0, 4, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_102 = { KVSE_unpack_2len_9bw_16offset<uint32_t>, 16, 8, 4, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_103 = { KVSE_unpack_2len_9bw_24offset<uint32_t>, 24, 16, 4, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_104 = { KVSE_unpack_2len_10bw_0offset<uint32_t>, 0, 24, 0, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_105 = { KVSE_unpack_2len_10bw_8offset<uint32_t>, 8, 0, 4, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_106 = { KVSE_unpack_2len_10bw_16offset<uint32_t>, 16, 8, 4, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_107 = { KVSE_unpack_2len_10bw_24offset<uint32_t>, 24, 16, 4, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_108 = { KVSE_unpack_2len_11bw_0offset<uint32_t>, 0, 24, 0, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_109 = { KVSE_unpack_2len_11bw_8offset<uint32_t>, 8, 0, 4, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_110 = { KVSE_unpack_2len_11bw_16offset<uint32_t>, 16, 8, 4, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_111 = { KVSE_unpack_2len_11bw_24offset<uint32_t>, 24, 16, 4, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_112 = { KVSE_unpack_2len_12bw_0offset<uint32_t>, 0, 24, 0, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_113 = { KVSE_unpack_2len_12bw_8offset<uint32_t>, 8, 0, 4, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_114 = { KVSE_unpack_2len_12bw_16offset<uint32_t>, 16, 8, 4, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_115 = { KVSE_unpack_2len_12bw_24offset<uint32_t>, 24, 16, 4, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_116 = { KVSE_unpack_2len_16bw_0offset<uint32_t>, 0, 0, 4, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_117 = { KVSE_unpack_2len_16bw_8offset<uint32_t>, 8, 8, 4, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_118 = { KVSE_unpack_2len_16bw_16offset<uint32_t>, 16, 16, 4, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_119 = { KVSE_unpack_2len_16bw_24offset<uint32_t>, 24, 24, 4, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_120 = { KVSE_unpack_2len_20bw_0offset<uint32_t>, 0, 8, 4, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_121 = { KVSE_unpack_2len_20bw_8offset<uint32_t>, 8, 16, 4, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_122 = { KVSE_unpack_2len_20bw_16offset<uint32_t>, 16, 24, 4, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_123 = { KVSE_unpack_2len_20bw_24offset<uint32_t>, 24, 0, 8, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_124 = { KVSE_unpack_2len_32bw_0offset<uint32_t>, 0, 0, 8, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_125 = { KVSE_unpack_2len_32bw_8offset<uint32_t>, 8, 8, 8, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_126 = { KVSE_unpack_2len_32bw_16offset<uint32_t>, 16, 16, 8, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_127 = { KVSE_unpack_2len_32bw_24offset<uint32_t>, 24, 24, 8, 8, };
static KVSEUnpackInfo KVSEUnpackInfo_128 = { KVSE_unpack_4len_0bw_0offset<uint32_t>, 0, 0, 0, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_129 = { KVSE_unpack_4len_0bw_8offset<uint32_t>, 8, 8, 0, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_130 = { KVSE_unpack_4len_0bw_16offset<uint32_t>, 16, 16, 0, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_131 = { KVSE_unpack_4len_0bw_24offset<uint32_t>, 24, 24, 0, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_132 = { KVSE_unpack_4len_1bw_0offset<uint32_t>, 0, 8, 0, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_133 = { KVSE_unpack_4len_1bw_8offset<uint32_t>, 8, 16, 0, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_134 = { KVSE_unpack_4len_1bw_16offset<uint32_t>, 16, 24, 0, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_135 = { KVSE_unpack_4len_1bw_24offset<uint32_t>, 24, 0, 4, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_136 = { KVSE_unpack_4len_2bw_0offset<uint32_t>, 0, 8, 0, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_137 = { KVSE_unpack_4len_2bw_8offset<uint32_t>, 8, 16, 0, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_138 = { KVSE_unpack_4len_2bw_16offset<uint32_t>, 16, 24, 0, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_139 = { KVSE_unpack_4len_2bw_24offset<uint32_t>, 24, 0, 4, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_140 = { KVSE_unpack_4len_3bw_0offset<uint32_t>, 0, 16, 0, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_141 = { KVSE_unpack_4len_3bw_8offset<uint32_t>, 8, 24, 0, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_142 = { KVSE_unpack_4len_3bw_16offset<uint32_t>, 16, 0, 4, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_143 = { KVSE_unpack_4len_3bw_24offset<uint32_t>, 24, 8, 4, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_144 = { KVSE_unpack_4len_4bw_0offset<uint32_t>, 0, 16, 0, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_145 = { KVSE_unpack_4len_4bw_8offset<uint32_t>, 8, 24, 0, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_146 = { KVSE_unpack_4len_4bw_16offset<uint32_t>, 16, 0, 4, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_147 = { KVSE_unpack_4len_4bw_24offset<uint32_t>, 24, 8, 4, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_148 = { KVSE_unpack_4len_5bw_0offset<uint32_t>, 0, 24, 0, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_149 = { KVSE_unpack_4len_5bw_8offset<uint32_t>, 8, 0, 4, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_150 = { KVSE_unpack_4len_5bw_16offset<uint32_t>, 16, 8, 4, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_151 = { KVSE_unpack_4len_5bw_24offset<uint32_t>, 24, 16, 4, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_152 = { KVSE_unpack_4len_6bw_0offset<uint32_t>, 0, 24, 0, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_153 = { KVSE_unpack_4len_6bw_8offset<uint32_t>, 8, 0, 4, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_154 = { KVSE_unpack_4len_6bw_16offset<uint32_t>, 16, 8, 4, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_155 = { KVSE_unpack_4len_6bw_24offset<uint32_t>, 24, 16, 4, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_156 = { KVSE_unpack_4len_7bw_0offset<uint32_t>, 0, 0, 4, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_157 = { KVSE_unpack_4len_7bw_8offset<uint32_t>, 8, 8, 4, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_158 = { KVSE_unpack_4len_7bw_16offset<uint32_t>, 16, 16, 4, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_159 = { KVSE_unpack_4len_7bw_24offset<uint32_t>, 24, 24, 4, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_160 = { KVSE_unpack_4len_8bw_0offset<uint32_t>, 0, 0, 4, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_161 = { KVSE_unpack_4len_8bw_8offset<uint32_t>, 8, 8, 4, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_162 = { KVSE_unpack_4len_8bw_16offset<uint32_t>, 16, 16, 4, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_163 = { KVSE_unpack_4len_8bw_24offset<uint32_t>, 24, 24, 4, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_164 = { KVSE_unpack_4len_9bw_0offset<uint32_t>, 0, 8, 4, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_165 = { KVSE_unpack_4len_9bw_8offset<uint32_t>, 8, 16, 4, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_166 = { KVSE_unpack_4len_9bw_16offset<uint32_t>, 16, 24, 4, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_167 = { KVSE_unpack_4len_9bw_24offset<uint32_t>, 24, 0, 8, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_168 = { KVSE_unpack_4len_10bw_0offset<uint32_t>, 0, 8, 4, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_169 = { KVSE_unpack_4len_10bw_8offset<uint32_t>, 8, 16, 4, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_170 = { KVSE_unpack_4len_10bw_16offset<uint32_t>, 16, 24, 4, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_171 = { KVSE_unpack_4len_10bw_24offset<uint32_t>, 24, 0, 8, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_172 = { KVSE_unpack_4len_11bw_0offset<uint32_t>, 0, 16, 4, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_173 = { KVSE_unpack_4len_11bw_8offset<uint32_t>, 8, 24, 4, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_174 = { KVSE_unpack_4len_11bw_16offset<uint32_t>, 16, 0, 8, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_175 = { KVSE_unpack_4len_11bw_24offset<uint32_t>, 24, 8, 8, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_176 = { KVSE_unpack_4len_12bw_0offset<uint32_t>, 0, 16, 4, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_177 = { KVSE_unpack_4len_12bw_8offset<uint32_t>, 8, 24, 4, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_178 = { KVSE_unpack_4len_12bw_16offset<uint32_t>, 16, 0, 8, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_179 = { KVSE_unpack_4len_12bw_24offset<uint32_t>, 24, 8, 8, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_180 = { KVSE_unpack_4len_16bw_0offset<uint32_t>, 0, 0, 8, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_181 = { KVSE_unpack_4len_16bw_8offset<uint32_t>, 8, 8, 8, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_182 = { KVSE_unpack_4len_16bw_16offset<uint32_t>, 16, 16, 8, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_183 = { KVSE_unpack_4len_16bw_24offset<uint32_t>, 24, 24, 8, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_184 = { KVSE_unpack_4len_20bw_0offset<uint32_t>, 0, 16, 8, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_185 = { KVSE_unpack_4len_20bw_8offset<uint32_t>, 8, 24, 8, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_186 = { KVSE_unpack_4len_20bw_16offset<uint32_t>, 16, 0, 12, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_187 = { KVSE_unpack_4len_20bw_24offset<uint32_t>, 24, 8, 12, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_188 = { KVSE_unpack_4len_32bw_0offset<uint32_t>, 0, 0, 16, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_189 = { KVSE_unpack_4len_32bw_8offset<uint32_t>, 8, 8, 16, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_190 = { KVSE_unpack_4len_32bw_16offset<uint32_t>, 16, 16, 16, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_191 = { KVSE_unpack_4len_32bw_24offset<uint32_t>, 24, 24, 16, 16, };
static KVSEUnpackInfo KVSEUnpackInfo_192 = { KVSE_unpack_8len_0bw_0offset<uint32_t>, 0, 0, 0, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_193 = { KVSE_unpack_8len_0bw_8offset<uint32_t>, 8, 8, 0, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_194 = { KVSE_unpack_8len_0bw_16offset<uint32_t>, 16, 16, 0, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_195 = { KVSE_unpack_8len_0bw_24offset<uint32_t>, 24, 24, 0, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_196 = { KVSE_unpack_8len_1bw_0offset<uint32_t>, 0, 8, 0, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_197 = { KVSE_unpack_8len_1bw_8offset<uint32_t>, 8, 16, 0, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_198 = { KVSE_unpack_8len_1bw_16offset<uint32_t>, 16, 24, 0, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_199 = { KVSE_unpack_8len_1bw_24offset<uint32_t>, 24, 0, 4, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_200 = { KVSE_unpack_8len_2bw_0offset<uint32_t>, 0, 16, 0, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_201 = { KVSE_unpack_8len_2bw_8offset<uint32_t>, 8, 24, 0, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_202 = { KVSE_unpack_8len_2bw_16offset<uint32_t>, 16, 0, 4, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_203 = { KVSE_unpack_8len_2bw_24offset<uint32_t>, 24, 8, 4, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_204 = { KVSE_unpack_8len_3bw_0offset<uint32_t>, 0, 24, 0, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_205 = { KVSE_unpack_8len_3bw_8offset<uint32_t>, 8, 0, 4, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_206 = { KVSE_unpack_8len_3bw_16offset<uint32_t>, 16, 8, 4, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_207 = { KVSE_unpack_8len_3bw_24offset<uint32_t>, 24, 16, 4, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_208 = { KVSE_unpack_8len_4bw_0offset<uint32_t>, 0, 0, 4, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_209 = { KVSE_unpack_8len_4bw_8offset<uint32_t>, 8, 8, 4, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_210 = { KVSE_unpack_8len_4bw_16offset<uint32_t>, 16, 16, 4, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_211 = { KVSE_unpack_8len_4bw_24offset<uint32_t>, 24, 24, 4, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_212 = { KVSE_unpack_8len_5bw_0offset<uint32_t>, 0, 8, 4, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_213 = { KVSE_unpack_8len_5bw_8offset<uint32_t>, 8, 16, 4, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_214 = { KVSE_unpack_8len_5bw_16offset<uint32_t>, 16, 24, 4, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_215 = { KVSE_unpack_8len_5bw_24offset<uint32_t>, 24, 0, 8, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_216 = { KVSE_unpack_8len_6bw_0offset<uint32_t>, 0, 16, 4, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_217 = { KVSE_unpack_8len_6bw_8offset<uint32_t>, 8, 24, 4, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_218 = { KVSE_unpack_8len_6bw_16offset<uint32_t>, 16, 0, 8, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_219 = { KVSE_unpack_8len_6bw_24offset<uint32_t>, 24, 8, 8, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_220 = { KVSE_unpack_8len_7bw_0offset<uint32_t>, 0, 24, 4, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_221 = { KVSE_unpack_8len_7bw_8offset<uint32_t>, 8, 0, 8, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_222 = { KVSE_unpack_8len_7bw_16offset<uint32_t>, 16, 8, 8, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_223 = { KVSE_unpack_8len_7bw_24offset<uint32_t>, 24, 16, 8, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_224 = { KVSE_unpack_8len_8bw_0offset<uint32_t>, 0, 0, 8, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_225 = { KVSE_unpack_8len_8bw_8offset<uint32_t>, 8, 8, 8, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_226 = { KVSE_unpack_8len_8bw_16offset<uint32_t>, 16, 16, 8, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_227 = { KVSE_unpack_8len_8bw_24offset<uint32_t>, 24, 24, 8, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_228 = { KVSE_unpack_8len_9bw_0offset<uint32_t>, 0, 8, 8, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_229 = { KVSE_unpack_8len_9bw_8offset<uint32_t>, 8, 16, 8, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_230 = { KVSE_unpack_8len_9bw_16offset<uint32_t>, 16, 24, 8, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_231 = { KVSE_unpack_8len_9bw_24offset<uint32_t>, 24, 0, 12, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_232 = { KVSE_unpack_8len_10bw_0offset<uint32_t>, 0, 16, 8, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_233 = { KVSE_unpack_8len_10bw_8offset<uint32_t>, 8, 24, 8, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_234 = { KVSE_unpack_8len_10bw_16offset<uint32_t>, 16, 0, 12, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_235 = { KVSE_unpack_8len_10bw_24offset<uint32_t>, 24, 8, 12, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_236 = { KVSE_unpack_8len_11bw_0offset<uint32_t>, 0, 24, 8, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_237 = { KVSE_unpack_8len_11bw_8offset<uint32_t>, 8, 0, 12, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_238 = { KVSE_unpack_8len_11bw_16offset<uint32_t>, 16, 8, 12, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_239 = { KVSE_unpack_8len_11bw_24offset<uint32_t>, 24, 16, 12, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_240 = { KVSE_unpack_8len_12bw_0offset<uint32_t>, 0, 0, 12, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_241 = { KVSE_unpack_8len_12bw_8offset<uint32_t>, 8, 8, 12, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_242 = { KVSE_unpack_8len_12bw_16offset<uint32_t>, 16, 16, 12, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_243 = { KVSE_unpack_8len_12bw_24offset<uint32_t>, 24, 24, 12, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_244 = { KVSE_unpack_8len_16bw_0offset<uint32_t>, 0, 0, 16, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_245 = { KVSE_unpack_8len_16bw_8offset<uint32_t>, 8, 8, 16, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_246 = { KVSE_unpack_8len_16bw_16offset<uint32_t>, 16, 16, 16, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_247 = { KVSE_unpack_8len_16bw_24offset<uint32_t>, 24, 24, 16, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_248 = { KVSE_unpack_8len_20bw_0offset<uint32_t>, 0, 0, 20, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_249 = { KVSE_unpack_8len_20bw_8offset<uint32_t>, 8, 8, 20, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_250 = { KVSE_unpack_8len_20bw_16offset<uint32_t>, 16, 16, 20, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_251 = { KVSE_unpack_8len_20bw_24offset<uint32_t>, 24, 24, 20, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_252 = { KVSE_unpack_8len_32bw_0offset<uint32_t>, 0, 0, 32, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_253 = { KVSE_unpack_8len_32bw_8offset<uint32_t>, 8, 8, 32, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_254 = { KVSE_unpack_8len_32bw_16offset<uint32_t>, 16, 16, 32, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_255 = { KVSE_unpack_8len_32bw_24offset<uint32_t>, 24, 24, 32, 32, };
static KVSEUnpackInfo KVSEUnpackInfo_256 = { KVSE_unpack_12len_0bw_0offset<uint32_t>, 0, 0, 0, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_257 = { KVSE_unpack_12len_0bw_8offset<uint32_t>, 8, 8, 0, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_258 = { KVSE_unpack_12len_0bw_16offset<uint32_t>, 16, 16, 0, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_259 = { KVSE_unpack_12len_0bw_24offset<uint32_t>, 24, 24, 0, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_260 = { KVSE_unpack_12len_1bw_0offset<uint32_t>, 0, 16, 0, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_261 = { KVSE_unpack_12len_1bw_8offset<uint32_t>, 8, 24, 0, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_262 = { KVSE_unpack_12len_1bw_16offset<uint32_t>, 16, 0, 4, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_263 = { KVSE_unpack_12len_1bw_24offset<uint32_t>, 24, 8, 4, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_264 = { KVSE_unpack_12len_2bw_0offset<uint32_t>, 0, 24, 0, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_265 = { KVSE_unpack_12len_2bw_8offset<uint32_t>, 8, 0, 4, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_266 = { KVSE_unpack_12len_2bw_16offset<uint32_t>, 16, 8, 4, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_267 = { KVSE_unpack_12len_2bw_24offset<uint32_t>, 24, 16, 4, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_268 = { KVSE_unpack_12len_3bw_0offset<uint32_t>, 0, 8, 4, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_269 = { KVSE_unpack_12len_3bw_8offset<uint32_t>, 8, 16, 4, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_270 = { KVSE_unpack_12len_3bw_16offset<uint32_t>, 16, 24, 4, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_271 = { KVSE_unpack_12len_3bw_24offset<uint32_t>, 24, 0, 8, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_272 = { KVSE_unpack_12len_4bw_0offset<uint32_t>, 0, 16, 4, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_273 = { KVSE_unpack_12len_4bw_8offset<uint32_t>, 8, 24, 4, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_274 = { KVSE_unpack_12len_4bw_16offset<uint32_t>, 16, 0, 8, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_275 = { KVSE_unpack_12len_4bw_24offset<uint32_t>, 24, 8, 8, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_276 = { KVSE_unpack_12len_5bw_0offset<uint32_t>, 0, 0, 8, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_277 = { KVSE_unpack_12len_5bw_8offset<uint32_t>, 8, 8, 8, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_278 = { KVSE_unpack_12len_5bw_16offset<uint32_t>, 16, 16, 8, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_279 = { KVSE_unpack_12len_5bw_24offset<uint32_t>, 24, 24, 8, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_280 = { KVSE_unpack_12len_6bw_0offset<uint32_t>, 0, 8, 8, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_281 = { KVSE_unpack_12len_6bw_8offset<uint32_t>, 8, 16, 8, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_282 = { KVSE_unpack_12len_6bw_16offset<uint32_t>, 16, 24, 8, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_283 = { KVSE_unpack_12len_6bw_24offset<uint32_t>, 24, 0, 12, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_284 = { KVSE_unpack_12len_7bw_0offset<uint32_t>, 0, 24, 8, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_285 = { KVSE_unpack_12len_7bw_8offset<uint32_t>, 8, 0, 12, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_286 = { KVSE_unpack_12len_7bw_16offset<uint32_t>, 16, 8, 12, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_287 = { KVSE_unpack_12len_7bw_24offset<uint32_t>, 24, 16, 12, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_288 = { KVSE_unpack_12len_8bw_0offset<uint32_t>, 0, 0, 12, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_289 = { KVSE_unpack_12len_8bw_8offset<uint32_t>, 8, 8, 12, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_290 = { KVSE_unpack_12len_8bw_16offset<uint32_t>, 16, 16, 12, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_291 = { KVSE_unpack_12len_8bw_24offset<uint32_t>, 24, 24, 12, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_292 = { KVSE_unpack_12len_9bw_0offset<uint32_t>, 0, 16, 12, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_293 = { KVSE_unpack_12len_9bw_8offset<uint32_t>, 8, 24, 12, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_294 = { KVSE_unpack_12len_9bw_16offset<uint32_t>, 16, 0, 16, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_295 = { KVSE_unpack_12len_9bw_24offset<uint32_t>, 24, 8, 16, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_296 = { KVSE_unpack_12len_10bw_0offset<uint32_t>, 0, 24, 12, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_297 = { KVSE_unpack_12len_10bw_8offset<uint32_t>, 8, 0, 16, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_298 = { KVSE_unpack_12len_10bw_16offset<uint32_t>, 16, 8, 16, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_299 = { KVSE_unpack_12len_10bw_24offset<uint32_t>, 24, 16, 16, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_300 = { KVSE_unpack_12len_11bw_0offset<uint32_t>, 0, 8, 16, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_301 = { KVSE_unpack_12len_11bw_8offset<uint32_t>, 8, 16, 16, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_302 = { KVSE_unpack_12len_11bw_16offset<uint32_t>, 16, 24, 16, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_303 = { KVSE_unpack_12len_11bw_24offset<uint32_t>, 24, 0, 20, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_304 = { KVSE_unpack_12len_12bw_0offset<uint32_t>, 0, 16, 16, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_305 = { KVSE_unpack_12len_12bw_8offset<uint32_t>, 8, 24, 16, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_306 = { KVSE_unpack_12len_12bw_16offset<uint32_t>, 16, 0, 20, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_307 = { KVSE_unpack_12len_12bw_24offset<uint32_t>, 24, 8, 20, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_308 = { KVSE_unpack_12len_16bw_0offset<uint32_t>, 0, 0, 24, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_309 = { KVSE_unpack_12len_16bw_8offset<uint32_t>, 8, 8, 24, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_310 = { KVSE_unpack_12len_16bw_16offset<uint32_t>, 16, 16, 24, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_311 = { KVSE_unpack_12len_16bw_24offset<uint32_t>, 24, 24, 24, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_312 = { KVSE_unpack_12len_20bw_0offset<uint32_t>, 0, 16, 28, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_313 = { KVSE_unpack_12len_20bw_8offset<uint32_t>, 8, 24, 28, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_314 = { KVSE_unpack_12len_20bw_16offset<uint32_t>, 16, 0, 32, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_315 = { KVSE_unpack_12len_20bw_24offset<uint32_t>, 24, 8, 32, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_316 = { KVSE_unpack_12len_32bw_0offset<uint32_t>, 0, 0, 48, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_317 = { KVSE_unpack_12len_32bw_8offset<uint32_t>, 8, 8, 48, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_318 = { KVSE_unpack_12len_32bw_16offset<uint32_t>, 16, 16, 48, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_319 = { KVSE_unpack_12len_32bw_24offset<uint32_t>, 24, 24, 48, 48, };
static KVSEUnpackInfo KVSEUnpackInfo_320 = { KVSE_unpack_16len_0bw_0offset<uint32_t>, 0, 0, 0, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_321 = { KVSE_unpack_16len_0bw_8offset<uint32_t>, 8, 8, 0, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_322 = { KVSE_unpack_16len_0bw_16offset<uint32_t>, 16, 16, 0, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_323 = { KVSE_unpack_16len_0bw_24offset<uint32_t>, 24, 24, 0, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_324 = { KVSE_unpack_16len_1bw_0offset<uint32_t>, 0, 16, 0, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_325 = { KVSE_unpack_16len_1bw_8offset<uint32_t>, 8, 24, 0, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_326 = { KVSE_unpack_16len_1bw_16offset<uint32_t>, 16, 0, 4, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_327 = { KVSE_unpack_16len_1bw_24offset<uint32_t>, 24, 8, 4, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_328 = { KVSE_unpack_16len_2bw_0offset<uint32_t>, 0, 0, 4, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_329 = { KVSE_unpack_16len_2bw_8offset<uint32_t>, 8, 8, 4, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_330 = { KVSE_unpack_16len_2bw_16offset<uint32_t>, 16, 16, 4, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_331 = { KVSE_unpack_16len_2bw_24offset<uint32_t>, 24, 24, 4, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_332 = { KVSE_unpack_16len_3bw_0offset<uint32_t>, 0, 16, 4, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_333 = { KVSE_unpack_16len_3bw_8offset<uint32_t>, 8, 24, 4, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_334 = { KVSE_unpack_16len_3bw_16offset<uint32_t>, 16, 0, 8, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_335 = { KVSE_unpack_16len_3bw_24offset<uint32_t>, 24, 8, 8, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_336 = { KVSE_unpack_16len_4bw_0offset<uint32_t>, 0, 0, 8, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_337 = { KVSE_unpack_16len_4bw_8offset<uint32_t>, 8, 8, 8, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_338 = { KVSE_unpack_16len_4bw_16offset<uint32_t>, 16, 16, 8, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_339 = { KVSE_unpack_16len_4bw_24offset<uint32_t>, 24, 24, 8, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_340 = { KVSE_unpack_16len_5bw_0offset<uint32_t>, 0, 16, 8, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_341 = { KVSE_unpack_16len_5bw_8offset<uint32_t>, 8, 24, 8, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_342 = { KVSE_unpack_16len_5bw_16offset<uint32_t>, 16, 0, 12, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_343 = { KVSE_unpack_16len_5bw_24offset<uint32_t>, 24, 8, 12, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_344 = { KVSE_unpack_16len_6bw_0offset<uint32_t>, 0, 0, 12, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_345 = { KVSE_unpack_16len_6bw_8offset<uint32_t>, 8, 8, 12, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_346 = { KVSE_unpack_16len_6bw_16offset<uint32_t>, 16, 16, 12, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_347 = { KVSE_unpack_16len_6bw_24offset<uint32_t>, 24, 24, 12, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_348 = { KVSE_unpack_16len_7bw_0offset<uint32_t>, 0, 16, 12, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_349 = { KVSE_unpack_16len_7bw_8offset<uint32_t>, 8, 24, 12, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_350 = { KVSE_unpack_16len_7bw_16offset<uint32_t>, 16, 0, 16, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_351 = { KVSE_unpack_16len_7bw_24offset<uint32_t>, 24, 8, 16, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_352 = { KVSE_unpack_16len_8bw_0offset<uint32_t>, 0, 0, 16, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_353 = { KVSE_unpack_16len_8bw_8offset<uint32_t>, 8, 8, 16, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_354 = { KVSE_unpack_16len_8bw_16offset<uint32_t>, 16, 16, 16, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_355 = { KVSE_unpack_16len_8bw_24offset<uint32_t>, 24, 24, 16, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_356 = { KVSE_unpack_16len_9bw_0offset<uint32_t>, 0, 16, 16, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_357 = { KVSE_unpack_16len_9bw_8offset<uint32_t>, 8, 24, 16, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_358 = { KVSE_unpack_16len_9bw_16offset<uint32_t>, 16, 0, 20, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_359 = { KVSE_unpack_16len_9bw_24offset<uint32_t>, 24, 8, 20, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_360 = { KVSE_unpack_16len_10bw_0offset<uint32_t>, 0, 0, 20, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_361 = { KVSE_unpack_16len_10bw_8offset<uint32_t>, 8, 8, 20, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_362 = { KVSE_unpack_16len_10bw_16offset<uint32_t>, 16, 16, 20, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_363 = { KVSE_unpack_16len_10bw_24offset<uint32_t>, 24, 24, 20, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_364 = { KVSE_unpack_16len_11bw_0offset<uint32_t>, 0, 16, 20, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_365 = { KVSE_unpack_16len_11bw_8offset<uint32_t>, 8, 24, 20, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_366 = { KVSE_unpack_16len_11bw_16offset<uint32_t>, 16, 0, 24, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_367 = { KVSE_unpack_16len_11bw_24offset<uint32_t>, 24, 8, 24, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_368 = { KVSE_unpack_16len_12bw_0offset<uint32_t>, 0, 0, 24, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_369 = { KVSE_unpack_16len_12bw_8offset<uint32_t>, 8, 8, 24, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_370 = { KVSE_unpack_16len_12bw_16offset<uint32_t>, 16, 16, 24, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_371 = { KVSE_unpack_16len_12bw_24offset<uint32_t>, 24, 24, 24, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_372 = { KVSE_unpack_16len_16bw_0offset<uint32_t>, 0, 0, 32, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_373 = { KVSE_unpack_16len_16bw_8offset<uint32_t>, 8, 8, 32, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_374 = { KVSE_unpack_16len_16bw_16offset<uint32_t>, 16, 16, 32, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_375 = { KVSE_unpack_16len_16bw_24offset<uint32_t>, 24, 24, 32, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_376 = { KVSE_unpack_16len_20bw_0offset<uint32_t>, 0, 0, 40, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_377 = { KVSE_unpack_16len_20bw_8offset<uint32_t>, 8, 8, 40, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_378 = { KVSE_unpack_16len_20bw_16offset<uint32_t>, 16, 16, 40, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_379 = { KVSE_unpack_16len_20bw_24offset<uint32_t>, 24, 24, 40, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_380 = { KVSE_unpack_16len_32bw_0offset<uint32_t>, 0, 0, 64, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_381 = { KVSE_unpack_16len_32bw_8offset<uint32_t>, 8, 8, 64, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_382 = { KVSE_unpack_16len_32bw_16offset<uint32_t>, 16, 16, 64, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_383 = { KVSE_unpack_16len_32bw_24offset<uint32_t>, 24, 24, 64, 64, };
static KVSEUnpackInfo KVSEUnpackInfo_384 = { KVSE_unpack_32len_0bw_0offset<uint32_t>, 0, 0, 0, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_385 = { KVSE_unpack_32len_0bw_8offset<uint32_t>, 8, 8, 0, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_386 = { KVSE_unpack_32len_0bw_16offset<uint32_t>, 16, 16, 0, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_387 = { KVSE_unpack_32len_0bw_24offset<uint32_t>, 24, 24, 0, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_388 = { KVSE_unpack_32len_1bw_0offset<uint32_t>, 0, 0, 4, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_389 = { KVSE_unpack_32len_1bw_8offset<uint32_t>, 8, 8, 4, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_390 = { KVSE_unpack_32len_1bw_16offset<uint32_t>, 16, 16, 4, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_391 = { KVSE_unpack_32len_1bw_24offset<uint32_t>, 24, 24, 4, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_392 = { KVSE_unpack_32len_2bw_0offset<uint32_t>, 0, 0, 8, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_393 = { KVSE_unpack_32len_2bw_8offset<uint32_t>, 8, 8, 8, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_394 = { KVSE_unpack_32len_2bw_16offset<uint32_t>, 16, 16, 8, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_395 = { KVSE_unpack_32len_2bw_24offset<uint32_t>, 24, 24, 8, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_396 = { KVSE_unpack_32len_3bw_0offset<uint32_t>, 0, 0, 12, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_397 = { KVSE_unpack_32len_3bw_8offset<uint32_t>, 8, 8, 12, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_398 = { KVSE_unpack_32len_3bw_16offset<uint32_t>, 16, 16, 12, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_399 = { KVSE_unpack_32len_3bw_24offset<uint32_t>, 24, 24, 12, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_400 = { KVSE_unpack_32len_4bw_0offset<uint32_t>, 0, 0, 16, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_401 = { KVSE_unpack_32len_4bw_8offset<uint32_t>, 8, 8, 16, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_402 = { KVSE_unpack_32len_4bw_16offset<uint32_t>, 16, 16, 16, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_403 = { KVSE_unpack_32len_4bw_24offset<uint32_t>, 24, 24, 16, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_404 = { KVSE_unpack_32len_5bw_0offset<uint32_t>, 0, 0, 20, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_405 = { KVSE_unpack_32len_5bw_8offset<uint32_t>, 8, 8, 20, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_406 = { KVSE_unpack_32len_5bw_16offset<uint32_t>, 16, 16, 20, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_407 = { KVSE_unpack_32len_5bw_24offset<uint32_t>, 24, 24, 20, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_408 = { KVSE_unpack_32len_6bw_0offset<uint32_t>, 0, 0, 24, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_409 = { KVSE_unpack_32len_6bw_8offset<uint32_t>, 8, 8, 24, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_410 = { KVSE_unpack_32len_6bw_16offset<uint32_t>, 16, 16, 24, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_411 = { KVSE_unpack_32len_6bw_24offset<uint32_t>, 24, 24, 24, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_412 = { KVSE_unpack_32len_7bw_0offset<uint32_t>, 0, 0, 28, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_413 = { KVSE_unpack_32len_7bw_8offset<uint32_t>, 8, 8, 28, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_414 = { KVSE_unpack_32len_7bw_16offset<uint32_t>, 16, 16, 28, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_415 = { KVSE_unpack_32len_7bw_24offset<uint32_t>, 24, 24, 28, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_416 = { KVSE_unpack_32len_8bw_0offset<uint32_t>, 0, 0, 32, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_417 = { KVSE_unpack_32len_8bw_8offset<uint32_t>, 8, 8, 32, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_418 = { KVSE_unpack_32len_8bw_16offset<uint32_t>, 16, 16, 32, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_419 = { KVSE_unpack_32len_8bw_24offset<uint32_t>, 24, 24, 32, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_420 = { KVSE_unpack_32len_9bw_0offset<uint32_t>, 0, 0, 36, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_421 = { KVSE_unpack_32len_9bw_8offset<uint32_t>, 8, 8, 36, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_422 = { KVSE_unpack_32len_9bw_16offset<uint32_t>, 16, 16, 36, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_423 = { KVSE_unpack_32len_9bw_24offset<uint32_t>, 24, 24, 36, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_424 = { KVSE_unpack_32len_10bw_0offset<uint32_t>, 0, 0, 40, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_425 = { KVSE_unpack_32len_10bw_8offset<uint32_t>, 8, 8, 40, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_426 = { KVSE_unpack_32len_10bw_16offset<uint32_t>, 16, 16, 40, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_427 = { KVSE_unpack_32len_10bw_24offset<uint32_t>, 24, 24, 40, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_428 = { KVSE_unpack_32len_11bw_0offset<uint32_t>, 0, 0, 44, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_429 = { KVSE_unpack_32len_11bw_8offset<uint32_t>, 8, 8, 44, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_430 = { KVSE_unpack_32len_11bw_16offset<uint32_t>, 16, 16, 44, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_431 = { KVSE_unpack_32len_11bw_24offset<uint32_t>, 24, 24, 44, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_432 = { KVSE_unpack_32len_12bw_0offset<uint32_t>, 0, 0, 48, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_433 = { KVSE_unpack_32len_12bw_8offset<uint32_t>, 8, 8, 48, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_434 = { KVSE_unpack_32len_12bw_16offset<uint32_t>, 16, 16, 48, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_435 = { KVSE_unpack_32len_12bw_24offset<uint32_t>, 24, 24, 48, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_436 = { KVSE_unpack_32len_16bw_0offset<uint32_t>, 0, 0, 64, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_437 = { KVSE_unpack_32len_16bw_8offset<uint32_t>, 8, 8, 64, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_438 = { KVSE_unpack_32len_16bw_16offset<uint32_t>, 16, 16, 64, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_439 = { KVSE_unpack_32len_16bw_24offset<uint32_t>, 24, 24, 64, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_440 = { KVSE_unpack_32len_20bw_0offset<uint32_t>, 0, 0, 80, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_441 = { KVSE_unpack_32len_20bw_8offset<uint32_t>, 8, 8, 80, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_442 = { KVSE_unpack_32len_20bw_16offset<uint32_t>, 16, 16, 80, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_443 = { KVSE_unpack_32len_20bw_24offset<uint32_t>, 24, 24, 80, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_444 = { KVSE_unpack_32len_32bw_0offset<uint32_t>, 0, 0, 128, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_445 = { KVSE_unpack_32len_32bw_8offset<uint32_t>, 8, 8, 128, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_446 = { KVSE_unpack_32len_32bw_16offset<uint32_t>, 16, 16, 128, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_447 = { KVSE_unpack_32len_32bw_24offset<uint32_t>, 24, 24, 128, 128, };
static KVSEUnpackInfo KVSEUnpackInfo_448 = { KVSE_unpack_64len_0bw_0offset<uint32_t>, 0, 0, 0, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_449 = { KVSE_unpack_64len_0bw_8offset<uint32_t>, 8, 8, 0, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_450 = { KVSE_unpack_64len_0bw_16offset<uint32_t>, 16, 16, 0, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_451 = { KVSE_unpack_64len_0bw_24offset<uint32_t>, 24, 24, 0, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_452 = { KVSE_unpack_64len_1bw_0offset<uint32_t>, 0, 0, 8, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_453 = { KVSE_unpack_64len_1bw_8offset<uint32_t>, 8, 8, 8, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_454 = { KVSE_unpack_64len_1bw_16offset<uint32_t>, 16, 16, 8, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_455 = { KVSE_unpack_64len_1bw_24offset<uint32_t>, 24, 24, 8, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_456 = { KVSE_unpack_64len_2bw_0offset<uint32_t>, 0, 0, 16, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_457 = { KVSE_unpack_64len_2bw_8offset<uint32_t>, 8, 8, 16, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_458 = { KVSE_unpack_64len_2bw_16offset<uint32_t>, 16, 16, 16, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_459 = { KVSE_unpack_64len_2bw_24offset<uint32_t>, 24, 24, 16, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_460 = { KVSE_unpack_64len_3bw_0offset<uint32_t>, 0, 0, 24, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_461 = { KVSE_unpack_64len_3bw_8offset<uint32_t>, 8, 8, 24, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_462 = { KVSE_unpack_64len_3bw_16offset<uint32_t>, 16, 16, 24, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_463 = { KVSE_unpack_64len_3bw_24offset<uint32_t>, 24, 24, 24, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_464 = { KVSE_unpack_64len_4bw_0offset<uint32_t>, 0, 0, 32, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_465 = { KVSE_unpack_64len_4bw_8offset<uint32_t>, 8, 8, 32, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_466 = { KVSE_unpack_64len_4bw_16offset<uint32_t>, 16, 16, 32, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_467 = { KVSE_unpack_64len_4bw_24offset<uint32_t>, 24, 24, 32, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_468 = { KVSE_unpack_64len_5bw_0offset<uint32_t>, 0, 0, 40, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_469 = { KVSE_unpack_64len_5bw_8offset<uint32_t>, 8, 8, 40, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_470 = { KVSE_unpack_64len_5bw_16offset<uint32_t>, 16, 16, 40, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_471 = { KVSE_unpack_64len_5bw_24offset<uint32_t>, 24, 24, 40, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_472 = { KVSE_unpack_64len_6bw_0offset<uint32_t>, 0, 0, 48, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_473 = { KVSE_unpack_64len_6bw_8offset<uint32_t>, 8, 8, 48, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_474 = { KVSE_unpack_64len_6bw_16offset<uint32_t>, 16, 16, 48, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_475 = { KVSE_unpack_64len_6bw_24offset<uint32_t>, 24, 24, 48, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_476 = { KVSE_unpack_64len_7bw_0offset<uint32_t>, 0, 0, 56, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_477 = { KVSE_unpack_64len_7bw_8offset<uint32_t>, 8, 8, 56, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_478 = { KVSE_unpack_64len_7bw_16offset<uint32_t>, 16, 16, 56, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_479 = { KVSE_unpack_64len_7bw_24offset<uint32_t>, 24, 24, 56, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_480 = { KVSE_unpack_64len_8bw_0offset<uint32_t>, 0, 0, 64, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_481 = { KVSE_unpack_64len_8bw_8offset<uint32_t>, 8, 8, 64, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_482 = { KVSE_unpack_64len_8bw_16offset<uint32_t>, 16, 16, 64, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_483 = { KVSE_unpack_64len_8bw_24offset<uint32_t>, 24, 24, 64, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_484 = { KVSE_unpack_64len_9bw_0offset<uint32_t>, 0, 0, 72, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_485 = { KVSE_unpack_64len_9bw_8offset<uint32_t>, 8, 8, 72, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_486 = { KVSE_unpack_64len_9bw_16offset<uint32_t>, 16, 16, 72, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_487 = { KVSE_unpack_64len_9bw_24offset<uint32_t>, 24, 24, 72, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_488 = { KVSE_unpack_64len_10bw_0offset<uint32_t>, 0, 0, 80, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_489 = { KVSE_unpack_64len_10bw_8offset<uint32_t>, 8, 8, 80, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_490 = { KVSE_unpack_64len_10bw_16offset<uint32_t>, 16, 16, 80, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_491 = { KVSE_unpack_64len_10bw_24offset<uint32_t>, 24, 24, 80, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_492 = { KVSE_unpack_64len_11bw_0offset<uint32_t>, 0, 0, 88, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_493 = { KVSE_unpack_64len_11bw_8offset<uint32_t>, 8, 8, 88, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_494 = { KVSE_unpack_64len_11bw_16offset<uint32_t>, 16, 16, 88, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_495 = { KVSE_unpack_64len_11bw_24offset<uint32_t>, 24, 24, 88, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_496 = { KVSE_unpack_64len_12bw_0offset<uint32_t>, 0, 0, 96, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_497 = { KVSE_unpack_64len_12bw_8offset<uint32_t>, 8, 8, 96, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_498 = { KVSE_unpack_64len_12bw_16offset<uint32_t>, 16, 16, 96, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_499 = { KVSE_unpack_64len_12bw_24offset<uint32_t>, 24, 24, 96, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_500 = { KVSE_unpack_64len_16bw_0offset<uint32_t>, 0, 0, 128, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_501 = { KVSE_unpack_64len_16bw_8offset<uint32_t>, 8, 8, 128, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_502 = { KVSE_unpack_64len_16bw_16offset<uint32_t>, 16, 16, 128, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_503 = { KVSE_unpack_64len_16bw_24offset<uint32_t>, 24, 24, 128, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_504 = { KVSE_unpack_64len_20bw_0offset<uint32_t>, 0, 0, 160, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_505 = { KVSE_unpack_64len_20bw_8offset<uint32_t>, 8, 8, 160, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_506 = { KVSE_unpack_64len_20bw_16offset<uint32_t>, 16, 16, 160, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_507 = { KVSE_unpack_64len_20bw_24offset<uint32_t>, 24, 24, 160, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_508 = { KVSE_unpack_64len_32bw_0offset<uint32_t>, 0, 0, 256, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_509 = { KVSE_unpack_64len_32bw_8offset<uint32_t>, 8, 8, 256, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_510 = { KVSE_unpack_64len_32bw_16offset<uint32_t>, 16, 16, 256, 256, };
static KVSEUnpackInfo KVSEUnpackInfo_511 = { KVSE_unpack_64len_32bw_24offset<uint32_t>, 24, 24, 256, 256, };

static KVSEUnpackInfo KVSEUnpackInfoArr[512] = {
	KVSEUnpackInfo_0, KVSEUnpackInfo_1, KVSEUnpackInfo_2, KVSEUnpackInfo_3,
	KVSEUnpackInfo_4, KVSEUnpackInfo_5, KVSEUnpackInfo_6, KVSEUnpackInfo_7,
	KVSEUnpackInfo_8, KVSEUnpackInfo_9, KVSEUnpackInfo_10, KVSEUnpackInfo_11,
	KVSEUnpackInfo_12, KVSEUnpackInfo_13, KVSEUnpackInfo_14, KVSEUnpackInfo_15,
	KVSEUnpackInfo_16, KVSEUnpackInfo_17, KVSEUnpackInfo_18, KVSEUnpackInfo_19,
	KVSEUnpackInfo_20, KVSEUnpackInfo_21, KVSEUnpackInfo_22, KVSEUnpackInfo_23,
	KVSEUnpackInfo_24, KVSEUnpackInfo_25, KVSEUnpackInfo_26, KVSEUnpackInfo_27,
	KVSEUnpackInfo_28, KVSEUnpackInfo_29, KVSEUnpackInfo_30, KVSEUnpackInfo_31,
	KVSEUnpackInfo_32, KVSEUnpackInfo_33, KVSEUnpackInfo_34, KVSEUnpackInfo_35,
	KVSEUnpackInfo_36, KVSEUnpackInfo_37, KVSEUnpackInfo_38, KVSEUnpackInfo_39,
	KVSEUnpackInfo_40, KVSEUnpackInfo_41, KVSEUnpackInfo_42, KVSEUnpackInfo_43,
	KVSEUnpackInfo_44, KVSEUnpackInfo_45, KVSEUnpackInfo_46, KVSEUnpackInfo_47,
	KVSEUnpackInfo_48, KVSEUnpackInfo_49, KVSEUnpackInfo_50, KVSEUnpackInfo_51,
	KVSEUnpackInfo_52, KVSEUnpackInfo_53, KVSEUnpackInfo_54, KVSEUnpackInfo_55,
	KVSEUnpackInfo_56, KVSEUnpackInfo_57, KVSEUnpackInfo_58, KVSEUnpackInfo_59,
	KVSEUnpackInfo_60, KVSEUnpackInfo_61, KVSEUnpackInfo_62, KVSEUnpackInfo_63,
	KVSEUnpackInfo_64, KVSEUnpackInfo_65, KVSEUnpackInfo_66, KVSEUnpackInfo_67,
	KVSEUnpackInfo_68, KVSEUnpackInfo_69, KVSEUnpackInfo_70, KVSEUnpackInfo_71,
	KVSEUnpackInfo_72, KVSEUnpackInfo_73, KVSEUnpackInfo_74, KVSEUnpackInfo_75,
	KVSEUnpackInfo_76, KVSEUnpackInfo_77, KVSEUnpackInfo_78, KVSEUnpackInfo_79,
	KVSEUnpackInfo_80, KVSEUnpackInfo_81, KVSEUnpackInfo_82, KVSEUnpackInfo_83,
	KVSEUnpackInfo_84, KVSEUnpackInfo_85, KVSEUnpackInfo_86, KVSEUnpackInfo_87,
	KVSEUnpackInfo_88, KVSEUnpackInfo_89, KVSEUnpackInfo_90, KVSEUnpackInfo_91,
	KVSEUnpackInfo_92, KVSEUnpackInfo_93, KVSEUnpackInfo_94, KVSEUnpackInfo_95,
	KVSEUnpackInfo_96, KVSEUnpackInfo_97, KVSEUnpackInfo_98, KVSEUnpackInfo_99,
	KVSEUnpackInfo_100, KVSEUnpackInfo_101, KVSEUnpackInfo_102, KVSEUnpackInfo_103,
	KVSEUnpackInfo_104, KVSEUnpackInfo_105, KVSEUnpackInfo_106, KVSEUnpackInfo_107,
	KVSEUnpackInfo_108, KVSEUnpackInfo_109, KVSEUnpackInfo_110, KVSEUnpackInfo_111,
	KVSEUnpackInfo_112, KVSEUnpackInfo_113, KVSEUnpackInfo_114, KVSEUnpackInfo_115,
	KVSEUnpackInfo_116, KVSEUnpackInfo_117, KVSEUnpackInfo_118, KVSEUnpackInfo_119,
	KVSEUnpackInfo_120, KVSEUnpackInfo_121, KVSEUnpackInfo_122, KVSEUnpackInfo_123,
	KVSEUnpackInfo_124, KVSEUnpackInfo_125, KVSEUnpackInfo_126, KVSEUnpackInfo_127,
	KVSEUnpackInfo_128, KVSEUnpackInfo_129, KVSEUnpackInfo_130, KVSEUnpackInfo_131,
	KVSEUnpackInfo_132, KVSEUnpackInfo_133, KVSEUnpackInfo_134, KVSEUnpackInfo_135,
	KVSEUnpackInfo_136, KVSEUnpackInfo_137, KVSEUnpackInfo_138, KVSEUnpackInfo_139,
	KVSEUnpackInfo_140, KVSEUnpackInfo_141, KVSEUnpackInfo_142, KVSEUnpackInfo_143,
	KVSEUnpackInfo_144, KVSEUnpackInfo_145, KVSEUnpackInfo_146, KVSEUnpackInfo_147,
	KVSEUnpackInfo_148, KVSEUnpackInfo_149, KVSEUnpackInfo_150, KVSEUnpackInfo_151,
	KVSEUnpackInfo_152, KVSEUnpackInfo_153, KVSEUnpackInfo_154, KVSEUnpackInfo_155,
	KVSEUnpackInfo_156, KVSEUnpackInfo_157, KVSEUnpackInfo_158, KVSEUnpackInfo_159,
	KVSEUnpackInfo_160, KVSEUnpackInfo_161, KVSEUnpackInfo_162, KVSEUnpackInfo_163,
	KVSEUnpackInfo_164, KVSEUnpackInfo_165, KVSEUnpackInfo_166, KVSEUnpackInfo_167,
	KVSEUnpackInfo_168, KVSEUnpackInfo_169, KVSEUnpackInfo_170, KVSEUnpackInfo_171,
	KVSEUnpackInfo_172, KVSEUnpackInfo_173, KVSEUnpackInfo_174, KVSEUnpackInfo_175,
	KVSEUnpackInfo_176, KVSEUnpackInfo_177, KVSEUnpackInfo_178, KVSEUnpackInfo_179,
	KVSEUnpackInfo_180, KVSEUnpackInfo_181, KVSEUnpackInfo_182, KVSEUnpackInfo_183,
	KVSEUnpackInfo_184, KVSEUnpackInfo_185, KVSEUnpackInfo_186, KVSEUnpackInfo_187,
	KVSEUnpackInfo_188, KVSEUnpackInfo_189, KVSEUnpackInfo_190, KVSEUnpackInfo_191,
	KVSEUnpackInfo_192, KVSEUnpackInfo_193, KVSEUnpackInfo_194, KVSEUnpackInfo_195,
	KVSEUnpackInfo_196, KVSEUnpackInfo_197, KVSEUnpackInfo_198, KVSEUnpackInfo_199,
	KVSEUnpackInfo_200, KVSEUnpackInfo_201, KVSEUnpackInfo_202, KVSEUnpackInfo_203,
	KVSEUnpackInfo_204, KVSEUnpackInfo_205, KVSEUnpackInfo_206, KVSEUnpackInfo_207,
	KVSEUnpackInfo_208, KVSEUnpackInfo_209, KVSEUnpackInfo_210, KVSEUnpackInfo_211,
	KVSEUnpackInfo_212, KVSEUnpackInfo_213, KVSEUnpackInfo_214, KVSEUnpackInfo_215,
	KVSEUnpackInfo_216, KVSEUnpackInfo_217, KVSEUnpackInfo_218, KVSEUnpackInfo_219,
	KVSEUnpackInfo_220, KVSEUnpackInfo_221, KVSEUnpackInfo_222, KVSEUnpackInfo_223,
	KVSEUnpackInfo_224, KVSEUnpackInfo_225, KVSEUnpackInfo_226, KVSEUnpackInfo_227,
	KVSEUnpackInfo_228, KVSEUnpackInfo_229, KVSEUnpackInfo_230, KVSEUnpackInfo_231,
	KVSEUnpackInfo_232, KVSEUnpackInfo_233, KVSEUnpackInfo_234, KVSEUnpackInfo_235,
	KVSEUnpackInfo_236, KVSEUnpackInfo_237, KVSEUnpackInfo_238, KVSEUnpackInfo_239,
	KVSEUnpackInfo_240, KVSEUnpackInfo_241, KVSEUnpackInfo_242, KVSEUnpackInfo_243,
	KVSEUnpackInfo_244, KVSEUnpackInfo_245, KVSEUnpackInfo_246, KVSEUnpackInfo_247,
	KVSEUnpackInfo_248, KVSEUnpackInfo_249, KVSEUnpackInfo_250, KVSEUnpackInfo_251,
	KVSEUnpackInfo_252, KVSEUnpackInfo_253, KVSEUnpackInfo_254, KVSEUnpackInfo_255,
	KVSEUnpackInfo_256, KVSEUnpackInfo_257, KVSEUnpackInfo_258, KVSEUnpackInfo_259,
	KVSEUnpackInfo_260, KVSEUnpackInfo_261, KVSEUnpackInfo_262, KVSEUnpackInfo_263,
	KVSEUnpackInfo_264, KVSEUnpackInfo_265, KVSEUnpackInfo_266, KVSEUnpackInfo_267,
	KVSEUnpackInfo_268, KVSEUnpackInfo_269, KVSEUnpackInfo_270, KVSEUnpackInfo_271,
	KVSEUnpackInfo_272, KVSEUnpackInfo_273, KVSEUnpackInfo_274, KVSEUnpackInfo_275,
	KVSEUnpackInfo_276, KVSEUnpackInfo_277, KVSEUnpackInfo_278, KVSEUnpackInfo_279,
	KVSEUnpackInfo_280, KVSEUnpackInfo_281, KVSEUnpackInfo_282, KVSEUnpackInfo_283,
	KVSEUnpackInfo_284, KVSEUnpackInfo_285, KVSEUnpackInfo_286, KVSEUnpackInfo_287,
	KVSEUnpackInfo_288, KVSEUnpackInfo_289, KVSEUnpackInfo_290, KVSEUnpackInfo_291,
	KVSEUnpackInfo_292, KVSEUnpackInfo_293, KVSEUnpackInfo_294, KVSEUnpackInfo_295,
	KVSEUnpackInfo_296, KVSEUnpackInfo_297, KVSEUnpackInfo_298, KVSEUnpackInfo_299,
	KVSEUnpackInfo_300, KVSEUnpackInfo_301, KVSEUnpackInfo_302, KVSEUnpackInfo_303,
	KVSEUnpackInfo_304, KVSEUnpackInfo_305, KVSEUnpackInfo_306, KVSEUnpackInfo_307,
	KVSEUnpackInfo_308, KVSEUnpackInfo_309, KVSEUnpackInfo_310, KVSEUnpackInfo_311,
	KVSEUnpackInfo_312, KVSEUnpackInfo_313, KVSEUnpackInfo_314, KVSEUnpackInfo_315,
	KVSEUnpackInfo_316, KVSEUnpackInfo_317, KVSEUnpackInfo_318, KVSEUnpackInfo_319,
	KVSEUnpackInfo_320, KVSEUnpackInfo_321, KVSEUnpackInfo_322, KVSEUnpackInfo_323,
	KVSEUnpackInfo_324, KVSEUnpackInfo_325, KVSEUnpackInfo_326, KVSEUnpackInfo_327,
	KVSEUnpackInfo_328, KVSEUnpackInfo_329, KVSEUnpackInfo_330, KVSEUnpackInfo_331,
	KVSEUnpackInfo_332, KVSEUnpackInfo_333, KVSEUnpackInfo_334, KVSEUnpackInfo_335,
	KVSEUnpackInfo_336, KVSEUnpackInfo_337, KVSEUnpackInfo_338, KVSEUnpackInfo_339,
	KVSEUnpackInfo_340, KVSEUnpackInfo_341, KVSEUnpackInfo_342, KVSEUnpackInfo_343,
	KVSEUnpackInfo_344, KVSEUnpackInfo_345, KVSEUnpackInfo_346, KVSEUnpackInfo_347,
	KVSEUnpackInfo_348, KVSEUnpackInfo_349, KVSEUnpackInfo_350, KVSEUnpackInfo_351,
	KVSEUnpackInfo_352, KVSEUnpackInfo_353, KVSEUnpackInfo_354, KVSEUnpackInfo_355,
	KVSEUnpackInfo_356, KVSEUnpackInfo_357, KVSEUnpackInfo_358, KVSEUnpackInfo_359,
	KVSEUnpackInfo_360, KVSEUnpackInfo_361, KVSEUnpackInfo_362, KVSEUnpackInfo_363,
	KVSEUnpackInfo_364, KVSEUnpackInfo_365, KVSEUnpackInfo_366, KVSEUnpackInfo_367,
	KVSEUnpackInfo_368, KVSEUnpackInfo_369, KVSEUnpackInfo_370, KVSEUnpackInfo_371,
	KVSEUnpackInfo_372, KVSEUnpackInfo_373, KVSEUnpackInfo_374, KVSEUnpackInfo_375,
	KVSEUnpackInfo_376, KVSEUnpackInfo_377, KVSEUnpackInfo_378, KVSEUnpackInfo_379,
	KVSEUnpackInfo_380, KVSEUnpackInfo_381, KVSEUnpackInfo_382, KVSEUnpackInfo_383,
	KVSEUnpackInfo_384, KVSEUnpackInfo_385, KVSEUnpackInfo_386, KVSEUnpackInfo_387,
	KVSEUnpackInfo_388, KVSEUnpackInfo_389, KVSEUnpackInfo_390, KVSEUnpackInfo_391,
	KVSEUnpackInfo_392, KVSEUnpackInfo_393, KVSEUnpackInfo_394, KVSEUnpackInfo_395,
	KVSEUnpackInfo_396, KVSEUnpackInfo_397, KVSEUnpackInfo_398, KVSEUnpackInfo_399,
	KVSEUnpackInfo_400, KVSEUnpackInfo_401, KVSEUnpackInfo_402, KVSEUnpackInfo_403,
	KVSEUnpackInfo_404, KVSEUnpackInfo_405, KVSEUnpackInfo_406, KVSEUnpackInfo_407,
	KVSEUnpackInfo_408, KVSEUnpackInfo_409, KVSEUnpackInfo_410, KVSEUnpackInfo_411,
	KVSEUnpackInfo_412, KVSEUnpackInfo_413, KVSEUnpackInfo_414, KVSEUnpackInfo_415,
	KVSEUnpackInfo_416, KVSEUnpackInfo_417, KVSEUnpackInfo_418, KVSEUnpackInfo_419,
	KVSEUnpackInfo_420, KVSEUnpackInfo_421, KVSEUnpackInfo_422, KVSEUnpackInfo_423,
	KVSEUnpackInfo_424, KVSEUnpackInfo_425, KVSEUnpackInfo_426, KVSEUnpackInfo_427,
	KVSEUnpackInfo_428, KVSEUnpackInfo_429, KVSEUnpackInfo_430, KVSEUnpackInfo_431,
	KVSEUnpackInfo_432, KVSEUnpackInfo_433, KVSEUnpackInfo_434, KVSEUnpackInfo_435,
	KVSEUnpackInfo_436, KVSEUnpackInfo_437, KVSEUnpackInfo_438, KVSEUnpackInfo_439,
	KVSEUnpackInfo_440, KVSEUnpackInfo_441, KVSEUnpackInfo_442, KVSEUnpackInfo_443,
	KVSEUnpackInfo_444, KVSEUnpackInfo_445, KVSEUnpackInfo_446, KVSEUnpackInfo_447,
	KVSEUnpackInfo_448, KVSEUnpackInfo_449, KVSEUnpackInfo_450, KVSEUnpackInfo_451,
	KVSEUnpackInfo_452, KVSEUnpackInfo_453, KVSEUnpackInfo_454, KVSEUnpackInfo_455,
	KVSEUnpackInfo_456, KVSEUnpackInfo_457, KVSEUnpackInfo_458, KVSEUnpackInfo_459,
	KVSEUnpackInfo_460, KVSEUnpackInfo_461, KVSEUnpackInfo_462, KVSEUnpackInfo_463,
	KVSEUnpackInfo_464, KVSEUnpackInfo_465, KVSEUnpackInfo_466, KVSEUnpackInfo_467,
	KVSEUnpackInfo_468, KVSEUnpackInfo_469, KVSEUnpackInfo_470, KVSEUnpackInfo_471,
	KVSEUnpackInfo_472, KVSEUnpackInfo_473, KVSEUnpackInfo_474, KVSEUnpackInfo_475,
	KVSEUnpackInfo_476, KVSEUnpackInfo_477, KVSEUnpackInfo_478, KVSEUnpackInfo_479,
	KVSEUnpackInfo_480, KVSEUnpackInfo_481, KVSEUnpackInfo_482, KVSEUnpackInfo_483,
	KVSEUnpackInfo_484, KVSEUnpackInfo_485, KVSEUnpackInfo_486, KVSEUnpackInfo_487,
	KVSEUnpackInfo_488, KVSEUnpackInfo_489, KVSEUnpackInfo_490, KVSEUnpackInfo_491,
	KVSEUnpackInfo_492, KVSEUnpackInfo_493, KVSEUnpackInfo_494, KVSEUnpackInfo_495,
	KVSEUnpackInfo_496, KVSEUnpackInfo_497, KVSEUnpackInfo_498, KVSEUnpackInfo_499,
	KVSEUnpackInfo_500, KVSEUnpackInfo_501, KVSEUnpackInfo_502, KVSEUnpackInfo_503,
	KVSEUnpackInfo_504, KVSEUnpackInfo_505, KVSEUnpackInfo_506, KVSEUnpackInfo_507,
	KVSEUnpackInfo_508, KVSEUnpackInfo_509, KVSEUnpackInfo_510, KVSEUnpackInfo_511,
};

}
}

#endif /* KVSEncoding_UNPACK_HPP_ */

/*
 *
#include <iostream>
#include <sstream>
#include <string>
#include <stdint.h>
#include <vector>

using namespace std;

#ifdef ARRAYSIZE
# undef ARRAYSIZE
#endif

#define ARRAYSIZE(__x__)  \
    (sizeof(__x__) / sizeof(*(__x__)))

#define DIV_ROUNDUP(__x__, __y__) \
    ((__x__ + __y__ - 1) / __y__)

const uint32_t VSESIMPLE_LENS[8] = { 1, 2, 4, 8, 12, 16, 32, 64};
const uint32_t VSESIMPLE_LOGS[16] = { 0, 1, 2, 3, 4, 5, 6,
		7, 8, 9, 10, 11, 12, 16, 20, 32 };


void GenCode(ostringstream &oss, ostringstream &infoOss) {
	//string IDX_STR = "i";

	for (int idx2=0; idx2<ARRAYSIZE(VSESIMPLE_LENS); idx2++) {
		int num = VSESIMPLE_LENS[idx2]; //num of integers
	for (int idx1=0; idx1<ARRAYSIZE(VSESIMPLE_LOGS); idx1++) {
		int i = VSESIMPLE_LOGS[idx1]; //bitwidth

		for (int k=0; k<4; k++) {	//ori byte offset
			oss << "template<typename T>" << endl;
			ostringstream nameOss;
			nameOss << "KVSE_unpack_" << num << "len_" << i << "bw_" << (k*8) << "offset";
			oss << "void " << nameOss.str() <<  "(T * des, const uint32_t *src) {" << endl;
			int infoIdx = (idx2 << 6) + (idx1 << 2) + k;
			infoOss << "static KVSEUnpackInfo KVSEUnpackInfo_" << infoIdx << " = { " << nameOss.str() << "<uint32_t>, ";

			int offsetInWord = k << 3;
			int curWordIdx = 0;
			int j = 0;
			uint32_t mask  = (1LL << i) - 1;
			while (j < num) {

				if (i == 0) {
					oss << "\tZMEMCPY128(des";
					if (j > 0)
						oss << " + " << 4 * j;
					oss << ");" << endl;
					j++;
					continue;
				}

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
					tmp1 << " & " << hex << "0x" << mask << dec;
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
						tmp2 << " & " << hex << "0x" << mask << dec;
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

			// aligned newOffset and workskipped by byte
			offsetInWord = 8 * DIV_ROUNDUP(offsetInWord, 8);
			curWordIdx += offsetInWord / 32;
			offsetInWord = offsetInWord % 32;

			infoOss << (k << 3) << ", "	//begOffset
				<< (offsetInWord) << ", "	//newOffset
				<< (curWordIdx << 2) << ", "	//wordskipped
				<< (num << 2) << ", "		//integer decoded
				<< "};" << endl;
		}
	}	// bitwidth
	}	// num
}

string printInfoArr(int arrNum) {
	ostringstream oss;
	oss << "static KVSEUnpackInfo KVSEUnpackInfoArr[" << arrNum << "] = {" << endl;
	for (int i=0; i<arrNum; ++i) {
		if (i % 4 == 0)
			oss << "\t";
		oss << "KVSEUnpackInfo_" << i << ", ";
		if (i % 4 == 3)
			oss << endl;
	}
	oss << "};" << endl;
	return oss.str();
}


int main() {
	ostringstream oss, infoOss;
	GenCode(oss, infoOss);

	cout << oss.str();
	cout << endl;
	cout << infoOss.str();
	cout << endl;
	cout << printInfoArr(4 * ARRAYSIZE(VSESIMPLE_LENS) * ARRAYSIZE(VSESIMPLE_LOGS));

	return 0;
}
 *
 */

