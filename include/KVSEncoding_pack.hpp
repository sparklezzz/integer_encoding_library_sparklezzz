/*
 * KVSEncoding_pack.hpp
 *
 *  Created on: 2013-11-18
 *      Author: zxd
 */

#ifndef KVSEncoding_PACK_HPP_
#define KVSEncoding_PACK_HPP_

namespace paradise {
namespace index {

struct KVSEPackInfo {
	void (*m_subFunc)(uint32_t *des, const uint32_t *src);
	uint8_t m_offset;
	uint8_t m_newOffset;
	uint16_t m_wordSkipped;
	uint16_t m_intEncoded;
};

template<typename T>
void KVSE_pack_1len_0bw_0offset(T * des, const uint32_t *src) {
}

template<typename T>
void KVSE_pack_1len_0bw_8offset(T * des, const uint32_t *src) {
}

template<typename T>
void KVSE_pack_1len_0bw_16offset(T * des, const uint32_t *src) {
}

template<typename T>
void KVSE_pack_1len_0bw_24offset(T * des, const uint32_t *src) {
}

template<typename T>
void KVSE_pack_1len_1bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x1);
	}
}

template<typename T>
void KVSE_pack_1len_1bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1) << 8;
	}
}

template<typename T>
void KVSE_pack_1len_1bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1) << 16;
	}
}

template<typename T>
void KVSE_pack_1len_1bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1) << 24;
	}
}

template<typename T>
void KVSE_pack_1len_2bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x3);
	}
}

template<typename T>
void KVSE_pack_1len_2bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3) << 8;
	}
}

template<typename T>
void KVSE_pack_1len_2bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3) << 16;
	}
}

template<typename T>
void KVSE_pack_1len_2bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3) << 24;
	}
}

template<typename T>
void KVSE_pack_1len_3bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x7);
	}
}

template<typename T>
void KVSE_pack_1len_3bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7) << 8;
	}
}

template<typename T>
void KVSE_pack_1len_3bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7) << 16;
	}
}

template<typename T>
void KVSE_pack_1len_3bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7) << 24;
	}
}

template<typename T>
void KVSE_pack_1len_4bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0xf);
	}
}

template<typename T>
void KVSE_pack_1len_4bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xf) << 8;
	}
}

template<typename T>
void KVSE_pack_1len_4bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xf) << 16;
	}
}

template<typename T>
void KVSE_pack_1len_4bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xf) << 24;
	}
}

template<typename T>
void KVSE_pack_1len_5bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x1f);
	}
}

template<typename T>
void KVSE_pack_1len_5bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1f) << 8;
	}
}

template<typename T>
void KVSE_pack_1len_5bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1f) << 16;
	}
}

template<typename T>
void KVSE_pack_1len_5bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1f) << 24;
	}
}

template<typename T>
void KVSE_pack_1len_6bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x3f);
	}
}

template<typename T>
void KVSE_pack_1len_6bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3f) << 8;
	}
}

template<typename T>
void KVSE_pack_1len_6bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3f) << 16;
	}
}

template<typename T>
void KVSE_pack_1len_6bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3f) << 24;
	}
}

template<typename T>
void KVSE_pack_1len_7bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x7f);
	}
}

template<typename T>
void KVSE_pack_1len_7bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7f) << 8;
	}
}

template<typename T>
void KVSE_pack_1len_7bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7f) << 16;
	}
}

template<typename T>
void KVSE_pack_1len_7bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7f) << 24;
	}
}

template<typename T>
void KVSE_pack_1len_8bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0xff);
	}
}

template<typename T>
void KVSE_pack_1len_8bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xff) << 8;
	}
}

template<typename T>
void KVSE_pack_1len_8bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xff) << 16;
	}
}

template<typename T>
void KVSE_pack_1len_8bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xff) << 24;
	}
}

template<typename T>
void KVSE_pack_1len_9bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x1ff);
	}
}

template<typename T>
void KVSE_pack_1len_9bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1ff) << 8;
	}
}

template<typename T>
void KVSE_pack_1len_9bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1ff) << 16;
	}
}

template<typename T>
void KVSE_pack_1len_9bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1ff) << 24;
		des[4+j] = (src[j] & 0x1ff) >> 8;
	}
}

template<typename T>
void KVSE_pack_1len_10bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x3ff);
	}
}

template<typename T>
void KVSE_pack_1len_10bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3ff) << 8;
	}
}

template<typename T>
void KVSE_pack_1len_10bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3ff) << 16;
	}
}

template<typename T>
void KVSE_pack_1len_10bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3ff) << 24;
		des[4+j] = (src[j] & 0x3ff) >> 8;
	}
}

template<typename T>
void KVSE_pack_1len_11bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x7ff);
	}
}

template<typename T>
void KVSE_pack_1len_11bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7ff) << 8;
	}
}

template<typename T>
void KVSE_pack_1len_11bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7ff) << 16;
	}
}

template<typename T>
void KVSE_pack_1len_11bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7ff) << 24;
		des[4+j] = (src[j] & 0x7ff) >> 8;
	}
}

template<typename T>
void KVSE_pack_1len_12bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0xfff);
	}
}

template<typename T>
void KVSE_pack_1len_12bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xfff) << 8;
	}
}

template<typename T>
void KVSE_pack_1len_12bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xfff) << 16;
	}
}

template<typename T>
void KVSE_pack_1len_12bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xfff) << 24;
		des[4+j] = (src[j] & 0xfff) >> 8;
	}
}

template<typename T>
void KVSE_pack_1len_16bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0xffff);
	}
}

template<typename T>
void KVSE_pack_1len_16bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xffff) << 8;
	}
}

template<typename T>
void KVSE_pack_1len_16bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xffff) << 16;
	}
}

template<typename T>
void KVSE_pack_1len_16bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xffff) << 24;
		des[4+j] = (src[j] & 0xffff) >> 8;
	}
}

template<typename T>
void KVSE_pack_1len_20bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0xfffff);
	}
}

template<typename T>
void KVSE_pack_1len_20bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xfffff) << 8;
	}
}

template<typename T>
void KVSE_pack_1len_20bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xfffff) << 16;
		des[4+j] = (src[j] & 0xfffff) >> 16;
	}
}

template<typename T>
void KVSE_pack_1len_20bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xfffff) << 24;
		des[4+j] = (src[j] & 0xfffff) >> 8;
	}
}

template<typename T>
void KVSE_pack_1len_32bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j]);
	}
}

template<typename T>
void KVSE_pack_1len_32bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j]) << 8;
		des[4+j] = (src[j]) >> 24;
	}
}

template<typename T>
void KVSE_pack_1len_32bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j]) << 16;
		des[4+j] = (src[j]) >> 16;
	}
}

template<typename T>
void KVSE_pack_1len_32bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j]) << 24;
		des[4+j] = (src[j]) >> 8;
	}
}

template<typename T>
void KVSE_pack_2len_0bw_0offset(T * des, const uint32_t *src) {
}

template<typename T>
void KVSE_pack_2len_0bw_8offset(T * des, const uint32_t *src) {
}

template<typename T>
void KVSE_pack_2len_0bw_16offset(T * des, const uint32_t *src) {
}

template<typename T>
void KVSE_pack_2len_0bw_24offset(T * des, const uint32_t *src) {
}

template<typename T>
void KVSE_pack_2len_1bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x1);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1) << 1;
	}
}

template<typename T>
void KVSE_pack_2len_1bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1) << 9;
	}
}

template<typename T>
void KVSE_pack_2len_1bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1) << 17;
	}
}

template<typename T>
void KVSE_pack_2len_1bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1) << 25;
	}
}

template<typename T>
void KVSE_pack_2len_2bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x3);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3) << 2;
	}
}

template<typename T>
void KVSE_pack_2len_2bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3) << 10;
	}
}

template<typename T>
void KVSE_pack_2len_2bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3) << 18;
	}
}

template<typename T>
void KVSE_pack_2len_2bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3) << 26;
	}
}

template<typename T>
void KVSE_pack_2len_3bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x7);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7) << 3;
	}
}

template<typename T>
void KVSE_pack_2len_3bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7) << 11;
	}
}

template<typename T>
void KVSE_pack_2len_3bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7) << 19;
	}
}

template<typename T>
void KVSE_pack_2len_3bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7) << 27;
	}
}

template<typename T>
void KVSE_pack_2len_4bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xf) << 4;
	}
}

template<typename T>
void KVSE_pack_2len_4bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xf) << 12;
	}
}

template<typename T>
void KVSE_pack_2len_4bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xf) << 20;
	}
}

template<typename T>
void KVSE_pack_2len_4bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xf) << 28;
	}
}

template<typename T>
void KVSE_pack_2len_5bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x1f);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1f) << 5;
	}
}

template<typename T>
void KVSE_pack_2len_5bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1f) << 13;
	}
}

template<typename T>
void KVSE_pack_2len_5bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1f) << 21;
	}
}

template<typename T>
void KVSE_pack_2len_5bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1f) << 29;
		des[4+j] = (src[4+j] & 0x1f) >> 3;
	}
}

template<typename T>
void KVSE_pack_2len_6bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x3f);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3f) << 6;
	}
}

template<typename T>
void KVSE_pack_2len_6bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3f) << 14;
	}
}

template<typename T>
void KVSE_pack_2len_6bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3f) << 22;
	}
}

template<typename T>
void KVSE_pack_2len_6bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3f) << 30;
		des[4+j] = (src[4+j] & 0x3f) >> 2;
	}
}

template<typename T>
void KVSE_pack_2len_7bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x7f);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7f) << 7;
	}
}

template<typename T>
void KVSE_pack_2len_7bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7f) << 15;
	}
}

template<typename T>
void KVSE_pack_2len_7bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7f) << 23;
	}
}

template<typename T>
void KVSE_pack_2len_7bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7f) << 31;
		des[4+j] = (src[4+j] & 0x7f) >> 1;
	}
}

template<typename T>
void KVSE_pack_2len_8bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xff) << 8;
	}
}

template<typename T>
void KVSE_pack_2len_8bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xff) << 16;
	}
}

template<typename T>
void KVSE_pack_2len_8bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xff) << 24;
	}
}

template<typename T>
void KVSE_pack_2len_8bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] & 0xff);
	}
}

template<typename T>
void KVSE_pack_2len_9bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x1ff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1ff) << 9;
	}
}

template<typename T>
void KVSE_pack_2len_9bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1ff) << 17;
	}
}

template<typename T>
void KVSE_pack_2len_9bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1ff) << 25;
		des[4+j] = (src[4+j] & 0x1ff) >> 7;
	}
}

template<typename T>
void KVSE_pack_2len_9bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1ff) << 24;
		des[4+j] = (src[j] & 0x1ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0x1ff) << 1;
	}
}

template<typename T>
void KVSE_pack_2len_10bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x3ff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3ff) << 10;
	}
}

template<typename T>
void KVSE_pack_2len_10bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3ff) << 18;
	}
}

template<typename T>
void KVSE_pack_2len_10bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3ff) << 26;
		des[4+j] = (src[4+j] & 0x3ff) >> 6;
	}
}

template<typename T>
void KVSE_pack_2len_10bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3ff) << 24;
		des[4+j] = (src[j] & 0x3ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0x3ff) << 2;
	}
}

template<typename T>
void KVSE_pack_2len_11bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x7ff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7ff) << 11;
	}
}

template<typename T>
void KVSE_pack_2len_11bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7ff) << 19;
	}
}

template<typename T>
void KVSE_pack_2len_11bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7ff) << 27;
		des[4+j] = (src[4+j] & 0x7ff) >> 5;
	}
}

template<typename T>
void KVSE_pack_2len_11bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7ff) << 24;
		des[4+j] = (src[j] & 0x7ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0x7ff) << 3;
	}
}

template<typename T>
void KVSE_pack_2len_12bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xfff) << 12;
	}
}

template<typename T>
void KVSE_pack_2len_12bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xfff) << 20;
	}
}

template<typename T>
void KVSE_pack_2len_12bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xfff) << 28;
		des[4+j] = (src[4+j] & 0xfff) >> 4;
	}
}

template<typename T>
void KVSE_pack_2len_12bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xfff) << 24;
		des[4+j] = (src[j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0xfff) << 4;
	}
}

template<typename T>
void KVSE_pack_2len_16bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xffff) << 16;
	}
}

template<typename T>
void KVSE_pack_2len_16bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xffff) << 24;
		des[4+j] = (src[4+j] & 0xffff) >> 8;
	}
}

template<typename T>
void KVSE_pack_2len_16bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] & 0xffff);
	}
}

template<typename T>
void KVSE_pack_2len_16bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xffff) << 24;
		des[4+j] = (src[j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0xffff) << 8;
	}
}

template<typename T>
void KVSE_pack_2len_20bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xfffff) << 20;
		des[4+j] = (src[4+j] & 0xfffff) >> 12;
	}
}

template<typename T>
void KVSE_pack_2len_20bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xfffff) << 28;
		des[4+j] = (src[4+j] & 0xfffff) >> 4;
	}
}

template<typename T>
void KVSE_pack_2len_20bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xfffff) << 16;
		des[4+j] = (src[j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0xfffff) << 4;
	}
}

template<typename T>
void KVSE_pack_2len_20bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xfffff) << 24;
		des[4+j] = (src[j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0xfffff) << 12;
	}
}

template<typename T>
void KVSE_pack_2len_32bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j]);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j]);
	}
}

template<typename T>
void KVSE_pack_2len_32bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j]) << 8;
		des[4+j] = (src[j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j]) << 8;
		des[8+j] = (src[4+j]) >> 24;
	}
}

template<typename T>
void KVSE_pack_2len_32bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j]) << 16;
		des[4+j] = (src[j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j]) << 16;
		des[8+j] = (src[4+j]) >> 16;
	}
}

template<typename T>
void KVSE_pack_2len_32bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j]) << 24;
		des[4+j] = (src[j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j]) << 24;
		des[8+j] = (src[4+j]) >> 8;
	}
}

template<typename T>
void KVSE_pack_4len_0bw_0offset(T * des, const uint32_t *src) {
}

template<typename T>
void KVSE_pack_4len_0bw_8offset(T * des, const uint32_t *src) {
}

template<typename T>
void KVSE_pack_4len_0bw_16offset(T * des, const uint32_t *src) {
}

template<typename T>
void KVSE_pack_4len_0bw_24offset(T * des, const uint32_t *src) {
}

template<typename T>
void KVSE_pack_4len_1bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x1);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x1) << 3;
	}
}

template<typename T>
void KVSE_pack_4len_1bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x1) << 11;
	}
}

template<typename T>
void KVSE_pack_4len_1bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x1) << 19;
	}
}

template<typename T>
void KVSE_pack_4len_1bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x1) << 27;
	}
}

template<typename T>
void KVSE_pack_4len_2bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x3);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x3) << 6;
	}
}

template<typename T>
void KVSE_pack_4len_2bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x3) << 14;
	}
}

template<typename T>
void KVSE_pack_4len_2bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x3) << 22;
	}
}

template<typename T>
void KVSE_pack_4len_2bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x3) << 30;
	}
}

template<typename T>
void KVSE_pack_4len_3bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x7);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x7) << 9;
	}
}

template<typename T>
void KVSE_pack_4len_3bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x7) << 17;
	}
}

template<typename T>
void KVSE_pack_4len_3bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x7) << 25;
	}
}

template<typename T>
void KVSE_pack_4len_3bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7) << 30;
		des[4+j] = (src[8+j] & 0x7) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x7) << 1;
	}
}

template<typename T>
void KVSE_pack_4len_4bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0xf) << 12;
	}
}

template<typename T>
void KVSE_pack_4len_4bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0xf) << 20;
	}
}

template<typename T>
void KVSE_pack_4len_4bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0xf) << 28;
	}
}

template<typename T>
void KVSE_pack_4len_4bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[8+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xf) << 4;
	}
}

template<typename T>
void KVSE_pack_4len_5bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x1f);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1f) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x1f) << 15;
	}
}

template<typename T>
void KVSE_pack_4len_5bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1f) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x1f) << 23;
	}
}

template<typename T>
void KVSE_pack_4len_5bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1f) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1f) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x1f) << 31;
		des[4+j] = (src[12+j] & 0x1f) >> 1;
	}
}

template<typename T>
void KVSE_pack_4len_5bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1f) << 29;
		des[4+j] = (src[4+j] & 0x1f) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x1f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x1f) << 7;
	}
}

template<typename T>
void KVSE_pack_4len_6bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x3f);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x3f) << 18;
	}
}

template<typename T>
void KVSE_pack_4len_6bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x3f) << 26;
	}
}

template<typename T>
void KVSE_pack_4len_6bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3f) << 28;
		des[4+j] = (src[8+j] & 0x3f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x3f) << 2;
	}
}

template<typename T>
void KVSE_pack_4len_6bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3f) << 30;
		des[4+j] = (src[4+j] & 0x3f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x3f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x3f) << 10;
	}
}

template<typename T>
void KVSE_pack_4len_7bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x7f);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7f) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x7f) << 21;
	}
}

template<typename T>
void KVSE_pack_4len_7bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7f) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x7f) << 29;
		des[4+j] = (src[12+j] & 0x7f) >> 3;
	}
}

template<typename T>
void KVSE_pack_4len_7bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7f) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7f) << 30;
		des[4+j] = (src[8+j] & 0x7f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x7f) << 5;
	}
}

template<typename T>
void KVSE_pack_4len_7bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7f) << 31;
		des[4+j] = (src[4+j] & 0x7f) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x7f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x7f) << 13;
	}
}

template<typename T>
void KVSE_pack_4len_8bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0xff) << 24;
	}
}

template<typename T>
void KVSE_pack_4len_8bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[12+j] & 0xff);
	}
}

template<typename T>
void KVSE_pack_4len_8bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[8+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xff) << 8;
	}
}

template<typename T>
void KVSE_pack_4len_8bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xff) << 16;
	}
}

template<typename T>
void KVSE_pack_4len_9bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x1ff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1ff) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x1ff) << 27;
		des[4+j] = (src[12+j] & 0x1ff) >> 5;
	}
}

template<typename T>
void KVSE_pack_4len_9bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1ff) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1ff) << 26;
		des[4+j] = (src[8+j] & 0x1ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x1ff) << 3;
	}
}

template<typename T>
void KVSE_pack_4len_9bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1ff) << 25;
		des[4+j] = (src[4+j] & 0x1ff) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x1ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x1ff) << 11;
	}
}

template<typename T>
void KVSE_pack_4len_9bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1ff) << 24;
		des[4+j] = (src[j] & 0x1ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0x1ff) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x1ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x1ff) << 19;
	}
}

template<typename T>
void KVSE_pack_4len_10bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x3ff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x3ff) << 30;
		des[4+j] = (src[12+j] & 0x3ff) >> 2;
	}
}

template<typename T>
void KVSE_pack_4len_10bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3ff) << 28;
		des[4+j] = (src[8+j] & 0x3ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x3ff) << 6;
	}
}

template<typename T>
void KVSE_pack_4len_10bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3ff) << 26;
		des[4+j] = (src[4+j] & 0x3ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x3ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x3ff) << 14;
	}
}

template<typename T>
void KVSE_pack_4len_10bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3ff) << 24;
		des[4+j] = (src[j] & 0x3ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0x3ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x3ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x3ff) << 22;
	}
}

template<typename T>
void KVSE_pack_4len_11bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x7ff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7ff) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7ff) << 22;
		des[4+j] = (src[8+j] & 0x7ff) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x7ff) << 1;
	}
}

template<typename T>
void KVSE_pack_4len_11bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7ff) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7ff) << 30;
		des[4+j] = (src[8+j] & 0x7ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x7ff) << 9;
	}
}

template<typename T>
void KVSE_pack_4len_11bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7ff) << 27;
		des[4+j] = (src[4+j] & 0x7ff) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x7ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x7ff) << 17;
	}
}

template<typename T>
void KVSE_pack_4len_11bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7ff) << 24;
		des[4+j] = (src[j] & 0x7ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0x7ff) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x7ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x7ff) << 25;
		des[8+j] = (src[12+j] & 0x7ff) >> 7;
	}
}

template<typename T>
void KVSE_pack_4len_12bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0xfff) << 24;
		des[4+j] = (src[8+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xfff) << 4;
	}
}

template<typename T>
void KVSE_pack_4len_12bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[8+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xfff) << 12;
	}
}

template<typename T>
void KVSE_pack_4len_12bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xfff) << 28;
		des[4+j] = (src[4+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xfff) << 20;
	}
}

template<typename T>
void KVSE_pack_4len_12bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xfff) << 24;
		des[4+j] = (src[j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xfff) << 28;
		des[8+j] = (src[12+j] & 0xfff) >> 4;
	}
}

template<typename T>
void KVSE_pack_4len_16bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[8+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xffff) << 16;
	}
}

template<typename T>
void KVSE_pack_4len_16bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xffff) << 24;
		des[4+j] = (src[4+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xffff) << 24;
		des[8+j] = (src[12+j] & 0xffff) >> 8;
	}
}

template<typename T>
void KVSE_pack_4len_16bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[12+j] & 0xffff);
	}
}

template<typename T>
void KVSE_pack_4len_16bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xffff) << 24;
		des[4+j] = (src[j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xffff) << 24;
		des[8+j] = (src[8+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 0xffff) << 8;
	}
}

template<typename T>
void KVSE_pack_4len_20bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xfffff) << 20;
		des[4+j] = (src[4+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xfffff) << 28;
		des[8+j] = (src[12+j] & 0xfffff) >> 4;
	}
}

template<typename T>
void KVSE_pack_4len_20bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xfffff) << 28;
		des[4+j] = (src[4+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xfffff) << 16;
		des[8+j] = (src[8+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 0xfffff) << 4;
	}
}

template<typename T>
void KVSE_pack_4len_20bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xfffff) << 16;
		des[4+j] = (src[j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xfffff) << 24;
		des[8+j] = (src[8+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 0xfffff) << 12;
	}
}

template<typename T>
void KVSE_pack_4len_20bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xfffff) << 24;
		des[4+j] = (src[j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 0xfffff) << 20;
		des[12+j] = (src[12+j] & 0xfffff) >> 12;
	}
}

template<typename T>
void KVSE_pack_4len_32bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j]);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j]);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j]);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j]);
	}
}

template<typename T>
void KVSE_pack_4len_32bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j]) << 8;
		des[4+j] = (src[j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j]) << 8;
		des[8+j] = (src[4+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j]) << 8;
		des[12+j] = (src[8+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j]) << 8;
		des[16+j] = (src[12+j]) >> 24;
	}
}

template<typename T>
void KVSE_pack_4len_32bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j]) << 16;
		des[4+j] = (src[j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j]) << 16;
		des[8+j] = (src[4+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j]) << 16;
		des[12+j] = (src[8+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j]) << 16;
		des[16+j] = (src[12+j]) >> 16;
	}
}

template<typename T>
void KVSE_pack_4len_32bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j]) << 24;
		des[4+j] = (src[j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j]) << 24;
		des[8+j] = (src[4+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j]) << 24;
		des[12+j] = (src[8+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j]) << 24;
		des[16+j] = (src[12+j]) >> 8;
	}
}

template<typename T>
void KVSE_pack_8len_0bw_0offset(T * des, const uint32_t *src) {
}

template<typename T>
void KVSE_pack_8len_0bw_8offset(T * des, const uint32_t *src) {
}

template<typename T>
void KVSE_pack_8len_0bw_16offset(T * des, const uint32_t *src) {
}

template<typename T>
void KVSE_pack_8len_0bw_24offset(T * des, const uint32_t *src) {
}

template<typename T>
void KVSE_pack_8len_1bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x1);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x1) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x1) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x1) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x1) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0x1) << 7;
	}
}

template<typename T>
void KVSE_pack_8len_1bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x1) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x1) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x1) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x1) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0x1) << 15;
	}
}

template<typename T>
void KVSE_pack_8len_1bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x1) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x1) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x1) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x1) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0x1) << 23;
	}
}

template<typename T>
void KVSE_pack_8len_1bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x1) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x1) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x1) << 29;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x1) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0x1) << 31;
	}
}

template<typename T>
void KVSE_pack_8len_2bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x3);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x3) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x3) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x3) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0x3) << 14;
	}
}

template<typename T>
void KVSE_pack_8len_2bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x3) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x3) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x3) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0x3) << 22;
	}
}

template<typename T>
void KVSE_pack_8len_2bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x3) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x3) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x3) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0x3) << 30;
	}
}

template<typename T>
void KVSE_pack_8len_2bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x3) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[16+j] & 0x3);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x3) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x3) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x3) << 6;
	}
}

template<typename T>
void KVSE_pack_8len_3bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x7);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x7) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x7) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x7) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x7) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0x7) << 21;
	}
}

template<typename T>
void KVSE_pack_8len_3bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x7) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x7) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x7) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x7) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0x7) << 29;
	}
}

template<typename T>
void KVSE_pack_8len_3bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x7) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x7) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x7) << 31;
		des[4+j] = (src[20+j] & 0x7) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x7) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x7) << 5;
	}
}

template<typename T>
void KVSE_pack_8len_3bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7) << 30;
		des[4+j] = (src[8+j] & 0x7) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x7) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x7) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x7) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x7) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x7) << 13;
	}
}

template<typename T>
void KVSE_pack_8len_4bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0xf) << 28;
	}
}

template<typename T>
void KVSE_pack_8len_4bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[24+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0xf) << 4;
	}
}

template<typename T>
void KVSE_pack_8len_4bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[16+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0xf) << 12;
	}
}

template<typename T>
void KVSE_pack_8len_4bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[8+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0xf) << 20;
	}
}

template<typename T>
void KVSE_pack_8len_5bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x1f);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1f) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x1f) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x1f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x1f) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x1f) << 30;
		des[4+j] = (src[24+j] & 0x1f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x1f) << 3;
	}
}

template<typename T>
void KVSE_pack_8len_5bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1f) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x1f) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x1f) << 28;
		des[4+j] = (src[16+j] & 0x1f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x1f) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x1f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x1f) << 11;
	}
}

template<typename T>
void KVSE_pack_8len_5bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1f) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1f) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x1f) << 31;
		des[4+j] = (src[12+j] & 0x1f) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x1f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x1f) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x1f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x1f) << 19;
	}
}

template<typename T>
void KVSE_pack_8len_5bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1f) << 29;
		des[4+j] = (src[4+j] & 0x1f) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x1f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x1f) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x1f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x1f) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x1f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x1f) << 27;
	}
}

template<typename T>
void KVSE_pack_8len_6bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x3f);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x3f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x3f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x3f) << 30;
		des[4+j] = (src[20+j] & 0x3f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x3f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x3f) << 10;
	}
}

template<typename T>
void KVSE_pack_8len_6bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x3f) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[16+j] & 0x3f);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x3f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x3f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x3f) << 18;
	}
}

template<typename T>
void KVSE_pack_8len_6bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3f) << 28;
		des[4+j] = (src[8+j] & 0x3f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x3f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x3f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x3f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x3f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x3f) << 26;
	}
}

template<typename T>
void KVSE_pack_8len_6bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3f) << 30;
		des[4+j] = (src[4+j] & 0x3f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x3f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x3f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x3f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x3f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x3f) << 28;
		des[8+j] = (src[24+j] & 0x3f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x3f) << 2;
	}
}

template<typename T>
void KVSE_pack_8len_7bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x7f);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7f) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x7f) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x7f) << 28;
		des[4+j] = (src[16+j] & 0x7f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x7f) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x7f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x7f) << 17;
	}
}

template<typename T>
void KVSE_pack_8len_7bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7f) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x7f) << 29;
		des[4+j] = (src[12+j] & 0x7f) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x7f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x7f) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x7f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x7f) << 25;
	}
}

template<typename T>
void KVSE_pack_8len_7bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7f) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7f) << 30;
		des[4+j] = (src[8+j] & 0x7f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x7f) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x7f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x7f) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x7f) << 26;
		des[8+j] = (src[24+j] & 0x7f) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x7f) << 1;
	}
}

template<typename T>
void KVSE_pack_8len_7bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7f) << 31;
		des[4+j] = (src[4+j] & 0x7f) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x7f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x7f) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x7f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x7f) << 27;
		des[8+j] = (src[20+j] & 0x7f) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x7f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x7f) << 9;
	}
}

template<typename T>
void KVSE_pack_8len_8bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[16+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0xff) << 24;
	}
}

template<typename T>
void KVSE_pack_8len_8bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[12+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[28+j] & 0xff);
	}
}

template<typename T>
void KVSE_pack_8len_8bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[8+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[24+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0xff) << 8;
	}
}

template<typename T>
void KVSE_pack_8len_8bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[20+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0xff) << 16;
	}
}

template<typename T>
void KVSE_pack_8len_9bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x1ff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1ff) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x1ff) << 27;
		des[4+j] = (src[12+j] & 0x1ff) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x1ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x1ff) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x1ff) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x1ff) << 31;
		des[8+j] = (src[28+j] & 0x1ff) >> 1;
	}
}

template<typename T>
void KVSE_pack_8len_9bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1ff) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1ff) << 26;
		des[4+j] = (src[8+j] & 0x1ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x1ff) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x1ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x1ff) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x1ff) << 30;
		des[8+j] = (src[24+j] & 0x1ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x1ff) << 7;
	}
}

template<typename T>
void KVSE_pack_8len_9bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1ff) << 25;
		des[4+j] = (src[4+j] & 0x1ff) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x1ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x1ff) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x1ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x1ff) << 29;
		des[8+j] = (src[20+j] & 0x1ff) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x1ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x1ff) << 15;
	}
}

template<typename T>
void KVSE_pack_8len_9bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1ff) << 24;
		des[4+j] = (src[j] & 0x1ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0x1ff) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x1ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x1ff) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x1ff) << 28;
		des[8+j] = (src[16+j] & 0x1ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0x1ff) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x1ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x1ff) << 23;
	}
}

template<typename T>
void KVSE_pack_8len_10bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x3ff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x3ff) << 30;
		des[4+j] = (src[12+j] & 0x3ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x3ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x3ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x3ff) << 28;
		des[8+j] = (src[24+j] & 0x3ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x3ff) << 6;
	}
}

template<typename T>
void KVSE_pack_8len_10bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3ff) << 28;
		des[4+j] = (src[8+j] & 0x3ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x3ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x3ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x3ff) << 26;
		des[8+j] = (src[20+j] & 0x3ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x3ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x3ff) << 14;
	}
}

template<typename T>
void KVSE_pack_8len_10bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3ff) << 26;
		des[4+j] = (src[4+j] & 0x3ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x3ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x3ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x3ff) << 24;
		des[8+j] = (src[16+j] & 0x3ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0x3ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x3ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x3ff) << 22;
	}
}

template<typename T>
void KVSE_pack_8len_10bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3ff) << 24;
		des[4+j] = (src[j] & 0x3ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0x3ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x3ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x3ff) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[16+j] & 0x3ff);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0x3ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x3ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x3ff) << 30;
		des[12+j] = (src[28+j] & 0x3ff) >> 2;
	}
}

template<typename T>
void KVSE_pack_8len_11bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x7ff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7ff) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7ff) << 22;
		des[4+j] = (src[8+j] & 0x7ff) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x7ff) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x7ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x7ff) << 23;
		des[8+j] = (src[20+j] & 0x7ff) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x7ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x7ff) << 13;
	}
}

template<typename T>
void KVSE_pack_8len_11bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7ff) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7ff) << 30;
		des[4+j] = (src[8+j] & 0x7ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x7ff) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x7ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x7ff) << 31;
		des[8+j] = (src[20+j] & 0x7ff) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x7ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x7ff) << 21;
	}
}

template<typename T>
void KVSE_pack_8len_11bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7ff) << 27;
		des[4+j] = (src[4+j] & 0x7ff) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x7ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x7ff) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x7ff) << 28;
		des[8+j] = (src[16+j] & 0x7ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0x7ff) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x7ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x7ff) << 29;
		des[12+j] = (src[28+j] & 0x7ff) >> 3;
	}
}

template<typename T>
void KVSE_pack_8len_11bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7ff) << 24;
		des[4+j] = (src[j] & 0x7ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0x7ff) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x7ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x7ff) << 25;
		des[8+j] = (src[12+j] & 0x7ff) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 0x7ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0x7ff) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x7ff) << 26;
		des[12+j] = (src[24+j] & 0x7ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 0x7ff) << 5;
	}
}

template<typename T>
void KVSE_pack_8len_12bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0xfff) << 24;
		des[4+j] = (src[8+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0xfff) << 28;
		des[8+j] = (src[20+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0xfff) << 20;
	}
}

template<typename T>
void KVSE_pack_8len_12bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[8+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0xfff) << 24;
		des[8+j] = (src[16+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0xfff) << 28;
		des[12+j] = (src[28+j] & 0xfff) >> 4;
	}
}

template<typename T>
void KVSE_pack_8len_12bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xfff) << 28;
		des[4+j] = (src[4+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[16+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0xfff) << 24;
		des[12+j] = (src[24+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 0xfff) << 4;
	}
}

template<typename T>
void KVSE_pack_8len_12bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xfff) << 24;
		des[4+j] = (src[j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xfff) << 28;
		des[8+j] = (src[12+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[24+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 0xfff) << 12;
	}
}

template<typename T>
void KVSE_pack_8len_16bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[8+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[16+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[24+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 0xffff) << 16;
	}
}

template<typename T>
void KVSE_pack_8len_16bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xffff) << 24;
		des[4+j] = (src[4+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xffff) << 24;
		des[8+j] = (src[12+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0xffff) << 24;
		des[12+j] = (src[20+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 0xffff) << 24;
		des[16+j] = (src[28+j] & 0xffff) >> 8;
	}
}

template<typename T>
void KVSE_pack_8len_16bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[12+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[20+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[28+j] & 0xffff);
	}
}

template<typename T>
void KVSE_pack_8len_16bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xffff) << 24;
		des[4+j] = (src[j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xffff) << 24;
		des[8+j] = (src[8+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 0xffff) << 24;
		des[12+j] = (src[16+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 0xffff) << 24;
		des[16+j] = (src[24+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 0xffff) << 8;
	}
}

template<typename T>
void KVSE_pack_8len_20bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xfffff) << 20;
		des[4+j] = (src[4+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xfffff) << 28;
		des[8+j] = (src[12+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 0xfffff) << 16;
		des[12+j] = (src[16+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 0xfffff) << 24;
		des[16+j] = (src[24+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 0xfffff) << 12;
	}
}

template<typename T>
void KVSE_pack_8len_20bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xfffff) << 28;
		des[4+j] = (src[4+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xfffff) << 16;
		des[8+j] = (src[8+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 0xfffff) << 24;
		des[12+j] = (src[16+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[24+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 0xfffff) << 20;
		des[20+j] = (src[28+j] & 0xfffff) >> 12;
	}
}

template<typename T>
void KVSE_pack_8len_20bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xfffff) << 16;
		des[4+j] = (src[j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xfffff) << 24;
		des[8+j] = (src[8+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[16+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 0xfffff) << 20;
		des[16+j] = (src[20+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 0xfffff) << 28;
		des[20+j] = (src[28+j] & 0xfffff) >> 4;
	}
}

template<typename T>
void KVSE_pack_8len_20bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xfffff) << 24;
		des[4+j] = (src[j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 0xfffff) << 20;
		des[12+j] = (src[12+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 0xfffff) << 28;
		des[16+j] = (src[20+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 0xfffff) << 16;
		des[20+j] = (src[24+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 0xfffff) << 4;
	}
}

template<typename T>
void KVSE_pack_8len_32bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j]);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j]);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j]);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j]);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[16+j]);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[20+j]);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[24+j]);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[28+j]);
	}
}

template<typename T>
void KVSE_pack_8len_32bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j]) << 8;
		des[4+j] = (src[j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j]) << 8;
		des[8+j] = (src[4+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j]) << 8;
		des[12+j] = (src[8+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j]) << 8;
		des[16+j] = (src[12+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[16+j]) << 8;
		des[20+j] = (src[16+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[20+j]) << 8;
		des[24+j] = (src[20+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[24+j]) << 8;
		des[28+j] = (src[24+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[28+j]) << 8;
		des[32+j] = (src[28+j]) >> 24;
	}
}

template<typename T>
void KVSE_pack_8len_32bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j]) << 16;
		des[4+j] = (src[j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j]) << 16;
		des[8+j] = (src[4+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j]) << 16;
		des[12+j] = (src[8+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j]) << 16;
		des[16+j] = (src[12+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[16+j]) << 16;
		des[20+j] = (src[16+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[20+j]) << 16;
		des[24+j] = (src[20+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[24+j]) << 16;
		des[28+j] = (src[24+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[28+j]) << 16;
		des[32+j] = (src[28+j]) >> 16;
	}
}

template<typename T>
void KVSE_pack_8len_32bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j]) << 24;
		des[4+j] = (src[j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j]) << 24;
		des[8+j] = (src[4+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j]) << 24;
		des[12+j] = (src[8+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j]) << 24;
		des[16+j] = (src[12+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[16+j]) << 24;
		des[20+j] = (src[16+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[20+j]) << 24;
		des[24+j] = (src[20+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[24+j]) << 24;
		des[28+j] = (src[24+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[28+j]) << 24;
		des[32+j] = (src[28+j]) >> 8;
	}
}

template<typename T>
void KVSE_pack_12len_0bw_0offset(T * des, const uint32_t *src) {
}

template<typename T>
void KVSE_pack_12len_0bw_8offset(T * des, const uint32_t *src) {
}

template<typename T>
void KVSE_pack_12len_0bw_16offset(T * des, const uint32_t *src) {
}

template<typename T>
void KVSE_pack_12len_0bw_24offset(T * des, const uint32_t *src) {
}

template<typename T>
void KVSE_pack_12len_1bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x1);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x1) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x1) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x1) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x1) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0x1) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[32+j] & 0x1) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[36+j] & 0x1) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[40+j] & 0x1) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[44+j] & 0x1) << 11;
	}
}

template<typename T>
void KVSE_pack_12len_1bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x1) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x1) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x1) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x1) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0x1) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[32+j] & 0x1) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[36+j] & 0x1) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[40+j] & 0x1) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[44+j] & 0x1) << 19;
	}
}

template<typename T>
void KVSE_pack_12len_1bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x1) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x1) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x1) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x1) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0x1) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[32+j] & 0x1) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[36+j] & 0x1) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[40+j] & 0x1) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[44+j] & 0x1) << 27;
	}
}

template<typename T>
void KVSE_pack_12len_1bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x1) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x1) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x1) << 29;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x1) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0x1) << 31;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[32+j] & 0x1);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0x1) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 0x1) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 0x1) << 3;
	}
}

template<typename T>
void KVSE_pack_12len_2bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x3);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x3) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x3) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x3) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0x3) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[32+j] & 0x3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[36+j] & 0x3) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[40+j] & 0x3) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[44+j] & 0x3) << 22;
	}
}

template<typename T>
void KVSE_pack_12len_2bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x3) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x3) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x3) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0x3) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[32+j] & 0x3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[36+j] & 0x3) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[40+j] & 0x3) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[44+j] & 0x3) << 30;
	}
}

template<typename T>
void KVSE_pack_12len_2bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x3) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x3) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x3) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0x3) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[32+j] & 0x3);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0x3) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 0x3) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 0x3) << 6;
	}
}

template<typename T>
void KVSE_pack_12len_2bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x3) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[16+j] & 0x3);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x3) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x3) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x3) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 0x3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0x3) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 0x3) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 0x3) << 14;
	}
}

template<typename T>
void KVSE_pack_12len_3bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x7);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x7) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x7) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x7) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x7) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0x7) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[32+j] & 0x7) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[36+j] & 0x7) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[40+j] & 0x7) << 30;
		des[4+j] = (src[40+j] & 0x7) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 0x7) << 1;
	}
}

template<typename T>
void KVSE_pack_12len_3bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x7) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x7) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x7) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x7) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0x7) << 29;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[32+j] & 0x7);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0x7) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 0x7) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 0x7) << 9;
	}
}

template<typename T>
void KVSE_pack_12len_3bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x7) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x7) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x7) << 31;
		des[4+j] = (src[20+j] & 0x7) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x7) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x7) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 0x7) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0x7) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 0x7) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 0x7) << 17;
	}
}

template<typename T>
void KVSE_pack_12len_3bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7) << 30;
		des[4+j] = (src[8+j] & 0x7) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x7) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x7) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x7) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x7) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x7) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 0x7) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0x7) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 0x7) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 0x7) << 25;
	}
}

template<typename T>
void KVSE_pack_12len_4bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[32+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 0xf) << 12;
	}
}

template<typename T>
void KVSE_pack_12len_4bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[24+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 0xf) << 20;
	}
}

template<typename T>
void KVSE_pack_12len_4bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[16+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 0xf) << 28;
	}
}

template<typename T>
void KVSE_pack_12len_4bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[8+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[40+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 0xf) << 4;
	}
}

template<typename T>
void KVSE_pack_12len_5bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x1f);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1f) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x1f) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x1f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x1f) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x1f) << 30;
		des[4+j] = (src[24+j] & 0x1f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x1f) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 0x1f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0x1f) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 0x1f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 0x1f) << 23;
	}
}

template<typename T>
void KVSE_pack_12len_5bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1f) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x1f) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x1f) << 28;
		des[4+j] = (src[16+j] & 0x1f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x1f) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x1f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x1f) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 0x1f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0x1f) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 0x1f) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 0x1f) << 31;
		des[8+j] = (src[44+j] & 0x1f) >> 1;
	}
}

template<typename T>
void KVSE_pack_12len_5bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1f) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1f) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x1f) << 31;
		des[4+j] = (src[12+j] & 0x1f) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x1f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x1f) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x1f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x1f) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 0x1f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0x1f) << 29;
		des[8+j] = (src[36+j] & 0x1f) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 0x1f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 0x1f) << 7;
	}
}

template<typename T>
void KVSE_pack_12len_5bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1f) << 29;
		des[4+j] = (src[4+j] & 0x1f) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x1f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x1f) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x1f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x1f) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x1f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x1f) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[32+j] & 0x1f);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 0x1f) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 0x1f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 0x1f) << 15;
	}
}

template<typename T>
void KVSE_pack_12len_6bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x3f);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x3f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x3f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x3f) << 30;
		des[4+j] = (src[20+j] & 0x3f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x3f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x3f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 0x3f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0x3f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 0x3f) << 28;
		des[8+j] = (src[40+j] & 0x3f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 0x3f) << 2;
	}
}

template<typename T>
void KVSE_pack_12len_6bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x3f) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[16+j] & 0x3f);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x3f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x3f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x3f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 0x3f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0x3f) << 30;
		des[8+j] = (src[36+j] & 0x3f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 0x3f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 0x3f) << 10;
	}
}

template<typename T>
void KVSE_pack_12len_6bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3f) << 28;
		des[4+j] = (src[8+j] & 0x3f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x3f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x3f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x3f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x3f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x3f) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[32+j] & 0x3f);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 0x3f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 0x3f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 0x3f) << 18;
	}
}

template<typename T>
void KVSE_pack_12len_6bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3f) << 30;
		des[4+j] = (src[4+j] & 0x3f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x3f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x3f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x3f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x3f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x3f) << 28;
		des[8+j] = (src[24+j] & 0x3f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x3f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 0x3f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 0x3f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 0x3f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 0x3f) << 26;
	}
}

template<typename T>
void KVSE_pack_12len_7bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x7f);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7f) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x7f) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x7f) << 28;
		des[4+j] = (src[16+j] & 0x7f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x7f) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x7f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x7f) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 0x7f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0x7f) << 31;
		des[8+j] = (src[36+j] & 0x7f) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 0x7f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 0x7f) << 13;
	}
}

template<typename T>
void KVSE_pack_12len_7bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7f) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x7f) << 29;
		des[4+j] = (src[12+j] & 0x7f) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x7f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x7f) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x7f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x7f) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[32+j] & 0x7f);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 0x7f) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 0x7f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 0x7f) << 21;
	}
}

template<typename T>
void KVSE_pack_12len_7bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7f) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7f) << 30;
		des[4+j] = (src[8+j] & 0x7f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x7f) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x7f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x7f) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x7f) << 26;
		des[8+j] = (src[24+j] & 0x7f) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x7f) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 0x7f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 0x7f) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 0x7f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 0x7f) << 29;
		des[12+j] = (src[44+j] & 0x7f) >> 3;
	}
}

template<typename T>
void KVSE_pack_12len_7bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7f) << 31;
		des[4+j] = (src[4+j] & 0x7f) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x7f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x7f) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x7f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x7f) << 27;
		des[8+j] = (src[20+j] & 0x7f) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x7f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x7f) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 0x7f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 0x7f) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 0x7f) << 30;
		des[12+j] = (src[40+j] & 0x7f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 0x7f) << 5;
	}
}

template<typename T>
void KVSE_pack_12len_8bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[16+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[32+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 0xff) << 24;
	}
}

template<typename T>
void KVSE_pack_12len_8bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[12+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[28+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[44+j] & 0xff);
	}
}

template<typename T>
void KVSE_pack_12len_8bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[8+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[24+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[40+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 0xff) << 8;
	}
}

template<typename T>
void KVSE_pack_12len_8bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[20+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[36+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 0xff) << 16;
	}
}

template<typename T>
void KVSE_pack_12len_9bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x1ff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1ff) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x1ff) << 27;
		des[4+j] = (src[12+j] & 0x1ff) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x1ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x1ff) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x1ff) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x1ff) << 31;
		des[8+j] = (src[28+j] & 0x1ff) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 0x1ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 0x1ff) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 0x1ff) << 26;
		des[12+j] = (src[40+j] & 0x1ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 0x1ff) << 3;
	}
}

template<typename T>
void KVSE_pack_12len_9bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1ff) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1ff) << 26;
		des[4+j] = (src[8+j] & 0x1ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x1ff) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x1ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x1ff) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x1ff) << 30;
		des[8+j] = (src[24+j] & 0x1ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x1ff) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 0x1ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 0x1ff) << 25;
		des[12+j] = (src[36+j] & 0x1ff) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 0x1ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 0x1ff) << 11;
	}
}

template<typename T>
void KVSE_pack_12len_9bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1ff) << 25;
		des[4+j] = (src[4+j] & 0x1ff) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x1ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x1ff) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x1ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x1ff) << 29;
		des[8+j] = (src[20+j] & 0x1ff) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x1ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x1ff) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 0x1ff) << 24;
		des[12+j] = (src[32+j] & 0x1ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 0x1ff) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 0x1ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 0x1ff) << 19;
	}
}

template<typename T>
void KVSE_pack_12len_9bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1ff) << 24;
		des[4+j] = (src[j] & 0x1ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0x1ff) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x1ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x1ff) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x1ff) << 28;
		des[8+j] = (src[16+j] & 0x1ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0x1ff) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x1ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x1ff) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[32+j] & 0x1ff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 0x1ff) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 0x1ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 0x1ff) << 27;
		des[16+j] = (src[44+j] & 0x1ff) >> 5;
	}
}

template<typename T>
void KVSE_pack_12len_10bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x3ff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x3ff) << 30;
		des[4+j] = (src[12+j] & 0x3ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x3ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x3ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x3ff) << 28;
		des[8+j] = (src[24+j] & 0x3ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x3ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 0x3ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 0x3ff) << 26;
		des[12+j] = (src[36+j] & 0x3ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 0x3ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 0x3ff) << 14;
	}
}

template<typename T>
void KVSE_pack_12len_10bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3ff) << 28;
		des[4+j] = (src[8+j] & 0x3ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x3ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x3ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x3ff) << 26;
		des[8+j] = (src[20+j] & 0x3ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x3ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x3ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 0x3ff) << 24;
		des[12+j] = (src[32+j] & 0x3ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 0x3ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 0x3ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 0x3ff) << 22;
	}
}

template<typename T>
void KVSE_pack_12len_10bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3ff) << 26;
		des[4+j] = (src[4+j] & 0x3ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x3ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x3ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x3ff) << 24;
		des[8+j] = (src[16+j] & 0x3ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0x3ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x3ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x3ff) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[32+j] & 0x3ff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 0x3ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 0x3ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 0x3ff) << 30;
		des[16+j] = (src[44+j] & 0x3ff) >> 2;
	}
}

template<typename T>
void KVSE_pack_12len_10bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3ff) << 24;
		des[4+j] = (src[j] & 0x3ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0x3ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x3ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x3ff) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[16+j] & 0x3ff);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0x3ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x3ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x3ff) << 30;
		des[12+j] = (src[28+j] & 0x3ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[32+j] & 0x3ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 0x3ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 0x3ff) << 28;
		des[16+j] = (src[40+j] & 0x3ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 0x3ff) << 6;
	}
}

template<typename T>
void KVSE_pack_12len_11bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x7ff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7ff) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7ff) << 22;
		des[4+j] = (src[8+j] & 0x7ff) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x7ff) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x7ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x7ff) << 23;
		des[8+j] = (src[20+j] & 0x7ff) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x7ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x7ff) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 0x7ff) << 24;
		des[12+j] = (src[32+j] & 0x7ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 0x7ff) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 0x7ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 0x7ff) << 25;
		des[16+j] = (src[44+j] & 0x7ff) >> 7;
	}
}

template<typename T>
void KVSE_pack_12len_11bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7ff) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7ff) << 30;
		des[4+j] = (src[8+j] & 0x7ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x7ff) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x7ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x7ff) << 31;
		des[8+j] = (src[20+j] & 0x7ff) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x7ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x7ff) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[32+j] & 0x7ff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 0x7ff) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 0x7ff) << 22;
		des[16+j] = (src[40+j] & 0x7ff) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 0x7ff) << 1;
	}
}

template<typename T>
void KVSE_pack_12len_11bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7ff) << 27;
		des[4+j] = (src[4+j] & 0x7ff) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x7ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x7ff) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x7ff) << 28;
		des[8+j] = (src[16+j] & 0x7ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0x7ff) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x7ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x7ff) << 29;
		des[12+j] = (src[28+j] & 0x7ff) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[32+j] & 0x7ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 0x7ff) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 0x7ff) << 30;
		des[16+j] = (src[40+j] & 0x7ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 0x7ff) << 9;
	}
}

template<typename T>
void KVSE_pack_12len_11bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7ff) << 24;
		des[4+j] = (src[j] & 0x7ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0x7ff) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x7ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x7ff) << 25;
		des[8+j] = (src[12+j] & 0x7ff) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 0x7ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0x7ff) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x7ff) << 26;
		des[12+j] = (src[24+j] & 0x7ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 0x7ff) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[32+j] & 0x7ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 0x7ff) << 27;
		des[16+j] = (src[36+j] & 0x7ff) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[40+j] & 0x7ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 0x7ff) << 17;
	}
}

template<typename T>
void KVSE_pack_12len_12bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0xfff) << 24;
		des[4+j] = (src[8+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0xfff) << 28;
		des[8+j] = (src[20+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[32+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 0xfff) << 24;
		des[16+j] = (src[40+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 0xfff) << 4;
	}
}

template<typename T>
void KVSE_pack_12len_12bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[8+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0xfff) << 24;
		des[8+j] = (src[16+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0xfff) << 28;
		des[12+j] = (src[28+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[32+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[40+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 0xfff) << 12;
	}
}

template<typename T>
void KVSE_pack_12len_12bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xfff) << 28;
		des[4+j] = (src[4+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[16+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0xfff) << 24;
		des[12+j] = (src[24+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[32+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 0xfff) << 28;
		des[16+j] = (src[36+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[40+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 0xfff) << 20;
	}
}

template<typename T>
void KVSE_pack_12len_12bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xfff) << 24;
		des[4+j] = (src[j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xfff) << 28;
		des[8+j] = (src[12+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[24+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[32+j] & 0xfff) << 24;
		des[16+j] = (src[32+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[36+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[40+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 0xfff) << 28;
		des[20+j] = (src[44+j] & 0xfff) >> 4;
	}
}

template<typename T>
void KVSE_pack_12len_16bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[8+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[16+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[24+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[32+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[36+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[40+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[44+j] & 0xffff) << 16;
	}
}

template<typename T>
void KVSE_pack_12len_16bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xffff) << 24;
		des[4+j] = (src[4+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xffff) << 24;
		des[8+j] = (src[12+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0xffff) << 24;
		des[12+j] = (src[20+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 0xffff) << 24;
		des[16+j] = (src[28+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[32+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[36+j] & 0xffff) << 24;
		des[20+j] = (src[36+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[40+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[44+j] & 0xffff) << 24;
		des[24+j] = (src[44+j] & 0xffff) >> 8;
	}
}

template<typename T>
void KVSE_pack_12len_16bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[12+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[20+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[28+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[32+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[36+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[40+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[44+j] & 0xffff);
	}
}

template<typename T>
void KVSE_pack_12len_16bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xffff) << 24;
		des[4+j] = (src[j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xffff) << 24;
		des[8+j] = (src[8+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 0xffff) << 24;
		des[12+j] = (src[16+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 0xffff) << 24;
		des[16+j] = (src[24+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[32+j] & 0xffff) << 24;
		des[20+j] = (src[32+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[36+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[40+j] & 0xffff) << 24;
		des[24+j] = (src[40+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[44+j] & 0xffff) << 8;
	}
}

template<typename T>
void KVSE_pack_12len_20bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xfffff) << 20;
		des[4+j] = (src[4+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xfffff) << 28;
		des[8+j] = (src[12+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 0xfffff) << 16;
		des[12+j] = (src[16+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 0xfffff) << 24;
		des[16+j] = (src[24+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[32+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[36+j] & 0xfffff) << 20;
		des[24+j] = (src[36+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[40+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[44+j] & 0xfffff) << 28;
		des[28+j] = (src[44+j] & 0xfffff) >> 4;
	}
}

template<typename T>
void KVSE_pack_12len_20bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xfffff) << 28;
		des[4+j] = (src[4+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xfffff) << 16;
		des[8+j] = (src[8+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 0xfffff) << 24;
		des[12+j] = (src[16+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[24+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 0xfffff) << 20;
		des[20+j] = (src[28+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[32+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[36+j] & 0xfffff) << 28;
		des[24+j] = (src[36+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[40+j] & 0xfffff) << 16;
		des[28+j] = (src[40+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[44+j] & 0xfffff) << 4;
	}
}

template<typename T>
void KVSE_pack_12len_20bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xfffff) << 16;
		des[4+j] = (src[j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xfffff) << 24;
		des[8+j] = (src[8+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[16+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 0xfffff) << 20;
		des[16+j] = (src[20+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 0xfffff) << 28;
		des[20+j] = (src[28+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[32+j] & 0xfffff) << 16;
		des[24+j] = (src[32+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[36+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[40+j] & 0xfffff) << 24;
		des[28+j] = (src[40+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[44+j] & 0xfffff) << 12;
	}
}

template<typename T>
void KVSE_pack_12len_20bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xfffff) << 24;
		des[4+j] = (src[j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 0xfffff) << 20;
		des[12+j] = (src[12+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 0xfffff) << 28;
		des[16+j] = (src[20+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 0xfffff) << 16;
		des[20+j] = (src[24+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[32+j] & 0xfffff) << 24;
		des[24+j] = (src[32+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[36+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[40+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[44+j] & 0xfffff) << 20;
		des[32+j] = (src[44+j] & 0xfffff) >> 12;
	}
}

template<typename T>
void KVSE_pack_12len_32bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j]);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j]);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j]);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j]);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[16+j]);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[20+j]);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[24+j]);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[28+j]);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[32+j]);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[36+j]);
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[40+j]);
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[44+j]);
	}
}

template<typename T>
void KVSE_pack_12len_32bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j]) << 8;
		des[4+j] = (src[j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j]) << 8;
		des[8+j] = (src[4+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j]) << 8;
		des[12+j] = (src[8+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j]) << 8;
		des[16+j] = (src[12+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[16+j]) << 8;
		des[20+j] = (src[16+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[20+j]) << 8;
		des[24+j] = (src[20+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[24+j]) << 8;
		des[28+j] = (src[24+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[28+j]) << 8;
		des[32+j] = (src[28+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[32+j]) << 8;
		des[36+j] = (src[32+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[36+j]) << 8;
		des[40+j] = (src[36+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[40+j]) << 8;
		des[44+j] = (src[40+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[44+j]) << 8;
		des[48+j] = (src[44+j]) >> 24;
	}
}

template<typename T>
void KVSE_pack_12len_32bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j]) << 16;
		des[4+j] = (src[j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j]) << 16;
		des[8+j] = (src[4+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j]) << 16;
		des[12+j] = (src[8+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j]) << 16;
		des[16+j] = (src[12+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[16+j]) << 16;
		des[20+j] = (src[16+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[20+j]) << 16;
		des[24+j] = (src[20+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[24+j]) << 16;
		des[28+j] = (src[24+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[28+j]) << 16;
		des[32+j] = (src[28+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[32+j]) << 16;
		des[36+j] = (src[32+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[36+j]) << 16;
		des[40+j] = (src[36+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[40+j]) << 16;
		des[44+j] = (src[40+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[44+j]) << 16;
		des[48+j] = (src[44+j]) >> 16;
	}
}

template<typename T>
void KVSE_pack_12len_32bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j]) << 24;
		des[4+j] = (src[j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j]) << 24;
		des[8+j] = (src[4+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j]) << 24;
		des[12+j] = (src[8+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j]) << 24;
		des[16+j] = (src[12+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[16+j]) << 24;
		des[20+j] = (src[16+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[20+j]) << 24;
		des[24+j] = (src[20+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[24+j]) << 24;
		des[28+j] = (src[24+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[28+j]) << 24;
		des[32+j] = (src[28+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[32+j]) << 24;
		des[36+j] = (src[32+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[36+j]) << 24;
		des[40+j] = (src[36+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[40+j]) << 24;
		des[44+j] = (src[40+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[44+j]) << 24;
		des[48+j] = (src[44+j]) >> 8;
	}
}

template<typename T>
void KVSE_pack_16len_0bw_0offset(T * des, const uint32_t *src) {
}

template<typename T>
void KVSE_pack_16len_0bw_8offset(T * des, const uint32_t *src) {
}

template<typename T>
void KVSE_pack_16len_0bw_16offset(T * des, const uint32_t *src) {
}

template<typename T>
void KVSE_pack_16len_0bw_24offset(T * des, const uint32_t *src) {
}

template<typename T>
void KVSE_pack_16len_1bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x1);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x1) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x1) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x1) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x1) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0x1) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[32+j] & 0x1) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[36+j] & 0x1) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[40+j] & 0x1) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[44+j] & 0x1) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[48+j] & 0x1) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[52+j] & 0x1) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[56+j] & 0x1) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[60+j] & 0x1) << 15;
	}
}

template<typename T>
void KVSE_pack_16len_1bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x1) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x1) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x1) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x1) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0x1) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[32+j] & 0x1) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[36+j] & 0x1) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[40+j] & 0x1) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[44+j] & 0x1) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[48+j] & 0x1) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[52+j] & 0x1) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[56+j] & 0x1) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[60+j] & 0x1) << 23;
	}
}

template<typename T>
void KVSE_pack_16len_1bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x1) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x1) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x1) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x1) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0x1) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[32+j] & 0x1) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[36+j] & 0x1) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[40+j] & 0x1) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[44+j] & 0x1) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[48+j] & 0x1) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[52+j] & 0x1) << 29;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[56+j] & 0x1) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[60+j] & 0x1) << 31;
	}
}

template<typename T>
void KVSE_pack_16len_1bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x1) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x1) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x1) << 29;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x1) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0x1) << 31;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[32+j] & 0x1);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0x1) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 0x1) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 0x1) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 0x1) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 0x1) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[56+j] & 0x1) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[60+j] & 0x1) << 7;
	}
}

template<typename T>
void KVSE_pack_16len_2bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x3);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x3) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x3) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x3) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0x3) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[32+j] & 0x3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[36+j] & 0x3) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[40+j] & 0x3) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[44+j] & 0x3) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[48+j] & 0x3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[52+j] & 0x3) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[56+j] & 0x3) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[60+j] & 0x3) << 30;
	}
}

template<typename T>
void KVSE_pack_16len_2bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x3) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x3) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x3) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0x3) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[32+j] & 0x3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[36+j] & 0x3) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[40+j] & 0x3) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[44+j] & 0x3) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[48+j] & 0x3);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 0x3) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[56+j] & 0x3) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[60+j] & 0x3) << 6;
	}
}

template<typename T>
void KVSE_pack_16len_2bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x3) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x3) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x3) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0x3) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[32+j] & 0x3);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0x3) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 0x3) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 0x3) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 0x3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 0x3) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[56+j] & 0x3) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[60+j] & 0x3) << 14;
	}
}

template<typename T>
void KVSE_pack_16len_2bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x3) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[16+j] & 0x3);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x3) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x3) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x3) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 0x3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0x3) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 0x3) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 0x3) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 0x3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 0x3) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[56+j] & 0x3) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[60+j] & 0x3) << 22;
	}
}

template<typename T>
void KVSE_pack_16len_3bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x7);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x7) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x7) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x7) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x7) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0x7) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[32+j] & 0x7) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[36+j] & 0x7) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[40+j] & 0x7) << 30;
		des[4+j] = (src[40+j] & 0x7) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 0x7) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 0x7) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 0x7) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[56+j] & 0x7) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[60+j] & 0x7) << 13;
	}
}

template<typename T>
void KVSE_pack_16len_3bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x7) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x7) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x7) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x7) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0x7) << 29;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[32+j] & 0x7);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0x7) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 0x7) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 0x7) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 0x7) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 0x7) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[56+j] & 0x7) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[60+j] & 0x7) << 21;
	}
}

template<typename T>
void KVSE_pack_16len_3bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x7) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x7) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x7) << 31;
		des[4+j] = (src[20+j] & 0x7) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x7) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x7) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 0x7) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0x7) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 0x7) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 0x7) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 0x7) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 0x7) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[56+j] & 0x7) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[60+j] & 0x7) << 29;
	}
}

template<typename T>
void KVSE_pack_16len_3bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7) << 30;
		des[4+j] = (src[8+j] & 0x7) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x7) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x7) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x7) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x7) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x7) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 0x7) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0x7) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 0x7) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 0x7) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 0x7) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 0x7) << 31;
		des[8+j] = (src[52+j] & 0x7) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[56+j] & 0x7) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[60+j] & 0x7) << 5;
	}
}

template<typename T>
void KVSE_pack_16len_4bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[32+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[56+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[60+j] & 0xf) << 28;
	}
}

template<typename T>
void KVSE_pack_16len_4bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[24+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[56+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[60+j] & 0xf) << 4;
	}
}

template<typename T>
void KVSE_pack_16len_4bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[16+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[48+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[56+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[60+j] & 0xf) << 12;
	}
}

template<typename T>
void KVSE_pack_16len_4bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[8+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[40+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[48+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[56+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[60+j] & 0xf) << 20;
	}
}

template<typename T>
void KVSE_pack_16len_5bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x1f);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1f) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x1f) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x1f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x1f) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x1f) << 30;
		des[4+j] = (src[24+j] & 0x1f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x1f) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 0x1f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0x1f) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 0x1f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 0x1f) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 0x1f) << 28;
		des[8+j] = (src[48+j] & 0x1f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 0x1f) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[56+j] & 0x1f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[60+j] & 0x1f) << 11;
	}
}

template<typename T>
void KVSE_pack_16len_5bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1f) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x1f) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x1f) << 28;
		des[4+j] = (src[16+j] & 0x1f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x1f) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x1f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x1f) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 0x1f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0x1f) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 0x1f) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 0x1f) << 31;
		des[8+j] = (src[44+j] & 0x1f) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[48+j] & 0x1f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 0x1f) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[56+j] & 0x1f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[60+j] & 0x1f) << 19;
	}
}

template<typename T>
void KVSE_pack_16len_5bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1f) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1f) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x1f) << 31;
		des[4+j] = (src[12+j] & 0x1f) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x1f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x1f) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x1f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x1f) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 0x1f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0x1f) << 29;
		des[8+j] = (src[36+j] & 0x1f) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 0x1f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 0x1f) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[48+j] & 0x1f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 0x1f) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[56+j] & 0x1f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[60+j] & 0x1f) << 27;
	}
}

template<typename T>
void KVSE_pack_16len_5bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1f) << 29;
		des[4+j] = (src[4+j] & 0x1f) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x1f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x1f) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x1f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x1f) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x1f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x1f) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[32+j] & 0x1f);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 0x1f) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 0x1f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 0x1f) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[48+j] & 0x1f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 0x1f) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[56+j] & 0x1f) << 30;
		des[12+j] = (src[56+j] & 0x1f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[60+j] & 0x1f) << 3;
	}
}

template<typename T>
void KVSE_pack_16len_6bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x3f);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x3f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x3f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x3f) << 30;
		des[4+j] = (src[20+j] & 0x3f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x3f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x3f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 0x3f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0x3f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 0x3f) << 28;
		des[8+j] = (src[40+j] & 0x3f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 0x3f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[48+j] & 0x3f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 0x3f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[56+j] & 0x3f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[60+j] & 0x3f) << 26;
	}
}

template<typename T>
void KVSE_pack_16len_6bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x3f) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[16+j] & 0x3f);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x3f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x3f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x3f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 0x3f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0x3f) << 30;
		des[8+j] = (src[36+j] & 0x3f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 0x3f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 0x3f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[48+j] & 0x3f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 0x3f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[56+j] & 0x3f) << 28;
		des[12+j] = (src[56+j] & 0x3f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[60+j] & 0x3f) << 2;
	}
}

template<typename T>
void KVSE_pack_16len_6bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3f) << 28;
		des[4+j] = (src[8+j] & 0x3f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x3f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x3f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x3f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x3f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x3f) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[32+j] & 0x3f);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 0x3f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 0x3f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 0x3f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[48+j] & 0x3f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 0x3f) << 30;
		des[12+j] = (src[52+j] & 0x3f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[56+j] & 0x3f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[60+j] & 0x3f) << 10;
	}
}

template<typename T>
void KVSE_pack_16len_6bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3f) << 30;
		des[4+j] = (src[4+j] & 0x3f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x3f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x3f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x3f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x3f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x3f) << 28;
		des[8+j] = (src[24+j] & 0x3f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x3f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 0x3f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 0x3f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 0x3f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 0x3f) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[48+j] & 0x3f);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[52+j] & 0x3f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[56+j] & 0x3f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[60+j] & 0x3f) << 18;
	}
}

template<typename T>
void KVSE_pack_16len_7bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x7f);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7f) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x7f) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x7f) << 28;
		des[4+j] = (src[16+j] & 0x7f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x7f) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x7f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x7f) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 0x7f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0x7f) << 31;
		des[8+j] = (src[36+j] & 0x7f) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 0x7f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 0x7f) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[48+j] & 0x7f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 0x7f) << 27;
		des[12+j] = (src[52+j] & 0x7f) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[56+j] & 0x7f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[60+j] & 0x7f) << 9;
	}
}

template<typename T>
void KVSE_pack_16len_7bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7f) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x7f) << 29;
		des[4+j] = (src[12+j] & 0x7f) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x7f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x7f) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x7f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x7f) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[32+j] & 0x7f);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 0x7f) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 0x7f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 0x7f) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[48+j] & 0x7f) << 28;
		des[12+j] = (src[48+j] & 0x7f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[52+j] & 0x7f) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[56+j] & 0x7f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[60+j] & 0x7f) << 17;
	}
}

template<typename T>
void KVSE_pack_16len_7bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7f) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7f) << 30;
		des[4+j] = (src[8+j] & 0x7f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x7f) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x7f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x7f) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x7f) << 26;
		des[8+j] = (src[24+j] & 0x7f) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x7f) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 0x7f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 0x7f) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 0x7f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 0x7f) << 29;
		des[12+j] = (src[44+j] & 0x7f) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[48+j] & 0x7f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[52+j] & 0x7f) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[56+j] & 0x7f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[60+j] & 0x7f) << 25;
	}
}

template<typename T>
void KVSE_pack_16len_7bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7f) << 31;
		des[4+j] = (src[4+j] & 0x7f) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x7f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x7f) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x7f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x7f) << 27;
		des[8+j] = (src[20+j] & 0x7f) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x7f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x7f) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 0x7f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 0x7f) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 0x7f) << 30;
		des[12+j] = (src[40+j] & 0x7f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 0x7f) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[48+j] & 0x7f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[52+j] & 0x7f) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[56+j] & 0x7f) << 26;
		des[16+j] = (src[56+j] & 0x7f) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[60+j] & 0x7f) << 1;
	}
}

template<typename T>
void KVSE_pack_16len_8bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[16+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[32+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[48+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[52+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[56+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[60+j] & 0xff) << 24;
	}
}

template<typename T>
void KVSE_pack_16len_8bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[12+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[28+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[44+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[48+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[52+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[56+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[60+j] & 0xff);
	}
}

template<typename T>
void KVSE_pack_16len_8bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[8+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[24+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[40+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[48+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[52+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[56+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[60+j] & 0xff) << 8;
	}
}

template<typename T>
void KVSE_pack_16len_8bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[20+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[36+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[48+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[52+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[56+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[60+j] & 0xff) << 16;
	}
}

template<typename T>
void KVSE_pack_16len_9bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x1ff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1ff) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x1ff) << 27;
		des[4+j] = (src[12+j] & 0x1ff) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x1ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x1ff) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x1ff) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x1ff) << 31;
		des[8+j] = (src[28+j] & 0x1ff) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 0x1ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 0x1ff) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 0x1ff) << 26;
		des[12+j] = (src[40+j] & 0x1ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 0x1ff) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[48+j] & 0x1ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[52+j] & 0x1ff) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[56+j] & 0x1ff) << 30;
		des[16+j] = (src[56+j] & 0x1ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[60+j] & 0x1ff) << 7;
	}
}

template<typename T>
void KVSE_pack_16len_9bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1ff) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1ff) << 26;
		des[4+j] = (src[8+j] & 0x1ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x1ff) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x1ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x1ff) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x1ff) << 30;
		des[8+j] = (src[24+j] & 0x1ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x1ff) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 0x1ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 0x1ff) << 25;
		des[12+j] = (src[36+j] & 0x1ff) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 0x1ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 0x1ff) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[48+j] & 0x1ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[52+j] & 0x1ff) << 29;
		des[16+j] = (src[52+j] & 0x1ff) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[56+j] & 0x1ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[60+j] & 0x1ff) << 15;
	}
}

template<typename T>
void KVSE_pack_16len_9bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1ff) << 25;
		des[4+j] = (src[4+j] & 0x1ff) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x1ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x1ff) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x1ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x1ff) << 29;
		des[8+j] = (src[20+j] & 0x1ff) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x1ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x1ff) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 0x1ff) << 24;
		des[12+j] = (src[32+j] & 0x1ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 0x1ff) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 0x1ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 0x1ff) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[48+j] & 0x1ff) << 28;
		des[16+j] = (src[48+j] & 0x1ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 0x1ff) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[56+j] & 0x1ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[60+j] & 0x1ff) << 23;
	}
}

template<typename T>
void KVSE_pack_16len_9bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1ff) << 24;
		des[4+j] = (src[j] & 0x1ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0x1ff) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x1ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x1ff) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x1ff) << 28;
		des[8+j] = (src[16+j] & 0x1ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0x1ff) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x1ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x1ff) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[32+j] & 0x1ff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 0x1ff) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 0x1ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 0x1ff) << 27;
		des[16+j] = (src[44+j] & 0x1ff) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[48+j] & 0x1ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 0x1ff) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[56+j] & 0x1ff) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[60+j] & 0x1ff) << 31;
		des[20+j] = (src[60+j] & 0x1ff) >> 1;
	}
}

template<typename T>
void KVSE_pack_16len_10bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x3ff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x3ff) << 30;
		des[4+j] = (src[12+j] & 0x3ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x3ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x3ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x3ff) << 28;
		des[8+j] = (src[24+j] & 0x3ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x3ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 0x3ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 0x3ff) << 26;
		des[12+j] = (src[36+j] & 0x3ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 0x3ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 0x3ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[48+j] & 0x3ff) << 24;
		des[16+j] = (src[48+j] & 0x3ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 0x3ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[56+j] & 0x3ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[60+j] & 0x3ff) << 22;
	}
}

template<typename T>
void KVSE_pack_16len_10bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3ff) << 28;
		des[4+j] = (src[8+j] & 0x3ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x3ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x3ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x3ff) << 26;
		des[8+j] = (src[20+j] & 0x3ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x3ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x3ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 0x3ff) << 24;
		des[12+j] = (src[32+j] & 0x3ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 0x3ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 0x3ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 0x3ff) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[48+j] & 0x3ff);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 0x3ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[56+j] & 0x3ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[60+j] & 0x3ff) << 30;
		des[20+j] = (src[60+j] & 0x3ff) >> 2;
	}
}

template<typename T>
void KVSE_pack_16len_10bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3ff) << 26;
		des[4+j] = (src[4+j] & 0x3ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x3ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x3ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x3ff) << 24;
		des[8+j] = (src[16+j] & 0x3ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0x3ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x3ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x3ff) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[32+j] & 0x3ff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 0x3ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 0x3ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 0x3ff) << 30;
		des[16+j] = (src[44+j] & 0x3ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[48+j] & 0x3ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 0x3ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[56+j] & 0x3ff) << 28;
		des[20+j] = (src[56+j] & 0x3ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[60+j] & 0x3ff) << 6;
	}
}

template<typename T>
void KVSE_pack_16len_10bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3ff) << 24;
		des[4+j] = (src[j] & 0x3ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0x3ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x3ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x3ff) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[16+j] & 0x3ff);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0x3ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x3ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x3ff) << 30;
		des[12+j] = (src[28+j] & 0x3ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[32+j] & 0x3ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 0x3ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 0x3ff) << 28;
		des[16+j] = (src[40+j] & 0x3ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 0x3ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[48+j] & 0x3ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 0x3ff) << 26;
		des[20+j] = (src[52+j] & 0x3ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[56+j] & 0x3ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[60+j] & 0x3ff) << 14;
	}
}

template<typename T>
void KVSE_pack_16len_11bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x7ff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7ff) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7ff) << 22;
		des[4+j] = (src[8+j] & 0x7ff) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x7ff) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x7ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x7ff) << 23;
		des[8+j] = (src[20+j] & 0x7ff) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x7ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x7ff) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 0x7ff) << 24;
		des[12+j] = (src[32+j] & 0x7ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 0x7ff) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 0x7ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 0x7ff) << 25;
		des[16+j] = (src[44+j] & 0x7ff) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[48+j] & 0x7ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 0x7ff) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[56+j] & 0x7ff) << 26;
		des[20+j] = (src[56+j] & 0x7ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[60+j] & 0x7ff) << 5;
	}
}

template<typename T>
void KVSE_pack_16len_11bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7ff) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7ff) << 30;
		des[4+j] = (src[8+j] & 0x7ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x7ff) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x7ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x7ff) << 31;
		des[8+j] = (src[20+j] & 0x7ff) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x7ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x7ff) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[32+j] & 0x7ff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 0x7ff) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 0x7ff) << 22;
		des[16+j] = (src[40+j] & 0x7ff) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 0x7ff) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[48+j] & 0x7ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 0x7ff) << 23;
		des[20+j] = (src[52+j] & 0x7ff) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[56+j] & 0x7ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[60+j] & 0x7ff) << 13;
	}
}

template<typename T>
void KVSE_pack_16len_11bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7ff) << 27;
		des[4+j] = (src[4+j] & 0x7ff) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x7ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x7ff) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x7ff) << 28;
		des[8+j] = (src[16+j] & 0x7ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0x7ff) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x7ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x7ff) << 29;
		des[12+j] = (src[28+j] & 0x7ff) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[32+j] & 0x7ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 0x7ff) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 0x7ff) << 30;
		des[16+j] = (src[40+j] & 0x7ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 0x7ff) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[48+j] & 0x7ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 0x7ff) << 31;
		des[20+j] = (src[52+j] & 0x7ff) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[56+j] & 0x7ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[60+j] & 0x7ff) << 21;
	}
}

template<typename T>
void KVSE_pack_16len_11bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7ff) << 24;
		des[4+j] = (src[j] & 0x7ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0x7ff) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x7ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x7ff) << 25;
		des[8+j] = (src[12+j] & 0x7ff) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 0x7ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0x7ff) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x7ff) << 26;
		des[12+j] = (src[24+j] & 0x7ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 0x7ff) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[32+j] & 0x7ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 0x7ff) << 27;
		des[16+j] = (src[36+j] & 0x7ff) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[40+j] & 0x7ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 0x7ff) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[48+j] & 0x7ff) << 28;
		des[20+j] = (src[48+j] & 0x7ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[52+j] & 0x7ff) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[56+j] & 0x7ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[60+j] & 0x7ff) << 29;
		des[24+j] = (src[60+j] & 0x7ff) >> 3;
	}
}

template<typename T>
void KVSE_pack_16len_12bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0xfff) << 24;
		des[4+j] = (src[8+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0xfff) << 28;
		des[8+j] = (src[20+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[32+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 0xfff) << 24;
		des[16+j] = (src[40+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[48+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 0xfff) << 28;
		des[20+j] = (src[52+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[56+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[60+j] & 0xfff) << 20;
	}
}

template<typename T>
void KVSE_pack_16len_12bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[8+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0xfff) << 24;
		des[8+j] = (src[16+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0xfff) << 28;
		des[12+j] = (src[28+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[32+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[40+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[48+j] & 0xfff) << 24;
		des[20+j] = (src[48+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[52+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[56+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[60+j] & 0xfff) << 28;
		des[24+j] = (src[60+j] & 0xfff) >> 4;
	}
}

template<typename T>
void KVSE_pack_16len_12bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xfff) << 28;
		des[4+j] = (src[4+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[16+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0xfff) << 24;
		des[12+j] = (src[24+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[32+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 0xfff) << 28;
		des[16+j] = (src[36+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[40+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[48+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[52+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[56+j] & 0xfff) << 24;
		des[24+j] = (src[56+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[60+j] & 0xfff) << 4;
	}
}

template<typename T>
void KVSE_pack_16len_12bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xfff) << 24;
		des[4+j] = (src[j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xfff) << 28;
		des[8+j] = (src[12+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[24+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[32+j] & 0xfff) << 24;
		des[16+j] = (src[32+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[36+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[40+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 0xfff) << 28;
		des[20+j] = (src[44+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[48+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[52+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[56+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[60+j] & 0xfff) << 12;
	}
}

template<typename T>
void KVSE_pack_16len_16bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[8+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[16+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[24+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[32+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[36+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[40+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[44+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[48+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[52+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[56+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[60+j] & 0xffff) << 16;
	}
}

template<typename T>
void KVSE_pack_16len_16bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xffff) << 24;
		des[4+j] = (src[4+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xffff) << 24;
		des[8+j] = (src[12+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0xffff) << 24;
		des[12+j] = (src[20+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 0xffff) << 24;
		des[16+j] = (src[28+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[32+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[36+j] & 0xffff) << 24;
		des[20+j] = (src[36+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[40+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[44+j] & 0xffff) << 24;
		des[24+j] = (src[44+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[48+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[52+j] & 0xffff) << 24;
		des[28+j] = (src[52+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[56+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[60+j] & 0xffff) << 24;
		des[32+j] = (src[60+j] & 0xffff) >> 8;
	}
}

template<typename T>
void KVSE_pack_16len_16bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[12+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[20+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[28+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[32+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[36+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[40+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[44+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[48+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[52+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[56+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[60+j] & 0xffff);
	}
}

template<typename T>
void KVSE_pack_16len_16bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xffff) << 24;
		des[4+j] = (src[j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xffff) << 24;
		des[8+j] = (src[8+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 0xffff) << 24;
		des[12+j] = (src[16+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 0xffff) << 24;
		des[16+j] = (src[24+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[32+j] & 0xffff) << 24;
		des[20+j] = (src[32+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[36+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[40+j] & 0xffff) << 24;
		des[24+j] = (src[40+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[44+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[48+j] & 0xffff) << 24;
		des[28+j] = (src[48+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[52+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[56+j] & 0xffff) << 24;
		des[32+j] = (src[56+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[60+j] & 0xffff) << 8;
	}
}

template<typename T>
void KVSE_pack_16len_20bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xfffff) << 20;
		des[4+j] = (src[4+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xfffff) << 28;
		des[8+j] = (src[12+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 0xfffff) << 16;
		des[12+j] = (src[16+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 0xfffff) << 24;
		des[16+j] = (src[24+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[32+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[36+j] & 0xfffff) << 20;
		des[24+j] = (src[36+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[40+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[44+j] & 0xfffff) << 28;
		des[28+j] = (src[44+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[48+j] & 0xfffff) << 16;
		des[32+j] = (src[48+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[52+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[56+j] & 0xfffff) << 24;
		des[36+j] = (src[56+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[60+j] & 0xfffff) << 12;
	}
}

template<typename T>
void KVSE_pack_16len_20bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xfffff) << 28;
		des[4+j] = (src[4+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xfffff) << 16;
		des[8+j] = (src[8+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 0xfffff) << 24;
		des[12+j] = (src[16+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[24+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 0xfffff) << 20;
		des[20+j] = (src[28+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[32+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[36+j] & 0xfffff) << 28;
		des[24+j] = (src[36+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[40+j] & 0xfffff) << 16;
		des[28+j] = (src[40+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[44+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[48+j] & 0xfffff) << 24;
		des[32+j] = (src[48+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[52+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[56+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[60+j] & 0xfffff) << 20;
		des[40+j] = (src[60+j] & 0xfffff) >> 12;
	}
}

template<typename T>
void KVSE_pack_16len_20bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xfffff) << 16;
		des[4+j] = (src[j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xfffff) << 24;
		des[8+j] = (src[8+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[16+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 0xfffff) << 20;
		des[16+j] = (src[20+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 0xfffff) << 28;
		des[20+j] = (src[28+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[32+j] & 0xfffff) << 16;
		des[24+j] = (src[32+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[36+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[40+j] & 0xfffff) << 24;
		des[28+j] = (src[40+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[44+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[48+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[52+j] & 0xfffff) << 20;
		des[36+j] = (src[52+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[56+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[60+j] & 0xfffff) << 28;
		des[40+j] = (src[60+j] & 0xfffff) >> 4;
	}
}

template<typename T>
void KVSE_pack_16len_20bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xfffff) << 24;
		des[4+j] = (src[j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 0xfffff) << 20;
		des[12+j] = (src[12+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 0xfffff) << 28;
		des[16+j] = (src[20+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 0xfffff) << 16;
		des[20+j] = (src[24+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[32+j] & 0xfffff) << 24;
		des[24+j] = (src[32+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[36+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[40+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[44+j] & 0xfffff) << 20;
		des[32+j] = (src[44+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[48+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[52+j] & 0xfffff) << 28;
		des[36+j] = (src[52+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[56+j] & 0xfffff) << 16;
		des[40+j] = (src[56+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[60+j] & 0xfffff) << 4;
	}
}

template<typename T>
void KVSE_pack_16len_32bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j]);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j]);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j]);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j]);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[16+j]);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[20+j]);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[24+j]);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[28+j]);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[32+j]);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[36+j]);
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[40+j]);
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[44+j]);
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[48+j]);
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[52+j]);
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[56+j]);
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[60+j]);
	}
}

template<typename T>
void KVSE_pack_16len_32bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j]) << 8;
		des[4+j] = (src[j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j]) << 8;
		des[8+j] = (src[4+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j]) << 8;
		des[12+j] = (src[8+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j]) << 8;
		des[16+j] = (src[12+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[16+j]) << 8;
		des[20+j] = (src[16+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[20+j]) << 8;
		des[24+j] = (src[20+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[24+j]) << 8;
		des[28+j] = (src[24+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[28+j]) << 8;
		des[32+j] = (src[28+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[32+j]) << 8;
		des[36+j] = (src[32+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[36+j]) << 8;
		des[40+j] = (src[36+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[40+j]) << 8;
		des[44+j] = (src[40+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[44+j]) << 8;
		des[48+j] = (src[44+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[48+j]) << 8;
		des[52+j] = (src[48+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[52+j]) << 8;
		des[56+j] = (src[52+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[56+j]) << 8;
		des[60+j] = (src[56+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[60+j]) << 8;
		des[64+j] = (src[60+j]) >> 24;
	}
}

template<typename T>
void KVSE_pack_16len_32bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j]) << 16;
		des[4+j] = (src[j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j]) << 16;
		des[8+j] = (src[4+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j]) << 16;
		des[12+j] = (src[8+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j]) << 16;
		des[16+j] = (src[12+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[16+j]) << 16;
		des[20+j] = (src[16+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[20+j]) << 16;
		des[24+j] = (src[20+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[24+j]) << 16;
		des[28+j] = (src[24+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[28+j]) << 16;
		des[32+j] = (src[28+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[32+j]) << 16;
		des[36+j] = (src[32+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[36+j]) << 16;
		des[40+j] = (src[36+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[40+j]) << 16;
		des[44+j] = (src[40+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[44+j]) << 16;
		des[48+j] = (src[44+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[48+j]) << 16;
		des[52+j] = (src[48+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[52+j]) << 16;
		des[56+j] = (src[52+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[56+j]) << 16;
		des[60+j] = (src[56+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[60+j]) << 16;
		des[64+j] = (src[60+j]) >> 16;
	}
}

template<typename T>
void KVSE_pack_16len_32bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j]) << 24;
		des[4+j] = (src[j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j]) << 24;
		des[8+j] = (src[4+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j]) << 24;
		des[12+j] = (src[8+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j]) << 24;
		des[16+j] = (src[12+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[16+j]) << 24;
		des[20+j] = (src[16+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[20+j]) << 24;
		des[24+j] = (src[20+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[24+j]) << 24;
		des[28+j] = (src[24+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[28+j]) << 24;
		des[32+j] = (src[28+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[32+j]) << 24;
		des[36+j] = (src[32+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[36+j]) << 24;
		des[40+j] = (src[36+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[40+j]) << 24;
		des[44+j] = (src[40+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[44+j]) << 24;
		des[48+j] = (src[44+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[48+j]) << 24;
		des[52+j] = (src[48+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[52+j]) << 24;
		des[56+j] = (src[52+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[56+j]) << 24;
		des[60+j] = (src[56+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[60+j]) << 24;
		des[64+j] = (src[60+j]) >> 8;
	}
}

template<typename T>
void KVSE_pack_32len_0bw_0offset(T * des, const uint32_t *src) {
}

template<typename T>
void KVSE_pack_32len_0bw_8offset(T * des, const uint32_t *src) {
}

template<typename T>
void KVSE_pack_32len_0bw_16offset(T * des, const uint32_t *src) {
}

template<typename T>
void KVSE_pack_32len_0bw_24offset(T * des, const uint32_t *src) {
}

template<typename T>
void KVSE_pack_32len_1bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x1);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x1) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x1) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x1) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x1) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0x1) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[32+j] & 0x1) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[36+j] & 0x1) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[40+j] & 0x1) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[44+j] & 0x1) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[48+j] & 0x1) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[52+j] & 0x1) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[56+j] & 0x1) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[60+j] & 0x1) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[64+j] & 0x1) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[68+j] & 0x1) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[72+j] & 0x1) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[76+j] & 0x1) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[80+j] & 0x1) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[84+j] & 0x1) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[88+j] & 0x1) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[92+j] & 0x1) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[96+j] & 0x1) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[100+j] & 0x1) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[104+j] & 0x1) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[108+j] & 0x1) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[112+j] & 0x1) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[116+j] & 0x1) << 29;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[120+j] & 0x1) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[124+j] & 0x1) << 31;
	}
}

template<typename T>
void KVSE_pack_32len_1bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x1) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x1) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x1) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x1) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0x1) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[32+j] & 0x1) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[36+j] & 0x1) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[40+j] & 0x1) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[44+j] & 0x1) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[48+j] & 0x1) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[52+j] & 0x1) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[56+j] & 0x1) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[60+j] & 0x1) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[64+j] & 0x1) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[68+j] & 0x1) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[72+j] & 0x1) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[76+j] & 0x1) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[80+j] & 0x1) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[84+j] & 0x1) << 29;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[88+j] & 0x1) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[92+j] & 0x1) << 31;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[96+j] & 0x1);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[100+j] & 0x1) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[104+j] & 0x1) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[108+j] & 0x1) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[112+j] & 0x1) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[116+j] & 0x1) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[120+j] & 0x1) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[124+j] & 0x1) << 7;
	}
}

template<typename T>
void KVSE_pack_32len_1bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x1) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x1) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x1) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x1) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0x1) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[32+j] & 0x1) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[36+j] & 0x1) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[40+j] & 0x1) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[44+j] & 0x1) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[48+j] & 0x1) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[52+j] & 0x1) << 29;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[56+j] & 0x1) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[60+j] & 0x1) << 31;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[64+j] & 0x1);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[68+j] & 0x1) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[72+j] & 0x1) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[76+j] & 0x1) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[80+j] & 0x1) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[84+j] & 0x1) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[88+j] & 0x1) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[92+j] & 0x1) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[96+j] & 0x1) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[100+j] & 0x1) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[104+j] & 0x1) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[108+j] & 0x1) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[112+j] & 0x1) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[116+j] & 0x1) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[120+j] & 0x1) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[124+j] & 0x1) << 15;
	}
}

template<typename T>
void KVSE_pack_32len_1bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x1) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x1) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x1) << 29;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x1) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0x1) << 31;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[32+j] & 0x1);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0x1) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 0x1) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 0x1) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 0x1) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 0x1) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[56+j] & 0x1) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[60+j] & 0x1) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[64+j] & 0x1) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[68+j] & 0x1) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[72+j] & 0x1) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[76+j] & 0x1) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[80+j] & 0x1) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[84+j] & 0x1) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[88+j] & 0x1) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[92+j] & 0x1) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[96+j] & 0x1) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[100+j] & 0x1) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[104+j] & 0x1) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[108+j] & 0x1) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[112+j] & 0x1) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[116+j] & 0x1) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[120+j] & 0x1) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[124+j] & 0x1) << 23;
	}
}

template<typename T>
void KVSE_pack_32len_2bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x3);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x3) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x3) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x3) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0x3) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[32+j] & 0x3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[36+j] & 0x3) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[40+j] & 0x3) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[44+j] & 0x3) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[48+j] & 0x3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[52+j] & 0x3) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[56+j] & 0x3) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[60+j] & 0x3) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[64+j] & 0x3);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[68+j] & 0x3) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[72+j] & 0x3) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[76+j] & 0x3) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[80+j] & 0x3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[84+j] & 0x3) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[88+j] & 0x3) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[92+j] & 0x3) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[96+j] & 0x3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[100+j] & 0x3) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[104+j] & 0x3) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[108+j] & 0x3) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[112+j] & 0x3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[116+j] & 0x3) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[120+j] & 0x3) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[124+j] & 0x3) << 30;
	}
}

template<typename T>
void KVSE_pack_32len_2bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x3) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x3) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x3) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0x3) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[32+j] & 0x3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[36+j] & 0x3) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[40+j] & 0x3) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[44+j] & 0x3) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[48+j] & 0x3);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 0x3) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[56+j] & 0x3) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[60+j] & 0x3) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[64+j] & 0x3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[68+j] & 0x3) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[72+j] & 0x3) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[76+j] & 0x3) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[80+j] & 0x3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[84+j] & 0x3) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[88+j] & 0x3) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[92+j] & 0x3) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[96+j] & 0x3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[100+j] & 0x3) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[104+j] & 0x3) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[108+j] & 0x3) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[112+j] & 0x3);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[116+j] & 0x3) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[120+j] & 0x3) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[124+j] & 0x3) << 6;
	}
}

template<typename T>
void KVSE_pack_32len_2bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x3) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x3) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x3) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0x3) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[32+j] & 0x3);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0x3) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 0x3) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 0x3) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 0x3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 0x3) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[56+j] & 0x3) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[60+j] & 0x3) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[64+j] & 0x3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[68+j] & 0x3) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[72+j] & 0x3) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[76+j] & 0x3) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[80+j] & 0x3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[84+j] & 0x3) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[88+j] & 0x3) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[92+j] & 0x3) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[96+j] & 0x3);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[100+j] & 0x3) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[104+j] & 0x3) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[108+j] & 0x3) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[112+j] & 0x3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[116+j] & 0x3) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[120+j] & 0x3) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[124+j] & 0x3) << 14;
	}
}

template<typename T>
void KVSE_pack_32len_2bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x3) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[16+j] & 0x3);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x3) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x3) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x3) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 0x3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0x3) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 0x3) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 0x3) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 0x3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 0x3) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[56+j] & 0x3) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[60+j] & 0x3) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[64+j] & 0x3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[68+j] & 0x3) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[72+j] & 0x3) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[76+j] & 0x3) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[80+j] & 0x3);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[84+j] & 0x3) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[88+j] & 0x3) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[92+j] & 0x3) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[96+j] & 0x3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[100+j] & 0x3) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[104+j] & 0x3) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[108+j] & 0x3) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[112+j] & 0x3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[116+j] & 0x3) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[120+j] & 0x3) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[124+j] & 0x3) << 22;
	}
}

template<typename T>
void KVSE_pack_32len_3bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x7);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x7) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x7) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x7) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x7) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0x7) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[32+j] & 0x7) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[36+j] & 0x7) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[40+j] & 0x7) << 30;
		des[4+j] = (src[40+j] & 0x7) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 0x7) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 0x7) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 0x7) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[56+j] & 0x7) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[60+j] & 0x7) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[64+j] & 0x7) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[68+j] & 0x7) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[72+j] & 0x7) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[76+j] & 0x7) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[80+j] & 0x7) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[84+j] & 0x7) << 31;
		des[8+j] = (src[84+j] & 0x7) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[88+j] & 0x7) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[92+j] & 0x7) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[96+j] & 0x7) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[100+j] & 0x7) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[104+j] & 0x7) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[108+j] & 0x7) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[112+j] & 0x7) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[116+j] & 0x7) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[120+j] & 0x7) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[124+j] & 0x7) << 29;
	}
}

template<typename T>
void KVSE_pack_32len_3bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x7) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x7) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x7) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x7) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0x7) << 29;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[32+j] & 0x7);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0x7) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 0x7) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 0x7) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 0x7) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 0x7) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[56+j] & 0x7) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[60+j] & 0x7) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[64+j] & 0x7) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[68+j] & 0x7) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[72+j] & 0x7) << 30;
		des[8+j] = (src[72+j] & 0x7) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[76+j] & 0x7) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[80+j] & 0x7) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[84+j] & 0x7) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[88+j] & 0x7) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[92+j] & 0x7) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[96+j] & 0x7) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[100+j] & 0x7) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[104+j] & 0x7) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[108+j] & 0x7) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[112+j] & 0x7) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[116+j] & 0x7) << 31;
		des[12+j] = (src[116+j] & 0x7) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[120+j] & 0x7) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[124+j] & 0x7) << 5;
	}
}

template<typename T>
void KVSE_pack_32len_3bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x7) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x7) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x7) << 31;
		des[4+j] = (src[20+j] & 0x7) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x7) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x7) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 0x7) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0x7) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 0x7) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 0x7) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 0x7) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 0x7) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[56+j] & 0x7) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[60+j] & 0x7) << 29;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[64+j] & 0x7);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[68+j] & 0x7) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[72+j] & 0x7) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[76+j] & 0x7) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[80+j] & 0x7) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[84+j] & 0x7) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[88+j] & 0x7) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[92+j] & 0x7) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[96+j] & 0x7) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[100+j] & 0x7) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[104+j] & 0x7) << 30;
		des[12+j] = (src[104+j] & 0x7) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[108+j] & 0x7) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[112+j] & 0x7) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[116+j] & 0x7) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[120+j] & 0x7) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[124+j] & 0x7) << 13;
	}
}

template<typename T>
void KVSE_pack_32len_3bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7) << 30;
		des[4+j] = (src[8+j] & 0x7) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x7) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x7) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x7) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x7) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x7) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 0x7) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0x7) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 0x7) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 0x7) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 0x7) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 0x7) << 31;
		des[8+j] = (src[52+j] & 0x7) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[56+j] & 0x7) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[60+j] & 0x7) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[64+j] & 0x7) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[68+j] & 0x7) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[72+j] & 0x7) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[76+j] & 0x7) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[80+j] & 0x7) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[84+j] & 0x7) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[88+j] & 0x7) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[92+j] & 0x7) << 29;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[96+j] & 0x7);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[100+j] & 0x7) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[104+j] & 0x7) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[108+j] & 0x7) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[112+j] & 0x7) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[116+j] & 0x7) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[120+j] & 0x7) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[124+j] & 0x7) << 21;
	}
}

template<typename T>
void KVSE_pack_32len_4bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[32+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[56+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[60+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[64+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[68+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[72+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[76+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[80+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[84+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[88+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[92+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[96+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[100+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[104+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[108+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[112+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[116+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[120+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[124+j] & 0xf) << 28;
	}
}

template<typename T>
void KVSE_pack_32len_4bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[24+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[56+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[60+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[64+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[68+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[72+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[76+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[80+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[84+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[88+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[92+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[96+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[100+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[104+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[108+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[112+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[116+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[120+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[124+j] & 0xf) << 4;
	}
}

template<typename T>
void KVSE_pack_32len_4bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[16+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[48+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[56+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[60+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[64+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[68+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[72+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[76+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[80+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[84+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[88+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[92+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[96+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[100+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[104+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[108+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[112+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[116+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[120+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[124+j] & 0xf) << 12;
	}
}

template<typename T>
void KVSE_pack_32len_4bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[8+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[40+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[48+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[56+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[60+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[64+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[68+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[72+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[76+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[80+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[84+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[88+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[92+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[96+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[100+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[104+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[108+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[112+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[116+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[120+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[124+j] & 0xf) << 20;
	}
}

template<typename T>
void KVSE_pack_32len_5bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x1f);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1f) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x1f) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x1f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x1f) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x1f) << 30;
		des[4+j] = (src[24+j] & 0x1f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x1f) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 0x1f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0x1f) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 0x1f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 0x1f) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 0x1f) << 28;
		des[8+j] = (src[48+j] & 0x1f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 0x1f) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[56+j] & 0x1f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[60+j] & 0x1f) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[64+j] & 0x1f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[68+j] & 0x1f) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[72+j] & 0x1f) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[76+j] & 0x1f) << 31;
		des[12+j] = (src[76+j] & 0x1f) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[80+j] & 0x1f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[84+j] & 0x1f) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[88+j] & 0x1f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[92+j] & 0x1f) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[96+j] & 0x1f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[100+j] & 0x1f) << 29;
		des[16+j] = (src[100+j] & 0x1f) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[104+j] & 0x1f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[108+j] & 0x1f) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[112+j] & 0x1f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[116+j] & 0x1f) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[120+j] & 0x1f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[124+j] & 0x1f) << 27;
	}
}

template<typename T>
void KVSE_pack_32len_5bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1f) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x1f) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x1f) << 28;
		des[4+j] = (src[16+j] & 0x1f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x1f) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x1f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x1f) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 0x1f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0x1f) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 0x1f) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 0x1f) << 31;
		des[8+j] = (src[44+j] & 0x1f) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[48+j] & 0x1f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 0x1f) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[56+j] & 0x1f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[60+j] & 0x1f) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[64+j] & 0x1f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[68+j] & 0x1f) << 29;
		des[12+j] = (src[68+j] & 0x1f) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[72+j] & 0x1f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[76+j] & 0x1f) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[80+j] & 0x1f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[84+j] & 0x1f) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[88+j] & 0x1f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[92+j] & 0x1f) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[96+j] & 0x1f);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[100+j] & 0x1f) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[104+j] & 0x1f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[108+j] & 0x1f) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[112+j] & 0x1f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[116+j] & 0x1f) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[120+j] & 0x1f) << 30;
		des[20+j] = (src[120+j] & 0x1f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[124+j] & 0x1f) << 3;
	}
}

template<typename T>
void KVSE_pack_32len_5bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1f) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1f) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x1f) << 31;
		des[4+j] = (src[12+j] & 0x1f) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x1f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x1f) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x1f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x1f) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 0x1f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0x1f) << 29;
		des[8+j] = (src[36+j] & 0x1f) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 0x1f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 0x1f) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[48+j] & 0x1f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 0x1f) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[56+j] & 0x1f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[60+j] & 0x1f) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[64+j] & 0x1f);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[68+j] & 0x1f) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[72+j] & 0x1f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[76+j] & 0x1f) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[80+j] & 0x1f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[84+j] & 0x1f) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[88+j] & 0x1f) << 30;
		des[16+j] = (src[88+j] & 0x1f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[92+j] & 0x1f) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[96+j] & 0x1f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[100+j] & 0x1f) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[104+j] & 0x1f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[108+j] & 0x1f) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[112+j] & 0x1f) << 28;
		des[20+j] = (src[112+j] & 0x1f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[116+j] & 0x1f) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[120+j] & 0x1f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[124+j] & 0x1f) << 11;
	}
}

template<typename T>
void KVSE_pack_32len_5bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1f) << 29;
		des[4+j] = (src[4+j] & 0x1f) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x1f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x1f) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x1f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x1f) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x1f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x1f) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[32+j] & 0x1f);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 0x1f) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 0x1f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 0x1f) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[48+j] & 0x1f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 0x1f) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[56+j] & 0x1f) << 30;
		des[12+j] = (src[56+j] & 0x1f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[60+j] & 0x1f) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[64+j] & 0x1f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[68+j] & 0x1f) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[72+j] & 0x1f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[76+j] & 0x1f) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[80+j] & 0x1f) << 28;
		des[16+j] = (src[80+j] & 0x1f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[84+j] & 0x1f) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[88+j] & 0x1f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[92+j] & 0x1f) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[96+j] & 0x1f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[100+j] & 0x1f) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[104+j] & 0x1f) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[108+j] & 0x1f) << 31;
		des[20+j] = (src[108+j] & 0x1f) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[112+j] & 0x1f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[116+j] & 0x1f) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[120+j] & 0x1f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[124+j] & 0x1f) << 19;
	}
}

template<typename T>
void KVSE_pack_32len_6bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x3f);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x3f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x3f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x3f) << 30;
		des[4+j] = (src[20+j] & 0x3f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x3f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x3f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 0x3f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0x3f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 0x3f) << 28;
		des[8+j] = (src[40+j] & 0x3f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 0x3f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[48+j] & 0x3f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 0x3f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[56+j] & 0x3f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[60+j] & 0x3f) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[64+j] & 0x3f);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[68+j] & 0x3f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[72+j] & 0x3f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[76+j] & 0x3f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[80+j] & 0x3f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[84+j] & 0x3f) << 30;
		des[16+j] = (src[84+j] & 0x3f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[88+j] & 0x3f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[92+j] & 0x3f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[96+j] & 0x3f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[100+j] & 0x3f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[104+j] & 0x3f) << 28;
		des[20+j] = (src[104+j] & 0x3f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[108+j] & 0x3f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[112+j] & 0x3f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[116+j] & 0x3f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[120+j] & 0x3f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[124+j] & 0x3f) << 26;
	}
}

template<typename T>
void KVSE_pack_32len_6bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x3f) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[16+j] & 0x3f);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x3f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x3f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x3f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 0x3f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0x3f) << 30;
		des[8+j] = (src[36+j] & 0x3f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 0x3f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 0x3f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[48+j] & 0x3f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 0x3f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[56+j] & 0x3f) << 28;
		des[12+j] = (src[56+j] & 0x3f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[60+j] & 0x3f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[64+j] & 0x3f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[68+j] & 0x3f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[72+j] & 0x3f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[76+j] & 0x3f) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[80+j] & 0x3f);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[84+j] & 0x3f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[88+j] & 0x3f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[92+j] & 0x3f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[96+j] & 0x3f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[100+j] & 0x3f) << 30;
		des[20+j] = (src[100+j] & 0x3f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[104+j] & 0x3f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[108+j] & 0x3f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[112+j] & 0x3f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[116+j] & 0x3f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[120+j] & 0x3f) << 28;
		des[24+j] = (src[120+j] & 0x3f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[124+j] & 0x3f) << 2;
	}
}

template<typename T>
void KVSE_pack_32len_6bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3f) << 28;
		des[4+j] = (src[8+j] & 0x3f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x3f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x3f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x3f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x3f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x3f) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[32+j] & 0x3f);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 0x3f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 0x3f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 0x3f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[48+j] & 0x3f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 0x3f) << 30;
		des[12+j] = (src[52+j] & 0x3f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[56+j] & 0x3f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[60+j] & 0x3f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[64+j] & 0x3f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[68+j] & 0x3f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[72+j] & 0x3f) << 28;
		des[16+j] = (src[72+j] & 0x3f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[76+j] & 0x3f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[80+j] & 0x3f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[84+j] & 0x3f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[88+j] & 0x3f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[92+j] & 0x3f) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[96+j] & 0x3f);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[100+j] & 0x3f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[104+j] & 0x3f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[108+j] & 0x3f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[112+j] & 0x3f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[116+j] & 0x3f) << 30;
		des[24+j] = (src[116+j] & 0x3f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[120+j] & 0x3f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[124+j] & 0x3f) << 10;
	}
}

template<typename T>
void KVSE_pack_32len_6bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3f) << 30;
		des[4+j] = (src[4+j] & 0x3f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x3f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x3f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x3f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x3f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x3f) << 28;
		des[8+j] = (src[24+j] & 0x3f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x3f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 0x3f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 0x3f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 0x3f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 0x3f) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[48+j] & 0x3f);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[52+j] & 0x3f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[56+j] & 0x3f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[60+j] & 0x3f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[64+j] & 0x3f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[68+j] & 0x3f) << 30;
		des[16+j] = (src[68+j] & 0x3f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[72+j] & 0x3f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[76+j] & 0x3f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[80+j] & 0x3f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[84+j] & 0x3f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[88+j] & 0x3f) << 28;
		des[20+j] = (src[88+j] & 0x3f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[92+j] & 0x3f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[96+j] & 0x3f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[100+j] & 0x3f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[104+j] & 0x3f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[108+j] & 0x3f) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[112+j] & 0x3f);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[116+j] & 0x3f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[120+j] & 0x3f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[124+j] & 0x3f) << 18;
	}
}

template<typename T>
void KVSE_pack_32len_7bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x7f);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7f) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x7f) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x7f) << 28;
		des[4+j] = (src[16+j] & 0x7f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x7f) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x7f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x7f) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 0x7f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0x7f) << 31;
		des[8+j] = (src[36+j] & 0x7f) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 0x7f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 0x7f) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[48+j] & 0x7f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 0x7f) << 27;
		des[12+j] = (src[52+j] & 0x7f) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[56+j] & 0x7f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[60+j] & 0x7f) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[64+j] & 0x7f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[68+j] & 0x7f) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[72+j] & 0x7f) << 30;
		des[16+j] = (src[72+j] & 0x7f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[76+j] & 0x7f) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[80+j] & 0x7f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[84+j] & 0x7f) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[88+j] & 0x7f) << 26;
		des[20+j] = (src[88+j] & 0x7f) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[92+j] & 0x7f) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[96+j] & 0x7f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[100+j] & 0x7f) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[104+j] & 0x7f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[108+j] & 0x7f) << 29;
		des[24+j] = (src[108+j] & 0x7f) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[112+j] & 0x7f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[116+j] & 0x7f) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[120+j] & 0x7f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[124+j] & 0x7f) << 25;
	}
}

template<typename T>
void KVSE_pack_32len_7bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7f) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x7f) << 29;
		des[4+j] = (src[12+j] & 0x7f) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x7f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x7f) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x7f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x7f) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[32+j] & 0x7f);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 0x7f) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 0x7f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 0x7f) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[48+j] & 0x7f) << 28;
		des[12+j] = (src[48+j] & 0x7f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[52+j] & 0x7f) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[56+j] & 0x7f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[60+j] & 0x7f) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[64+j] & 0x7f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[68+j] & 0x7f) << 31;
		des[16+j] = (src[68+j] & 0x7f) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[72+j] & 0x7f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[76+j] & 0x7f) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[80+j] & 0x7f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[84+j] & 0x7f) << 27;
		des[20+j] = (src[84+j] & 0x7f) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[88+j] & 0x7f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[92+j] & 0x7f) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[96+j] & 0x7f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[100+j] & 0x7f) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[104+j] & 0x7f) << 30;
		des[24+j] = (src[104+j] & 0x7f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[108+j] & 0x7f) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[112+j] & 0x7f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[116+j] & 0x7f) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[120+j] & 0x7f) << 26;
		des[28+j] = (src[120+j] & 0x7f) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[124+j] & 0x7f) << 1;
	}
}

template<typename T>
void KVSE_pack_32len_7bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7f) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7f) << 30;
		des[4+j] = (src[8+j] & 0x7f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x7f) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x7f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x7f) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x7f) << 26;
		des[8+j] = (src[24+j] & 0x7f) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x7f) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 0x7f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 0x7f) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 0x7f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 0x7f) << 29;
		des[12+j] = (src[44+j] & 0x7f) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[48+j] & 0x7f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[52+j] & 0x7f) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[56+j] & 0x7f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[60+j] & 0x7f) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[64+j] & 0x7f);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[68+j] & 0x7f) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[72+j] & 0x7f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[76+j] & 0x7f) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[80+j] & 0x7f) << 28;
		des[20+j] = (src[80+j] & 0x7f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[84+j] & 0x7f) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[88+j] & 0x7f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[92+j] & 0x7f) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[96+j] & 0x7f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[100+j] & 0x7f) << 31;
		des[24+j] = (src[100+j] & 0x7f) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[104+j] & 0x7f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[108+j] & 0x7f) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[112+j] & 0x7f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[116+j] & 0x7f) << 27;
		des[28+j] = (src[116+j] & 0x7f) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[120+j] & 0x7f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[124+j] & 0x7f) << 9;
	}
}

template<typename T>
void KVSE_pack_32len_7bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7f) << 31;
		des[4+j] = (src[4+j] & 0x7f) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x7f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x7f) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x7f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x7f) << 27;
		des[8+j] = (src[20+j] & 0x7f) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x7f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x7f) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 0x7f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 0x7f) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 0x7f) << 30;
		des[12+j] = (src[40+j] & 0x7f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 0x7f) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[48+j] & 0x7f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[52+j] & 0x7f) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[56+j] & 0x7f) << 26;
		des[16+j] = (src[56+j] & 0x7f) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[60+j] & 0x7f) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[64+j] & 0x7f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[68+j] & 0x7f) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[72+j] & 0x7f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[76+j] & 0x7f) << 29;
		des[20+j] = (src[76+j] & 0x7f) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[80+j] & 0x7f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[84+j] & 0x7f) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[88+j] & 0x7f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[92+j] & 0x7f) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[96+j] & 0x7f);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[100+j] & 0x7f) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[104+j] & 0x7f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[108+j] & 0x7f) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[112+j] & 0x7f) << 28;
		des[28+j] = (src[112+j] & 0x7f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[116+j] & 0x7f) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[120+j] & 0x7f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[124+j] & 0x7f) << 17;
	}
}

template<typename T>
void KVSE_pack_32len_8bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[16+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[32+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[48+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[52+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[56+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[60+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[64+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[68+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[72+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[76+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[80+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[84+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[88+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[92+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[96+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[100+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[104+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[108+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[112+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[116+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[120+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[124+j] & 0xff) << 24;
	}
}

template<typename T>
void KVSE_pack_32len_8bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[12+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[28+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[44+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[48+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[52+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[56+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[60+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[64+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[68+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[72+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[76+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[80+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[84+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[88+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[92+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[96+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[100+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[104+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[108+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[112+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[116+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[120+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[124+j] & 0xff);
	}
}

template<typename T>
void KVSE_pack_32len_8bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[8+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[24+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[40+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[48+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[52+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[56+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[60+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[64+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[68+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[72+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[76+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[80+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[84+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[88+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[92+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[96+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[100+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[104+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[108+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[112+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[116+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[120+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[124+j] & 0xff) << 8;
	}
}

template<typename T>
void KVSE_pack_32len_8bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[20+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[36+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[48+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[52+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[56+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[60+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[64+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[68+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[72+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[76+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[80+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[84+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[88+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[92+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[96+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[100+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[104+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[108+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[112+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[116+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[120+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[124+j] & 0xff) << 16;
	}
}

template<typename T>
void KVSE_pack_32len_9bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x1ff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1ff) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x1ff) << 27;
		des[4+j] = (src[12+j] & 0x1ff) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x1ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x1ff) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x1ff) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x1ff) << 31;
		des[8+j] = (src[28+j] & 0x1ff) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 0x1ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 0x1ff) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 0x1ff) << 26;
		des[12+j] = (src[40+j] & 0x1ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 0x1ff) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[48+j] & 0x1ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[52+j] & 0x1ff) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[56+j] & 0x1ff) << 30;
		des[16+j] = (src[56+j] & 0x1ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[60+j] & 0x1ff) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[64+j] & 0x1ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[68+j] & 0x1ff) << 25;
		des[20+j] = (src[68+j] & 0x1ff) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[72+j] & 0x1ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[76+j] & 0x1ff) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[80+j] & 0x1ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[84+j] & 0x1ff) << 29;
		des[24+j] = (src[84+j] & 0x1ff) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[88+j] & 0x1ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[92+j] & 0x1ff) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[96+j] & 0x1ff) << 24;
		des[28+j] = (src[96+j] & 0x1ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[100+j] & 0x1ff) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[104+j] & 0x1ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[108+j] & 0x1ff) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[112+j] & 0x1ff) << 28;
		des[32+j] = (src[112+j] & 0x1ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[116+j] & 0x1ff) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[120+j] & 0x1ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[124+j] & 0x1ff) << 23;
	}
}

template<typename T>
void KVSE_pack_32len_9bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1ff) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1ff) << 26;
		des[4+j] = (src[8+j] & 0x1ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x1ff) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x1ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x1ff) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x1ff) << 30;
		des[8+j] = (src[24+j] & 0x1ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x1ff) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 0x1ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 0x1ff) << 25;
		des[12+j] = (src[36+j] & 0x1ff) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 0x1ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 0x1ff) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[48+j] & 0x1ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[52+j] & 0x1ff) << 29;
		des[16+j] = (src[52+j] & 0x1ff) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[56+j] & 0x1ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[60+j] & 0x1ff) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[64+j] & 0x1ff) << 24;
		des[20+j] = (src[64+j] & 0x1ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[68+j] & 0x1ff) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[72+j] & 0x1ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[76+j] & 0x1ff) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[80+j] & 0x1ff) << 28;
		des[24+j] = (src[80+j] & 0x1ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[84+j] & 0x1ff) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[88+j] & 0x1ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[92+j] & 0x1ff) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[96+j] & 0x1ff);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[100+j] & 0x1ff) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[104+j] & 0x1ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[108+j] & 0x1ff) << 27;
		des[32+j] = (src[108+j] & 0x1ff) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[112+j] & 0x1ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[116+j] & 0x1ff) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[120+j] & 0x1ff) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[124+j] & 0x1ff) << 31;
		des[36+j] = (src[124+j] & 0x1ff) >> 1;
	}
}

template<typename T>
void KVSE_pack_32len_9bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1ff) << 25;
		des[4+j] = (src[4+j] & 0x1ff) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x1ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x1ff) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x1ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x1ff) << 29;
		des[8+j] = (src[20+j] & 0x1ff) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x1ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x1ff) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 0x1ff) << 24;
		des[12+j] = (src[32+j] & 0x1ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 0x1ff) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 0x1ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 0x1ff) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[48+j] & 0x1ff) << 28;
		des[16+j] = (src[48+j] & 0x1ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 0x1ff) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[56+j] & 0x1ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[60+j] & 0x1ff) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[64+j] & 0x1ff);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[68+j] & 0x1ff) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[72+j] & 0x1ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[76+j] & 0x1ff) << 27;
		des[24+j] = (src[76+j] & 0x1ff) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[80+j] & 0x1ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[84+j] & 0x1ff) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[88+j] & 0x1ff) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[92+j] & 0x1ff) << 31;
		des[28+j] = (src[92+j] & 0x1ff) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[96+j] & 0x1ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[100+j] & 0x1ff) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[104+j] & 0x1ff) << 26;
		des[32+j] = (src[104+j] & 0x1ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[108+j] & 0x1ff) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[112+j] & 0x1ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[116+j] & 0x1ff) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[120+j] & 0x1ff) << 30;
		des[36+j] = (src[120+j] & 0x1ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[124+j] & 0x1ff) << 7;
	}
}

template<typename T>
void KVSE_pack_32len_9bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1ff) << 24;
		des[4+j] = (src[j] & 0x1ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0x1ff) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x1ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x1ff) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x1ff) << 28;
		des[8+j] = (src[16+j] & 0x1ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0x1ff) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x1ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x1ff) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[32+j] & 0x1ff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 0x1ff) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 0x1ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 0x1ff) << 27;
		des[16+j] = (src[44+j] & 0x1ff) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[48+j] & 0x1ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 0x1ff) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[56+j] & 0x1ff) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[60+j] & 0x1ff) << 31;
		des[20+j] = (src[60+j] & 0x1ff) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[64+j] & 0x1ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[68+j] & 0x1ff) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[72+j] & 0x1ff) << 26;
		des[24+j] = (src[72+j] & 0x1ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[76+j] & 0x1ff) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[80+j] & 0x1ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[84+j] & 0x1ff) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[88+j] & 0x1ff) << 30;
		des[28+j] = (src[88+j] & 0x1ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[92+j] & 0x1ff) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[96+j] & 0x1ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[100+j] & 0x1ff) << 25;
		des[32+j] = (src[100+j] & 0x1ff) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[104+j] & 0x1ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[108+j] & 0x1ff) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[112+j] & 0x1ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[116+j] & 0x1ff) << 29;
		des[36+j] = (src[116+j] & 0x1ff) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[120+j] & 0x1ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[124+j] & 0x1ff) << 15;
	}
}

template<typename T>
void KVSE_pack_32len_10bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x3ff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x3ff) << 30;
		des[4+j] = (src[12+j] & 0x3ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x3ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x3ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x3ff) << 28;
		des[8+j] = (src[24+j] & 0x3ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x3ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 0x3ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 0x3ff) << 26;
		des[12+j] = (src[36+j] & 0x3ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 0x3ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 0x3ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[48+j] & 0x3ff) << 24;
		des[16+j] = (src[48+j] & 0x3ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 0x3ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[56+j] & 0x3ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[60+j] & 0x3ff) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[64+j] & 0x3ff);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[68+j] & 0x3ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[72+j] & 0x3ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[76+j] & 0x3ff) << 30;
		des[24+j] = (src[76+j] & 0x3ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[80+j] & 0x3ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[84+j] & 0x3ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[88+j] & 0x3ff) << 28;
		des[28+j] = (src[88+j] & 0x3ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[92+j] & 0x3ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[96+j] & 0x3ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[100+j] & 0x3ff) << 26;
		des[32+j] = (src[100+j] & 0x3ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[104+j] & 0x3ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[108+j] & 0x3ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[112+j] & 0x3ff) << 24;
		des[36+j] = (src[112+j] & 0x3ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[116+j] & 0x3ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[120+j] & 0x3ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[124+j] & 0x3ff) << 22;
	}
}

template<typename T>
void KVSE_pack_32len_10bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3ff) << 28;
		des[4+j] = (src[8+j] & 0x3ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x3ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x3ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x3ff) << 26;
		des[8+j] = (src[20+j] & 0x3ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x3ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x3ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 0x3ff) << 24;
		des[12+j] = (src[32+j] & 0x3ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 0x3ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 0x3ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 0x3ff) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[48+j] & 0x3ff);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 0x3ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[56+j] & 0x3ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[60+j] & 0x3ff) << 30;
		des[20+j] = (src[60+j] & 0x3ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[64+j] & 0x3ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[68+j] & 0x3ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[72+j] & 0x3ff) << 28;
		des[24+j] = (src[72+j] & 0x3ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[76+j] & 0x3ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[80+j] & 0x3ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[84+j] & 0x3ff) << 26;
		des[28+j] = (src[84+j] & 0x3ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[88+j] & 0x3ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[92+j] & 0x3ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[96+j] & 0x3ff) << 24;
		des[32+j] = (src[96+j] & 0x3ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[100+j] & 0x3ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[104+j] & 0x3ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[108+j] & 0x3ff) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[112+j] & 0x3ff);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[116+j] & 0x3ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[120+j] & 0x3ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[124+j] & 0x3ff) << 30;
		des[40+j] = (src[124+j] & 0x3ff) >> 2;
	}
}

template<typename T>
void KVSE_pack_32len_10bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3ff) << 26;
		des[4+j] = (src[4+j] & 0x3ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x3ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x3ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x3ff) << 24;
		des[8+j] = (src[16+j] & 0x3ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0x3ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x3ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x3ff) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[32+j] & 0x3ff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 0x3ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 0x3ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 0x3ff) << 30;
		des[16+j] = (src[44+j] & 0x3ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[48+j] & 0x3ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 0x3ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[56+j] & 0x3ff) << 28;
		des[20+j] = (src[56+j] & 0x3ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[60+j] & 0x3ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[64+j] & 0x3ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[68+j] & 0x3ff) << 26;
		des[24+j] = (src[68+j] & 0x3ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[72+j] & 0x3ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[76+j] & 0x3ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[80+j] & 0x3ff) << 24;
		des[28+j] = (src[80+j] & 0x3ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[84+j] & 0x3ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[88+j] & 0x3ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[92+j] & 0x3ff) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[96+j] & 0x3ff);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[100+j] & 0x3ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[104+j] & 0x3ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[108+j] & 0x3ff) << 30;
		des[36+j] = (src[108+j] & 0x3ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[112+j] & 0x3ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[116+j] & 0x3ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[120+j] & 0x3ff) << 28;
		des[40+j] = (src[120+j] & 0x3ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[124+j] & 0x3ff) << 6;
	}
}

template<typename T>
void KVSE_pack_32len_10bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3ff) << 24;
		des[4+j] = (src[j] & 0x3ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0x3ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x3ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x3ff) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[16+j] & 0x3ff);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0x3ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x3ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x3ff) << 30;
		des[12+j] = (src[28+j] & 0x3ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[32+j] & 0x3ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 0x3ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 0x3ff) << 28;
		des[16+j] = (src[40+j] & 0x3ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 0x3ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[48+j] & 0x3ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 0x3ff) << 26;
		des[20+j] = (src[52+j] & 0x3ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[56+j] & 0x3ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[60+j] & 0x3ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[64+j] & 0x3ff) << 24;
		des[24+j] = (src[64+j] & 0x3ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[68+j] & 0x3ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[72+j] & 0x3ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[76+j] & 0x3ff) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[80+j] & 0x3ff);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[84+j] & 0x3ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[88+j] & 0x3ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[92+j] & 0x3ff) << 30;
		des[32+j] = (src[92+j] & 0x3ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[96+j] & 0x3ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[100+j] & 0x3ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[104+j] & 0x3ff) << 28;
		des[36+j] = (src[104+j] & 0x3ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[108+j] & 0x3ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[112+j] & 0x3ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[116+j] & 0x3ff) << 26;
		des[40+j] = (src[116+j] & 0x3ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[120+j] & 0x3ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[124+j] & 0x3ff) << 14;
	}
}

template<typename T>
void KVSE_pack_32len_11bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x7ff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7ff) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7ff) << 22;
		des[4+j] = (src[8+j] & 0x7ff) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x7ff) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x7ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x7ff) << 23;
		des[8+j] = (src[20+j] & 0x7ff) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x7ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x7ff) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 0x7ff) << 24;
		des[12+j] = (src[32+j] & 0x7ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 0x7ff) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 0x7ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 0x7ff) << 25;
		des[16+j] = (src[44+j] & 0x7ff) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[48+j] & 0x7ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 0x7ff) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[56+j] & 0x7ff) << 26;
		des[20+j] = (src[56+j] & 0x7ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[60+j] & 0x7ff) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[64+j] & 0x7ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[68+j] & 0x7ff) << 27;
		des[24+j] = (src[68+j] & 0x7ff) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[72+j] & 0x7ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[76+j] & 0x7ff) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[80+j] & 0x7ff) << 28;
		des[28+j] = (src[80+j] & 0x7ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[84+j] & 0x7ff) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[88+j] & 0x7ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[92+j] & 0x7ff) << 29;
		des[32+j] = (src[92+j] & 0x7ff) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[96+j] & 0x7ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[100+j] & 0x7ff) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[104+j] & 0x7ff) << 30;
		des[36+j] = (src[104+j] & 0x7ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[108+j] & 0x7ff) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[112+j] & 0x7ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[116+j] & 0x7ff) << 31;
		des[40+j] = (src[116+j] & 0x7ff) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[120+j] & 0x7ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[124+j] & 0x7ff) << 21;
	}
}

template<typename T>
void KVSE_pack_32len_11bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7ff) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7ff) << 30;
		des[4+j] = (src[8+j] & 0x7ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x7ff) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x7ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x7ff) << 31;
		des[8+j] = (src[20+j] & 0x7ff) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x7ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x7ff) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[32+j] & 0x7ff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 0x7ff) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 0x7ff) << 22;
		des[16+j] = (src[40+j] & 0x7ff) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 0x7ff) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[48+j] & 0x7ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 0x7ff) << 23;
		des[20+j] = (src[52+j] & 0x7ff) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[56+j] & 0x7ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[60+j] & 0x7ff) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[64+j] & 0x7ff) << 24;
		des[24+j] = (src[64+j] & 0x7ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[68+j] & 0x7ff) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[72+j] & 0x7ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[76+j] & 0x7ff) << 25;
		des[28+j] = (src[76+j] & 0x7ff) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[80+j] & 0x7ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[84+j] & 0x7ff) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[88+j] & 0x7ff) << 26;
		des[32+j] = (src[88+j] & 0x7ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[92+j] & 0x7ff) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[96+j] & 0x7ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[100+j] & 0x7ff) << 27;
		des[36+j] = (src[100+j] & 0x7ff) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[104+j] & 0x7ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[108+j] & 0x7ff) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[112+j] & 0x7ff) << 28;
		des[40+j] = (src[112+j] & 0x7ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[116+j] & 0x7ff) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[120+j] & 0x7ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[124+j] & 0x7ff) << 29;
		des[44+j] = (src[124+j] & 0x7ff) >> 3;
	}
}

template<typename T>
void KVSE_pack_32len_11bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7ff) << 27;
		des[4+j] = (src[4+j] & 0x7ff) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x7ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x7ff) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x7ff) << 28;
		des[8+j] = (src[16+j] & 0x7ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0x7ff) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x7ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x7ff) << 29;
		des[12+j] = (src[28+j] & 0x7ff) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[32+j] & 0x7ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 0x7ff) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 0x7ff) << 30;
		des[16+j] = (src[40+j] & 0x7ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 0x7ff) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[48+j] & 0x7ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 0x7ff) << 31;
		des[20+j] = (src[52+j] & 0x7ff) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[56+j] & 0x7ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[60+j] & 0x7ff) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[64+j] & 0x7ff);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[68+j] & 0x7ff) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[72+j] & 0x7ff) << 22;
		des[28+j] = (src[72+j] & 0x7ff) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[76+j] & 0x7ff) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[80+j] & 0x7ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[84+j] & 0x7ff) << 23;
		des[32+j] = (src[84+j] & 0x7ff) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[88+j] & 0x7ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[92+j] & 0x7ff) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[96+j] & 0x7ff) << 24;
		des[36+j] = (src[96+j] & 0x7ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[100+j] & 0x7ff) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[104+j] & 0x7ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[108+j] & 0x7ff) << 25;
		des[40+j] = (src[108+j] & 0x7ff) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[112+j] & 0x7ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[116+j] & 0x7ff) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[120+j] & 0x7ff) << 26;
		des[44+j] = (src[120+j] & 0x7ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[124+j] & 0x7ff) << 5;
	}
}

template<typename T>
void KVSE_pack_32len_11bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7ff) << 24;
		des[4+j] = (src[j] & 0x7ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0x7ff) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x7ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x7ff) << 25;
		des[8+j] = (src[12+j] & 0x7ff) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 0x7ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0x7ff) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x7ff) << 26;
		des[12+j] = (src[24+j] & 0x7ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 0x7ff) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[32+j] & 0x7ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 0x7ff) << 27;
		des[16+j] = (src[36+j] & 0x7ff) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[40+j] & 0x7ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 0x7ff) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[48+j] & 0x7ff) << 28;
		des[20+j] = (src[48+j] & 0x7ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[52+j] & 0x7ff) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[56+j] & 0x7ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[60+j] & 0x7ff) << 29;
		des[24+j] = (src[60+j] & 0x7ff) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[64+j] & 0x7ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[68+j] & 0x7ff) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[72+j] & 0x7ff) << 30;
		des[28+j] = (src[72+j] & 0x7ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[76+j] & 0x7ff) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[80+j] & 0x7ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[84+j] & 0x7ff) << 31;
		des[32+j] = (src[84+j] & 0x7ff) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[88+j] & 0x7ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[92+j] & 0x7ff) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[96+j] & 0x7ff);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[100+j] & 0x7ff) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[104+j] & 0x7ff) << 22;
		des[40+j] = (src[104+j] & 0x7ff) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[108+j] & 0x7ff) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[112+j] & 0x7ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[116+j] & 0x7ff) << 23;
		des[44+j] = (src[116+j] & 0x7ff) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[120+j] & 0x7ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[124+j] & 0x7ff) << 13;
	}
}

template<typename T>
void KVSE_pack_32len_12bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0xfff) << 24;
		des[4+j] = (src[8+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0xfff) << 28;
		des[8+j] = (src[20+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[32+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 0xfff) << 24;
		des[16+j] = (src[40+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[48+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 0xfff) << 28;
		des[20+j] = (src[52+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[56+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[60+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[64+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[68+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[72+j] & 0xfff) << 24;
		des[28+j] = (src[72+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[76+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[80+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[84+j] & 0xfff) << 28;
		des[32+j] = (src[84+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[88+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[92+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[96+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[100+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[104+j] & 0xfff) << 24;
		des[40+j] = (src[104+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[108+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[112+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[116+j] & 0xfff) << 28;
		des[44+j] = (src[116+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[120+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[124+j] & 0xfff) << 20;
	}
}

template<typename T>
void KVSE_pack_32len_12bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[8+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0xfff) << 24;
		des[8+j] = (src[16+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0xfff) << 28;
		des[12+j] = (src[28+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[32+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[40+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[48+j] & 0xfff) << 24;
		des[20+j] = (src[48+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[52+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[56+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[60+j] & 0xfff) << 28;
		des[24+j] = (src[60+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[64+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[68+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[72+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[76+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[80+j] & 0xfff) << 24;
		des[32+j] = (src[80+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[84+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[88+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[92+j] & 0xfff) << 28;
		des[36+j] = (src[92+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[96+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[100+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[104+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[108+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[112+j] & 0xfff) << 24;
		des[44+j] = (src[112+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[116+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[120+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[124+j] & 0xfff) << 28;
		des[48+j] = (src[124+j] & 0xfff) >> 4;
	}
}

template<typename T>
void KVSE_pack_32len_12bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xfff) << 28;
		des[4+j] = (src[4+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[16+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0xfff) << 24;
		des[12+j] = (src[24+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[32+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 0xfff) << 28;
		des[16+j] = (src[36+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[40+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[48+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[52+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[56+j] & 0xfff) << 24;
		des[24+j] = (src[56+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[60+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[64+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[68+j] & 0xfff) << 28;
		des[28+j] = (src[68+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[72+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[76+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[80+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[84+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[88+j] & 0xfff) << 24;
		des[36+j] = (src[88+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[92+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[96+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[100+j] & 0xfff) << 28;
		des[40+j] = (src[100+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[104+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[108+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[112+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[116+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[120+j] & 0xfff) << 24;
		des[48+j] = (src[120+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[124+j] & 0xfff) << 4;
	}
}

template<typename T>
void KVSE_pack_32len_12bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xfff) << 24;
		des[4+j] = (src[j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xfff) << 28;
		des[8+j] = (src[12+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[24+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[32+j] & 0xfff) << 24;
		des[16+j] = (src[32+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[36+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[40+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 0xfff) << 28;
		des[20+j] = (src[44+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[48+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[52+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[56+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[60+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[64+j] & 0xfff) << 24;
		des[28+j] = (src[64+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[68+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[72+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[76+j] & 0xfff) << 28;
		des[32+j] = (src[76+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[80+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[84+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[88+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[92+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[96+j] & 0xfff) << 24;
		des[40+j] = (src[96+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[100+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[104+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[108+j] & 0xfff) << 28;
		des[44+j] = (src[108+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[112+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[116+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[120+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[124+j] & 0xfff) << 12;
	}
}

template<typename T>
void KVSE_pack_32len_16bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[8+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[16+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[24+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[32+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[36+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[40+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[44+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[48+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[52+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[56+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[60+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[64+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[68+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[72+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[76+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[80+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[84+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[88+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[92+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[96+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[100+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[104+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[108+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[112+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[116+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[120+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[124+j] & 0xffff) << 16;
	}
}

template<typename T>
void KVSE_pack_32len_16bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xffff) << 24;
		des[4+j] = (src[4+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xffff) << 24;
		des[8+j] = (src[12+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0xffff) << 24;
		des[12+j] = (src[20+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 0xffff) << 24;
		des[16+j] = (src[28+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[32+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[36+j] & 0xffff) << 24;
		des[20+j] = (src[36+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[40+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[44+j] & 0xffff) << 24;
		des[24+j] = (src[44+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[48+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[52+j] & 0xffff) << 24;
		des[28+j] = (src[52+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[56+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[60+j] & 0xffff) << 24;
		des[32+j] = (src[60+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[64+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[68+j] & 0xffff) << 24;
		des[36+j] = (src[68+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[72+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[76+j] & 0xffff) << 24;
		des[40+j] = (src[76+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[80+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[84+j] & 0xffff) << 24;
		des[44+j] = (src[84+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[88+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[92+j] & 0xffff) << 24;
		des[48+j] = (src[92+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[96+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[100+j] & 0xffff) << 24;
		des[52+j] = (src[100+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[104+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[108+j] & 0xffff) << 24;
		des[56+j] = (src[108+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[112+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[116+j] & 0xffff) << 24;
		des[60+j] = (src[116+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[120+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[124+j] & 0xffff) << 24;
		des[64+j] = (src[124+j] & 0xffff) >> 8;
	}
}

template<typename T>
void KVSE_pack_32len_16bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[12+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[20+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[28+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[32+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[36+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[40+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[44+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[48+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[52+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[56+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[60+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[64+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[68+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[72+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[76+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[80+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[84+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[88+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[92+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[96+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[100+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[104+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[108+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[112+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[116+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[120+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[124+j] & 0xffff);
	}
}

template<typename T>
void KVSE_pack_32len_16bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xffff) << 24;
		des[4+j] = (src[j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xffff) << 24;
		des[8+j] = (src[8+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 0xffff) << 24;
		des[12+j] = (src[16+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 0xffff) << 24;
		des[16+j] = (src[24+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[32+j] & 0xffff) << 24;
		des[20+j] = (src[32+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[36+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[40+j] & 0xffff) << 24;
		des[24+j] = (src[40+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[44+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[48+j] & 0xffff) << 24;
		des[28+j] = (src[48+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[52+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[56+j] & 0xffff) << 24;
		des[32+j] = (src[56+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[60+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[64+j] & 0xffff) << 24;
		des[36+j] = (src[64+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[68+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[72+j] & 0xffff) << 24;
		des[40+j] = (src[72+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[76+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[80+j] & 0xffff) << 24;
		des[44+j] = (src[80+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[84+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[88+j] & 0xffff) << 24;
		des[48+j] = (src[88+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[92+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[96+j] & 0xffff) << 24;
		des[52+j] = (src[96+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[100+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[104+j] & 0xffff) << 24;
		des[56+j] = (src[104+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[108+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[112+j] & 0xffff) << 24;
		des[60+j] = (src[112+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[116+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[120+j] & 0xffff) << 24;
		des[64+j] = (src[120+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[124+j] & 0xffff) << 8;
	}
}

template<typename T>
void KVSE_pack_32len_20bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xfffff) << 20;
		des[4+j] = (src[4+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xfffff) << 28;
		des[8+j] = (src[12+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 0xfffff) << 16;
		des[12+j] = (src[16+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 0xfffff) << 24;
		des[16+j] = (src[24+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[32+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[36+j] & 0xfffff) << 20;
		des[24+j] = (src[36+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[40+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[44+j] & 0xfffff) << 28;
		des[28+j] = (src[44+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[48+j] & 0xfffff) << 16;
		des[32+j] = (src[48+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[52+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[56+j] & 0xfffff) << 24;
		des[36+j] = (src[56+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[60+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[64+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[68+j] & 0xfffff) << 20;
		des[44+j] = (src[68+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[72+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[76+j] & 0xfffff) << 28;
		des[48+j] = (src[76+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[80+j] & 0xfffff) << 16;
		des[52+j] = (src[80+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[84+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[88+j] & 0xfffff) << 24;
		des[56+j] = (src[88+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[92+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[96+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[100+j] & 0xfffff) << 20;
		des[64+j] = (src[100+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[104+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[108+j] & 0xfffff) << 28;
		des[68+j] = (src[108+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[112+j] & 0xfffff) << 16;
		des[72+j] = (src[112+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[116+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[120+j] & 0xfffff) << 24;
		des[76+j] = (src[120+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[124+j] & 0xfffff) << 12;
	}
}

template<typename T>
void KVSE_pack_32len_20bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xfffff) << 28;
		des[4+j] = (src[4+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xfffff) << 16;
		des[8+j] = (src[8+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 0xfffff) << 24;
		des[12+j] = (src[16+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[24+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 0xfffff) << 20;
		des[20+j] = (src[28+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[32+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[36+j] & 0xfffff) << 28;
		des[24+j] = (src[36+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[40+j] & 0xfffff) << 16;
		des[28+j] = (src[40+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[44+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[48+j] & 0xfffff) << 24;
		des[32+j] = (src[48+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[52+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[56+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[60+j] & 0xfffff) << 20;
		des[40+j] = (src[60+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[64+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[68+j] & 0xfffff) << 28;
		des[44+j] = (src[68+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[72+j] & 0xfffff) << 16;
		des[48+j] = (src[72+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[76+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[80+j] & 0xfffff) << 24;
		des[52+j] = (src[80+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[84+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[88+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[92+j] & 0xfffff) << 20;
		des[60+j] = (src[92+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[96+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[100+j] & 0xfffff) << 28;
		des[64+j] = (src[100+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[104+j] & 0xfffff) << 16;
		des[68+j] = (src[104+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[108+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[112+j] & 0xfffff) << 24;
		des[72+j] = (src[112+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[116+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[120+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[124+j] & 0xfffff) << 20;
		des[80+j] = (src[124+j] & 0xfffff) >> 12;
	}
}

template<typename T>
void KVSE_pack_32len_20bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xfffff) << 16;
		des[4+j] = (src[j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xfffff) << 24;
		des[8+j] = (src[8+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[16+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 0xfffff) << 20;
		des[16+j] = (src[20+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 0xfffff) << 28;
		des[20+j] = (src[28+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[32+j] & 0xfffff) << 16;
		des[24+j] = (src[32+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[36+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[40+j] & 0xfffff) << 24;
		des[28+j] = (src[40+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[44+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[48+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[52+j] & 0xfffff) << 20;
		des[36+j] = (src[52+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[56+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[60+j] & 0xfffff) << 28;
		des[40+j] = (src[60+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[64+j] & 0xfffff) << 16;
		des[44+j] = (src[64+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[68+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[72+j] & 0xfffff) << 24;
		des[48+j] = (src[72+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[76+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[80+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[84+j] & 0xfffff) << 20;
		des[56+j] = (src[84+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[88+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[92+j] & 0xfffff) << 28;
		des[60+j] = (src[92+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[96+j] & 0xfffff) << 16;
		des[64+j] = (src[96+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[100+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[104+j] & 0xfffff) << 24;
		des[68+j] = (src[104+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[108+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[112+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[116+j] & 0xfffff) << 20;
		des[76+j] = (src[116+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[120+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[124+j] & 0xfffff) << 28;
		des[80+j] = (src[124+j] & 0xfffff) >> 4;
	}
}

template<typename T>
void KVSE_pack_32len_20bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xfffff) << 24;
		des[4+j] = (src[j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 0xfffff) << 20;
		des[12+j] = (src[12+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 0xfffff) << 28;
		des[16+j] = (src[20+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 0xfffff) << 16;
		des[20+j] = (src[24+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[32+j] & 0xfffff) << 24;
		des[24+j] = (src[32+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[36+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[40+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[44+j] & 0xfffff) << 20;
		des[32+j] = (src[44+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[48+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[52+j] & 0xfffff) << 28;
		des[36+j] = (src[52+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[56+j] & 0xfffff) << 16;
		des[40+j] = (src[56+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[60+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[64+j] & 0xfffff) << 24;
		des[44+j] = (src[64+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[68+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[72+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[76+j] & 0xfffff) << 20;
		des[52+j] = (src[76+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[80+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[84+j] & 0xfffff) << 28;
		des[56+j] = (src[84+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[88+j] & 0xfffff) << 16;
		des[60+j] = (src[88+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[92+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[96+j] & 0xfffff) << 24;
		des[64+j] = (src[96+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[100+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[104+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[108+j] & 0xfffff) << 20;
		des[72+j] = (src[108+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[112+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[116+j] & 0xfffff) << 28;
		des[76+j] = (src[116+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[120+j] & 0xfffff) << 16;
		des[80+j] = (src[120+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[124+j] & 0xfffff) << 4;
	}
}

template<typename T>
void KVSE_pack_32len_32bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j]);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j]);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j]);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j]);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[16+j]);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[20+j]);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[24+j]);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[28+j]);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[32+j]);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[36+j]);
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[40+j]);
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[44+j]);
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[48+j]);
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[52+j]);
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[56+j]);
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[60+j]);
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[64+j]);
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[68+j]);
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[72+j]);
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[76+j]);
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[80+j]);
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[84+j]);
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[88+j]);
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[92+j]);
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[96+j]);
	}
	for (int j=0; j<4; ++j) {
		des[100+j] |= (src[100+j]);
	}
	for (int j=0; j<4; ++j) {
		des[104+j] |= (src[104+j]);
	}
	for (int j=0; j<4; ++j) {
		des[108+j] |= (src[108+j]);
	}
	for (int j=0; j<4; ++j) {
		des[112+j] |= (src[112+j]);
	}
	for (int j=0; j<4; ++j) {
		des[116+j] |= (src[116+j]);
	}
	for (int j=0; j<4; ++j) {
		des[120+j] |= (src[120+j]);
	}
	for (int j=0; j<4; ++j) {
		des[124+j] |= (src[124+j]);
	}
}

template<typename T>
void KVSE_pack_32len_32bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j]) << 8;
		des[4+j] = (src[j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j]) << 8;
		des[8+j] = (src[4+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j]) << 8;
		des[12+j] = (src[8+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j]) << 8;
		des[16+j] = (src[12+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[16+j]) << 8;
		des[20+j] = (src[16+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[20+j]) << 8;
		des[24+j] = (src[20+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[24+j]) << 8;
		des[28+j] = (src[24+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[28+j]) << 8;
		des[32+j] = (src[28+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[32+j]) << 8;
		des[36+j] = (src[32+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[36+j]) << 8;
		des[40+j] = (src[36+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[40+j]) << 8;
		des[44+j] = (src[40+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[44+j]) << 8;
		des[48+j] = (src[44+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[48+j]) << 8;
		des[52+j] = (src[48+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[52+j]) << 8;
		des[56+j] = (src[52+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[56+j]) << 8;
		des[60+j] = (src[56+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[60+j]) << 8;
		des[64+j] = (src[60+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[64+j]) << 8;
		des[68+j] = (src[64+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[68+j]) << 8;
		des[72+j] = (src[68+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[72+j]) << 8;
		des[76+j] = (src[72+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[76+j]) << 8;
		des[80+j] = (src[76+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[80+j]) << 8;
		des[84+j] = (src[80+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[84+j]) << 8;
		des[88+j] = (src[84+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[88+j]) << 8;
		des[92+j] = (src[88+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[92+j]) << 8;
		des[96+j] = (src[92+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[96+j]) << 8;
		des[100+j] = (src[96+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] |= (src[100+j]) << 8;
		des[104+j] = (src[100+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] |= (src[104+j]) << 8;
		des[108+j] = (src[104+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] |= (src[108+j]) << 8;
		des[112+j] = (src[108+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] |= (src[112+j]) << 8;
		des[116+j] = (src[112+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] |= (src[116+j]) << 8;
		des[120+j] = (src[116+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] |= (src[120+j]) << 8;
		des[124+j] = (src[120+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] |= (src[124+j]) << 8;
		des[128+j] = (src[124+j]) >> 24;
	}
}

template<typename T>
void KVSE_pack_32len_32bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j]) << 16;
		des[4+j] = (src[j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j]) << 16;
		des[8+j] = (src[4+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j]) << 16;
		des[12+j] = (src[8+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j]) << 16;
		des[16+j] = (src[12+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[16+j]) << 16;
		des[20+j] = (src[16+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[20+j]) << 16;
		des[24+j] = (src[20+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[24+j]) << 16;
		des[28+j] = (src[24+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[28+j]) << 16;
		des[32+j] = (src[28+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[32+j]) << 16;
		des[36+j] = (src[32+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[36+j]) << 16;
		des[40+j] = (src[36+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[40+j]) << 16;
		des[44+j] = (src[40+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[44+j]) << 16;
		des[48+j] = (src[44+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[48+j]) << 16;
		des[52+j] = (src[48+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[52+j]) << 16;
		des[56+j] = (src[52+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[56+j]) << 16;
		des[60+j] = (src[56+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[60+j]) << 16;
		des[64+j] = (src[60+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[64+j]) << 16;
		des[68+j] = (src[64+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[68+j]) << 16;
		des[72+j] = (src[68+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[72+j]) << 16;
		des[76+j] = (src[72+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[76+j]) << 16;
		des[80+j] = (src[76+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[80+j]) << 16;
		des[84+j] = (src[80+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[84+j]) << 16;
		des[88+j] = (src[84+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[88+j]) << 16;
		des[92+j] = (src[88+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[92+j]) << 16;
		des[96+j] = (src[92+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[96+j]) << 16;
		des[100+j] = (src[96+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] |= (src[100+j]) << 16;
		des[104+j] = (src[100+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] |= (src[104+j]) << 16;
		des[108+j] = (src[104+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] |= (src[108+j]) << 16;
		des[112+j] = (src[108+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] |= (src[112+j]) << 16;
		des[116+j] = (src[112+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] |= (src[116+j]) << 16;
		des[120+j] = (src[116+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] |= (src[120+j]) << 16;
		des[124+j] = (src[120+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] |= (src[124+j]) << 16;
		des[128+j] = (src[124+j]) >> 16;
	}
}

template<typename T>
void KVSE_pack_32len_32bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j]) << 24;
		des[4+j] = (src[j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j]) << 24;
		des[8+j] = (src[4+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j]) << 24;
		des[12+j] = (src[8+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j]) << 24;
		des[16+j] = (src[12+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[16+j]) << 24;
		des[20+j] = (src[16+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[20+j]) << 24;
		des[24+j] = (src[20+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[24+j]) << 24;
		des[28+j] = (src[24+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[28+j]) << 24;
		des[32+j] = (src[28+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[32+j]) << 24;
		des[36+j] = (src[32+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[36+j]) << 24;
		des[40+j] = (src[36+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[40+j]) << 24;
		des[44+j] = (src[40+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[44+j]) << 24;
		des[48+j] = (src[44+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[48+j]) << 24;
		des[52+j] = (src[48+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[52+j]) << 24;
		des[56+j] = (src[52+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[56+j]) << 24;
		des[60+j] = (src[56+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[60+j]) << 24;
		des[64+j] = (src[60+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[64+j]) << 24;
		des[68+j] = (src[64+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[68+j]) << 24;
		des[72+j] = (src[68+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[72+j]) << 24;
		des[76+j] = (src[72+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[76+j]) << 24;
		des[80+j] = (src[76+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[80+j]) << 24;
		des[84+j] = (src[80+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[84+j]) << 24;
		des[88+j] = (src[84+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[88+j]) << 24;
		des[92+j] = (src[88+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[92+j]) << 24;
		des[96+j] = (src[92+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[96+j]) << 24;
		des[100+j] = (src[96+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] |= (src[100+j]) << 24;
		des[104+j] = (src[100+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] |= (src[104+j]) << 24;
		des[108+j] = (src[104+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] |= (src[108+j]) << 24;
		des[112+j] = (src[108+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] |= (src[112+j]) << 24;
		des[116+j] = (src[112+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] |= (src[116+j]) << 24;
		des[120+j] = (src[116+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] |= (src[120+j]) << 24;
		des[124+j] = (src[120+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] |= (src[124+j]) << 24;
		des[128+j] = (src[124+j]) >> 8;
	}
}

template<typename T>
void KVSE_pack_64len_0bw_0offset(T * des, const uint32_t *src) {
}

template<typename T>
void KVSE_pack_64len_0bw_8offset(T * des, const uint32_t *src) {
}

template<typename T>
void KVSE_pack_64len_0bw_16offset(T * des, const uint32_t *src) {
}

template<typename T>
void KVSE_pack_64len_0bw_24offset(T * des, const uint32_t *src) {
}

template<typename T>
void KVSE_pack_64len_1bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x1);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x1) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x1) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x1) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x1) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0x1) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[32+j] & 0x1) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[36+j] & 0x1) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[40+j] & 0x1) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[44+j] & 0x1) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[48+j] & 0x1) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[52+j] & 0x1) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[56+j] & 0x1) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[60+j] & 0x1) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[64+j] & 0x1) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[68+j] & 0x1) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[72+j] & 0x1) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[76+j] & 0x1) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[80+j] & 0x1) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[84+j] & 0x1) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[88+j] & 0x1) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[92+j] & 0x1) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[96+j] & 0x1) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[100+j] & 0x1) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[104+j] & 0x1) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[108+j] & 0x1) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[112+j] & 0x1) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[116+j] & 0x1) << 29;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[120+j] & 0x1) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[124+j] & 0x1) << 31;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[128+j] & 0x1);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[132+j] & 0x1) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[136+j] & 0x1) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[140+j] & 0x1) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[144+j] & 0x1) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[148+j] & 0x1) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[152+j] & 0x1) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[156+j] & 0x1) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[160+j] & 0x1) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[164+j] & 0x1) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[168+j] & 0x1) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[172+j] & 0x1) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[176+j] & 0x1) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[180+j] & 0x1) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[184+j] & 0x1) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[188+j] & 0x1) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[192+j] & 0x1) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[196+j] & 0x1) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[200+j] & 0x1) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[204+j] & 0x1) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[208+j] & 0x1) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[212+j] & 0x1) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[216+j] & 0x1) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[220+j] & 0x1) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[224+j] & 0x1) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[228+j] & 0x1) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[232+j] & 0x1) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[236+j] & 0x1) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[240+j] & 0x1) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[244+j] & 0x1) << 29;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[248+j] & 0x1) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[252+j] & 0x1) << 31;
	}
}

template<typename T>
void KVSE_pack_64len_1bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x1) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x1) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x1) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x1) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0x1) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[32+j] & 0x1) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[36+j] & 0x1) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[40+j] & 0x1) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[44+j] & 0x1) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[48+j] & 0x1) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[52+j] & 0x1) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[56+j] & 0x1) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[60+j] & 0x1) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[64+j] & 0x1) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[68+j] & 0x1) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[72+j] & 0x1) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[76+j] & 0x1) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[80+j] & 0x1) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[84+j] & 0x1) << 29;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[88+j] & 0x1) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[92+j] & 0x1) << 31;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[96+j] & 0x1);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[100+j] & 0x1) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[104+j] & 0x1) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[108+j] & 0x1) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[112+j] & 0x1) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[116+j] & 0x1) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[120+j] & 0x1) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[124+j] & 0x1) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[128+j] & 0x1) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[132+j] & 0x1) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[136+j] & 0x1) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[140+j] & 0x1) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[144+j] & 0x1) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[148+j] & 0x1) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[152+j] & 0x1) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[156+j] & 0x1) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[160+j] & 0x1) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[164+j] & 0x1) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[168+j] & 0x1) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[172+j] & 0x1) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[176+j] & 0x1) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[180+j] & 0x1) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[184+j] & 0x1) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[188+j] & 0x1) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[192+j] & 0x1) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[196+j] & 0x1) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[200+j] & 0x1) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[204+j] & 0x1) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[208+j] & 0x1) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[212+j] & 0x1) << 29;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[216+j] & 0x1) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[220+j] & 0x1) << 31;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[224+j] & 0x1);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[228+j] & 0x1) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[232+j] & 0x1) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[236+j] & 0x1) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[240+j] & 0x1) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[244+j] & 0x1) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[248+j] & 0x1) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[252+j] & 0x1) << 7;
	}
}

template<typename T>
void KVSE_pack_64len_1bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x1) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x1) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x1) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x1) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0x1) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[32+j] & 0x1) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[36+j] & 0x1) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[40+j] & 0x1) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[44+j] & 0x1) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[48+j] & 0x1) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[52+j] & 0x1) << 29;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[56+j] & 0x1) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[60+j] & 0x1) << 31;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[64+j] & 0x1);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[68+j] & 0x1) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[72+j] & 0x1) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[76+j] & 0x1) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[80+j] & 0x1) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[84+j] & 0x1) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[88+j] & 0x1) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[92+j] & 0x1) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[96+j] & 0x1) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[100+j] & 0x1) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[104+j] & 0x1) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[108+j] & 0x1) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[112+j] & 0x1) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[116+j] & 0x1) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[120+j] & 0x1) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[124+j] & 0x1) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[128+j] & 0x1) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[132+j] & 0x1) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[136+j] & 0x1) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[140+j] & 0x1) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[144+j] & 0x1) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[148+j] & 0x1) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[152+j] & 0x1) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[156+j] & 0x1) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[160+j] & 0x1) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[164+j] & 0x1) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[168+j] & 0x1) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[172+j] & 0x1) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[176+j] & 0x1) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[180+j] & 0x1) << 29;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[184+j] & 0x1) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[188+j] & 0x1) << 31;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[192+j] & 0x1);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[196+j] & 0x1) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[200+j] & 0x1) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[204+j] & 0x1) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[208+j] & 0x1) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[212+j] & 0x1) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[216+j] & 0x1) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[220+j] & 0x1) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[224+j] & 0x1) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[228+j] & 0x1) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[232+j] & 0x1) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[236+j] & 0x1) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[240+j] & 0x1) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[244+j] & 0x1) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[248+j] & 0x1) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[252+j] & 0x1) << 15;
	}
}

template<typename T>
void KVSE_pack_64len_1bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x1) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x1) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x1) << 29;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x1) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0x1) << 31;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[32+j] & 0x1);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0x1) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 0x1) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 0x1) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 0x1) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 0x1) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[56+j] & 0x1) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[60+j] & 0x1) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[64+j] & 0x1) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[68+j] & 0x1) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[72+j] & 0x1) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[76+j] & 0x1) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[80+j] & 0x1) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[84+j] & 0x1) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[88+j] & 0x1) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[92+j] & 0x1) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[96+j] & 0x1) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[100+j] & 0x1) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[104+j] & 0x1) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[108+j] & 0x1) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[112+j] & 0x1) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[116+j] & 0x1) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[120+j] & 0x1) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[124+j] & 0x1) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[128+j] & 0x1) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[132+j] & 0x1) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[136+j] & 0x1) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[140+j] & 0x1) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[144+j] & 0x1) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[148+j] & 0x1) << 29;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[152+j] & 0x1) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[156+j] & 0x1) << 31;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[160+j] & 0x1);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[164+j] & 0x1) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[168+j] & 0x1) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[172+j] & 0x1) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[176+j] & 0x1) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[180+j] & 0x1) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[184+j] & 0x1) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[188+j] & 0x1) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[192+j] & 0x1) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[196+j] & 0x1) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[200+j] & 0x1) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[204+j] & 0x1) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[208+j] & 0x1) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[212+j] & 0x1) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[216+j] & 0x1) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[220+j] & 0x1) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[224+j] & 0x1) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[228+j] & 0x1) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[232+j] & 0x1) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[236+j] & 0x1) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[240+j] & 0x1) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[244+j] & 0x1) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[248+j] & 0x1) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[252+j] & 0x1) << 23;
	}
}

template<typename T>
void KVSE_pack_64len_2bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x3);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x3) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x3) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x3) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0x3) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[32+j] & 0x3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[36+j] & 0x3) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[40+j] & 0x3) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[44+j] & 0x3) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[48+j] & 0x3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[52+j] & 0x3) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[56+j] & 0x3) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[60+j] & 0x3) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[64+j] & 0x3);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[68+j] & 0x3) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[72+j] & 0x3) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[76+j] & 0x3) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[80+j] & 0x3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[84+j] & 0x3) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[88+j] & 0x3) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[92+j] & 0x3) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[96+j] & 0x3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[100+j] & 0x3) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[104+j] & 0x3) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[108+j] & 0x3) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[112+j] & 0x3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[116+j] & 0x3) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[120+j] & 0x3) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[124+j] & 0x3) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[128+j] & 0x3);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[132+j] & 0x3) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[136+j] & 0x3) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[140+j] & 0x3) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[144+j] & 0x3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[148+j] & 0x3) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[152+j] & 0x3) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[156+j] & 0x3) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[160+j] & 0x3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[164+j] & 0x3) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[168+j] & 0x3) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[172+j] & 0x3) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[176+j] & 0x3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[180+j] & 0x3) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[184+j] & 0x3) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[188+j] & 0x3) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[192+j] & 0x3);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[196+j] & 0x3) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[200+j] & 0x3) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[204+j] & 0x3) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[208+j] & 0x3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[212+j] & 0x3) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[216+j] & 0x3) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[220+j] & 0x3) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[224+j] & 0x3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[228+j] & 0x3) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[232+j] & 0x3) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[236+j] & 0x3) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[240+j] & 0x3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[244+j] & 0x3) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[248+j] & 0x3) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[252+j] & 0x3) << 30;
	}
}

template<typename T>
void KVSE_pack_64len_2bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x3) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x3) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x3) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0x3) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[32+j] & 0x3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[36+j] & 0x3) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[40+j] & 0x3) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[44+j] & 0x3) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[48+j] & 0x3);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 0x3) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[56+j] & 0x3) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[60+j] & 0x3) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[64+j] & 0x3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[68+j] & 0x3) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[72+j] & 0x3) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[76+j] & 0x3) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[80+j] & 0x3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[84+j] & 0x3) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[88+j] & 0x3) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[92+j] & 0x3) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[96+j] & 0x3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[100+j] & 0x3) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[104+j] & 0x3) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[108+j] & 0x3) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[112+j] & 0x3);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[116+j] & 0x3) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[120+j] & 0x3) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[124+j] & 0x3) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[128+j] & 0x3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[132+j] & 0x3) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[136+j] & 0x3) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[140+j] & 0x3) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[144+j] & 0x3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[148+j] & 0x3) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[152+j] & 0x3) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[156+j] & 0x3) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[160+j] & 0x3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[164+j] & 0x3) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[168+j] & 0x3) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[172+j] & 0x3) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[176+j] & 0x3);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[180+j] & 0x3) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[184+j] & 0x3) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[188+j] & 0x3) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[192+j] & 0x3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[196+j] & 0x3) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[200+j] & 0x3) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[204+j] & 0x3) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[208+j] & 0x3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[212+j] & 0x3) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[216+j] & 0x3) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[220+j] & 0x3) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[224+j] & 0x3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[228+j] & 0x3) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[232+j] & 0x3) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[236+j] & 0x3) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[240+j] & 0x3);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[244+j] & 0x3) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[248+j] & 0x3) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[252+j] & 0x3) << 6;
	}
}

template<typename T>
void KVSE_pack_64len_2bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x3) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x3) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x3) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0x3) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[32+j] & 0x3);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0x3) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 0x3) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 0x3) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 0x3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 0x3) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[56+j] & 0x3) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[60+j] & 0x3) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[64+j] & 0x3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[68+j] & 0x3) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[72+j] & 0x3) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[76+j] & 0x3) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[80+j] & 0x3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[84+j] & 0x3) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[88+j] & 0x3) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[92+j] & 0x3) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[96+j] & 0x3);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[100+j] & 0x3) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[104+j] & 0x3) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[108+j] & 0x3) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[112+j] & 0x3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[116+j] & 0x3) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[120+j] & 0x3) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[124+j] & 0x3) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[128+j] & 0x3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[132+j] & 0x3) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[136+j] & 0x3) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[140+j] & 0x3) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[144+j] & 0x3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[148+j] & 0x3) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[152+j] & 0x3) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[156+j] & 0x3) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[160+j] & 0x3);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[164+j] & 0x3) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[168+j] & 0x3) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[172+j] & 0x3) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[176+j] & 0x3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[180+j] & 0x3) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[184+j] & 0x3) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[188+j] & 0x3) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[192+j] & 0x3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[196+j] & 0x3) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[200+j] & 0x3) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[204+j] & 0x3) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[208+j] & 0x3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[212+j] & 0x3) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[216+j] & 0x3) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[220+j] & 0x3) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[224+j] & 0x3);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[228+j] & 0x3) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[232+j] & 0x3) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[236+j] & 0x3) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[240+j] & 0x3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[244+j] & 0x3) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[248+j] & 0x3) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[252+j] & 0x3) << 14;
	}
}

template<typename T>
void KVSE_pack_64len_2bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x3) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[16+j] & 0x3);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x3) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x3) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x3) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 0x3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0x3) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 0x3) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 0x3) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 0x3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 0x3) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[56+j] & 0x3) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[60+j] & 0x3) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[64+j] & 0x3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[68+j] & 0x3) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[72+j] & 0x3) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[76+j] & 0x3) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[80+j] & 0x3);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[84+j] & 0x3) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[88+j] & 0x3) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[92+j] & 0x3) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[96+j] & 0x3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[100+j] & 0x3) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[104+j] & 0x3) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[108+j] & 0x3) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[112+j] & 0x3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[116+j] & 0x3) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[120+j] & 0x3) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[124+j] & 0x3) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[128+j] & 0x3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[132+j] & 0x3) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[136+j] & 0x3) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[140+j] & 0x3) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[144+j] & 0x3);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[148+j] & 0x3) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[152+j] & 0x3) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[156+j] & 0x3) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[160+j] & 0x3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[164+j] & 0x3) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[168+j] & 0x3) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[172+j] & 0x3) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[176+j] & 0x3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[180+j] & 0x3) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[184+j] & 0x3) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[188+j] & 0x3) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[192+j] & 0x3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[196+j] & 0x3) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[200+j] & 0x3) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[204+j] & 0x3) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[208+j] & 0x3);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[212+j] & 0x3) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[216+j] & 0x3) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[220+j] & 0x3) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[224+j] & 0x3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[228+j] & 0x3) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[232+j] & 0x3) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[236+j] & 0x3) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[240+j] & 0x3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[244+j] & 0x3) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[248+j] & 0x3) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[252+j] & 0x3) << 22;
	}
}

template<typename T>
void KVSE_pack_64len_3bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x7);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x7) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x7) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x7) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x7) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0x7) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[32+j] & 0x7) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[36+j] & 0x7) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[40+j] & 0x7) << 30;
		des[4+j] = (src[40+j] & 0x7) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 0x7) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 0x7) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 0x7) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[56+j] & 0x7) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[60+j] & 0x7) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[64+j] & 0x7) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[68+j] & 0x7) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[72+j] & 0x7) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[76+j] & 0x7) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[80+j] & 0x7) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[84+j] & 0x7) << 31;
		des[8+j] = (src[84+j] & 0x7) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[88+j] & 0x7) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[92+j] & 0x7) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[96+j] & 0x7) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[100+j] & 0x7) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[104+j] & 0x7) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[108+j] & 0x7) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[112+j] & 0x7) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[116+j] & 0x7) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[120+j] & 0x7) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[124+j] & 0x7) << 29;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[128+j] & 0x7);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[132+j] & 0x7) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[136+j] & 0x7) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[140+j] & 0x7) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[144+j] & 0x7) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[148+j] & 0x7) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[152+j] & 0x7) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[156+j] & 0x7) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[160+j] & 0x7) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[164+j] & 0x7) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[168+j] & 0x7) << 30;
		des[16+j] = (src[168+j] & 0x7) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[172+j] & 0x7) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[176+j] & 0x7) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[180+j] & 0x7) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[184+j] & 0x7) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[188+j] & 0x7) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[192+j] & 0x7) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[196+j] & 0x7) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[200+j] & 0x7) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[204+j] & 0x7) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[208+j] & 0x7) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[212+j] & 0x7) << 31;
		des[20+j] = (src[212+j] & 0x7) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[216+j] & 0x7) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[220+j] & 0x7) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[224+j] & 0x7) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[228+j] & 0x7) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[232+j] & 0x7) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[236+j] & 0x7) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[240+j] & 0x7) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[244+j] & 0x7) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[248+j] & 0x7) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[252+j] & 0x7) << 29;
	}
}

template<typename T>
void KVSE_pack_64len_3bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x7) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x7) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x7) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x7) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0x7) << 29;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[32+j] & 0x7);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0x7) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 0x7) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 0x7) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 0x7) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 0x7) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[56+j] & 0x7) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[60+j] & 0x7) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[64+j] & 0x7) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[68+j] & 0x7) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[72+j] & 0x7) << 30;
		des[8+j] = (src[72+j] & 0x7) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[76+j] & 0x7) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[80+j] & 0x7) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[84+j] & 0x7) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[88+j] & 0x7) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[92+j] & 0x7) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[96+j] & 0x7) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[100+j] & 0x7) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[104+j] & 0x7) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[108+j] & 0x7) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[112+j] & 0x7) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[116+j] & 0x7) << 31;
		des[12+j] = (src[116+j] & 0x7) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[120+j] & 0x7) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[124+j] & 0x7) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[128+j] & 0x7) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[132+j] & 0x7) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[136+j] & 0x7) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[140+j] & 0x7) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[144+j] & 0x7) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[148+j] & 0x7) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[152+j] & 0x7) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[156+j] & 0x7) << 29;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[160+j] & 0x7);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[164+j] & 0x7) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[168+j] & 0x7) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[172+j] & 0x7) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[176+j] & 0x7) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[180+j] & 0x7) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[184+j] & 0x7) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[188+j] & 0x7) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[192+j] & 0x7) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[196+j] & 0x7) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[200+j] & 0x7) << 30;
		des[20+j] = (src[200+j] & 0x7) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[204+j] & 0x7) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[208+j] & 0x7) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[212+j] & 0x7) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[216+j] & 0x7) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[220+j] & 0x7) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[224+j] & 0x7) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[228+j] & 0x7) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[232+j] & 0x7) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[236+j] & 0x7) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[240+j] & 0x7) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[244+j] & 0x7) << 31;
		des[24+j] = (src[244+j] & 0x7) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[248+j] & 0x7) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[252+j] & 0x7) << 5;
	}
}

template<typename T>
void KVSE_pack_64len_3bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x7) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x7) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x7) << 31;
		des[4+j] = (src[20+j] & 0x7) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x7) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x7) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 0x7) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0x7) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 0x7) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 0x7) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 0x7) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 0x7) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[56+j] & 0x7) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[60+j] & 0x7) << 29;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[64+j] & 0x7);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[68+j] & 0x7) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[72+j] & 0x7) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[76+j] & 0x7) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[80+j] & 0x7) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[84+j] & 0x7) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[88+j] & 0x7) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[92+j] & 0x7) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[96+j] & 0x7) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[100+j] & 0x7) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[104+j] & 0x7) << 30;
		des[12+j] = (src[104+j] & 0x7) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[108+j] & 0x7) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[112+j] & 0x7) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[116+j] & 0x7) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[120+j] & 0x7) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[124+j] & 0x7) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[128+j] & 0x7) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[132+j] & 0x7) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[136+j] & 0x7) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[140+j] & 0x7) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[144+j] & 0x7) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[148+j] & 0x7) << 31;
		des[16+j] = (src[148+j] & 0x7) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[152+j] & 0x7) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[156+j] & 0x7) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[160+j] & 0x7) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[164+j] & 0x7) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[168+j] & 0x7) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[172+j] & 0x7) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[176+j] & 0x7) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[180+j] & 0x7) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[184+j] & 0x7) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[188+j] & 0x7) << 29;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[192+j] & 0x7);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[196+j] & 0x7) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[200+j] & 0x7) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[204+j] & 0x7) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[208+j] & 0x7) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[212+j] & 0x7) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[216+j] & 0x7) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[220+j] & 0x7) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[224+j] & 0x7) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[228+j] & 0x7) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[232+j] & 0x7) << 30;
		des[24+j] = (src[232+j] & 0x7) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[236+j] & 0x7) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[240+j] & 0x7) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[244+j] & 0x7) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[248+j] & 0x7) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[252+j] & 0x7) << 13;
	}
}

template<typename T>
void KVSE_pack_64len_3bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7) << 30;
		des[4+j] = (src[8+j] & 0x7) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x7) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x7) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x7) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x7) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x7) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 0x7) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0x7) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 0x7) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 0x7) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 0x7) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 0x7) << 31;
		des[8+j] = (src[52+j] & 0x7) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[56+j] & 0x7) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[60+j] & 0x7) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[64+j] & 0x7) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[68+j] & 0x7) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[72+j] & 0x7) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[76+j] & 0x7) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[80+j] & 0x7) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[84+j] & 0x7) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[88+j] & 0x7) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[92+j] & 0x7) << 29;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[96+j] & 0x7);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[100+j] & 0x7) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[104+j] & 0x7) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[108+j] & 0x7) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[112+j] & 0x7) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[116+j] & 0x7) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[120+j] & 0x7) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[124+j] & 0x7) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[128+j] & 0x7) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[132+j] & 0x7) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[136+j] & 0x7) << 30;
		des[16+j] = (src[136+j] & 0x7) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[140+j] & 0x7) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[144+j] & 0x7) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[148+j] & 0x7) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[152+j] & 0x7) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[156+j] & 0x7) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[160+j] & 0x7) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[164+j] & 0x7) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[168+j] & 0x7) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[172+j] & 0x7) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[176+j] & 0x7) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[180+j] & 0x7) << 31;
		des[20+j] = (src[180+j] & 0x7) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[184+j] & 0x7) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[188+j] & 0x7) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[192+j] & 0x7) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[196+j] & 0x7) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[200+j] & 0x7) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[204+j] & 0x7) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[208+j] & 0x7) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[212+j] & 0x7) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[216+j] & 0x7) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[220+j] & 0x7) << 29;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[224+j] & 0x7);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[228+j] & 0x7) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[232+j] & 0x7) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[236+j] & 0x7) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[240+j] & 0x7) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[244+j] & 0x7) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[248+j] & 0x7) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[252+j] & 0x7) << 21;
	}
}

template<typename T>
void KVSE_pack_64len_4bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[32+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[56+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[60+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[64+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[68+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[72+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[76+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[80+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[84+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[88+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[92+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[96+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[100+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[104+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[108+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[112+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[116+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[120+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[124+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[128+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[132+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[136+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[140+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[144+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[148+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[152+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[156+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[160+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[164+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[168+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[172+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[176+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[180+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[184+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[188+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[192+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[196+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[200+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[204+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[208+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[212+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[216+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[220+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[224+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[228+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[232+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[236+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[240+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[244+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[248+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[252+j] & 0xf) << 28;
	}
}

template<typename T>
void KVSE_pack_64len_4bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[24+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[56+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[60+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[64+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[68+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[72+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[76+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[80+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[84+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[88+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[92+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[96+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[100+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[104+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[108+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[112+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[116+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[120+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[124+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[128+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[132+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[136+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[140+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[144+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[148+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[152+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[156+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[160+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[164+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[168+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[172+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[176+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[180+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[184+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[188+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[192+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[196+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[200+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[204+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[208+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[212+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[216+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[220+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[224+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[228+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[232+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[236+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[240+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[244+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[248+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[252+j] & 0xf) << 4;
	}
}

template<typename T>
void KVSE_pack_64len_4bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[16+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[48+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[56+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[60+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[64+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[68+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[72+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[76+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[80+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[84+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[88+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[92+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[96+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[100+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[104+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[108+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[112+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[116+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[120+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[124+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[128+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[132+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[136+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[140+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[144+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[148+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[152+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[156+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[160+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[164+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[168+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[172+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[176+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[180+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[184+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[188+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[192+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[196+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[200+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[204+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[208+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[212+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[216+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[220+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[224+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[228+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[232+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[236+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[240+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[244+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[248+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[252+j] & 0xf) << 12;
	}
}

template<typename T>
void KVSE_pack_64len_4bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[8+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[40+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[48+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[56+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[60+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[64+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[68+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[72+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[76+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[80+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[84+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[88+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[92+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[96+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[100+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[104+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[108+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[112+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[116+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[120+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[124+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[128+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[132+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[136+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[140+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[144+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[148+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[152+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[156+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[160+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[164+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[168+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[172+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[176+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[180+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[184+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[188+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[192+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[196+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[200+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[204+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[208+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[212+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[216+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[220+j] & 0xf) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[224+j] & 0xf) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[228+j] & 0xf) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[232+j] & 0xf);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[236+j] & 0xf) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[240+j] & 0xf) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[244+j] & 0xf) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[248+j] & 0xf) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[252+j] & 0xf) << 20;
	}
}

template<typename T>
void KVSE_pack_64len_5bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x1f);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1f) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x1f) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x1f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x1f) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 0x1f) << 30;
		des[4+j] = (src[24+j] & 0x1f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x1f) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 0x1f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0x1f) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 0x1f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 0x1f) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 0x1f) << 28;
		des[8+j] = (src[48+j] & 0x1f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 0x1f) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[56+j] & 0x1f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[60+j] & 0x1f) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[64+j] & 0x1f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[68+j] & 0x1f) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[72+j] & 0x1f) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[76+j] & 0x1f) << 31;
		des[12+j] = (src[76+j] & 0x1f) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[80+j] & 0x1f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[84+j] & 0x1f) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[88+j] & 0x1f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[92+j] & 0x1f) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[96+j] & 0x1f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[100+j] & 0x1f) << 29;
		des[16+j] = (src[100+j] & 0x1f) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[104+j] & 0x1f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[108+j] & 0x1f) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[112+j] & 0x1f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[116+j] & 0x1f) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[120+j] & 0x1f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[124+j] & 0x1f) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[128+j] & 0x1f);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[132+j] & 0x1f) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[136+j] & 0x1f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[140+j] & 0x1f) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[144+j] & 0x1f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[148+j] & 0x1f) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[152+j] & 0x1f) << 30;
		des[24+j] = (src[152+j] & 0x1f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[156+j] & 0x1f) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[160+j] & 0x1f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[164+j] & 0x1f) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[168+j] & 0x1f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[172+j] & 0x1f) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[176+j] & 0x1f) << 28;
		des[28+j] = (src[176+j] & 0x1f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[180+j] & 0x1f) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[184+j] & 0x1f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[188+j] & 0x1f) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[192+j] & 0x1f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[196+j] & 0x1f) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[200+j] & 0x1f) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[204+j] & 0x1f) << 31;
		des[32+j] = (src[204+j] & 0x1f) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[208+j] & 0x1f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[212+j] & 0x1f) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[216+j] & 0x1f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[220+j] & 0x1f) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[224+j] & 0x1f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[228+j] & 0x1f) << 29;
		des[36+j] = (src[228+j] & 0x1f) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[232+j] & 0x1f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[236+j] & 0x1f) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[240+j] & 0x1f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[244+j] & 0x1f) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[248+j] & 0x1f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[252+j] & 0x1f) << 27;
	}
}

template<typename T>
void KVSE_pack_64len_5bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1f) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x1f) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x1f) << 28;
		des[4+j] = (src[16+j] & 0x1f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x1f) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x1f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x1f) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 0x1f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0x1f) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 0x1f) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 0x1f) << 31;
		des[8+j] = (src[44+j] & 0x1f) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[48+j] & 0x1f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 0x1f) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[56+j] & 0x1f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[60+j] & 0x1f) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[64+j] & 0x1f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[68+j] & 0x1f) << 29;
		des[12+j] = (src[68+j] & 0x1f) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[72+j] & 0x1f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[76+j] & 0x1f) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[80+j] & 0x1f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[84+j] & 0x1f) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[88+j] & 0x1f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[92+j] & 0x1f) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[96+j] & 0x1f);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[100+j] & 0x1f) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[104+j] & 0x1f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[108+j] & 0x1f) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[112+j] & 0x1f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[116+j] & 0x1f) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[120+j] & 0x1f) << 30;
		des[20+j] = (src[120+j] & 0x1f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[124+j] & 0x1f) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[128+j] & 0x1f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[132+j] & 0x1f) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[136+j] & 0x1f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[140+j] & 0x1f) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[144+j] & 0x1f) << 28;
		des[24+j] = (src[144+j] & 0x1f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[148+j] & 0x1f) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[152+j] & 0x1f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[156+j] & 0x1f) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[160+j] & 0x1f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[164+j] & 0x1f) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[168+j] & 0x1f) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[172+j] & 0x1f) << 31;
		des[28+j] = (src[172+j] & 0x1f) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[176+j] & 0x1f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[180+j] & 0x1f) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[184+j] & 0x1f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[188+j] & 0x1f) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[192+j] & 0x1f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[196+j] & 0x1f) << 29;
		des[32+j] = (src[196+j] & 0x1f) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[200+j] & 0x1f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[204+j] & 0x1f) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[208+j] & 0x1f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[212+j] & 0x1f) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[216+j] & 0x1f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[220+j] & 0x1f) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[224+j] & 0x1f);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[228+j] & 0x1f) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[232+j] & 0x1f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[236+j] & 0x1f) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[240+j] & 0x1f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[244+j] & 0x1f) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[248+j] & 0x1f) << 30;
		des[40+j] = (src[248+j] & 0x1f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[252+j] & 0x1f) << 3;
	}
}

template<typename T>
void KVSE_pack_64len_5bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1f) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1f) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x1f) << 31;
		des[4+j] = (src[12+j] & 0x1f) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x1f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x1f) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x1f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x1f) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 0x1f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0x1f) << 29;
		des[8+j] = (src[36+j] & 0x1f) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 0x1f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 0x1f) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[48+j] & 0x1f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 0x1f) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[56+j] & 0x1f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[60+j] & 0x1f) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[64+j] & 0x1f);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[68+j] & 0x1f) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[72+j] & 0x1f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[76+j] & 0x1f) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[80+j] & 0x1f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[84+j] & 0x1f) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[88+j] & 0x1f) << 30;
		des[16+j] = (src[88+j] & 0x1f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[92+j] & 0x1f) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[96+j] & 0x1f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[100+j] & 0x1f) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[104+j] & 0x1f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[108+j] & 0x1f) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[112+j] & 0x1f) << 28;
		des[20+j] = (src[112+j] & 0x1f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[116+j] & 0x1f) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[120+j] & 0x1f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[124+j] & 0x1f) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[128+j] & 0x1f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[132+j] & 0x1f) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[136+j] & 0x1f) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[140+j] & 0x1f) << 31;
		des[24+j] = (src[140+j] & 0x1f) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[144+j] & 0x1f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[148+j] & 0x1f) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[152+j] & 0x1f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[156+j] & 0x1f) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[160+j] & 0x1f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[164+j] & 0x1f) << 29;
		des[28+j] = (src[164+j] & 0x1f) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[168+j] & 0x1f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[172+j] & 0x1f) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[176+j] & 0x1f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[180+j] & 0x1f) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[184+j] & 0x1f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[188+j] & 0x1f) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[192+j] & 0x1f);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[196+j] & 0x1f) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[200+j] & 0x1f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[204+j] & 0x1f) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[208+j] & 0x1f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[212+j] & 0x1f) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[216+j] & 0x1f) << 30;
		des[36+j] = (src[216+j] & 0x1f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[220+j] & 0x1f) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[224+j] & 0x1f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[228+j] & 0x1f) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[232+j] & 0x1f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[236+j] & 0x1f) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[240+j] & 0x1f) << 28;
		des[40+j] = (src[240+j] & 0x1f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[244+j] & 0x1f) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[248+j] & 0x1f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[252+j] & 0x1f) << 11;
	}
}

template<typename T>
void KVSE_pack_64len_5bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1f) << 29;
		des[4+j] = (src[4+j] & 0x1f) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x1f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x1f) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x1f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x1f) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x1f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x1f) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[32+j] & 0x1f);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 0x1f) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 0x1f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 0x1f) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[48+j] & 0x1f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 0x1f) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[56+j] & 0x1f) << 30;
		des[12+j] = (src[56+j] & 0x1f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[60+j] & 0x1f) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[64+j] & 0x1f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[68+j] & 0x1f) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[72+j] & 0x1f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[76+j] & 0x1f) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[80+j] & 0x1f) << 28;
		des[16+j] = (src[80+j] & 0x1f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[84+j] & 0x1f) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[88+j] & 0x1f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[92+j] & 0x1f) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[96+j] & 0x1f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[100+j] & 0x1f) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[104+j] & 0x1f) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[108+j] & 0x1f) << 31;
		des[20+j] = (src[108+j] & 0x1f) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[112+j] & 0x1f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[116+j] & 0x1f) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[120+j] & 0x1f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[124+j] & 0x1f) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[128+j] & 0x1f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[132+j] & 0x1f) << 29;
		des[24+j] = (src[132+j] & 0x1f) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[136+j] & 0x1f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[140+j] & 0x1f) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[144+j] & 0x1f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[148+j] & 0x1f) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[152+j] & 0x1f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[156+j] & 0x1f) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[160+j] & 0x1f);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[164+j] & 0x1f) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[168+j] & 0x1f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[172+j] & 0x1f) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[176+j] & 0x1f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[180+j] & 0x1f) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[184+j] & 0x1f) << 30;
		des[32+j] = (src[184+j] & 0x1f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[188+j] & 0x1f) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[192+j] & 0x1f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[196+j] & 0x1f) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[200+j] & 0x1f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[204+j] & 0x1f) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[208+j] & 0x1f) << 28;
		des[36+j] = (src[208+j] & 0x1f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[212+j] & 0x1f) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[216+j] & 0x1f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[220+j] & 0x1f) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[224+j] & 0x1f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[228+j] & 0x1f) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[232+j] & 0x1f) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[236+j] & 0x1f) << 31;
		des[40+j] = (src[236+j] & 0x1f) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[240+j] & 0x1f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[244+j] & 0x1f) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[248+j] & 0x1f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[252+j] & 0x1f) << 19;
	}
}

template<typename T>
void KVSE_pack_64len_6bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x3f);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x3f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x3f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 0x3f) << 30;
		des[4+j] = (src[20+j] & 0x3f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x3f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x3f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 0x3f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0x3f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 0x3f) << 28;
		des[8+j] = (src[40+j] & 0x3f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 0x3f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[48+j] & 0x3f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 0x3f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[56+j] & 0x3f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[60+j] & 0x3f) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[64+j] & 0x3f);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[68+j] & 0x3f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[72+j] & 0x3f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[76+j] & 0x3f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[80+j] & 0x3f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[84+j] & 0x3f) << 30;
		des[16+j] = (src[84+j] & 0x3f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[88+j] & 0x3f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[92+j] & 0x3f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[96+j] & 0x3f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[100+j] & 0x3f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[104+j] & 0x3f) << 28;
		des[20+j] = (src[104+j] & 0x3f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[108+j] & 0x3f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[112+j] & 0x3f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[116+j] & 0x3f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[120+j] & 0x3f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[124+j] & 0x3f) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[128+j] & 0x3f);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[132+j] & 0x3f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[136+j] & 0x3f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[140+j] & 0x3f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[144+j] & 0x3f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[148+j] & 0x3f) << 30;
		des[28+j] = (src[148+j] & 0x3f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[152+j] & 0x3f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[156+j] & 0x3f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[160+j] & 0x3f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[164+j] & 0x3f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[168+j] & 0x3f) << 28;
		des[32+j] = (src[168+j] & 0x3f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[172+j] & 0x3f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[176+j] & 0x3f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[180+j] & 0x3f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[184+j] & 0x3f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[188+j] & 0x3f) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[192+j] & 0x3f);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[196+j] & 0x3f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[200+j] & 0x3f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[204+j] & 0x3f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[208+j] & 0x3f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[212+j] & 0x3f) << 30;
		des[40+j] = (src[212+j] & 0x3f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[216+j] & 0x3f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[220+j] & 0x3f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[224+j] & 0x3f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[228+j] & 0x3f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[232+j] & 0x3f) << 28;
		des[44+j] = (src[232+j] & 0x3f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[236+j] & 0x3f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[240+j] & 0x3f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[244+j] & 0x3f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[248+j] & 0x3f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[252+j] & 0x3f) << 26;
	}
}

template<typename T>
void KVSE_pack_64len_6bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x3f) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[16+j] & 0x3f);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x3f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x3f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x3f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 0x3f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0x3f) << 30;
		des[8+j] = (src[36+j] & 0x3f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 0x3f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 0x3f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[48+j] & 0x3f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 0x3f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[56+j] & 0x3f) << 28;
		des[12+j] = (src[56+j] & 0x3f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[60+j] & 0x3f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[64+j] & 0x3f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[68+j] & 0x3f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[72+j] & 0x3f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[76+j] & 0x3f) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[80+j] & 0x3f);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[84+j] & 0x3f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[88+j] & 0x3f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[92+j] & 0x3f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[96+j] & 0x3f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[100+j] & 0x3f) << 30;
		des[20+j] = (src[100+j] & 0x3f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[104+j] & 0x3f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[108+j] & 0x3f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[112+j] & 0x3f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[116+j] & 0x3f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[120+j] & 0x3f) << 28;
		des[24+j] = (src[120+j] & 0x3f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[124+j] & 0x3f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[128+j] & 0x3f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[132+j] & 0x3f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[136+j] & 0x3f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[140+j] & 0x3f) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[144+j] & 0x3f);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[148+j] & 0x3f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[152+j] & 0x3f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[156+j] & 0x3f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[160+j] & 0x3f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[164+j] & 0x3f) << 30;
		des[32+j] = (src[164+j] & 0x3f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[168+j] & 0x3f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[172+j] & 0x3f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[176+j] & 0x3f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[180+j] & 0x3f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[184+j] & 0x3f) << 28;
		des[36+j] = (src[184+j] & 0x3f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[188+j] & 0x3f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[192+j] & 0x3f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[196+j] & 0x3f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[200+j] & 0x3f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[204+j] & 0x3f) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[208+j] & 0x3f);
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[212+j] & 0x3f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[216+j] & 0x3f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[220+j] & 0x3f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[224+j] & 0x3f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[228+j] & 0x3f) << 30;
		des[44+j] = (src[228+j] & 0x3f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[232+j] & 0x3f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[236+j] & 0x3f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[240+j] & 0x3f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[244+j] & 0x3f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[248+j] & 0x3f) << 28;
		des[48+j] = (src[248+j] & 0x3f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[252+j] & 0x3f) << 2;
	}
}

template<typename T>
void KVSE_pack_64len_6bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3f) << 28;
		des[4+j] = (src[8+j] & 0x3f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x3f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x3f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x3f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x3f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x3f) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[32+j] & 0x3f);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 0x3f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 0x3f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 0x3f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[48+j] & 0x3f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 0x3f) << 30;
		des[12+j] = (src[52+j] & 0x3f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[56+j] & 0x3f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[60+j] & 0x3f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[64+j] & 0x3f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[68+j] & 0x3f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[72+j] & 0x3f) << 28;
		des[16+j] = (src[72+j] & 0x3f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[76+j] & 0x3f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[80+j] & 0x3f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[84+j] & 0x3f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[88+j] & 0x3f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[92+j] & 0x3f) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[96+j] & 0x3f);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[100+j] & 0x3f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[104+j] & 0x3f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[108+j] & 0x3f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[112+j] & 0x3f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[116+j] & 0x3f) << 30;
		des[24+j] = (src[116+j] & 0x3f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[120+j] & 0x3f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[124+j] & 0x3f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[128+j] & 0x3f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[132+j] & 0x3f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[136+j] & 0x3f) << 28;
		des[28+j] = (src[136+j] & 0x3f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[140+j] & 0x3f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[144+j] & 0x3f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[148+j] & 0x3f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[152+j] & 0x3f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[156+j] & 0x3f) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[160+j] & 0x3f);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[164+j] & 0x3f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[168+j] & 0x3f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[172+j] & 0x3f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[176+j] & 0x3f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[180+j] & 0x3f) << 30;
		des[36+j] = (src[180+j] & 0x3f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[184+j] & 0x3f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[188+j] & 0x3f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[192+j] & 0x3f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[196+j] & 0x3f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[200+j] & 0x3f) << 28;
		des[40+j] = (src[200+j] & 0x3f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[204+j] & 0x3f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[208+j] & 0x3f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[212+j] & 0x3f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[216+j] & 0x3f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[220+j] & 0x3f) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[224+j] & 0x3f);
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[228+j] & 0x3f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[232+j] & 0x3f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[236+j] & 0x3f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[240+j] & 0x3f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[244+j] & 0x3f) << 30;
		des[48+j] = (src[244+j] & 0x3f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[248+j] & 0x3f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[252+j] & 0x3f) << 10;
	}
}

template<typename T>
void KVSE_pack_64len_6bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3f) << 30;
		des[4+j] = (src[4+j] & 0x3f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x3f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x3f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x3f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x3f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x3f) << 28;
		des[8+j] = (src[24+j] & 0x3f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x3f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 0x3f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 0x3f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 0x3f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 0x3f) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[48+j] & 0x3f);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[52+j] & 0x3f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[56+j] & 0x3f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[60+j] & 0x3f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[64+j] & 0x3f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[68+j] & 0x3f) << 30;
		des[16+j] = (src[68+j] & 0x3f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[72+j] & 0x3f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[76+j] & 0x3f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[80+j] & 0x3f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[84+j] & 0x3f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[88+j] & 0x3f) << 28;
		des[20+j] = (src[88+j] & 0x3f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[92+j] & 0x3f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[96+j] & 0x3f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[100+j] & 0x3f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[104+j] & 0x3f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[108+j] & 0x3f) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[112+j] & 0x3f);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[116+j] & 0x3f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[120+j] & 0x3f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[124+j] & 0x3f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[128+j] & 0x3f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[132+j] & 0x3f) << 30;
		des[28+j] = (src[132+j] & 0x3f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[136+j] & 0x3f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[140+j] & 0x3f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[144+j] & 0x3f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[148+j] & 0x3f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[152+j] & 0x3f) << 28;
		des[32+j] = (src[152+j] & 0x3f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[156+j] & 0x3f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[160+j] & 0x3f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[164+j] & 0x3f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[168+j] & 0x3f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[172+j] & 0x3f) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[176+j] & 0x3f);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[180+j] & 0x3f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[184+j] & 0x3f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[188+j] & 0x3f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[192+j] & 0x3f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[196+j] & 0x3f) << 30;
		des[40+j] = (src[196+j] & 0x3f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[200+j] & 0x3f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[204+j] & 0x3f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[208+j] & 0x3f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[212+j] & 0x3f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[216+j] & 0x3f) << 28;
		des[44+j] = (src[216+j] & 0x3f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[220+j] & 0x3f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[224+j] & 0x3f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[228+j] & 0x3f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[232+j] & 0x3f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[236+j] & 0x3f) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[240+j] & 0x3f);
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[244+j] & 0x3f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[248+j] & 0x3f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[252+j] & 0x3f) << 18;
	}
}

template<typename T>
void KVSE_pack_64len_7bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x7f);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7f) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x7f) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 0x7f) << 28;
		des[4+j] = (src[16+j] & 0x7f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x7f) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x7f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x7f) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 0x7f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 0x7f) << 31;
		des[8+j] = (src[36+j] & 0x7f) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 0x7f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 0x7f) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[48+j] & 0x7f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 0x7f) << 27;
		des[12+j] = (src[52+j] & 0x7f) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[56+j] & 0x7f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[60+j] & 0x7f) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[64+j] & 0x7f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[68+j] & 0x7f) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[72+j] & 0x7f) << 30;
		des[16+j] = (src[72+j] & 0x7f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[76+j] & 0x7f) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[80+j] & 0x7f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[84+j] & 0x7f) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[88+j] & 0x7f) << 26;
		des[20+j] = (src[88+j] & 0x7f) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[92+j] & 0x7f) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[96+j] & 0x7f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[100+j] & 0x7f) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[104+j] & 0x7f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[108+j] & 0x7f) << 29;
		des[24+j] = (src[108+j] & 0x7f) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[112+j] & 0x7f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[116+j] & 0x7f) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[120+j] & 0x7f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[124+j] & 0x7f) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[128+j] & 0x7f);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[132+j] & 0x7f) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[136+j] & 0x7f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[140+j] & 0x7f) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[144+j] & 0x7f) << 28;
		des[32+j] = (src[144+j] & 0x7f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[148+j] & 0x7f) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[152+j] & 0x7f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[156+j] & 0x7f) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[160+j] & 0x7f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[164+j] & 0x7f) << 31;
		des[36+j] = (src[164+j] & 0x7f) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[168+j] & 0x7f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[172+j] & 0x7f) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[176+j] & 0x7f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[180+j] & 0x7f) << 27;
		des[40+j] = (src[180+j] & 0x7f) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[184+j] & 0x7f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[188+j] & 0x7f) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[192+j] & 0x7f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[196+j] & 0x7f) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[200+j] & 0x7f) << 30;
		des[44+j] = (src[200+j] & 0x7f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[204+j] & 0x7f) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[208+j] & 0x7f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[212+j] & 0x7f) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[216+j] & 0x7f) << 26;
		des[48+j] = (src[216+j] & 0x7f) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[220+j] & 0x7f) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[224+j] & 0x7f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[228+j] & 0x7f) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[232+j] & 0x7f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[236+j] & 0x7f) << 29;
		des[52+j] = (src[236+j] & 0x7f) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[240+j] & 0x7f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[244+j] & 0x7f) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[248+j] & 0x7f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[252+j] & 0x7f) << 25;
	}
}

template<typename T>
void KVSE_pack_64len_7bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7f) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x7f) << 29;
		des[4+j] = (src[12+j] & 0x7f) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x7f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x7f) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x7f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x7f) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[32+j] & 0x7f);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 0x7f) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 0x7f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 0x7f) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[48+j] & 0x7f) << 28;
		des[12+j] = (src[48+j] & 0x7f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[52+j] & 0x7f) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[56+j] & 0x7f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[60+j] & 0x7f) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[64+j] & 0x7f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[68+j] & 0x7f) << 31;
		des[16+j] = (src[68+j] & 0x7f) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[72+j] & 0x7f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[76+j] & 0x7f) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[80+j] & 0x7f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[84+j] & 0x7f) << 27;
		des[20+j] = (src[84+j] & 0x7f) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[88+j] & 0x7f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[92+j] & 0x7f) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[96+j] & 0x7f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[100+j] & 0x7f) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[104+j] & 0x7f) << 30;
		des[24+j] = (src[104+j] & 0x7f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[108+j] & 0x7f) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[112+j] & 0x7f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[116+j] & 0x7f) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[120+j] & 0x7f) << 26;
		des[28+j] = (src[120+j] & 0x7f) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[124+j] & 0x7f) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[128+j] & 0x7f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[132+j] & 0x7f) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[136+j] & 0x7f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[140+j] & 0x7f) << 29;
		des[32+j] = (src[140+j] & 0x7f) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[144+j] & 0x7f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[148+j] & 0x7f) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[152+j] & 0x7f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[156+j] & 0x7f) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[160+j] & 0x7f);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[164+j] & 0x7f) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[168+j] & 0x7f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[172+j] & 0x7f) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[176+j] & 0x7f) << 28;
		des[40+j] = (src[176+j] & 0x7f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[180+j] & 0x7f) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[184+j] & 0x7f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[188+j] & 0x7f) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[192+j] & 0x7f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[196+j] & 0x7f) << 31;
		des[44+j] = (src[196+j] & 0x7f) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[200+j] & 0x7f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[204+j] & 0x7f) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[208+j] & 0x7f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[212+j] & 0x7f) << 27;
		des[48+j] = (src[212+j] & 0x7f) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[216+j] & 0x7f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[220+j] & 0x7f) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[224+j] & 0x7f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[228+j] & 0x7f) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[232+j] & 0x7f) << 30;
		des[52+j] = (src[232+j] & 0x7f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[236+j] & 0x7f) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[240+j] & 0x7f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[244+j] & 0x7f) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[248+j] & 0x7f) << 26;
		des[56+j] = (src[248+j] & 0x7f) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[252+j] & 0x7f) << 1;
	}
}

template<typename T>
void KVSE_pack_64len_7bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7f) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7f) << 30;
		des[4+j] = (src[8+j] & 0x7f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x7f) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x7f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x7f) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x7f) << 26;
		des[8+j] = (src[24+j] & 0x7f) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x7f) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 0x7f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 0x7f) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 0x7f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 0x7f) << 29;
		des[12+j] = (src[44+j] & 0x7f) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[48+j] & 0x7f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[52+j] & 0x7f) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[56+j] & 0x7f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[60+j] & 0x7f) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[64+j] & 0x7f);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[68+j] & 0x7f) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[72+j] & 0x7f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[76+j] & 0x7f) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[80+j] & 0x7f) << 28;
		des[20+j] = (src[80+j] & 0x7f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[84+j] & 0x7f) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[88+j] & 0x7f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[92+j] & 0x7f) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[96+j] & 0x7f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[100+j] & 0x7f) << 31;
		des[24+j] = (src[100+j] & 0x7f) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[104+j] & 0x7f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[108+j] & 0x7f) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[112+j] & 0x7f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[116+j] & 0x7f) << 27;
		des[28+j] = (src[116+j] & 0x7f) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[120+j] & 0x7f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[124+j] & 0x7f) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[128+j] & 0x7f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[132+j] & 0x7f) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[136+j] & 0x7f) << 30;
		des[32+j] = (src[136+j] & 0x7f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[140+j] & 0x7f) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[144+j] & 0x7f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[148+j] & 0x7f) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[152+j] & 0x7f) << 26;
		des[36+j] = (src[152+j] & 0x7f) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[156+j] & 0x7f) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[160+j] & 0x7f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[164+j] & 0x7f) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[168+j] & 0x7f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[172+j] & 0x7f) << 29;
		des[40+j] = (src[172+j] & 0x7f) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[176+j] & 0x7f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[180+j] & 0x7f) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[184+j] & 0x7f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[188+j] & 0x7f) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[192+j] & 0x7f);
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[196+j] & 0x7f) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[200+j] & 0x7f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[204+j] & 0x7f) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[208+j] & 0x7f) << 28;
		des[48+j] = (src[208+j] & 0x7f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[212+j] & 0x7f) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[216+j] & 0x7f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[220+j] & 0x7f) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[224+j] & 0x7f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[228+j] & 0x7f) << 31;
		des[52+j] = (src[228+j] & 0x7f) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[232+j] & 0x7f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[236+j] & 0x7f) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[240+j] & 0x7f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[244+j] & 0x7f) << 27;
		des[56+j] = (src[244+j] & 0x7f) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[248+j] & 0x7f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[252+j] & 0x7f) << 9;
	}
}

template<typename T>
void KVSE_pack_64len_7bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7f) << 31;
		des[4+j] = (src[4+j] & 0x7f) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x7f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x7f) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x7f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x7f) << 27;
		des[8+j] = (src[20+j] & 0x7f) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x7f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x7f) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 0x7f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 0x7f) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 0x7f) << 30;
		des[12+j] = (src[40+j] & 0x7f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 0x7f) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[48+j] & 0x7f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[52+j] & 0x7f) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[56+j] & 0x7f) << 26;
		des[16+j] = (src[56+j] & 0x7f) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[60+j] & 0x7f) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[64+j] & 0x7f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[68+j] & 0x7f) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[72+j] & 0x7f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[76+j] & 0x7f) << 29;
		des[20+j] = (src[76+j] & 0x7f) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[80+j] & 0x7f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[84+j] & 0x7f) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[88+j] & 0x7f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[92+j] & 0x7f) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[96+j] & 0x7f);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[100+j] & 0x7f) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[104+j] & 0x7f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[108+j] & 0x7f) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[112+j] & 0x7f) << 28;
		des[28+j] = (src[112+j] & 0x7f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[116+j] & 0x7f) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[120+j] & 0x7f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[124+j] & 0x7f) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[128+j] & 0x7f) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[132+j] & 0x7f) << 31;
		des[32+j] = (src[132+j] & 0x7f) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[136+j] & 0x7f) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[140+j] & 0x7f) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[144+j] & 0x7f) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[148+j] & 0x7f) << 27;
		des[36+j] = (src[148+j] & 0x7f) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[152+j] & 0x7f) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[156+j] & 0x7f) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[160+j] & 0x7f) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[164+j] & 0x7f) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[168+j] & 0x7f) << 30;
		des[40+j] = (src[168+j] & 0x7f) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[172+j] & 0x7f) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[176+j] & 0x7f) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[180+j] & 0x7f) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[184+j] & 0x7f) << 26;
		des[44+j] = (src[184+j] & 0x7f) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[188+j] & 0x7f) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[192+j] & 0x7f) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[196+j] & 0x7f) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[200+j] & 0x7f) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[204+j] & 0x7f) << 29;
		des[48+j] = (src[204+j] & 0x7f) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[208+j] & 0x7f) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[212+j] & 0x7f) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[216+j] & 0x7f) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[220+j] & 0x7f) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[224+j] & 0x7f);
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[228+j] & 0x7f) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[232+j] & 0x7f) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[236+j] & 0x7f) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[240+j] & 0x7f) << 28;
		des[56+j] = (src[240+j] & 0x7f) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[244+j] & 0x7f) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[248+j] & 0x7f) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[252+j] & 0x7f) << 17;
	}
}

template<typename T>
void KVSE_pack_64len_8bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[16+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[32+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[48+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[52+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[56+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[60+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[64+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[68+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[72+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[76+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[80+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[84+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[88+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[92+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[96+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[100+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[104+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[108+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[112+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[116+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[120+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[124+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[128+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[132+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[136+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[140+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[144+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[148+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[152+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[156+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[160+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[164+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[168+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[172+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[176+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[180+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[184+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[188+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[192+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[196+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[200+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[204+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[208+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[212+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[216+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[220+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[224+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[228+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[232+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[236+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[240+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[244+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[248+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[252+j] & 0xff) << 24;
	}
}

template<typename T>
void KVSE_pack_64len_8bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[12+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[28+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[44+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[48+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[52+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[56+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[60+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[64+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[68+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[72+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[76+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[80+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[84+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[88+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[92+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[96+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[100+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[104+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[108+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[112+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[116+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[120+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[124+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[128+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[132+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[136+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[140+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[144+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[148+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[152+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[156+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[160+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[164+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[168+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[172+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[176+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[180+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[184+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[188+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[192+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[196+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[200+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[204+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[208+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[212+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[216+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[220+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[224+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[228+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[232+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[236+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[240+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[244+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[248+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[252+j] & 0xff);
	}
}

template<typename T>
void KVSE_pack_64len_8bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[8+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[24+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[40+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[48+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[52+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[56+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[60+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[64+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[68+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[72+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[76+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[80+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[84+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[88+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[92+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[96+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[100+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[104+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[108+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[112+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[116+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[120+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[124+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[128+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[132+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[136+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[140+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[144+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[148+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[152+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[156+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[160+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[164+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[168+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[172+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[176+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[180+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[184+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[188+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[192+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[196+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[200+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[204+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[208+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[212+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[216+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[220+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[224+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[228+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[232+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[236+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[240+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[244+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[248+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[252+j] & 0xff) << 8;
	}
}

template<typename T>
void KVSE_pack_64len_8bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[20+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[36+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[48+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[52+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[56+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[60+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[64+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[68+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[72+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[76+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[80+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[84+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[88+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[92+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[96+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[100+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[104+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[108+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[112+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[116+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[120+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[124+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[128+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[132+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[136+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[140+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[144+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[148+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[152+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[156+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[160+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[164+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[168+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[172+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[176+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[180+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[184+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[188+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[192+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[196+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[200+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[204+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[208+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[212+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[216+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[220+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[224+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[228+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[232+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[236+j] & 0xff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[240+j] & 0xff) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[244+j] & 0xff);
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[248+j] & 0xff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[252+j] & 0xff) << 16;
	}
}

template<typename T>
void KVSE_pack_64len_9bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x1ff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1ff) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x1ff) << 27;
		des[4+j] = (src[12+j] & 0x1ff) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x1ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x1ff) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x1ff) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 0x1ff) << 31;
		des[8+j] = (src[28+j] & 0x1ff) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 0x1ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 0x1ff) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 0x1ff) << 26;
		des[12+j] = (src[40+j] & 0x1ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 0x1ff) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[48+j] & 0x1ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[52+j] & 0x1ff) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[56+j] & 0x1ff) << 30;
		des[16+j] = (src[56+j] & 0x1ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[60+j] & 0x1ff) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[64+j] & 0x1ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[68+j] & 0x1ff) << 25;
		des[20+j] = (src[68+j] & 0x1ff) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[72+j] & 0x1ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[76+j] & 0x1ff) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[80+j] & 0x1ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[84+j] & 0x1ff) << 29;
		des[24+j] = (src[84+j] & 0x1ff) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[88+j] & 0x1ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[92+j] & 0x1ff) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[96+j] & 0x1ff) << 24;
		des[28+j] = (src[96+j] & 0x1ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[100+j] & 0x1ff) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[104+j] & 0x1ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[108+j] & 0x1ff) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[112+j] & 0x1ff) << 28;
		des[32+j] = (src[112+j] & 0x1ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[116+j] & 0x1ff) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[120+j] & 0x1ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[124+j] & 0x1ff) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[128+j] & 0x1ff);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[132+j] & 0x1ff) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[136+j] & 0x1ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[140+j] & 0x1ff) << 27;
		des[40+j] = (src[140+j] & 0x1ff) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[144+j] & 0x1ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[148+j] & 0x1ff) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[152+j] & 0x1ff) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[156+j] & 0x1ff) << 31;
		des[44+j] = (src[156+j] & 0x1ff) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[160+j] & 0x1ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[164+j] & 0x1ff) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[168+j] & 0x1ff) << 26;
		des[48+j] = (src[168+j] & 0x1ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[172+j] & 0x1ff) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[176+j] & 0x1ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[180+j] & 0x1ff) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[184+j] & 0x1ff) << 30;
		des[52+j] = (src[184+j] & 0x1ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[188+j] & 0x1ff) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[192+j] & 0x1ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[196+j] & 0x1ff) << 25;
		des[56+j] = (src[196+j] & 0x1ff) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[200+j] & 0x1ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[204+j] & 0x1ff) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[208+j] & 0x1ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[212+j] & 0x1ff) << 29;
		des[60+j] = (src[212+j] & 0x1ff) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[216+j] & 0x1ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[220+j] & 0x1ff) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[224+j] & 0x1ff) << 24;
		des[64+j] = (src[224+j] & 0x1ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[228+j] & 0x1ff) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[232+j] & 0x1ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[236+j] & 0x1ff) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[240+j] & 0x1ff) << 28;
		des[68+j] = (src[240+j] & 0x1ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[244+j] & 0x1ff) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[248+j] & 0x1ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[252+j] & 0x1ff) << 23;
	}
}

template<typename T>
void KVSE_pack_64len_9bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1ff) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x1ff) << 26;
		des[4+j] = (src[8+j] & 0x1ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x1ff) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x1ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x1ff) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x1ff) << 30;
		des[8+j] = (src[24+j] & 0x1ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x1ff) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 0x1ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 0x1ff) << 25;
		des[12+j] = (src[36+j] & 0x1ff) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 0x1ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 0x1ff) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[48+j] & 0x1ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[52+j] & 0x1ff) << 29;
		des[16+j] = (src[52+j] & 0x1ff) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[56+j] & 0x1ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[60+j] & 0x1ff) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[64+j] & 0x1ff) << 24;
		des[20+j] = (src[64+j] & 0x1ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[68+j] & 0x1ff) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[72+j] & 0x1ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[76+j] & 0x1ff) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[80+j] & 0x1ff) << 28;
		des[24+j] = (src[80+j] & 0x1ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[84+j] & 0x1ff) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[88+j] & 0x1ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[92+j] & 0x1ff) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[96+j] & 0x1ff);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[100+j] & 0x1ff) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[104+j] & 0x1ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[108+j] & 0x1ff) << 27;
		des[32+j] = (src[108+j] & 0x1ff) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[112+j] & 0x1ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[116+j] & 0x1ff) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[120+j] & 0x1ff) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[124+j] & 0x1ff) << 31;
		des[36+j] = (src[124+j] & 0x1ff) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[128+j] & 0x1ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[132+j] & 0x1ff) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[136+j] & 0x1ff) << 26;
		des[40+j] = (src[136+j] & 0x1ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[140+j] & 0x1ff) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[144+j] & 0x1ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[148+j] & 0x1ff) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[152+j] & 0x1ff) << 30;
		des[44+j] = (src[152+j] & 0x1ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[156+j] & 0x1ff) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[160+j] & 0x1ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[164+j] & 0x1ff) << 25;
		des[48+j] = (src[164+j] & 0x1ff) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[168+j] & 0x1ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[172+j] & 0x1ff) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[176+j] & 0x1ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[180+j] & 0x1ff) << 29;
		des[52+j] = (src[180+j] & 0x1ff) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[184+j] & 0x1ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[188+j] & 0x1ff) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[192+j] & 0x1ff) << 24;
		des[56+j] = (src[192+j] & 0x1ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[196+j] & 0x1ff) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[200+j] & 0x1ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[204+j] & 0x1ff) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[208+j] & 0x1ff) << 28;
		des[60+j] = (src[208+j] & 0x1ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[212+j] & 0x1ff) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[216+j] & 0x1ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[220+j] & 0x1ff) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[224+j] & 0x1ff);
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[228+j] & 0x1ff) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[232+j] & 0x1ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[236+j] & 0x1ff) << 27;
		des[68+j] = (src[236+j] & 0x1ff) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[240+j] & 0x1ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[244+j] & 0x1ff) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[248+j] & 0x1ff) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[252+j] & 0x1ff) << 31;
		des[72+j] = (src[252+j] & 0x1ff) >> 1;
	}
}

template<typename T>
void KVSE_pack_64len_9bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x1ff) << 25;
		des[4+j] = (src[4+j] & 0x1ff) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x1ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x1ff) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x1ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x1ff) << 29;
		des[8+j] = (src[20+j] & 0x1ff) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x1ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x1ff) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 0x1ff) << 24;
		des[12+j] = (src[32+j] & 0x1ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 0x1ff) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 0x1ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 0x1ff) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[48+j] & 0x1ff) << 28;
		des[16+j] = (src[48+j] & 0x1ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 0x1ff) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[56+j] & 0x1ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[60+j] & 0x1ff) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[64+j] & 0x1ff);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[68+j] & 0x1ff) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[72+j] & 0x1ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[76+j] & 0x1ff) << 27;
		des[24+j] = (src[76+j] & 0x1ff) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[80+j] & 0x1ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[84+j] & 0x1ff) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[88+j] & 0x1ff) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[92+j] & 0x1ff) << 31;
		des[28+j] = (src[92+j] & 0x1ff) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[96+j] & 0x1ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[100+j] & 0x1ff) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[104+j] & 0x1ff) << 26;
		des[32+j] = (src[104+j] & 0x1ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[108+j] & 0x1ff) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[112+j] & 0x1ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[116+j] & 0x1ff) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[120+j] & 0x1ff) << 30;
		des[36+j] = (src[120+j] & 0x1ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[124+j] & 0x1ff) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[128+j] & 0x1ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[132+j] & 0x1ff) << 25;
		des[40+j] = (src[132+j] & 0x1ff) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[136+j] & 0x1ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[140+j] & 0x1ff) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[144+j] & 0x1ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[148+j] & 0x1ff) << 29;
		des[44+j] = (src[148+j] & 0x1ff) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[152+j] & 0x1ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[156+j] & 0x1ff) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[160+j] & 0x1ff) << 24;
		des[48+j] = (src[160+j] & 0x1ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[164+j] & 0x1ff) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[168+j] & 0x1ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[172+j] & 0x1ff) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[176+j] & 0x1ff) << 28;
		des[52+j] = (src[176+j] & 0x1ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[180+j] & 0x1ff) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[184+j] & 0x1ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[188+j] & 0x1ff) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[192+j] & 0x1ff);
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[196+j] & 0x1ff) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[200+j] & 0x1ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[204+j] & 0x1ff) << 27;
		des[60+j] = (src[204+j] & 0x1ff) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[208+j] & 0x1ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[212+j] & 0x1ff) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[216+j] & 0x1ff) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[220+j] & 0x1ff) << 31;
		des[64+j] = (src[220+j] & 0x1ff) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[224+j] & 0x1ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[228+j] & 0x1ff) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[232+j] & 0x1ff) << 26;
		des[68+j] = (src[232+j] & 0x1ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[236+j] & 0x1ff) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[240+j] & 0x1ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[244+j] & 0x1ff) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[248+j] & 0x1ff) << 30;
		des[72+j] = (src[248+j] & 0x1ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[252+j] & 0x1ff) << 7;
	}
}

template<typename T>
void KVSE_pack_64len_9bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x1ff) << 24;
		des[4+j] = (src[j] & 0x1ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0x1ff) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x1ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x1ff) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x1ff) << 28;
		des[8+j] = (src[16+j] & 0x1ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0x1ff) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x1ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x1ff) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[32+j] & 0x1ff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 0x1ff) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 0x1ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 0x1ff) << 27;
		des[16+j] = (src[44+j] & 0x1ff) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[48+j] & 0x1ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 0x1ff) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[56+j] & 0x1ff) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[60+j] & 0x1ff) << 31;
		des[20+j] = (src[60+j] & 0x1ff) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[64+j] & 0x1ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[68+j] & 0x1ff) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[72+j] & 0x1ff) << 26;
		des[24+j] = (src[72+j] & 0x1ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[76+j] & 0x1ff) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[80+j] & 0x1ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[84+j] & 0x1ff) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[88+j] & 0x1ff) << 30;
		des[28+j] = (src[88+j] & 0x1ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[92+j] & 0x1ff) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[96+j] & 0x1ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[100+j] & 0x1ff) << 25;
		des[32+j] = (src[100+j] & 0x1ff) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[104+j] & 0x1ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[108+j] & 0x1ff) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[112+j] & 0x1ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[116+j] & 0x1ff) << 29;
		des[36+j] = (src[116+j] & 0x1ff) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[120+j] & 0x1ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[124+j] & 0x1ff) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[128+j] & 0x1ff) << 24;
		des[40+j] = (src[128+j] & 0x1ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[132+j] & 0x1ff) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[136+j] & 0x1ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[140+j] & 0x1ff) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[144+j] & 0x1ff) << 28;
		des[44+j] = (src[144+j] & 0x1ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[148+j] & 0x1ff) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[152+j] & 0x1ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[156+j] & 0x1ff) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[160+j] & 0x1ff);
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[164+j] & 0x1ff) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[168+j] & 0x1ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[172+j] & 0x1ff) << 27;
		des[52+j] = (src[172+j] & 0x1ff) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[176+j] & 0x1ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[180+j] & 0x1ff) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[184+j] & 0x1ff) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[188+j] & 0x1ff) << 31;
		des[56+j] = (src[188+j] & 0x1ff) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[192+j] & 0x1ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[196+j] & 0x1ff) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[200+j] & 0x1ff) << 26;
		des[60+j] = (src[200+j] & 0x1ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[204+j] & 0x1ff) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[208+j] & 0x1ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[212+j] & 0x1ff) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[216+j] & 0x1ff) << 30;
		des[64+j] = (src[216+j] & 0x1ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[220+j] & 0x1ff) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[224+j] & 0x1ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[228+j] & 0x1ff) << 25;
		des[68+j] = (src[228+j] & 0x1ff) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[232+j] & 0x1ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[236+j] & 0x1ff) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[240+j] & 0x1ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[244+j] & 0x1ff) << 29;
		des[72+j] = (src[244+j] & 0x1ff) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[248+j] & 0x1ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[252+j] & 0x1ff) << 15;
	}
}

template<typename T>
void KVSE_pack_64len_10bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x3ff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 0x3ff) << 30;
		des[4+j] = (src[12+j] & 0x3ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x3ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x3ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 0x3ff) << 28;
		des[8+j] = (src[24+j] & 0x3ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x3ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 0x3ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 0x3ff) << 26;
		des[12+j] = (src[36+j] & 0x3ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 0x3ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 0x3ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[48+j] & 0x3ff) << 24;
		des[16+j] = (src[48+j] & 0x3ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 0x3ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[56+j] & 0x3ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[60+j] & 0x3ff) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[64+j] & 0x3ff);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[68+j] & 0x3ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[72+j] & 0x3ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[76+j] & 0x3ff) << 30;
		des[24+j] = (src[76+j] & 0x3ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[80+j] & 0x3ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[84+j] & 0x3ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[88+j] & 0x3ff) << 28;
		des[28+j] = (src[88+j] & 0x3ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[92+j] & 0x3ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[96+j] & 0x3ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[100+j] & 0x3ff) << 26;
		des[32+j] = (src[100+j] & 0x3ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[104+j] & 0x3ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[108+j] & 0x3ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[112+j] & 0x3ff) << 24;
		des[36+j] = (src[112+j] & 0x3ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[116+j] & 0x3ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[120+j] & 0x3ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[124+j] & 0x3ff) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[128+j] & 0x3ff);
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[132+j] & 0x3ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[136+j] & 0x3ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[140+j] & 0x3ff) << 30;
		des[44+j] = (src[140+j] & 0x3ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[144+j] & 0x3ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[148+j] & 0x3ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[152+j] & 0x3ff) << 28;
		des[48+j] = (src[152+j] & 0x3ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[156+j] & 0x3ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[160+j] & 0x3ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[164+j] & 0x3ff) << 26;
		des[52+j] = (src[164+j] & 0x3ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[168+j] & 0x3ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[172+j] & 0x3ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[176+j] & 0x3ff) << 24;
		des[56+j] = (src[176+j] & 0x3ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[180+j] & 0x3ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[184+j] & 0x3ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[188+j] & 0x3ff) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[192+j] & 0x3ff);
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[196+j] & 0x3ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[200+j] & 0x3ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[204+j] & 0x3ff) << 30;
		des[64+j] = (src[204+j] & 0x3ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[208+j] & 0x3ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[212+j] & 0x3ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[216+j] & 0x3ff) << 28;
		des[68+j] = (src[216+j] & 0x3ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[220+j] & 0x3ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[224+j] & 0x3ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[228+j] & 0x3ff) << 26;
		des[72+j] = (src[228+j] & 0x3ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[232+j] & 0x3ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[236+j] & 0x3ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[240+j] & 0x3ff) << 24;
		des[76+j] = (src[240+j] & 0x3ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[244+j] & 0x3ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[248+j] & 0x3ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[252+j] & 0x3ff) << 22;
	}
}

template<typename T>
void KVSE_pack_64len_10bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x3ff) << 28;
		des[4+j] = (src[8+j] & 0x3ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x3ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x3ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x3ff) << 26;
		des[8+j] = (src[20+j] & 0x3ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x3ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x3ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 0x3ff) << 24;
		des[12+j] = (src[32+j] & 0x3ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 0x3ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 0x3ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 0x3ff) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[48+j] & 0x3ff);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 0x3ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[56+j] & 0x3ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[60+j] & 0x3ff) << 30;
		des[20+j] = (src[60+j] & 0x3ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[64+j] & 0x3ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[68+j] & 0x3ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[72+j] & 0x3ff) << 28;
		des[24+j] = (src[72+j] & 0x3ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[76+j] & 0x3ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[80+j] & 0x3ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[84+j] & 0x3ff) << 26;
		des[28+j] = (src[84+j] & 0x3ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[88+j] & 0x3ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[92+j] & 0x3ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[96+j] & 0x3ff) << 24;
		des[32+j] = (src[96+j] & 0x3ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[100+j] & 0x3ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[104+j] & 0x3ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[108+j] & 0x3ff) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[112+j] & 0x3ff);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[116+j] & 0x3ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[120+j] & 0x3ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[124+j] & 0x3ff) << 30;
		des[40+j] = (src[124+j] & 0x3ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[128+j] & 0x3ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[132+j] & 0x3ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[136+j] & 0x3ff) << 28;
		des[44+j] = (src[136+j] & 0x3ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[140+j] & 0x3ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[144+j] & 0x3ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[148+j] & 0x3ff) << 26;
		des[48+j] = (src[148+j] & 0x3ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[152+j] & 0x3ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[156+j] & 0x3ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[160+j] & 0x3ff) << 24;
		des[52+j] = (src[160+j] & 0x3ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[164+j] & 0x3ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[168+j] & 0x3ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[172+j] & 0x3ff) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[176+j] & 0x3ff);
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[180+j] & 0x3ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[184+j] & 0x3ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[188+j] & 0x3ff) << 30;
		des[60+j] = (src[188+j] & 0x3ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[192+j] & 0x3ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[196+j] & 0x3ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[200+j] & 0x3ff) << 28;
		des[64+j] = (src[200+j] & 0x3ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[204+j] & 0x3ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[208+j] & 0x3ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[212+j] & 0x3ff) << 26;
		des[68+j] = (src[212+j] & 0x3ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[216+j] & 0x3ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[220+j] & 0x3ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[224+j] & 0x3ff) << 24;
		des[72+j] = (src[224+j] & 0x3ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[228+j] & 0x3ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[232+j] & 0x3ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[236+j] & 0x3ff) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[240+j] & 0x3ff);
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[244+j] & 0x3ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[248+j] & 0x3ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[252+j] & 0x3ff) << 30;
		des[80+j] = (src[252+j] & 0x3ff) >> 2;
	}
}

template<typename T>
void KVSE_pack_64len_10bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x3ff) << 26;
		des[4+j] = (src[4+j] & 0x3ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x3ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x3ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x3ff) << 24;
		des[8+j] = (src[16+j] & 0x3ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0x3ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x3ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x3ff) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[32+j] & 0x3ff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 0x3ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 0x3ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 0x3ff) << 30;
		des[16+j] = (src[44+j] & 0x3ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[48+j] & 0x3ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 0x3ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[56+j] & 0x3ff) << 28;
		des[20+j] = (src[56+j] & 0x3ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[60+j] & 0x3ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[64+j] & 0x3ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[68+j] & 0x3ff) << 26;
		des[24+j] = (src[68+j] & 0x3ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[72+j] & 0x3ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[76+j] & 0x3ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[80+j] & 0x3ff) << 24;
		des[28+j] = (src[80+j] & 0x3ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[84+j] & 0x3ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[88+j] & 0x3ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[92+j] & 0x3ff) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[96+j] & 0x3ff);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[100+j] & 0x3ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[104+j] & 0x3ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[108+j] & 0x3ff) << 30;
		des[36+j] = (src[108+j] & 0x3ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[112+j] & 0x3ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[116+j] & 0x3ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[120+j] & 0x3ff) << 28;
		des[40+j] = (src[120+j] & 0x3ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[124+j] & 0x3ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[128+j] & 0x3ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[132+j] & 0x3ff) << 26;
		des[44+j] = (src[132+j] & 0x3ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[136+j] & 0x3ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[140+j] & 0x3ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[144+j] & 0x3ff) << 24;
		des[48+j] = (src[144+j] & 0x3ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[148+j] & 0x3ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[152+j] & 0x3ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[156+j] & 0x3ff) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[160+j] & 0x3ff);
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[164+j] & 0x3ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[168+j] & 0x3ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[172+j] & 0x3ff) << 30;
		des[56+j] = (src[172+j] & 0x3ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[176+j] & 0x3ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[180+j] & 0x3ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[184+j] & 0x3ff) << 28;
		des[60+j] = (src[184+j] & 0x3ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[188+j] & 0x3ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[192+j] & 0x3ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[196+j] & 0x3ff) << 26;
		des[64+j] = (src[196+j] & 0x3ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[200+j] & 0x3ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[204+j] & 0x3ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[208+j] & 0x3ff) << 24;
		des[68+j] = (src[208+j] & 0x3ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[212+j] & 0x3ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[216+j] & 0x3ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[220+j] & 0x3ff) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[224+j] & 0x3ff);
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[228+j] & 0x3ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[232+j] & 0x3ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[236+j] & 0x3ff) << 30;
		des[76+j] = (src[236+j] & 0x3ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[240+j] & 0x3ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[244+j] & 0x3ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[248+j] & 0x3ff) << 28;
		des[80+j] = (src[248+j] & 0x3ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[252+j] & 0x3ff) << 6;
	}
}

template<typename T>
void KVSE_pack_64len_10bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x3ff) << 24;
		des[4+j] = (src[j] & 0x3ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0x3ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x3ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x3ff) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[16+j] & 0x3ff);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0x3ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x3ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x3ff) << 30;
		des[12+j] = (src[28+j] & 0x3ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[32+j] & 0x3ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 0x3ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 0x3ff) << 28;
		des[16+j] = (src[40+j] & 0x3ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 0x3ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[48+j] & 0x3ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 0x3ff) << 26;
		des[20+j] = (src[52+j] & 0x3ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[56+j] & 0x3ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[60+j] & 0x3ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[64+j] & 0x3ff) << 24;
		des[24+j] = (src[64+j] & 0x3ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[68+j] & 0x3ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[72+j] & 0x3ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[76+j] & 0x3ff) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[80+j] & 0x3ff);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[84+j] & 0x3ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[88+j] & 0x3ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[92+j] & 0x3ff) << 30;
		des[32+j] = (src[92+j] & 0x3ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[96+j] & 0x3ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[100+j] & 0x3ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[104+j] & 0x3ff) << 28;
		des[36+j] = (src[104+j] & 0x3ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[108+j] & 0x3ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[112+j] & 0x3ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[116+j] & 0x3ff) << 26;
		des[40+j] = (src[116+j] & 0x3ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[120+j] & 0x3ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[124+j] & 0x3ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[128+j] & 0x3ff) << 24;
		des[44+j] = (src[128+j] & 0x3ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[132+j] & 0x3ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[136+j] & 0x3ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[140+j] & 0x3ff) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[144+j] & 0x3ff);
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[148+j] & 0x3ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[152+j] & 0x3ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[156+j] & 0x3ff) << 30;
		des[52+j] = (src[156+j] & 0x3ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[160+j] & 0x3ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[164+j] & 0x3ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[168+j] & 0x3ff) << 28;
		des[56+j] = (src[168+j] & 0x3ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[172+j] & 0x3ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[176+j] & 0x3ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[180+j] & 0x3ff) << 26;
		des[60+j] = (src[180+j] & 0x3ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[184+j] & 0x3ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[188+j] & 0x3ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[192+j] & 0x3ff) << 24;
		des[64+j] = (src[192+j] & 0x3ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[196+j] & 0x3ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[200+j] & 0x3ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[204+j] & 0x3ff) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[208+j] & 0x3ff);
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[212+j] & 0x3ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[216+j] & 0x3ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[220+j] & 0x3ff) << 30;
		des[72+j] = (src[220+j] & 0x3ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[224+j] & 0x3ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[228+j] & 0x3ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[232+j] & 0x3ff) << 28;
		des[76+j] = (src[232+j] & 0x3ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[236+j] & 0x3ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[240+j] & 0x3ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[244+j] & 0x3ff) << 26;
		des[80+j] = (src[244+j] & 0x3ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[248+j] & 0x3ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[252+j] & 0x3ff) << 14;
	}
}

template<typename T>
void KVSE_pack_64len_11bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0x7ff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7ff) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7ff) << 22;
		des[4+j] = (src[8+j] & 0x7ff) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x7ff) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x7ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x7ff) << 23;
		des[8+j] = (src[20+j] & 0x7ff) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x7ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x7ff) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 0x7ff) << 24;
		des[12+j] = (src[32+j] & 0x7ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 0x7ff) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 0x7ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 0x7ff) << 25;
		des[16+j] = (src[44+j] & 0x7ff) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[48+j] & 0x7ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 0x7ff) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[56+j] & 0x7ff) << 26;
		des[20+j] = (src[56+j] & 0x7ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[60+j] & 0x7ff) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[64+j] & 0x7ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[68+j] & 0x7ff) << 27;
		des[24+j] = (src[68+j] & 0x7ff) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[72+j] & 0x7ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[76+j] & 0x7ff) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[80+j] & 0x7ff) << 28;
		des[28+j] = (src[80+j] & 0x7ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[84+j] & 0x7ff) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[88+j] & 0x7ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[92+j] & 0x7ff) << 29;
		des[32+j] = (src[92+j] & 0x7ff) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[96+j] & 0x7ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[100+j] & 0x7ff) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[104+j] & 0x7ff) << 30;
		des[36+j] = (src[104+j] & 0x7ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[108+j] & 0x7ff) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[112+j] & 0x7ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[116+j] & 0x7ff) << 31;
		des[40+j] = (src[116+j] & 0x7ff) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[120+j] & 0x7ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[124+j] & 0x7ff) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[128+j] & 0x7ff);
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[132+j] & 0x7ff) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[136+j] & 0x7ff) << 22;
		des[48+j] = (src[136+j] & 0x7ff) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[140+j] & 0x7ff) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[144+j] & 0x7ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[148+j] & 0x7ff) << 23;
		des[52+j] = (src[148+j] & 0x7ff) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[152+j] & 0x7ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[156+j] & 0x7ff) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[160+j] & 0x7ff) << 24;
		des[56+j] = (src[160+j] & 0x7ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[164+j] & 0x7ff) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[168+j] & 0x7ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[172+j] & 0x7ff) << 25;
		des[60+j] = (src[172+j] & 0x7ff) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[176+j] & 0x7ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[180+j] & 0x7ff) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[184+j] & 0x7ff) << 26;
		des[64+j] = (src[184+j] & 0x7ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[188+j] & 0x7ff) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[192+j] & 0x7ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[196+j] & 0x7ff) << 27;
		des[68+j] = (src[196+j] & 0x7ff) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[200+j] & 0x7ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[204+j] & 0x7ff) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[208+j] & 0x7ff) << 28;
		des[72+j] = (src[208+j] & 0x7ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[212+j] & 0x7ff) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[216+j] & 0x7ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[220+j] & 0x7ff) << 29;
		des[76+j] = (src[220+j] & 0x7ff) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[224+j] & 0x7ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[228+j] & 0x7ff) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[232+j] & 0x7ff) << 30;
		des[80+j] = (src[232+j] & 0x7ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[236+j] & 0x7ff) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[240+j] & 0x7ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[244+j] & 0x7ff) << 31;
		des[84+j] = (src[244+j] & 0x7ff) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[248+j] & 0x7ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[252+j] & 0x7ff) << 21;
	}
}

template<typename T>
void KVSE_pack_64len_11bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7ff) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0x7ff) << 30;
		des[4+j] = (src[8+j] & 0x7ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x7ff) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x7ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0x7ff) << 31;
		des[8+j] = (src[20+j] & 0x7ff) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x7ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x7ff) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[32+j] & 0x7ff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 0x7ff) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 0x7ff) << 22;
		des[16+j] = (src[40+j] & 0x7ff) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 0x7ff) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[48+j] & 0x7ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 0x7ff) << 23;
		des[20+j] = (src[52+j] & 0x7ff) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[56+j] & 0x7ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[60+j] & 0x7ff) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[64+j] & 0x7ff) << 24;
		des[24+j] = (src[64+j] & 0x7ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[68+j] & 0x7ff) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[72+j] & 0x7ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[76+j] & 0x7ff) << 25;
		des[28+j] = (src[76+j] & 0x7ff) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[80+j] & 0x7ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[84+j] & 0x7ff) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[88+j] & 0x7ff) << 26;
		des[32+j] = (src[88+j] & 0x7ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[92+j] & 0x7ff) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[96+j] & 0x7ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[100+j] & 0x7ff) << 27;
		des[36+j] = (src[100+j] & 0x7ff) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[104+j] & 0x7ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[108+j] & 0x7ff) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[112+j] & 0x7ff) << 28;
		des[40+j] = (src[112+j] & 0x7ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[116+j] & 0x7ff) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[120+j] & 0x7ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[124+j] & 0x7ff) << 29;
		des[44+j] = (src[124+j] & 0x7ff) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[128+j] & 0x7ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[132+j] & 0x7ff) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[136+j] & 0x7ff) << 30;
		des[48+j] = (src[136+j] & 0x7ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[140+j] & 0x7ff) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[144+j] & 0x7ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[148+j] & 0x7ff) << 31;
		des[52+j] = (src[148+j] & 0x7ff) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[152+j] & 0x7ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[156+j] & 0x7ff) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[160+j] & 0x7ff);
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[164+j] & 0x7ff) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[168+j] & 0x7ff) << 22;
		des[60+j] = (src[168+j] & 0x7ff) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[172+j] & 0x7ff) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[176+j] & 0x7ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[180+j] & 0x7ff) << 23;
		des[64+j] = (src[180+j] & 0x7ff) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[184+j] & 0x7ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[188+j] & 0x7ff) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[192+j] & 0x7ff) << 24;
		des[68+j] = (src[192+j] & 0x7ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[196+j] & 0x7ff) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[200+j] & 0x7ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[204+j] & 0x7ff) << 25;
		des[72+j] = (src[204+j] & 0x7ff) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[208+j] & 0x7ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[212+j] & 0x7ff) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[216+j] & 0x7ff) << 26;
		des[76+j] = (src[216+j] & 0x7ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[220+j] & 0x7ff) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[224+j] & 0x7ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[228+j] & 0x7ff) << 27;
		des[80+j] = (src[228+j] & 0x7ff) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[232+j] & 0x7ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[236+j] & 0x7ff) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[240+j] & 0x7ff) << 28;
		des[84+j] = (src[240+j] & 0x7ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[244+j] & 0x7ff) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[248+j] & 0x7ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[252+j] & 0x7ff) << 29;
		des[88+j] = (src[252+j] & 0x7ff) >> 3;
	}
}

template<typename T>
void KVSE_pack_64len_11bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0x7ff) << 27;
		des[4+j] = (src[4+j] & 0x7ff) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x7ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x7ff) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0x7ff) << 28;
		des[8+j] = (src[16+j] & 0x7ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0x7ff) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x7ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0x7ff) << 29;
		des[12+j] = (src[28+j] & 0x7ff) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[32+j] & 0x7ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 0x7ff) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 0x7ff) << 30;
		des[16+j] = (src[40+j] & 0x7ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 0x7ff) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[48+j] & 0x7ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 0x7ff) << 31;
		des[20+j] = (src[52+j] & 0x7ff) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[56+j] & 0x7ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[60+j] & 0x7ff) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[64+j] & 0x7ff);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[68+j] & 0x7ff) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[72+j] & 0x7ff) << 22;
		des[28+j] = (src[72+j] & 0x7ff) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[76+j] & 0x7ff) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[80+j] & 0x7ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[84+j] & 0x7ff) << 23;
		des[32+j] = (src[84+j] & 0x7ff) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[88+j] & 0x7ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[92+j] & 0x7ff) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[96+j] & 0x7ff) << 24;
		des[36+j] = (src[96+j] & 0x7ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[100+j] & 0x7ff) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[104+j] & 0x7ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[108+j] & 0x7ff) << 25;
		des[40+j] = (src[108+j] & 0x7ff) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[112+j] & 0x7ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[116+j] & 0x7ff) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[120+j] & 0x7ff) << 26;
		des[44+j] = (src[120+j] & 0x7ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[124+j] & 0x7ff) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[128+j] & 0x7ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[132+j] & 0x7ff) << 27;
		des[48+j] = (src[132+j] & 0x7ff) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[136+j] & 0x7ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[140+j] & 0x7ff) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[144+j] & 0x7ff) << 28;
		des[52+j] = (src[144+j] & 0x7ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[148+j] & 0x7ff) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[152+j] & 0x7ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[156+j] & 0x7ff) << 29;
		des[56+j] = (src[156+j] & 0x7ff) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[160+j] & 0x7ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[164+j] & 0x7ff) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[168+j] & 0x7ff) << 30;
		des[60+j] = (src[168+j] & 0x7ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[172+j] & 0x7ff) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[176+j] & 0x7ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[180+j] & 0x7ff) << 31;
		des[64+j] = (src[180+j] & 0x7ff) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[184+j] & 0x7ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[188+j] & 0x7ff) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[192+j] & 0x7ff);
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[196+j] & 0x7ff) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[200+j] & 0x7ff) << 22;
		des[72+j] = (src[200+j] & 0x7ff) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[204+j] & 0x7ff) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[208+j] & 0x7ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[212+j] & 0x7ff) << 23;
		des[76+j] = (src[212+j] & 0x7ff) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[216+j] & 0x7ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[220+j] & 0x7ff) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[224+j] & 0x7ff) << 24;
		des[80+j] = (src[224+j] & 0x7ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[228+j] & 0x7ff) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[232+j] & 0x7ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[236+j] & 0x7ff) << 25;
		des[84+j] = (src[236+j] & 0x7ff) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[240+j] & 0x7ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[244+j] & 0x7ff) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[248+j] & 0x7ff) << 26;
		des[88+j] = (src[248+j] & 0x7ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[252+j] & 0x7ff) << 5;
	}
}

template<typename T>
void KVSE_pack_64len_11bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0x7ff) << 24;
		des[4+j] = (src[j] & 0x7ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0x7ff) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0x7ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0x7ff) << 25;
		des[8+j] = (src[12+j] & 0x7ff) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 0x7ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0x7ff) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0x7ff) << 26;
		des[12+j] = (src[24+j] & 0x7ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 0x7ff) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[32+j] & 0x7ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 0x7ff) << 27;
		des[16+j] = (src[36+j] & 0x7ff) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[40+j] & 0x7ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 0x7ff) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[48+j] & 0x7ff) << 28;
		des[20+j] = (src[48+j] & 0x7ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[52+j] & 0x7ff) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[56+j] & 0x7ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[60+j] & 0x7ff) << 29;
		des[24+j] = (src[60+j] & 0x7ff) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[64+j] & 0x7ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[68+j] & 0x7ff) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[72+j] & 0x7ff) << 30;
		des[28+j] = (src[72+j] & 0x7ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[76+j] & 0x7ff) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[80+j] & 0x7ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[84+j] & 0x7ff) << 31;
		des[32+j] = (src[84+j] & 0x7ff) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[88+j] & 0x7ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[92+j] & 0x7ff) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[96+j] & 0x7ff);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[100+j] & 0x7ff) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[104+j] & 0x7ff) << 22;
		des[40+j] = (src[104+j] & 0x7ff) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[108+j] & 0x7ff) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[112+j] & 0x7ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[116+j] & 0x7ff) << 23;
		des[44+j] = (src[116+j] & 0x7ff) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[120+j] & 0x7ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[124+j] & 0x7ff) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[128+j] & 0x7ff) << 24;
		des[48+j] = (src[128+j] & 0x7ff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[132+j] & 0x7ff) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[136+j] & 0x7ff) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[140+j] & 0x7ff) << 25;
		des[52+j] = (src[140+j] & 0x7ff) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[144+j] & 0x7ff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[148+j] & 0x7ff) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[152+j] & 0x7ff) << 26;
		des[56+j] = (src[152+j] & 0x7ff) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[156+j] & 0x7ff) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[160+j] & 0x7ff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[164+j] & 0x7ff) << 27;
		des[60+j] = (src[164+j] & 0x7ff) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[168+j] & 0x7ff) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[172+j] & 0x7ff) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[176+j] & 0x7ff) << 28;
		des[64+j] = (src[176+j] & 0x7ff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[180+j] & 0x7ff) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[184+j] & 0x7ff) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[188+j] & 0x7ff) << 29;
		des[68+j] = (src[188+j] & 0x7ff) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[192+j] & 0x7ff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[196+j] & 0x7ff) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[200+j] & 0x7ff) << 30;
		des[72+j] = (src[200+j] & 0x7ff) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[204+j] & 0x7ff) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[208+j] & 0x7ff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[212+j] & 0x7ff) << 31;
		des[76+j] = (src[212+j] & 0x7ff) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[216+j] & 0x7ff) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[220+j] & 0x7ff) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[224+j] & 0x7ff);
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[228+j] & 0x7ff) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[232+j] & 0x7ff) << 22;
		des[84+j] = (src[232+j] & 0x7ff) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[236+j] & 0x7ff) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[240+j] & 0x7ff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[244+j] & 0x7ff) << 23;
		des[88+j] = (src[244+j] & 0x7ff) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[248+j] & 0x7ff) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[252+j] & 0x7ff) << 13;
	}
}

template<typename T>
void KVSE_pack_64len_12bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 0xfff) << 24;
		des[4+j] = (src[8+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 0xfff) << 28;
		des[8+j] = (src[20+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[32+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 0xfff) << 24;
		des[16+j] = (src[40+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[48+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 0xfff) << 28;
		des[20+j] = (src[52+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[56+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[60+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[64+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[68+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[72+j] & 0xfff) << 24;
		des[28+j] = (src[72+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[76+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[80+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[84+j] & 0xfff) << 28;
		des[32+j] = (src[84+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[88+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[92+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[96+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[100+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[104+j] & 0xfff) << 24;
		des[40+j] = (src[104+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[108+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[112+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[116+j] & 0xfff) << 28;
		des[44+j] = (src[116+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[120+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[124+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[128+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[132+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[136+j] & 0xfff) << 24;
		des[52+j] = (src[136+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[140+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[144+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[148+j] & 0xfff) << 28;
		des[56+j] = (src[148+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[152+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[156+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[160+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[164+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[168+j] & 0xfff) << 24;
		des[64+j] = (src[168+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[172+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[176+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[180+j] & 0xfff) << 28;
		des[68+j] = (src[180+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[184+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[188+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[192+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[196+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[200+j] & 0xfff) << 24;
		des[76+j] = (src[200+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[204+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[208+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[212+j] & 0xfff) << 28;
		des[80+j] = (src[212+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[216+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[220+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[224+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[228+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[232+j] & 0xfff) << 24;
		des[88+j] = (src[232+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[236+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[240+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[244+j] & 0xfff) << 28;
		des[92+j] = (src[244+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[248+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[252+j] & 0xfff) << 20;
	}
}

template<typename T>
void KVSE_pack_64len_12bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[8+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 0xfff) << 24;
		des[8+j] = (src[16+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 0xfff) << 28;
		des[12+j] = (src[28+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[32+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[40+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[48+j] & 0xfff) << 24;
		des[20+j] = (src[48+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[52+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[56+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[60+j] & 0xfff) << 28;
		des[24+j] = (src[60+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[64+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[68+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[72+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[76+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[80+j] & 0xfff) << 24;
		des[32+j] = (src[80+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[84+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[88+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[92+j] & 0xfff) << 28;
		des[36+j] = (src[92+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[96+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[100+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[104+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[108+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[112+j] & 0xfff) << 24;
		des[44+j] = (src[112+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[116+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[120+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[124+j] & 0xfff) << 28;
		des[48+j] = (src[124+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[128+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[132+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[136+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[140+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[144+j] & 0xfff) << 24;
		des[56+j] = (src[144+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[148+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[152+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[156+j] & 0xfff) << 28;
		des[60+j] = (src[156+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[160+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[164+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[168+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[172+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[176+j] & 0xfff) << 24;
		des[68+j] = (src[176+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[180+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[184+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[188+j] & 0xfff) << 28;
		des[72+j] = (src[188+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[192+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[196+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[200+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[204+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[208+j] & 0xfff) << 24;
		des[80+j] = (src[208+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[212+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[216+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[220+j] & 0xfff) << 28;
		des[84+j] = (src[220+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[224+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[228+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[232+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[236+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[240+j] & 0xfff) << 24;
		des[92+j] = (src[240+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[244+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[248+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[252+j] & 0xfff) << 28;
		des[96+j] = (src[252+j] & 0xfff) >> 4;
	}
}

template<typename T>
void KVSE_pack_64len_12bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xfff) << 28;
		des[4+j] = (src[4+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[16+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 0xfff) << 24;
		des[12+j] = (src[24+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[32+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 0xfff) << 28;
		des[16+j] = (src[36+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[40+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[48+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[52+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[56+j] & 0xfff) << 24;
		des[24+j] = (src[56+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[60+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[64+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[68+j] & 0xfff) << 28;
		des[28+j] = (src[68+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[72+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[76+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[80+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[84+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[88+j] & 0xfff) << 24;
		des[36+j] = (src[88+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[92+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[96+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[100+j] & 0xfff) << 28;
		des[40+j] = (src[100+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[104+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[108+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[112+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[116+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[120+j] & 0xfff) << 24;
		des[48+j] = (src[120+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[124+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[128+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[132+j] & 0xfff) << 28;
		des[52+j] = (src[132+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[136+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[140+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[144+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[148+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[152+j] & 0xfff) << 24;
		des[60+j] = (src[152+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[156+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[160+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[164+j] & 0xfff) << 28;
		des[64+j] = (src[164+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[168+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[172+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[176+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[180+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[184+j] & 0xfff) << 24;
		des[72+j] = (src[184+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[188+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[192+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[196+j] & 0xfff) << 28;
		des[76+j] = (src[196+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[200+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[204+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[208+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[212+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[216+j] & 0xfff) << 24;
		des[84+j] = (src[216+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[220+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[224+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[228+j] & 0xfff) << 28;
		des[88+j] = (src[228+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[232+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[236+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[240+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[244+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[248+j] & 0xfff) << 24;
		des[96+j] = (src[248+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[252+j] & 0xfff) << 4;
	}
}

template<typename T>
void KVSE_pack_64len_12bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xfff) << 24;
		des[4+j] = (src[j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xfff) << 28;
		des[8+j] = (src[12+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[24+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[32+j] & 0xfff) << 24;
		des[16+j] = (src[32+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[36+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[40+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 0xfff) << 28;
		des[20+j] = (src[44+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[48+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[52+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[56+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[60+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[64+j] & 0xfff) << 24;
		des[28+j] = (src[64+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[68+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[72+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[76+j] & 0xfff) << 28;
		des[32+j] = (src[76+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[80+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[84+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[88+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[92+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[96+j] & 0xfff) << 24;
		des[40+j] = (src[96+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[100+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[104+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[108+j] & 0xfff) << 28;
		des[44+j] = (src[108+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[112+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[116+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[120+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[124+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[128+j] & 0xfff) << 24;
		des[52+j] = (src[128+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[132+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[136+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[140+j] & 0xfff) << 28;
		des[56+j] = (src[140+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[144+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[148+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[152+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[156+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[160+j] & 0xfff) << 24;
		des[64+j] = (src[160+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[164+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[168+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[172+j] & 0xfff) << 28;
		des[68+j] = (src[172+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[176+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[180+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[184+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[188+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[192+j] & 0xfff) << 24;
		des[76+j] = (src[192+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[196+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[200+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[204+j] & 0xfff) << 28;
		des[80+j] = (src[204+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[208+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[212+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[216+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[220+j] & 0xfff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[224+j] & 0xfff) << 24;
		des[88+j] = (src[224+j] & 0xfff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[228+j] & 0xfff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[232+j] & 0xfff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[236+j] & 0xfff) << 28;
		des[92+j] = (src[236+j] & 0xfff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[240+j] & 0xfff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[244+j] & 0xfff) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[248+j] & 0xfff);
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[252+j] & 0xfff) << 12;
	}
}

template<typename T>
void KVSE_pack_64len_16bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[8+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[16+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[24+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[32+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[36+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[40+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[44+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[48+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[52+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[56+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[60+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[64+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[68+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[72+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[76+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[80+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[84+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[88+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[92+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[96+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[100+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[104+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[108+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[112+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[116+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[120+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[124+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[128+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[132+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[136+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[140+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[144+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[148+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[152+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[156+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[160+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[164+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[168+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[172+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[176+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[180+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[184+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[188+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[192+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[196+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[200+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[100+j] |= (src[204+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[208+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[104+j] |= (src[212+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[216+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[108+j] |= (src[220+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[224+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[112+j] |= (src[228+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[232+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[116+j] |= (src[236+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[240+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[120+j] |= (src[244+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[248+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[124+j] |= (src[252+j] & 0xffff) << 16;
	}
}

template<typename T>
void KVSE_pack_64len_16bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xffff) << 24;
		des[4+j] = (src[4+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xffff) << 24;
		des[8+j] = (src[12+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 0xffff) << 24;
		des[12+j] = (src[20+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 0xffff) << 24;
		des[16+j] = (src[28+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[32+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[36+j] & 0xffff) << 24;
		des[20+j] = (src[36+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[40+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[44+j] & 0xffff) << 24;
		des[24+j] = (src[44+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[48+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[52+j] & 0xffff) << 24;
		des[28+j] = (src[52+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[56+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[60+j] & 0xffff) << 24;
		des[32+j] = (src[60+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[64+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[68+j] & 0xffff) << 24;
		des[36+j] = (src[68+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[72+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[76+j] & 0xffff) << 24;
		des[40+j] = (src[76+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[80+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[84+j] & 0xffff) << 24;
		des[44+j] = (src[84+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[88+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[92+j] & 0xffff) << 24;
		des[48+j] = (src[92+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[96+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[100+j] & 0xffff) << 24;
		des[52+j] = (src[100+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[104+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[108+j] & 0xffff) << 24;
		des[56+j] = (src[108+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[112+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[116+j] & 0xffff) << 24;
		des[60+j] = (src[116+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[120+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[124+j] & 0xffff) << 24;
		des[64+j] = (src[124+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[128+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[132+j] & 0xffff) << 24;
		des[68+j] = (src[132+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[136+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[140+j] & 0xffff) << 24;
		des[72+j] = (src[140+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[144+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[148+j] & 0xffff) << 24;
		des[76+j] = (src[148+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[152+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[156+j] & 0xffff) << 24;
		des[80+j] = (src[156+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[160+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[164+j] & 0xffff) << 24;
		des[84+j] = (src[164+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[168+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[172+j] & 0xffff) << 24;
		des[88+j] = (src[172+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[176+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[180+j] & 0xffff) << 24;
		des[92+j] = (src[180+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[184+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[188+j] & 0xffff) << 24;
		des[96+j] = (src[188+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[192+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[196+j] & 0xffff) << 24;
		des[100+j] = (src[196+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] |= (src[200+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] |= (src[204+j] & 0xffff) << 24;
		des[104+j] = (src[204+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] |= (src[208+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] |= (src[212+j] & 0xffff) << 24;
		des[108+j] = (src[212+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] |= (src[216+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] |= (src[220+j] & 0xffff) << 24;
		des[112+j] = (src[220+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] |= (src[224+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] |= (src[228+j] & 0xffff) << 24;
		des[116+j] = (src[228+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] |= (src[232+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] |= (src[236+j] & 0xffff) << 24;
		des[120+j] = (src[236+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] |= (src[240+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] |= (src[244+j] & 0xffff) << 24;
		des[124+j] = (src[244+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] |= (src[248+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] |= (src[252+j] & 0xffff) << 24;
		des[128+j] = (src[252+j] & 0xffff) >> 8;
	}
}

template<typename T>
void KVSE_pack_64len_16bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[12+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[20+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[28+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[32+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[36+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[40+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[44+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[48+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[52+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[56+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[60+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[64+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[68+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[72+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[76+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[80+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[84+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[88+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[92+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[96+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[100+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[104+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[108+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[112+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[116+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[120+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[124+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[128+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[132+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[136+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[140+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[144+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[148+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[152+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[156+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[160+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[164+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[168+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[172+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[176+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[180+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[184+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[188+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[192+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[196+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[100+j] |= (src[200+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] = (src[204+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[104+j] |= (src[208+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[212+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[108+j] |= (src[216+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[220+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[112+j] |= (src[224+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[228+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[116+j] |= (src[232+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[236+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[120+j] |= (src[240+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] = (src[244+j] & 0xffff);
	}
	for (int j=0; j<4; ++j) {
		des[124+j] |= (src[248+j] & 0xffff) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[252+j] & 0xffff);
	}
}

template<typename T>
void KVSE_pack_64len_16bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xffff) << 24;
		des[4+j] = (src[j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xffff) << 24;
		des[8+j] = (src[8+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 0xffff) << 24;
		des[12+j] = (src[16+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 0xffff) << 24;
		des[16+j] = (src[24+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[32+j] & 0xffff) << 24;
		des[20+j] = (src[32+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[36+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[40+j] & 0xffff) << 24;
		des[24+j] = (src[40+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[44+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[48+j] & 0xffff) << 24;
		des[28+j] = (src[48+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[52+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[56+j] & 0xffff) << 24;
		des[32+j] = (src[56+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[60+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[64+j] & 0xffff) << 24;
		des[36+j] = (src[64+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[68+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[72+j] & 0xffff) << 24;
		des[40+j] = (src[72+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[76+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[80+j] & 0xffff) << 24;
		des[44+j] = (src[80+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[84+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[88+j] & 0xffff) << 24;
		des[48+j] = (src[88+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[92+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[96+j] & 0xffff) << 24;
		des[52+j] = (src[96+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[100+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[104+j] & 0xffff) << 24;
		des[56+j] = (src[104+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[108+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[112+j] & 0xffff) << 24;
		des[60+j] = (src[112+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[116+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[120+j] & 0xffff) << 24;
		des[64+j] = (src[120+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[124+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[128+j] & 0xffff) << 24;
		des[68+j] = (src[128+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[132+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[136+j] & 0xffff) << 24;
		des[72+j] = (src[136+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[140+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[144+j] & 0xffff) << 24;
		des[76+j] = (src[144+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[148+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[152+j] & 0xffff) << 24;
		des[80+j] = (src[152+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[156+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[160+j] & 0xffff) << 24;
		des[84+j] = (src[160+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[164+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[168+j] & 0xffff) << 24;
		des[88+j] = (src[168+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[172+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[176+j] & 0xffff) << 24;
		des[92+j] = (src[176+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[180+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[184+j] & 0xffff) << 24;
		des[96+j] = (src[184+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[188+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[192+j] & 0xffff) << 24;
		des[100+j] = (src[192+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] |= (src[196+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] |= (src[200+j] & 0xffff) << 24;
		des[104+j] = (src[200+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] |= (src[204+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] |= (src[208+j] & 0xffff) << 24;
		des[108+j] = (src[208+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] |= (src[212+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] |= (src[216+j] & 0xffff) << 24;
		des[112+j] = (src[216+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] |= (src[220+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] |= (src[224+j] & 0xffff) << 24;
		des[116+j] = (src[224+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] |= (src[228+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] |= (src[232+j] & 0xffff) << 24;
		des[120+j] = (src[232+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] |= (src[236+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] |= (src[240+j] & 0xffff) << 24;
		des[124+j] = (src[240+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] |= (src[244+j] & 0xffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] |= (src[248+j] & 0xffff) << 24;
		des[128+j] = (src[248+j] & 0xffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] |= (src[252+j] & 0xffff) << 8;
	}
}

template<typename T>
void KVSE_pack_64len_20bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xfffff) << 20;
		des[4+j] = (src[4+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 0xfffff) << 28;
		des[8+j] = (src[12+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 0xfffff) << 16;
		des[12+j] = (src[16+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 0xfffff) << 24;
		des[16+j] = (src[24+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[32+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[36+j] & 0xfffff) << 20;
		des[24+j] = (src[36+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[40+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[44+j] & 0xfffff) << 28;
		des[28+j] = (src[44+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[48+j] & 0xfffff) << 16;
		des[32+j] = (src[48+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[52+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[56+j] & 0xfffff) << 24;
		des[36+j] = (src[56+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[60+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[64+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[68+j] & 0xfffff) << 20;
		des[44+j] = (src[68+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[72+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[76+j] & 0xfffff) << 28;
		des[48+j] = (src[76+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[80+j] & 0xfffff) << 16;
		des[52+j] = (src[80+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[84+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[88+j] & 0xfffff) << 24;
		des[56+j] = (src[88+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[92+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[96+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[100+j] & 0xfffff) << 20;
		des[64+j] = (src[100+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[104+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[108+j] & 0xfffff) << 28;
		des[68+j] = (src[108+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[112+j] & 0xfffff) << 16;
		des[72+j] = (src[112+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[116+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[120+j] & 0xfffff) << 24;
		des[76+j] = (src[120+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[124+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[128+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[132+j] & 0xfffff) << 20;
		des[84+j] = (src[132+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[136+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[140+j] & 0xfffff) << 28;
		des[88+j] = (src[140+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[144+j] & 0xfffff) << 16;
		des[92+j] = (src[144+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[148+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[152+j] & 0xfffff) << 24;
		des[96+j] = (src[152+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[156+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[160+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[100+j] |= (src[164+j] & 0xfffff) << 20;
		des[104+j] = (src[164+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] |= (src[168+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] |= (src[172+j] & 0xfffff) << 28;
		des[108+j] = (src[172+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] |= (src[176+j] & 0xfffff) << 16;
		des[112+j] = (src[176+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] |= (src[180+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] |= (src[184+j] & 0xfffff) << 24;
		des[116+j] = (src[184+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] |= (src[188+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] = (src[192+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[120+j] |= (src[196+j] & 0xfffff) << 20;
		des[124+j] = (src[196+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] |= (src[200+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] |= (src[204+j] & 0xfffff) << 28;
		des[128+j] = (src[204+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] |= (src[208+j] & 0xfffff) << 16;
		des[132+j] = (src[208+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] |= (src[212+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] |= (src[216+j] & 0xfffff) << 24;
		des[136+j] = (src[216+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] |= (src[220+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] = (src[224+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[140+j] |= (src[228+j] & 0xfffff) << 20;
		des[144+j] = (src[228+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] |= (src[232+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] |= (src[236+j] & 0xfffff) << 28;
		des[148+j] = (src[236+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] |= (src[240+j] & 0xfffff) << 16;
		des[152+j] = (src[240+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] |= (src[244+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] |= (src[248+j] & 0xfffff) << 24;
		des[156+j] = (src[248+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] |= (src[252+j] & 0xfffff) << 12;
	}
}

template<typename T>
void KVSE_pack_64len_20bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 0xfffff) << 28;
		des[4+j] = (src[4+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xfffff) << 16;
		des[8+j] = (src[8+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 0xfffff) << 24;
		des[12+j] = (src[16+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[24+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 0xfffff) << 20;
		des[20+j] = (src[28+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[32+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[36+j] & 0xfffff) << 28;
		des[24+j] = (src[36+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[40+j] & 0xfffff) << 16;
		des[28+j] = (src[40+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[44+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[48+j] & 0xfffff) << 24;
		des[32+j] = (src[48+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[52+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[56+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[60+j] & 0xfffff) << 20;
		des[40+j] = (src[60+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[64+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[68+j] & 0xfffff) << 28;
		des[44+j] = (src[68+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[72+j] & 0xfffff) << 16;
		des[48+j] = (src[72+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[76+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[80+j] & 0xfffff) << 24;
		des[52+j] = (src[80+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[84+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[88+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[92+j] & 0xfffff) << 20;
		des[60+j] = (src[92+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[96+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[100+j] & 0xfffff) << 28;
		des[64+j] = (src[100+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[104+j] & 0xfffff) << 16;
		des[68+j] = (src[104+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[108+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[112+j] & 0xfffff) << 24;
		des[72+j] = (src[112+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[116+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[120+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[124+j] & 0xfffff) << 20;
		des[80+j] = (src[124+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[128+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[132+j] & 0xfffff) << 28;
		des[84+j] = (src[132+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[136+j] & 0xfffff) << 16;
		des[88+j] = (src[136+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[140+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[144+j] & 0xfffff) << 24;
		des[92+j] = (src[144+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[148+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[152+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[156+j] & 0xfffff) << 20;
		des[100+j] = (src[156+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] |= (src[160+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] |= (src[164+j] & 0xfffff) << 28;
		des[104+j] = (src[164+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] |= (src[168+j] & 0xfffff) << 16;
		des[108+j] = (src[168+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] |= (src[172+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] |= (src[176+j] & 0xfffff) << 24;
		des[112+j] = (src[176+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] |= (src[180+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] = (src[184+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[116+j] |= (src[188+j] & 0xfffff) << 20;
		des[120+j] = (src[188+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] |= (src[192+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] |= (src[196+j] & 0xfffff) << 28;
		des[124+j] = (src[196+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] |= (src[200+j] & 0xfffff) << 16;
		des[128+j] = (src[200+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] |= (src[204+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] |= (src[208+j] & 0xfffff) << 24;
		des[132+j] = (src[208+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] |= (src[212+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] = (src[216+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[136+j] |= (src[220+j] & 0xfffff) << 20;
		des[140+j] = (src[220+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] |= (src[224+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] |= (src[228+j] & 0xfffff) << 28;
		des[144+j] = (src[228+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] |= (src[232+j] & 0xfffff) << 16;
		des[148+j] = (src[232+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] |= (src[236+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] |= (src[240+j] & 0xfffff) << 24;
		des[152+j] = (src[240+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] |= (src[244+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] = (src[248+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[156+j] |= (src[252+j] & 0xfffff) << 20;
		des[160+j] = (src[252+j] & 0xfffff) >> 12;
	}
}

template<typename T>
void KVSE_pack_64len_20bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xfffff) << 16;
		des[4+j] = (src[j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 0xfffff) << 24;
		des[8+j] = (src[8+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[16+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 0xfffff) << 20;
		des[16+j] = (src[20+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 0xfffff) << 28;
		des[20+j] = (src[28+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[32+j] & 0xfffff) << 16;
		des[24+j] = (src[32+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[36+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[40+j] & 0xfffff) << 24;
		des[28+j] = (src[40+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[44+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[48+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[52+j] & 0xfffff) << 20;
		des[36+j] = (src[52+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[56+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[60+j] & 0xfffff) << 28;
		des[40+j] = (src[60+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[64+j] & 0xfffff) << 16;
		des[44+j] = (src[64+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[68+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[72+j] & 0xfffff) << 24;
		des[48+j] = (src[72+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[76+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[80+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[84+j] & 0xfffff) << 20;
		des[56+j] = (src[84+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[88+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[92+j] & 0xfffff) << 28;
		des[60+j] = (src[92+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[96+j] & 0xfffff) << 16;
		des[64+j] = (src[96+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[100+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[104+j] & 0xfffff) << 24;
		des[68+j] = (src[104+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[108+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[112+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[116+j] & 0xfffff) << 20;
		des[76+j] = (src[116+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[120+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[124+j] & 0xfffff) << 28;
		des[80+j] = (src[124+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[128+j] & 0xfffff) << 16;
		des[84+j] = (src[128+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[132+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[136+j] & 0xfffff) << 24;
		des[88+j] = (src[136+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[140+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[144+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[148+j] & 0xfffff) << 20;
		des[96+j] = (src[148+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[152+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[156+j] & 0xfffff) << 28;
		des[100+j] = (src[156+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] |= (src[160+j] & 0xfffff) << 16;
		des[104+j] = (src[160+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] |= (src[164+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] |= (src[168+j] & 0xfffff) << 24;
		des[108+j] = (src[168+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] |= (src[172+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] = (src[176+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[112+j] |= (src[180+j] & 0xfffff) << 20;
		des[116+j] = (src[180+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] |= (src[184+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] |= (src[188+j] & 0xfffff) << 28;
		des[120+j] = (src[188+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] |= (src[192+j] & 0xfffff) << 16;
		des[124+j] = (src[192+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] |= (src[196+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] |= (src[200+j] & 0xfffff) << 24;
		des[128+j] = (src[200+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] |= (src[204+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] = (src[208+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[132+j] |= (src[212+j] & 0xfffff) << 20;
		des[136+j] = (src[212+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] |= (src[216+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] |= (src[220+j] & 0xfffff) << 28;
		des[140+j] = (src[220+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] |= (src[224+j] & 0xfffff) << 16;
		des[144+j] = (src[224+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] |= (src[228+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] |= (src[232+j] & 0xfffff) << 24;
		des[148+j] = (src[232+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] |= (src[236+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] = (src[240+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[152+j] |= (src[244+j] & 0xfffff) << 20;
		des[156+j] = (src[244+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] |= (src[248+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] |= (src[252+j] & 0xfffff) << 28;
		des[160+j] = (src[252+j] & 0xfffff) >> 4;
	}
}

template<typename T>
void KVSE_pack_64len_20bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 0xfffff) << 24;
		des[4+j] = (src[j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 0xfffff) << 20;
		des[12+j] = (src[12+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 0xfffff) << 28;
		des[16+j] = (src[20+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 0xfffff) << 16;
		des[20+j] = (src[24+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[32+j] & 0xfffff) << 24;
		des[24+j] = (src[32+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[36+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[40+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[44+j] & 0xfffff) << 20;
		des[32+j] = (src[44+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[48+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[52+j] & 0xfffff) << 28;
		des[36+j] = (src[52+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[56+j] & 0xfffff) << 16;
		des[40+j] = (src[56+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[60+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[64+j] & 0xfffff) << 24;
		des[44+j] = (src[64+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[68+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[72+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[76+j] & 0xfffff) << 20;
		des[52+j] = (src[76+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[80+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[84+j] & 0xfffff) << 28;
		des[56+j] = (src[84+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[88+j] & 0xfffff) << 16;
		des[60+j] = (src[88+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[92+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[96+j] & 0xfffff) << 24;
		des[64+j] = (src[96+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[100+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[104+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[108+j] & 0xfffff) << 20;
		des[72+j] = (src[108+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[112+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[116+j] & 0xfffff) << 28;
		des[76+j] = (src[116+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[120+j] & 0xfffff) << 16;
		des[80+j] = (src[120+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[124+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[128+j] & 0xfffff) << 24;
		des[84+j] = (src[128+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[132+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[136+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[140+j] & 0xfffff) << 20;
		des[92+j] = (src[140+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[144+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[148+j] & 0xfffff) << 28;
		des[96+j] = (src[148+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[152+j] & 0xfffff) << 16;
		des[100+j] = (src[152+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] |= (src[156+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] |= (src[160+j] & 0xfffff) << 24;
		des[104+j] = (src[160+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] |= (src[164+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[168+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[108+j] |= (src[172+j] & 0xfffff) << 20;
		des[112+j] = (src[172+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] |= (src[176+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] |= (src[180+j] & 0xfffff) << 28;
		des[116+j] = (src[180+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] |= (src[184+j] & 0xfffff) << 16;
		des[120+j] = (src[184+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] |= (src[188+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] |= (src[192+j] & 0xfffff) << 24;
		des[124+j] = (src[192+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] |= (src[196+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] = (src[200+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[128+j] |= (src[204+j] & 0xfffff) << 20;
		des[132+j] = (src[204+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] |= (src[208+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] |= (src[212+j] & 0xfffff) << 28;
		des[136+j] = (src[212+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] |= (src[216+j] & 0xfffff) << 16;
		des[140+j] = (src[216+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] |= (src[220+j] & 0xfffff) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] |= (src[224+j] & 0xfffff) << 24;
		des[144+j] = (src[224+j] & 0xfffff) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] |= (src[228+j] & 0xfffff) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] = (src[232+j] & 0xfffff);
	}
	for (int j=0; j<4; ++j) {
		des[148+j] |= (src[236+j] & 0xfffff) << 20;
		des[152+j] = (src[236+j] & 0xfffff) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] |= (src[240+j] & 0xfffff) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] |= (src[244+j] & 0xfffff) << 28;
		des[156+j] = (src[244+j] & 0xfffff) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] |= (src[248+j] & 0xfffff) << 16;
		des[160+j] = (src[248+j] & 0xfffff) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] |= (src[252+j] & 0xfffff) << 4;
	}
}

template<typename T>
void KVSE_pack_64len_32bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j]);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j]);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j]);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j]);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[16+j]);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[20+j]);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[24+j]);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[28+j]);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[32+j]);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[36+j]);
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[40+j]);
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[44+j]);
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[48+j]);
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[52+j]);
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[56+j]);
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[60+j]);
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[64+j]);
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[68+j]);
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[72+j]);
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[76+j]);
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[80+j]);
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[84+j]);
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[88+j]);
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[92+j]);
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[96+j]);
	}
	for (int j=0; j<4; ++j) {
		des[100+j] |= (src[100+j]);
	}
	for (int j=0; j<4; ++j) {
		des[104+j] |= (src[104+j]);
	}
	for (int j=0; j<4; ++j) {
		des[108+j] |= (src[108+j]);
	}
	for (int j=0; j<4; ++j) {
		des[112+j] |= (src[112+j]);
	}
	for (int j=0; j<4; ++j) {
		des[116+j] |= (src[116+j]);
	}
	for (int j=0; j<4; ++j) {
		des[120+j] |= (src[120+j]);
	}
	for (int j=0; j<4; ++j) {
		des[124+j] |= (src[124+j]);
	}
	for (int j=0; j<4; ++j) {
		des[128+j] |= (src[128+j]);
	}
	for (int j=0; j<4; ++j) {
		des[132+j] |= (src[132+j]);
	}
	for (int j=0; j<4; ++j) {
		des[136+j] |= (src[136+j]);
	}
	for (int j=0; j<4; ++j) {
		des[140+j] |= (src[140+j]);
	}
	for (int j=0; j<4; ++j) {
		des[144+j] |= (src[144+j]);
	}
	for (int j=0; j<4; ++j) {
		des[148+j] |= (src[148+j]);
	}
	for (int j=0; j<4; ++j) {
		des[152+j] |= (src[152+j]);
	}
	for (int j=0; j<4; ++j) {
		des[156+j] |= (src[156+j]);
	}
	for (int j=0; j<4; ++j) {
		des[160+j] |= (src[160+j]);
	}
	for (int j=0; j<4; ++j) {
		des[164+j] |= (src[164+j]);
	}
	for (int j=0; j<4; ++j) {
		des[168+j] |= (src[168+j]);
	}
	for (int j=0; j<4; ++j) {
		des[172+j] |= (src[172+j]);
	}
	for (int j=0; j<4; ++j) {
		des[176+j] |= (src[176+j]);
	}
	for (int j=0; j<4; ++j) {
		des[180+j] |= (src[180+j]);
	}
	for (int j=0; j<4; ++j) {
		des[184+j] |= (src[184+j]);
	}
	for (int j=0; j<4; ++j) {
		des[188+j] |= (src[188+j]);
	}
	for (int j=0; j<4; ++j) {
		des[192+j] |= (src[192+j]);
	}
	for (int j=0; j<4; ++j) {
		des[196+j] |= (src[196+j]);
	}
	for (int j=0; j<4; ++j) {
		des[200+j] |= (src[200+j]);
	}
	for (int j=0; j<4; ++j) {
		des[204+j] |= (src[204+j]);
	}
	for (int j=0; j<4; ++j) {
		des[208+j] |= (src[208+j]);
	}
	for (int j=0; j<4; ++j) {
		des[212+j] |= (src[212+j]);
	}
	for (int j=0; j<4; ++j) {
		des[216+j] |= (src[216+j]);
	}
	for (int j=0; j<4; ++j) {
		des[220+j] |= (src[220+j]);
	}
	for (int j=0; j<4; ++j) {
		des[224+j] |= (src[224+j]);
	}
	for (int j=0; j<4; ++j) {
		des[228+j] |= (src[228+j]);
	}
	for (int j=0; j<4; ++j) {
		des[232+j] |= (src[232+j]);
	}
	for (int j=0; j<4; ++j) {
		des[236+j] |= (src[236+j]);
	}
	for (int j=0; j<4; ++j) {
		des[240+j] |= (src[240+j]);
	}
	for (int j=0; j<4; ++j) {
		des[244+j] |= (src[244+j]);
	}
	for (int j=0; j<4; ++j) {
		des[248+j] |= (src[248+j]);
	}
	for (int j=0; j<4; ++j) {
		des[252+j] |= (src[252+j]);
	}
}

template<typename T>
void KVSE_pack_64len_32bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j]) << 8;
		des[4+j] = (src[j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j]) << 8;
		des[8+j] = (src[4+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j]) << 8;
		des[12+j] = (src[8+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j]) << 8;
		des[16+j] = (src[12+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[16+j]) << 8;
		des[20+j] = (src[16+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[20+j]) << 8;
		des[24+j] = (src[20+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[24+j]) << 8;
		des[28+j] = (src[24+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[28+j]) << 8;
		des[32+j] = (src[28+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[32+j]) << 8;
		des[36+j] = (src[32+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[36+j]) << 8;
		des[40+j] = (src[36+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[40+j]) << 8;
		des[44+j] = (src[40+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[44+j]) << 8;
		des[48+j] = (src[44+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[48+j]) << 8;
		des[52+j] = (src[48+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[52+j]) << 8;
		des[56+j] = (src[52+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[56+j]) << 8;
		des[60+j] = (src[56+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[60+j]) << 8;
		des[64+j] = (src[60+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[64+j]) << 8;
		des[68+j] = (src[64+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[68+j]) << 8;
		des[72+j] = (src[68+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[72+j]) << 8;
		des[76+j] = (src[72+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[76+j]) << 8;
		des[80+j] = (src[76+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[80+j]) << 8;
		des[84+j] = (src[80+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[84+j]) << 8;
		des[88+j] = (src[84+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[88+j]) << 8;
		des[92+j] = (src[88+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[92+j]) << 8;
		des[96+j] = (src[92+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[96+j]) << 8;
		des[100+j] = (src[96+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] |= (src[100+j]) << 8;
		des[104+j] = (src[100+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] |= (src[104+j]) << 8;
		des[108+j] = (src[104+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] |= (src[108+j]) << 8;
		des[112+j] = (src[108+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] |= (src[112+j]) << 8;
		des[116+j] = (src[112+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] |= (src[116+j]) << 8;
		des[120+j] = (src[116+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] |= (src[120+j]) << 8;
		des[124+j] = (src[120+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] |= (src[124+j]) << 8;
		des[128+j] = (src[124+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] |= (src[128+j]) << 8;
		des[132+j] = (src[128+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] |= (src[132+j]) << 8;
		des[136+j] = (src[132+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] |= (src[136+j]) << 8;
		des[140+j] = (src[136+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] |= (src[140+j]) << 8;
		des[144+j] = (src[140+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] |= (src[144+j]) << 8;
		des[148+j] = (src[144+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] |= (src[148+j]) << 8;
		des[152+j] = (src[148+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] |= (src[152+j]) << 8;
		des[156+j] = (src[152+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] |= (src[156+j]) << 8;
		des[160+j] = (src[156+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] |= (src[160+j]) << 8;
		des[164+j] = (src[160+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] |= (src[164+j]) << 8;
		des[168+j] = (src[164+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] |= (src[168+j]) << 8;
		des[172+j] = (src[168+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] |= (src[172+j]) << 8;
		des[176+j] = (src[172+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] |= (src[176+j]) << 8;
		des[180+j] = (src[176+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] |= (src[180+j]) << 8;
		des[184+j] = (src[180+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] |= (src[184+j]) << 8;
		des[188+j] = (src[184+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] |= (src[188+j]) << 8;
		des[192+j] = (src[188+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] |= (src[192+j]) << 8;
		des[196+j] = (src[192+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] |= (src[196+j]) << 8;
		des[200+j] = (src[196+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] |= (src[200+j]) << 8;
		des[204+j] = (src[200+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] |= (src[204+j]) << 8;
		des[208+j] = (src[204+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] |= (src[208+j]) << 8;
		des[212+j] = (src[208+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] |= (src[212+j]) << 8;
		des[216+j] = (src[212+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] |= (src[216+j]) << 8;
		des[220+j] = (src[216+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] |= (src[220+j]) << 8;
		des[224+j] = (src[220+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] |= (src[224+j]) << 8;
		des[228+j] = (src[224+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] |= (src[228+j]) << 8;
		des[232+j] = (src[228+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] |= (src[232+j]) << 8;
		des[236+j] = (src[232+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] |= (src[236+j]) << 8;
		des[240+j] = (src[236+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] |= (src[240+j]) << 8;
		des[244+j] = (src[240+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] |= (src[244+j]) << 8;
		des[248+j] = (src[244+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] |= (src[248+j]) << 8;
		des[252+j] = (src[248+j]) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] |= (src[252+j]) << 8;
		des[256+j] = (src[252+j]) >> 24;
	}
}

template<typename T>
void KVSE_pack_64len_32bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j]) << 16;
		des[4+j] = (src[j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j]) << 16;
		des[8+j] = (src[4+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j]) << 16;
		des[12+j] = (src[8+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j]) << 16;
		des[16+j] = (src[12+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[16+j]) << 16;
		des[20+j] = (src[16+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[20+j]) << 16;
		des[24+j] = (src[20+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[24+j]) << 16;
		des[28+j] = (src[24+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[28+j]) << 16;
		des[32+j] = (src[28+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[32+j]) << 16;
		des[36+j] = (src[32+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[36+j]) << 16;
		des[40+j] = (src[36+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[40+j]) << 16;
		des[44+j] = (src[40+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[44+j]) << 16;
		des[48+j] = (src[44+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[48+j]) << 16;
		des[52+j] = (src[48+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[52+j]) << 16;
		des[56+j] = (src[52+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[56+j]) << 16;
		des[60+j] = (src[56+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[60+j]) << 16;
		des[64+j] = (src[60+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[64+j]) << 16;
		des[68+j] = (src[64+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[68+j]) << 16;
		des[72+j] = (src[68+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[72+j]) << 16;
		des[76+j] = (src[72+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[76+j]) << 16;
		des[80+j] = (src[76+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[80+j]) << 16;
		des[84+j] = (src[80+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[84+j]) << 16;
		des[88+j] = (src[84+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[88+j]) << 16;
		des[92+j] = (src[88+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[92+j]) << 16;
		des[96+j] = (src[92+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[96+j]) << 16;
		des[100+j] = (src[96+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] |= (src[100+j]) << 16;
		des[104+j] = (src[100+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] |= (src[104+j]) << 16;
		des[108+j] = (src[104+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] |= (src[108+j]) << 16;
		des[112+j] = (src[108+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] |= (src[112+j]) << 16;
		des[116+j] = (src[112+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] |= (src[116+j]) << 16;
		des[120+j] = (src[116+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] |= (src[120+j]) << 16;
		des[124+j] = (src[120+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] |= (src[124+j]) << 16;
		des[128+j] = (src[124+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] |= (src[128+j]) << 16;
		des[132+j] = (src[128+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] |= (src[132+j]) << 16;
		des[136+j] = (src[132+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] |= (src[136+j]) << 16;
		des[140+j] = (src[136+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] |= (src[140+j]) << 16;
		des[144+j] = (src[140+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] |= (src[144+j]) << 16;
		des[148+j] = (src[144+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] |= (src[148+j]) << 16;
		des[152+j] = (src[148+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] |= (src[152+j]) << 16;
		des[156+j] = (src[152+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] |= (src[156+j]) << 16;
		des[160+j] = (src[156+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] |= (src[160+j]) << 16;
		des[164+j] = (src[160+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] |= (src[164+j]) << 16;
		des[168+j] = (src[164+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] |= (src[168+j]) << 16;
		des[172+j] = (src[168+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] |= (src[172+j]) << 16;
		des[176+j] = (src[172+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] |= (src[176+j]) << 16;
		des[180+j] = (src[176+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] |= (src[180+j]) << 16;
		des[184+j] = (src[180+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] |= (src[184+j]) << 16;
		des[188+j] = (src[184+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] |= (src[188+j]) << 16;
		des[192+j] = (src[188+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] |= (src[192+j]) << 16;
		des[196+j] = (src[192+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] |= (src[196+j]) << 16;
		des[200+j] = (src[196+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] |= (src[200+j]) << 16;
		des[204+j] = (src[200+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] |= (src[204+j]) << 16;
		des[208+j] = (src[204+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] |= (src[208+j]) << 16;
		des[212+j] = (src[208+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] |= (src[212+j]) << 16;
		des[216+j] = (src[212+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] |= (src[216+j]) << 16;
		des[220+j] = (src[216+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] |= (src[220+j]) << 16;
		des[224+j] = (src[220+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] |= (src[224+j]) << 16;
		des[228+j] = (src[224+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] |= (src[228+j]) << 16;
		des[232+j] = (src[228+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] |= (src[232+j]) << 16;
		des[236+j] = (src[232+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] |= (src[236+j]) << 16;
		des[240+j] = (src[236+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] |= (src[240+j]) << 16;
		des[244+j] = (src[240+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] |= (src[244+j]) << 16;
		des[248+j] = (src[244+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] |= (src[248+j]) << 16;
		des[252+j] = (src[248+j]) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] |= (src[252+j]) << 16;
		des[256+j] = (src[252+j]) >> 16;
	}
}

template<typename T>
void KVSE_pack_64len_32bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j]) << 24;
		des[4+j] = (src[j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j]) << 24;
		des[8+j] = (src[4+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j]) << 24;
		des[12+j] = (src[8+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j]) << 24;
		des[16+j] = (src[12+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[16+j]) << 24;
		des[20+j] = (src[16+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[20+j]) << 24;
		des[24+j] = (src[20+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[24+j]) << 24;
		des[28+j] = (src[24+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[28+j]) << 24;
		des[32+j] = (src[28+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[32+j]) << 24;
		des[36+j] = (src[32+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[36+j]) << 24;
		des[40+j] = (src[36+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[40+j]) << 24;
		des[44+j] = (src[40+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[44+j]) << 24;
		des[48+j] = (src[44+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[48+j]) << 24;
		des[52+j] = (src[48+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[52+j]) << 24;
		des[56+j] = (src[52+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[56+j]) << 24;
		des[60+j] = (src[56+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[60+j]) << 24;
		des[64+j] = (src[60+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[64+j]) << 24;
		des[68+j] = (src[64+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[68+j]) << 24;
		des[72+j] = (src[68+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[72+j]) << 24;
		des[76+j] = (src[72+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[76+j]) << 24;
		des[80+j] = (src[76+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[80+j]) << 24;
		des[84+j] = (src[80+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[84+j]) << 24;
		des[88+j] = (src[84+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[88+j]) << 24;
		des[92+j] = (src[88+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[92+j]) << 24;
		des[96+j] = (src[92+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[96+j]) << 24;
		des[100+j] = (src[96+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] |= (src[100+j]) << 24;
		des[104+j] = (src[100+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] |= (src[104+j]) << 24;
		des[108+j] = (src[104+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] |= (src[108+j]) << 24;
		des[112+j] = (src[108+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] |= (src[112+j]) << 24;
		des[116+j] = (src[112+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] |= (src[116+j]) << 24;
		des[120+j] = (src[116+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] |= (src[120+j]) << 24;
		des[124+j] = (src[120+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[124+j] |= (src[124+j]) << 24;
		des[128+j] = (src[124+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[128+j] |= (src[128+j]) << 24;
		des[132+j] = (src[128+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[132+j] |= (src[132+j]) << 24;
		des[136+j] = (src[132+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[136+j] |= (src[136+j]) << 24;
		des[140+j] = (src[136+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[140+j] |= (src[140+j]) << 24;
		des[144+j] = (src[140+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[144+j] |= (src[144+j]) << 24;
		des[148+j] = (src[144+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[148+j] |= (src[148+j]) << 24;
		des[152+j] = (src[148+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[152+j] |= (src[152+j]) << 24;
		des[156+j] = (src[152+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[156+j] |= (src[156+j]) << 24;
		des[160+j] = (src[156+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[160+j] |= (src[160+j]) << 24;
		des[164+j] = (src[160+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[164+j] |= (src[164+j]) << 24;
		des[168+j] = (src[164+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[168+j] |= (src[168+j]) << 24;
		des[172+j] = (src[168+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[172+j] |= (src[172+j]) << 24;
		des[176+j] = (src[172+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[176+j] |= (src[176+j]) << 24;
		des[180+j] = (src[176+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[180+j] |= (src[180+j]) << 24;
		des[184+j] = (src[180+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[184+j] |= (src[184+j]) << 24;
		des[188+j] = (src[184+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[188+j] |= (src[188+j]) << 24;
		des[192+j] = (src[188+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[192+j] |= (src[192+j]) << 24;
		des[196+j] = (src[192+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[196+j] |= (src[196+j]) << 24;
		des[200+j] = (src[196+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[200+j] |= (src[200+j]) << 24;
		des[204+j] = (src[200+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[204+j] |= (src[204+j]) << 24;
		des[208+j] = (src[204+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[208+j] |= (src[208+j]) << 24;
		des[212+j] = (src[208+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[212+j] |= (src[212+j]) << 24;
		des[216+j] = (src[212+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[216+j] |= (src[216+j]) << 24;
		des[220+j] = (src[216+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[220+j] |= (src[220+j]) << 24;
		des[224+j] = (src[220+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[224+j] |= (src[224+j]) << 24;
		des[228+j] = (src[224+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[228+j] |= (src[228+j]) << 24;
		des[232+j] = (src[228+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[232+j] |= (src[232+j]) << 24;
		des[236+j] = (src[232+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[236+j] |= (src[236+j]) << 24;
		des[240+j] = (src[236+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[240+j] |= (src[240+j]) << 24;
		des[244+j] = (src[240+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[244+j] |= (src[244+j]) << 24;
		des[248+j] = (src[244+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[248+j] |= (src[248+j]) << 24;
		des[252+j] = (src[248+j]) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[252+j] |= (src[252+j]) << 24;
		des[256+j] = (src[252+j]) >> 8;
	}
}


static KVSEPackInfo KVSEPackInfo_0 = { KVSE_pack_1len_0bw_0offset<uint32_t>, 0, 0, 0, 4, };
static KVSEPackInfo KVSEPackInfo_1 = { KVSE_pack_1len_0bw_8offset<uint32_t>, 8, 8, 0, 4, };
static KVSEPackInfo KVSEPackInfo_2 = { KVSE_pack_1len_0bw_16offset<uint32_t>, 16, 16, 0, 4, };
static KVSEPackInfo KVSEPackInfo_3 = { KVSE_pack_1len_0bw_24offset<uint32_t>, 24, 24, 0, 4, };
static KVSEPackInfo KVSEPackInfo_4 = { KVSE_pack_1len_1bw_0offset<uint32_t>, 0, 8, 0, 4, };
static KVSEPackInfo KVSEPackInfo_5 = { KVSE_pack_1len_1bw_8offset<uint32_t>, 8, 16, 0, 4, };
static KVSEPackInfo KVSEPackInfo_6 = { KVSE_pack_1len_1bw_16offset<uint32_t>, 16, 24, 0, 4, };
static KVSEPackInfo KVSEPackInfo_7 = { KVSE_pack_1len_1bw_24offset<uint32_t>, 24, 0, 4, 4, };
static KVSEPackInfo KVSEPackInfo_8 = { KVSE_pack_1len_2bw_0offset<uint32_t>, 0, 8, 0, 4, };
static KVSEPackInfo KVSEPackInfo_9 = { KVSE_pack_1len_2bw_8offset<uint32_t>, 8, 16, 0, 4, };
static KVSEPackInfo KVSEPackInfo_10 = { KVSE_pack_1len_2bw_16offset<uint32_t>, 16, 24, 0, 4, };
static KVSEPackInfo KVSEPackInfo_11 = { KVSE_pack_1len_2bw_24offset<uint32_t>, 24, 0, 4, 4, };
static KVSEPackInfo KVSEPackInfo_12 = { KVSE_pack_1len_3bw_0offset<uint32_t>, 0, 8, 0, 4, };
static KVSEPackInfo KVSEPackInfo_13 = { KVSE_pack_1len_3bw_8offset<uint32_t>, 8, 16, 0, 4, };
static KVSEPackInfo KVSEPackInfo_14 = { KVSE_pack_1len_3bw_16offset<uint32_t>, 16, 24, 0, 4, };
static KVSEPackInfo KVSEPackInfo_15 = { KVSE_pack_1len_3bw_24offset<uint32_t>, 24, 0, 4, 4, };
static KVSEPackInfo KVSEPackInfo_16 = { KVSE_pack_1len_4bw_0offset<uint32_t>, 0, 8, 0, 4, };
static KVSEPackInfo KVSEPackInfo_17 = { KVSE_pack_1len_4bw_8offset<uint32_t>, 8, 16, 0, 4, };
static KVSEPackInfo KVSEPackInfo_18 = { KVSE_pack_1len_4bw_16offset<uint32_t>, 16, 24, 0, 4, };
static KVSEPackInfo KVSEPackInfo_19 = { KVSE_pack_1len_4bw_24offset<uint32_t>, 24, 0, 4, 4, };
static KVSEPackInfo KVSEPackInfo_20 = { KVSE_pack_1len_5bw_0offset<uint32_t>, 0, 8, 0, 4, };
static KVSEPackInfo KVSEPackInfo_21 = { KVSE_pack_1len_5bw_8offset<uint32_t>, 8, 16, 0, 4, };
static KVSEPackInfo KVSEPackInfo_22 = { KVSE_pack_1len_5bw_16offset<uint32_t>, 16, 24, 0, 4, };
static KVSEPackInfo KVSEPackInfo_23 = { KVSE_pack_1len_5bw_24offset<uint32_t>, 24, 0, 4, 4, };
static KVSEPackInfo KVSEPackInfo_24 = { KVSE_pack_1len_6bw_0offset<uint32_t>, 0, 8, 0, 4, };
static KVSEPackInfo KVSEPackInfo_25 = { KVSE_pack_1len_6bw_8offset<uint32_t>, 8, 16, 0, 4, };
static KVSEPackInfo KVSEPackInfo_26 = { KVSE_pack_1len_6bw_16offset<uint32_t>, 16, 24, 0, 4, };
static KVSEPackInfo KVSEPackInfo_27 = { KVSE_pack_1len_6bw_24offset<uint32_t>, 24, 0, 4, 4, };
static KVSEPackInfo KVSEPackInfo_28 = { KVSE_pack_1len_7bw_0offset<uint32_t>, 0, 8, 0, 4, };
static KVSEPackInfo KVSEPackInfo_29 = { KVSE_pack_1len_7bw_8offset<uint32_t>, 8, 16, 0, 4, };
static KVSEPackInfo KVSEPackInfo_30 = { KVSE_pack_1len_7bw_16offset<uint32_t>, 16, 24, 0, 4, };
static KVSEPackInfo KVSEPackInfo_31 = { KVSE_pack_1len_7bw_24offset<uint32_t>, 24, 0, 4, 4, };
static KVSEPackInfo KVSEPackInfo_32 = { KVSE_pack_1len_8bw_0offset<uint32_t>, 0, 8, 0, 4, };
static KVSEPackInfo KVSEPackInfo_33 = { KVSE_pack_1len_8bw_8offset<uint32_t>, 8, 16, 0, 4, };
static KVSEPackInfo KVSEPackInfo_34 = { KVSE_pack_1len_8bw_16offset<uint32_t>, 16, 24, 0, 4, };
static KVSEPackInfo KVSEPackInfo_35 = { KVSE_pack_1len_8bw_24offset<uint32_t>, 24, 0, 4, 4, };
static KVSEPackInfo KVSEPackInfo_36 = { KVSE_pack_1len_9bw_0offset<uint32_t>, 0, 16, 0, 4, };
static KVSEPackInfo KVSEPackInfo_37 = { KVSE_pack_1len_9bw_8offset<uint32_t>, 8, 24, 0, 4, };
static KVSEPackInfo KVSEPackInfo_38 = { KVSE_pack_1len_9bw_16offset<uint32_t>, 16, 0, 4, 4, };
static KVSEPackInfo KVSEPackInfo_39 = { KVSE_pack_1len_9bw_24offset<uint32_t>, 24, 8, 4, 4, };
static KVSEPackInfo KVSEPackInfo_40 = { KVSE_pack_1len_10bw_0offset<uint32_t>, 0, 16, 0, 4, };
static KVSEPackInfo KVSEPackInfo_41 = { KVSE_pack_1len_10bw_8offset<uint32_t>, 8, 24, 0, 4, };
static KVSEPackInfo KVSEPackInfo_42 = { KVSE_pack_1len_10bw_16offset<uint32_t>, 16, 0, 4, 4, };
static KVSEPackInfo KVSEPackInfo_43 = { KVSE_pack_1len_10bw_24offset<uint32_t>, 24, 8, 4, 4, };
static KVSEPackInfo KVSEPackInfo_44 = { KVSE_pack_1len_11bw_0offset<uint32_t>, 0, 16, 0, 4, };
static KVSEPackInfo KVSEPackInfo_45 = { KVSE_pack_1len_11bw_8offset<uint32_t>, 8, 24, 0, 4, };
static KVSEPackInfo KVSEPackInfo_46 = { KVSE_pack_1len_11bw_16offset<uint32_t>, 16, 0, 4, 4, };
static KVSEPackInfo KVSEPackInfo_47 = { KVSE_pack_1len_11bw_24offset<uint32_t>, 24, 8, 4, 4, };
static KVSEPackInfo KVSEPackInfo_48 = { KVSE_pack_1len_12bw_0offset<uint32_t>, 0, 16, 0, 4, };
static KVSEPackInfo KVSEPackInfo_49 = { KVSE_pack_1len_12bw_8offset<uint32_t>, 8, 24, 0, 4, };
static KVSEPackInfo KVSEPackInfo_50 = { KVSE_pack_1len_12bw_16offset<uint32_t>, 16, 0, 4, 4, };
static KVSEPackInfo KVSEPackInfo_51 = { KVSE_pack_1len_12bw_24offset<uint32_t>, 24, 8, 4, 4, };
static KVSEPackInfo KVSEPackInfo_52 = { KVSE_pack_1len_16bw_0offset<uint32_t>, 0, 16, 0, 4, };
static KVSEPackInfo KVSEPackInfo_53 = { KVSE_pack_1len_16bw_8offset<uint32_t>, 8, 24, 0, 4, };
static KVSEPackInfo KVSEPackInfo_54 = { KVSE_pack_1len_16bw_16offset<uint32_t>, 16, 0, 4, 4, };
static KVSEPackInfo KVSEPackInfo_55 = { KVSE_pack_1len_16bw_24offset<uint32_t>, 24, 8, 4, 4, };
static KVSEPackInfo KVSEPackInfo_56 = { KVSE_pack_1len_20bw_0offset<uint32_t>, 0, 24, 0, 4, };
static KVSEPackInfo KVSEPackInfo_57 = { KVSE_pack_1len_20bw_8offset<uint32_t>, 8, 0, 4, 4, };
static KVSEPackInfo KVSEPackInfo_58 = { KVSE_pack_1len_20bw_16offset<uint32_t>, 16, 8, 4, 4, };
static KVSEPackInfo KVSEPackInfo_59 = { KVSE_pack_1len_20bw_24offset<uint32_t>, 24, 16, 4, 4, };
static KVSEPackInfo KVSEPackInfo_60 = { KVSE_pack_1len_32bw_0offset<uint32_t>, 0, 0, 4, 4, };
static KVSEPackInfo KVSEPackInfo_61 = { KVSE_pack_1len_32bw_8offset<uint32_t>, 8, 8, 4, 4, };
static KVSEPackInfo KVSEPackInfo_62 = { KVSE_pack_1len_32bw_16offset<uint32_t>, 16, 16, 4, 4, };
static KVSEPackInfo KVSEPackInfo_63 = { KVSE_pack_1len_32bw_24offset<uint32_t>, 24, 24, 4, 4, };
static KVSEPackInfo KVSEPackInfo_64 = { KVSE_pack_2len_0bw_0offset<uint32_t>, 0, 0, 0, 8, };
static KVSEPackInfo KVSEPackInfo_65 = { KVSE_pack_2len_0bw_8offset<uint32_t>, 8, 8, 0, 8, };
static KVSEPackInfo KVSEPackInfo_66 = { KVSE_pack_2len_0bw_16offset<uint32_t>, 16, 16, 0, 8, };
static KVSEPackInfo KVSEPackInfo_67 = { KVSE_pack_2len_0bw_24offset<uint32_t>, 24, 24, 0, 8, };
static KVSEPackInfo KVSEPackInfo_68 = { KVSE_pack_2len_1bw_0offset<uint32_t>, 0, 8, 0, 8, };
static KVSEPackInfo KVSEPackInfo_69 = { KVSE_pack_2len_1bw_8offset<uint32_t>, 8, 16, 0, 8, };
static KVSEPackInfo KVSEPackInfo_70 = { KVSE_pack_2len_1bw_16offset<uint32_t>, 16, 24, 0, 8, };
static KVSEPackInfo KVSEPackInfo_71 = { KVSE_pack_2len_1bw_24offset<uint32_t>, 24, 0, 4, 8, };
static KVSEPackInfo KVSEPackInfo_72 = { KVSE_pack_2len_2bw_0offset<uint32_t>, 0, 8, 0, 8, };
static KVSEPackInfo KVSEPackInfo_73 = { KVSE_pack_2len_2bw_8offset<uint32_t>, 8, 16, 0, 8, };
static KVSEPackInfo KVSEPackInfo_74 = { KVSE_pack_2len_2bw_16offset<uint32_t>, 16, 24, 0, 8, };
static KVSEPackInfo KVSEPackInfo_75 = { KVSE_pack_2len_2bw_24offset<uint32_t>, 24, 0, 4, 8, };
static KVSEPackInfo KVSEPackInfo_76 = { KVSE_pack_2len_3bw_0offset<uint32_t>, 0, 8, 0, 8, };
static KVSEPackInfo KVSEPackInfo_77 = { KVSE_pack_2len_3bw_8offset<uint32_t>, 8, 16, 0, 8, };
static KVSEPackInfo KVSEPackInfo_78 = { KVSE_pack_2len_3bw_16offset<uint32_t>, 16, 24, 0, 8, };
static KVSEPackInfo KVSEPackInfo_79 = { KVSE_pack_2len_3bw_24offset<uint32_t>, 24, 0, 4, 8, };
static KVSEPackInfo KVSEPackInfo_80 = { KVSE_pack_2len_4bw_0offset<uint32_t>, 0, 8, 0, 8, };
static KVSEPackInfo KVSEPackInfo_81 = { KVSE_pack_2len_4bw_8offset<uint32_t>, 8, 16, 0, 8, };
static KVSEPackInfo KVSEPackInfo_82 = { KVSE_pack_2len_4bw_16offset<uint32_t>, 16, 24, 0, 8, };
static KVSEPackInfo KVSEPackInfo_83 = { KVSE_pack_2len_4bw_24offset<uint32_t>, 24, 0, 4, 8, };
static KVSEPackInfo KVSEPackInfo_84 = { KVSE_pack_2len_5bw_0offset<uint32_t>, 0, 16, 0, 8, };
static KVSEPackInfo KVSEPackInfo_85 = { KVSE_pack_2len_5bw_8offset<uint32_t>, 8, 24, 0, 8, };
static KVSEPackInfo KVSEPackInfo_86 = { KVSE_pack_2len_5bw_16offset<uint32_t>, 16, 0, 4, 8, };
static KVSEPackInfo KVSEPackInfo_87 = { KVSE_pack_2len_5bw_24offset<uint32_t>, 24, 8, 4, 8, };
static KVSEPackInfo KVSEPackInfo_88 = { KVSE_pack_2len_6bw_0offset<uint32_t>, 0, 16, 0, 8, };
static KVSEPackInfo KVSEPackInfo_89 = { KVSE_pack_2len_6bw_8offset<uint32_t>, 8, 24, 0, 8, };
static KVSEPackInfo KVSEPackInfo_90 = { KVSE_pack_2len_6bw_16offset<uint32_t>, 16, 0, 4, 8, };
static KVSEPackInfo KVSEPackInfo_91 = { KVSE_pack_2len_6bw_24offset<uint32_t>, 24, 8, 4, 8, };
static KVSEPackInfo KVSEPackInfo_92 = { KVSE_pack_2len_7bw_0offset<uint32_t>, 0, 16, 0, 8, };
static KVSEPackInfo KVSEPackInfo_93 = { KVSE_pack_2len_7bw_8offset<uint32_t>, 8, 24, 0, 8, };
static KVSEPackInfo KVSEPackInfo_94 = { KVSE_pack_2len_7bw_16offset<uint32_t>, 16, 0, 4, 8, };
static KVSEPackInfo KVSEPackInfo_95 = { KVSE_pack_2len_7bw_24offset<uint32_t>, 24, 8, 4, 8, };
static KVSEPackInfo KVSEPackInfo_96 = { KVSE_pack_2len_8bw_0offset<uint32_t>, 0, 16, 0, 8, };
static KVSEPackInfo KVSEPackInfo_97 = { KVSE_pack_2len_8bw_8offset<uint32_t>, 8, 24, 0, 8, };
static KVSEPackInfo KVSEPackInfo_98 = { KVSE_pack_2len_8bw_16offset<uint32_t>, 16, 0, 4, 8, };
static KVSEPackInfo KVSEPackInfo_99 = { KVSE_pack_2len_8bw_24offset<uint32_t>, 24, 8, 4, 8, };
static KVSEPackInfo KVSEPackInfo_100 = { KVSE_pack_2len_9bw_0offset<uint32_t>, 0, 24, 0, 8, };
static KVSEPackInfo KVSEPackInfo_101 = { KVSE_pack_2len_9bw_8offset<uint32_t>, 8, 0, 4, 8, };
static KVSEPackInfo KVSEPackInfo_102 = { KVSE_pack_2len_9bw_16offset<uint32_t>, 16, 8, 4, 8, };
static KVSEPackInfo KVSEPackInfo_103 = { KVSE_pack_2len_9bw_24offset<uint32_t>, 24, 16, 4, 8, };
static KVSEPackInfo KVSEPackInfo_104 = { KVSE_pack_2len_10bw_0offset<uint32_t>, 0, 24, 0, 8, };
static KVSEPackInfo KVSEPackInfo_105 = { KVSE_pack_2len_10bw_8offset<uint32_t>, 8, 0, 4, 8, };
static KVSEPackInfo KVSEPackInfo_106 = { KVSE_pack_2len_10bw_16offset<uint32_t>, 16, 8, 4, 8, };
static KVSEPackInfo KVSEPackInfo_107 = { KVSE_pack_2len_10bw_24offset<uint32_t>, 24, 16, 4, 8, };
static KVSEPackInfo KVSEPackInfo_108 = { KVSE_pack_2len_11bw_0offset<uint32_t>, 0, 24, 0, 8, };
static KVSEPackInfo KVSEPackInfo_109 = { KVSE_pack_2len_11bw_8offset<uint32_t>, 8, 0, 4, 8, };
static KVSEPackInfo KVSEPackInfo_110 = { KVSE_pack_2len_11bw_16offset<uint32_t>, 16, 8, 4, 8, };
static KVSEPackInfo KVSEPackInfo_111 = { KVSE_pack_2len_11bw_24offset<uint32_t>, 24, 16, 4, 8, };
static KVSEPackInfo KVSEPackInfo_112 = { KVSE_pack_2len_12bw_0offset<uint32_t>, 0, 24, 0, 8, };
static KVSEPackInfo KVSEPackInfo_113 = { KVSE_pack_2len_12bw_8offset<uint32_t>, 8, 0, 4, 8, };
static KVSEPackInfo KVSEPackInfo_114 = { KVSE_pack_2len_12bw_16offset<uint32_t>, 16, 8, 4, 8, };
static KVSEPackInfo KVSEPackInfo_115 = { KVSE_pack_2len_12bw_24offset<uint32_t>, 24, 16, 4, 8, };
static KVSEPackInfo KVSEPackInfo_116 = { KVSE_pack_2len_16bw_0offset<uint32_t>, 0, 0, 4, 8, };
static KVSEPackInfo KVSEPackInfo_117 = { KVSE_pack_2len_16bw_8offset<uint32_t>, 8, 8, 4, 8, };
static KVSEPackInfo KVSEPackInfo_118 = { KVSE_pack_2len_16bw_16offset<uint32_t>, 16, 16, 4, 8, };
static KVSEPackInfo KVSEPackInfo_119 = { KVSE_pack_2len_16bw_24offset<uint32_t>, 24, 24, 4, 8, };
static KVSEPackInfo KVSEPackInfo_120 = { KVSE_pack_2len_20bw_0offset<uint32_t>, 0, 8, 4, 8, };
static KVSEPackInfo KVSEPackInfo_121 = { KVSE_pack_2len_20bw_8offset<uint32_t>, 8, 16, 4, 8, };
static KVSEPackInfo KVSEPackInfo_122 = { KVSE_pack_2len_20bw_16offset<uint32_t>, 16, 24, 4, 8, };
static KVSEPackInfo KVSEPackInfo_123 = { KVSE_pack_2len_20bw_24offset<uint32_t>, 24, 0, 8, 8, };
static KVSEPackInfo KVSEPackInfo_124 = { KVSE_pack_2len_32bw_0offset<uint32_t>, 0, 0, 8, 8, };
static KVSEPackInfo KVSEPackInfo_125 = { KVSE_pack_2len_32bw_8offset<uint32_t>, 8, 8, 8, 8, };
static KVSEPackInfo KVSEPackInfo_126 = { KVSE_pack_2len_32bw_16offset<uint32_t>, 16, 16, 8, 8, };
static KVSEPackInfo KVSEPackInfo_127 = { KVSE_pack_2len_32bw_24offset<uint32_t>, 24, 24, 8, 8, };
static KVSEPackInfo KVSEPackInfo_128 = { KVSE_pack_4len_0bw_0offset<uint32_t>, 0, 0, 0, 16, };
static KVSEPackInfo KVSEPackInfo_129 = { KVSE_pack_4len_0bw_8offset<uint32_t>, 8, 8, 0, 16, };
static KVSEPackInfo KVSEPackInfo_130 = { KVSE_pack_4len_0bw_16offset<uint32_t>, 16, 16, 0, 16, };
static KVSEPackInfo KVSEPackInfo_131 = { KVSE_pack_4len_0bw_24offset<uint32_t>, 24, 24, 0, 16, };
static KVSEPackInfo KVSEPackInfo_132 = { KVSE_pack_4len_1bw_0offset<uint32_t>, 0, 8, 0, 16, };
static KVSEPackInfo KVSEPackInfo_133 = { KVSE_pack_4len_1bw_8offset<uint32_t>, 8, 16, 0, 16, };
static KVSEPackInfo KVSEPackInfo_134 = { KVSE_pack_4len_1bw_16offset<uint32_t>, 16, 24, 0, 16, };
static KVSEPackInfo KVSEPackInfo_135 = { KVSE_pack_4len_1bw_24offset<uint32_t>, 24, 0, 4, 16, };
static KVSEPackInfo KVSEPackInfo_136 = { KVSE_pack_4len_2bw_0offset<uint32_t>, 0, 8, 0, 16, };
static KVSEPackInfo KVSEPackInfo_137 = { KVSE_pack_4len_2bw_8offset<uint32_t>, 8, 16, 0, 16, };
static KVSEPackInfo KVSEPackInfo_138 = { KVSE_pack_4len_2bw_16offset<uint32_t>, 16, 24, 0, 16, };
static KVSEPackInfo KVSEPackInfo_139 = { KVSE_pack_4len_2bw_24offset<uint32_t>, 24, 0, 4, 16, };
static KVSEPackInfo KVSEPackInfo_140 = { KVSE_pack_4len_3bw_0offset<uint32_t>, 0, 16, 0, 16, };
static KVSEPackInfo KVSEPackInfo_141 = { KVSE_pack_4len_3bw_8offset<uint32_t>, 8, 24, 0, 16, };
static KVSEPackInfo KVSEPackInfo_142 = { KVSE_pack_4len_3bw_16offset<uint32_t>, 16, 0, 4, 16, };
static KVSEPackInfo KVSEPackInfo_143 = { KVSE_pack_4len_3bw_24offset<uint32_t>, 24, 8, 4, 16, };
static KVSEPackInfo KVSEPackInfo_144 = { KVSE_pack_4len_4bw_0offset<uint32_t>, 0, 16, 0, 16, };
static KVSEPackInfo KVSEPackInfo_145 = { KVSE_pack_4len_4bw_8offset<uint32_t>, 8, 24, 0, 16, };
static KVSEPackInfo KVSEPackInfo_146 = { KVSE_pack_4len_4bw_16offset<uint32_t>, 16, 0, 4, 16, };
static KVSEPackInfo KVSEPackInfo_147 = { KVSE_pack_4len_4bw_24offset<uint32_t>, 24, 8, 4, 16, };
static KVSEPackInfo KVSEPackInfo_148 = { KVSE_pack_4len_5bw_0offset<uint32_t>, 0, 24, 0, 16, };
static KVSEPackInfo KVSEPackInfo_149 = { KVSE_pack_4len_5bw_8offset<uint32_t>, 8, 0, 4, 16, };
static KVSEPackInfo KVSEPackInfo_150 = { KVSE_pack_4len_5bw_16offset<uint32_t>, 16, 8, 4, 16, };
static KVSEPackInfo KVSEPackInfo_151 = { KVSE_pack_4len_5bw_24offset<uint32_t>, 24, 16, 4, 16, };
static KVSEPackInfo KVSEPackInfo_152 = { KVSE_pack_4len_6bw_0offset<uint32_t>, 0, 24, 0, 16, };
static KVSEPackInfo KVSEPackInfo_153 = { KVSE_pack_4len_6bw_8offset<uint32_t>, 8, 0, 4, 16, };
static KVSEPackInfo KVSEPackInfo_154 = { KVSE_pack_4len_6bw_16offset<uint32_t>, 16, 8, 4, 16, };
static KVSEPackInfo KVSEPackInfo_155 = { KVSE_pack_4len_6bw_24offset<uint32_t>, 24, 16, 4, 16, };
static KVSEPackInfo KVSEPackInfo_156 = { KVSE_pack_4len_7bw_0offset<uint32_t>, 0, 0, 4, 16, };
static KVSEPackInfo KVSEPackInfo_157 = { KVSE_pack_4len_7bw_8offset<uint32_t>, 8, 8, 4, 16, };
static KVSEPackInfo KVSEPackInfo_158 = { KVSE_pack_4len_7bw_16offset<uint32_t>, 16, 16, 4, 16, };
static KVSEPackInfo KVSEPackInfo_159 = { KVSE_pack_4len_7bw_24offset<uint32_t>, 24, 24, 4, 16, };
static KVSEPackInfo KVSEPackInfo_160 = { KVSE_pack_4len_8bw_0offset<uint32_t>, 0, 0, 4, 16, };
static KVSEPackInfo KVSEPackInfo_161 = { KVSE_pack_4len_8bw_8offset<uint32_t>, 8, 8, 4, 16, };
static KVSEPackInfo KVSEPackInfo_162 = { KVSE_pack_4len_8bw_16offset<uint32_t>, 16, 16, 4, 16, };
static KVSEPackInfo KVSEPackInfo_163 = { KVSE_pack_4len_8bw_24offset<uint32_t>, 24, 24, 4, 16, };
static KVSEPackInfo KVSEPackInfo_164 = { KVSE_pack_4len_9bw_0offset<uint32_t>, 0, 8, 4, 16, };
static KVSEPackInfo KVSEPackInfo_165 = { KVSE_pack_4len_9bw_8offset<uint32_t>, 8, 16, 4, 16, };
static KVSEPackInfo KVSEPackInfo_166 = { KVSE_pack_4len_9bw_16offset<uint32_t>, 16, 24, 4, 16, };
static KVSEPackInfo KVSEPackInfo_167 = { KVSE_pack_4len_9bw_24offset<uint32_t>, 24, 0, 8, 16, };
static KVSEPackInfo KVSEPackInfo_168 = { KVSE_pack_4len_10bw_0offset<uint32_t>, 0, 8, 4, 16, };
static KVSEPackInfo KVSEPackInfo_169 = { KVSE_pack_4len_10bw_8offset<uint32_t>, 8, 16, 4, 16, };
static KVSEPackInfo KVSEPackInfo_170 = { KVSE_pack_4len_10bw_16offset<uint32_t>, 16, 24, 4, 16, };
static KVSEPackInfo KVSEPackInfo_171 = { KVSE_pack_4len_10bw_24offset<uint32_t>, 24, 0, 8, 16, };
static KVSEPackInfo KVSEPackInfo_172 = { KVSE_pack_4len_11bw_0offset<uint32_t>, 0, 16, 4, 16, };
static KVSEPackInfo KVSEPackInfo_173 = { KVSE_pack_4len_11bw_8offset<uint32_t>, 8, 24, 4, 16, };
static KVSEPackInfo KVSEPackInfo_174 = { KVSE_pack_4len_11bw_16offset<uint32_t>, 16, 0, 8, 16, };
static KVSEPackInfo KVSEPackInfo_175 = { KVSE_pack_4len_11bw_24offset<uint32_t>, 24, 8, 8, 16, };
static KVSEPackInfo KVSEPackInfo_176 = { KVSE_pack_4len_12bw_0offset<uint32_t>, 0, 16, 4, 16, };
static KVSEPackInfo KVSEPackInfo_177 = { KVSE_pack_4len_12bw_8offset<uint32_t>, 8, 24, 4, 16, };
static KVSEPackInfo KVSEPackInfo_178 = { KVSE_pack_4len_12bw_16offset<uint32_t>, 16, 0, 8, 16, };
static KVSEPackInfo KVSEPackInfo_179 = { KVSE_pack_4len_12bw_24offset<uint32_t>, 24, 8, 8, 16, };
static KVSEPackInfo KVSEPackInfo_180 = { KVSE_pack_4len_16bw_0offset<uint32_t>, 0, 0, 8, 16, };
static KVSEPackInfo KVSEPackInfo_181 = { KVSE_pack_4len_16bw_8offset<uint32_t>, 8, 8, 8, 16, };
static KVSEPackInfo KVSEPackInfo_182 = { KVSE_pack_4len_16bw_16offset<uint32_t>, 16, 16, 8, 16, };
static KVSEPackInfo KVSEPackInfo_183 = { KVSE_pack_4len_16bw_24offset<uint32_t>, 24, 24, 8, 16, };
static KVSEPackInfo KVSEPackInfo_184 = { KVSE_pack_4len_20bw_0offset<uint32_t>, 0, 16, 8, 16, };
static KVSEPackInfo KVSEPackInfo_185 = { KVSE_pack_4len_20bw_8offset<uint32_t>, 8, 24, 8, 16, };
static KVSEPackInfo KVSEPackInfo_186 = { KVSE_pack_4len_20bw_16offset<uint32_t>, 16, 0, 12, 16, };
static KVSEPackInfo KVSEPackInfo_187 = { KVSE_pack_4len_20bw_24offset<uint32_t>, 24, 8, 12, 16, };
static KVSEPackInfo KVSEPackInfo_188 = { KVSE_pack_4len_32bw_0offset<uint32_t>, 0, 0, 16, 16, };
static KVSEPackInfo KVSEPackInfo_189 = { KVSE_pack_4len_32bw_8offset<uint32_t>, 8, 8, 16, 16, };
static KVSEPackInfo KVSEPackInfo_190 = { KVSE_pack_4len_32bw_16offset<uint32_t>, 16, 16, 16, 16, };
static KVSEPackInfo KVSEPackInfo_191 = { KVSE_pack_4len_32bw_24offset<uint32_t>, 24, 24, 16, 16, };
static KVSEPackInfo KVSEPackInfo_192 = { KVSE_pack_8len_0bw_0offset<uint32_t>, 0, 0, 0, 32, };
static KVSEPackInfo KVSEPackInfo_193 = { KVSE_pack_8len_0bw_8offset<uint32_t>, 8, 8, 0, 32, };
static KVSEPackInfo KVSEPackInfo_194 = { KVSE_pack_8len_0bw_16offset<uint32_t>, 16, 16, 0, 32, };
static KVSEPackInfo KVSEPackInfo_195 = { KVSE_pack_8len_0bw_24offset<uint32_t>, 24, 24, 0, 32, };
static KVSEPackInfo KVSEPackInfo_196 = { KVSE_pack_8len_1bw_0offset<uint32_t>, 0, 8, 0, 32, };
static KVSEPackInfo KVSEPackInfo_197 = { KVSE_pack_8len_1bw_8offset<uint32_t>, 8, 16, 0, 32, };
static KVSEPackInfo KVSEPackInfo_198 = { KVSE_pack_8len_1bw_16offset<uint32_t>, 16, 24, 0, 32, };
static KVSEPackInfo KVSEPackInfo_199 = { KVSE_pack_8len_1bw_24offset<uint32_t>, 24, 0, 4, 32, };
static KVSEPackInfo KVSEPackInfo_200 = { KVSE_pack_8len_2bw_0offset<uint32_t>, 0, 16, 0, 32, };
static KVSEPackInfo KVSEPackInfo_201 = { KVSE_pack_8len_2bw_8offset<uint32_t>, 8, 24, 0, 32, };
static KVSEPackInfo KVSEPackInfo_202 = { KVSE_pack_8len_2bw_16offset<uint32_t>, 16, 0, 4, 32, };
static KVSEPackInfo KVSEPackInfo_203 = { KVSE_pack_8len_2bw_24offset<uint32_t>, 24, 8, 4, 32, };
static KVSEPackInfo KVSEPackInfo_204 = { KVSE_pack_8len_3bw_0offset<uint32_t>, 0, 24, 0, 32, };
static KVSEPackInfo KVSEPackInfo_205 = { KVSE_pack_8len_3bw_8offset<uint32_t>, 8, 0, 4, 32, };
static KVSEPackInfo KVSEPackInfo_206 = { KVSE_pack_8len_3bw_16offset<uint32_t>, 16, 8, 4, 32, };
static KVSEPackInfo KVSEPackInfo_207 = { KVSE_pack_8len_3bw_24offset<uint32_t>, 24, 16, 4, 32, };
static KVSEPackInfo KVSEPackInfo_208 = { KVSE_pack_8len_4bw_0offset<uint32_t>, 0, 0, 4, 32, };
static KVSEPackInfo KVSEPackInfo_209 = { KVSE_pack_8len_4bw_8offset<uint32_t>, 8, 8, 4, 32, };
static KVSEPackInfo KVSEPackInfo_210 = { KVSE_pack_8len_4bw_16offset<uint32_t>, 16, 16, 4, 32, };
static KVSEPackInfo KVSEPackInfo_211 = { KVSE_pack_8len_4bw_24offset<uint32_t>, 24, 24, 4, 32, };
static KVSEPackInfo KVSEPackInfo_212 = { KVSE_pack_8len_5bw_0offset<uint32_t>, 0, 8, 4, 32, };
static KVSEPackInfo KVSEPackInfo_213 = { KVSE_pack_8len_5bw_8offset<uint32_t>, 8, 16, 4, 32, };
static KVSEPackInfo KVSEPackInfo_214 = { KVSE_pack_8len_5bw_16offset<uint32_t>, 16, 24, 4, 32, };
static KVSEPackInfo KVSEPackInfo_215 = { KVSE_pack_8len_5bw_24offset<uint32_t>, 24, 0, 8, 32, };
static KVSEPackInfo KVSEPackInfo_216 = { KVSE_pack_8len_6bw_0offset<uint32_t>, 0, 16, 4, 32, };
static KVSEPackInfo KVSEPackInfo_217 = { KVSE_pack_8len_6bw_8offset<uint32_t>, 8, 24, 4, 32, };
static KVSEPackInfo KVSEPackInfo_218 = { KVSE_pack_8len_6bw_16offset<uint32_t>, 16, 0, 8, 32, };
static KVSEPackInfo KVSEPackInfo_219 = { KVSE_pack_8len_6bw_24offset<uint32_t>, 24, 8, 8, 32, };
static KVSEPackInfo KVSEPackInfo_220 = { KVSE_pack_8len_7bw_0offset<uint32_t>, 0, 24, 4, 32, };
static KVSEPackInfo KVSEPackInfo_221 = { KVSE_pack_8len_7bw_8offset<uint32_t>, 8, 0, 8, 32, };
static KVSEPackInfo KVSEPackInfo_222 = { KVSE_pack_8len_7bw_16offset<uint32_t>, 16, 8, 8, 32, };
static KVSEPackInfo KVSEPackInfo_223 = { KVSE_pack_8len_7bw_24offset<uint32_t>, 24, 16, 8, 32, };
static KVSEPackInfo KVSEPackInfo_224 = { KVSE_pack_8len_8bw_0offset<uint32_t>, 0, 0, 8, 32, };
static KVSEPackInfo KVSEPackInfo_225 = { KVSE_pack_8len_8bw_8offset<uint32_t>, 8, 8, 8, 32, };
static KVSEPackInfo KVSEPackInfo_226 = { KVSE_pack_8len_8bw_16offset<uint32_t>, 16, 16, 8, 32, };
static KVSEPackInfo KVSEPackInfo_227 = { KVSE_pack_8len_8bw_24offset<uint32_t>, 24, 24, 8, 32, };
static KVSEPackInfo KVSEPackInfo_228 = { KVSE_pack_8len_9bw_0offset<uint32_t>, 0, 8, 8, 32, };
static KVSEPackInfo KVSEPackInfo_229 = { KVSE_pack_8len_9bw_8offset<uint32_t>, 8, 16, 8, 32, };
static KVSEPackInfo KVSEPackInfo_230 = { KVSE_pack_8len_9bw_16offset<uint32_t>, 16, 24, 8, 32, };
static KVSEPackInfo KVSEPackInfo_231 = { KVSE_pack_8len_9bw_24offset<uint32_t>, 24, 0, 12, 32, };
static KVSEPackInfo KVSEPackInfo_232 = { KVSE_pack_8len_10bw_0offset<uint32_t>, 0, 16, 8, 32, };
static KVSEPackInfo KVSEPackInfo_233 = { KVSE_pack_8len_10bw_8offset<uint32_t>, 8, 24, 8, 32, };
static KVSEPackInfo KVSEPackInfo_234 = { KVSE_pack_8len_10bw_16offset<uint32_t>, 16, 0, 12, 32, };
static KVSEPackInfo KVSEPackInfo_235 = { KVSE_pack_8len_10bw_24offset<uint32_t>, 24, 8, 12, 32, };
static KVSEPackInfo KVSEPackInfo_236 = { KVSE_pack_8len_11bw_0offset<uint32_t>, 0, 24, 8, 32, };
static KVSEPackInfo KVSEPackInfo_237 = { KVSE_pack_8len_11bw_8offset<uint32_t>, 8, 0, 12, 32, };
static KVSEPackInfo KVSEPackInfo_238 = { KVSE_pack_8len_11bw_16offset<uint32_t>, 16, 8, 12, 32, };
static KVSEPackInfo KVSEPackInfo_239 = { KVSE_pack_8len_11bw_24offset<uint32_t>, 24, 16, 12, 32, };
static KVSEPackInfo KVSEPackInfo_240 = { KVSE_pack_8len_12bw_0offset<uint32_t>, 0, 0, 12, 32, };
static KVSEPackInfo KVSEPackInfo_241 = { KVSE_pack_8len_12bw_8offset<uint32_t>, 8, 8, 12, 32, };
static KVSEPackInfo KVSEPackInfo_242 = { KVSE_pack_8len_12bw_16offset<uint32_t>, 16, 16, 12, 32, };
static KVSEPackInfo KVSEPackInfo_243 = { KVSE_pack_8len_12bw_24offset<uint32_t>, 24, 24, 12, 32, };
static KVSEPackInfo KVSEPackInfo_244 = { KVSE_pack_8len_16bw_0offset<uint32_t>, 0, 0, 16, 32, };
static KVSEPackInfo KVSEPackInfo_245 = { KVSE_pack_8len_16bw_8offset<uint32_t>, 8, 8, 16, 32, };
static KVSEPackInfo KVSEPackInfo_246 = { KVSE_pack_8len_16bw_16offset<uint32_t>, 16, 16, 16, 32, };
static KVSEPackInfo KVSEPackInfo_247 = { KVSE_pack_8len_16bw_24offset<uint32_t>, 24, 24, 16, 32, };
static KVSEPackInfo KVSEPackInfo_248 = { KVSE_pack_8len_20bw_0offset<uint32_t>, 0, 0, 20, 32, };
static KVSEPackInfo KVSEPackInfo_249 = { KVSE_pack_8len_20bw_8offset<uint32_t>, 8, 8, 20, 32, };
static KVSEPackInfo KVSEPackInfo_250 = { KVSE_pack_8len_20bw_16offset<uint32_t>, 16, 16, 20, 32, };
static KVSEPackInfo KVSEPackInfo_251 = { KVSE_pack_8len_20bw_24offset<uint32_t>, 24, 24, 20, 32, };
static KVSEPackInfo KVSEPackInfo_252 = { KVSE_pack_8len_32bw_0offset<uint32_t>, 0, 0, 32, 32, };
static KVSEPackInfo KVSEPackInfo_253 = { KVSE_pack_8len_32bw_8offset<uint32_t>, 8, 8, 32, 32, };
static KVSEPackInfo KVSEPackInfo_254 = { KVSE_pack_8len_32bw_16offset<uint32_t>, 16, 16, 32, 32, };
static KVSEPackInfo KVSEPackInfo_255 = { KVSE_pack_8len_32bw_24offset<uint32_t>, 24, 24, 32, 32, };
static KVSEPackInfo KVSEPackInfo_256 = { KVSE_pack_12len_0bw_0offset<uint32_t>, 0, 0, 0, 48, };
static KVSEPackInfo KVSEPackInfo_257 = { KVSE_pack_12len_0bw_8offset<uint32_t>, 8, 8, 0, 48, };
static KVSEPackInfo KVSEPackInfo_258 = { KVSE_pack_12len_0bw_16offset<uint32_t>, 16, 16, 0, 48, };
static KVSEPackInfo KVSEPackInfo_259 = { KVSE_pack_12len_0bw_24offset<uint32_t>, 24, 24, 0, 48, };
static KVSEPackInfo KVSEPackInfo_260 = { KVSE_pack_12len_1bw_0offset<uint32_t>, 0, 16, 0, 48, };
static KVSEPackInfo KVSEPackInfo_261 = { KVSE_pack_12len_1bw_8offset<uint32_t>, 8, 24, 0, 48, };
static KVSEPackInfo KVSEPackInfo_262 = { KVSE_pack_12len_1bw_16offset<uint32_t>, 16, 0, 4, 48, };
static KVSEPackInfo KVSEPackInfo_263 = { KVSE_pack_12len_1bw_24offset<uint32_t>, 24, 8, 4, 48, };
static KVSEPackInfo KVSEPackInfo_264 = { KVSE_pack_12len_2bw_0offset<uint32_t>, 0, 24, 0, 48, };
static KVSEPackInfo KVSEPackInfo_265 = { KVSE_pack_12len_2bw_8offset<uint32_t>, 8, 0, 4, 48, };
static KVSEPackInfo KVSEPackInfo_266 = { KVSE_pack_12len_2bw_16offset<uint32_t>, 16, 8, 4, 48, };
static KVSEPackInfo KVSEPackInfo_267 = { KVSE_pack_12len_2bw_24offset<uint32_t>, 24, 16, 4, 48, };
static KVSEPackInfo KVSEPackInfo_268 = { KVSE_pack_12len_3bw_0offset<uint32_t>, 0, 8, 4, 48, };
static KVSEPackInfo KVSEPackInfo_269 = { KVSE_pack_12len_3bw_8offset<uint32_t>, 8, 16, 4, 48, };
static KVSEPackInfo KVSEPackInfo_270 = { KVSE_pack_12len_3bw_16offset<uint32_t>, 16, 24, 4, 48, };
static KVSEPackInfo KVSEPackInfo_271 = { KVSE_pack_12len_3bw_24offset<uint32_t>, 24, 0, 8, 48, };
static KVSEPackInfo KVSEPackInfo_272 = { KVSE_pack_12len_4bw_0offset<uint32_t>, 0, 16, 4, 48, };
static KVSEPackInfo KVSEPackInfo_273 = { KVSE_pack_12len_4bw_8offset<uint32_t>, 8, 24, 4, 48, };
static KVSEPackInfo KVSEPackInfo_274 = { KVSE_pack_12len_4bw_16offset<uint32_t>, 16, 0, 8, 48, };
static KVSEPackInfo KVSEPackInfo_275 = { KVSE_pack_12len_4bw_24offset<uint32_t>, 24, 8, 8, 48, };
static KVSEPackInfo KVSEPackInfo_276 = { KVSE_pack_12len_5bw_0offset<uint32_t>, 0, 0, 8, 48, };
static KVSEPackInfo KVSEPackInfo_277 = { KVSE_pack_12len_5bw_8offset<uint32_t>, 8, 8, 8, 48, };
static KVSEPackInfo KVSEPackInfo_278 = { KVSE_pack_12len_5bw_16offset<uint32_t>, 16, 16, 8, 48, };
static KVSEPackInfo KVSEPackInfo_279 = { KVSE_pack_12len_5bw_24offset<uint32_t>, 24, 24, 8, 48, };
static KVSEPackInfo KVSEPackInfo_280 = { KVSE_pack_12len_6bw_0offset<uint32_t>, 0, 8, 8, 48, };
static KVSEPackInfo KVSEPackInfo_281 = { KVSE_pack_12len_6bw_8offset<uint32_t>, 8, 16, 8, 48, };
static KVSEPackInfo KVSEPackInfo_282 = { KVSE_pack_12len_6bw_16offset<uint32_t>, 16, 24, 8, 48, };
static KVSEPackInfo KVSEPackInfo_283 = { KVSE_pack_12len_6bw_24offset<uint32_t>, 24, 0, 12, 48, };
static KVSEPackInfo KVSEPackInfo_284 = { KVSE_pack_12len_7bw_0offset<uint32_t>, 0, 24, 8, 48, };
static KVSEPackInfo KVSEPackInfo_285 = { KVSE_pack_12len_7bw_8offset<uint32_t>, 8, 0, 12, 48, };
static KVSEPackInfo KVSEPackInfo_286 = { KVSE_pack_12len_7bw_16offset<uint32_t>, 16, 8, 12, 48, };
static KVSEPackInfo KVSEPackInfo_287 = { KVSE_pack_12len_7bw_24offset<uint32_t>, 24, 16, 12, 48, };
static KVSEPackInfo KVSEPackInfo_288 = { KVSE_pack_12len_8bw_0offset<uint32_t>, 0, 0, 12, 48, };
static KVSEPackInfo KVSEPackInfo_289 = { KVSE_pack_12len_8bw_8offset<uint32_t>, 8, 8, 12, 48, };
static KVSEPackInfo KVSEPackInfo_290 = { KVSE_pack_12len_8bw_16offset<uint32_t>, 16, 16, 12, 48, };
static KVSEPackInfo KVSEPackInfo_291 = { KVSE_pack_12len_8bw_24offset<uint32_t>, 24, 24, 12, 48, };
static KVSEPackInfo KVSEPackInfo_292 = { KVSE_pack_12len_9bw_0offset<uint32_t>, 0, 16, 12, 48, };
static KVSEPackInfo KVSEPackInfo_293 = { KVSE_pack_12len_9bw_8offset<uint32_t>, 8, 24, 12, 48, };
static KVSEPackInfo KVSEPackInfo_294 = { KVSE_pack_12len_9bw_16offset<uint32_t>, 16, 0, 16, 48, };
static KVSEPackInfo KVSEPackInfo_295 = { KVSE_pack_12len_9bw_24offset<uint32_t>, 24, 8, 16, 48, };
static KVSEPackInfo KVSEPackInfo_296 = { KVSE_pack_12len_10bw_0offset<uint32_t>, 0, 24, 12, 48, };
static KVSEPackInfo KVSEPackInfo_297 = { KVSE_pack_12len_10bw_8offset<uint32_t>, 8, 0, 16, 48, };
static KVSEPackInfo KVSEPackInfo_298 = { KVSE_pack_12len_10bw_16offset<uint32_t>, 16, 8, 16, 48, };
static KVSEPackInfo KVSEPackInfo_299 = { KVSE_pack_12len_10bw_24offset<uint32_t>, 24, 16, 16, 48, };
static KVSEPackInfo KVSEPackInfo_300 = { KVSE_pack_12len_11bw_0offset<uint32_t>, 0, 8, 16, 48, };
static KVSEPackInfo KVSEPackInfo_301 = { KVSE_pack_12len_11bw_8offset<uint32_t>, 8, 16, 16, 48, };
static KVSEPackInfo KVSEPackInfo_302 = { KVSE_pack_12len_11bw_16offset<uint32_t>, 16, 24, 16, 48, };
static KVSEPackInfo KVSEPackInfo_303 = { KVSE_pack_12len_11bw_24offset<uint32_t>, 24, 0, 20, 48, };
static KVSEPackInfo KVSEPackInfo_304 = { KVSE_pack_12len_12bw_0offset<uint32_t>, 0, 16, 16, 48, };
static KVSEPackInfo KVSEPackInfo_305 = { KVSE_pack_12len_12bw_8offset<uint32_t>, 8, 24, 16, 48, };
static KVSEPackInfo KVSEPackInfo_306 = { KVSE_pack_12len_12bw_16offset<uint32_t>, 16, 0, 20, 48, };
static KVSEPackInfo KVSEPackInfo_307 = { KVSE_pack_12len_12bw_24offset<uint32_t>, 24, 8, 20, 48, };
static KVSEPackInfo KVSEPackInfo_308 = { KVSE_pack_12len_16bw_0offset<uint32_t>, 0, 0, 24, 48, };
static KVSEPackInfo KVSEPackInfo_309 = { KVSE_pack_12len_16bw_8offset<uint32_t>, 8, 8, 24, 48, };
static KVSEPackInfo KVSEPackInfo_310 = { KVSE_pack_12len_16bw_16offset<uint32_t>, 16, 16, 24, 48, };
static KVSEPackInfo KVSEPackInfo_311 = { KVSE_pack_12len_16bw_24offset<uint32_t>, 24, 24, 24, 48, };
static KVSEPackInfo KVSEPackInfo_312 = { KVSE_pack_12len_20bw_0offset<uint32_t>, 0, 16, 28, 48, };
static KVSEPackInfo KVSEPackInfo_313 = { KVSE_pack_12len_20bw_8offset<uint32_t>, 8, 24, 28, 48, };
static KVSEPackInfo KVSEPackInfo_314 = { KVSE_pack_12len_20bw_16offset<uint32_t>, 16, 0, 32, 48, };
static KVSEPackInfo KVSEPackInfo_315 = { KVSE_pack_12len_20bw_24offset<uint32_t>, 24, 8, 32, 48, };
static KVSEPackInfo KVSEPackInfo_316 = { KVSE_pack_12len_32bw_0offset<uint32_t>, 0, 0, 48, 48, };
static KVSEPackInfo KVSEPackInfo_317 = { KVSE_pack_12len_32bw_8offset<uint32_t>, 8, 8, 48, 48, };
static KVSEPackInfo KVSEPackInfo_318 = { KVSE_pack_12len_32bw_16offset<uint32_t>, 16, 16, 48, 48, };
static KVSEPackInfo KVSEPackInfo_319 = { KVSE_pack_12len_32bw_24offset<uint32_t>, 24, 24, 48, 48, };
static KVSEPackInfo KVSEPackInfo_320 = { KVSE_pack_16len_0bw_0offset<uint32_t>, 0, 0, 0, 64, };
static KVSEPackInfo KVSEPackInfo_321 = { KVSE_pack_16len_0bw_8offset<uint32_t>, 8, 8, 0, 64, };
static KVSEPackInfo KVSEPackInfo_322 = { KVSE_pack_16len_0bw_16offset<uint32_t>, 16, 16, 0, 64, };
static KVSEPackInfo KVSEPackInfo_323 = { KVSE_pack_16len_0bw_24offset<uint32_t>, 24, 24, 0, 64, };
static KVSEPackInfo KVSEPackInfo_324 = { KVSE_pack_16len_1bw_0offset<uint32_t>, 0, 16, 0, 64, };
static KVSEPackInfo KVSEPackInfo_325 = { KVSE_pack_16len_1bw_8offset<uint32_t>, 8, 24, 0, 64, };
static KVSEPackInfo KVSEPackInfo_326 = { KVSE_pack_16len_1bw_16offset<uint32_t>, 16, 0, 4, 64, };
static KVSEPackInfo KVSEPackInfo_327 = { KVSE_pack_16len_1bw_24offset<uint32_t>, 24, 8, 4, 64, };
static KVSEPackInfo KVSEPackInfo_328 = { KVSE_pack_16len_2bw_0offset<uint32_t>, 0, 0, 4, 64, };
static KVSEPackInfo KVSEPackInfo_329 = { KVSE_pack_16len_2bw_8offset<uint32_t>, 8, 8, 4, 64, };
static KVSEPackInfo KVSEPackInfo_330 = { KVSE_pack_16len_2bw_16offset<uint32_t>, 16, 16, 4, 64, };
static KVSEPackInfo KVSEPackInfo_331 = { KVSE_pack_16len_2bw_24offset<uint32_t>, 24, 24, 4, 64, };
static KVSEPackInfo KVSEPackInfo_332 = { KVSE_pack_16len_3bw_0offset<uint32_t>, 0, 16, 4, 64, };
static KVSEPackInfo KVSEPackInfo_333 = { KVSE_pack_16len_3bw_8offset<uint32_t>, 8, 24, 4, 64, };
static KVSEPackInfo KVSEPackInfo_334 = { KVSE_pack_16len_3bw_16offset<uint32_t>, 16, 0, 8, 64, };
static KVSEPackInfo KVSEPackInfo_335 = { KVSE_pack_16len_3bw_24offset<uint32_t>, 24, 8, 8, 64, };
static KVSEPackInfo KVSEPackInfo_336 = { KVSE_pack_16len_4bw_0offset<uint32_t>, 0, 0, 8, 64, };
static KVSEPackInfo KVSEPackInfo_337 = { KVSE_pack_16len_4bw_8offset<uint32_t>, 8, 8, 8, 64, };
static KVSEPackInfo KVSEPackInfo_338 = { KVSE_pack_16len_4bw_16offset<uint32_t>, 16, 16, 8, 64, };
static KVSEPackInfo KVSEPackInfo_339 = { KVSE_pack_16len_4bw_24offset<uint32_t>, 24, 24, 8, 64, };
static KVSEPackInfo KVSEPackInfo_340 = { KVSE_pack_16len_5bw_0offset<uint32_t>, 0, 16, 8, 64, };
static KVSEPackInfo KVSEPackInfo_341 = { KVSE_pack_16len_5bw_8offset<uint32_t>, 8, 24, 8, 64, };
static KVSEPackInfo KVSEPackInfo_342 = { KVSE_pack_16len_5bw_16offset<uint32_t>, 16, 0, 12, 64, };
static KVSEPackInfo KVSEPackInfo_343 = { KVSE_pack_16len_5bw_24offset<uint32_t>, 24, 8, 12, 64, };
static KVSEPackInfo KVSEPackInfo_344 = { KVSE_pack_16len_6bw_0offset<uint32_t>, 0, 0, 12, 64, };
static KVSEPackInfo KVSEPackInfo_345 = { KVSE_pack_16len_6bw_8offset<uint32_t>, 8, 8, 12, 64, };
static KVSEPackInfo KVSEPackInfo_346 = { KVSE_pack_16len_6bw_16offset<uint32_t>, 16, 16, 12, 64, };
static KVSEPackInfo KVSEPackInfo_347 = { KVSE_pack_16len_6bw_24offset<uint32_t>, 24, 24, 12, 64, };
static KVSEPackInfo KVSEPackInfo_348 = { KVSE_pack_16len_7bw_0offset<uint32_t>, 0, 16, 12, 64, };
static KVSEPackInfo KVSEPackInfo_349 = { KVSE_pack_16len_7bw_8offset<uint32_t>, 8, 24, 12, 64, };
static KVSEPackInfo KVSEPackInfo_350 = { KVSE_pack_16len_7bw_16offset<uint32_t>, 16, 0, 16, 64, };
static KVSEPackInfo KVSEPackInfo_351 = { KVSE_pack_16len_7bw_24offset<uint32_t>, 24, 8, 16, 64, };
static KVSEPackInfo KVSEPackInfo_352 = { KVSE_pack_16len_8bw_0offset<uint32_t>, 0, 0, 16, 64, };
static KVSEPackInfo KVSEPackInfo_353 = { KVSE_pack_16len_8bw_8offset<uint32_t>, 8, 8, 16, 64, };
static KVSEPackInfo KVSEPackInfo_354 = { KVSE_pack_16len_8bw_16offset<uint32_t>, 16, 16, 16, 64, };
static KVSEPackInfo KVSEPackInfo_355 = { KVSE_pack_16len_8bw_24offset<uint32_t>, 24, 24, 16, 64, };
static KVSEPackInfo KVSEPackInfo_356 = { KVSE_pack_16len_9bw_0offset<uint32_t>, 0, 16, 16, 64, };
static KVSEPackInfo KVSEPackInfo_357 = { KVSE_pack_16len_9bw_8offset<uint32_t>, 8, 24, 16, 64, };
static KVSEPackInfo KVSEPackInfo_358 = { KVSE_pack_16len_9bw_16offset<uint32_t>, 16, 0, 20, 64, };
static KVSEPackInfo KVSEPackInfo_359 = { KVSE_pack_16len_9bw_24offset<uint32_t>, 24, 8, 20, 64, };
static KVSEPackInfo KVSEPackInfo_360 = { KVSE_pack_16len_10bw_0offset<uint32_t>, 0, 0, 20, 64, };
static KVSEPackInfo KVSEPackInfo_361 = { KVSE_pack_16len_10bw_8offset<uint32_t>, 8, 8, 20, 64, };
static KVSEPackInfo KVSEPackInfo_362 = { KVSE_pack_16len_10bw_16offset<uint32_t>, 16, 16, 20, 64, };
static KVSEPackInfo KVSEPackInfo_363 = { KVSE_pack_16len_10bw_24offset<uint32_t>, 24, 24, 20, 64, };
static KVSEPackInfo KVSEPackInfo_364 = { KVSE_pack_16len_11bw_0offset<uint32_t>, 0, 16, 20, 64, };
static KVSEPackInfo KVSEPackInfo_365 = { KVSE_pack_16len_11bw_8offset<uint32_t>, 8, 24, 20, 64, };
static KVSEPackInfo KVSEPackInfo_366 = { KVSE_pack_16len_11bw_16offset<uint32_t>, 16, 0, 24, 64, };
static KVSEPackInfo KVSEPackInfo_367 = { KVSE_pack_16len_11bw_24offset<uint32_t>, 24, 8, 24, 64, };
static KVSEPackInfo KVSEPackInfo_368 = { KVSE_pack_16len_12bw_0offset<uint32_t>, 0, 0, 24, 64, };
static KVSEPackInfo KVSEPackInfo_369 = { KVSE_pack_16len_12bw_8offset<uint32_t>, 8, 8, 24, 64, };
static KVSEPackInfo KVSEPackInfo_370 = { KVSE_pack_16len_12bw_16offset<uint32_t>, 16, 16, 24, 64, };
static KVSEPackInfo KVSEPackInfo_371 = { KVSE_pack_16len_12bw_24offset<uint32_t>, 24, 24, 24, 64, };
static KVSEPackInfo KVSEPackInfo_372 = { KVSE_pack_16len_16bw_0offset<uint32_t>, 0, 0, 32, 64, };
static KVSEPackInfo KVSEPackInfo_373 = { KVSE_pack_16len_16bw_8offset<uint32_t>, 8, 8, 32, 64, };
static KVSEPackInfo KVSEPackInfo_374 = { KVSE_pack_16len_16bw_16offset<uint32_t>, 16, 16, 32, 64, };
static KVSEPackInfo KVSEPackInfo_375 = { KVSE_pack_16len_16bw_24offset<uint32_t>, 24, 24, 32, 64, };
static KVSEPackInfo KVSEPackInfo_376 = { KVSE_pack_16len_20bw_0offset<uint32_t>, 0, 0, 40, 64, };
static KVSEPackInfo KVSEPackInfo_377 = { KVSE_pack_16len_20bw_8offset<uint32_t>, 8, 8, 40, 64, };
static KVSEPackInfo KVSEPackInfo_378 = { KVSE_pack_16len_20bw_16offset<uint32_t>, 16, 16, 40, 64, };
static KVSEPackInfo KVSEPackInfo_379 = { KVSE_pack_16len_20bw_24offset<uint32_t>, 24, 24, 40, 64, };
static KVSEPackInfo KVSEPackInfo_380 = { KVSE_pack_16len_32bw_0offset<uint32_t>, 0, 0, 64, 64, };
static KVSEPackInfo KVSEPackInfo_381 = { KVSE_pack_16len_32bw_8offset<uint32_t>, 8, 8, 64, 64, };
static KVSEPackInfo KVSEPackInfo_382 = { KVSE_pack_16len_32bw_16offset<uint32_t>, 16, 16, 64, 64, };
static KVSEPackInfo KVSEPackInfo_383 = { KVSE_pack_16len_32bw_24offset<uint32_t>, 24, 24, 64, 64, };
static KVSEPackInfo KVSEPackInfo_384 = { KVSE_pack_32len_0bw_0offset<uint32_t>, 0, 0, 0, 128, };
static KVSEPackInfo KVSEPackInfo_385 = { KVSE_pack_32len_0bw_8offset<uint32_t>, 8, 8, 0, 128, };
static KVSEPackInfo KVSEPackInfo_386 = { KVSE_pack_32len_0bw_16offset<uint32_t>, 16, 16, 0, 128, };
static KVSEPackInfo KVSEPackInfo_387 = { KVSE_pack_32len_0bw_24offset<uint32_t>, 24, 24, 0, 128, };
static KVSEPackInfo KVSEPackInfo_388 = { KVSE_pack_32len_1bw_0offset<uint32_t>, 0, 0, 4, 128, };
static KVSEPackInfo KVSEPackInfo_389 = { KVSE_pack_32len_1bw_8offset<uint32_t>, 8, 8, 4, 128, };
static KVSEPackInfo KVSEPackInfo_390 = { KVSE_pack_32len_1bw_16offset<uint32_t>, 16, 16, 4, 128, };
static KVSEPackInfo KVSEPackInfo_391 = { KVSE_pack_32len_1bw_24offset<uint32_t>, 24, 24, 4, 128, };
static KVSEPackInfo KVSEPackInfo_392 = { KVSE_pack_32len_2bw_0offset<uint32_t>, 0, 0, 8, 128, };
static KVSEPackInfo KVSEPackInfo_393 = { KVSE_pack_32len_2bw_8offset<uint32_t>, 8, 8, 8, 128, };
static KVSEPackInfo KVSEPackInfo_394 = { KVSE_pack_32len_2bw_16offset<uint32_t>, 16, 16, 8, 128, };
static KVSEPackInfo KVSEPackInfo_395 = { KVSE_pack_32len_2bw_24offset<uint32_t>, 24, 24, 8, 128, };
static KVSEPackInfo KVSEPackInfo_396 = { KVSE_pack_32len_3bw_0offset<uint32_t>, 0, 0, 12, 128, };
static KVSEPackInfo KVSEPackInfo_397 = { KVSE_pack_32len_3bw_8offset<uint32_t>, 8, 8, 12, 128, };
static KVSEPackInfo KVSEPackInfo_398 = { KVSE_pack_32len_3bw_16offset<uint32_t>, 16, 16, 12, 128, };
static KVSEPackInfo KVSEPackInfo_399 = { KVSE_pack_32len_3bw_24offset<uint32_t>, 24, 24, 12, 128, };
static KVSEPackInfo KVSEPackInfo_400 = { KVSE_pack_32len_4bw_0offset<uint32_t>, 0, 0, 16, 128, };
static KVSEPackInfo KVSEPackInfo_401 = { KVSE_pack_32len_4bw_8offset<uint32_t>, 8, 8, 16, 128, };
static KVSEPackInfo KVSEPackInfo_402 = { KVSE_pack_32len_4bw_16offset<uint32_t>, 16, 16, 16, 128, };
static KVSEPackInfo KVSEPackInfo_403 = { KVSE_pack_32len_4bw_24offset<uint32_t>, 24, 24, 16, 128, };
static KVSEPackInfo KVSEPackInfo_404 = { KVSE_pack_32len_5bw_0offset<uint32_t>, 0, 0, 20, 128, };
static KVSEPackInfo KVSEPackInfo_405 = { KVSE_pack_32len_5bw_8offset<uint32_t>, 8, 8, 20, 128, };
static KVSEPackInfo KVSEPackInfo_406 = { KVSE_pack_32len_5bw_16offset<uint32_t>, 16, 16, 20, 128, };
static KVSEPackInfo KVSEPackInfo_407 = { KVSE_pack_32len_5bw_24offset<uint32_t>, 24, 24, 20, 128, };
static KVSEPackInfo KVSEPackInfo_408 = { KVSE_pack_32len_6bw_0offset<uint32_t>, 0, 0, 24, 128, };
static KVSEPackInfo KVSEPackInfo_409 = { KVSE_pack_32len_6bw_8offset<uint32_t>, 8, 8, 24, 128, };
static KVSEPackInfo KVSEPackInfo_410 = { KVSE_pack_32len_6bw_16offset<uint32_t>, 16, 16, 24, 128, };
static KVSEPackInfo KVSEPackInfo_411 = { KVSE_pack_32len_6bw_24offset<uint32_t>, 24, 24, 24, 128, };
static KVSEPackInfo KVSEPackInfo_412 = { KVSE_pack_32len_7bw_0offset<uint32_t>, 0, 0, 28, 128, };
static KVSEPackInfo KVSEPackInfo_413 = { KVSE_pack_32len_7bw_8offset<uint32_t>, 8, 8, 28, 128, };
static KVSEPackInfo KVSEPackInfo_414 = { KVSE_pack_32len_7bw_16offset<uint32_t>, 16, 16, 28, 128, };
static KVSEPackInfo KVSEPackInfo_415 = { KVSE_pack_32len_7bw_24offset<uint32_t>, 24, 24, 28, 128, };
static KVSEPackInfo KVSEPackInfo_416 = { KVSE_pack_32len_8bw_0offset<uint32_t>, 0, 0, 32, 128, };
static KVSEPackInfo KVSEPackInfo_417 = { KVSE_pack_32len_8bw_8offset<uint32_t>, 8, 8, 32, 128, };
static KVSEPackInfo KVSEPackInfo_418 = { KVSE_pack_32len_8bw_16offset<uint32_t>, 16, 16, 32, 128, };
static KVSEPackInfo KVSEPackInfo_419 = { KVSE_pack_32len_8bw_24offset<uint32_t>, 24, 24, 32, 128, };
static KVSEPackInfo KVSEPackInfo_420 = { KVSE_pack_32len_9bw_0offset<uint32_t>, 0, 0, 36, 128, };
static KVSEPackInfo KVSEPackInfo_421 = { KVSE_pack_32len_9bw_8offset<uint32_t>, 8, 8, 36, 128, };
static KVSEPackInfo KVSEPackInfo_422 = { KVSE_pack_32len_9bw_16offset<uint32_t>, 16, 16, 36, 128, };
static KVSEPackInfo KVSEPackInfo_423 = { KVSE_pack_32len_9bw_24offset<uint32_t>, 24, 24, 36, 128, };
static KVSEPackInfo KVSEPackInfo_424 = { KVSE_pack_32len_10bw_0offset<uint32_t>, 0, 0, 40, 128, };
static KVSEPackInfo KVSEPackInfo_425 = { KVSE_pack_32len_10bw_8offset<uint32_t>, 8, 8, 40, 128, };
static KVSEPackInfo KVSEPackInfo_426 = { KVSE_pack_32len_10bw_16offset<uint32_t>, 16, 16, 40, 128, };
static KVSEPackInfo KVSEPackInfo_427 = { KVSE_pack_32len_10bw_24offset<uint32_t>, 24, 24, 40, 128, };
static KVSEPackInfo KVSEPackInfo_428 = { KVSE_pack_32len_11bw_0offset<uint32_t>, 0, 0, 44, 128, };
static KVSEPackInfo KVSEPackInfo_429 = { KVSE_pack_32len_11bw_8offset<uint32_t>, 8, 8, 44, 128, };
static KVSEPackInfo KVSEPackInfo_430 = { KVSE_pack_32len_11bw_16offset<uint32_t>, 16, 16, 44, 128, };
static KVSEPackInfo KVSEPackInfo_431 = { KVSE_pack_32len_11bw_24offset<uint32_t>, 24, 24, 44, 128, };
static KVSEPackInfo KVSEPackInfo_432 = { KVSE_pack_32len_12bw_0offset<uint32_t>, 0, 0, 48, 128, };
static KVSEPackInfo KVSEPackInfo_433 = { KVSE_pack_32len_12bw_8offset<uint32_t>, 8, 8, 48, 128, };
static KVSEPackInfo KVSEPackInfo_434 = { KVSE_pack_32len_12bw_16offset<uint32_t>, 16, 16, 48, 128, };
static KVSEPackInfo KVSEPackInfo_435 = { KVSE_pack_32len_12bw_24offset<uint32_t>, 24, 24, 48, 128, };
static KVSEPackInfo KVSEPackInfo_436 = { KVSE_pack_32len_16bw_0offset<uint32_t>, 0, 0, 64, 128, };
static KVSEPackInfo KVSEPackInfo_437 = { KVSE_pack_32len_16bw_8offset<uint32_t>, 8, 8, 64, 128, };
static KVSEPackInfo KVSEPackInfo_438 = { KVSE_pack_32len_16bw_16offset<uint32_t>, 16, 16, 64, 128, };
static KVSEPackInfo KVSEPackInfo_439 = { KVSE_pack_32len_16bw_24offset<uint32_t>, 24, 24, 64, 128, };
static KVSEPackInfo KVSEPackInfo_440 = { KVSE_pack_32len_20bw_0offset<uint32_t>, 0, 0, 80, 128, };
static KVSEPackInfo KVSEPackInfo_441 = { KVSE_pack_32len_20bw_8offset<uint32_t>, 8, 8, 80, 128, };
static KVSEPackInfo KVSEPackInfo_442 = { KVSE_pack_32len_20bw_16offset<uint32_t>, 16, 16, 80, 128, };
static KVSEPackInfo KVSEPackInfo_443 = { KVSE_pack_32len_20bw_24offset<uint32_t>, 24, 24, 80, 128, };
static KVSEPackInfo KVSEPackInfo_444 = { KVSE_pack_32len_32bw_0offset<uint32_t>, 0, 0, 128, 128, };
static KVSEPackInfo KVSEPackInfo_445 = { KVSE_pack_32len_32bw_8offset<uint32_t>, 8, 8, 128, 128, };
static KVSEPackInfo KVSEPackInfo_446 = { KVSE_pack_32len_32bw_16offset<uint32_t>, 16, 16, 128, 128, };
static KVSEPackInfo KVSEPackInfo_447 = { KVSE_pack_32len_32bw_24offset<uint32_t>, 24, 24, 128, 128, };
static KVSEPackInfo KVSEPackInfo_448 = { KVSE_pack_64len_0bw_0offset<uint32_t>, 0, 0, 0, 256, };
static KVSEPackInfo KVSEPackInfo_449 = { KVSE_pack_64len_0bw_8offset<uint32_t>, 8, 8, 0, 256, };
static KVSEPackInfo KVSEPackInfo_450 = { KVSE_pack_64len_0bw_16offset<uint32_t>, 16, 16, 0, 256, };
static KVSEPackInfo KVSEPackInfo_451 = { KVSE_pack_64len_0bw_24offset<uint32_t>, 24, 24, 0, 256, };
static KVSEPackInfo KVSEPackInfo_452 = { KVSE_pack_64len_1bw_0offset<uint32_t>, 0, 0, 8, 256, };
static KVSEPackInfo KVSEPackInfo_453 = { KVSE_pack_64len_1bw_8offset<uint32_t>, 8, 8, 8, 256, };
static KVSEPackInfo KVSEPackInfo_454 = { KVSE_pack_64len_1bw_16offset<uint32_t>, 16, 16, 8, 256, };
static KVSEPackInfo KVSEPackInfo_455 = { KVSE_pack_64len_1bw_24offset<uint32_t>, 24, 24, 8, 256, };
static KVSEPackInfo KVSEPackInfo_456 = { KVSE_pack_64len_2bw_0offset<uint32_t>, 0, 0, 16, 256, };
static KVSEPackInfo KVSEPackInfo_457 = { KVSE_pack_64len_2bw_8offset<uint32_t>, 8, 8, 16, 256, };
static KVSEPackInfo KVSEPackInfo_458 = { KVSE_pack_64len_2bw_16offset<uint32_t>, 16, 16, 16, 256, };
static KVSEPackInfo KVSEPackInfo_459 = { KVSE_pack_64len_2bw_24offset<uint32_t>, 24, 24, 16, 256, };
static KVSEPackInfo KVSEPackInfo_460 = { KVSE_pack_64len_3bw_0offset<uint32_t>, 0, 0, 24, 256, };
static KVSEPackInfo KVSEPackInfo_461 = { KVSE_pack_64len_3bw_8offset<uint32_t>, 8, 8, 24, 256, };
static KVSEPackInfo KVSEPackInfo_462 = { KVSE_pack_64len_3bw_16offset<uint32_t>, 16, 16, 24, 256, };
static KVSEPackInfo KVSEPackInfo_463 = { KVSE_pack_64len_3bw_24offset<uint32_t>, 24, 24, 24, 256, };
static KVSEPackInfo KVSEPackInfo_464 = { KVSE_pack_64len_4bw_0offset<uint32_t>, 0, 0, 32, 256, };
static KVSEPackInfo KVSEPackInfo_465 = { KVSE_pack_64len_4bw_8offset<uint32_t>, 8, 8, 32, 256, };
static KVSEPackInfo KVSEPackInfo_466 = { KVSE_pack_64len_4bw_16offset<uint32_t>, 16, 16, 32, 256, };
static KVSEPackInfo KVSEPackInfo_467 = { KVSE_pack_64len_4bw_24offset<uint32_t>, 24, 24, 32, 256, };
static KVSEPackInfo KVSEPackInfo_468 = { KVSE_pack_64len_5bw_0offset<uint32_t>, 0, 0, 40, 256, };
static KVSEPackInfo KVSEPackInfo_469 = { KVSE_pack_64len_5bw_8offset<uint32_t>, 8, 8, 40, 256, };
static KVSEPackInfo KVSEPackInfo_470 = { KVSE_pack_64len_5bw_16offset<uint32_t>, 16, 16, 40, 256, };
static KVSEPackInfo KVSEPackInfo_471 = { KVSE_pack_64len_5bw_24offset<uint32_t>, 24, 24, 40, 256, };
static KVSEPackInfo KVSEPackInfo_472 = { KVSE_pack_64len_6bw_0offset<uint32_t>, 0, 0, 48, 256, };
static KVSEPackInfo KVSEPackInfo_473 = { KVSE_pack_64len_6bw_8offset<uint32_t>, 8, 8, 48, 256, };
static KVSEPackInfo KVSEPackInfo_474 = { KVSE_pack_64len_6bw_16offset<uint32_t>, 16, 16, 48, 256, };
static KVSEPackInfo KVSEPackInfo_475 = { KVSE_pack_64len_6bw_24offset<uint32_t>, 24, 24, 48, 256, };
static KVSEPackInfo KVSEPackInfo_476 = { KVSE_pack_64len_7bw_0offset<uint32_t>, 0, 0, 56, 256, };
static KVSEPackInfo KVSEPackInfo_477 = { KVSE_pack_64len_7bw_8offset<uint32_t>, 8, 8, 56, 256, };
static KVSEPackInfo KVSEPackInfo_478 = { KVSE_pack_64len_7bw_16offset<uint32_t>, 16, 16, 56, 256, };
static KVSEPackInfo KVSEPackInfo_479 = { KVSE_pack_64len_7bw_24offset<uint32_t>, 24, 24, 56, 256, };
static KVSEPackInfo KVSEPackInfo_480 = { KVSE_pack_64len_8bw_0offset<uint32_t>, 0, 0, 64, 256, };
static KVSEPackInfo KVSEPackInfo_481 = { KVSE_pack_64len_8bw_8offset<uint32_t>, 8, 8, 64, 256, };
static KVSEPackInfo KVSEPackInfo_482 = { KVSE_pack_64len_8bw_16offset<uint32_t>, 16, 16, 64, 256, };
static KVSEPackInfo KVSEPackInfo_483 = { KVSE_pack_64len_8bw_24offset<uint32_t>, 24, 24, 64, 256, };
static KVSEPackInfo KVSEPackInfo_484 = { KVSE_pack_64len_9bw_0offset<uint32_t>, 0, 0, 72, 256, };
static KVSEPackInfo KVSEPackInfo_485 = { KVSE_pack_64len_9bw_8offset<uint32_t>, 8, 8, 72, 256, };
static KVSEPackInfo KVSEPackInfo_486 = { KVSE_pack_64len_9bw_16offset<uint32_t>, 16, 16, 72, 256, };
static KVSEPackInfo KVSEPackInfo_487 = { KVSE_pack_64len_9bw_24offset<uint32_t>, 24, 24, 72, 256, };
static KVSEPackInfo KVSEPackInfo_488 = { KVSE_pack_64len_10bw_0offset<uint32_t>, 0, 0, 80, 256, };
static KVSEPackInfo KVSEPackInfo_489 = { KVSE_pack_64len_10bw_8offset<uint32_t>, 8, 8, 80, 256, };
static KVSEPackInfo KVSEPackInfo_490 = { KVSE_pack_64len_10bw_16offset<uint32_t>, 16, 16, 80, 256, };
static KVSEPackInfo KVSEPackInfo_491 = { KVSE_pack_64len_10bw_24offset<uint32_t>, 24, 24, 80, 256, };
static KVSEPackInfo KVSEPackInfo_492 = { KVSE_pack_64len_11bw_0offset<uint32_t>, 0, 0, 88, 256, };
static KVSEPackInfo KVSEPackInfo_493 = { KVSE_pack_64len_11bw_8offset<uint32_t>, 8, 8, 88, 256, };
static KVSEPackInfo KVSEPackInfo_494 = { KVSE_pack_64len_11bw_16offset<uint32_t>, 16, 16, 88, 256, };
static KVSEPackInfo KVSEPackInfo_495 = { KVSE_pack_64len_11bw_24offset<uint32_t>, 24, 24, 88, 256, };
static KVSEPackInfo KVSEPackInfo_496 = { KVSE_pack_64len_12bw_0offset<uint32_t>, 0, 0, 96, 256, };
static KVSEPackInfo KVSEPackInfo_497 = { KVSE_pack_64len_12bw_8offset<uint32_t>, 8, 8, 96, 256, };
static KVSEPackInfo KVSEPackInfo_498 = { KVSE_pack_64len_12bw_16offset<uint32_t>, 16, 16, 96, 256, };
static KVSEPackInfo KVSEPackInfo_499 = { KVSE_pack_64len_12bw_24offset<uint32_t>, 24, 24, 96, 256, };
static KVSEPackInfo KVSEPackInfo_500 = { KVSE_pack_64len_16bw_0offset<uint32_t>, 0, 0, 128, 256, };
static KVSEPackInfo KVSEPackInfo_501 = { KVSE_pack_64len_16bw_8offset<uint32_t>, 8, 8, 128, 256, };
static KVSEPackInfo KVSEPackInfo_502 = { KVSE_pack_64len_16bw_16offset<uint32_t>, 16, 16, 128, 256, };
static KVSEPackInfo KVSEPackInfo_503 = { KVSE_pack_64len_16bw_24offset<uint32_t>, 24, 24, 128, 256, };
static KVSEPackInfo KVSEPackInfo_504 = { KVSE_pack_64len_20bw_0offset<uint32_t>, 0, 0, 160, 256, };
static KVSEPackInfo KVSEPackInfo_505 = { KVSE_pack_64len_20bw_8offset<uint32_t>, 8, 8, 160, 256, };
static KVSEPackInfo KVSEPackInfo_506 = { KVSE_pack_64len_20bw_16offset<uint32_t>, 16, 16, 160, 256, };
static KVSEPackInfo KVSEPackInfo_507 = { KVSE_pack_64len_20bw_24offset<uint32_t>, 24, 24, 160, 256, };
static KVSEPackInfo KVSEPackInfo_508 = { KVSE_pack_64len_32bw_0offset<uint32_t>, 0, 0, 256, 256, };
static KVSEPackInfo KVSEPackInfo_509 = { KVSE_pack_64len_32bw_8offset<uint32_t>, 8, 8, 256, 256, };
static KVSEPackInfo KVSEPackInfo_510 = { KVSE_pack_64len_32bw_16offset<uint32_t>, 16, 16, 256, 256, };
static KVSEPackInfo KVSEPackInfo_511 = { KVSE_pack_64len_32bw_24offset<uint32_t>, 24, 24, 256, 256, };

static KVSEPackInfo KVSEPackInfoArr[512] = {
	KVSEPackInfo_0, KVSEPackInfo_1, KVSEPackInfo_2, KVSEPackInfo_3,
	KVSEPackInfo_4, KVSEPackInfo_5, KVSEPackInfo_6, KVSEPackInfo_7,
	KVSEPackInfo_8, KVSEPackInfo_9, KVSEPackInfo_10, KVSEPackInfo_11,
	KVSEPackInfo_12, KVSEPackInfo_13, KVSEPackInfo_14, KVSEPackInfo_15,
	KVSEPackInfo_16, KVSEPackInfo_17, KVSEPackInfo_18, KVSEPackInfo_19,
	KVSEPackInfo_20, KVSEPackInfo_21, KVSEPackInfo_22, KVSEPackInfo_23,
	KVSEPackInfo_24, KVSEPackInfo_25, KVSEPackInfo_26, KVSEPackInfo_27,
	KVSEPackInfo_28, KVSEPackInfo_29, KVSEPackInfo_30, KVSEPackInfo_31,
	KVSEPackInfo_32, KVSEPackInfo_33, KVSEPackInfo_34, KVSEPackInfo_35,
	KVSEPackInfo_36, KVSEPackInfo_37, KVSEPackInfo_38, KVSEPackInfo_39,
	KVSEPackInfo_40, KVSEPackInfo_41, KVSEPackInfo_42, KVSEPackInfo_43,
	KVSEPackInfo_44, KVSEPackInfo_45, KVSEPackInfo_46, KVSEPackInfo_47,
	KVSEPackInfo_48, KVSEPackInfo_49, KVSEPackInfo_50, KVSEPackInfo_51,
	KVSEPackInfo_52, KVSEPackInfo_53, KVSEPackInfo_54, KVSEPackInfo_55,
	KVSEPackInfo_56, KVSEPackInfo_57, KVSEPackInfo_58, KVSEPackInfo_59,
	KVSEPackInfo_60, KVSEPackInfo_61, KVSEPackInfo_62, KVSEPackInfo_63,
	KVSEPackInfo_64, KVSEPackInfo_65, KVSEPackInfo_66, KVSEPackInfo_67,
	KVSEPackInfo_68, KVSEPackInfo_69, KVSEPackInfo_70, KVSEPackInfo_71,
	KVSEPackInfo_72, KVSEPackInfo_73, KVSEPackInfo_74, KVSEPackInfo_75,
	KVSEPackInfo_76, KVSEPackInfo_77, KVSEPackInfo_78, KVSEPackInfo_79,
	KVSEPackInfo_80, KVSEPackInfo_81, KVSEPackInfo_82, KVSEPackInfo_83,
	KVSEPackInfo_84, KVSEPackInfo_85, KVSEPackInfo_86, KVSEPackInfo_87,
	KVSEPackInfo_88, KVSEPackInfo_89, KVSEPackInfo_90, KVSEPackInfo_91,
	KVSEPackInfo_92, KVSEPackInfo_93, KVSEPackInfo_94, KVSEPackInfo_95,
	KVSEPackInfo_96, KVSEPackInfo_97, KVSEPackInfo_98, KVSEPackInfo_99,
	KVSEPackInfo_100, KVSEPackInfo_101, KVSEPackInfo_102, KVSEPackInfo_103,
	KVSEPackInfo_104, KVSEPackInfo_105, KVSEPackInfo_106, KVSEPackInfo_107,
	KVSEPackInfo_108, KVSEPackInfo_109, KVSEPackInfo_110, KVSEPackInfo_111,
	KVSEPackInfo_112, KVSEPackInfo_113, KVSEPackInfo_114, KVSEPackInfo_115,
	KVSEPackInfo_116, KVSEPackInfo_117, KVSEPackInfo_118, KVSEPackInfo_119,
	KVSEPackInfo_120, KVSEPackInfo_121, KVSEPackInfo_122, KVSEPackInfo_123,
	KVSEPackInfo_124, KVSEPackInfo_125, KVSEPackInfo_126, KVSEPackInfo_127,
	KVSEPackInfo_128, KVSEPackInfo_129, KVSEPackInfo_130, KVSEPackInfo_131,
	KVSEPackInfo_132, KVSEPackInfo_133, KVSEPackInfo_134, KVSEPackInfo_135,
	KVSEPackInfo_136, KVSEPackInfo_137, KVSEPackInfo_138, KVSEPackInfo_139,
	KVSEPackInfo_140, KVSEPackInfo_141, KVSEPackInfo_142, KVSEPackInfo_143,
	KVSEPackInfo_144, KVSEPackInfo_145, KVSEPackInfo_146, KVSEPackInfo_147,
	KVSEPackInfo_148, KVSEPackInfo_149, KVSEPackInfo_150, KVSEPackInfo_151,
	KVSEPackInfo_152, KVSEPackInfo_153, KVSEPackInfo_154, KVSEPackInfo_155,
	KVSEPackInfo_156, KVSEPackInfo_157, KVSEPackInfo_158, KVSEPackInfo_159,
	KVSEPackInfo_160, KVSEPackInfo_161, KVSEPackInfo_162, KVSEPackInfo_163,
	KVSEPackInfo_164, KVSEPackInfo_165, KVSEPackInfo_166, KVSEPackInfo_167,
	KVSEPackInfo_168, KVSEPackInfo_169, KVSEPackInfo_170, KVSEPackInfo_171,
	KVSEPackInfo_172, KVSEPackInfo_173, KVSEPackInfo_174, KVSEPackInfo_175,
	KVSEPackInfo_176, KVSEPackInfo_177, KVSEPackInfo_178, KVSEPackInfo_179,
	KVSEPackInfo_180, KVSEPackInfo_181, KVSEPackInfo_182, KVSEPackInfo_183,
	KVSEPackInfo_184, KVSEPackInfo_185, KVSEPackInfo_186, KVSEPackInfo_187,
	KVSEPackInfo_188, KVSEPackInfo_189, KVSEPackInfo_190, KVSEPackInfo_191,
	KVSEPackInfo_192, KVSEPackInfo_193, KVSEPackInfo_194, KVSEPackInfo_195,
	KVSEPackInfo_196, KVSEPackInfo_197, KVSEPackInfo_198, KVSEPackInfo_199,
	KVSEPackInfo_200, KVSEPackInfo_201, KVSEPackInfo_202, KVSEPackInfo_203,
	KVSEPackInfo_204, KVSEPackInfo_205, KVSEPackInfo_206, KVSEPackInfo_207,
	KVSEPackInfo_208, KVSEPackInfo_209, KVSEPackInfo_210, KVSEPackInfo_211,
	KVSEPackInfo_212, KVSEPackInfo_213, KVSEPackInfo_214, KVSEPackInfo_215,
	KVSEPackInfo_216, KVSEPackInfo_217, KVSEPackInfo_218, KVSEPackInfo_219,
	KVSEPackInfo_220, KVSEPackInfo_221, KVSEPackInfo_222, KVSEPackInfo_223,
	KVSEPackInfo_224, KVSEPackInfo_225, KVSEPackInfo_226, KVSEPackInfo_227,
	KVSEPackInfo_228, KVSEPackInfo_229, KVSEPackInfo_230, KVSEPackInfo_231,
	KVSEPackInfo_232, KVSEPackInfo_233, KVSEPackInfo_234, KVSEPackInfo_235,
	KVSEPackInfo_236, KVSEPackInfo_237, KVSEPackInfo_238, KVSEPackInfo_239,
	KVSEPackInfo_240, KVSEPackInfo_241, KVSEPackInfo_242, KVSEPackInfo_243,
	KVSEPackInfo_244, KVSEPackInfo_245, KVSEPackInfo_246, KVSEPackInfo_247,
	KVSEPackInfo_248, KVSEPackInfo_249, KVSEPackInfo_250, KVSEPackInfo_251,
	KVSEPackInfo_252, KVSEPackInfo_253, KVSEPackInfo_254, KVSEPackInfo_255,
	KVSEPackInfo_256, KVSEPackInfo_257, KVSEPackInfo_258, KVSEPackInfo_259,
	KVSEPackInfo_260, KVSEPackInfo_261, KVSEPackInfo_262, KVSEPackInfo_263,
	KVSEPackInfo_264, KVSEPackInfo_265, KVSEPackInfo_266, KVSEPackInfo_267,
	KVSEPackInfo_268, KVSEPackInfo_269, KVSEPackInfo_270, KVSEPackInfo_271,
	KVSEPackInfo_272, KVSEPackInfo_273, KVSEPackInfo_274, KVSEPackInfo_275,
	KVSEPackInfo_276, KVSEPackInfo_277, KVSEPackInfo_278, KVSEPackInfo_279,
	KVSEPackInfo_280, KVSEPackInfo_281, KVSEPackInfo_282, KVSEPackInfo_283,
	KVSEPackInfo_284, KVSEPackInfo_285, KVSEPackInfo_286, KVSEPackInfo_287,
	KVSEPackInfo_288, KVSEPackInfo_289, KVSEPackInfo_290, KVSEPackInfo_291,
	KVSEPackInfo_292, KVSEPackInfo_293, KVSEPackInfo_294, KVSEPackInfo_295,
	KVSEPackInfo_296, KVSEPackInfo_297, KVSEPackInfo_298, KVSEPackInfo_299,
	KVSEPackInfo_300, KVSEPackInfo_301, KVSEPackInfo_302, KVSEPackInfo_303,
	KVSEPackInfo_304, KVSEPackInfo_305, KVSEPackInfo_306, KVSEPackInfo_307,
	KVSEPackInfo_308, KVSEPackInfo_309, KVSEPackInfo_310, KVSEPackInfo_311,
	KVSEPackInfo_312, KVSEPackInfo_313, KVSEPackInfo_314, KVSEPackInfo_315,
	KVSEPackInfo_316, KVSEPackInfo_317, KVSEPackInfo_318, KVSEPackInfo_319,
	KVSEPackInfo_320, KVSEPackInfo_321, KVSEPackInfo_322, KVSEPackInfo_323,
	KVSEPackInfo_324, KVSEPackInfo_325, KVSEPackInfo_326, KVSEPackInfo_327,
	KVSEPackInfo_328, KVSEPackInfo_329, KVSEPackInfo_330, KVSEPackInfo_331,
	KVSEPackInfo_332, KVSEPackInfo_333, KVSEPackInfo_334, KVSEPackInfo_335,
	KVSEPackInfo_336, KVSEPackInfo_337, KVSEPackInfo_338, KVSEPackInfo_339,
	KVSEPackInfo_340, KVSEPackInfo_341, KVSEPackInfo_342, KVSEPackInfo_343,
	KVSEPackInfo_344, KVSEPackInfo_345, KVSEPackInfo_346, KVSEPackInfo_347,
	KVSEPackInfo_348, KVSEPackInfo_349, KVSEPackInfo_350, KVSEPackInfo_351,
	KVSEPackInfo_352, KVSEPackInfo_353, KVSEPackInfo_354, KVSEPackInfo_355,
	KVSEPackInfo_356, KVSEPackInfo_357, KVSEPackInfo_358, KVSEPackInfo_359,
	KVSEPackInfo_360, KVSEPackInfo_361, KVSEPackInfo_362, KVSEPackInfo_363,
	KVSEPackInfo_364, KVSEPackInfo_365, KVSEPackInfo_366, KVSEPackInfo_367,
	KVSEPackInfo_368, KVSEPackInfo_369, KVSEPackInfo_370, KVSEPackInfo_371,
	KVSEPackInfo_372, KVSEPackInfo_373, KVSEPackInfo_374, KVSEPackInfo_375,
	KVSEPackInfo_376, KVSEPackInfo_377, KVSEPackInfo_378, KVSEPackInfo_379,
	KVSEPackInfo_380, KVSEPackInfo_381, KVSEPackInfo_382, KVSEPackInfo_383,
	KVSEPackInfo_384, KVSEPackInfo_385, KVSEPackInfo_386, KVSEPackInfo_387,
	KVSEPackInfo_388, KVSEPackInfo_389, KVSEPackInfo_390, KVSEPackInfo_391,
	KVSEPackInfo_392, KVSEPackInfo_393, KVSEPackInfo_394, KVSEPackInfo_395,
	KVSEPackInfo_396, KVSEPackInfo_397, KVSEPackInfo_398, KVSEPackInfo_399,
	KVSEPackInfo_400, KVSEPackInfo_401, KVSEPackInfo_402, KVSEPackInfo_403,
	KVSEPackInfo_404, KVSEPackInfo_405, KVSEPackInfo_406, KVSEPackInfo_407,
	KVSEPackInfo_408, KVSEPackInfo_409, KVSEPackInfo_410, KVSEPackInfo_411,
	KVSEPackInfo_412, KVSEPackInfo_413, KVSEPackInfo_414, KVSEPackInfo_415,
	KVSEPackInfo_416, KVSEPackInfo_417, KVSEPackInfo_418, KVSEPackInfo_419,
	KVSEPackInfo_420, KVSEPackInfo_421, KVSEPackInfo_422, KVSEPackInfo_423,
	KVSEPackInfo_424, KVSEPackInfo_425, KVSEPackInfo_426, KVSEPackInfo_427,
	KVSEPackInfo_428, KVSEPackInfo_429, KVSEPackInfo_430, KVSEPackInfo_431,
	KVSEPackInfo_432, KVSEPackInfo_433, KVSEPackInfo_434, KVSEPackInfo_435,
	KVSEPackInfo_436, KVSEPackInfo_437, KVSEPackInfo_438, KVSEPackInfo_439,
	KVSEPackInfo_440, KVSEPackInfo_441, KVSEPackInfo_442, KVSEPackInfo_443,
	KVSEPackInfo_444, KVSEPackInfo_445, KVSEPackInfo_446, KVSEPackInfo_447,
	KVSEPackInfo_448, KVSEPackInfo_449, KVSEPackInfo_450, KVSEPackInfo_451,
	KVSEPackInfo_452, KVSEPackInfo_453, KVSEPackInfo_454, KVSEPackInfo_455,
	KVSEPackInfo_456, KVSEPackInfo_457, KVSEPackInfo_458, KVSEPackInfo_459,
	KVSEPackInfo_460, KVSEPackInfo_461, KVSEPackInfo_462, KVSEPackInfo_463,
	KVSEPackInfo_464, KVSEPackInfo_465, KVSEPackInfo_466, KVSEPackInfo_467,
	KVSEPackInfo_468, KVSEPackInfo_469, KVSEPackInfo_470, KVSEPackInfo_471,
	KVSEPackInfo_472, KVSEPackInfo_473, KVSEPackInfo_474, KVSEPackInfo_475,
	KVSEPackInfo_476, KVSEPackInfo_477, KVSEPackInfo_478, KVSEPackInfo_479,
	KVSEPackInfo_480, KVSEPackInfo_481, KVSEPackInfo_482, KVSEPackInfo_483,
	KVSEPackInfo_484, KVSEPackInfo_485, KVSEPackInfo_486, KVSEPackInfo_487,
	KVSEPackInfo_488, KVSEPackInfo_489, KVSEPackInfo_490, KVSEPackInfo_491,
	KVSEPackInfo_492, KVSEPackInfo_493, KVSEPackInfo_494, KVSEPackInfo_495,
	KVSEPackInfo_496, KVSEPackInfo_497, KVSEPackInfo_498, KVSEPackInfo_499,
	KVSEPackInfo_500, KVSEPackInfo_501, KVSEPackInfo_502, KVSEPackInfo_503,
	KVSEPackInfo_504, KVSEPackInfo_505, KVSEPackInfo_506, KVSEPackInfo_507,
	KVSEPackInfo_508, KVSEPackInfo_509, KVSEPackInfo_510, KVSEPackInfo_511,
};

}
}

#endif /* KVSEncoding_PACK_HPP_ */

/*
 *
#include <iostream>
#include <sstream>
#include <string>
#include <stdint.h>

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
			nameOss << "KVSE_pack_" << num << "len_" << i << "bw_" << (k*8) << "offset";

			oss << "void " << nameOss.str()  << "(T * des, const uint32_t *src) {" << endl;
			int infoIdx = (idx2 << 6) + (idx1 << 2) + k;
			infoOss << "static KVSEPackInfo KVSEPackInfo_" << infoIdx << " = { " << nameOss.str() << "<uint32_t>, ";

			int offsetInWord = k << 3;
			int curWordIdx = 0;
			int j = 0;
			uint32_t mask  = (1LL << i) - 1;
			while (j < num) {

				if (i == 0) {
					j++;
					continue;
				}

				oss << "\tfor (int j=0; j<4; ++j) {" << endl;
				int newBitWidth = offsetInWord + i - 32;
				if (newBitWidth >= 0) {
					ostringstream tmp1;
					tmp1 << "\t\t" << "des[";
					if (curWordIdx>0)
						tmp1 << curWordIdx*4 << "+";
					tmp1 << "j] |= (src[" ;
					if (j > 0)
						tmp1 << j*4 << "+";
					tmp1 << "j]";
					if (i < 32)
						tmp1 << " & " << hex << "0x" << mask << dec;
					tmp1 << ")";
					if (offsetInWord > 0)
						tmp1 << " << " << offsetInWord;
					tmp1 << ";" << endl;
					oss << tmp1.str();
					curWordIdx += (offsetInWord + i) / 32;
					offsetInWord = (offsetInWord + i) % 32;

					if (newBitWidth > 0) {
						ostringstream tmp2;
						tmp2 << "\t\t" << "des[";
						if (curWordIdx>0)
							tmp2 << curWordIdx*4 << "+";
						tmp2 << "j] = (src[";
						if (j>0)
							tmp2 << j*4 << "+";
					 	tmp2 << "j]";
						if (i < 32)
							tmp2 << " & " << hex << "0x" << mask << dec;
						tmp2 << ")";
						tmp2 << " >> " << i - newBitWidth;
						tmp2 << ";" << endl;
                        			oss << tmp2.str();
					}
				} else {
					ostringstream tmp1;
					tmp1 << "\t\t" << "des[";
					if (curWordIdx>0)
						tmp1 << curWordIdx*4 << "+";
					tmp1 << "j] ";
					if (offsetInWord > 0)
						tmp1 << "|=";
					else
						tmp1 << "=";
					tmp1 << " (src[" ;
					if (j > 0)
						tmp1 << j*4 << "+";
					tmp1 << "j]";
					if (i < 32)
						tmp1 << " & " << hex << "0x" << mask << dec;
					tmp1 << ")";
					if (offsetInWord > 0)
						tmp1 << " << " << offsetInWord;
					tmp1 << ";" << endl;
					oss << tmp1.str();
					curWordIdx += (offsetInWord + i) / 32;
					offsetInWord = (offsetInWord + i) % 32;

				}

				oss << "\t}" << endl;
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
				<< (num << 2) << ", "		//integer encoded
				<< "};" << endl;
		}
	}
	}
}

string printInfoArr(int arrNum) {
	ostringstream oss;
	oss << "static KVSEPackInfo KVSEPackInfoArr[" << arrNum << "] = {" << endl;
	for (int i=0; i<arrNum; ++i) {
		if (i % 4 == 0)
			oss << "\t";
		oss << "KVSEPackInfo_" << i << ", ";
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
