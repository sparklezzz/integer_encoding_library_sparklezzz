/*
 * KAFOR_pack.hpp
 *
 *  Created on: 2013-11-18
 *      Author: zxd
 */

#ifndef KAFOR_PACK_HPP_
#define KAFOR_PACK_HPP_

namespace paradise {
namespace index {

struct KAFORPackInfo {
	void (*m_subFunc)(uint32_t *des, const uint32_t *src);
	uint8_t m_offset;
	uint8_t m_newOffset;
	uint16_t m_wordSkipped;
	uint16_t m_intEncoded;
};


template<typename T>
void KAFOR_pack_8len_1bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 1);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 1) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 1) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 1) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 1) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 1) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 1) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 1) << 7;
	}
}

template<typename T>
void KAFOR_pack_8len_1bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 1) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 1) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 1) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 1) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 1) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 1) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 1) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 1) << 15;
	}
}

template<typename T>
void KAFOR_pack_8len_1bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 1) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 1) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 1) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 1) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 1) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 1) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 1) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 1) << 23;
	}
}

template<typename T>
void KAFOR_pack_8len_1bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 1) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 1) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 1) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 1) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 1) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 1) << 29;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 1) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 1) << 31;
	}
}

template<typename T>
void KAFOR_pack_8len_2bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 3);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 3) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 3) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 3) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 3) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 3) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 3) << 14;
	}
}

template<typename T>
void KAFOR_pack_8len_2bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 3) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 3) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 3) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 3) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 3) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 3) << 22;
	}
}

template<typename T>
void KAFOR_pack_8len_2bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 3) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 3) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 3) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 3) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 3) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 3) << 30;
	}
}

template<typename T>
void KAFOR_pack_8len_2bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 3) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 3) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 3) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[16+j] & 3);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 3) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 3) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 3) << 6;
	}
}

template<typename T>
void KAFOR_pack_8len_3bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 7);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 7) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 7) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 7) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 7) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 7) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 7) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 7) << 21;
	}
}

template<typename T>
void KAFOR_pack_8len_3bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 7) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 7) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 7) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 7) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 7) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 7) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 7) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 7) << 29;
	}
}

template<typename T>
void KAFOR_pack_8len_3bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 7) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 7) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 7) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 7) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 7) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 7) << 31;
		des[4+j] = (src[20+j] & 7) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 7) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 7) << 5;
	}
}

template<typename T>
void KAFOR_pack_8len_3bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 7) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 7) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 7) << 30;
		des[4+j] = (src[8+j] & 7) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 7) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 7) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 7) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 7) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 7) << 13;
	}
}

template<typename T>
void KAFOR_pack_8len_4bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 15);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 15) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 15) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 15) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 15) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 15) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 15) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 15) << 28;
	}
}

template<typename T>
void KAFOR_pack_8len_4bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 15) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 15) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 15) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 15) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 15) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 15) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[24+j] & 15);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 15) << 4;
	}
}

template<typename T>
void KAFOR_pack_8len_4bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 15) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 15) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 15) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 15) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[16+j] & 15);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 15) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 15) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 15) << 12;
	}
}

template<typename T>
void KAFOR_pack_8len_4bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 15) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 15) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[8+j] & 15);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 15) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 15) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 15) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 15) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 15) << 20;
	}
}

template<typename T>
void KAFOR_pack_8len_5bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 31);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 31) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 31) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 31) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 31) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 31) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 31) << 30;
		des[4+j] = (src[24+j] & 31) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 31) << 3;
	}
}

template<typename T>
void KAFOR_pack_8len_5bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 31) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 31) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 31) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 31) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 31) << 28;
		des[4+j] = (src[16+j] & 31) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 31) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 31) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 31) << 11;
	}
}

template<typename T>
void KAFOR_pack_8len_5bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 31) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 31) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 31) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 31) << 31;
		des[4+j] = (src[12+j] & 31) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 31) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 31) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 31) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 31) << 19;
	}
}

template<typename T>
void KAFOR_pack_8len_5bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 31) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 31) << 29;
		des[4+j] = (src[4+j] & 31) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 31) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 31) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 31) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 31) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 31) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 31) << 27;
	}
}

template<typename T>
void KAFOR_pack_8len_6bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 63);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 63) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 63) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 63) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 63) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 63) << 30;
		des[4+j] = (src[20+j] & 63) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 63) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 63) << 10;
	}
}

template<typename T>
void KAFOR_pack_8len_6bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 63) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 63) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 63) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 63) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[16+j] & 63);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 63) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 63) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 63) << 18;
	}
}

template<typename T>
void KAFOR_pack_8len_6bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 63) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 63) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 63) << 28;
		des[4+j] = (src[8+j] & 63) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 63) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 63) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 63) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 63) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 63) << 26;
	}
}

template<typename T>
void KAFOR_pack_8len_6bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 63) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 63) << 30;
		des[4+j] = (src[4+j] & 63) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 63) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 63) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 63) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 63) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 63) << 28;
		des[8+j] = (src[24+j] & 63) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 63) << 2;
	}
}

template<typename T>
void KAFOR_pack_8len_7bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 127);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 127) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 127) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 127) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 127) << 28;
		des[4+j] = (src[16+j] & 127) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 127) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 127) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 127) << 17;
	}
}

template<typename T>
void KAFOR_pack_8len_7bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 127) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 127) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 127) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 127) << 29;
		des[4+j] = (src[12+j] & 127) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 127) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 127) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 127) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 127) << 25;
	}
}

template<typename T>
void KAFOR_pack_8len_7bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 127) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 127) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 127) << 30;
		des[4+j] = (src[8+j] & 127) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 127) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 127) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 127) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 127) << 26;
		des[8+j] = (src[24+j] & 127) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 127) << 1;
	}
}

template<typename T>
void KAFOR_pack_8len_7bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 127) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 127) << 31;
		des[4+j] = (src[4+j] & 127) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 127) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 127) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 127) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 127) << 27;
		des[8+j] = (src[20+j] & 127) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 127) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 127) << 9;
	}
}

template<typename T>
void KAFOR_pack_8len_8bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[16+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 255) << 24;
	}
}

template<typename T>
void KAFOR_pack_8len_8bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[12+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[28+j] & 255);
	}
}

template<typename T>
void KAFOR_pack_8len_8bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[8+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[24+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 255) << 8;
	}
}

template<typename T>
void KAFOR_pack_8len_8bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[20+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 255) << 16;
	}
}

template<typename T>
void KAFOR_pack_8len_9bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 511);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 511) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 511) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 511) << 27;
		des[4+j] = (src[12+j] & 511) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 511) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 511) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 511) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 511) << 31;
		des[8+j] = (src[28+j] & 511) >> 1;
	}
}

template<typename T>
void KAFOR_pack_8len_9bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 511) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 511) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 511) << 26;
		des[4+j] = (src[8+j] & 511) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 511) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 511) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 511) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 511) << 30;
		des[8+j] = (src[24+j] & 511) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 511) << 7;
	}
}

template<typename T>
void KAFOR_pack_8len_9bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 511) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 511) << 25;
		des[4+j] = (src[4+j] & 511) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 511) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 511) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 511) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 511) << 29;
		des[8+j] = (src[20+j] & 511) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 511) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 511) << 15;
	}
}

template<typename T>
void KAFOR_pack_8len_9bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 511) << 24;
		des[4+j] = (src[j] & 511) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 511) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 511) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 511) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 511) << 28;
		des[8+j] = (src[16+j] & 511) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 511) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 511) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 511) << 23;
	}
}

template<typename T>
void KAFOR_pack_8len_10bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 1023);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 1023) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 1023) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 1023) << 30;
		des[4+j] = (src[12+j] & 1023) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 1023) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 1023) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 1023) << 28;
		des[8+j] = (src[24+j] & 1023) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 1023) << 6;
	}
}

template<typename T>
void KAFOR_pack_8len_10bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 1023) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 1023) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 1023) << 28;
		des[4+j] = (src[8+j] & 1023) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 1023) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 1023) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 1023) << 26;
		des[8+j] = (src[20+j] & 1023) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 1023) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 1023) << 14;
	}
}

template<typename T>
void KAFOR_pack_8len_10bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 1023) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 1023) << 26;
		des[4+j] = (src[4+j] & 1023) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 1023) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 1023) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 1023) << 24;
		des[8+j] = (src[16+j] & 1023) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 1023) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 1023) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 1023) << 22;
	}
}

template<typename T>
void KAFOR_pack_8len_10bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 1023) << 24;
		des[4+j] = (src[j] & 1023) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 1023) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 1023) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 1023) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[16+j] & 1023);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 1023) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 1023) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 1023) << 30;
		des[12+j] = (src[28+j] & 1023) >> 2;
	}
}

template<typename T>
void KAFOR_pack_8len_11bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 2047);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 2047) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 2047) << 22;
		des[4+j] = (src[8+j] & 2047) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 2047) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 2047) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 2047) << 23;
		des[8+j] = (src[20+j] & 2047) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 2047) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 2047) << 13;
	}
}

template<typename T>
void KAFOR_pack_8len_11bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 2047) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 2047) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 2047) << 30;
		des[4+j] = (src[8+j] & 2047) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 2047) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 2047) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 2047) << 31;
		des[8+j] = (src[20+j] & 2047) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 2047) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 2047) << 21;
	}
}

template<typename T>
void KAFOR_pack_8len_11bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 2047) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 2047) << 27;
		des[4+j] = (src[4+j] & 2047) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 2047) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 2047) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 2047) << 28;
		des[8+j] = (src[16+j] & 2047) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 2047) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 2047) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 2047) << 29;
		des[12+j] = (src[28+j] & 2047) >> 3;
	}
}

template<typename T>
void KAFOR_pack_8len_11bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 2047) << 24;
		des[4+j] = (src[j] & 2047) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 2047) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 2047) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 2047) << 25;
		des[8+j] = (src[12+j] & 2047) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 2047) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 2047) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 2047) << 26;
		des[12+j] = (src[24+j] & 2047) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 2047) << 5;
	}
}

template<typename T>
void KAFOR_pack_8len_12bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 4095);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 4095) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 4095) << 24;
		des[4+j] = (src[8+j] & 4095) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 4095) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 4095) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 4095) << 28;
		des[8+j] = (src[20+j] & 4095) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 4095) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 4095) << 20;
	}
}

template<typename T>
void KAFOR_pack_8len_12bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 4095) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 4095) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[8+j] & 4095);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 4095) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 4095) << 24;
		des[8+j] = (src[16+j] & 4095) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 4095) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 4095) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 4095) << 28;
		des[12+j] = (src[28+j] & 4095) >> 4;
	}
}

template<typename T>
void KAFOR_pack_8len_12bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 4095) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 4095) << 28;
		des[4+j] = (src[4+j] & 4095) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 4095) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 4095) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[16+j] & 4095);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 4095) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 4095) << 24;
		des[12+j] = (src[24+j] & 4095) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 4095) << 4;
	}
}

template<typename T>
void KAFOR_pack_8len_12bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 4095) << 24;
		des[4+j] = (src[j] & 4095) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 4095) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 4095) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 4095) << 28;
		des[8+j] = (src[12+j] & 4095) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 4095) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 4095) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[24+j] & 4095);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 4095) << 12;
	}
}

template<typename T>
void KAFOR_pack_8len_13bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 8191);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 8191) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 8191) << 26;
		des[4+j] = (src[8+j] & 8191) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 8191) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 8191) << 20;
		des[8+j] = (src[16+j] & 8191) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 8191) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 8191) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 8191) << 27;
		des[12+j] = (src[28+j] & 8191) >> 5;
	}
}

template<typename T>
void KAFOR_pack_8len_13bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 8191) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 8191) << 21;
		des[4+j] = (src[4+j] & 8191) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 8191) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 8191) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 8191) << 28;
		des[8+j] = (src[16+j] & 8191) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 8191) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 8191) << 22;
		des[12+j] = (src[24+j] & 8191) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 8191) << 3;
	}
}

template<typename T>
void KAFOR_pack_8len_13bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 8191) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 8191) << 29;
		des[4+j] = (src[4+j] & 8191) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 8191) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 8191) << 23;
		des[8+j] = (src[12+j] & 8191) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 8191) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 8191) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 8191) << 30;
		des[12+j] = (src[24+j] & 8191) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 8191) << 11;
	}
}

template<typename T>
void KAFOR_pack_8len_13bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 8191) << 24;
		des[4+j] = (src[j] & 8191) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 8191) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 8191) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 8191) << 31;
		des[8+j] = (src[12+j] & 8191) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 8191) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 8191) << 25;
		des[12+j] = (src[20+j] & 8191) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 8191) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 8191) << 19;
	}
}

template<typename T>
void KAFOR_pack_8len_14bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 16383);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 16383) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 16383) << 28;
		des[4+j] = (src[8+j] & 16383) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 16383) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 16383) << 24;
		des[8+j] = (src[16+j] & 16383) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 16383) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 16383) << 20;
		des[12+j] = (src[24+j] & 16383) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 16383) << 2;
	}
}

template<typename T>
void KAFOR_pack_8len_14bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 16383) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 16383) << 22;
		des[4+j] = (src[4+j] & 16383) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 16383) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 16383) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[16+j] & 16383);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 16383) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 16383) << 28;
		des[12+j] = (src[24+j] & 16383) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 16383) << 10;
	}
}

template<typename T>
void KAFOR_pack_8len_14bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 16383) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 16383) << 30;
		des[4+j] = (src[4+j] & 16383) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 16383) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 16383) << 26;
		des[8+j] = (src[12+j] & 16383) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 16383) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 16383) << 22;
		des[12+j] = (src[20+j] & 16383) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 16383) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 16383) << 18;
	}
}

template<typename T>
void KAFOR_pack_8len_14bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 16383) << 24;
		des[4+j] = (src[j] & 16383) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 16383) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 16383) << 20;
		des[8+j] = (src[8+j] & 16383) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 16383) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 16383) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 16383) << 30;
		des[12+j] = (src[20+j] & 16383) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 16383) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 16383) << 26;
		des[16+j] = (src[28+j] & 16383) >> 6;
	}
}

template<typename T>
void KAFOR_pack_8len_15bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 32767);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 32767) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 32767) << 30;
		des[4+j] = (src[8+j] & 32767) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 32767) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 32767) << 28;
		des[8+j] = (src[16+j] & 32767) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 32767) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 32767) << 26;
		des[12+j] = (src[24+j] & 32767) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 32767) << 9;
	}
}

template<typename T>
void KAFOR_pack_8len_15bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 32767) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 32767) << 23;
		des[4+j] = (src[4+j] & 32767) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 32767) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 32767) << 21;
		des[8+j] = (src[12+j] & 32767) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 32767) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 32767) << 19;
		des[12+j] = (src[20+j] & 32767) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 32767) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 32767) << 17;
	}
}

template<typename T>
void KAFOR_pack_8len_15bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 32767) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 32767) << 31;
		des[4+j] = (src[4+j] & 32767) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 32767) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 32767) << 29;
		des[8+j] = (src[12+j] & 32767) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 32767) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 32767) << 27;
		des[12+j] = (src[20+j] & 32767) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 32767) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 32767) << 25;
		des[16+j] = (src[28+j] & 32767) >> 7;
	}
}

template<typename T>
void KAFOR_pack_8len_15bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 32767) << 24;
		des[4+j] = (src[j] & 32767) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 32767) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 32767) << 22;
		des[8+j] = (src[8+j] & 32767) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 32767) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 32767) << 20;
		des[12+j] = (src[16+j] & 32767) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 32767) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 32767) << 18;
		des[16+j] = (src[24+j] & 32767) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 32767) << 1;
	}
}

template<typename T>
void KAFOR_pack_8len_16bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[8+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[16+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[24+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 65535) << 16;
	}
}

template<typename T>
void KAFOR_pack_8len_16bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 65535) << 24;
		des[4+j] = (src[4+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 65535) << 24;
		des[8+j] = (src[12+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 65535) << 24;
		des[12+j] = (src[20+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 65535) << 24;
		des[16+j] = (src[28+j] & 65535) >> 8;
	}
}

template<typename T>
void KAFOR_pack_8len_16bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[12+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[20+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[28+j] & 65535);
	}
}

template<typename T>
void KAFOR_pack_8len_16bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 65535) << 24;
		des[4+j] = (src[j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 65535) << 24;
		des[8+j] = (src[8+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 65535) << 24;
		des[12+j] = (src[16+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 65535) << 24;
		des[16+j] = (src[24+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 65535) << 8;
	}
}

template<typename T>
void KAFOR_pack_8len_17bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 131071);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 131071) << 17;
		des[4+j] = (src[4+j] & 131071) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 131071) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 131071) << 19;
		des[8+j] = (src[12+j] & 131071) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 131071) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 131071) << 21;
		des[12+j] = (src[20+j] & 131071) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 131071) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 131071) << 23;
		des[16+j] = (src[28+j] & 131071) >> 9;
	}
}

template<typename T>
void KAFOR_pack_8len_17bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 131071) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 131071) << 25;
		des[4+j] = (src[4+j] & 131071) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 131071) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 131071) << 27;
		des[8+j] = (src[12+j] & 131071) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 131071) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 131071) << 29;
		des[12+j] = (src[20+j] & 131071) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 131071) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 131071) << 31;
		des[16+j] = (src[28+j] & 131071) >> 1;
	}
}

template<typename T>
void KAFOR_pack_8len_17bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 131071) << 16;
		des[4+j] = (src[j] & 131071) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 131071) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 131071) << 18;
		des[8+j] = (src[8+j] & 131071) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 131071) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 131071) << 20;
		des[12+j] = (src[16+j] & 131071) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 131071) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 131071) << 22;
		des[16+j] = (src[24+j] & 131071) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 131071) << 7;
	}
}

template<typename T>
void KAFOR_pack_8len_17bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 131071) << 24;
		des[4+j] = (src[j] & 131071) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 131071) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 131071) << 26;
		des[8+j] = (src[8+j] & 131071) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 131071) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 131071) << 28;
		des[12+j] = (src[16+j] & 131071) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 131071) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 131071) << 30;
		des[16+j] = (src[24+j] & 131071) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 131071) << 15;
	}
}

template<typename T>
void KAFOR_pack_8len_18bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 262143);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 262143) << 18;
		des[4+j] = (src[4+j] & 262143) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 262143) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 262143) << 22;
		des[8+j] = (src[12+j] & 262143) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 262143) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 262143) << 26;
		des[12+j] = (src[20+j] & 262143) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 262143) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 262143) << 30;
		des[16+j] = (src[28+j] & 262143) >> 2;
	}
}

template<typename T>
void KAFOR_pack_8len_18bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 262143) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 262143) << 26;
		des[4+j] = (src[4+j] & 262143) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 262143) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 262143) << 30;
		des[8+j] = (src[12+j] & 262143) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 262143) << 16;
		des[12+j] = (src[16+j] & 262143) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 262143) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 262143) << 20;
		des[16+j] = (src[24+j] & 262143) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 262143) << 6;
	}
}

template<typename T>
void KAFOR_pack_8len_18bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 262143) << 16;
		des[4+j] = (src[j] & 262143) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 262143) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 262143) << 20;
		des[8+j] = (src[8+j] & 262143) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 262143) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 262143) << 24;
		des[12+j] = (src[16+j] & 262143) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 262143) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 262143) << 28;
		des[16+j] = (src[24+j] & 262143) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 262143) << 14;
	}
}

template<typename T>
void KAFOR_pack_8len_18bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 262143) << 24;
		des[4+j] = (src[j] & 262143) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 262143) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 262143) << 28;
		des[8+j] = (src[8+j] & 262143) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 262143) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[16+j] & 262143);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 262143) << 18;
		des[16+j] = (src[20+j] & 262143) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 262143) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 262143) << 22;
		des[20+j] = (src[28+j] & 262143) >> 10;
	}
}

template<typename T>
void KAFOR_pack_8len_19bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 524287);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 524287) << 19;
		des[4+j] = (src[4+j] & 524287) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 524287) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 524287) << 25;
		des[8+j] = (src[12+j] & 524287) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 524287) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 524287) << 31;
		des[12+j] = (src[20+j] & 524287) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 524287) << 18;
		des[16+j] = (src[24+j] & 524287) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 524287) << 5;
	}
}

template<typename T>
void KAFOR_pack_8len_19bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 524287) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 524287) << 27;
		des[4+j] = (src[4+j] & 524287) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 524287) << 14;
		des[8+j] = (src[8+j] & 524287) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 524287) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 524287) << 20;
		des[12+j] = (src[16+j] & 524287) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 524287) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 524287) << 26;
		des[16+j] = (src[24+j] & 524287) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 524287) << 13;
	}
}

template<typename T>
void KAFOR_pack_8len_19bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 524287) << 16;
		des[4+j] = (src[j] & 524287) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 524287) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 524287) << 22;
		des[8+j] = (src[8+j] & 524287) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 524287) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 524287) << 28;
		des[12+j] = (src[16+j] & 524287) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 524287) << 15;
		des[16+j] = (src[20+j] & 524287) >> 17;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 524287) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 524287) << 21;
		des[20+j] = (src[28+j] & 524287) >> 11;
	}
}

template<typename T>
void KAFOR_pack_8len_19bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 524287) << 24;
		des[4+j] = (src[j] & 524287) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 524287) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 524287) << 30;
		des[8+j] = (src[8+j] & 524287) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 524287) << 17;
		des[12+j] = (src[12+j] & 524287) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 524287) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 524287) << 23;
		des[16+j] = (src[20+j] & 524287) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 524287) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 524287) << 29;
		des[20+j] = (src[28+j] & 524287) >> 3;
	}
}

template<typename T>
void KAFOR_pack_8len_20bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 1048575);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 1048575) << 20;
		des[4+j] = (src[4+j] & 1048575) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 1048575) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 1048575) << 28;
		des[8+j] = (src[12+j] & 1048575) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 1048575) << 16;
		des[12+j] = (src[16+j] & 1048575) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 1048575) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 1048575) << 24;
		des[16+j] = (src[24+j] & 1048575) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 1048575) << 12;
	}
}

template<typename T>
void KAFOR_pack_8len_20bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 1048575) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 1048575) << 28;
		des[4+j] = (src[4+j] & 1048575) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 1048575) << 16;
		des[8+j] = (src[8+j] & 1048575) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 1048575) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 1048575) << 24;
		des[12+j] = (src[16+j] & 1048575) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 1048575) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[24+j] & 1048575);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 1048575) << 20;
		des[20+j] = (src[28+j] & 1048575) >> 12;
	}
}

template<typename T>
void KAFOR_pack_8len_20bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 1048575) << 16;
		des[4+j] = (src[j] & 1048575) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 1048575) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 1048575) << 24;
		des[8+j] = (src[8+j] & 1048575) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 1048575) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[16+j] & 1048575);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 1048575) << 20;
		des[16+j] = (src[20+j] & 1048575) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 1048575) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 1048575) << 28;
		des[20+j] = (src[28+j] & 1048575) >> 4;
	}
}

template<typename T>
void KAFOR_pack_8len_20bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 1048575) << 24;
		des[4+j] = (src[j] & 1048575) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 1048575) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] & 1048575);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 1048575) << 20;
		des[12+j] = (src[12+j] & 1048575) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 1048575) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 1048575) << 28;
		des[16+j] = (src[20+j] & 1048575) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 1048575) << 16;
		des[20+j] = (src[24+j] & 1048575) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 1048575) << 4;
	}
}

template<typename T>
void KAFOR_pack_8len_21bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 2097151);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 2097151) << 21;
		des[4+j] = (src[4+j] & 2097151) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 2097151) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 2097151) << 31;
		des[8+j] = (src[12+j] & 2097151) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 2097151) << 20;
		des[12+j] = (src[16+j] & 2097151) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 2097151) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 2097151) << 30;
		des[16+j] = (src[24+j] & 2097151) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 2097151) << 19;
		des[20+j] = (src[28+j] & 2097151) >> 13;
	}
}

template<typename T>
void KAFOR_pack_8len_21bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 2097151) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 2097151) << 29;
		des[4+j] = (src[4+j] & 2097151) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 2097151) << 18;
		des[8+j] = (src[8+j] & 2097151) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 2097151) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 2097151) << 28;
		des[12+j] = (src[16+j] & 2097151) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 2097151) << 17;
		des[16+j] = (src[20+j] & 2097151) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 2097151) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 2097151) << 27;
		des[20+j] = (src[28+j] & 2097151) >> 5;
	}
}

template<typename T>
void KAFOR_pack_8len_21bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 2097151) << 16;
		des[4+j] = (src[j] & 2097151) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 2097151) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 2097151) << 26;
		des[8+j] = (src[8+j] & 2097151) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 2097151) << 15;
		des[12+j] = (src[12+j] & 2097151) >> 17;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 2097151) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 2097151) << 25;
		des[16+j] = (src[20+j] & 2097151) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 2097151) << 14;
		des[20+j] = (src[24+j] & 2097151) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 2097151) << 3;
	}
}

template<typename T>
void KAFOR_pack_8len_21bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 2097151) << 24;
		des[4+j] = (src[j] & 2097151) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 2097151) << 13;
		des[8+j] = (src[4+j] & 2097151) >> 19;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 2097151) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 2097151) << 23;
		des[12+j] = (src[12+j] & 2097151) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 2097151) << 12;
		des[16+j] = (src[16+j] & 2097151) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 2097151) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 2097151) << 22;
		des[20+j] = (src[24+j] & 2097151) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 2097151) << 11;
	}
}

template<typename T>
void KAFOR_pack_8len_22bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 4194303);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 4194303) << 22;
		des[4+j] = (src[4+j] & 4194303) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 4194303) << 12;
		des[8+j] = (src[8+j] & 4194303) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 4194303) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 4194303) << 24;
		des[12+j] = (src[16+j] & 4194303) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 4194303) << 14;
		des[16+j] = (src[20+j] & 4194303) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 4194303) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 4194303) << 26;
		des[20+j] = (src[28+j] & 4194303) >> 6;
	}
}

template<typename T>
void KAFOR_pack_8len_22bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 4194303) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 4194303) << 30;
		des[4+j] = (src[4+j] & 4194303) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 4194303) << 20;
		des[8+j] = (src[8+j] & 4194303) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 4194303) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[16+j] & 4194303);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 4194303) << 22;
		des[16+j] = (src[20+j] & 4194303) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 4194303) << 12;
		des[20+j] = (src[24+j] & 4194303) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 4194303) << 2;
	}
}

template<typename T>
void KAFOR_pack_8len_22bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 4194303) << 16;
		des[4+j] = (src[j] & 4194303) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 4194303) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 4194303) << 28;
		des[8+j] = (src[8+j] & 4194303) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 4194303) << 18;
		des[12+j] = (src[12+j] & 4194303) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 4194303) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 4194303) << 30;
		des[16+j] = (src[20+j] & 4194303) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 4194303) << 20;
		des[20+j] = (src[24+j] & 4194303) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 4194303) << 10;
	}
}

template<typename T>
void KAFOR_pack_8len_22bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 4194303) << 24;
		des[4+j] = (src[j] & 4194303) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 4194303) << 14;
		des[8+j] = (src[4+j] & 4194303) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 4194303) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 4194303) << 26;
		des[12+j] = (src[12+j] & 4194303) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 4194303) << 16;
		des[16+j] = (src[16+j] & 4194303) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 4194303) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 4194303) << 28;
		des[20+j] = (src[24+j] & 4194303) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 4194303) << 18;
		des[24+j] = (src[28+j] & 4194303) >> 14;
	}
}

template<typename T>
void KAFOR_pack_8len_23bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 8388607);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 8388607) << 23;
		des[4+j] = (src[4+j] & 8388607) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 8388607) << 14;
		des[8+j] = (src[8+j] & 8388607) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 8388607) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 8388607) << 28;
		des[12+j] = (src[16+j] & 8388607) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 8388607) << 19;
		des[16+j] = (src[20+j] & 8388607) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 8388607) << 10;
		des[20+j] = (src[24+j] & 8388607) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 8388607) << 1;
	}
}

template<typename T>
void KAFOR_pack_8len_23bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 8388607) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 8388607) << 31;
		des[4+j] = (src[4+j] & 8388607) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 8388607) << 22;
		des[8+j] = (src[8+j] & 8388607) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 8388607) << 13;
		des[12+j] = (src[12+j] & 8388607) >> 19;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 8388607) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 8388607) << 27;
		des[16+j] = (src[20+j] & 8388607) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 8388607) << 18;
		des[20+j] = (src[24+j] & 8388607) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 8388607) << 9;
	}
}

template<typename T>
void KAFOR_pack_8len_23bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 8388607) << 16;
		des[4+j] = (src[j] & 8388607) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 8388607) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 8388607) << 30;
		des[8+j] = (src[8+j] & 8388607) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 8388607) << 21;
		des[12+j] = (src[12+j] & 8388607) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 8388607) << 12;
		des[16+j] = (src[16+j] & 8388607) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 8388607) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 8388607) << 26;
		des[20+j] = (src[24+j] & 8388607) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 8388607) << 17;
		des[24+j] = (src[28+j] & 8388607) >> 15;
	}
}

template<typename T>
void KAFOR_pack_8len_23bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 8388607) << 24;
		des[4+j] = (src[j] & 8388607) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 8388607) << 15;
		des[8+j] = (src[4+j] & 8388607) >> 17;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 8388607) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 8388607) << 29;
		des[12+j] = (src[12+j] & 8388607) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 8388607) << 20;
		des[16+j] = (src[16+j] & 8388607) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 8388607) << 11;
		des[20+j] = (src[20+j] & 8388607) >> 21;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 8388607) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 8388607) << 25;
		des[24+j] = (src[28+j] & 8388607) >> 7;
	}
}

template<typename T>
void KAFOR_pack_8len_24bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 16777215) << 24;
		des[4+j] = (src[4+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 16777215) << 16;
		des[8+j] = (src[8+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[16+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 16777215) << 24;
		des[16+j] = (src[20+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 16777215) << 16;
		des[20+j] = (src[24+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 16777215) << 8;
	}
}

template<typename T>
void KAFOR_pack_8len_24bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 16777215) << 24;
		des[8+j] = (src[8+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 16777215) << 16;
		des[12+j] = (src[12+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[20+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 16777215) << 24;
		des[20+j] = (src[24+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 16777215) << 16;
		des[24+j] = (src[28+j] & 16777215) >> 16;
	}
}

template<typename T>
void KAFOR_pack_8len_24bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 16777215) << 16;
		des[4+j] = (src[j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 16777215) << 24;
		des[12+j] = (src[12+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 16777215) << 16;
		des[16+j] = (src[16+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[24+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 16777215) << 24;
		des[24+j] = (src[28+j] & 16777215) >> 8;
	}
}

template<typename T>
void KAFOR_pack_8len_24bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 16777215) << 24;
		des[4+j] = (src[j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 16777215) << 16;
		des[8+j] = (src[4+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 16777215) << 24;
		des[16+j] = (src[16+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 16777215) << 16;
		des[20+j] = (src[20+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[28+j] & 16777215);
	}
}

template<typename T>
void KAFOR_pack_8len_25bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 33554431);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 33554431) << 25;
		des[4+j] = (src[4+j] & 33554431) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 33554431) << 18;
		des[8+j] = (src[8+j] & 33554431) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 33554431) << 11;
		des[12+j] = (src[12+j] & 33554431) >> 21;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 33554431) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 33554431) << 29;
		des[16+j] = (src[20+j] & 33554431) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 33554431) << 22;
		des[20+j] = (src[24+j] & 33554431) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 33554431) << 15;
		des[24+j] = (src[28+j] & 33554431) >> 17;
	}
}

template<typename T>
void KAFOR_pack_8len_25bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 33554431) << 8;
		des[4+j] = (src[j] & 33554431) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 33554431) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 33554431) << 26;
		des[8+j] = (src[8+j] & 33554431) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 33554431) << 19;
		des[12+j] = (src[12+j] & 33554431) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 33554431) << 12;
		des[16+j] = (src[16+j] & 33554431) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 33554431) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 33554431) << 30;
		des[20+j] = (src[24+j] & 33554431) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 33554431) << 23;
		des[24+j] = (src[28+j] & 33554431) >> 9;
	}
}

template<typename T>
void KAFOR_pack_8len_25bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 33554431) << 16;
		des[4+j] = (src[j] & 33554431) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 33554431) << 9;
		des[8+j] = (src[4+j] & 33554431) >> 23;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 33554431) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 33554431) << 27;
		des[12+j] = (src[12+j] & 33554431) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 33554431) << 20;
		des[16+j] = (src[16+j] & 33554431) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 33554431) << 13;
		des[20+j] = (src[20+j] & 33554431) >> 19;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 33554431) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 33554431) << 31;
		des[24+j] = (src[28+j] & 33554431) >> 1;
	}
}

template<typename T>
void KAFOR_pack_8len_25bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 33554431) << 24;
		des[4+j] = (src[j] & 33554431) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 33554431) << 17;
		des[8+j] = (src[4+j] & 33554431) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 33554431) << 10;
		des[12+j] = (src[8+j] & 33554431) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j] & 33554431) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 33554431) << 28;
		des[16+j] = (src[16+j] & 33554431) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 33554431) << 21;
		des[20+j] = (src[20+j] & 33554431) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 33554431) << 14;
		des[24+j] = (src[24+j] & 33554431) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[28+j] & 33554431) << 7;
	}
}

template<typename T>
void KAFOR_pack_8len_26bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 67108863);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 67108863) << 26;
		des[4+j] = (src[4+j] & 67108863) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 67108863) << 20;
		des[8+j] = (src[8+j] & 67108863) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 67108863) << 14;
		des[12+j] = (src[12+j] & 67108863) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 67108863) << 8;
		des[16+j] = (src[16+j] & 67108863) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 67108863) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 67108863) << 28;
		des[20+j] = (src[24+j] & 67108863) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 67108863) << 22;
		des[24+j] = (src[28+j] & 67108863) >> 10;
	}
}

template<typename T>
void KAFOR_pack_8len_26bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 67108863) << 8;
		des[4+j] = (src[j] & 67108863) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 67108863) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 67108863) << 28;
		des[8+j] = (src[8+j] & 67108863) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 67108863) << 22;
		des[12+j] = (src[12+j] & 67108863) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 67108863) << 16;
		des[16+j] = (src[16+j] & 67108863) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 67108863) << 10;
		des[20+j] = (src[20+j] & 67108863) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 67108863) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 67108863) << 30;
		des[24+j] = (src[28+j] & 67108863) >> 2;
	}
}

template<typename T>
void KAFOR_pack_8len_26bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 67108863) << 16;
		des[4+j] = (src[j] & 67108863) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 67108863) << 10;
		des[8+j] = (src[4+j] & 67108863) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 67108863) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 67108863) << 30;
		des[12+j] = (src[12+j] & 67108863) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 67108863) << 24;
		des[16+j] = (src[16+j] & 67108863) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 67108863) << 18;
		des[20+j] = (src[20+j] & 67108863) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 67108863) << 12;
		des[24+j] = (src[24+j] & 67108863) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[28+j] & 67108863) << 6;
	}
}

template<typename T>
void KAFOR_pack_8len_26bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 67108863) << 24;
		des[4+j] = (src[j] & 67108863) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 67108863) << 18;
		des[8+j] = (src[4+j] & 67108863) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 67108863) << 12;
		des[12+j] = (src[8+j] & 67108863) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j] & 67108863) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j] & 67108863);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 67108863) << 26;
		des[20+j] = (src[20+j] & 67108863) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 67108863) << 20;
		des[24+j] = (src[24+j] & 67108863) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[28+j] & 67108863) << 14;
		des[28+j] = (src[28+j] & 67108863) >> 18;
	}
}

template<typename T>
void KAFOR_pack_8len_27bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 134217727);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 134217727) << 27;
		des[4+j] = (src[4+j] & 134217727) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 134217727) << 22;
		des[8+j] = (src[8+j] & 134217727) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 134217727) << 17;
		des[12+j] = (src[12+j] & 134217727) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 134217727) << 12;
		des[16+j] = (src[16+j] & 134217727) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 134217727) << 7;
		des[20+j] = (src[20+j] & 134217727) >> 25;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 134217727) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 134217727) << 29;
		des[24+j] = (src[28+j] & 134217727) >> 3;
	}
}

template<typename T>
void KAFOR_pack_8len_27bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 134217727) << 8;
		des[4+j] = (src[j] & 134217727) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 134217727) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 134217727) << 30;
		des[8+j] = (src[8+j] & 134217727) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 134217727) << 25;
		des[12+j] = (src[12+j] & 134217727) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 134217727) << 20;
		des[16+j] = (src[16+j] & 134217727) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 134217727) << 15;
		des[20+j] = (src[20+j] & 134217727) >> 17;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 134217727) << 10;
		des[24+j] = (src[24+j] & 134217727) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[28+j] & 134217727) << 5;
	}
}

template<typename T>
void KAFOR_pack_8len_27bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 134217727) << 16;
		des[4+j] = (src[j] & 134217727) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 134217727) << 11;
		des[8+j] = (src[4+j] & 134217727) >> 21;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 134217727) << 6;
		des[12+j] = (src[8+j] & 134217727) >> 26;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j] & 134217727) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 134217727) << 28;
		des[16+j] = (src[16+j] & 134217727) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 134217727) << 23;
		des[20+j] = (src[20+j] & 134217727) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 134217727) << 18;
		des[24+j] = (src[24+j] & 134217727) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[28+j] & 134217727) << 13;
		des[28+j] = (src[28+j] & 134217727) >> 19;
	}
}

template<typename T>
void KAFOR_pack_8len_27bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 134217727) << 24;
		des[4+j] = (src[j] & 134217727) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 134217727) << 19;
		des[8+j] = (src[4+j] & 134217727) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 134217727) << 14;
		des[12+j] = (src[8+j] & 134217727) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j] & 134217727) << 9;
		des[16+j] = (src[12+j] & 134217727) >> 23;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[16+j] & 134217727) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 134217727) << 31;
		des[20+j] = (src[20+j] & 134217727) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 134217727) << 26;
		des[24+j] = (src[24+j] & 134217727) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[28+j] & 134217727) << 21;
		des[28+j] = (src[28+j] & 134217727) >> 11;
	}
}

template<typename T>
void KAFOR_pack_8len_28bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 268435455);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 268435455) << 28;
		des[4+j] = (src[4+j] & 268435455) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 268435455) << 24;
		des[8+j] = (src[8+j] & 268435455) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 268435455) << 20;
		des[12+j] = (src[12+j] & 268435455) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 268435455) << 16;
		des[16+j] = (src[16+j] & 268435455) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 268435455) << 12;
		des[20+j] = (src[20+j] & 268435455) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 268435455) << 8;
		des[24+j] = (src[24+j] & 268435455) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[28+j] & 268435455) << 4;
	}
}

template<typename T>
void KAFOR_pack_8len_28bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 268435455) << 8;
		des[4+j] = (src[j] & 268435455) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 268435455) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] & 268435455);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 268435455) << 28;
		des[12+j] = (src[12+j] & 268435455) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 268435455) << 24;
		des[16+j] = (src[16+j] & 268435455) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 268435455) << 20;
		des[20+j] = (src[20+j] & 268435455) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 268435455) << 16;
		des[24+j] = (src[24+j] & 268435455) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[28+j] & 268435455) << 12;
		des[28+j] = (src[28+j] & 268435455) >> 20;
	}
}

template<typename T>
void KAFOR_pack_8len_28bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 268435455) << 16;
		des[4+j] = (src[j] & 268435455) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 268435455) << 12;
		des[8+j] = (src[4+j] & 268435455) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 268435455) << 8;
		des[12+j] = (src[8+j] & 268435455) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j] & 268435455) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j] & 268435455);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 268435455) << 28;
		des[20+j] = (src[20+j] & 268435455) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 268435455) << 24;
		des[24+j] = (src[24+j] & 268435455) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[28+j] & 268435455) << 20;
		des[28+j] = (src[28+j] & 268435455) >> 12;
	}
}

template<typename T>
void KAFOR_pack_8len_28bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 268435455) << 24;
		des[4+j] = (src[j] & 268435455) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 268435455) << 20;
		des[8+j] = (src[4+j] & 268435455) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 268435455) << 16;
		des[12+j] = (src[8+j] & 268435455) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j] & 268435455) << 12;
		des[16+j] = (src[12+j] & 268435455) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[16+j] & 268435455) << 8;
		des[20+j] = (src[16+j] & 268435455) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[20+j] & 268435455) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[24+j] & 268435455);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[28+j] & 268435455) << 28;
		des[28+j] = (src[28+j] & 268435455) >> 4;
	}
}

template<typename T>
void KAFOR_pack_8len_29bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 536870911);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 536870911) << 29;
		des[4+j] = (src[4+j] & 536870911) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 536870911) << 26;
		des[8+j] = (src[8+j] & 536870911) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 536870911) << 23;
		des[12+j] = (src[12+j] & 536870911) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 536870911) << 20;
		des[16+j] = (src[16+j] & 536870911) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 536870911) << 17;
		des[20+j] = (src[20+j] & 536870911) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 536870911) << 14;
		des[24+j] = (src[24+j] & 536870911) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[28+j] & 536870911) << 11;
		des[28+j] = (src[28+j] & 536870911) >> 21;
	}
}

template<typename T>
void KAFOR_pack_8len_29bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 536870911) << 8;
		des[4+j] = (src[j] & 536870911) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 536870911) << 5;
		des[8+j] = (src[4+j] & 536870911) >> 27;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 536870911) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 536870911) << 31;
		des[12+j] = (src[12+j] & 536870911) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 536870911) << 28;
		des[16+j] = (src[16+j] & 536870911) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 536870911) << 25;
		des[20+j] = (src[20+j] & 536870911) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 536870911) << 22;
		des[24+j] = (src[24+j] & 536870911) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[28+j] & 536870911) << 19;
		des[28+j] = (src[28+j] & 536870911) >> 13;
	}
}

template<typename T>
void KAFOR_pack_8len_29bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 536870911) << 16;
		des[4+j] = (src[j] & 536870911) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 536870911) << 13;
		des[8+j] = (src[4+j] & 536870911) >> 19;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 536870911) << 10;
		des[12+j] = (src[8+j] & 536870911) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j] & 536870911) << 7;
		des[16+j] = (src[12+j] & 536870911) >> 25;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[16+j] & 536870911) << 4;
		des[20+j] = (src[16+j] & 536870911) >> 28;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[20+j] & 536870911) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 536870911) << 30;
		des[24+j] = (src[24+j] & 536870911) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[28+j] & 536870911) << 27;
		des[28+j] = (src[28+j] & 536870911) >> 5;
	}
}

template<typename T>
void KAFOR_pack_8len_29bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 536870911) << 24;
		des[4+j] = (src[j] & 536870911) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 536870911) << 21;
		des[8+j] = (src[4+j] & 536870911) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 536870911) << 18;
		des[12+j] = (src[8+j] & 536870911) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j] & 536870911) << 15;
		des[16+j] = (src[12+j] & 536870911) >> 17;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[16+j] & 536870911) << 12;
		des[20+j] = (src[16+j] & 536870911) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[20+j] & 536870911) << 9;
		des[24+j] = (src[20+j] & 536870911) >> 23;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[24+j] & 536870911) << 6;
		des[28+j] = (src[24+j] & 536870911) >> 26;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[28+j] & 536870911) << 3;
	}
}

template<typename T>
void KAFOR_pack_8len_30bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 1073741823);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 1073741823) << 30;
		des[4+j] = (src[4+j] & 1073741823) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 1073741823) << 28;
		des[8+j] = (src[8+j] & 1073741823) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 1073741823) << 26;
		des[12+j] = (src[12+j] & 1073741823) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 1073741823) << 24;
		des[16+j] = (src[16+j] & 1073741823) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 1073741823) << 22;
		des[20+j] = (src[20+j] & 1073741823) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 1073741823) << 20;
		des[24+j] = (src[24+j] & 1073741823) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[28+j] & 1073741823) << 18;
		des[28+j] = (src[28+j] & 1073741823) >> 14;
	}
}

template<typename T>
void KAFOR_pack_8len_30bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 1073741823) << 8;
		des[4+j] = (src[j] & 1073741823) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 1073741823) << 6;
		des[8+j] = (src[4+j] & 1073741823) >> 26;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 1073741823) << 4;
		des[12+j] = (src[8+j] & 1073741823) >> 28;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j] & 1073741823) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j] & 1073741823);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 1073741823) << 30;
		des[20+j] = (src[20+j] & 1073741823) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 1073741823) << 28;
		des[24+j] = (src[24+j] & 1073741823) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[28+j] & 1073741823) << 26;
		des[28+j] = (src[28+j] & 1073741823) >> 6;
	}
}

template<typename T>
void KAFOR_pack_8len_30bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 1073741823) << 16;
		des[4+j] = (src[j] & 1073741823) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 1073741823) << 14;
		des[8+j] = (src[4+j] & 1073741823) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 1073741823) << 12;
		des[12+j] = (src[8+j] & 1073741823) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j] & 1073741823) << 10;
		des[16+j] = (src[12+j] & 1073741823) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[16+j] & 1073741823) << 8;
		des[20+j] = (src[16+j] & 1073741823) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[20+j] & 1073741823) << 6;
		des[24+j] = (src[20+j] & 1073741823) >> 26;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[24+j] & 1073741823) << 4;
		des[28+j] = (src[24+j] & 1073741823) >> 28;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[28+j] & 1073741823) << 2;
	}
}

template<typename T>
void KAFOR_pack_8len_30bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 1073741823) << 24;
		des[4+j] = (src[j] & 1073741823) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 1073741823) << 22;
		des[8+j] = (src[4+j] & 1073741823) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 1073741823) << 20;
		des[12+j] = (src[8+j] & 1073741823) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j] & 1073741823) << 18;
		des[16+j] = (src[12+j] & 1073741823) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[16+j] & 1073741823) << 16;
		des[20+j] = (src[16+j] & 1073741823) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[20+j] & 1073741823) << 14;
		des[24+j] = (src[20+j] & 1073741823) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[24+j] & 1073741823) << 12;
		des[28+j] = (src[24+j] & 1073741823) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[28+j] & 1073741823) << 10;
		des[32+j] = (src[28+j] & 1073741823) >> 22;
	}
}

template<typename T>
void KAFOR_pack_8len_31bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 2147483647);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 2147483647) << 31;
		des[4+j] = (src[4+j] & 2147483647) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 2147483647) << 30;
		des[8+j] = (src[8+j] & 2147483647) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 2147483647) << 29;
		des[12+j] = (src[12+j] & 2147483647) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 2147483647) << 28;
		des[16+j] = (src[16+j] & 2147483647) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 2147483647) << 27;
		des[20+j] = (src[20+j] & 2147483647) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 2147483647) << 26;
		des[24+j] = (src[24+j] & 2147483647) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[28+j] & 2147483647) << 25;
		des[28+j] = (src[28+j] & 2147483647) >> 7;
	}
}

template<typename T>
void KAFOR_pack_8len_31bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 2147483647) << 8;
		des[4+j] = (src[j] & 2147483647) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 2147483647) << 7;
		des[8+j] = (src[4+j] & 2147483647) >> 25;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 2147483647) << 6;
		des[12+j] = (src[8+j] & 2147483647) >> 26;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j] & 2147483647) << 5;
		des[16+j] = (src[12+j] & 2147483647) >> 27;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[16+j] & 2147483647) << 4;
		des[20+j] = (src[16+j] & 2147483647) >> 28;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[20+j] & 2147483647) << 3;
		des[24+j] = (src[20+j] & 2147483647) >> 29;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[24+j] & 2147483647) << 2;
		des[28+j] = (src[24+j] & 2147483647) >> 30;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[28+j] & 2147483647) << 1;
	}
}

template<typename T>
void KAFOR_pack_8len_31bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 2147483647) << 16;
		des[4+j] = (src[j] & 2147483647) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 2147483647) << 15;
		des[8+j] = (src[4+j] & 2147483647) >> 17;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 2147483647) << 14;
		des[12+j] = (src[8+j] & 2147483647) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j] & 2147483647) << 13;
		des[16+j] = (src[12+j] & 2147483647) >> 19;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[16+j] & 2147483647) << 12;
		des[20+j] = (src[16+j] & 2147483647) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[20+j] & 2147483647) << 11;
		des[24+j] = (src[20+j] & 2147483647) >> 21;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[24+j] & 2147483647) << 10;
		des[28+j] = (src[24+j] & 2147483647) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[28+j] & 2147483647) << 9;
		des[32+j] = (src[28+j] & 2147483647) >> 23;
	}
}

template<typename T>
void KAFOR_pack_8len_31bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 2147483647) << 24;
		des[4+j] = (src[j] & 2147483647) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 2147483647) << 23;
		des[8+j] = (src[4+j] & 2147483647) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 2147483647) << 22;
		des[12+j] = (src[8+j] & 2147483647) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j] & 2147483647) << 21;
		des[16+j] = (src[12+j] & 2147483647) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[16+j] & 2147483647) << 20;
		des[20+j] = (src[16+j] & 2147483647) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[20+j] & 2147483647) << 19;
		des[24+j] = (src[20+j] & 2147483647) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[24+j] & 2147483647) << 18;
		des[28+j] = (src[24+j] & 2147483647) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[28+j] & 2147483647) << 17;
		des[32+j] = (src[28+j] & 2147483647) >> 15;
	}
}

template<typename T>
void KAFOR_pack_8len_32bw_0offset(T * des, const uint32_t *src) {
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
void KAFOR_pack_8len_32bw_8offset(T * des, const uint32_t *src) {
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
void KAFOR_pack_8len_32bw_16offset(T * des, const uint32_t *src) {
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
void KAFOR_pack_8len_32bw_24offset(T * des, const uint32_t *src) {
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
void KAFOR_pack_16len_1bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 1);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 1) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 1) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 1) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 1) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 1) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 1) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 1) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[32+j] & 1) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[36+j] & 1) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[40+j] & 1) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[44+j] & 1) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[48+j] & 1) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[52+j] & 1) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[56+j] & 1) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[60+j] & 1) << 15;
	}
}

template<typename T>
void KAFOR_pack_16len_1bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 1) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 1) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 1) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 1) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 1) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 1) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 1) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 1) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[32+j] & 1) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[36+j] & 1) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[40+j] & 1) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[44+j] & 1) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[48+j] & 1) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[52+j] & 1) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[56+j] & 1) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[60+j] & 1) << 23;
	}
}

template<typename T>
void KAFOR_pack_16len_1bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 1) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 1) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 1) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 1) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 1) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 1) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 1) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 1) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[32+j] & 1) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[36+j] & 1) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[40+j] & 1) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[44+j] & 1) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[48+j] & 1) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[52+j] & 1) << 29;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[56+j] & 1) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[60+j] & 1) << 31;
	}
}

template<typename T>
void KAFOR_pack_16len_1bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 1) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 1) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 1) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 1) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 1) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 1) << 29;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 1) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 1) << 31;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[32+j] & 1);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 1) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 1) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 1) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 1) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 1) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[56+j] & 1) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[60+j] & 1) << 7;
	}
}

template<typename T>
void KAFOR_pack_16len_2bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 3);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 3) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 3) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 3) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 3) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 3) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 3) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[32+j] & 3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[36+j] & 3) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[40+j] & 3) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[44+j] & 3) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[48+j] & 3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[52+j] & 3) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[56+j] & 3) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[60+j] & 3) << 30;
	}
}

template<typename T>
void KAFOR_pack_16len_2bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 3) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 3) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 3) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 3) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 3) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 3) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[32+j] & 3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[36+j] & 3) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[40+j] & 3) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[44+j] & 3) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[48+j] & 3);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 3) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[56+j] & 3) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[60+j] & 3) << 6;
	}
}

template<typename T>
void KAFOR_pack_16len_2bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 3) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 3) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 3) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 3) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 3) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 3) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[32+j] & 3);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 3) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 3) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 3) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 3) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[56+j] & 3) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[60+j] & 3) << 14;
	}
}

template<typename T>
void KAFOR_pack_16len_2bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 3) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 3) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 3) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[16+j] & 3);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 3) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 3) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 3) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 3) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 3) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 3) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 3) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[56+j] & 3) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[60+j] & 3) << 22;
	}
}

template<typename T>
void KAFOR_pack_16len_3bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 7);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 7) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 7) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 7) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 7) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 7) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 7) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 7) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[32+j] & 7) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[36+j] & 7) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[40+j] & 7) << 30;
		des[4+j] = (src[40+j] & 7) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 7) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 7) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 7) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[56+j] & 7) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[60+j] & 7) << 13;
	}
}

template<typename T>
void KAFOR_pack_16len_3bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 7) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 7) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 7) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 7) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 7) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 7) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 7) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 7) << 29;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[32+j] & 7);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 7) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 7) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 7) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 7) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 7) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[56+j] & 7) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[60+j] & 7) << 21;
	}
}

template<typename T>
void KAFOR_pack_16len_3bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 7) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 7) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 7) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 7) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 7) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 7) << 31;
		des[4+j] = (src[20+j] & 7) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 7) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 7) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 7) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 7) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 7) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 7) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 7) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 7) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[56+j] & 7) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[60+j] & 7) << 29;
	}
}

template<typename T>
void KAFOR_pack_16len_3bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 7) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 7) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 7) << 30;
		des[4+j] = (src[8+j] & 7) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 7) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 7) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 7) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 7) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 7) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 7) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 7) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 7) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 7) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 7) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 7) << 31;
		des[8+j] = (src[52+j] & 7) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[56+j] & 7) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[60+j] & 7) << 5;
	}
}

template<typename T>
void KAFOR_pack_16len_4bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 15);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 15) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 15) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 15) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 15) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 15) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 15) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 15) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[32+j] & 15);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 15) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 15) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 15) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 15) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 15) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[56+j] & 15) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[60+j] & 15) << 28;
	}
}

template<typename T>
void KAFOR_pack_16len_4bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 15) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 15) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 15) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 15) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 15) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 15) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[24+j] & 15);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 15) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 15) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 15) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 15) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 15) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 15) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 15) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[56+j] & 15);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[60+j] & 15) << 4;
	}
}

template<typename T>
void KAFOR_pack_16len_4bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 15) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 15) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 15) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 15) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[16+j] & 15);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 15) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 15) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 15) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 15) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 15) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 15) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 15) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[48+j] & 15);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 15) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[56+j] & 15) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[60+j] & 15) << 12;
	}
}

template<typename T>
void KAFOR_pack_16len_4bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 15) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 15) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[8+j] & 15);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 15) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 15) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 15) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 15) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 15) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 15) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 15) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[40+j] & 15);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 15) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[48+j] & 15) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 15) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[56+j] & 15) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[60+j] & 15) << 20;
	}
}

template<typename T>
void KAFOR_pack_16len_5bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 31);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 31) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 31) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 31) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 31) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 31) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 31) << 30;
		des[4+j] = (src[24+j] & 31) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 31) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 31) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 31) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 31) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 31) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 31) << 28;
		des[8+j] = (src[48+j] & 31) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 31) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[56+j] & 31) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[60+j] & 31) << 11;
	}
}

template<typename T>
void KAFOR_pack_16len_5bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 31) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 31) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 31) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 31) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 31) << 28;
		des[4+j] = (src[16+j] & 31) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 31) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 31) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 31) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 31) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 31) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 31) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 31) << 31;
		des[8+j] = (src[44+j] & 31) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[48+j] & 31) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 31) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[56+j] & 31) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[60+j] & 31) << 19;
	}
}

template<typename T>
void KAFOR_pack_16len_5bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 31) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 31) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 31) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 31) << 31;
		des[4+j] = (src[12+j] & 31) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 31) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 31) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 31) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 31) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 31) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 31) << 29;
		des[8+j] = (src[36+j] & 31) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 31) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 31) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[48+j] & 31) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 31) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[56+j] & 31) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[60+j] & 31) << 27;
	}
}

template<typename T>
void KAFOR_pack_16len_5bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 31) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 31) << 29;
		des[4+j] = (src[4+j] & 31) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 31) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 31) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 31) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 31) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 31) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 31) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[32+j] & 31);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 31) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 31) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 31) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[48+j] & 31) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 31) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[56+j] & 31) << 30;
		des[12+j] = (src[56+j] & 31) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[60+j] & 31) << 3;
	}
}

template<typename T>
void KAFOR_pack_16len_6bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 63);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 63) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 63) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 63) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 63) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 63) << 30;
		des[4+j] = (src[20+j] & 63) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 63) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 63) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 63) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 63) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 63) << 28;
		des[8+j] = (src[40+j] & 63) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 63) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[48+j] & 63) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 63) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[56+j] & 63) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[60+j] & 63) << 26;
	}
}

template<typename T>
void KAFOR_pack_16len_6bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 63) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 63) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 63) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 63) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[16+j] & 63);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 63) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 63) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 63) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 63) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 63) << 30;
		des[8+j] = (src[36+j] & 63) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 63) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 63) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[48+j] & 63) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 63) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[56+j] & 63) << 28;
		des[12+j] = (src[56+j] & 63) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[60+j] & 63) << 2;
	}
}

template<typename T>
void KAFOR_pack_16len_6bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 63) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 63) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 63) << 28;
		des[4+j] = (src[8+j] & 63) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 63) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 63) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 63) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 63) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 63) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[32+j] & 63);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 63) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 63) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 63) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[48+j] & 63) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 63) << 30;
		des[12+j] = (src[52+j] & 63) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[56+j] & 63) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[60+j] & 63) << 10;
	}
}

template<typename T>
void KAFOR_pack_16len_6bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 63) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 63) << 30;
		des[4+j] = (src[4+j] & 63) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 63) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 63) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 63) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 63) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 63) << 28;
		des[8+j] = (src[24+j] & 63) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 63) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 63) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 63) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 63) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 63) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[48+j] & 63);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[52+j] & 63) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[56+j] & 63) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[60+j] & 63) << 18;
	}
}

template<typename T>
void KAFOR_pack_16len_7bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 127);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 127) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 127) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 127) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 127) << 28;
		des[4+j] = (src[16+j] & 127) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 127) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 127) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 127) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 127) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 127) << 31;
		des[8+j] = (src[36+j] & 127) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 127) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 127) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[48+j] & 127) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 127) << 27;
		des[12+j] = (src[52+j] & 127) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[56+j] & 127) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[60+j] & 127) << 9;
	}
}

template<typename T>
void KAFOR_pack_16len_7bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 127) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 127) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 127) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 127) << 29;
		des[4+j] = (src[12+j] & 127) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 127) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 127) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 127) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 127) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[32+j] & 127);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 127) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 127) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 127) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[48+j] & 127) << 28;
		des[12+j] = (src[48+j] & 127) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[52+j] & 127) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[56+j] & 127) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[60+j] & 127) << 17;
	}
}

template<typename T>
void KAFOR_pack_16len_7bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 127) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 127) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 127) << 30;
		des[4+j] = (src[8+j] & 127) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 127) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 127) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 127) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 127) << 26;
		des[8+j] = (src[24+j] & 127) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 127) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 127) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 127) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 127) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 127) << 29;
		des[12+j] = (src[44+j] & 127) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[48+j] & 127) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[52+j] & 127) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[56+j] & 127) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[60+j] & 127) << 25;
	}
}

template<typename T>
void KAFOR_pack_16len_7bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 127) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 127) << 31;
		des[4+j] = (src[4+j] & 127) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 127) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 127) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 127) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 127) << 27;
		des[8+j] = (src[20+j] & 127) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 127) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 127) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 127) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 127) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 127) << 30;
		des[12+j] = (src[40+j] & 127) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 127) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[48+j] & 127) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[52+j] & 127) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[56+j] & 127) << 26;
		des[16+j] = (src[56+j] & 127) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[60+j] & 127) << 1;
	}
}

template<typename T>
void KAFOR_pack_16len_8bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[16+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[32+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[48+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[52+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[56+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[60+j] & 255) << 24;
	}
}

template<typename T>
void KAFOR_pack_16len_8bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[12+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[28+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[44+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[48+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[52+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[56+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[60+j] & 255);
	}
}

template<typename T>
void KAFOR_pack_16len_8bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[8+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[24+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[40+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[48+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[52+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[56+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[60+j] & 255) << 8;
	}
}

template<typename T>
void KAFOR_pack_16len_8bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[20+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[36+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[48+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[52+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[56+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[60+j] & 255) << 16;
	}
}

template<typename T>
void KAFOR_pack_16len_9bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 511);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 511) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 511) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 511) << 27;
		des[4+j] = (src[12+j] & 511) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 511) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 511) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 511) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 511) << 31;
		des[8+j] = (src[28+j] & 511) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 511) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 511) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 511) << 26;
		des[12+j] = (src[40+j] & 511) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 511) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[48+j] & 511) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[52+j] & 511) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[56+j] & 511) << 30;
		des[16+j] = (src[56+j] & 511) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[60+j] & 511) << 7;
	}
}

template<typename T>
void KAFOR_pack_16len_9bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 511) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 511) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 511) << 26;
		des[4+j] = (src[8+j] & 511) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 511) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 511) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 511) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 511) << 30;
		des[8+j] = (src[24+j] & 511) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 511) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 511) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 511) << 25;
		des[12+j] = (src[36+j] & 511) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 511) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 511) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[48+j] & 511) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[52+j] & 511) << 29;
		des[16+j] = (src[52+j] & 511) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[56+j] & 511) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[60+j] & 511) << 15;
	}
}

template<typename T>
void KAFOR_pack_16len_9bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 511) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 511) << 25;
		des[4+j] = (src[4+j] & 511) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 511) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 511) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 511) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 511) << 29;
		des[8+j] = (src[20+j] & 511) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 511) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 511) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 511) << 24;
		des[12+j] = (src[32+j] & 511) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 511) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 511) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 511) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[48+j] & 511) << 28;
		des[16+j] = (src[48+j] & 511) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 511) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[56+j] & 511) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[60+j] & 511) << 23;
	}
}

template<typename T>
void KAFOR_pack_16len_9bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 511) << 24;
		des[4+j] = (src[j] & 511) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 511) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 511) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 511) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 511) << 28;
		des[8+j] = (src[16+j] & 511) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 511) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 511) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 511) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[32+j] & 511);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 511) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 511) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 511) << 27;
		des[16+j] = (src[44+j] & 511) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[48+j] & 511) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 511) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[56+j] & 511) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[60+j] & 511) << 31;
		des[20+j] = (src[60+j] & 511) >> 1;
	}
}

template<typename T>
void KAFOR_pack_16len_10bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 1023);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 1023) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 1023) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 1023) << 30;
		des[4+j] = (src[12+j] & 1023) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 1023) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 1023) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 1023) << 28;
		des[8+j] = (src[24+j] & 1023) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 1023) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 1023) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 1023) << 26;
		des[12+j] = (src[36+j] & 1023) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 1023) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 1023) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[48+j] & 1023) << 24;
		des[16+j] = (src[48+j] & 1023) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 1023) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[56+j] & 1023) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[60+j] & 1023) << 22;
	}
}

template<typename T>
void KAFOR_pack_16len_10bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 1023) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 1023) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 1023) << 28;
		des[4+j] = (src[8+j] & 1023) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 1023) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 1023) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 1023) << 26;
		des[8+j] = (src[20+j] & 1023) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 1023) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 1023) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 1023) << 24;
		des[12+j] = (src[32+j] & 1023) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 1023) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 1023) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 1023) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[48+j] & 1023);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 1023) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[56+j] & 1023) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[60+j] & 1023) << 30;
		des[20+j] = (src[60+j] & 1023) >> 2;
	}
}

template<typename T>
void KAFOR_pack_16len_10bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 1023) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 1023) << 26;
		des[4+j] = (src[4+j] & 1023) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 1023) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 1023) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 1023) << 24;
		des[8+j] = (src[16+j] & 1023) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 1023) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 1023) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 1023) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[32+j] & 1023);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 1023) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 1023) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 1023) << 30;
		des[16+j] = (src[44+j] & 1023) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[48+j] & 1023) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 1023) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[56+j] & 1023) << 28;
		des[20+j] = (src[56+j] & 1023) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[60+j] & 1023) << 6;
	}
}

template<typename T>
void KAFOR_pack_16len_10bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 1023) << 24;
		des[4+j] = (src[j] & 1023) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 1023) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 1023) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 1023) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[16+j] & 1023);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 1023) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 1023) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 1023) << 30;
		des[12+j] = (src[28+j] & 1023) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[32+j] & 1023) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 1023) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 1023) << 28;
		des[16+j] = (src[40+j] & 1023) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 1023) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[48+j] & 1023) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 1023) << 26;
		des[20+j] = (src[52+j] & 1023) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[56+j] & 1023) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[60+j] & 1023) << 14;
	}
}

template<typename T>
void KAFOR_pack_16len_11bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 2047);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 2047) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 2047) << 22;
		des[4+j] = (src[8+j] & 2047) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 2047) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 2047) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 2047) << 23;
		des[8+j] = (src[20+j] & 2047) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 2047) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 2047) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 2047) << 24;
		des[12+j] = (src[32+j] & 2047) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 2047) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 2047) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 2047) << 25;
		des[16+j] = (src[44+j] & 2047) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[48+j] & 2047) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 2047) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[56+j] & 2047) << 26;
		des[20+j] = (src[56+j] & 2047) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[60+j] & 2047) << 5;
	}
}

template<typename T>
void KAFOR_pack_16len_11bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 2047) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 2047) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 2047) << 30;
		des[4+j] = (src[8+j] & 2047) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 2047) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 2047) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 2047) << 31;
		des[8+j] = (src[20+j] & 2047) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 2047) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 2047) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[32+j] & 2047);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 2047) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 2047) << 22;
		des[16+j] = (src[40+j] & 2047) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 2047) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[48+j] & 2047) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 2047) << 23;
		des[20+j] = (src[52+j] & 2047) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[56+j] & 2047) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[60+j] & 2047) << 13;
	}
}

template<typename T>
void KAFOR_pack_16len_11bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 2047) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 2047) << 27;
		des[4+j] = (src[4+j] & 2047) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 2047) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 2047) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 2047) << 28;
		des[8+j] = (src[16+j] & 2047) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 2047) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 2047) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 2047) << 29;
		des[12+j] = (src[28+j] & 2047) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[32+j] & 2047) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 2047) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 2047) << 30;
		des[16+j] = (src[40+j] & 2047) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 2047) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[48+j] & 2047) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 2047) << 31;
		des[20+j] = (src[52+j] & 2047) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[56+j] & 2047) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[60+j] & 2047) << 21;
	}
}

template<typename T>
void KAFOR_pack_16len_11bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 2047) << 24;
		des[4+j] = (src[j] & 2047) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 2047) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 2047) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 2047) << 25;
		des[8+j] = (src[12+j] & 2047) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 2047) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 2047) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 2047) << 26;
		des[12+j] = (src[24+j] & 2047) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 2047) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[32+j] & 2047) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 2047) << 27;
		des[16+j] = (src[36+j] & 2047) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[40+j] & 2047) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 2047) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[48+j] & 2047) << 28;
		des[20+j] = (src[48+j] & 2047) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[52+j] & 2047) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[56+j] & 2047) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[60+j] & 2047) << 29;
		des[24+j] = (src[60+j] & 2047) >> 3;
	}
}

template<typename T>
void KAFOR_pack_16len_12bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 4095);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 4095) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 4095) << 24;
		des[4+j] = (src[8+j] & 4095) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 4095) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 4095) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 4095) << 28;
		des[8+j] = (src[20+j] & 4095) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 4095) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 4095) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[32+j] & 4095);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 4095) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 4095) << 24;
		des[16+j] = (src[40+j] & 4095) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 4095) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[48+j] & 4095) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 4095) << 28;
		des[20+j] = (src[52+j] & 4095) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[56+j] & 4095) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[60+j] & 4095) << 20;
	}
}

template<typename T>
void KAFOR_pack_16len_12bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 4095) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 4095) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[8+j] & 4095);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 4095) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 4095) << 24;
		des[8+j] = (src[16+j] & 4095) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 4095) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 4095) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 4095) << 28;
		des[12+j] = (src[28+j] & 4095) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[32+j] & 4095) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 4095) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[40+j] & 4095);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 4095) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[48+j] & 4095) << 24;
		des[20+j] = (src[48+j] & 4095) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[52+j] & 4095) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[56+j] & 4095) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[60+j] & 4095) << 28;
		des[24+j] = (src[60+j] & 4095) >> 4;
	}
}

template<typename T>
void KAFOR_pack_16len_12bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 4095) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 4095) << 28;
		des[4+j] = (src[4+j] & 4095) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 4095) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 4095) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[16+j] & 4095);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 4095) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 4095) << 24;
		des[12+j] = (src[24+j] & 4095) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 4095) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[32+j] & 4095) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 4095) << 28;
		des[16+j] = (src[36+j] & 4095) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[40+j] & 4095) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 4095) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[48+j] & 4095);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[52+j] & 4095) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[56+j] & 4095) << 24;
		des[24+j] = (src[56+j] & 4095) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[60+j] & 4095) << 4;
	}
}

template<typename T>
void KAFOR_pack_16len_12bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 4095) << 24;
		des[4+j] = (src[j] & 4095) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 4095) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 4095) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 4095) << 28;
		des[8+j] = (src[12+j] & 4095) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 4095) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 4095) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[24+j] & 4095);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 4095) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[32+j] & 4095) << 24;
		des[16+j] = (src[32+j] & 4095) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[36+j] & 4095) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[40+j] & 4095) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 4095) << 28;
		des[20+j] = (src[44+j] & 4095) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[48+j] & 4095) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[52+j] & 4095) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[56+j] & 4095);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[60+j] & 4095) << 12;
	}
}

template<typename T>
void KAFOR_pack_16len_13bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 8191);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 8191) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 8191) << 26;
		des[4+j] = (src[8+j] & 8191) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 8191) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 8191) << 20;
		des[8+j] = (src[16+j] & 8191) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 8191) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 8191) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 8191) << 27;
		des[12+j] = (src[28+j] & 8191) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[32+j] & 8191) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 8191) << 21;
		des[16+j] = (src[36+j] & 8191) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[40+j] & 8191) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 8191) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[48+j] & 8191) << 28;
		des[20+j] = (src[48+j] & 8191) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[52+j] & 8191) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[56+j] & 8191) << 22;
		des[24+j] = (src[56+j] & 8191) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[60+j] & 8191) << 3;
	}
}

template<typename T>
void KAFOR_pack_16len_13bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 8191) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 8191) << 21;
		des[4+j] = (src[4+j] & 8191) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 8191) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 8191) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 8191) << 28;
		des[8+j] = (src[16+j] & 8191) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 8191) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 8191) << 22;
		des[12+j] = (src[24+j] & 8191) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 8191) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[32+j] & 8191) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 8191) << 29;
		des[16+j] = (src[36+j] & 8191) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[40+j] & 8191) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 8191) << 23;
		des[20+j] = (src[44+j] & 8191) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[48+j] & 8191) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[52+j] & 8191) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[56+j] & 8191) << 30;
		des[24+j] = (src[56+j] & 8191) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[60+j] & 8191) << 11;
	}
}

template<typename T>
void KAFOR_pack_16len_13bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 8191) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 8191) << 29;
		des[4+j] = (src[4+j] & 8191) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 8191) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 8191) << 23;
		des[8+j] = (src[12+j] & 8191) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 8191) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 8191) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 8191) << 30;
		des[12+j] = (src[24+j] & 8191) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 8191) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[32+j] & 8191) << 24;
		des[16+j] = (src[32+j] & 8191) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[36+j] & 8191) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[40+j] & 8191) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 8191) << 31;
		des[20+j] = (src[44+j] & 8191) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[48+j] & 8191) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[52+j] & 8191) << 25;
		des[24+j] = (src[52+j] & 8191) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[56+j] & 8191) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[60+j] & 8191) << 19;
	}
}

template<typename T>
void KAFOR_pack_16len_13bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 8191) << 24;
		des[4+j] = (src[j] & 8191) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 8191) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 8191) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 8191) << 31;
		des[8+j] = (src[12+j] & 8191) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 8191) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 8191) << 25;
		des[12+j] = (src[20+j] & 8191) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 8191) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 8191) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[32+j] & 8191);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[36+j] & 8191) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[40+j] & 8191) << 26;
		des[20+j] = (src[40+j] & 8191) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[44+j] & 8191) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[48+j] & 8191) << 20;
		des[24+j] = (src[48+j] & 8191) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[52+j] & 8191) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[56+j] & 8191) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[60+j] & 8191) << 27;
		des[28+j] = (src[60+j] & 8191) >> 5;
	}
}

template<typename T>
void KAFOR_pack_16len_14bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 16383);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 16383) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 16383) << 28;
		des[4+j] = (src[8+j] & 16383) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 16383) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 16383) << 24;
		des[8+j] = (src[16+j] & 16383) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 16383) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 16383) << 20;
		des[12+j] = (src[24+j] & 16383) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 16383) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[32+j] & 16383) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 16383) << 30;
		des[16+j] = (src[36+j] & 16383) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[40+j] & 16383) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 16383) << 26;
		des[20+j] = (src[44+j] & 16383) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[48+j] & 16383) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[52+j] & 16383) << 22;
		des[24+j] = (src[52+j] & 16383) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[56+j] & 16383) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[60+j] & 16383) << 18;
	}
}

template<typename T>
void KAFOR_pack_16len_14bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 16383) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 16383) << 22;
		des[4+j] = (src[4+j] & 16383) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 16383) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 16383) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[16+j] & 16383);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 16383) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 16383) << 28;
		des[12+j] = (src[24+j] & 16383) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 16383) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[32+j] & 16383) << 24;
		des[16+j] = (src[32+j] & 16383) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[36+j] & 16383) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[40+j] & 16383) << 20;
		des[20+j] = (src[40+j] & 16383) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[44+j] & 16383) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[48+j] & 16383) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[52+j] & 16383) << 30;
		des[24+j] = (src[52+j] & 16383) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[56+j] & 16383) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[60+j] & 16383) << 26;
		des[28+j] = (src[60+j] & 16383) >> 6;
	}
}

template<typename T>
void KAFOR_pack_16len_14bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 16383) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 16383) << 30;
		des[4+j] = (src[4+j] & 16383) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 16383) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 16383) << 26;
		des[8+j] = (src[12+j] & 16383) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 16383) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 16383) << 22;
		des[12+j] = (src[20+j] & 16383) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 16383) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 16383) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[32+j] & 16383);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[36+j] & 16383) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[40+j] & 16383) << 28;
		des[20+j] = (src[40+j] & 16383) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[44+j] & 16383) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[48+j] & 16383) << 24;
		des[24+j] = (src[48+j] & 16383) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[52+j] & 16383) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[56+j] & 16383) << 20;
		des[28+j] = (src[56+j] & 16383) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[60+j] & 16383) << 2;
	}
}

template<typename T>
void KAFOR_pack_16len_14bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 16383) << 24;
		des[4+j] = (src[j] & 16383) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 16383) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 16383) << 20;
		des[8+j] = (src[8+j] & 16383) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 16383) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 16383) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 16383) << 30;
		des[12+j] = (src[20+j] & 16383) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 16383) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 16383) << 26;
		des[16+j] = (src[28+j] & 16383) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[32+j] & 16383) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[36+j] & 16383) << 22;
		des[20+j] = (src[36+j] & 16383) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[40+j] & 16383) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[44+j] & 16383) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[48+j] & 16383);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[52+j] & 16383) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[56+j] & 16383) << 28;
		des[28+j] = (src[56+j] & 16383) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[60+j] & 16383) << 10;
	}
}

template<typename T>
void KAFOR_pack_16len_15bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 32767);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 32767) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 32767) << 30;
		des[4+j] = (src[8+j] & 32767) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 32767) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 32767) << 28;
		des[8+j] = (src[16+j] & 32767) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 32767) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 32767) << 26;
		des[12+j] = (src[24+j] & 32767) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 32767) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[32+j] & 32767) << 24;
		des[16+j] = (src[32+j] & 32767) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[36+j] & 32767) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[40+j] & 32767) << 22;
		des[20+j] = (src[40+j] & 32767) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[44+j] & 32767) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[48+j] & 32767) << 20;
		des[24+j] = (src[48+j] & 32767) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[52+j] & 32767) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[56+j] & 32767) << 18;
		des[28+j] = (src[56+j] & 32767) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[60+j] & 32767) << 1;
	}
}

template<typename T>
void KAFOR_pack_16len_15bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 32767) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 32767) << 23;
		des[4+j] = (src[4+j] & 32767) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 32767) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 32767) << 21;
		des[8+j] = (src[12+j] & 32767) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 32767) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 32767) << 19;
		des[12+j] = (src[20+j] & 32767) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 32767) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 32767) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[32+j] & 32767);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[36+j] & 32767) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[40+j] & 32767) << 30;
		des[20+j] = (src[40+j] & 32767) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[44+j] & 32767) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[48+j] & 32767) << 28;
		des[24+j] = (src[48+j] & 32767) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[52+j] & 32767) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[56+j] & 32767) << 26;
		des[28+j] = (src[56+j] & 32767) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[60+j] & 32767) << 9;
	}
}

template<typename T>
void KAFOR_pack_16len_15bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 32767) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 32767) << 31;
		des[4+j] = (src[4+j] & 32767) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 32767) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 32767) << 29;
		des[8+j] = (src[12+j] & 32767) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 32767) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 32767) << 27;
		des[12+j] = (src[20+j] & 32767) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 32767) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 32767) << 25;
		des[16+j] = (src[28+j] & 32767) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[32+j] & 32767) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[36+j] & 32767) << 23;
		des[20+j] = (src[36+j] & 32767) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[40+j] & 32767) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[44+j] & 32767) << 21;
		des[24+j] = (src[44+j] & 32767) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[48+j] & 32767) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[52+j] & 32767) << 19;
		des[28+j] = (src[52+j] & 32767) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[56+j] & 32767) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[60+j] & 32767) << 17;
	}
}

template<typename T>
void KAFOR_pack_16len_15bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 32767) << 24;
		des[4+j] = (src[j] & 32767) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 32767) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 32767) << 22;
		des[8+j] = (src[8+j] & 32767) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 32767) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 32767) << 20;
		des[12+j] = (src[16+j] & 32767) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 32767) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 32767) << 18;
		des[16+j] = (src[24+j] & 32767) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 32767) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[32+j] & 32767) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[36+j] & 32767) << 31;
		des[20+j] = (src[36+j] & 32767) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[40+j] & 32767) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[44+j] & 32767) << 29;
		des[24+j] = (src[44+j] & 32767) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[48+j] & 32767) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[52+j] & 32767) << 27;
		des[28+j] = (src[52+j] & 32767) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[56+j] & 32767) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[60+j] & 32767) << 25;
		des[32+j] = (src[60+j] & 32767) >> 7;
	}
}

template<typename T>
void KAFOR_pack_16len_16bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[8+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[16+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[24+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[32+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[36+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[40+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[44+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[48+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[52+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[56+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[60+j] & 65535) << 16;
	}
}

template<typename T>
void KAFOR_pack_16len_16bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 65535) << 24;
		des[4+j] = (src[4+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 65535) << 24;
		des[8+j] = (src[12+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 65535) << 24;
		des[12+j] = (src[20+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 65535) << 24;
		des[16+j] = (src[28+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[32+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[36+j] & 65535) << 24;
		des[20+j] = (src[36+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[40+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[44+j] & 65535) << 24;
		des[24+j] = (src[44+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[48+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[52+j] & 65535) << 24;
		des[28+j] = (src[52+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[56+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[60+j] & 65535) << 24;
		des[32+j] = (src[60+j] & 65535) >> 8;
	}
}

template<typename T>
void KAFOR_pack_16len_16bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[12+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[20+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[28+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[32+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[36+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[40+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[44+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[48+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[52+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[56+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[60+j] & 65535);
	}
}

template<typename T>
void KAFOR_pack_16len_16bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 65535) << 24;
		des[4+j] = (src[j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 65535) << 24;
		des[8+j] = (src[8+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 65535) << 24;
		des[12+j] = (src[16+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 65535) << 24;
		des[16+j] = (src[24+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[32+j] & 65535) << 24;
		des[20+j] = (src[32+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[36+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[40+j] & 65535) << 24;
		des[24+j] = (src[40+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[44+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[48+j] & 65535) << 24;
		des[28+j] = (src[48+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[52+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[56+j] & 65535) << 24;
		des[32+j] = (src[56+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[60+j] & 65535) << 8;
	}
}

template<typename T>
void KAFOR_pack_16len_17bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 131071);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 131071) << 17;
		des[4+j] = (src[4+j] & 131071) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 131071) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 131071) << 19;
		des[8+j] = (src[12+j] & 131071) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 131071) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 131071) << 21;
		des[12+j] = (src[20+j] & 131071) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 131071) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 131071) << 23;
		des[16+j] = (src[28+j] & 131071) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[32+j] & 131071) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[36+j] & 131071) << 25;
		des[20+j] = (src[36+j] & 131071) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[40+j] & 131071) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[44+j] & 131071) << 27;
		des[24+j] = (src[44+j] & 131071) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[48+j] & 131071) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[52+j] & 131071) << 29;
		des[28+j] = (src[52+j] & 131071) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[56+j] & 131071) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[60+j] & 131071) << 31;
		des[32+j] = (src[60+j] & 131071) >> 1;
	}
}

template<typename T>
void KAFOR_pack_16len_17bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 131071) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 131071) << 25;
		des[4+j] = (src[4+j] & 131071) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 131071) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 131071) << 27;
		des[8+j] = (src[12+j] & 131071) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 131071) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 131071) << 29;
		des[12+j] = (src[20+j] & 131071) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 131071) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 131071) << 31;
		des[16+j] = (src[28+j] & 131071) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[32+j] & 131071) << 16;
		des[20+j] = (src[32+j] & 131071) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[36+j] & 131071) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[40+j] & 131071) << 18;
		des[24+j] = (src[40+j] & 131071) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[44+j] & 131071) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[48+j] & 131071) << 20;
		des[28+j] = (src[48+j] & 131071) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[52+j] & 131071) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[56+j] & 131071) << 22;
		des[32+j] = (src[56+j] & 131071) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[60+j] & 131071) << 7;
	}
}

template<typename T>
void KAFOR_pack_16len_17bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 131071) << 16;
		des[4+j] = (src[j] & 131071) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 131071) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 131071) << 18;
		des[8+j] = (src[8+j] & 131071) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 131071) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 131071) << 20;
		des[12+j] = (src[16+j] & 131071) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 131071) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 131071) << 22;
		des[16+j] = (src[24+j] & 131071) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 131071) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[32+j] & 131071) << 24;
		des[20+j] = (src[32+j] & 131071) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[36+j] & 131071) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[40+j] & 131071) << 26;
		des[24+j] = (src[40+j] & 131071) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[44+j] & 131071) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[48+j] & 131071) << 28;
		des[28+j] = (src[48+j] & 131071) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[52+j] & 131071) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[56+j] & 131071) << 30;
		des[32+j] = (src[56+j] & 131071) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[60+j] & 131071) << 15;
	}
}

template<typename T>
void KAFOR_pack_16len_17bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 131071) << 24;
		des[4+j] = (src[j] & 131071) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 131071) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 131071) << 26;
		des[8+j] = (src[8+j] & 131071) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 131071) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 131071) << 28;
		des[12+j] = (src[16+j] & 131071) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 131071) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 131071) << 30;
		des[16+j] = (src[24+j] & 131071) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 131071) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[32+j] & 131071);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[36+j] & 131071) << 17;
		des[24+j] = (src[36+j] & 131071) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[40+j] & 131071) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[44+j] & 131071) << 19;
		des[28+j] = (src[44+j] & 131071) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[48+j] & 131071) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[52+j] & 131071) << 21;
		des[32+j] = (src[52+j] & 131071) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[56+j] & 131071) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[60+j] & 131071) << 23;
		des[36+j] = (src[60+j] & 131071) >> 9;
	}
}

template<typename T>
void KAFOR_pack_16len_18bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 262143);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 262143) << 18;
		des[4+j] = (src[4+j] & 262143) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 262143) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 262143) << 22;
		des[8+j] = (src[12+j] & 262143) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 262143) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 262143) << 26;
		des[12+j] = (src[20+j] & 262143) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 262143) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 262143) << 30;
		des[16+j] = (src[28+j] & 262143) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[32+j] & 262143) << 16;
		des[20+j] = (src[32+j] & 262143) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[36+j] & 262143) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[40+j] & 262143) << 20;
		des[24+j] = (src[40+j] & 262143) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[44+j] & 262143) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[48+j] & 262143) << 24;
		des[28+j] = (src[48+j] & 262143) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[52+j] & 262143) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[56+j] & 262143) << 28;
		des[32+j] = (src[56+j] & 262143) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[60+j] & 262143) << 14;
	}
}

template<typename T>
void KAFOR_pack_16len_18bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 262143) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 262143) << 26;
		des[4+j] = (src[4+j] & 262143) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 262143) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 262143) << 30;
		des[8+j] = (src[12+j] & 262143) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 262143) << 16;
		des[12+j] = (src[16+j] & 262143) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 262143) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 262143) << 20;
		des[16+j] = (src[24+j] & 262143) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 262143) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[32+j] & 262143) << 24;
		des[20+j] = (src[32+j] & 262143) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[36+j] & 262143) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[40+j] & 262143) << 28;
		des[24+j] = (src[40+j] & 262143) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[44+j] & 262143) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[48+j] & 262143);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[52+j] & 262143) << 18;
		des[32+j] = (src[52+j] & 262143) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[56+j] & 262143) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[60+j] & 262143) << 22;
		des[36+j] = (src[60+j] & 262143) >> 10;
	}
}

template<typename T>
void KAFOR_pack_16len_18bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 262143) << 16;
		des[4+j] = (src[j] & 262143) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 262143) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 262143) << 20;
		des[8+j] = (src[8+j] & 262143) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 262143) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 262143) << 24;
		des[12+j] = (src[16+j] & 262143) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 262143) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 262143) << 28;
		des[16+j] = (src[24+j] & 262143) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 262143) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[32+j] & 262143);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[36+j] & 262143) << 18;
		des[24+j] = (src[36+j] & 262143) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[40+j] & 262143) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[44+j] & 262143) << 22;
		des[28+j] = (src[44+j] & 262143) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[48+j] & 262143) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[52+j] & 262143) << 26;
		des[32+j] = (src[52+j] & 262143) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[56+j] & 262143) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[60+j] & 262143) << 30;
		des[36+j] = (src[60+j] & 262143) >> 2;
	}
}

template<typename T>
void KAFOR_pack_16len_18bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 262143) << 24;
		des[4+j] = (src[j] & 262143) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 262143) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 262143) << 28;
		des[8+j] = (src[8+j] & 262143) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 262143) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[16+j] & 262143);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 262143) << 18;
		des[16+j] = (src[20+j] & 262143) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 262143) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 262143) << 22;
		des[20+j] = (src[28+j] & 262143) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[32+j] & 262143) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[36+j] & 262143) << 26;
		des[24+j] = (src[36+j] & 262143) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[40+j] & 262143) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[44+j] & 262143) << 30;
		des[28+j] = (src[44+j] & 262143) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[48+j] & 262143) << 16;
		des[32+j] = (src[48+j] & 262143) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[52+j] & 262143) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[56+j] & 262143) << 20;
		des[36+j] = (src[56+j] & 262143) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[60+j] & 262143) << 6;
	}
}

template<typename T>
void KAFOR_pack_16len_19bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 524287);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 524287) << 19;
		des[4+j] = (src[4+j] & 524287) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 524287) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 524287) << 25;
		des[8+j] = (src[12+j] & 524287) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 524287) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 524287) << 31;
		des[12+j] = (src[20+j] & 524287) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 524287) << 18;
		des[16+j] = (src[24+j] & 524287) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 524287) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[32+j] & 524287) << 24;
		des[20+j] = (src[32+j] & 524287) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[36+j] & 524287) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[40+j] & 524287) << 30;
		des[24+j] = (src[40+j] & 524287) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[44+j] & 524287) << 17;
		des[28+j] = (src[44+j] & 524287) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[48+j] & 524287) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[52+j] & 524287) << 23;
		des[32+j] = (src[52+j] & 524287) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[56+j] & 524287) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[60+j] & 524287) << 29;
		des[36+j] = (src[60+j] & 524287) >> 3;
	}
}

template<typename T>
void KAFOR_pack_16len_19bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 524287) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 524287) << 27;
		des[4+j] = (src[4+j] & 524287) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 524287) << 14;
		des[8+j] = (src[8+j] & 524287) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 524287) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 524287) << 20;
		des[12+j] = (src[16+j] & 524287) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 524287) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 524287) << 26;
		des[16+j] = (src[24+j] & 524287) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 524287) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[32+j] & 524287);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[36+j] & 524287) << 19;
		des[24+j] = (src[36+j] & 524287) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[40+j] & 524287) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[44+j] & 524287) << 25;
		des[28+j] = (src[44+j] & 524287) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[48+j] & 524287) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[52+j] & 524287) << 31;
		des[32+j] = (src[52+j] & 524287) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[56+j] & 524287) << 18;
		des[36+j] = (src[56+j] & 524287) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[60+j] & 524287) << 5;
	}
}

template<typename T>
void KAFOR_pack_16len_19bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 524287) << 16;
		des[4+j] = (src[j] & 524287) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 524287) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 524287) << 22;
		des[8+j] = (src[8+j] & 524287) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 524287) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 524287) << 28;
		des[12+j] = (src[16+j] & 524287) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 524287) << 15;
		des[16+j] = (src[20+j] & 524287) >> 17;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 524287) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 524287) << 21;
		des[20+j] = (src[28+j] & 524287) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[32+j] & 524287) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[36+j] & 524287) << 27;
		des[24+j] = (src[36+j] & 524287) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[40+j] & 524287) << 14;
		des[28+j] = (src[40+j] & 524287) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[44+j] & 524287) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[48+j] & 524287) << 20;
		des[32+j] = (src[48+j] & 524287) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[52+j] & 524287) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[56+j] & 524287) << 26;
		des[36+j] = (src[56+j] & 524287) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[60+j] & 524287) << 13;
	}
}

template<typename T>
void KAFOR_pack_16len_19bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 524287) << 24;
		des[4+j] = (src[j] & 524287) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 524287) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 524287) << 30;
		des[8+j] = (src[8+j] & 524287) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 524287) << 17;
		des[12+j] = (src[12+j] & 524287) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 524287) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 524287) << 23;
		des[16+j] = (src[20+j] & 524287) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 524287) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 524287) << 29;
		des[20+j] = (src[28+j] & 524287) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[32+j] & 524287) << 16;
		des[24+j] = (src[32+j] & 524287) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[36+j] & 524287) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[40+j] & 524287) << 22;
		des[28+j] = (src[40+j] & 524287) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[44+j] & 524287) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[48+j] & 524287) << 28;
		des[32+j] = (src[48+j] & 524287) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[52+j] & 524287) << 15;
		des[36+j] = (src[52+j] & 524287) >> 17;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[56+j] & 524287) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[60+j] & 524287) << 21;
		des[40+j] = (src[60+j] & 524287) >> 11;
	}
}

template<typename T>
void KAFOR_pack_16len_20bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 1048575);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 1048575) << 20;
		des[4+j] = (src[4+j] & 1048575) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 1048575) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 1048575) << 28;
		des[8+j] = (src[12+j] & 1048575) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 1048575) << 16;
		des[12+j] = (src[16+j] & 1048575) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 1048575) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 1048575) << 24;
		des[16+j] = (src[24+j] & 1048575) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 1048575) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[32+j] & 1048575);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[36+j] & 1048575) << 20;
		des[24+j] = (src[36+j] & 1048575) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[40+j] & 1048575) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[44+j] & 1048575) << 28;
		des[28+j] = (src[44+j] & 1048575) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[48+j] & 1048575) << 16;
		des[32+j] = (src[48+j] & 1048575) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[52+j] & 1048575) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[56+j] & 1048575) << 24;
		des[36+j] = (src[56+j] & 1048575) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[60+j] & 1048575) << 12;
	}
}

template<typename T>
void KAFOR_pack_16len_20bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 1048575) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 1048575) << 28;
		des[4+j] = (src[4+j] & 1048575) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 1048575) << 16;
		des[8+j] = (src[8+j] & 1048575) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 1048575) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 1048575) << 24;
		des[12+j] = (src[16+j] & 1048575) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 1048575) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[24+j] & 1048575);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 1048575) << 20;
		des[20+j] = (src[28+j] & 1048575) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[32+j] & 1048575) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[36+j] & 1048575) << 28;
		des[24+j] = (src[36+j] & 1048575) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[40+j] & 1048575) << 16;
		des[28+j] = (src[40+j] & 1048575) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[44+j] & 1048575) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[48+j] & 1048575) << 24;
		des[32+j] = (src[48+j] & 1048575) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[52+j] & 1048575) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[56+j] & 1048575);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[60+j] & 1048575) << 20;
		des[40+j] = (src[60+j] & 1048575) >> 12;
	}
}

template<typename T>
void KAFOR_pack_16len_20bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 1048575) << 16;
		des[4+j] = (src[j] & 1048575) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 1048575) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 1048575) << 24;
		des[8+j] = (src[8+j] & 1048575) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 1048575) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[16+j] & 1048575);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 1048575) << 20;
		des[16+j] = (src[20+j] & 1048575) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 1048575) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 1048575) << 28;
		des[20+j] = (src[28+j] & 1048575) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[32+j] & 1048575) << 16;
		des[24+j] = (src[32+j] & 1048575) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[36+j] & 1048575) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[40+j] & 1048575) << 24;
		des[28+j] = (src[40+j] & 1048575) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[44+j] & 1048575) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[48+j] & 1048575);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[52+j] & 1048575) << 20;
		des[36+j] = (src[52+j] & 1048575) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[56+j] & 1048575) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[60+j] & 1048575) << 28;
		des[40+j] = (src[60+j] & 1048575) >> 4;
	}
}

template<typename T>
void KAFOR_pack_16len_20bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 1048575) << 24;
		des[4+j] = (src[j] & 1048575) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 1048575) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] & 1048575);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 1048575) << 20;
		des[12+j] = (src[12+j] & 1048575) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 1048575) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 1048575) << 28;
		des[16+j] = (src[20+j] & 1048575) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 1048575) << 16;
		des[20+j] = (src[24+j] & 1048575) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 1048575) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[32+j] & 1048575) << 24;
		des[24+j] = (src[32+j] & 1048575) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[36+j] & 1048575) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[40+j] & 1048575);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[44+j] & 1048575) << 20;
		des[32+j] = (src[44+j] & 1048575) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[48+j] & 1048575) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[52+j] & 1048575) << 28;
		des[36+j] = (src[52+j] & 1048575) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[56+j] & 1048575) << 16;
		des[40+j] = (src[56+j] & 1048575) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[60+j] & 1048575) << 4;
	}
}

template<typename T>
void KAFOR_pack_16len_21bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 2097151);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 2097151) << 21;
		des[4+j] = (src[4+j] & 2097151) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 2097151) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 2097151) << 31;
		des[8+j] = (src[12+j] & 2097151) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 2097151) << 20;
		des[12+j] = (src[16+j] & 2097151) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 2097151) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 2097151) << 30;
		des[16+j] = (src[24+j] & 2097151) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 2097151) << 19;
		des[20+j] = (src[28+j] & 2097151) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[32+j] & 2097151) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[36+j] & 2097151) << 29;
		des[24+j] = (src[36+j] & 2097151) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[40+j] & 2097151) << 18;
		des[28+j] = (src[40+j] & 2097151) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[44+j] & 2097151) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[48+j] & 2097151) << 28;
		des[32+j] = (src[48+j] & 2097151) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[52+j] & 2097151) << 17;
		des[36+j] = (src[52+j] & 2097151) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[56+j] & 2097151) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[60+j] & 2097151) << 27;
		des[40+j] = (src[60+j] & 2097151) >> 5;
	}
}

template<typename T>
void KAFOR_pack_16len_21bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 2097151) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 2097151) << 29;
		des[4+j] = (src[4+j] & 2097151) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 2097151) << 18;
		des[8+j] = (src[8+j] & 2097151) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 2097151) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 2097151) << 28;
		des[12+j] = (src[16+j] & 2097151) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 2097151) << 17;
		des[16+j] = (src[20+j] & 2097151) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 2097151) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 2097151) << 27;
		des[20+j] = (src[28+j] & 2097151) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[32+j] & 2097151) << 16;
		des[24+j] = (src[32+j] & 2097151) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[36+j] & 2097151) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[40+j] & 2097151) << 26;
		des[28+j] = (src[40+j] & 2097151) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[44+j] & 2097151) << 15;
		des[32+j] = (src[44+j] & 2097151) >> 17;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[48+j] & 2097151) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[52+j] & 2097151) << 25;
		des[36+j] = (src[52+j] & 2097151) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[56+j] & 2097151) << 14;
		des[40+j] = (src[56+j] & 2097151) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[60+j] & 2097151) << 3;
	}
}

template<typename T>
void KAFOR_pack_16len_21bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 2097151) << 16;
		des[4+j] = (src[j] & 2097151) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 2097151) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 2097151) << 26;
		des[8+j] = (src[8+j] & 2097151) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 2097151) << 15;
		des[12+j] = (src[12+j] & 2097151) >> 17;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 2097151) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 2097151) << 25;
		des[16+j] = (src[20+j] & 2097151) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 2097151) << 14;
		des[20+j] = (src[24+j] & 2097151) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 2097151) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[32+j] & 2097151) << 24;
		des[24+j] = (src[32+j] & 2097151) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[36+j] & 2097151) << 13;
		des[28+j] = (src[36+j] & 2097151) >> 19;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[40+j] & 2097151) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[44+j] & 2097151) << 23;
		des[32+j] = (src[44+j] & 2097151) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[48+j] & 2097151) << 12;
		des[36+j] = (src[48+j] & 2097151) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[52+j] & 2097151) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[56+j] & 2097151) << 22;
		des[40+j] = (src[56+j] & 2097151) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[60+j] & 2097151) << 11;
	}
}

template<typename T>
void KAFOR_pack_16len_21bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 2097151) << 24;
		des[4+j] = (src[j] & 2097151) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 2097151) << 13;
		des[8+j] = (src[4+j] & 2097151) >> 19;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 2097151) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 2097151) << 23;
		des[12+j] = (src[12+j] & 2097151) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 2097151) << 12;
		des[16+j] = (src[16+j] & 2097151) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 2097151) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 2097151) << 22;
		des[20+j] = (src[24+j] & 2097151) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 2097151) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[32+j] & 2097151);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[36+j] & 2097151) << 21;
		des[28+j] = (src[36+j] & 2097151) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[40+j] & 2097151) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[44+j] & 2097151) << 31;
		des[32+j] = (src[44+j] & 2097151) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[48+j] & 2097151) << 20;
		des[36+j] = (src[48+j] & 2097151) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[52+j] & 2097151) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[56+j] & 2097151) << 30;
		des[40+j] = (src[56+j] & 2097151) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[60+j] & 2097151) << 19;
		des[44+j] = (src[60+j] & 2097151) >> 13;
	}
}

template<typename T>
void KAFOR_pack_16len_22bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 4194303);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 4194303) << 22;
		des[4+j] = (src[4+j] & 4194303) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 4194303) << 12;
		des[8+j] = (src[8+j] & 4194303) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 4194303) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 4194303) << 24;
		des[12+j] = (src[16+j] & 4194303) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 4194303) << 14;
		des[16+j] = (src[20+j] & 4194303) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 4194303) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 4194303) << 26;
		des[20+j] = (src[28+j] & 4194303) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[32+j] & 4194303) << 16;
		des[24+j] = (src[32+j] & 4194303) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[36+j] & 4194303) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[40+j] & 4194303) << 28;
		des[28+j] = (src[40+j] & 4194303) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[44+j] & 4194303) << 18;
		des[32+j] = (src[44+j] & 4194303) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[48+j] & 4194303) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[52+j] & 4194303) << 30;
		des[36+j] = (src[52+j] & 4194303) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[56+j] & 4194303) << 20;
		des[40+j] = (src[56+j] & 4194303) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[60+j] & 4194303) << 10;
	}
}

template<typename T>
void KAFOR_pack_16len_22bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 4194303) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 4194303) << 30;
		des[4+j] = (src[4+j] & 4194303) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 4194303) << 20;
		des[8+j] = (src[8+j] & 4194303) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 4194303) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[16+j] & 4194303);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 4194303) << 22;
		des[16+j] = (src[20+j] & 4194303) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 4194303) << 12;
		des[20+j] = (src[24+j] & 4194303) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 4194303) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[32+j] & 4194303) << 24;
		des[24+j] = (src[32+j] & 4194303) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[36+j] & 4194303) << 14;
		des[28+j] = (src[36+j] & 4194303) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[40+j] & 4194303) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[44+j] & 4194303) << 26;
		des[32+j] = (src[44+j] & 4194303) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[48+j] & 4194303) << 16;
		des[36+j] = (src[48+j] & 4194303) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[52+j] & 4194303) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[56+j] & 4194303) << 28;
		des[40+j] = (src[56+j] & 4194303) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[60+j] & 4194303) << 18;
		des[44+j] = (src[60+j] & 4194303) >> 14;
	}
}

template<typename T>
void KAFOR_pack_16len_22bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 4194303) << 16;
		des[4+j] = (src[j] & 4194303) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 4194303) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 4194303) << 28;
		des[8+j] = (src[8+j] & 4194303) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 4194303) << 18;
		des[12+j] = (src[12+j] & 4194303) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 4194303) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 4194303) << 30;
		des[16+j] = (src[20+j] & 4194303) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 4194303) << 20;
		des[20+j] = (src[24+j] & 4194303) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 4194303) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[32+j] & 4194303);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[36+j] & 4194303) << 22;
		des[28+j] = (src[36+j] & 4194303) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[40+j] & 4194303) << 12;
		des[32+j] = (src[40+j] & 4194303) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[44+j] & 4194303) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[48+j] & 4194303) << 24;
		des[36+j] = (src[48+j] & 4194303) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[52+j] & 4194303) << 14;
		des[40+j] = (src[52+j] & 4194303) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[56+j] & 4194303) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[60+j] & 4194303) << 26;
		des[44+j] = (src[60+j] & 4194303) >> 6;
	}
}

template<typename T>
void KAFOR_pack_16len_22bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 4194303) << 24;
		des[4+j] = (src[j] & 4194303) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 4194303) << 14;
		des[8+j] = (src[4+j] & 4194303) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 4194303) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 4194303) << 26;
		des[12+j] = (src[12+j] & 4194303) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 4194303) << 16;
		des[16+j] = (src[16+j] & 4194303) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 4194303) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 4194303) << 28;
		des[20+j] = (src[24+j] & 4194303) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 4194303) << 18;
		des[24+j] = (src[28+j] & 4194303) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[32+j] & 4194303) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[36+j] & 4194303) << 30;
		des[28+j] = (src[36+j] & 4194303) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[40+j] & 4194303) << 20;
		des[32+j] = (src[40+j] & 4194303) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[44+j] & 4194303) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[48+j] & 4194303);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[52+j] & 4194303) << 22;
		des[40+j] = (src[52+j] & 4194303) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[56+j] & 4194303) << 12;
		des[44+j] = (src[56+j] & 4194303) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[60+j] & 4194303) << 2;
	}
}

template<typename T>
void KAFOR_pack_16len_23bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 8388607);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 8388607) << 23;
		des[4+j] = (src[4+j] & 8388607) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 8388607) << 14;
		des[8+j] = (src[8+j] & 8388607) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 8388607) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 8388607) << 28;
		des[12+j] = (src[16+j] & 8388607) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 8388607) << 19;
		des[16+j] = (src[20+j] & 8388607) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 8388607) << 10;
		des[20+j] = (src[24+j] & 8388607) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 8388607) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[32+j] & 8388607) << 24;
		des[24+j] = (src[32+j] & 8388607) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[36+j] & 8388607) << 15;
		des[28+j] = (src[36+j] & 8388607) >> 17;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[40+j] & 8388607) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[44+j] & 8388607) << 29;
		des[32+j] = (src[44+j] & 8388607) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[48+j] & 8388607) << 20;
		des[36+j] = (src[48+j] & 8388607) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[52+j] & 8388607) << 11;
		des[40+j] = (src[52+j] & 8388607) >> 21;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[56+j] & 8388607) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[60+j] & 8388607) << 25;
		des[44+j] = (src[60+j] & 8388607) >> 7;
	}
}

template<typename T>
void KAFOR_pack_16len_23bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 8388607) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 8388607) << 31;
		des[4+j] = (src[4+j] & 8388607) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 8388607) << 22;
		des[8+j] = (src[8+j] & 8388607) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 8388607) << 13;
		des[12+j] = (src[12+j] & 8388607) >> 19;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 8388607) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 8388607) << 27;
		des[16+j] = (src[20+j] & 8388607) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 8388607) << 18;
		des[20+j] = (src[24+j] & 8388607) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 8388607) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[32+j] & 8388607);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[36+j] & 8388607) << 23;
		des[28+j] = (src[36+j] & 8388607) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[40+j] & 8388607) << 14;
		des[32+j] = (src[40+j] & 8388607) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[44+j] & 8388607) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[48+j] & 8388607) << 28;
		des[36+j] = (src[48+j] & 8388607) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[52+j] & 8388607) << 19;
		des[40+j] = (src[52+j] & 8388607) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[56+j] & 8388607) << 10;
		des[44+j] = (src[56+j] & 8388607) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[60+j] & 8388607) << 1;
	}
}

template<typename T>
void KAFOR_pack_16len_23bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 8388607) << 16;
		des[4+j] = (src[j] & 8388607) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 8388607) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 8388607) << 30;
		des[8+j] = (src[8+j] & 8388607) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 8388607) << 21;
		des[12+j] = (src[12+j] & 8388607) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 8388607) << 12;
		des[16+j] = (src[16+j] & 8388607) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 8388607) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 8388607) << 26;
		des[20+j] = (src[24+j] & 8388607) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 8388607) << 17;
		des[24+j] = (src[28+j] & 8388607) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[32+j] & 8388607) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[36+j] & 8388607) << 31;
		des[28+j] = (src[36+j] & 8388607) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[40+j] & 8388607) << 22;
		des[32+j] = (src[40+j] & 8388607) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[44+j] & 8388607) << 13;
		des[36+j] = (src[44+j] & 8388607) >> 19;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[48+j] & 8388607) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[52+j] & 8388607) << 27;
		des[40+j] = (src[52+j] & 8388607) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[56+j] & 8388607) << 18;
		des[44+j] = (src[56+j] & 8388607) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[60+j] & 8388607) << 9;
	}
}

template<typename T>
void KAFOR_pack_16len_23bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 8388607) << 24;
		des[4+j] = (src[j] & 8388607) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 8388607) << 15;
		des[8+j] = (src[4+j] & 8388607) >> 17;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 8388607) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 8388607) << 29;
		des[12+j] = (src[12+j] & 8388607) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 8388607) << 20;
		des[16+j] = (src[16+j] & 8388607) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 8388607) << 11;
		des[20+j] = (src[20+j] & 8388607) >> 21;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 8388607) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 8388607) << 25;
		des[24+j] = (src[28+j] & 8388607) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[32+j] & 8388607) << 16;
		des[28+j] = (src[32+j] & 8388607) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[36+j] & 8388607) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[40+j] & 8388607) << 30;
		des[32+j] = (src[40+j] & 8388607) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[44+j] & 8388607) << 21;
		des[36+j] = (src[44+j] & 8388607) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[48+j] & 8388607) << 12;
		des[40+j] = (src[48+j] & 8388607) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[52+j] & 8388607) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[56+j] & 8388607) << 26;
		des[44+j] = (src[56+j] & 8388607) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[60+j] & 8388607) << 17;
		des[48+j] = (src[60+j] & 8388607) >> 15;
	}
}

template<typename T>
void KAFOR_pack_16len_24bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 16777215) << 24;
		des[4+j] = (src[4+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 16777215) << 16;
		des[8+j] = (src[8+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[16+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 16777215) << 24;
		des[16+j] = (src[20+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 16777215) << 16;
		des[20+j] = (src[24+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[32+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[36+j] & 16777215) << 24;
		des[28+j] = (src[36+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[40+j] & 16777215) << 16;
		des[32+j] = (src[40+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[44+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[48+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[52+j] & 16777215) << 24;
		des[40+j] = (src[52+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[56+j] & 16777215) << 16;
		des[44+j] = (src[56+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[60+j] & 16777215) << 8;
	}
}

template<typename T>
void KAFOR_pack_16len_24bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 16777215) << 24;
		des[8+j] = (src[8+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 16777215) << 16;
		des[12+j] = (src[12+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[20+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 16777215) << 24;
		des[20+j] = (src[24+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 16777215) << 16;
		des[24+j] = (src[28+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[32+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[36+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[40+j] & 16777215) << 24;
		des[32+j] = (src[40+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[44+j] & 16777215) << 16;
		des[36+j] = (src[44+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[48+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[52+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[56+j] & 16777215) << 24;
		des[44+j] = (src[56+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[60+j] & 16777215) << 16;
		des[48+j] = (src[60+j] & 16777215) >> 16;
	}
}

template<typename T>
void KAFOR_pack_16len_24bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 16777215) << 16;
		des[4+j] = (src[j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 16777215) << 24;
		des[12+j] = (src[12+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 16777215) << 16;
		des[16+j] = (src[16+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[24+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 16777215) << 24;
		des[24+j] = (src[28+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[32+j] & 16777215) << 16;
		des[28+j] = (src[32+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[36+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[40+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[44+j] & 16777215) << 24;
		des[36+j] = (src[44+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[48+j] & 16777215) << 16;
		des[40+j] = (src[48+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[52+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[56+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[60+j] & 16777215) << 24;
		des[48+j] = (src[60+j] & 16777215) >> 8;
	}
}

template<typename T>
void KAFOR_pack_16len_24bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 16777215) << 24;
		des[4+j] = (src[j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 16777215) << 16;
		des[8+j] = (src[4+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 16777215) << 24;
		des[16+j] = (src[16+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 16777215) << 16;
		des[20+j] = (src[20+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[28+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[32+j] & 16777215) << 24;
		des[28+j] = (src[32+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[36+j] & 16777215) << 16;
		des[32+j] = (src[36+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[40+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[44+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[48+j] & 16777215) << 24;
		des[40+j] = (src[48+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[52+j] & 16777215) << 16;
		des[44+j] = (src[52+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[56+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[60+j] & 16777215);
	}
}

template<typename T>
void KAFOR_pack_16len_25bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 33554431);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 33554431) << 25;
		des[4+j] = (src[4+j] & 33554431) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 33554431) << 18;
		des[8+j] = (src[8+j] & 33554431) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 33554431) << 11;
		des[12+j] = (src[12+j] & 33554431) >> 21;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 33554431) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 33554431) << 29;
		des[16+j] = (src[20+j] & 33554431) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 33554431) << 22;
		des[20+j] = (src[24+j] & 33554431) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 33554431) << 15;
		des[24+j] = (src[28+j] & 33554431) >> 17;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[32+j] & 33554431) << 8;
		des[28+j] = (src[32+j] & 33554431) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[36+j] & 33554431) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[40+j] & 33554431) << 26;
		des[32+j] = (src[40+j] & 33554431) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[44+j] & 33554431) << 19;
		des[36+j] = (src[44+j] & 33554431) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[48+j] & 33554431) << 12;
		des[40+j] = (src[48+j] & 33554431) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[52+j] & 33554431) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[56+j] & 33554431) << 30;
		des[44+j] = (src[56+j] & 33554431) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[60+j] & 33554431) << 23;
		des[48+j] = (src[60+j] & 33554431) >> 9;
	}
}

template<typename T>
void KAFOR_pack_16len_25bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 33554431) << 8;
		des[4+j] = (src[j] & 33554431) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 33554431) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 33554431) << 26;
		des[8+j] = (src[8+j] & 33554431) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 33554431) << 19;
		des[12+j] = (src[12+j] & 33554431) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 33554431) << 12;
		des[16+j] = (src[16+j] & 33554431) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 33554431) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 33554431) << 30;
		des[20+j] = (src[24+j] & 33554431) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 33554431) << 23;
		des[24+j] = (src[28+j] & 33554431) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[32+j] & 33554431) << 16;
		des[28+j] = (src[32+j] & 33554431) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[36+j] & 33554431) << 9;
		des[32+j] = (src[36+j] & 33554431) >> 23;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[40+j] & 33554431) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[44+j] & 33554431) << 27;
		des[36+j] = (src[44+j] & 33554431) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[48+j] & 33554431) << 20;
		des[40+j] = (src[48+j] & 33554431) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[52+j] & 33554431) << 13;
		des[44+j] = (src[52+j] & 33554431) >> 19;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[56+j] & 33554431) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[60+j] & 33554431) << 31;
		des[48+j] = (src[60+j] & 33554431) >> 1;
	}
}

template<typename T>
void KAFOR_pack_16len_25bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 33554431) << 16;
		des[4+j] = (src[j] & 33554431) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 33554431) << 9;
		des[8+j] = (src[4+j] & 33554431) >> 23;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 33554431) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 33554431) << 27;
		des[12+j] = (src[12+j] & 33554431) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 33554431) << 20;
		des[16+j] = (src[16+j] & 33554431) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 33554431) << 13;
		des[20+j] = (src[20+j] & 33554431) >> 19;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 33554431) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 33554431) << 31;
		des[24+j] = (src[28+j] & 33554431) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[32+j] & 33554431) << 24;
		des[28+j] = (src[32+j] & 33554431) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[36+j] & 33554431) << 17;
		des[32+j] = (src[36+j] & 33554431) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[40+j] & 33554431) << 10;
		des[36+j] = (src[40+j] & 33554431) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[44+j] & 33554431) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[48+j] & 33554431) << 28;
		des[40+j] = (src[48+j] & 33554431) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[52+j] & 33554431) << 21;
		des[44+j] = (src[52+j] & 33554431) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[56+j] & 33554431) << 14;
		des[48+j] = (src[56+j] & 33554431) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[60+j] & 33554431) << 7;
	}
}

template<typename T>
void KAFOR_pack_16len_25bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 33554431) << 24;
		des[4+j] = (src[j] & 33554431) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 33554431) << 17;
		des[8+j] = (src[4+j] & 33554431) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 33554431) << 10;
		des[12+j] = (src[8+j] & 33554431) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j] & 33554431) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 33554431) << 28;
		des[16+j] = (src[16+j] & 33554431) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 33554431) << 21;
		des[20+j] = (src[20+j] & 33554431) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 33554431) << 14;
		des[24+j] = (src[24+j] & 33554431) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[28+j] & 33554431) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[32+j] & 33554431);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[36+j] & 33554431) << 25;
		des[32+j] = (src[36+j] & 33554431) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[40+j] & 33554431) << 18;
		des[36+j] = (src[40+j] & 33554431) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[44+j] & 33554431) << 11;
		des[40+j] = (src[44+j] & 33554431) >> 21;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[48+j] & 33554431) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[52+j] & 33554431) << 29;
		des[44+j] = (src[52+j] & 33554431) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[56+j] & 33554431) << 22;
		des[48+j] = (src[56+j] & 33554431) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[60+j] & 33554431) << 15;
		des[52+j] = (src[60+j] & 33554431) >> 17;
	}
}

template<typename T>
void KAFOR_pack_16len_26bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 67108863);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 67108863) << 26;
		des[4+j] = (src[4+j] & 67108863) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 67108863) << 20;
		des[8+j] = (src[8+j] & 67108863) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 67108863) << 14;
		des[12+j] = (src[12+j] & 67108863) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 67108863) << 8;
		des[16+j] = (src[16+j] & 67108863) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 67108863) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 67108863) << 28;
		des[20+j] = (src[24+j] & 67108863) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 67108863) << 22;
		des[24+j] = (src[28+j] & 67108863) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[32+j] & 67108863) << 16;
		des[28+j] = (src[32+j] & 67108863) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[36+j] & 67108863) << 10;
		des[32+j] = (src[36+j] & 67108863) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[40+j] & 67108863) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[44+j] & 67108863) << 30;
		des[36+j] = (src[44+j] & 67108863) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[48+j] & 67108863) << 24;
		des[40+j] = (src[48+j] & 67108863) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[52+j] & 67108863) << 18;
		des[44+j] = (src[52+j] & 67108863) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[56+j] & 67108863) << 12;
		des[48+j] = (src[56+j] & 67108863) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[60+j] & 67108863) << 6;
	}
}

template<typename T>
void KAFOR_pack_16len_26bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 67108863) << 8;
		des[4+j] = (src[j] & 67108863) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 67108863) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 67108863) << 28;
		des[8+j] = (src[8+j] & 67108863) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 67108863) << 22;
		des[12+j] = (src[12+j] & 67108863) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 67108863) << 16;
		des[16+j] = (src[16+j] & 67108863) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 67108863) << 10;
		des[20+j] = (src[20+j] & 67108863) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 67108863) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 67108863) << 30;
		des[24+j] = (src[28+j] & 67108863) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[32+j] & 67108863) << 24;
		des[28+j] = (src[32+j] & 67108863) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[36+j] & 67108863) << 18;
		des[32+j] = (src[36+j] & 67108863) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[40+j] & 67108863) << 12;
		des[36+j] = (src[40+j] & 67108863) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[44+j] & 67108863) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[48+j] & 67108863);
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[52+j] & 67108863) << 26;
		des[44+j] = (src[52+j] & 67108863) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[56+j] & 67108863) << 20;
		des[48+j] = (src[56+j] & 67108863) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[60+j] & 67108863) << 14;
		des[52+j] = (src[60+j] & 67108863) >> 18;
	}
}

template<typename T>
void KAFOR_pack_16len_26bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 67108863) << 16;
		des[4+j] = (src[j] & 67108863) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 67108863) << 10;
		des[8+j] = (src[4+j] & 67108863) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 67108863) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 67108863) << 30;
		des[12+j] = (src[12+j] & 67108863) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 67108863) << 24;
		des[16+j] = (src[16+j] & 67108863) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 67108863) << 18;
		des[20+j] = (src[20+j] & 67108863) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 67108863) << 12;
		des[24+j] = (src[24+j] & 67108863) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[28+j] & 67108863) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[32+j] & 67108863);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[36+j] & 67108863) << 26;
		des[32+j] = (src[36+j] & 67108863) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[40+j] & 67108863) << 20;
		des[36+j] = (src[40+j] & 67108863) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[44+j] & 67108863) << 14;
		des[40+j] = (src[44+j] & 67108863) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[48+j] & 67108863) << 8;
		des[44+j] = (src[48+j] & 67108863) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[52+j] & 67108863) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[56+j] & 67108863) << 28;
		des[48+j] = (src[56+j] & 67108863) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[60+j] & 67108863) << 22;
		des[52+j] = (src[60+j] & 67108863) >> 10;
	}
}

template<typename T>
void KAFOR_pack_16len_26bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 67108863) << 24;
		des[4+j] = (src[j] & 67108863) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 67108863) << 18;
		des[8+j] = (src[4+j] & 67108863) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 67108863) << 12;
		des[12+j] = (src[8+j] & 67108863) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j] & 67108863) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j] & 67108863);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 67108863) << 26;
		des[20+j] = (src[20+j] & 67108863) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 67108863) << 20;
		des[24+j] = (src[24+j] & 67108863) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[28+j] & 67108863) << 14;
		des[28+j] = (src[28+j] & 67108863) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[32+j] & 67108863) << 8;
		des[32+j] = (src[32+j] & 67108863) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[36+j] & 67108863) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[40+j] & 67108863) << 28;
		des[36+j] = (src[40+j] & 67108863) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[44+j] & 67108863) << 22;
		des[40+j] = (src[44+j] & 67108863) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[48+j] & 67108863) << 16;
		des[44+j] = (src[48+j] & 67108863) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[52+j] & 67108863) << 10;
		des[48+j] = (src[52+j] & 67108863) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[56+j] & 67108863) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[60+j] & 67108863) << 30;
		des[52+j] = (src[60+j] & 67108863) >> 2;
	}
}

template<typename T>
void KAFOR_pack_16len_27bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 134217727);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 134217727) << 27;
		des[4+j] = (src[4+j] & 134217727) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 134217727) << 22;
		des[8+j] = (src[8+j] & 134217727) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 134217727) << 17;
		des[12+j] = (src[12+j] & 134217727) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 134217727) << 12;
		des[16+j] = (src[16+j] & 134217727) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 134217727) << 7;
		des[20+j] = (src[20+j] & 134217727) >> 25;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 134217727) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 134217727) << 29;
		des[24+j] = (src[28+j] & 134217727) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[32+j] & 134217727) << 24;
		des[28+j] = (src[32+j] & 134217727) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[36+j] & 134217727) << 19;
		des[32+j] = (src[36+j] & 134217727) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[40+j] & 134217727) << 14;
		des[36+j] = (src[40+j] & 134217727) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[44+j] & 134217727) << 9;
		des[40+j] = (src[44+j] & 134217727) >> 23;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[48+j] & 134217727) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[52+j] & 134217727) << 31;
		des[44+j] = (src[52+j] & 134217727) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[56+j] & 134217727) << 26;
		des[48+j] = (src[56+j] & 134217727) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[60+j] & 134217727) << 21;
		des[52+j] = (src[60+j] & 134217727) >> 11;
	}
}

template<typename T>
void KAFOR_pack_16len_27bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 134217727) << 8;
		des[4+j] = (src[j] & 134217727) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 134217727) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 134217727) << 30;
		des[8+j] = (src[8+j] & 134217727) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 134217727) << 25;
		des[12+j] = (src[12+j] & 134217727) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 134217727) << 20;
		des[16+j] = (src[16+j] & 134217727) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 134217727) << 15;
		des[20+j] = (src[20+j] & 134217727) >> 17;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 134217727) << 10;
		des[24+j] = (src[24+j] & 134217727) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[28+j] & 134217727) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[32+j] & 134217727);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[36+j] & 134217727) << 27;
		des[32+j] = (src[36+j] & 134217727) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[40+j] & 134217727) << 22;
		des[36+j] = (src[40+j] & 134217727) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[44+j] & 134217727) << 17;
		des[40+j] = (src[44+j] & 134217727) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[48+j] & 134217727) << 12;
		des[44+j] = (src[48+j] & 134217727) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[52+j] & 134217727) << 7;
		des[48+j] = (src[52+j] & 134217727) >> 25;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[56+j] & 134217727) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[60+j] & 134217727) << 29;
		des[52+j] = (src[60+j] & 134217727) >> 3;
	}
}

template<typename T>
void KAFOR_pack_16len_27bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 134217727) << 16;
		des[4+j] = (src[j] & 134217727) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 134217727) << 11;
		des[8+j] = (src[4+j] & 134217727) >> 21;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 134217727) << 6;
		des[12+j] = (src[8+j] & 134217727) >> 26;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j] & 134217727) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 134217727) << 28;
		des[16+j] = (src[16+j] & 134217727) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 134217727) << 23;
		des[20+j] = (src[20+j] & 134217727) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 134217727) << 18;
		des[24+j] = (src[24+j] & 134217727) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[28+j] & 134217727) << 13;
		des[28+j] = (src[28+j] & 134217727) >> 19;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[32+j] & 134217727) << 8;
		des[32+j] = (src[32+j] & 134217727) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[36+j] & 134217727) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[40+j] & 134217727) << 30;
		des[36+j] = (src[40+j] & 134217727) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[44+j] & 134217727) << 25;
		des[40+j] = (src[44+j] & 134217727) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[48+j] & 134217727) << 20;
		des[44+j] = (src[48+j] & 134217727) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[52+j] & 134217727) << 15;
		des[48+j] = (src[52+j] & 134217727) >> 17;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[56+j] & 134217727) << 10;
		des[52+j] = (src[56+j] & 134217727) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[60+j] & 134217727) << 5;
	}
}

template<typename T>
void KAFOR_pack_16len_27bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 134217727) << 24;
		des[4+j] = (src[j] & 134217727) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 134217727) << 19;
		des[8+j] = (src[4+j] & 134217727) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 134217727) << 14;
		des[12+j] = (src[8+j] & 134217727) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j] & 134217727) << 9;
		des[16+j] = (src[12+j] & 134217727) >> 23;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[16+j] & 134217727) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 134217727) << 31;
		des[20+j] = (src[20+j] & 134217727) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 134217727) << 26;
		des[24+j] = (src[24+j] & 134217727) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[28+j] & 134217727) << 21;
		des[28+j] = (src[28+j] & 134217727) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[32+j] & 134217727) << 16;
		des[32+j] = (src[32+j] & 134217727) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[36+j] & 134217727) << 11;
		des[36+j] = (src[36+j] & 134217727) >> 21;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[40+j] & 134217727) << 6;
		des[40+j] = (src[40+j] & 134217727) >> 26;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[44+j] & 134217727) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[48+j] & 134217727) << 28;
		des[44+j] = (src[48+j] & 134217727) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[52+j] & 134217727) << 23;
		des[48+j] = (src[52+j] & 134217727) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[56+j] & 134217727) << 18;
		des[52+j] = (src[56+j] & 134217727) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[60+j] & 134217727) << 13;
		des[56+j] = (src[60+j] & 134217727) >> 19;
	}
}

template<typename T>
void KAFOR_pack_16len_28bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 268435455);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 268435455) << 28;
		des[4+j] = (src[4+j] & 268435455) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 268435455) << 24;
		des[8+j] = (src[8+j] & 268435455) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 268435455) << 20;
		des[12+j] = (src[12+j] & 268435455) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 268435455) << 16;
		des[16+j] = (src[16+j] & 268435455) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 268435455) << 12;
		des[20+j] = (src[20+j] & 268435455) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 268435455) << 8;
		des[24+j] = (src[24+j] & 268435455) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[28+j] & 268435455) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[32+j] & 268435455);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[36+j] & 268435455) << 28;
		des[32+j] = (src[36+j] & 268435455) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[40+j] & 268435455) << 24;
		des[36+j] = (src[40+j] & 268435455) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[44+j] & 268435455) << 20;
		des[40+j] = (src[44+j] & 268435455) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[48+j] & 268435455) << 16;
		des[44+j] = (src[48+j] & 268435455) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[52+j] & 268435455) << 12;
		des[48+j] = (src[52+j] & 268435455) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[56+j] & 268435455) << 8;
		des[52+j] = (src[56+j] & 268435455) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[60+j] & 268435455) << 4;
	}
}

template<typename T>
void KAFOR_pack_16len_28bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 268435455) << 8;
		des[4+j] = (src[j] & 268435455) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 268435455) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] & 268435455);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 268435455) << 28;
		des[12+j] = (src[12+j] & 268435455) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 268435455) << 24;
		des[16+j] = (src[16+j] & 268435455) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 268435455) << 20;
		des[20+j] = (src[20+j] & 268435455) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 268435455) << 16;
		des[24+j] = (src[24+j] & 268435455) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[28+j] & 268435455) << 12;
		des[28+j] = (src[28+j] & 268435455) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[32+j] & 268435455) << 8;
		des[32+j] = (src[32+j] & 268435455) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[36+j] & 268435455) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[40+j] & 268435455);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[44+j] & 268435455) << 28;
		des[40+j] = (src[44+j] & 268435455) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[48+j] & 268435455) << 24;
		des[44+j] = (src[48+j] & 268435455) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[52+j] & 268435455) << 20;
		des[48+j] = (src[52+j] & 268435455) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[56+j] & 268435455) << 16;
		des[52+j] = (src[56+j] & 268435455) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[60+j] & 268435455) << 12;
		des[56+j] = (src[60+j] & 268435455) >> 20;
	}
}

template<typename T>
void KAFOR_pack_16len_28bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 268435455) << 16;
		des[4+j] = (src[j] & 268435455) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 268435455) << 12;
		des[8+j] = (src[4+j] & 268435455) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 268435455) << 8;
		des[12+j] = (src[8+j] & 268435455) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j] & 268435455) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j] & 268435455);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 268435455) << 28;
		des[20+j] = (src[20+j] & 268435455) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 268435455) << 24;
		des[24+j] = (src[24+j] & 268435455) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[28+j] & 268435455) << 20;
		des[28+j] = (src[28+j] & 268435455) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[32+j] & 268435455) << 16;
		des[32+j] = (src[32+j] & 268435455) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[36+j] & 268435455) << 12;
		des[36+j] = (src[36+j] & 268435455) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[40+j] & 268435455) << 8;
		des[40+j] = (src[40+j] & 268435455) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[44+j] & 268435455) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[48+j] & 268435455);
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[52+j] & 268435455) << 28;
		des[48+j] = (src[52+j] & 268435455) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[56+j] & 268435455) << 24;
		des[52+j] = (src[56+j] & 268435455) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[60+j] & 268435455) << 20;
		des[56+j] = (src[60+j] & 268435455) >> 12;
	}
}

template<typename T>
void KAFOR_pack_16len_28bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 268435455) << 24;
		des[4+j] = (src[j] & 268435455) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 268435455) << 20;
		des[8+j] = (src[4+j] & 268435455) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 268435455) << 16;
		des[12+j] = (src[8+j] & 268435455) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j] & 268435455) << 12;
		des[16+j] = (src[12+j] & 268435455) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[16+j] & 268435455) << 8;
		des[20+j] = (src[16+j] & 268435455) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[20+j] & 268435455) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[24+j] & 268435455);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[28+j] & 268435455) << 28;
		des[28+j] = (src[28+j] & 268435455) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[32+j] & 268435455) << 24;
		des[32+j] = (src[32+j] & 268435455) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[36+j] & 268435455) << 20;
		des[36+j] = (src[36+j] & 268435455) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[40+j] & 268435455) << 16;
		des[40+j] = (src[40+j] & 268435455) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[44+j] & 268435455) << 12;
		des[44+j] = (src[44+j] & 268435455) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[48+j] & 268435455) << 8;
		des[48+j] = (src[48+j] & 268435455) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[52+j] & 268435455) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[56+j] & 268435455);
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[60+j] & 268435455) << 28;
		des[56+j] = (src[60+j] & 268435455) >> 4;
	}
}

template<typename T>
void KAFOR_pack_16len_29bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 536870911);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 536870911) << 29;
		des[4+j] = (src[4+j] & 536870911) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 536870911) << 26;
		des[8+j] = (src[8+j] & 536870911) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 536870911) << 23;
		des[12+j] = (src[12+j] & 536870911) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 536870911) << 20;
		des[16+j] = (src[16+j] & 536870911) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 536870911) << 17;
		des[20+j] = (src[20+j] & 536870911) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 536870911) << 14;
		des[24+j] = (src[24+j] & 536870911) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[28+j] & 536870911) << 11;
		des[28+j] = (src[28+j] & 536870911) >> 21;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[32+j] & 536870911) << 8;
		des[32+j] = (src[32+j] & 536870911) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[36+j] & 536870911) << 5;
		des[36+j] = (src[36+j] & 536870911) >> 27;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[40+j] & 536870911) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[44+j] & 536870911) << 31;
		des[40+j] = (src[44+j] & 536870911) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[48+j] & 536870911) << 28;
		des[44+j] = (src[48+j] & 536870911) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[52+j] & 536870911) << 25;
		des[48+j] = (src[52+j] & 536870911) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[56+j] & 536870911) << 22;
		des[52+j] = (src[56+j] & 536870911) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[60+j] & 536870911) << 19;
		des[56+j] = (src[60+j] & 536870911) >> 13;
	}
}

template<typename T>
void KAFOR_pack_16len_29bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 536870911) << 8;
		des[4+j] = (src[j] & 536870911) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 536870911) << 5;
		des[8+j] = (src[4+j] & 536870911) >> 27;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 536870911) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 536870911) << 31;
		des[12+j] = (src[12+j] & 536870911) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 536870911) << 28;
		des[16+j] = (src[16+j] & 536870911) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 536870911) << 25;
		des[20+j] = (src[20+j] & 536870911) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 536870911) << 22;
		des[24+j] = (src[24+j] & 536870911) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[28+j] & 536870911) << 19;
		des[28+j] = (src[28+j] & 536870911) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[32+j] & 536870911) << 16;
		des[32+j] = (src[32+j] & 536870911) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[36+j] & 536870911) << 13;
		des[36+j] = (src[36+j] & 536870911) >> 19;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[40+j] & 536870911) << 10;
		des[40+j] = (src[40+j] & 536870911) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[44+j] & 536870911) << 7;
		des[44+j] = (src[44+j] & 536870911) >> 25;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[48+j] & 536870911) << 4;
		des[48+j] = (src[48+j] & 536870911) >> 28;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[52+j] & 536870911) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[56+j] & 536870911) << 30;
		des[52+j] = (src[56+j] & 536870911) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[60+j] & 536870911) << 27;
		des[56+j] = (src[60+j] & 536870911) >> 5;
	}
}

template<typename T>
void KAFOR_pack_16len_29bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 536870911) << 16;
		des[4+j] = (src[j] & 536870911) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 536870911) << 13;
		des[8+j] = (src[4+j] & 536870911) >> 19;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 536870911) << 10;
		des[12+j] = (src[8+j] & 536870911) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j] & 536870911) << 7;
		des[16+j] = (src[12+j] & 536870911) >> 25;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[16+j] & 536870911) << 4;
		des[20+j] = (src[16+j] & 536870911) >> 28;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[20+j] & 536870911) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 536870911) << 30;
		des[24+j] = (src[24+j] & 536870911) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[28+j] & 536870911) << 27;
		des[28+j] = (src[28+j] & 536870911) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[32+j] & 536870911) << 24;
		des[32+j] = (src[32+j] & 536870911) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[36+j] & 536870911) << 21;
		des[36+j] = (src[36+j] & 536870911) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[40+j] & 536870911) << 18;
		des[40+j] = (src[40+j] & 536870911) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[44+j] & 536870911) << 15;
		des[44+j] = (src[44+j] & 536870911) >> 17;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[48+j] & 536870911) << 12;
		des[48+j] = (src[48+j] & 536870911) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[52+j] & 536870911) << 9;
		des[52+j] = (src[52+j] & 536870911) >> 23;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[56+j] & 536870911) << 6;
		des[56+j] = (src[56+j] & 536870911) >> 26;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[60+j] & 536870911) << 3;
	}
}

template<typename T>
void KAFOR_pack_16len_29bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 536870911) << 24;
		des[4+j] = (src[j] & 536870911) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 536870911) << 21;
		des[8+j] = (src[4+j] & 536870911) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 536870911) << 18;
		des[12+j] = (src[8+j] & 536870911) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j] & 536870911) << 15;
		des[16+j] = (src[12+j] & 536870911) >> 17;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[16+j] & 536870911) << 12;
		des[20+j] = (src[16+j] & 536870911) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[20+j] & 536870911) << 9;
		des[24+j] = (src[20+j] & 536870911) >> 23;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[24+j] & 536870911) << 6;
		des[28+j] = (src[24+j] & 536870911) >> 26;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[28+j] & 536870911) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[32+j] & 536870911);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[36+j] & 536870911) << 29;
		des[36+j] = (src[36+j] & 536870911) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[40+j] & 536870911) << 26;
		des[40+j] = (src[40+j] & 536870911) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[44+j] & 536870911) << 23;
		des[44+j] = (src[44+j] & 536870911) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[48+j] & 536870911) << 20;
		des[48+j] = (src[48+j] & 536870911) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[52+j] & 536870911) << 17;
		des[52+j] = (src[52+j] & 536870911) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[56+j] & 536870911) << 14;
		des[56+j] = (src[56+j] & 536870911) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[60+j] & 536870911) << 11;
		des[60+j] = (src[60+j] & 536870911) >> 21;
	}
}

template<typename T>
void KAFOR_pack_16len_30bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 1073741823);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 1073741823) << 30;
		des[4+j] = (src[4+j] & 1073741823) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 1073741823) << 28;
		des[8+j] = (src[8+j] & 1073741823) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 1073741823) << 26;
		des[12+j] = (src[12+j] & 1073741823) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 1073741823) << 24;
		des[16+j] = (src[16+j] & 1073741823) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 1073741823) << 22;
		des[20+j] = (src[20+j] & 1073741823) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 1073741823) << 20;
		des[24+j] = (src[24+j] & 1073741823) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[28+j] & 1073741823) << 18;
		des[28+j] = (src[28+j] & 1073741823) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[32+j] & 1073741823) << 16;
		des[32+j] = (src[32+j] & 1073741823) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[36+j] & 1073741823) << 14;
		des[36+j] = (src[36+j] & 1073741823) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[40+j] & 1073741823) << 12;
		des[40+j] = (src[40+j] & 1073741823) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[44+j] & 1073741823) << 10;
		des[44+j] = (src[44+j] & 1073741823) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[48+j] & 1073741823) << 8;
		des[48+j] = (src[48+j] & 1073741823) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[52+j] & 1073741823) << 6;
		des[52+j] = (src[52+j] & 1073741823) >> 26;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[56+j] & 1073741823) << 4;
		des[56+j] = (src[56+j] & 1073741823) >> 28;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[60+j] & 1073741823) << 2;
	}
}

template<typename T>
void KAFOR_pack_16len_30bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 1073741823) << 8;
		des[4+j] = (src[j] & 1073741823) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 1073741823) << 6;
		des[8+j] = (src[4+j] & 1073741823) >> 26;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 1073741823) << 4;
		des[12+j] = (src[8+j] & 1073741823) >> 28;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j] & 1073741823) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j] & 1073741823);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 1073741823) << 30;
		des[20+j] = (src[20+j] & 1073741823) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 1073741823) << 28;
		des[24+j] = (src[24+j] & 1073741823) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[28+j] & 1073741823) << 26;
		des[28+j] = (src[28+j] & 1073741823) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[32+j] & 1073741823) << 24;
		des[32+j] = (src[32+j] & 1073741823) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[36+j] & 1073741823) << 22;
		des[36+j] = (src[36+j] & 1073741823) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[40+j] & 1073741823) << 20;
		des[40+j] = (src[40+j] & 1073741823) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[44+j] & 1073741823) << 18;
		des[44+j] = (src[44+j] & 1073741823) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[48+j] & 1073741823) << 16;
		des[48+j] = (src[48+j] & 1073741823) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[52+j] & 1073741823) << 14;
		des[52+j] = (src[52+j] & 1073741823) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[56+j] & 1073741823) << 12;
		des[56+j] = (src[56+j] & 1073741823) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[60+j] & 1073741823) << 10;
		des[60+j] = (src[60+j] & 1073741823) >> 22;
	}
}

template<typename T>
void KAFOR_pack_16len_30bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 1073741823) << 16;
		des[4+j] = (src[j] & 1073741823) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 1073741823) << 14;
		des[8+j] = (src[4+j] & 1073741823) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 1073741823) << 12;
		des[12+j] = (src[8+j] & 1073741823) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j] & 1073741823) << 10;
		des[16+j] = (src[12+j] & 1073741823) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[16+j] & 1073741823) << 8;
		des[20+j] = (src[16+j] & 1073741823) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[20+j] & 1073741823) << 6;
		des[24+j] = (src[20+j] & 1073741823) >> 26;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[24+j] & 1073741823) << 4;
		des[28+j] = (src[24+j] & 1073741823) >> 28;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[28+j] & 1073741823) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[32+j] & 1073741823);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[36+j] & 1073741823) << 30;
		des[36+j] = (src[36+j] & 1073741823) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[40+j] & 1073741823) << 28;
		des[40+j] = (src[40+j] & 1073741823) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[44+j] & 1073741823) << 26;
		des[44+j] = (src[44+j] & 1073741823) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[48+j] & 1073741823) << 24;
		des[48+j] = (src[48+j] & 1073741823) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[52+j] & 1073741823) << 22;
		des[52+j] = (src[52+j] & 1073741823) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[56+j] & 1073741823) << 20;
		des[56+j] = (src[56+j] & 1073741823) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[60+j] & 1073741823) << 18;
		des[60+j] = (src[60+j] & 1073741823) >> 14;
	}
}

template<typename T>
void KAFOR_pack_16len_30bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 1073741823) << 24;
		des[4+j] = (src[j] & 1073741823) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 1073741823) << 22;
		des[8+j] = (src[4+j] & 1073741823) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 1073741823) << 20;
		des[12+j] = (src[8+j] & 1073741823) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j] & 1073741823) << 18;
		des[16+j] = (src[12+j] & 1073741823) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[16+j] & 1073741823) << 16;
		des[20+j] = (src[16+j] & 1073741823) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[20+j] & 1073741823) << 14;
		des[24+j] = (src[20+j] & 1073741823) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[24+j] & 1073741823) << 12;
		des[28+j] = (src[24+j] & 1073741823) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[28+j] & 1073741823) << 10;
		des[32+j] = (src[28+j] & 1073741823) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[32+j] & 1073741823) << 8;
		des[36+j] = (src[32+j] & 1073741823) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[36+j] & 1073741823) << 6;
		des[40+j] = (src[36+j] & 1073741823) >> 26;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[40+j] & 1073741823) << 4;
		des[44+j] = (src[40+j] & 1073741823) >> 28;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[44+j] & 1073741823) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[48+j] & 1073741823);
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[52+j] & 1073741823) << 30;
		des[52+j] = (src[52+j] & 1073741823) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[56+j] & 1073741823) << 28;
		des[56+j] = (src[56+j] & 1073741823) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[60+j] & 1073741823) << 26;
		des[60+j] = (src[60+j] & 1073741823) >> 6;
	}
}

template<typename T>
void KAFOR_pack_16len_31bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 2147483647);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 2147483647) << 31;
		des[4+j] = (src[4+j] & 2147483647) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 2147483647) << 30;
		des[8+j] = (src[8+j] & 2147483647) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 2147483647) << 29;
		des[12+j] = (src[12+j] & 2147483647) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 2147483647) << 28;
		des[16+j] = (src[16+j] & 2147483647) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 2147483647) << 27;
		des[20+j] = (src[20+j] & 2147483647) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 2147483647) << 26;
		des[24+j] = (src[24+j] & 2147483647) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[28+j] & 2147483647) << 25;
		des[28+j] = (src[28+j] & 2147483647) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[32+j] & 2147483647) << 24;
		des[32+j] = (src[32+j] & 2147483647) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[36+j] & 2147483647) << 23;
		des[36+j] = (src[36+j] & 2147483647) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[40+j] & 2147483647) << 22;
		des[40+j] = (src[40+j] & 2147483647) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[44+j] & 2147483647) << 21;
		des[44+j] = (src[44+j] & 2147483647) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[48+j] & 2147483647) << 20;
		des[48+j] = (src[48+j] & 2147483647) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[52+j] & 2147483647) << 19;
		des[52+j] = (src[52+j] & 2147483647) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[56+j] & 2147483647) << 18;
		des[56+j] = (src[56+j] & 2147483647) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[60+j] & 2147483647) << 17;
		des[60+j] = (src[60+j] & 2147483647) >> 15;
	}
}

template<typename T>
void KAFOR_pack_16len_31bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 2147483647) << 8;
		des[4+j] = (src[j] & 2147483647) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 2147483647) << 7;
		des[8+j] = (src[4+j] & 2147483647) >> 25;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 2147483647) << 6;
		des[12+j] = (src[8+j] & 2147483647) >> 26;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j] & 2147483647) << 5;
		des[16+j] = (src[12+j] & 2147483647) >> 27;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[16+j] & 2147483647) << 4;
		des[20+j] = (src[16+j] & 2147483647) >> 28;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[20+j] & 2147483647) << 3;
		des[24+j] = (src[20+j] & 2147483647) >> 29;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[24+j] & 2147483647) << 2;
		des[28+j] = (src[24+j] & 2147483647) >> 30;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[28+j] & 2147483647) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[32+j] & 2147483647);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[36+j] & 2147483647) << 31;
		des[36+j] = (src[36+j] & 2147483647) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[40+j] & 2147483647) << 30;
		des[40+j] = (src[40+j] & 2147483647) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[44+j] & 2147483647) << 29;
		des[44+j] = (src[44+j] & 2147483647) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[48+j] & 2147483647) << 28;
		des[48+j] = (src[48+j] & 2147483647) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[52+j] & 2147483647) << 27;
		des[52+j] = (src[52+j] & 2147483647) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[56+j] & 2147483647) << 26;
		des[56+j] = (src[56+j] & 2147483647) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[60+j] & 2147483647) << 25;
		des[60+j] = (src[60+j] & 2147483647) >> 7;
	}
}

template<typename T>
void KAFOR_pack_16len_31bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 2147483647) << 16;
		des[4+j] = (src[j] & 2147483647) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 2147483647) << 15;
		des[8+j] = (src[4+j] & 2147483647) >> 17;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 2147483647) << 14;
		des[12+j] = (src[8+j] & 2147483647) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j] & 2147483647) << 13;
		des[16+j] = (src[12+j] & 2147483647) >> 19;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[16+j] & 2147483647) << 12;
		des[20+j] = (src[16+j] & 2147483647) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[20+j] & 2147483647) << 11;
		des[24+j] = (src[20+j] & 2147483647) >> 21;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[24+j] & 2147483647) << 10;
		des[28+j] = (src[24+j] & 2147483647) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[28+j] & 2147483647) << 9;
		des[32+j] = (src[28+j] & 2147483647) >> 23;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[32+j] & 2147483647) << 8;
		des[36+j] = (src[32+j] & 2147483647) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[36+j] & 2147483647) << 7;
		des[40+j] = (src[36+j] & 2147483647) >> 25;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[40+j] & 2147483647) << 6;
		des[44+j] = (src[40+j] & 2147483647) >> 26;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[44+j] & 2147483647) << 5;
		des[48+j] = (src[44+j] & 2147483647) >> 27;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[48+j] & 2147483647) << 4;
		des[52+j] = (src[48+j] & 2147483647) >> 28;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[52+j] & 2147483647) << 3;
		des[56+j] = (src[52+j] & 2147483647) >> 29;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[56+j] & 2147483647) << 2;
		des[60+j] = (src[56+j] & 2147483647) >> 30;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[60+j] & 2147483647) << 1;
	}
}

template<typename T>
void KAFOR_pack_16len_31bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 2147483647) << 24;
		des[4+j] = (src[j] & 2147483647) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 2147483647) << 23;
		des[8+j] = (src[4+j] & 2147483647) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 2147483647) << 22;
		des[12+j] = (src[8+j] & 2147483647) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j] & 2147483647) << 21;
		des[16+j] = (src[12+j] & 2147483647) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[16+j] & 2147483647) << 20;
		des[20+j] = (src[16+j] & 2147483647) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[20+j] & 2147483647) << 19;
		des[24+j] = (src[20+j] & 2147483647) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[24+j] & 2147483647) << 18;
		des[28+j] = (src[24+j] & 2147483647) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[28+j] & 2147483647) << 17;
		des[32+j] = (src[28+j] & 2147483647) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[32+j] & 2147483647) << 16;
		des[36+j] = (src[32+j] & 2147483647) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[36+j] & 2147483647) << 15;
		des[40+j] = (src[36+j] & 2147483647) >> 17;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[40+j] & 2147483647) << 14;
		des[44+j] = (src[40+j] & 2147483647) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[44+j] & 2147483647) << 13;
		des[48+j] = (src[44+j] & 2147483647) >> 19;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[48+j] & 2147483647) << 12;
		des[52+j] = (src[48+j] & 2147483647) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[52+j] & 2147483647) << 11;
		des[56+j] = (src[52+j] & 2147483647) >> 21;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[56+j] & 2147483647) << 10;
		des[60+j] = (src[56+j] & 2147483647) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[60+j] & 2147483647) << 9;
		des[64+j] = (src[60+j] & 2147483647) >> 23;
	}
}

template<typename T>
void KAFOR_pack_16len_32bw_0offset(T * des, const uint32_t *src) {
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
void KAFOR_pack_16len_32bw_8offset(T * des, const uint32_t *src) {
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
void KAFOR_pack_16len_32bw_16offset(T * des, const uint32_t *src) {
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
void KAFOR_pack_16len_32bw_24offset(T * des, const uint32_t *src) {
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
void KAFOR_pack_32len_1bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 1);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 1) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 1) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 1) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 1) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 1) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 1) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 1) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[32+j] & 1) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[36+j] & 1) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[40+j] & 1) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[44+j] & 1) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[48+j] & 1) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[52+j] & 1) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[56+j] & 1) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[60+j] & 1) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[64+j] & 1) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[68+j] & 1) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[72+j] & 1) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[76+j] & 1) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[80+j] & 1) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[84+j] & 1) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[88+j] & 1) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[92+j] & 1) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[96+j] & 1) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[100+j] & 1) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[104+j] & 1) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[108+j] & 1) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[112+j] & 1) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[116+j] & 1) << 29;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[120+j] & 1) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[124+j] & 1) << 31;
	}
}

template<typename T>
void KAFOR_pack_32len_1bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 1) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 1) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 1) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 1) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 1) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 1) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 1) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 1) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[32+j] & 1) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[36+j] & 1) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[40+j] & 1) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[44+j] & 1) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[48+j] & 1) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[52+j] & 1) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[56+j] & 1) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[60+j] & 1) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[64+j] & 1) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[68+j] & 1) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[72+j] & 1) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[76+j] & 1) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[80+j] & 1) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[84+j] & 1) << 29;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[88+j] & 1) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[92+j] & 1) << 31;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[96+j] & 1);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[100+j] & 1) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[104+j] & 1) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[108+j] & 1) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[112+j] & 1) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[116+j] & 1) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[120+j] & 1) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[124+j] & 1) << 7;
	}
}

template<typename T>
void KAFOR_pack_32len_1bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 1) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 1) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 1) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 1) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 1) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 1) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 1) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 1) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[32+j] & 1) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[36+j] & 1) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[40+j] & 1) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[44+j] & 1) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[48+j] & 1) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[52+j] & 1) << 29;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[56+j] & 1) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[60+j] & 1) << 31;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[64+j] & 1);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[68+j] & 1) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[72+j] & 1) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[76+j] & 1) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[80+j] & 1) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[84+j] & 1) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[88+j] & 1) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[92+j] & 1) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[96+j] & 1) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[100+j] & 1) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[104+j] & 1) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[108+j] & 1) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[112+j] & 1) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[116+j] & 1) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[120+j] & 1) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[124+j] & 1) << 15;
	}
}

template<typename T>
void KAFOR_pack_32len_1bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 1) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 1) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 1) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 1) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 1) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 1) << 29;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 1) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 1) << 31;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[32+j] & 1);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 1) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 1) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 1) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 1) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 1) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[56+j] & 1) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[60+j] & 1) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[64+j] & 1) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[68+j] & 1) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[72+j] & 1) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[76+j] & 1) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[80+j] & 1) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[84+j] & 1) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[88+j] & 1) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[92+j] & 1) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[96+j] & 1) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[100+j] & 1) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[104+j] & 1) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[108+j] & 1) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[112+j] & 1) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[116+j] & 1) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[120+j] & 1) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[124+j] & 1) << 23;
	}
}

template<typename T>
void KAFOR_pack_32len_2bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 3);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 3) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 3) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 3) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 3) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 3) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 3) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[32+j] & 3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[36+j] & 3) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[40+j] & 3) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[44+j] & 3) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[48+j] & 3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[52+j] & 3) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[56+j] & 3) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[60+j] & 3) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[64+j] & 3);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[68+j] & 3) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[72+j] & 3) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[76+j] & 3) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[80+j] & 3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[84+j] & 3) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[88+j] & 3) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[92+j] & 3) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[96+j] & 3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[100+j] & 3) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[104+j] & 3) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[108+j] & 3) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[112+j] & 3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[116+j] & 3) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[120+j] & 3) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[124+j] & 3) << 30;
	}
}

template<typename T>
void KAFOR_pack_32len_2bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 3) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 3) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 3) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 3) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 3) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 3) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[32+j] & 3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[36+j] & 3) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[40+j] & 3) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[44+j] & 3) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[48+j] & 3);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 3) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[56+j] & 3) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[60+j] & 3) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[64+j] & 3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[68+j] & 3) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[72+j] & 3) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[76+j] & 3) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[80+j] & 3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[84+j] & 3) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[88+j] & 3) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[92+j] & 3) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[96+j] & 3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[100+j] & 3) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[104+j] & 3) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[108+j] & 3) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[112+j] & 3);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[116+j] & 3) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[120+j] & 3) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[124+j] & 3) << 6;
	}
}

template<typename T>
void KAFOR_pack_32len_2bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 3) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 3) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 3) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 3) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 3) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 3) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[32+j] & 3);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 3) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 3) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 3) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 3) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[56+j] & 3) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[60+j] & 3) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[64+j] & 3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[68+j] & 3) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[72+j] & 3) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[76+j] & 3) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[80+j] & 3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[84+j] & 3) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[88+j] & 3) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[92+j] & 3) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[96+j] & 3);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[100+j] & 3) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[104+j] & 3) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[108+j] & 3) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[112+j] & 3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[116+j] & 3) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[120+j] & 3) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[124+j] & 3) << 14;
	}
}

template<typename T>
void KAFOR_pack_32len_2bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 3) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 3) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 3) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[16+j] & 3);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 3) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 3) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 3) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 3) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 3) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 3) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 3) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[56+j] & 3) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[60+j] & 3) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[64+j] & 3) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[68+j] & 3) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[72+j] & 3) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[76+j] & 3) << 30;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[80+j] & 3);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[84+j] & 3) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[88+j] & 3) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[92+j] & 3) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[96+j] & 3) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[100+j] & 3) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[104+j] & 3) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[108+j] & 3) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[112+j] & 3) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[116+j] & 3) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[120+j] & 3) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[124+j] & 3) << 22;
	}
}

template<typename T>
void KAFOR_pack_32len_3bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 7);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 7) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 7) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 7) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 7) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 7) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 7) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 7) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[32+j] & 7) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[36+j] & 7) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[40+j] & 7) << 30;
		des[4+j] = (src[40+j] & 7) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 7) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 7) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 7) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[56+j] & 7) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[60+j] & 7) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[64+j] & 7) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[68+j] & 7) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[72+j] & 7) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[76+j] & 7) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[80+j] & 7) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[84+j] & 7) << 31;
		des[8+j] = (src[84+j] & 7) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[88+j] & 7) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[92+j] & 7) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[96+j] & 7) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[100+j] & 7) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[104+j] & 7) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[108+j] & 7) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[112+j] & 7) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[116+j] & 7) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[120+j] & 7) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[124+j] & 7) << 29;
	}
}

template<typename T>
void KAFOR_pack_32len_3bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 7) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 7) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 7) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 7) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 7) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 7) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 7) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 7) << 29;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[32+j] & 7);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 7) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 7) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 7) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 7) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 7) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[56+j] & 7) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[60+j] & 7) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[64+j] & 7) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[68+j] & 7) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[72+j] & 7) << 30;
		des[8+j] = (src[72+j] & 7) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[76+j] & 7) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[80+j] & 7) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[84+j] & 7) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[88+j] & 7) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[92+j] & 7) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[96+j] & 7) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[100+j] & 7) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[104+j] & 7) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[108+j] & 7) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[112+j] & 7) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[116+j] & 7) << 31;
		des[12+j] = (src[116+j] & 7) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[120+j] & 7) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[124+j] & 7) << 5;
	}
}

template<typename T>
void KAFOR_pack_32len_3bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 7) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 7) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 7) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 7) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 7) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 7) << 31;
		des[4+j] = (src[20+j] & 7) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 7) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 7) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 7) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 7) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 7) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 7) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 7) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 7) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[56+j] & 7) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[60+j] & 7) << 29;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[64+j] & 7);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[68+j] & 7) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[72+j] & 7) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[76+j] & 7) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[80+j] & 7) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[84+j] & 7) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[88+j] & 7) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[92+j] & 7) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[96+j] & 7) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[100+j] & 7) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[104+j] & 7) << 30;
		des[12+j] = (src[104+j] & 7) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[108+j] & 7) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[112+j] & 7) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[116+j] & 7) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[120+j] & 7) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[124+j] & 7) << 13;
	}
}

template<typename T>
void KAFOR_pack_32len_3bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 7) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 7) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 7) << 30;
		des[4+j] = (src[8+j] & 7) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 7) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 7) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 7) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 7) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 7) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 7) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 7) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 7) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 7) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 7) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 7) << 31;
		des[8+j] = (src[52+j] & 7) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[56+j] & 7) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[60+j] & 7) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[64+j] & 7) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[68+j] & 7) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[72+j] & 7) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[76+j] & 7) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[80+j] & 7) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[84+j] & 7) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[88+j] & 7) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[92+j] & 7) << 29;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[96+j] & 7);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[100+j] & 7) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[104+j] & 7) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[108+j] & 7) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[112+j] & 7) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[116+j] & 7) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[120+j] & 7) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[124+j] & 7) << 21;
	}
}

template<typename T>
void KAFOR_pack_32len_4bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 15);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 15) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 15) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 15) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 15) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 15) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 15) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[28+j] & 15) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[32+j] & 15);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 15) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 15) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 15) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 15) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 15) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[56+j] & 15) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[60+j] & 15) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[64+j] & 15);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[68+j] & 15) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[72+j] & 15) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[76+j] & 15) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[80+j] & 15) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[84+j] & 15) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[88+j] & 15) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[92+j] & 15) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[96+j] & 15);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[100+j] & 15) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[104+j] & 15) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[108+j] & 15) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[112+j] & 15) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[116+j] & 15) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[120+j] & 15) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[124+j] & 15) << 28;
	}
}

template<typename T>
void KAFOR_pack_32len_4bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 15) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 15) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 15) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 15) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 15) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 15) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[24+j] & 15);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 15) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 15) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 15) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 15) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 15) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 15) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[52+j] & 15) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[56+j] & 15);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[60+j] & 15) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[64+j] & 15) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[68+j] & 15) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[72+j] & 15) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[76+j] & 15) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[80+j] & 15) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[84+j] & 15) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[88+j] & 15);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[92+j] & 15) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[96+j] & 15) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[100+j] & 15) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[104+j] & 15) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[108+j] & 15) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[112+j] & 15) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[116+j] & 15) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[120+j] & 15);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[124+j] & 15) << 4;
	}
}

template<typename T>
void KAFOR_pack_32len_4bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 15) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 15) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 15) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 15) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[16+j] & 15);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 15) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 15) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 15) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 15) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 15) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 15) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 15) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[48+j] & 15);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 15) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[56+j] & 15) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[60+j] & 15) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[64+j] & 15) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[68+j] & 15) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[72+j] & 15) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[76+j] & 15) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[80+j] & 15);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[84+j] & 15) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[88+j] & 15) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[92+j] & 15) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[96+j] & 15) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[100+j] & 15) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[104+j] & 15) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[108+j] & 15) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[112+j] & 15);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[116+j] & 15) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[120+j] & 15) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[124+j] & 15) << 12;
	}
}

template<typename T>
void KAFOR_pack_32len_4bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 15) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 15) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[8+j] & 15);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 15) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 15) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 15) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 15) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 15) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 15) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 15) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[40+j] & 15);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 15) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[48+j] & 15) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 15) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[56+j] & 15) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[60+j] & 15) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[64+j] & 15) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[68+j] & 15) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[72+j] & 15);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[76+j] & 15) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[80+j] & 15) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[84+j] & 15) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[88+j] & 15) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[92+j] & 15) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[96+j] & 15) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[100+j] & 15) << 28;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[104+j] & 15);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[108+j] & 15) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[112+j] & 15) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[116+j] & 15) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[120+j] & 15) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[124+j] & 15) << 20;
	}
}

template<typename T>
void KAFOR_pack_32len_5bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 31);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 31) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 31) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 31) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 31) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 31) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[24+j] & 31) << 30;
		des[4+j] = (src[24+j] & 31) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 31) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 31) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 31) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 31) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 31) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[48+j] & 31) << 28;
		des[8+j] = (src[48+j] & 31) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 31) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[56+j] & 31) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[60+j] & 31) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[64+j] & 31) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[68+j] & 31) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[72+j] & 31) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[76+j] & 31) << 31;
		des[12+j] = (src[76+j] & 31) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[80+j] & 31) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[84+j] & 31) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[88+j] & 31) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[92+j] & 31) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[96+j] & 31) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[100+j] & 31) << 29;
		des[16+j] = (src[100+j] & 31) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[104+j] & 31) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[108+j] & 31) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[112+j] & 31) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[116+j] & 31) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[120+j] & 31) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[124+j] & 31) << 27;
	}
}

template<typename T>
void KAFOR_pack_32len_5bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 31) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 31) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 31) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 31) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 31) << 28;
		des[4+j] = (src[16+j] & 31) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 31) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 31) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 31) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 31) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 31) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 31) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[44+j] & 31) << 31;
		des[8+j] = (src[44+j] & 31) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[48+j] & 31) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 31) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[56+j] & 31) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[60+j] & 31) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[64+j] & 31) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[68+j] & 31) << 29;
		des[12+j] = (src[68+j] & 31) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[72+j] & 31) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[76+j] & 31) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[80+j] & 31) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[84+j] & 31) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[88+j] & 31) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[92+j] & 31) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[96+j] & 31);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[100+j] & 31) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[104+j] & 31) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[108+j] & 31) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[112+j] & 31) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[116+j] & 31) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[120+j] & 31) << 30;
		des[20+j] = (src[120+j] & 31) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[124+j] & 31) << 3;
	}
}

template<typename T>
void KAFOR_pack_32len_5bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 31) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 31) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 31) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 31) << 31;
		des[4+j] = (src[12+j] & 31) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 31) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 31) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 31) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 31) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 31) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 31) << 29;
		des[8+j] = (src[36+j] & 31) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 31) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 31) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[48+j] & 31) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 31) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[56+j] & 31) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[60+j] & 31) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[64+j] & 31);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[68+j] & 31) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[72+j] & 31) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[76+j] & 31) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[80+j] & 31) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[84+j] & 31) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[88+j] & 31) << 30;
		des[16+j] = (src[88+j] & 31) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[92+j] & 31) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[96+j] & 31) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[100+j] & 31) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[104+j] & 31) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[108+j] & 31) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[112+j] & 31) << 28;
		des[20+j] = (src[112+j] & 31) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[116+j] & 31) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[120+j] & 31) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[124+j] & 31) << 11;
	}
}

template<typename T>
void KAFOR_pack_32len_5bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 31) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 31) << 29;
		des[4+j] = (src[4+j] & 31) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 31) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 31) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 31) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 31) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 31) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 31) << 27;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[32+j] & 31);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 31) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 31) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 31) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[48+j] & 31) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 31) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[56+j] & 31) << 30;
		des[12+j] = (src[56+j] & 31) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[60+j] & 31) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[64+j] & 31) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[68+j] & 31) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[72+j] & 31) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[76+j] & 31) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[80+j] & 31) << 28;
		des[16+j] = (src[80+j] & 31) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[84+j] & 31) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[88+j] & 31) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[92+j] & 31) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[96+j] & 31) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[100+j] & 31) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[104+j] & 31) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[108+j] & 31) << 31;
		des[20+j] = (src[108+j] & 31) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[112+j] & 31) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[116+j] & 31) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[120+j] & 31) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[124+j] & 31) << 19;
	}
}

template<typename T>
void KAFOR_pack_32len_6bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 63);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 63) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 63) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 63) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 63) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[20+j] & 63) << 30;
		des[4+j] = (src[20+j] & 63) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 63) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 63) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 63) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 63) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[40+j] & 63) << 28;
		des[8+j] = (src[40+j] & 63) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 63) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[48+j] & 63) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 63) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[56+j] & 63) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[60+j] & 63) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[64+j] & 63);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[68+j] & 63) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[72+j] & 63) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[76+j] & 63) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[80+j] & 63) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[84+j] & 63) << 30;
		des[16+j] = (src[84+j] & 63) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[88+j] & 63) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[92+j] & 63) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[96+j] & 63) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[100+j] & 63) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[104+j] & 63) << 28;
		des[20+j] = (src[104+j] & 63) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[108+j] & 63) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[112+j] & 63) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[116+j] & 63) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[120+j] & 63) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[124+j] & 63) << 26;
	}
}

template<typename T>
void KAFOR_pack_32len_6bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 63) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 63) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 63) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 63) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[16+j] & 63);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 63) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 63) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 63) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 63) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 63) << 30;
		des[8+j] = (src[36+j] & 63) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 63) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 63) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[48+j] & 63) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 63) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[56+j] & 63) << 28;
		des[12+j] = (src[56+j] & 63) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[60+j] & 63) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[64+j] & 63) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[68+j] & 63) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[72+j] & 63) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[76+j] & 63) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[80+j] & 63);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[84+j] & 63) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[88+j] & 63) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[92+j] & 63) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[96+j] & 63) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[100+j] & 63) << 30;
		des[20+j] = (src[100+j] & 63) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[104+j] & 63) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[108+j] & 63) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[112+j] & 63) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[116+j] & 63) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[120+j] & 63) << 28;
		des[24+j] = (src[120+j] & 63) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[124+j] & 63) << 2;
	}
}

template<typename T>
void KAFOR_pack_32len_6bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 63) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 63) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 63) << 28;
		des[4+j] = (src[8+j] & 63) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 63) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 63) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 63) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 63) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 63) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[32+j] & 63);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 63) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 63) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 63) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[48+j] & 63) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 63) << 30;
		des[12+j] = (src[52+j] & 63) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[56+j] & 63) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[60+j] & 63) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[64+j] & 63) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[68+j] & 63) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[72+j] & 63) << 28;
		des[16+j] = (src[72+j] & 63) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[76+j] & 63) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[80+j] & 63) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[84+j] & 63) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[88+j] & 63) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[92+j] & 63) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[96+j] & 63);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[100+j] & 63) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[104+j] & 63) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[108+j] & 63) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[112+j] & 63) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[116+j] & 63) << 30;
		des[24+j] = (src[116+j] & 63) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[120+j] & 63) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[124+j] & 63) << 10;
	}
}

template<typename T>
void KAFOR_pack_32len_6bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 63) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 63) << 30;
		des[4+j] = (src[4+j] & 63) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 63) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 63) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 63) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 63) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 63) << 28;
		des[8+j] = (src[24+j] & 63) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 63) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 63) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 63) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 63) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 63) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[48+j] & 63);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[52+j] & 63) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[56+j] & 63) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[60+j] & 63) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[64+j] & 63) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[68+j] & 63) << 30;
		des[16+j] = (src[68+j] & 63) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[72+j] & 63) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[76+j] & 63) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[80+j] & 63) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[84+j] & 63) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[88+j] & 63) << 28;
		des[20+j] = (src[88+j] & 63) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[92+j] & 63) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[96+j] & 63) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[100+j] & 63) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[104+j] & 63) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[108+j] & 63) << 26;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[112+j] & 63);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[116+j] & 63) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[120+j] & 63) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[124+j] & 63) << 18;
	}
}

template<typename T>
void KAFOR_pack_32len_7bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 127);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 127) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 127) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 127) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[16+j] & 127) << 28;
		des[4+j] = (src[16+j] & 127) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 127) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 127) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 127) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[32+j] & 127) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[36+j] & 127) << 31;
		des[8+j] = (src[36+j] & 127) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 127) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 127) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[48+j] & 127) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[52+j] & 127) << 27;
		des[12+j] = (src[52+j] & 127) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[56+j] & 127) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[60+j] & 127) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[64+j] & 127) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[68+j] & 127) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[72+j] & 127) << 30;
		des[16+j] = (src[72+j] & 127) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[76+j] & 127) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[80+j] & 127) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[84+j] & 127) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[88+j] & 127) << 26;
		des[20+j] = (src[88+j] & 127) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[92+j] & 127) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[96+j] & 127) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[100+j] & 127) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[104+j] & 127) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[108+j] & 127) << 29;
		des[24+j] = (src[108+j] & 127) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[112+j] & 127) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[116+j] & 127) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[120+j] & 127) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[124+j] & 127) << 25;
	}
}

template<typename T>
void KAFOR_pack_32len_7bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 127) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 127) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 127) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 127) << 29;
		des[4+j] = (src[12+j] & 127) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 127) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 127) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 127) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 127) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[32+j] & 127);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 127) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 127) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 127) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[48+j] & 127) << 28;
		des[12+j] = (src[48+j] & 127) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[52+j] & 127) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[56+j] & 127) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[60+j] & 127) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[64+j] & 127) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[68+j] & 127) << 31;
		des[16+j] = (src[68+j] & 127) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[72+j] & 127) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[76+j] & 127) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[80+j] & 127) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[84+j] & 127) << 27;
		des[20+j] = (src[84+j] & 127) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[88+j] & 127) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[92+j] & 127) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[96+j] & 127) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[100+j] & 127) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[104+j] & 127) << 30;
		des[24+j] = (src[104+j] & 127) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[108+j] & 127) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[112+j] & 127) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[116+j] & 127) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[120+j] & 127) << 26;
		des[28+j] = (src[120+j] & 127) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[124+j] & 127) << 1;
	}
}

template<typename T>
void KAFOR_pack_32len_7bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 127) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 127) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 127) << 30;
		des[4+j] = (src[8+j] & 127) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 127) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 127) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 127) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 127) << 26;
		des[8+j] = (src[24+j] & 127) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 127) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 127) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 127) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 127) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 127) << 29;
		des[12+j] = (src[44+j] & 127) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[48+j] & 127) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[52+j] & 127) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[56+j] & 127) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[60+j] & 127) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[64+j] & 127);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[68+j] & 127) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[72+j] & 127) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[76+j] & 127) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[80+j] & 127) << 28;
		des[20+j] = (src[80+j] & 127) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[84+j] & 127) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[88+j] & 127) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[92+j] & 127) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[96+j] & 127) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[100+j] & 127) << 31;
		des[24+j] = (src[100+j] & 127) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[104+j] & 127) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[108+j] & 127) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[112+j] & 127) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[116+j] & 127) << 27;
		des[28+j] = (src[116+j] & 127) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[120+j] & 127) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[124+j] & 127) << 9;
	}
}

template<typename T>
void KAFOR_pack_32len_7bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 127) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 127) << 31;
		des[4+j] = (src[4+j] & 127) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 127) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 127) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 127) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 127) << 27;
		des[8+j] = (src[20+j] & 127) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 127) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 127) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 127) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 127) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 127) << 30;
		des[12+j] = (src[40+j] & 127) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 127) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[48+j] & 127) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[52+j] & 127) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[56+j] & 127) << 26;
		des[16+j] = (src[56+j] & 127) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[60+j] & 127) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[64+j] & 127) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[68+j] & 127) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[72+j] & 127) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[76+j] & 127) << 29;
		des[20+j] = (src[76+j] & 127) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[80+j] & 127) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[84+j] & 127) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[88+j] & 127) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[92+j] & 127) << 25;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[96+j] & 127);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[100+j] & 127) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[104+j] & 127) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[108+j] & 127) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[112+j] & 127) << 28;
		des[28+j] = (src[112+j] & 127) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[116+j] & 127) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[120+j] & 127) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[124+j] & 127) << 17;
	}
}

template<typename T>
void KAFOR_pack_32len_8bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[16+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[32+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[44+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[48+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[52+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[56+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[60+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[64+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[68+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[72+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[76+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[80+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[84+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[88+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[92+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[96+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[100+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[104+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[108+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[112+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[116+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[120+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[124+j] & 255) << 24;
	}
}

template<typename T>
void KAFOR_pack_32len_8bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[12+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[28+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[44+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[48+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[52+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[56+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[60+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[64+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[68+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[72+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[76+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[80+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[84+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[88+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[92+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[96+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[100+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[104+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[108+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[112+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[116+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[120+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[124+j] & 255);
	}
}

template<typename T>
void KAFOR_pack_32len_8bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[8+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[24+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[40+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[48+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[52+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[56+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[60+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[64+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[68+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[72+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[76+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[80+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[84+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[88+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[92+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[96+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[100+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[104+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[108+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[112+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[116+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[120+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[124+j] & 255) << 8;
	}
}

template<typename T>
void KAFOR_pack_32len_8bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[20+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[36+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[48+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[52+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[56+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[60+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[64+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[68+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[72+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[76+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[80+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[84+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[88+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[92+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[96+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[100+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[104+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[108+j] & 255) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[112+j] & 255) << 24;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[116+j] & 255);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[120+j] & 255) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[124+j] & 255) << 16;
	}
}

template<typename T>
void KAFOR_pack_32len_9bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 511);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 511) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 511) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 511) << 27;
		des[4+j] = (src[12+j] & 511) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 511) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 511) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 511) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[28+j] & 511) << 31;
		des[8+j] = (src[28+j] & 511) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 511) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 511) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[40+j] & 511) << 26;
		des[12+j] = (src[40+j] & 511) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 511) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[48+j] & 511) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[52+j] & 511) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[56+j] & 511) << 30;
		des[16+j] = (src[56+j] & 511) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[60+j] & 511) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[64+j] & 511) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[68+j] & 511) << 25;
		des[20+j] = (src[68+j] & 511) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[72+j] & 511) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[76+j] & 511) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[80+j] & 511) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[84+j] & 511) << 29;
		des[24+j] = (src[84+j] & 511) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[88+j] & 511) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[92+j] & 511) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[96+j] & 511) << 24;
		des[28+j] = (src[96+j] & 511) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[100+j] & 511) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[104+j] & 511) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[108+j] & 511) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[112+j] & 511) << 28;
		des[32+j] = (src[112+j] & 511) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[116+j] & 511) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[120+j] & 511) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[124+j] & 511) << 23;
	}
}

template<typename T>
void KAFOR_pack_32len_9bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 511) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 511) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 511) << 26;
		des[4+j] = (src[8+j] & 511) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 511) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 511) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 511) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 511) << 30;
		des[8+j] = (src[24+j] & 511) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 511) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 511) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 511) << 25;
		des[12+j] = (src[36+j] & 511) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 511) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 511) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[48+j] & 511) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[52+j] & 511) << 29;
		des[16+j] = (src[52+j] & 511) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[56+j] & 511) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[60+j] & 511) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[64+j] & 511) << 24;
		des[20+j] = (src[64+j] & 511) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[68+j] & 511) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[72+j] & 511) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[76+j] & 511) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[80+j] & 511) << 28;
		des[24+j] = (src[80+j] & 511) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[84+j] & 511) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[88+j] & 511) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[92+j] & 511) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[96+j] & 511);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[100+j] & 511) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[104+j] & 511) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[108+j] & 511) << 27;
		des[32+j] = (src[108+j] & 511) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[112+j] & 511) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[116+j] & 511) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[120+j] & 511) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[124+j] & 511) << 31;
		des[36+j] = (src[124+j] & 511) >> 1;
	}
}

template<typename T>
void KAFOR_pack_32len_9bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 511) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 511) << 25;
		des[4+j] = (src[4+j] & 511) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 511) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 511) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 511) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 511) << 29;
		des[8+j] = (src[20+j] & 511) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 511) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 511) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 511) << 24;
		des[12+j] = (src[32+j] & 511) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 511) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 511) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 511) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[48+j] & 511) << 28;
		des[16+j] = (src[48+j] & 511) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 511) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[56+j] & 511) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[60+j] & 511) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[64+j] & 511);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[68+j] & 511) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[72+j] & 511) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[76+j] & 511) << 27;
		des[24+j] = (src[76+j] & 511) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[80+j] & 511) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[84+j] & 511) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[88+j] & 511) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[92+j] & 511) << 31;
		des[28+j] = (src[92+j] & 511) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[96+j] & 511) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[100+j] & 511) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[104+j] & 511) << 26;
		des[32+j] = (src[104+j] & 511) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[108+j] & 511) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[112+j] & 511) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[116+j] & 511) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[120+j] & 511) << 30;
		des[36+j] = (src[120+j] & 511) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[124+j] & 511) << 7;
	}
}

template<typename T>
void KAFOR_pack_32len_9bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 511) << 24;
		des[4+j] = (src[j] & 511) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 511) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 511) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 511) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 511) << 28;
		des[8+j] = (src[16+j] & 511) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 511) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 511) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 511) << 23;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[32+j] & 511);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 511) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 511) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 511) << 27;
		des[16+j] = (src[44+j] & 511) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[48+j] & 511) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 511) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[56+j] & 511) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[60+j] & 511) << 31;
		des[20+j] = (src[60+j] & 511) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[64+j] & 511) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[68+j] & 511) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[72+j] & 511) << 26;
		des[24+j] = (src[72+j] & 511) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[76+j] & 511) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[80+j] & 511) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[84+j] & 511) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[88+j] & 511) << 30;
		des[28+j] = (src[88+j] & 511) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[92+j] & 511) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[96+j] & 511) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[100+j] & 511) << 25;
		des[32+j] = (src[100+j] & 511) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[104+j] & 511) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[108+j] & 511) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[112+j] & 511) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[116+j] & 511) << 29;
		des[36+j] = (src[116+j] & 511) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[120+j] & 511) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[124+j] & 511) << 15;
	}
}

template<typename T>
void KAFOR_pack_32len_10bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 1023);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 1023) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 1023) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[12+j] & 1023) << 30;
		des[4+j] = (src[12+j] & 1023) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 1023) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 1023) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[24+j] & 1023) << 28;
		des[8+j] = (src[24+j] & 1023) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 1023) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 1023) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[36+j] & 1023) << 26;
		des[12+j] = (src[36+j] & 1023) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 1023) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 1023) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[48+j] & 1023) << 24;
		des[16+j] = (src[48+j] & 1023) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 1023) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[56+j] & 1023) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[60+j] & 1023) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[64+j] & 1023);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[68+j] & 1023) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[72+j] & 1023) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[76+j] & 1023) << 30;
		des[24+j] = (src[76+j] & 1023) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[80+j] & 1023) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[84+j] & 1023) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[88+j] & 1023) << 28;
		des[28+j] = (src[88+j] & 1023) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[92+j] & 1023) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[96+j] & 1023) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[100+j] & 1023) << 26;
		des[32+j] = (src[100+j] & 1023) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[104+j] & 1023) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[108+j] & 1023) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[112+j] & 1023) << 24;
		des[36+j] = (src[112+j] & 1023) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[116+j] & 1023) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[120+j] & 1023) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[124+j] & 1023) << 22;
	}
}

template<typename T>
void KAFOR_pack_32len_10bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 1023) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 1023) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 1023) << 28;
		des[4+j] = (src[8+j] & 1023) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 1023) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 1023) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 1023) << 26;
		des[8+j] = (src[20+j] & 1023) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 1023) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 1023) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 1023) << 24;
		des[12+j] = (src[32+j] & 1023) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 1023) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 1023) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 1023) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[48+j] & 1023);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 1023) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[56+j] & 1023) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[60+j] & 1023) << 30;
		des[20+j] = (src[60+j] & 1023) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[64+j] & 1023) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[68+j] & 1023) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[72+j] & 1023) << 28;
		des[24+j] = (src[72+j] & 1023) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[76+j] & 1023) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[80+j] & 1023) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[84+j] & 1023) << 26;
		des[28+j] = (src[84+j] & 1023) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[88+j] & 1023) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[92+j] & 1023) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[96+j] & 1023) << 24;
		des[32+j] = (src[96+j] & 1023) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[100+j] & 1023) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[104+j] & 1023) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[108+j] & 1023) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[112+j] & 1023);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[116+j] & 1023) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[120+j] & 1023) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[124+j] & 1023) << 30;
		des[40+j] = (src[124+j] & 1023) >> 2;
	}
}

template<typename T>
void KAFOR_pack_32len_10bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 1023) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 1023) << 26;
		des[4+j] = (src[4+j] & 1023) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 1023) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 1023) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 1023) << 24;
		des[8+j] = (src[16+j] & 1023) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 1023) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 1023) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 1023) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[32+j] & 1023);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 1023) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 1023) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 1023) << 30;
		des[16+j] = (src[44+j] & 1023) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[48+j] & 1023) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 1023) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[56+j] & 1023) << 28;
		des[20+j] = (src[56+j] & 1023) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[60+j] & 1023) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[64+j] & 1023) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[68+j] & 1023) << 26;
		des[24+j] = (src[68+j] & 1023) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[72+j] & 1023) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[76+j] & 1023) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[80+j] & 1023) << 24;
		des[28+j] = (src[80+j] & 1023) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[84+j] & 1023) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[88+j] & 1023) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[92+j] & 1023) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[96+j] & 1023);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[100+j] & 1023) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[104+j] & 1023) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[108+j] & 1023) << 30;
		des[36+j] = (src[108+j] & 1023) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[112+j] & 1023) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[116+j] & 1023) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[120+j] & 1023) << 28;
		des[40+j] = (src[120+j] & 1023) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[124+j] & 1023) << 6;
	}
}

template<typename T>
void KAFOR_pack_32len_10bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 1023) << 24;
		des[4+j] = (src[j] & 1023) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 1023) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 1023) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 1023) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[16+j] & 1023);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 1023) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 1023) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 1023) << 30;
		des[12+j] = (src[28+j] & 1023) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[32+j] & 1023) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 1023) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 1023) << 28;
		des[16+j] = (src[40+j] & 1023) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 1023) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[48+j] & 1023) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 1023) << 26;
		des[20+j] = (src[52+j] & 1023) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[56+j] & 1023) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[60+j] & 1023) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[64+j] & 1023) << 24;
		des[24+j] = (src[64+j] & 1023) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[68+j] & 1023) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[72+j] & 1023) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[76+j] & 1023) << 22;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[80+j] & 1023);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[84+j] & 1023) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[88+j] & 1023) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[92+j] & 1023) << 30;
		des[32+j] = (src[92+j] & 1023) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[96+j] & 1023) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[100+j] & 1023) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[104+j] & 1023) << 28;
		des[36+j] = (src[104+j] & 1023) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[108+j] & 1023) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[112+j] & 1023) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[116+j] & 1023) << 26;
		des[40+j] = (src[116+j] & 1023) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[120+j] & 1023) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[124+j] & 1023) << 14;
	}
}

template<typename T>
void KAFOR_pack_32len_11bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 2047);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 2047) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 2047) << 22;
		des[4+j] = (src[8+j] & 2047) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 2047) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 2047) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 2047) << 23;
		des[8+j] = (src[20+j] & 2047) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 2047) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 2047) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[32+j] & 2047) << 24;
		des[12+j] = (src[32+j] & 2047) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 2047) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 2047) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[44+j] & 2047) << 25;
		des[16+j] = (src[44+j] & 2047) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[48+j] & 2047) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 2047) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[56+j] & 2047) << 26;
		des[20+j] = (src[56+j] & 2047) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[60+j] & 2047) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[64+j] & 2047) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[68+j] & 2047) << 27;
		des[24+j] = (src[68+j] & 2047) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[72+j] & 2047) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[76+j] & 2047) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[80+j] & 2047) << 28;
		des[28+j] = (src[80+j] & 2047) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[84+j] & 2047) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[88+j] & 2047) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[92+j] & 2047) << 29;
		des[32+j] = (src[92+j] & 2047) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[96+j] & 2047) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[100+j] & 2047) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[104+j] & 2047) << 30;
		des[36+j] = (src[104+j] & 2047) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[108+j] & 2047) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[112+j] & 2047) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[116+j] & 2047) << 31;
		des[40+j] = (src[116+j] & 2047) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[120+j] & 2047) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[124+j] & 2047) << 21;
	}
}

template<typename T>
void KAFOR_pack_32len_11bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 2047) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 2047) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 2047) << 30;
		des[4+j] = (src[8+j] & 2047) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 2047) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 2047) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 2047) << 31;
		des[8+j] = (src[20+j] & 2047) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 2047) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 2047) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[32+j] & 2047);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 2047) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 2047) << 22;
		des[16+j] = (src[40+j] & 2047) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 2047) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[48+j] & 2047) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 2047) << 23;
		des[20+j] = (src[52+j] & 2047) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[56+j] & 2047) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[60+j] & 2047) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[64+j] & 2047) << 24;
		des[24+j] = (src[64+j] & 2047) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[68+j] & 2047) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[72+j] & 2047) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[76+j] & 2047) << 25;
		des[28+j] = (src[76+j] & 2047) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[80+j] & 2047) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[84+j] & 2047) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[88+j] & 2047) << 26;
		des[32+j] = (src[88+j] & 2047) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[92+j] & 2047) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[96+j] & 2047) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[100+j] & 2047) << 27;
		des[36+j] = (src[100+j] & 2047) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[104+j] & 2047) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[108+j] & 2047) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[112+j] & 2047) << 28;
		des[40+j] = (src[112+j] & 2047) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[116+j] & 2047) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[120+j] & 2047) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[124+j] & 2047) << 29;
		des[44+j] = (src[124+j] & 2047) >> 3;
	}
}

template<typename T>
void KAFOR_pack_32len_11bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 2047) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 2047) << 27;
		des[4+j] = (src[4+j] & 2047) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 2047) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 2047) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 2047) << 28;
		des[8+j] = (src[16+j] & 2047) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 2047) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 2047) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 2047) << 29;
		des[12+j] = (src[28+j] & 2047) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[32+j] & 2047) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 2047) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 2047) << 30;
		des[16+j] = (src[40+j] & 2047) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 2047) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[48+j] & 2047) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 2047) << 31;
		des[20+j] = (src[52+j] & 2047) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[56+j] & 2047) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[60+j] & 2047) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[64+j] & 2047);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[68+j] & 2047) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[72+j] & 2047) << 22;
		des[28+j] = (src[72+j] & 2047) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[76+j] & 2047) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[80+j] & 2047) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[84+j] & 2047) << 23;
		des[32+j] = (src[84+j] & 2047) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[88+j] & 2047) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[92+j] & 2047) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[96+j] & 2047) << 24;
		des[36+j] = (src[96+j] & 2047) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[100+j] & 2047) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[104+j] & 2047) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[108+j] & 2047) << 25;
		des[40+j] = (src[108+j] & 2047) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[112+j] & 2047) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[116+j] & 2047) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[120+j] & 2047) << 26;
		des[44+j] = (src[120+j] & 2047) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[124+j] & 2047) << 5;
	}
}

template<typename T>
void KAFOR_pack_32len_11bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 2047) << 24;
		des[4+j] = (src[j] & 2047) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 2047) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 2047) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 2047) << 25;
		des[8+j] = (src[12+j] & 2047) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 2047) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 2047) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 2047) << 26;
		des[12+j] = (src[24+j] & 2047) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 2047) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[32+j] & 2047) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 2047) << 27;
		des[16+j] = (src[36+j] & 2047) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[40+j] & 2047) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 2047) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[48+j] & 2047) << 28;
		des[20+j] = (src[48+j] & 2047) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[52+j] & 2047) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[56+j] & 2047) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[60+j] & 2047) << 29;
		des[24+j] = (src[60+j] & 2047) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[64+j] & 2047) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[68+j] & 2047) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[72+j] & 2047) << 30;
		des[28+j] = (src[72+j] & 2047) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[76+j] & 2047) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[80+j] & 2047) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[84+j] & 2047) << 31;
		des[32+j] = (src[84+j] & 2047) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[88+j] & 2047) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[92+j] & 2047) << 21;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[96+j] & 2047);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[100+j] & 2047) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[104+j] & 2047) << 22;
		des[40+j] = (src[104+j] & 2047) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[108+j] & 2047) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[112+j] & 2047) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[116+j] & 2047) << 23;
		des[44+j] = (src[116+j] & 2047) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[120+j] & 2047) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[124+j] & 2047) << 13;
	}
}

template<typename T>
void KAFOR_pack_32len_12bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 4095);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 4095) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 4095) << 24;
		des[4+j] = (src[8+j] & 4095) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 4095) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 4095) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[20+j] & 4095) << 28;
		des[8+j] = (src[20+j] & 4095) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 4095) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 4095) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[32+j] & 4095);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 4095) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[40+j] & 4095) << 24;
		des[16+j] = (src[40+j] & 4095) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 4095) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[48+j] & 4095) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[52+j] & 4095) << 28;
		des[20+j] = (src[52+j] & 4095) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[56+j] & 4095) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[60+j] & 4095) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[64+j] & 4095);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[68+j] & 4095) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[72+j] & 4095) << 24;
		des[28+j] = (src[72+j] & 4095) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[76+j] & 4095) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[80+j] & 4095) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[84+j] & 4095) << 28;
		des[32+j] = (src[84+j] & 4095) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[88+j] & 4095) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[92+j] & 4095) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[96+j] & 4095);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[100+j] & 4095) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[104+j] & 4095) << 24;
		des[40+j] = (src[104+j] & 4095) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[108+j] & 4095) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[112+j] & 4095) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[116+j] & 4095) << 28;
		des[44+j] = (src[116+j] & 4095) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[120+j] & 4095) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[124+j] & 4095) << 20;
	}
}

template<typename T>
void KAFOR_pack_32len_12bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 4095) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 4095) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[8+j] & 4095);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 4095) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 4095) << 24;
		des[8+j] = (src[16+j] & 4095) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 4095) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 4095) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 4095) << 28;
		des[12+j] = (src[28+j] & 4095) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[32+j] & 4095) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 4095) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[40+j] & 4095);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 4095) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[48+j] & 4095) << 24;
		des[20+j] = (src[48+j] & 4095) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[52+j] & 4095) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[56+j] & 4095) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[60+j] & 4095) << 28;
		des[24+j] = (src[60+j] & 4095) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[64+j] & 4095) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[68+j] & 4095) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[72+j] & 4095);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[76+j] & 4095) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[80+j] & 4095) << 24;
		des[32+j] = (src[80+j] & 4095) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[84+j] & 4095) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[88+j] & 4095) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[92+j] & 4095) << 28;
		des[36+j] = (src[92+j] & 4095) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[96+j] & 4095) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[100+j] & 4095) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[104+j] & 4095);
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[108+j] & 4095) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[112+j] & 4095) << 24;
		des[44+j] = (src[112+j] & 4095) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[116+j] & 4095) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[120+j] & 4095) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[124+j] & 4095) << 28;
		des[48+j] = (src[124+j] & 4095) >> 4;
	}
}

template<typename T>
void KAFOR_pack_32len_12bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 4095) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 4095) << 28;
		des[4+j] = (src[4+j] & 4095) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 4095) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 4095) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[16+j] & 4095);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 4095) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 4095) << 24;
		des[12+j] = (src[24+j] & 4095) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 4095) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[32+j] & 4095) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 4095) << 28;
		des[16+j] = (src[36+j] & 4095) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[40+j] & 4095) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 4095) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[48+j] & 4095);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[52+j] & 4095) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[56+j] & 4095) << 24;
		des[24+j] = (src[56+j] & 4095) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[60+j] & 4095) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[64+j] & 4095) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[68+j] & 4095) << 28;
		des[28+j] = (src[68+j] & 4095) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[72+j] & 4095) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[76+j] & 4095) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[80+j] & 4095);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[84+j] & 4095) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[88+j] & 4095) << 24;
		des[36+j] = (src[88+j] & 4095) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[92+j] & 4095) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[96+j] & 4095) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[100+j] & 4095) << 28;
		des[40+j] = (src[100+j] & 4095) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[104+j] & 4095) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[108+j] & 4095) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[112+j] & 4095);
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[116+j] & 4095) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[120+j] & 4095) << 24;
		des[48+j] = (src[120+j] & 4095) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[124+j] & 4095) << 4;
	}
}

template<typename T>
void KAFOR_pack_32len_12bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 4095) << 24;
		des[4+j] = (src[j] & 4095) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 4095) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 4095) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 4095) << 28;
		des[8+j] = (src[12+j] & 4095) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 4095) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 4095) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[24+j] & 4095);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 4095) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[32+j] & 4095) << 24;
		des[16+j] = (src[32+j] & 4095) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[36+j] & 4095) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[40+j] & 4095) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 4095) << 28;
		des[20+j] = (src[44+j] & 4095) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[48+j] & 4095) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[52+j] & 4095) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[56+j] & 4095);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[60+j] & 4095) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[64+j] & 4095) << 24;
		des[28+j] = (src[64+j] & 4095) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[68+j] & 4095) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[72+j] & 4095) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[76+j] & 4095) << 28;
		des[32+j] = (src[76+j] & 4095) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[80+j] & 4095) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[84+j] & 4095) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[88+j] & 4095);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[92+j] & 4095) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[96+j] & 4095) << 24;
		des[40+j] = (src[96+j] & 4095) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[100+j] & 4095) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[104+j] & 4095) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[108+j] & 4095) << 28;
		des[44+j] = (src[108+j] & 4095) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[112+j] & 4095) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[116+j] & 4095) << 20;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[120+j] & 4095);
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[124+j] & 4095) << 12;
	}
}

template<typename T>
void KAFOR_pack_32len_13bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 8191);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 8191) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 8191) << 26;
		des[4+j] = (src[8+j] & 8191) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 8191) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 8191) << 20;
		des[8+j] = (src[16+j] & 8191) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 8191) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 8191) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[28+j] & 8191) << 27;
		des[12+j] = (src[28+j] & 8191) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[32+j] & 8191) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 8191) << 21;
		des[16+j] = (src[36+j] & 8191) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[40+j] & 8191) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 8191) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[48+j] & 8191) << 28;
		des[20+j] = (src[48+j] & 8191) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[52+j] & 8191) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[56+j] & 8191) << 22;
		des[24+j] = (src[56+j] & 8191) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[60+j] & 8191) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[64+j] & 8191) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[68+j] & 8191) << 29;
		des[28+j] = (src[68+j] & 8191) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[72+j] & 8191) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[76+j] & 8191) << 23;
		des[32+j] = (src[76+j] & 8191) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[80+j] & 8191) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[84+j] & 8191) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[88+j] & 8191) << 30;
		des[36+j] = (src[88+j] & 8191) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[92+j] & 8191) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[96+j] & 8191) << 24;
		des[40+j] = (src[96+j] & 8191) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[100+j] & 8191) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[104+j] & 8191) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[108+j] & 8191) << 31;
		des[44+j] = (src[108+j] & 8191) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[112+j] & 8191) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[116+j] & 8191) << 25;
		des[48+j] = (src[116+j] & 8191) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[120+j] & 8191) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[124+j] & 8191) << 19;
	}
}

template<typename T>
void KAFOR_pack_32len_13bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 8191) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 8191) << 21;
		des[4+j] = (src[4+j] & 8191) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 8191) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 8191) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 8191) << 28;
		des[8+j] = (src[16+j] & 8191) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 8191) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 8191) << 22;
		des[12+j] = (src[24+j] & 8191) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 8191) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[32+j] & 8191) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 8191) << 29;
		des[16+j] = (src[36+j] & 8191) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[40+j] & 8191) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 8191) << 23;
		des[20+j] = (src[44+j] & 8191) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[48+j] & 8191) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[52+j] & 8191) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[56+j] & 8191) << 30;
		des[24+j] = (src[56+j] & 8191) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[60+j] & 8191) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[64+j] & 8191) << 24;
		des[28+j] = (src[64+j] & 8191) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[68+j] & 8191) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[72+j] & 8191) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[76+j] & 8191) << 31;
		des[32+j] = (src[76+j] & 8191) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[80+j] & 8191) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[84+j] & 8191) << 25;
		des[36+j] = (src[84+j] & 8191) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[88+j] & 8191) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[92+j] & 8191) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[96+j] & 8191);
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[100+j] & 8191) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[104+j] & 8191) << 26;
		des[44+j] = (src[104+j] & 8191) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[108+j] & 8191) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[112+j] & 8191) << 20;
		des[48+j] = (src[112+j] & 8191) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[116+j] & 8191) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[120+j] & 8191) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[124+j] & 8191) << 27;
		des[52+j] = (src[124+j] & 8191) >> 5;
	}
}

template<typename T>
void KAFOR_pack_32len_13bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 8191) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 8191) << 29;
		des[4+j] = (src[4+j] & 8191) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 8191) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 8191) << 23;
		des[8+j] = (src[12+j] & 8191) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 8191) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 8191) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 8191) << 30;
		des[12+j] = (src[24+j] & 8191) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 8191) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[32+j] & 8191) << 24;
		des[16+j] = (src[32+j] & 8191) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[36+j] & 8191) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[40+j] & 8191) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 8191) << 31;
		des[20+j] = (src[44+j] & 8191) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[48+j] & 8191) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[52+j] & 8191) << 25;
		des[24+j] = (src[52+j] & 8191) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[56+j] & 8191) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[60+j] & 8191) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[64+j] & 8191);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[68+j] & 8191) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[72+j] & 8191) << 26;
		des[32+j] = (src[72+j] & 8191) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[76+j] & 8191) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[80+j] & 8191) << 20;
		des[36+j] = (src[80+j] & 8191) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[84+j] & 8191) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[88+j] & 8191) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[92+j] & 8191) << 27;
		des[40+j] = (src[92+j] & 8191) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[96+j] & 8191) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[100+j] & 8191) << 21;
		des[44+j] = (src[100+j] & 8191) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[104+j] & 8191) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[108+j] & 8191) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[112+j] & 8191) << 28;
		des[48+j] = (src[112+j] & 8191) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[116+j] & 8191) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[120+j] & 8191) << 22;
		des[52+j] = (src[120+j] & 8191) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[124+j] & 8191) << 3;
	}
}

template<typename T>
void KAFOR_pack_32len_13bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 8191) << 24;
		des[4+j] = (src[j] & 8191) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 8191) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 8191) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 8191) << 31;
		des[8+j] = (src[12+j] & 8191) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 8191) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 8191) << 25;
		des[12+j] = (src[20+j] & 8191) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 8191) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 8191) << 19;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[32+j] & 8191);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[36+j] & 8191) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[40+j] & 8191) << 26;
		des[20+j] = (src[40+j] & 8191) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[44+j] & 8191) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[48+j] & 8191) << 20;
		des[24+j] = (src[48+j] & 8191) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[52+j] & 8191) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[56+j] & 8191) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[60+j] & 8191) << 27;
		des[28+j] = (src[60+j] & 8191) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[64+j] & 8191) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[68+j] & 8191) << 21;
		des[32+j] = (src[68+j] & 8191) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[72+j] & 8191) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[76+j] & 8191) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[80+j] & 8191) << 28;
		des[36+j] = (src[80+j] & 8191) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[84+j] & 8191) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[88+j] & 8191) << 22;
		des[40+j] = (src[88+j] & 8191) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[92+j] & 8191) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[96+j] & 8191) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[100+j] & 8191) << 29;
		des[44+j] = (src[100+j] & 8191) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[104+j] & 8191) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[108+j] & 8191) << 23;
		des[48+j] = (src[108+j] & 8191) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[112+j] & 8191) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[116+j] & 8191) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[120+j] & 8191) << 30;
		des[52+j] = (src[120+j] & 8191) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[124+j] & 8191) << 11;
	}
}

template<typename T>
void KAFOR_pack_32len_14bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 16383);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 16383) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 16383) << 28;
		des[4+j] = (src[8+j] & 16383) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 16383) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 16383) << 24;
		des[8+j] = (src[16+j] & 16383) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 16383) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 16383) << 20;
		des[12+j] = (src[24+j] & 16383) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 16383) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[32+j] & 16383) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[36+j] & 16383) << 30;
		des[16+j] = (src[36+j] & 16383) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[40+j] & 16383) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[44+j] & 16383) << 26;
		des[20+j] = (src[44+j] & 16383) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[48+j] & 16383) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[52+j] & 16383) << 22;
		des[24+j] = (src[52+j] & 16383) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[56+j] & 16383) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[60+j] & 16383) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[64+j] & 16383);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[68+j] & 16383) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[72+j] & 16383) << 28;
		des[32+j] = (src[72+j] & 16383) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[76+j] & 16383) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[80+j] & 16383) << 24;
		des[36+j] = (src[80+j] & 16383) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[84+j] & 16383) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[88+j] & 16383) << 20;
		des[40+j] = (src[88+j] & 16383) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[92+j] & 16383) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[96+j] & 16383) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[100+j] & 16383) << 30;
		des[44+j] = (src[100+j] & 16383) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[104+j] & 16383) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[108+j] & 16383) << 26;
		des[48+j] = (src[108+j] & 16383) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[112+j] & 16383) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[116+j] & 16383) << 22;
		des[52+j] = (src[116+j] & 16383) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[120+j] & 16383) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[124+j] & 16383) << 18;
	}
}

template<typename T>
void KAFOR_pack_32len_14bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 16383) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 16383) << 22;
		des[4+j] = (src[4+j] & 16383) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 16383) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 16383) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[16+j] & 16383);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 16383) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 16383) << 28;
		des[12+j] = (src[24+j] & 16383) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 16383) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[32+j] & 16383) << 24;
		des[16+j] = (src[32+j] & 16383) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[36+j] & 16383) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[40+j] & 16383) << 20;
		des[20+j] = (src[40+j] & 16383) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[44+j] & 16383) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[48+j] & 16383) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[52+j] & 16383) << 30;
		des[24+j] = (src[52+j] & 16383) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[56+j] & 16383) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[60+j] & 16383) << 26;
		des[28+j] = (src[60+j] & 16383) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[64+j] & 16383) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[68+j] & 16383) << 22;
		des[32+j] = (src[68+j] & 16383) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[72+j] & 16383) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[76+j] & 16383) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[80+j] & 16383);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[84+j] & 16383) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[88+j] & 16383) << 28;
		des[40+j] = (src[88+j] & 16383) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[92+j] & 16383) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[96+j] & 16383) << 24;
		des[44+j] = (src[96+j] & 16383) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[100+j] & 16383) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[104+j] & 16383) << 20;
		des[48+j] = (src[104+j] & 16383) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[108+j] & 16383) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[112+j] & 16383) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[116+j] & 16383) << 30;
		des[52+j] = (src[116+j] & 16383) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[120+j] & 16383) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[124+j] & 16383) << 26;
		des[56+j] = (src[124+j] & 16383) >> 6;
	}
}

template<typename T>
void KAFOR_pack_32len_14bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 16383) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 16383) << 30;
		des[4+j] = (src[4+j] & 16383) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 16383) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 16383) << 26;
		des[8+j] = (src[12+j] & 16383) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 16383) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 16383) << 22;
		des[12+j] = (src[20+j] & 16383) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 16383) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 16383) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[32+j] & 16383);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[36+j] & 16383) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[40+j] & 16383) << 28;
		des[20+j] = (src[40+j] & 16383) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[44+j] & 16383) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[48+j] & 16383) << 24;
		des[24+j] = (src[48+j] & 16383) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[52+j] & 16383) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[56+j] & 16383) << 20;
		des[28+j] = (src[56+j] & 16383) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[60+j] & 16383) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[64+j] & 16383) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[68+j] & 16383) << 30;
		des[32+j] = (src[68+j] & 16383) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[72+j] & 16383) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[76+j] & 16383) << 26;
		des[36+j] = (src[76+j] & 16383) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[80+j] & 16383) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[84+j] & 16383) << 22;
		des[40+j] = (src[84+j] & 16383) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[88+j] & 16383) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[92+j] & 16383) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[96+j] & 16383);
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[100+j] & 16383) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[104+j] & 16383) << 28;
		des[48+j] = (src[104+j] & 16383) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[108+j] & 16383) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[112+j] & 16383) << 24;
		des[52+j] = (src[112+j] & 16383) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[116+j] & 16383) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[120+j] & 16383) << 20;
		des[56+j] = (src[120+j] & 16383) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[124+j] & 16383) << 2;
	}
}

template<typename T>
void KAFOR_pack_32len_14bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 16383) << 24;
		des[4+j] = (src[j] & 16383) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 16383) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 16383) << 20;
		des[8+j] = (src[8+j] & 16383) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 16383) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 16383) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 16383) << 30;
		des[12+j] = (src[20+j] & 16383) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 16383) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 16383) << 26;
		des[16+j] = (src[28+j] & 16383) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[32+j] & 16383) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[36+j] & 16383) << 22;
		des[20+j] = (src[36+j] & 16383) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[40+j] & 16383) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[44+j] & 16383) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[48+j] & 16383);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[52+j] & 16383) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[56+j] & 16383) << 28;
		des[28+j] = (src[56+j] & 16383) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[60+j] & 16383) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[64+j] & 16383) << 24;
		des[32+j] = (src[64+j] & 16383) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[68+j] & 16383) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[72+j] & 16383) << 20;
		des[36+j] = (src[72+j] & 16383) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[76+j] & 16383) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[80+j] & 16383) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[84+j] & 16383) << 30;
		des[40+j] = (src[84+j] & 16383) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[88+j] & 16383) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[92+j] & 16383) << 26;
		des[44+j] = (src[92+j] & 16383) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[96+j] & 16383) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[100+j] & 16383) << 22;
		des[48+j] = (src[100+j] & 16383) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[104+j] & 16383) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[108+j] & 16383) << 18;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[112+j] & 16383);
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[116+j] & 16383) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[120+j] & 16383) << 28;
		des[56+j] = (src[120+j] & 16383) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[124+j] & 16383) << 10;
	}
}

template<typename T>
void KAFOR_pack_32len_15bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 32767);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 32767) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[8+j] & 32767) << 30;
		des[4+j] = (src[8+j] & 32767) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 32767) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[16+j] & 32767) << 28;
		des[8+j] = (src[16+j] & 32767) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 32767) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[24+j] & 32767) << 26;
		des[12+j] = (src[24+j] & 32767) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 32767) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[32+j] & 32767) << 24;
		des[16+j] = (src[32+j] & 32767) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[36+j] & 32767) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[40+j] & 32767) << 22;
		des[20+j] = (src[40+j] & 32767) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[44+j] & 32767) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[48+j] & 32767) << 20;
		des[24+j] = (src[48+j] & 32767) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[52+j] & 32767) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[56+j] & 32767) << 18;
		des[28+j] = (src[56+j] & 32767) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[60+j] & 32767) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[64+j] & 32767) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[68+j] & 32767) << 31;
		des[32+j] = (src[68+j] & 32767) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[72+j] & 32767) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[76+j] & 32767) << 29;
		des[36+j] = (src[76+j] & 32767) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[80+j] & 32767) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[84+j] & 32767) << 27;
		des[40+j] = (src[84+j] & 32767) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[88+j] & 32767) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[92+j] & 32767) << 25;
		des[44+j] = (src[92+j] & 32767) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[96+j] & 32767) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[100+j] & 32767) << 23;
		des[48+j] = (src[100+j] & 32767) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[104+j] & 32767) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[108+j] & 32767) << 21;
		des[52+j] = (src[108+j] & 32767) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[112+j] & 32767) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[116+j] & 32767) << 19;
		des[56+j] = (src[116+j] & 32767) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[120+j] & 32767) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[124+j] & 32767) << 17;
	}
}

template<typename T>
void KAFOR_pack_32len_15bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 32767) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 32767) << 23;
		des[4+j] = (src[4+j] & 32767) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 32767) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 32767) << 21;
		des[8+j] = (src[12+j] & 32767) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 32767) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 32767) << 19;
		des[12+j] = (src[20+j] & 32767) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 32767) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 32767) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[32+j] & 32767);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[36+j] & 32767) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[40+j] & 32767) << 30;
		des[20+j] = (src[40+j] & 32767) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[44+j] & 32767) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[48+j] & 32767) << 28;
		des[24+j] = (src[48+j] & 32767) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[52+j] & 32767) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[56+j] & 32767) << 26;
		des[28+j] = (src[56+j] & 32767) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[60+j] & 32767) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[64+j] & 32767) << 24;
		des[32+j] = (src[64+j] & 32767) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[68+j] & 32767) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[72+j] & 32767) << 22;
		des[36+j] = (src[72+j] & 32767) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[76+j] & 32767) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[80+j] & 32767) << 20;
		des[40+j] = (src[80+j] & 32767) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[84+j] & 32767) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[88+j] & 32767) << 18;
		des[44+j] = (src[88+j] & 32767) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[92+j] & 32767) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[96+j] & 32767) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[100+j] & 32767) << 31;
		des[48+j] = (src[100+j] & 32767) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[104+j] & 32767) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[108+j] & 32767) << 29;
		des[52+j] = (src[108+j] & 32767) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[112+j] & 32767) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[116+j] & 32767) << 27;
		des[56+j] = (src[116+j] & 32767) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[120+j] & 32767) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[124+j] & 32767) << 25;
		des[60+j] = (src[124+j] & 32767) >> 7;
	}
}

template<typename T>
void KAFOR_pack_32len_15bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 32767) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 32767) << 31;
		des[4+j] = (src[4+j] & 32767) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 32767) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 32767) << 29;
		des[8+j] = (src[12+j] & 32767) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 32767) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 32767) << 27;
		des[12+j] = (src[20+j] & 32767) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 32767) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 32767) << 25;
		des[16+j] = (src[28+j] & 32767) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[32+j] & 32767) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[36+j] & 32767) << 23;
		des[20+j] = (src[36+j] & 32767) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[40+j] & 32767) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[44+j] & 32767) << 21;
		des[24+j] = (src[44+j] & 32767) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[48+j] & 32767) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[52+j] & 32767) << 19;
		des[28+j] = (src[52+j] & 32767) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[56+j] & 32767) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[60+j] & 32767) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[64+j] & 32767);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[68+j] & 32767) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[72+j] & 32767) << 30;
		des[36+j] = (src[72+j] & 32767) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[76+j] & 32767) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[80+j] & 32767) << 28;
		des[40+j] = (src[80+j] & 32767) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[84+j] & 32767) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[88+j] & 32767) << 26;
		des[44+j] = (src[88+j] & 32767) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[92+j] & 32767) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[96+j] & 32767) << 24;
		des[48+j] = (src[96+j] & 32767) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[100+j] & 32767) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[104+j] & 32767) << 22;
		des[52+j] = (src[104+j] & 32767) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[108+j] & 32767) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[112+j] & 32767) << 20;
		des[56+j] = (src[112+j] & 32767) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[116+j] & 32767) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[120+j] & 32767) << 18;
		des[60+j] = (src[120+j] & 32767) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[124+j] & 32767) << 1;
	}
}

template<typename T>
void KAFOR_pack_32len_15bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 32767) << 24;
		des[4+j] = (src[j] & 32767) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 32767) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 32767) << 22;
		des[8+j] = (src[8+j] & 32767) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 32767) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 32767) << 20;
		des[12+j] = (src[16+j] & 32767) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 32767) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 32767) << 18;
		des[16+j] = (src[24+j] & 32767) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 32767) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[32+j] & 32767) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[36+j] & 32767) << 31;
		des[20+j] = (src[36+j] & 32767) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[40+j] & 32767) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[44+j] & 32767) << 29;
		des[24+j] = (src[44+j] & 32767) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[48+j] & 32767) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[52+j] & 32767) << 27;
		des[28+j] = (src[52+j] & 32767) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[56+j] & 32767) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[60+j] & 32767) << 25;
		des[32+j] = (src[60+j] & 32767) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[64+j] & 32767) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[68+j] & 32767) << 23;
		des[36+j] = (src[68+j] & 32767) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[72+j] & 32767) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[76+j] & 32767) << 21;
		des[40+j] = (src[76+j] & 32767) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[80+j] & 32767) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[84+j] & 32767) << 19;
		des[44+j] = (src[84+j] & 32767) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[88+j] & 32767) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[92+j] & 32767) << 17;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[96+j] & 32767);
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[100+j] & 32767) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[104+j] & 32767) << 30;
		des[52+j] = (src[104+j] & 32767) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[108+j] & 32767) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[112+j] & 32767) << 28;
		des[56+j] = (src[112+j] & 32767) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[116+j] & 32767) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[120+j] & 32767) << 26;
		des[60+j] = (src[120+j] & 32767) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[124+j] & 32767) << 9;
	}
}

template<typename T>
void KAFOR_pack_32len_16bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[8+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[16+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[24+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[32+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[36+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[40+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[44+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[48+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[52+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[56+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[60+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[64+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[68+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[72+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[76+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[80+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[84+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[88+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[92+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[96+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[100+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[104+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[108+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[112+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[116+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[120+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[124+j] & 65535) << 16;
	}
}

template<typename T>
void KAFOR_pack_32len_16bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 65535) << 24;
		des[4+j] = (src[4+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 65535) << 24;
		des[8+j] = (src[12+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 65535) << 24;
		des[12+j] = (src[20+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 65535) << 24;
		des[16+j] = (src[28+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[32+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[36+j] & 65535) << 24;
		des[20+j] = (src[36+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[40+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[44+j] & 65535) << 24;
		des[24+j] = (src[44+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[48+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[52+j] & 65535) << 24;
		des[28+j] = (src[52+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[56+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[60+j] & 65535) << 24;
		des[32+j] = (src[60+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[64+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[68+j] & 65535) << 24;
		des[36+j] = (src[68+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[72+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[76+j] & 65535) << 24;
		des[40+j] = (src[76+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[80+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[84+j] & 65535) << 24;
		des[44+j] = (src[84+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[88+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[92+j] & 65535) << 24;
		des[48+j] = (src[92+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[96+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[100+j] & 65535) << 24;
		des[52+j] = (src[100+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[104+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[108+j] & 65535) << 24;
		des[56+j] = (src[108+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[112+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[116+j] & 65535) << 24;
		des[60+j] = (src[116+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[120+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[124+j] & 65535) << 24;
		des[64+j] = (src[124+j] & 65535) >> 8;
	}
}

template<typename T>
void KAFOR_pack_32len_16bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[12+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[20+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[28+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[32+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[36+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[40+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[44+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[48+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[52+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[56+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[60+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[64+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[68+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[72+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[76+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[80+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[84+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[88+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[92+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[96+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[100+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[104+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[108+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[112+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[116+j] & 65535);
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[120+j] & 65535) << 16;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[124+j] & 65535);
	}
}

template<typename T>
void KAFOR_pack_32len_16bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 65535) << 24;
		des[4+j] = (src[j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 65535) << 24;
		des[8+j] = (src[8+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 65535) << 24;
		des[12+j] = (src[16+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 65535) << 24;
		des[16+j] = (src[24+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[32+j] & 65535) << 24;
		des[20+j] = (src[32+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[36+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[40+j] & 65535) << 24;
		des[24+j] = (src[40+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[44+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[48+j] & 65535) << 24;
		des[28+j] = (src[48+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[52+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[56+j] & 65535) << 24;
		des[32+j] = (src[56+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[60+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[64+j] & 65535) << 24;
		des[36+j] = (src[64+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[68+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[72+j] & 65535) << 24;
		des[40+j] = (src[72+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[76+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[80+j] & 65535) << 24;
		des[44+j] = (src[80+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[84+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[88+j] & 65535) << 24;
		des[48+j] = (src[88+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[92+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[96+j] & 65535) << 24;
		des[52+j] = (src[96+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[100+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[104+j] & 65535) << 24;
		des[56+j] = (src[104+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[108+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[112+j] & 65535) << 24;
		des[60+j] = (src[112+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[116+j] & 65535) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[120+j] & 65535) << 24;
		des[64+j] = (src[120+j] & 65535) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[124+j] & 65535) << 8;
	}
}

template<typename T>
void KAFOR_pack_32len_17bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 131071);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 131071) << 17;
		des[4+j] = (src[4+j] & 131071) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 131071) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 131071) << 19;
		des[8+j] = (src[12+j] & 131071) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 131071) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 131071) << 21;
		des[12+j] = (src[20+j] & 131071) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 131071) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 131071) << 23;
		des[16+j] = (src[28+j] & 131071) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[32+j] & 131071) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[36+j] & 131071) << 25;
		des[20+j] = (src[36+j] & 131071) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[40+j] & 131071) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[44+j] & 131071) << 27;
		des[24+j] = (src[44+j] & 131071) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[48+j] & 131071) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[52+j] & 131071) << 29;
		des[28+j] = (src[52+j] & 131071) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[56+j] & 131071) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[60+j] & 131071) << 31;
		des[32+j] = (src[60+j] & 131071) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[64+j] & 131071) << 16;
		des[36+j] = (src[64+j] & 131071) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[68+j] & 131071) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[72+j] & 131071) << 18;
		des[40+j] = (src[72+j] & 131071) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[76+j] & 131071) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[80+j] & 131071) << 20;
		des[44+j] = (src[80+j] & 131071) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[84+j] & 131071) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[88+j] & 131071) << 22;
		des[48+j] = (src[88+j] & 131071) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[92+j] & 131071) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[96+j] & 131071) << 24;
		des[52+j] = (src[96+j] & 131071) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[100+j] & 131071) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[104+j] & 131071) << 26;
		des[56+j] = (src[104+j] & 131071) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[108+j] & 131071) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[112+j] & 131071) << 28;
		des[60+j] = (src[112+j] & 131071) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[116+j] & 131071) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[120+j] & 131071) << 30;
		des[64+j] = (src[120+j] & 131071) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[124+j] & 131071) << 15;
	}
}

template<typename T>
void KAFOR_pack_32len_17bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 131071) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 131071) << 25;
		des[4+j] = (src[4+j] & 131071) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 131071) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 131071) << 27;
		des[8+j] = (src[12+j] & 131071) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 131071) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 131071) << 29;
		des[12+j] = (src[20+j] & 131071) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 131071) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 131071) << 31;
		des[16+j] = (src[28+j] & 131071) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[32+j] & 131071) << 16;
		des[20+j] = (src[32+j] & 131071) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[36+j] & 131071) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[40+j] & 131071) << 18;
		des[24+j] = (src[40+j] & 131071) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[44+j] & 131071) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[48+j] & 131071) << 20;
		des[28+j] = (src[48+j] & 131071) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[52+j] & 131071) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[56+j] & 131071) << 22;
		des[32+j] = (src[56+j] & 131071) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[60+j] & 131071) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[64+j] & 131071) << 24;
		des[36+j] = (src[64+j] & 131071) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[68+j] & 131071) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[72+j] & 131071) << 26;
		des[40+j] = (src[72+j] & 131071) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[76+j] & 131071) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[80+j] & 131071) << 28;
		des[44+j] = (src[80+j] & 131071) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[84+j] & 131071) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[88+j] & 131071) << 30;
		des[48+j] = (src[88+j] & 131071) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[92+j] & 131071) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[96+j] & 131071);
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[100+j] & 131071) << 17;
		des[56+j] = (src[100+j] & 131071) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[104+j] & 131071) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[108+j] & 131071) << 19;
		des[60+j] = (src[108+j] & 131071) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[112+j] & 131071) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[116+j] & 131071) << 21;
		des[64+j] = (src[116+j] & 131071) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[120+j] & 131071) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[124+j] & 131071) << 23;
		des[68+j] = (src[124+j] & 131071) >> 9;
	}
}

template<typename T>
void KAFOR_pack_32len_17bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 131071) << 16;
		des[4+j] = (src[j] & 131071) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 131071) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 131071) << 18;
		des[8+j] = (src[8+j] & 131071) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 131071) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 131071) << 20;
		des[12+j] = (src[16+j] & 131071) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 131071) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 131071) << 22;
		des[16+j] = (src[24+j] & 131071) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 131071) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[32+j] & 131071) << 24;
		des[20+j] = (src[32+j] & 131071) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[36+j] & 131071) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[40+j] & 131071) << 26;
		des[24+j] = (src[40+j] & 131071) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[44+j] & 131071) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[48+j] & 131071) << 28;
		des[28+j] = (src[48+j] & 131071) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[52+j] & 131071) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[56+j] & 131071) << 30;
		des[32+j] = (src[56+j] & 131071) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[60+j] & 131071) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[64+j] & 131071);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[68+j] & 131071) << 17;
		des[40+j] = (src[68+j] & 131071) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[72+j] & 131071) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[76+j] & 131071) << 19;
		des[44+j] = (src[76+j] & 131071) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[80+j] & 131071) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[84+j] & 131071) << 21;
		des[48+j] = (src[84+j] & 131071) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[88+j] & 131071) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[92+j] & 131071) << 23;
		des[52+j] = (src[92+j] & 131071) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[96+j] & 131071) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[100+j] & 131071) << 25;
		des[56+j] = (src[100+j] & 131071) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[104+j] & 131071) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[108+j] & 131071) << 27;
		des[60+j] = (src[108+j] & 131071) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[112+j] & 131071) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[116+j] & 131071) << 29;
		des[64+j] = (src[116+j] & 131071) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[120+j] & 131071) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[124+j] & 131071) << 31;
		des[68+j] = (src[124+j] & 131071) >> 1;
	}
}

template<typename T>
void KAFOR_pack_32len_17bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 131071) << 24;
		des[4+j] = (src[j] & 131071) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 131071) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 131071) << 26;
		des[8+j] = (src[8+j] & 131071) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 131071) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 131071) << 28;
		des[12+j] = (src[16+j] & 131071) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 131071) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 131071) << 30;
		des[16+j] = (src[24+j] & 131071) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 131071) << 15;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[32+j] & 131071);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[36+j] & 131071) << 17;
		des[24+j] = (src[36+j] & 131071) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[40+j] & 131071) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[44+j] & 131071) << 19;
		des[28+j] = (src[44+j] & 131071) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[48+j] & 131071) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[52+j] & 131071) << 21;
		des[32+j] = (src[52+j] & 131071) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[56+j] & 131071) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[60+j] & 131071) << 23;
		des[36+j] = (src[60+j] & 131071) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[64+j] & 131071) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[68+j] & 131071) << 25;
		des[40+j] = (src[68+j] & 131071) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[72+j] & 131071) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[76+j] & 131071) << 27;
		des[44+j] = (src[76+j] & 131071) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[80+j] & 131071) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[84+j] & 131071) << 29;
		des[48+j] = (src[84+j] & 131071) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[88+j] & 131071) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[92+j] & 131071) << 31;
		des[52+j] = (src[92+j] & 131071) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[96+j] & 131071) << 16;
		des[56+j] = (src[96+j] & 131071) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[100+j] & 131071) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[104+j] & 131071) << 18;
		des[60+j] = (src[104+j] & 131071) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[108+j] & 131071) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[112+j] & 131071) << 20;
		des[64+j] = (src[112+j] & 131071) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[116+j] & 131071) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[120+j] & 131071) << 22;
		des[68+j] = (src[120+j] & 131071) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[124+j] & 131071) << 7;
	}
}

template<typename T>
void KAFOR_pack_32len_18bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 262143);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 262143) << 18;
		des[4+j] = (src[4+j] & 262143) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 262143) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 262143) << 22;
		des[8+j] = (src[12+j] & 262143) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 262143) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 262143) << 26;
		des[12+j] = (src[20+j] & 262143) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 262143) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[28+j] & 262143) << 30;
		des[16+j] = (src[28+j] & 262143) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[32+j] & 262143) << 16;
		des[20+j] = (src[32+j] & 262143) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[36+j] & 262143) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[40+j] & 262143) << 20;
		des[24+j] = (src[40+j] & 262143) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[44+j] & 262143) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[48+j] & 262143) << 24;
		des[28+j] = (src[48+j] & 262143) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[52+j] & 262143) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[56+j] & 262143) << 28;
		des[32+j] = (src[56+j] & 262143) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[60+j] & 262143) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[64+j] & 262143);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[68+j] & 262143) << 18;
		des[40+j] = (src[68+j] & 262143) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[72+j] & 262143) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[76+j] & 262143) << 22;
		des[44+j] = (src[76+j] & 262143) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[80+j] & 262143) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[84+j] & 262143) << 26;
		des[48+j] = (src[84+j] & 262143) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[88+j] & 262143) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[92+j] & 262143) << 30;
		des[52+j] = (src[92+j] & 262143) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[96+j] & 262143) << 16;
		des[56+j] = (src[96+j] & 262143) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[100+j] & 262143) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[104+j] & 262143) << 20;
		des[60+j] = (src[104+j] & 262143) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[108+j] & 262143) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[112+j] & 262143) << 24;
		des[64+j] = (src[112+j] & 262143) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[116+j] & 262143) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[120+j] & 262143) << 28;
		des[68+j] = (src[120+j] & 262143) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[124+j] & 262143) << 14;
	}
}

template<typename T>
void KAFOR_pack_32len_18bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 262143) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 262143) << 26;
		des[4+j] = (src[4+j] & 262143) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 262143) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 262143) << 30;
		des[8+j] = (src[12+j] & 262143) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 262143) << 16;
		des[12+j] = (src[16+j] & 262143) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 262143) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 262143) << 20;
		des[16+j] = (src[24+j] & 262143) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 262143) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[32+j] & 262143) << 24;
		des[20+j] = (src[32+j] & 262143) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[36+j] & 262143) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[40+j] & 262143) << 28;
		des[24+j] = (src[40+j] & 262143) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[44+j] & 262143) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[48+j] & 262143);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[52+j] & 262143) << 18;
		des[32+j] = (src[52+j] & 262143) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[56+j] & 262143) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[60+j] & 262143) << 22;
		des[36+j] = (src[60+j] & 262143) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[64+j] & 262143) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[68+j] & 262143) << 26;
		des[40+j] = (src[68+j] & 262143) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[72+j] & 262143) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[76+j] & 262143) << 30;
		des[44+j] = (src[76+j] & 262143) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[80+j] & 262143) << 16;
		des[48+j] = (src[80+j] & 262143) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[84+j] & 262143) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[88+j] & 262143) << 20;
		des[52+j] = (src[88+j] & 262143) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[92+j] & 262143) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[96+j] & 262143) << 24;
		des[56+j] = (src[96+j] & 262143) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[100+j] & 262143) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[104+j] & 262143) << 28;
		des[60+j] = (src[104+j] & 262143) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[108+j] & 262143) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[112+j] & 262143);
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[116+j] & 262143) << 18;
		des[68+j] = (src[116+j] & 262143) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[120+j] & 262143) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[124+j] & 262143) << 22;
		des[72+j] = (src[124+j] & 262143) >> 10;
	}
}

template<typename T>
void KAFOR_pack_32len_18bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 262143) << 16;
		des[4+j] = (src[j] & 262143) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 262143) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 262143) << 20;
		des[8+j] = (src[8+j] & 262143) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 262143) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 262143) << 24;
		des[12+j] = (src[16+j] & 262143) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 262143) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 262143) << 28;
		des[16+j] = (src[24+j] & 262143) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 262143) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[32+j] & 262143);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[36+j] & 262143) << 18;
		des[24+j] = (src[36+j] & 262143) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[40+j] & 262143) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[44+j] & 262143) << 22;
		des[28+j] = (src[44+j] & 262143) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[48+j] & 262143) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[52+j] & 262143) << 26;
		des[32+j] = (src[52+j] & 262143) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[56+j] & 262143) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[60+j] & 262143) << 30;
		des[36+j] = (src[60+j] & 262143) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[64+j] & 262143) << 16;
		des[40+j] = (src[64+j] & 262143) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[68+j] & 262143) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[72+j] & 262143) << 20;
		des[44+j] = (src[72+j] & 262143) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[76+j] & 262143) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[80+j] & 262143) << 24;
		des[48+j] = (src[80+j] & 262143) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[84+j] & 262143) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[88+j] & 262143) << 28;
		des[52+j] = (src[88+j] & 262143) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[92+j] & 262143) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[96+j] & 262143);
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[100+j] & 262143) << 18;
		des[60+j] = (src[100+j] & 262143) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[104+j] & 262143) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[108+j] & 262143) << 22;
		des[64+j] = (src[108+j] & 262143) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[112+j] & 262143) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[116+j] & 262143) << 26;
		des[68+j] = (src[116+j] & 262143) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[120+j] & 262143) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[124+j] & 262143) << 30;
		des[72+j] = (src[124+j] & 262143) >> 2;
	}
}

template<typename T>
void KAFOR_pack_32len_18bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 262143) << 24;
		des[4+j] = (src[j] & 262143) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 262143) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 262143) << 28;
		des[8+j] = (src[8+j] & 262143) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 262143) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[16+j] & 262143);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 262143) << 18;
		des[16+j] = (src[20+j] & 262143) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 262143) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 262143) << 22;
		des[20+j] = (src[28+j] & 262143) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[32+j] & 262143) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[36+j] & 262143) << 26;
		des[24+j] = (src[36+j] & 262143) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[40+j] & 262143) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[44+j] & 262143) << 30;
		des[28+j] = (src[44+j] & 262143) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[48+j] & 262143) << 16;
		des[32+j] = (src[48+j] & 262143) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[52+j] & 262143) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[56+j] & 262143) << 20;
		des[36+j] = (src[56+j] & 262143) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[60+j] & 262143) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[64+j] & 262143) << 24;
		des[40+j] = (src[64+j] & 262143) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[68+j] & 262143) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[72+j] & 262143) << 28;
		des[44+j] = (src[72+j] & 262143) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[76+j] & 262143) << 14;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[80+j] & 262143);
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[84+j] & 262143) << 18;
		des[52+j] = (src[84+j] & 262143) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[88+j] & 262143) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[92+j] & 262143) << 22;
		des[56+j] = (src[92+j] & 262143) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[96+j] & 262143) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[100+j] & 262143) << 26;
		des[60+j] = (src[100+j] & 262143) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[104+j] & 262143) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[108+j] & 262143) << 30;
		des[64+j] = (src[108+j] & 262143) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[112+j] & 262143) << 16;
		des[68+j] = (src[112+j] & 262143) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[116+j] & 262143) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[120+j] & 262143) << 20;
		des[72+j] = (src[120+j] & 262143) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[124+j] & 262143) << 6;
	}
}

template<typename T>
void KAFOR_pack_32len_19bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 524287);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 524287) << 19;
		des[4+j] = (src[4+j] & 524287) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 524287) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 524287) << 25;
		des[8+j] = (src[12+j] & 524287) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 524287) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[20+j] & 524287) << 31;
		des[12+j] = (src[20+j] & 524287) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 524287) << 18;
		des[16+j] = (src[24+j] & 524287) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 524287) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[32+j] & 524287) << 24;
		des[20+j] = (src[32+j] & 524287) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[36+j] & 524287) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[40+j] & 524287) << 30;
		des[24+j] = (src[40+j] & 524287) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[44+j] & 524287) << 17;
		des[28+j] = (src[44+j] & 524287) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[48+j] & 524287) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[52+j] & 524287) << 23;
		des[32+j] = (src[52+j] & 524287) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[56+j] & 524287) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[60+j] & 524287) << 29;
		des[36+j] = (src[60+j] & 524287) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[64+j] & 524287) << 16;
		des[40+j] = (src[64+j] & 524287) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[68+j] & 524287) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[72+j] & 524287) << 22;
		des[44+j] = (src[72+j] & 524287) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[76+j] & 524287) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[80+j] & 524287) << 28;
		des[48+j] = (src[80+j] & 524287) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[84+j] & 524287) << 15;
		des[52+j] = (src[84+j] & 524287) >> 17;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[88+j] & 524287) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[92+j] & 524287) << 21;
		des[56+j] = (src[92+j] & 524287) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[96+j] & 524287) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[100+j] & 524287) << 27;
		des[60+j] = (src[100+j] & 524287) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[104+j] & 524287) << 14;
		des[64+j] = (src[104+j] & 524287) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[108+j] & 524287) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[112+j] & 524287) << 20;
		des[68+j] = (src[112+j] & 524287) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[116+j] & 524287) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[120+j] & 524287) << 26;
		des[72+j] = (src[120+j] & 524287) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[124+j] & 524287) << 13;
	}
}

template<typename T>
void KAFOR_pack_32len_19bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 524287) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 524287) << 27;
		des[4+j] = (src[4+j] & 524287) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 524287) << 14;
		des[8+j] = (src[8+j] & 524287) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 524287) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 524287) << 20;
		des[12+j] = (src[16+j] & 524287) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 524287) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 524287) << 26;
		des[16+j] = (src[24+j] & 524287) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 524287) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[32+j] & 524287);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[36+j] & 524287) << 19;
		des[24+j] = (src[36+j] & 524287) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[40+j] & 524287) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[44+j] & 524287) << 25;
		des[28+j] = (src[44+j] & 524287) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[48+j] & 524287) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[52+j] & 524287) << 31;
		des[32+j] = (src[52+j] & 524287) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[56+j] & 524287) << 18;
		des[36+j] = (src[56+j] & 524287) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[60+j] & 524287) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[64+j] & 524287) << 24;
		des[40+j] = (src[64+j] & 524287) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[68+j] & 524287) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[72+j] & 524287) << 30;
		des[44+j] = (src[72+j] & 524287) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[76+j] & 524287) << 17;
		des[48+j] = (src[76+j] & 524287) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[80+j] & 524287) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[84+j] & 524287) << 23;
		des[52+j] = (src[84+j] & 524287) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[88+j] & 524287) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[92+j] & 524287) << 29;
		des[56+j] = (src[92+j] & 524287) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[96+j] & 524287) << 16;
		des[60+j] = (src[96+j] & 524287) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[100+j] & 524287) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[104+j] & 524287) << 22;
		des[64+j] = (src[104+j] & 524287) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[108+j] & 524287) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[112+j] & 524287) << 28;
		des[68+j] = (src[112+j] & 524287) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[116+j] & 524287) << 15;
		des[72+j] = (src[116+j] & 524287) >> 17;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[120+j] & 524287) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[124+j] & 524287) << 21;
		des[76+j] = (src[124+j] & 524287) >> 11;
	}
}

template<typename T>
void KAFOR_pack_32len_19bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 524287) << 16;
		des[4+j] = (src[j] & 524287) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 524287) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 524287) << 22;
		des[8+j] = (src[8+j] & 524287) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 524287) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 524287) << 28;
		des[12+j] = (src[16+j] & 524287) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 524287) << 15;
		des[16+j] = (src[20+j] & 524287) >> 17;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 524287) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 524287) << 21;
		des[20+j] = (src[28+j] & 524287) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[32+j] & 524287) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[36+j] & 524287) << 27;
		des[24+j] = (src[36+j] & 524287) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[40+j] & 524287) << 14;
		des[28+j] = (src[40+j] & 524287) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[44+j] & 524287) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[48+j] & 524287) << 20;
		des[32+j] = (src[48+j] & 524287) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[52+j] & 524287) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[56+j] & 524287) << 26;
		des[36+j] = (src[56+j] & 524287) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[60+j] & 524287) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[64+j] & 524287);
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[68+j] & 524287) << 19;
		des[44+j] = (src[68+j] & 524287) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[72+j] & 524287) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[76+j] & 524287) << 25;
		des[48+j] = (src[76+j] & 524287) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[80+j] & 524287) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[84+j] & 524287) << 31;
		des[52+j] = (src[84+j] & 524287) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[88+j] & 524287) << 18;
		des[56+j] = (src[88+j] & 524287) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[92+j] & 524287) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[96+j] & 524287) << 24;
		des[60+j] = (src[96+j] & 524287) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[100+j] & 524287) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[104+j] & 524287) << 30;
		des[64+j] = (src[104+j] & 524287) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[108+j] & 524287) << 17;
		des[68+j] = (src[108+j] & 524287) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[112+j] & 524287) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[116+j] & 524287) << 23;
		des[72+j] = (src[116+j] & 524287) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[120+j] & 524287) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[124+j] & 524287) << 29;
		des[76+j] = (src[124+j] & 524287) >> 3;
	}
}

template<typename T>
void KAFOR_pack_32len_19bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 524287) << 24;
		des[4+j] = (src[j] & 524287) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 524287) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 524287) << 30;
		des[8+j] = (src[8+j] & 524287) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 524287) << 17;
		des[12+j] = (src[12+j] & 524287) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 524287) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 524287) << 23;
		des[16+j] = (src[20+j] & 524287) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 524287) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 524287) << 29;
		des[20+j] = (src[28+j] & 524287) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[32+j] & 524287) << 16;
		des[24+j] = (src[32+j] & 524287) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[36+j] & 524287) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[40+j] & 524287) << 22;
		des[28+j] = (src[40+j] & 524287) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[44+j] & 524287) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[48+j] & 524287) << 28;
		des[32+j] = (src[48+j] & 524287) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[52+j] & 524287) << 15;
		des[36+j] = (src[52+j] & 524287) >> 17;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[56+j] & 524287) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[60+j] & 524287) << 21;
		des[40+j] = (src[60+j] & 524287) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[64+j] & 524287) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[68+j] & 524287) << 27;
		des[44+j] = (src[68+j] & 524287) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[72+j] & 524287) << 14;
		des[48+j] = (src[72+j] & 524287) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[76+j] & 524287) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[80+j] & 524287) << 20;
		des[52+j] = (src[80+j] & 524287) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[84+j] & 524287) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[88+j] & 524287) << 26;
		des[56+j] = (src[88+j] & 524287) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[92+j] & 524287) << 13;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[96+j] & 524287);
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[100+j] & 524287) << 19;
		des[64+j] = (src[100+j] & 524287) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[104+j] & 524287) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[108+j] & 524287) << 25;
		des[68+j] = (src[108+j] & 524287) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[112+j] & 524287) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[116+j] & 524287) << 31;
		des[72+j] = (src[116+j] & 524287) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[120+j] & 524287) << 18;
		des[76+j] = (src[120+j] & 524287) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[124+j] & 524287) << 5;
	}
}

template<typename T>
void KAFOR_pack_32len_20bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 1048575);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 1048575) << 20;
		des[4+j] = (src[4+j] & 1048575) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 1048575) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 1048575) << 28;
		des[8+j] = (src[12+j] & 1048575) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 1048575) << 16;
		des[12+j] = (src[16+j] & 1048575) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 1048575) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 1048575) << 24;
		des[16+j] = (src[24+j] & 1048575) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 1048575) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[32+j] & 1048575);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[36+j] & 1048575) << 20;
		des[24+j] = (src[36+j] & 1048575) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[40+j] & 1048575) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[44+j] & 1048575) << 28;
		des[28+j] = (src[44+j] & 1048575) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[48+j] & 1048575) << 16;
		des[32+j] = (src[48+j] & 1048575) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[52+j] & 1048575) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[56+j] & 1048575) << 24;
		des[36+j] = (src[56+j] & 1048575) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[60+j] & 1048575) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[64+j] & 1048575);
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[68+j] & 1048575) << 20;
		des[44+j] = (src[68+j] & 1048575) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[72+j] & 1048575) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[76+j] & 1048575) << 28;
		des[48+j] = (src[76+j] & 1048575) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[80+j] & 1048575) << 16;
		des[52+j] = (src[80+j] & 1048575) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[84+j] & 1048575) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[88+j] & 1048575) << 24;
		des[56+j] = (src[88+j] & 1048575) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[92+j] & 1048575) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[96+j] & 1048575);
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[100+j] & 1048575) << 20;
		des[64+j] = (src[100+j] & 1048575) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[104+j] & 1048575) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[108+j] & 1048575) << 28;
		des[68+j] = (src[108+j] & 1048575) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[112+j] & 1048575) << 16;
		des[72+j] = (src[112+j] & 1048575) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[116+j] & 1048575) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[120+j] & 1048575) << 24;
		des[76+j] = (src[120+j] & 1048575) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[124+j] & 1048575) << 12;
	}
}

template<typename T>
void KAFOR_pack_32len_20bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 1048575) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 1048575) << 28;
		des[4+j] = (src[4+j] & 1048575) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 1048575) << 16;
		des[8+j] = (src[8+j] & 1048575) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 1048575) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 1048575) << 24;
		des[12+j] = (src[16+j] & 1048575) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 1048575) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[24+j] & 1048575);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 1048575) << 20;
		des[20+j] = (src[28+j] & 1048575) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[32+j] & 1048575) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[36+j] & 1048575) << 28;
		des[24+j] = (src[36+j] & 1048575) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[40+j] & 1048575) << 16;
		des[28+j] = (src[40+j] & 1048575) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[44+j] & 1048575) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[48+j] & 1048575) << 24;
		des[32+j] = (src[48+j] & 1048575) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[52+j] & 1048575) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[56+j] & 1048575);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[60+j] & 1048575) << 20;
		des[40+j] = (src[60+j] & 1048575) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[64+j] & 1048575) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[68+j] & 1048575) << 28;
		des[44+j] = (src[68+j] & 1048575) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[72+j] & 1048575) << 16;
		des[48+j] = (src[72+j] & 1048575) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[76+j] & 1048575) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[80+j] & 1048575) << 24;
		des[52+j] = (src[80+j] & 1048575) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[84+j] & 1048575) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[88+j] & 1048575);
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[92+j] & 1048575) << 20;
		des[60+j] = (src[92+j] & 1048575) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[96+j] & 1048575) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[100+j] & 1048575) << 28;
		des[64+j] = (src[100+j] & 1048575) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[104+j] & 1048575) << 16;
		des[68+j] = (src[104+j] & 1048575) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[108+j] & 1048575) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[112+j] & 1048575) << 24;
		des[72+j] = (src[112+j] & 1048575) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[116+j] & 1048575) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[120+j] & 1048575);
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[124+j] & 1048575) << 20;
		des[80+j] = (src[124+j] & 1048575) >> 12;
	}
}

template<typename T>
void KAFOR_pack_32len_20bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 1048575) << 16;
		des[4+j] = (src[j] & 1048575) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 1048575) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 1048575) << 24;
		des[8+j] = (src[8+j] & 1048575) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 1048575) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[16+j] & 1048575);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 1048575) << 20;
		des[16+j] = (src[20+j] & 1048575) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 1048575) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 1048575) << 28;
		des[20+j] = (src[28+j] & 1048575) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[32+j] & 1048575) << 16;
		des[24+j] = (src[32+j] & 1048575) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[36+j] & 1048575) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[40+j] & 1048575) << 24;
		des[28+j] = (src[40+j] & 1048575) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[44+j] & 1048575) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[48+j] & 1048575);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[52+j] & 1048575) << 20;
		des[36+j] = (src[52+j] & 1048575) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[56+j] & 1048575) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[60+j] & 1048575) << 28;
		des[40+j] = (src[60+j] & 1048575) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[64+j] & 1048575) << 16;
		des[44+j] = (src[64+j] & 1048575) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[68+j] & 1048575) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[72+j] & 1048575) << 24;
		des[48+j] = (src[72+j] & 1048575) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[76+j] & 1048575) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[80+j] & 1048575);
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[84+j] & 1048575) << 20;
		des[56+j] = (src[84+j] & 1048575) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[88+j] & 1048575) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[92+j] & 1048575) << 28;
		des[60+j] = (src[92+j] & 1048575) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[96+j] & 1048575) << 16;
		des[64+j] = (src[96+j] & 1048575) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[100+j] & 1048575) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[104+j] & 1048575) << 24;
		des[68+j] = (src[104+j] & 1048575) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[108+j] & 1048575) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[112+j] & 1048575);
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[116+j] & 1048575) << 20;
		des[76+j] = (src[116+j] & 1048575) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[120+j] & 1048575) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[124+j] & 1048575) << 28;
		des[80+j] = (src[124+j] & 1048575) >> 4;
	}
}

template<typename T>
void KAFOR_pack_32len_20bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 1048575) << 24;
		des[4+j] = (src[j] & 1048575) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 1048575) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] & 1048575);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 1048575) << 20;
		des[12+j] = (src[12+j] & 1048575) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 1048575) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 1048575) << 28;
		des[16+j] = (src[20+j] & 1048575) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 1048575) << 16;
		des[20+j] = (src[24+j] & 1048575) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 1048575) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[32+j] & 1048575) << 24;
		des[24+j] = (src[32+j] & 1048575) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[36+j] & 1048575) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[40+j] & 1048575);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[44+j] & 1048575) << 20;
		des[32+j] = (src[44+j] & 1048575) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[48+j] & 1048575) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[52+j] & 1048575) << 28;
		des[36+j] = (src[52+j] & 1048575) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[56+j] & 1048575) << 16;
		des[40+j] = (src[56+j] & 1048575) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[60+j] & 1048575) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[64+j] & 1048575) << 24;
		des[44+j] = (src[64+j] & 1048575) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[68+j] & 1048575) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[72+j] & 1048575);
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[76+j] & 1048575) << 20;
		des[52+j] = (src[76+j] & 1048575) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[80+j] & 1048575) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[84+j] & 1048575) << 28;
		des[56+j] = (src[84+j] & 1048575) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[88+j] & 1048575) << 16;
		des[60+j] = (src[88+j] & 1048575) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[92+j] & 1048575) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[96+j] & 1048575) << 24;
		des[64+j] = (src[96+j] & 1048575) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[100+j] & 1048575) << 12;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[104+j] & 1048575);
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[108+j] & 1048575) << 20;
		des[72+j] = (src[108+j] & 1048575) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[112+j] & 1048575) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[116+j] & 1048575) << 28;
		des[76+j] = (src[116+j] & 1048575) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[120+j] & 1048575) << 16;
		des[80+j] = (src[120+j] & 1048575) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[124+j] & 1048575) << 4;
	}
}

template<typename T>
void KAFOR_pack_32len_21bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 2097151);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 2097151) << 21;
		des[4+j] = (src[4+j] & 2097151) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 2097151) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[12+j] & 2097151) << 31;
		des[8+j] = (src[12+j] & 2097151) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 2097151) << 20;
		des[12+j] = (src[16+j] & 2097151) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 2097151) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[24+j] & 2097151) << 30;
		des[16+j] = (src[24+j] & 2097151) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 2097151) << 19;
		des[20+j] = (src[28+j] & 2097151) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[32+j] & 2097151) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[36+j] & 2097151) << 29;
		des[24+j] = (src[36+j] & 2097151) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[40+j] & 2097151) << 18;
		des[28+j] = (src[40+j] & 2097151) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[44+j] & 2097151) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[48+j] & 2097151) << 28;
		des[32+j] = (src[48+j] & 2097151) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[52+j] & 2097151) << 17;
		des[36+j] = (src[52+j] & 2097151) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[56+j] & 2097151) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[60+j] & 2097151) << 27;
		des[40+j] = (src[60+j] & 2097151) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[64+j] & 2097151) << 16;
		des[44+j] = (src[64+j] & 2097151) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[68+j] & 2097151) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[72+j] & 2097151) << 26;
		des[48+j] = (src[72+j] & 2097151) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[76+j] & 2097151) << 15;
		des[52+j] = (src[76+j] & 2097151) >> 17;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[80+j] & 2097151) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[84+j] & 2097151) << 25;
		des[56+j] = (src[84+j] & 2097151) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[88+j] & 2097151) << 14;
		des[60+j] = (src[88+j] & 2097151) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[92+j] & 2097151) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[96+j] & 2097151) << 24;
		des[64+j] = (src[96+j] & 2097151) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[100+j] & 2097151) << 13;
		des[68+j] = (src[100+j] & 2097151) >> 19;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[104+j] & 2097151) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[108+j] & 2097151) << 23;
		des[72+j] = (src[108+j] & 2097151) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[112+j] & 2097151) << 12;
		des[76+j] = (src[112+j] & 2097151) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[116+j] & 2097151) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[120+j] & 2097151) << 22;
		des[80+j] = (src[120+j] & 2097151) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[124+j] & 2097151) << 11;
	}
}

template<typename T>
void KAFOR_pack_32len_21bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 2097151) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 2097151) << 29;
		des[4+j] = (src[4+j] & 2097151) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 2097151) << 18;
		des[8+j] = (src[8+j] & 2097151) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 2097151) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 2097151) << 28;
		des[12+j] = (src[16+j] & 2097151) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 2097151) << 17;
		des[16+j] = (src[20+j] & 2097151) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 2097151) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 2097151) << 27;
		des[20+j] = (src[28+j] & 2097151) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[32+j] & 2097151) << 16;
		des[24+j] = (src[32+j] & 2097151) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[36+j] & 2097151) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[40+j] & 2097151) << 26;
		des[28+j] = (src[40+j] & 2097151) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[44+j] & 2097151) << 15;
		des[32+j] = (src[44+j] & 2097151) >> 17;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[48+j] & 2097151) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[52+j] & 2097151) << 25;
		des[36+j] = (src[52+j] & 2097151) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[56+j] & 2097151) << 14;
		des[40+j] = (src[56+j] & 2097151) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[60+j] & 2097151) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[64+j] & 2097151) << 24;
		des[44+j] = (src[64+j] & 2097151) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[68+j] & 2097151) << 13;
		des[48+j] = (src[68+j] & 2097151) >> 19;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[72+j] & 2097151) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[76+j] & 2097151) << 23;
		des[52+j] = (src[76+j] & 2097151) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[80+j] & 2097151) << 12;
		des[56+j] = (src[80+j] & 2097151) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[84+j] & 2097151) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[88+j] & 2097151) << 22;
		des[60+j] = (src[88+j] & 2097151) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[92+j] & 2097151) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[96+j] & 2097151);
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[100+j] & 2097151) << 21;
		des[68+j] = (src[100+j] & 2097151) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[104+j] & 2097151) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[108+j] & 2097151) << 31;
		des[72+j] = (src[108+j] & 2097151) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[112+j] & 2097151) << 20;
		des[76+j] = (src[112+j] & 2097151) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[116+j] & 2097151) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[120+j] & 2097151) << 30;
		des[80+j] = (src[120+j] & 2097151) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[124+j] & 2097151) << 19;
		des[84+j] = (src[124+j] & 2097151) >> 13;
	}
}

template<typename T>
void KAFOR_pack_32len_21bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 2097151) << 16;
		des[4+j] = (src[j] & 2097151) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 2097151) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 2097151) << 26;
		des[8+j] = (src[8+j] & 2097151) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 2097151) << 15;
		des[12+j] = (src[12+j] & 2097151) >> 17;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 2097151) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 2097151) << 25;
		des[16+j] = (src[20+j] & 2097151) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 2097151) << 14;
		des[20+j] = (src[24+j] & 2097151) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 2097151) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[32+j] & 2097151) << 24;
		des[24+j] = (src[32+j] & 2097151) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[36+j] & 2097151) << 13;
		des[28+j] = (src[36+j] & 2097151) >> 19;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[40+j] & 2097151) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[44+j] & 2097151) << 23;
		des[32+j] = (src[44+j] & 2097151) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[48+j] & 2097151) << 12;
		des[36+j] = (src[48+j] & 2097151) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[52+j] & 2097151) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[56+j] & 2097151) << 22;
		des[40+j] = (src[56+j] & 2097151) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[60+j] & 2097151) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[64+j] & 2097151);
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[68+j] & 2097151) << 21;
		des[48+j] = (src[68+j] & 2097151) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[72+j] & 2097151) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[76+j] & 2097151) << 31;
		des[52+j] = (src[76+j] & 2097151) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[80+j] & 2097151) << 20;
		des[56+j] = (src[80+j] & 2097151) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[84+j] & 2097151) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[88+j] & 2097151) << 30;
		des[60+j] = (src[88+j] & 2097151) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[92+j] & 2097151) << 19;
		des[64+j] = (src[92+j] & 2097151) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[96+j] & 2097151) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[100+j] & 2097151) << 29;
		des[68+j] = (src[100+j] & 2097151) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[104+j] & 2097151) << 18;
		des[72+j] = (src[104+j] & 2097151) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[108+j] & 2097151) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[112+j] & 2097151) << 28;
		des[76+j] = (src[112+j] & 2097151) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[116+j] & 2097151) << 17;
		des[80+j] = (src[116+j] & 2097151) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[120+j] & 2097151) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[124+j] & 2097151) << 27;
		des[84+j] = (src[124+j] & 2097151) >> 5;
	}
}

template<typename T>
void KAFOR_pack_32len_21bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 2097151) << 24;
		des[4+j] = (src[j] & 2097151) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 2097151) << 13;
		des[8+j] = (src[4+j] & 2097151) >> 19;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 2097151) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 2097151) << 23;
		des[12+j] = (src[12+j] & 2097151) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 2097151) << 12;
		des[16+j] = (src[16+j] & 2097151) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 2097151) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 2097151) << 22;
		des[20+j] = (src[24+j] & 2097151) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 2097151) << 11;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[32+j] & 2097151);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[36+j] & 2097151) << 21;
		des[28+j] = (src[36+j] & 2097151) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[40+j] & 2097151) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[44+j] & 2097151) << 31;
		des[32+j] = (src[44+j] & 2097151) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[48+j] & 2097151) << 20;
		des[36+j] = (src[48+j] & 2097151) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[52+j] & 2097151) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[56+j] & 2097151) << 30;
		des[40+j] = (src[56+j] & 2097151) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[60+j] & 2097151) << 19;
		des[44+j] = (src[60+j] & 2097151) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[64+j] & 2097151) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[68+j] & 2097151) << 29;
		des[48+j] = (src[68+j] & 2097151) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[72+j] & 2097151) << 18;
		des[52+j] = (src[72+j] & 2097151) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[76+j] & 2097151) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[80+j] & 2097151) << 28;
		des[56+j] = (src[80+j] & 2097151) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[84+j] & 2097151) << 17;
		des[60+j] = (src[84+j] & 2097151) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[88+j] & 2097151) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[92+j] & 2097151) << 27;
		des[64+j] = (src[92+j] & 2097151) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[96+j] & 2097151) << 16;
		des[68+j] = (src[96+j] & 2097151) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[100+j] & 2097151) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[104+j] & 2097151) << 26;
		des[72+j] = (src[104+j] & 2097151) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[108+j] & 2097151) << 15;
		des[76+j] = (src[108+j] & 2097151) >> 17;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[112+j] & 2097151) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[116+j] & 2097151) << 25;
		des[80+j] = (src[116+j] & 2097151) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[120+j] & 2097151) << 14;
		des[84+j] = (src[120+j] & 2097151) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[124+j] & 2097151) << 3;
	}
}

template<typename T>
void KAFOR_pack_32len_22bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 4194303);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 4194303) << 22;
		des[4+j] = (src[4+j] & 4194303) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 4194303) << 12;
		des[8+j] = (src[8+j] & 4194303) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 4194303) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 4194303) << 24;
		des[12+j] = (src[16+j] & 4194303) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 4194303) << 14;
		des[16+j] = (src[20+j] & 4194303) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 4194303) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[28+j] & 4194303) << 26;
		des[20+j] = (src[28+j] & 4194303) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[32+j] & 4194303) << 16;
		des[24+j] = (src[32+j] & 4194303) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[36+j] & 4194303) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[40+j] & 4194303) << 28;
		des[28+j] = (src[40+j] & 4194303) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[44+j] & 4194303) << 18;
		des[32+j] = (src[44+j] & 4194303) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[48+j] & 4194303) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[52+j] & 4194303) << 30;
		des[36+j] = (src[52+j] & 4194303) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[56+j] & 4194303) << 20;
		des[40+j] = (src[56+j] & 4194303) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[60+j] & 4194303) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[64+j] & 4194303);
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[68+j] & 4194303) << 22;
		des[48+j] = (src[68+j] & 4194303) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[72+j] & 4194303) << 12;
		des[52+j] = (src[72+j] & 4194303) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[76+j] & 4194303) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[80+j] & 4194303) << 24;
		des[56+j] = (src[80+j] & 4194303) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[84+j] & 4194303) << 14;
		des[60+j] = (src[84+j] & 4194303) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[88+j] & 4194303) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[92+j] & 4194303) << 26;
		des[64+j] = (src[92+j] & 4194303) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[96+j] & 4194303) << 16;
		des[68+j] = (src[96+j] & 4194303) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[100+j] & 4194303) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[104+j] & 4194303) << 28;
		des[72+j] = (src[104+j] & 4194303) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[108+j] & 4194303) << 18;
		des[76+j] = (src[108+j] & 4194303) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[112+j] & 4194303) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[116+j] & 4194303) << 30;
		des[80+j] = (src[116+j] & 4194303) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[120+j] & 4194303) << 20;
		des[84+j] = (src[120+j] & 4194303) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[124+j] & 4194303) << 10;
	}
}

template<typename T>
void KAFOR_pack_32len_22bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 4194303) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 4194303) << 30;
		des[4+j] = (src[4+j] & 4194303) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 4194303) << 20;
		des[8+j] = (src[8+j] & 4194303) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 4194303) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[16+j] & 4194303);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 4194303) << 22;
		des[16+j] = (src[20+j] & 4194303) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 4194303) << 12;
		des[20+j] = (src[24+j] & 4194303) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 4194303) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[32+j] & 4194303) << 24;
		des[24+j] = (src[32+j] & 4194303) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[36+j] & 4194303) << 14;
		des[28+j] = (src[36+j] & 4194303) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[40+j] & 4194303) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[44+j] & 4194303) << 26;
		des[32+j] = (src[44+j] & 4194303) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[48+j] & 4194303) << 16;
		des[36+j] = (src[48+j] & 4194303) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[52+j] & 4194303) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[56+j] & 4194303) << 28;
		des[40+j] = (src[56+j] & 4194303) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[60+j] & 4194303) << 18;
		des[44+j] = (src[60+j] & 4194303) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[64+j] & 4194303) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[68+j] & 4194303) << 30;
		des[48+j] = (src[68+j] & 4194303) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[72+j] & 4194303) << 20;
		des[52+j] = (src[72+j] & 4194303) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[76+j] & 4194303) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[80+j] & 4194303);
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[84+j] & 4194303) << 22;
		des[60+j] = (src[84+j] & 4194303) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[88+j] & 4194303) << 12;
		des[64+j] = (src[88+j] & 4194303) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[92+j] & 4194303) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[96+j] & 4194303) << 24;
		des[68+j] = (src[96+j] & 4194303) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[100+j] & 4194303) << 14;
		des[72+j] = (src[100+j] & 4194303) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[104+j] & 4194303) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[108+j] & 4194303) << 26;
		des[76+j] = (src[108+j] & 4194303) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[112+j] & 4194303) << 16;
		des[80+j] = (src[112+j] & 4194303) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[116+j] & 4194303) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[120+j] & 4194303) << 28;
		des[84+j] = (src[120+j] & 4194303) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[124+j] & 4194303) << 18;
		des[88+j] = (src[124+j] & 4194303) >> 14;
	}
}

template<typename T>
void KAFOR_pack_32len_22bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 4194303) << 16;
		des[4+j] = (src[j] & 4194303) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 4194303) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 4194303) << 28;
		des[8+j] = (src[8+j] & 4194303) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 4194303) << 18;
		des[12+j] = (src[12+j] & 4194303) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 4194303) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 4194303) << 30;
		des[16+j] = (src[20+j] & 4194303) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 4194303) << 20;
		des[20+j] = (src[24+j] & 4194303) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 4194303) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[32+j] & 4194303);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[36+j] & 4194303) << 22;
		des[28+j] = (src[36+j] & 4194303) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[40+j] & 4194303) << 12;
		des[32+j] = (src[40+j] & 4194303) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[44+j] & 4194303) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[48+j] & 4194303) << 24;
		des[36+j] = (src[48+j] & 4194303) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[52+j] & 4194303) << 14;
		des[40+j] = (src[52+j] & 4194303) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[56+j] & 4194303) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[60+j] & 4194303) << 26;
		des[44+j] = (src[60+j] & 4194303) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[64+j] & 4194303) << 16;
		des[48+j] = (src[64+j] & 4194303) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[68+j] & 4194303) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[72+j] & 4194303) << 28;
		des[52+j] = (src[72+j] & 4194303) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[76+j] & 4194303) << 18;
		des[56+j] = (src[76+j] & 4194303) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[80+j] & 4194303) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[84+j] & 4194303) << 30;
		des[60+j] = (src[84+j] & 4194303) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[88+j] & 4194303) << 20;
		des[64+j] = (src[88+j] & 4194303) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[92+j] & 4194303) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[96+j] & 4194303);
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[100+j] & 4194303) << 22;
		des[72+j] = (src[100+j] & 4194303) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[104+j] & 4194303) << 12;
		des[76+j] = (src[104+j] & 4194303) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[108+j] & 4194303) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[112+j] & 4194303) << 24;
		des[80+j] = (src[112+j] & 4194303) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[116+j] & 4194303) << 14;
		des[84+j] = (src[116+j] & 4194303) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[120+j] & 4194303) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[124+j] & 4194303) << 26;
		des[88+j] = (src[124+j] & 4194303) >> 6;
	}
}

template<typename T>
void KAFOR_pack_32len_22bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 4194303) << 24;
		des[4+j] = (src[j] & 4194303) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 4194303) << 14;
		des[8+j] = (src[4+j] & 4194303) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 4194303) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 4194303) << 26;
		des[12+j] = (src[12+j] & 4194303) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 4194303) << 16;
		des[16+j] = (src[16+j] & 4194303) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 4194303) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 4194303) << 28;
		des[20+j] = (src[24+j] & 4194303) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 4194303) << 18;
		des[24+j] = (src[28+j] & 4194303) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[32+j] & 4194303) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[36+j] & 4194303) << 30;
		des[28+j] = (src[36+j] & 4194303) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[40+j] & 4194303) << 20;
		des[32+j] = (src[40+j] & 4194303) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[44+j] & 4194303) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[48+j] & 4194303);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[52+j] & 4194303) << 22;
		des[40+j] = (src[52+j] & 4194303) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[56+j] & 4194303) << 12;
		des[44+j] = (src[56+j] & 4194303) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[60+j] & 4194303) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[64+j] & 4194303) << 24;
		des[48+j] = (src[64+j] & 4194303) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[68+j] & 4194303) << 14;
		des[52+j] = (src[68+j] & 4194303) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[72+j] & 4194303) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[76+j] & 4194303) << 26;
		des[56+j] = (src[76+j] & 4194303) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[80+j] & 4194303) << 16;
		des[60+j] = (src[80+j] & 4194303) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[84+j] & 4194303) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[88+j] & 4194303) << 28;
		des[64+j] = (src[88+j] & 4194303) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[92+j] & 4194303) << 18;
		des[68+j] = (src[92+j] & 4194303) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[96+j] & 4194303) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[100+j] & 4194303) << 30;
		des[72+j] = (src[100+j] & 4194303) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[104+j] & 4194303) << 20;
		des[76+j] = (src[104+j] & 4194303) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[108+j] & 4194303) << 10;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[112+j] & 4194303);
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[116+j] & 4194303) << 22;
		des[84+j] = (src[116+j] & 4194303) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[120+j] & 4194303) << 12;
		des[88+j] = (src[120+j] & 4194303) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[124+j] & 4194303) << 2;
	}
}

template<typename T>
void KAFOR_pack_32len_23bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 8388607);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 8388607) << 23;
		des[4+j] = (src[4+j] & 8388607) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 8388607) << 14;
		des[8+j] = (src[8+j] & 8388607) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 8388607) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[16+j] & 8388607) << 28;
		des[12+j] = (src[16+j] & 8388607) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 8388607) << 19;
		des[16+j] = (src[20+j] & 8388607) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 8388607) << 10;
		des[20+j] = (src[24+j] & 8388607) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 8388607) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[32+j] & 8388607) << 24;
		des[24+j] = (src[32+j] & 8388607) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[36+j] & 8388607) << 15;
		des[28+j] = (src[36+j] & 8388607) >> 17;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[40+j] & 8388607) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[44+j] & 8388607) << 29;
		des[32+j] = (src[44+j] & 8388607) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[48+j] & 8388607) << 20;
		des[36+j] = (src[48+j] & 8388607) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[52+j] & 8388607) << 11;
		des[40+j] = (src[52+j] & 8388607) >> 21;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[56+j] & 8388607) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[60+j] & 8388607) << 25;
		des[44+j] = (src[60+j] & 8388607) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[64+j] & 8388607) << 16;
		des[48+j] = (src[64+j] & 8388607) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[68+j] & 8388607) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[72+j] & 8388607) << 30;
		des[52+j] = (src[72+j] & 8388607) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[76+j] & 8388607) << 21;
		des[56+j] = (src[76+j] & 8388607) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[80+j] & 8388607) << 12;
		des[60+j] = (src[80+j] & 8388607) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[84+j] & 8388607) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[88+j] & 8388607) << 26;
		des[64+j] = (src[88+j] & 8388607) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[92+j] & 8388607) << 17;
		des[68+j] = (src[92+j] & 8388607) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[96+j] & 8388607) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[100+j] & 8388607) << 31;
		des[72+j] = (src[100+j] & 8388607) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[104+j] & 8388607) << 22;
		des[76+j] = (src[104+j] & 8388607) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[108+j] & 8388607) << 13;
		des[80+j] = (src[108+j] & 8388607) >> 19;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[112+j] & 8388607) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[116+j] & 8388607) << 27;
		des[84+j] = (src[116+j] & 8388607) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[120+j] & 8388607) << 18;
		des[88+j] = (src[120+j] & 8388607) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[124+j] & 8388607) << 9;
	}
}

template<typename T>
void KAFOR_pack_32len_23bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 8388607) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 8388607) << 31;
		des[4+j] = (src[4+j] & 8388607) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 8388607) << 22;
		des[8+j] = (src[8+j] & 8388607) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 8388607) << 13;
		des[12+j] = (src[12+j] & 8388607) >> 19;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 8388607) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 8388607) << 27;
		des[16+j] = (src[20+j] & 8388607) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 8388607) << 18;
		des[20+j] = (src[24+j] & 8388607) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 8388607) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[32+j] & 8388607);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[36+j] & 8388607) << 23;
		des[28+j] = (src[36+j] & 8388607) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[40+j] & 8388607) << 14;
		des[32+j] = (src[40+j] & 8388607) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[44+j] & 8388607) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[48+j] & 8388607) << 28;
		des[36+j] = (src[48+j] & 8388607) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[52+j] & 8388607) << 19;
		des[40+j] = (src[52+j] & 8388607) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[56+j] & 8388607) << 10;
		des[44+j] = (src[56+j] & 8388607) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[60+j] & 8388607) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[64+j] & 8388607) << 24;
		des[48+j] = (src[64+j] & 8388607) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[68+j] & 8388607) << 15;
		des[52+j] = (src[68+j] & 8388607) >> 17;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[72+j] & 8388607) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[76+j] & 8388607) << 29;
		des[56+j] = (src[76+j] & 8388607) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[80+j] & 8388607) << 20;
		des[60+j] = (src[80+j] & 8388607) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[84+j] & 8388607) << 11;
		des[64+j] = (src[84+j] & 8388607) >> 21;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[88+j] & 8388607) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[92+j] & 8388607) << 25;
		des[68+j] = (src[92+j] & 8388607) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[96+j] & 8388607) << 16;
		des[72+j] = (src[96+j] & 8388607) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[100+j] & 8388607) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[104+j] & 8388607) << 30;
		des[76+j] = (src[104+j] & 8388607) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[108+j] & 8388607) << 21;
		des[80+j] = (src[108+j] & 8388607) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[112+j] & 8388607) << 12;
		des[84+j] = (src[112+j] & 8388607) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[116+j] & 8388607) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[120+j] & 8388607) << 26;
		des[88+j] = (src[120+j] & 8388607) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[124+j] & 8388607) << 17;
		des[92+j] = (src[124+j] & 8388607) >> 15;
	}
}

template<typename T>
void KAFOR_pack_32len_23bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 8388607) << 16;
		des[4+j] = (src[j] & 8388607) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 8388607) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 8388607) << 30;
		des[8+j] = (src[8+j] & 8388607) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 8388607) << 21;
		des[12+j] = (src[12+j] & 8388607) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 8388607) << 12;
		des[16+j] = (src[16+j] & 8388607) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 8388607) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 8388607) << 26;
		des[20+j] = (src[24+j] & 8388607) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 8388607) << 17;
		des[24+j] = (src[28+j] & 8388607) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[32+j] & 8388607) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[36+j] & 8388607) << 31;
		des[28+j] = (src[36+j] & 8388607) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[40+j] & 8388607) << 22;
		des[32+j] = (src[40+j] & 8388607) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[44+j] & 8388607) << 13;
		des[36+j] = (src[44+j] & 8388607) >> 19;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[48+j] & 8388607) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[52+j] & 8388607) << 27;
		des[40+j] = (src[52+j] & 8388607) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[56+j] & 8388607) << 18;
		des[44+j] = (src[56+j] & 8388607) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[60+j] & 8388607) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[64+j] & 8388607);
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[68+j] & 8388607) << 23;
		des[52+j] = (src[68+j] & 8388607) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[72+j] & 8388607) << 14;
		des[56+j] = (src[72+j] & 8388607) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[76+j] & 8388607) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[80+j] & 8388607) << 28;
		des[60+j] = (src[80+j] & 8388607) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[84+j] & 8388607) << 19;
		des[64+j] = (src[84+j] & 8388607) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[88+j] & 8388607) << 10;
		des[68+j] = (src[88+j] & 8388607) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[92+j] & 8388607) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[96+j] & 8388607) << 24;
		des[72+j] = (src[96+j] & 8388607) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[100+j] & 8388607) << 15;
		des[76+j] = (src[100+j] & 8388607) >> 17;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[104+j] & 8388607) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[108+j] & 8388607) << 29;
		des[80+j] = (src[108+j] & 8388607) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[112+j] & 8388607) << 20;
		des[84+j] = (src[112+j] & 8388607) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[116+j] & 8388607) << 11;
		des[88+j] = (src[116+j] & 8388607) >> 21;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[120+j] & 8388607) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[124+j] & 8388607) << 25;
		des[92+j] = (src[124+j] & 8388607) >> 7;
	}
}

template<typename T>
void KAFOR_pack_32len_23bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 8388607) << 24;
		des[4+j] = (src[j] & 8388607) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 8388607) << 15;
		des[8+j] = (src[4+j] & 8388607) >> 17;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 8388607) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 8388607) << 29;
		des[12+j] = (src[12+j] & 8388607) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 8388607) << 20;
		des[16+j] = (src[16+j] & 8388607) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 8388607) << 11;
		des[20+j] = (src[20+j] & 8388607) >> 21;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 8388607) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 8388607) << 25;
		des[24+j] = (src[28+j] & 8388607) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[32+j] & 8388607) << 16;
		des[28+j] = (src[32+j] & 8388607) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[36+j] & 8388607) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[40+j] & 8388607) << 30;
		des[32+j] = (src[40+j] & 8388607) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[44+j] & 8388607) << 21;
		des[36+j] = (src[44+j] & 8388607) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[48+j] & 8388607) << 12;
		des[40+j] = (src[48+j] & 8388607) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[52+j] & 8388607) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[56+j] & 8388607) << 26;
		des[44+j] = (src[56+j] & 8388607) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[60+j] & 8388607) << 17;
		des[48+j] = (src[60+j] & 8388607) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[64+j] & 8388607) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[68+j] & 8388607) << 31;
		des[52+j] = (src[68+j] & 8388607) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[72+j] & 8388607) << 22;
		des[56+j] = (src[72+j] & 8388607) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[76+j] & 8388607) << 13;
		des[60+j] = (src[76+j] & 8388607) >> 19;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[80+j] & 8388607) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[84+j] & 8388607) << 27;
		des[64+j] = (src[84+j] & 8388607) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[88+j] & 8388607) << 18;
		des[68+j] = (src[88+j] & 8388607) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[92+j] & 8388607) << 9;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[96+j] & 8388607);
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[100+j] & 8388607) << 23;
		des[76+j] = (src[100+j] & 8388607) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[104+j] & 8388607) << 14;
		des[80+j] = (src[104+j] & 8388607) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[108+j] & 8388607) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[112+j] & 8388607) << 28;
		des[84+j] = (src[112+j] & 8388607) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[116+j] & 8388607) << 19;
		des[88+j] = (src[116+j] & 8388607) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[120+j] & 8388607) << 10;
		des[92+j] = (src[120+j] & 8388607) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[124+j] & 8388607) << 1;
	}
}

template<typename T>
void KAFOR_pack_32len_24bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 16777215) << 24;
		des[4+j] = (src[4+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 16777215) << 16;
		des[8+j] = (src[8+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[16+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 16777215) << 24;
		des[16+j] = (src[20+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 16777215) << 16;
		des[20+j] = (src[24+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[32+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[36+j] & 16777215) << 24;
		des[28+j] = (src[36+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[40+j] & 16777215) << 16;
		des[32+j] = (src[40+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[44+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[48+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[52+j] & 16777215) << 24;
		des[40+j] = (src[52+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[56+j] & 16777215) << 16;
		des[44+j] = (src[56+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[60+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[64+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[68+j] & 16777215) << 24;
		des[52+j] = (src[68+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[72+j] & 16777215) << 16;
		des[56+j] = (src[72+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[76+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[80+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[84+j] & 16777215) << 24;
		des[64+j] = (src[84+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[88+j] & 16777215) << 16;
		des[68+j] = (src[88+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[92+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[96+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[100+j] & 16777215) << 24;
		des[76+j] = (src[100+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[104+j] & 16777215) << 16;
		des[80+j] = (src[104+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[108+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[112+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[116+j] & 16777215) << 24;
		des[88+j] = (src[116+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[120+j] & 16777215) << 16;
		des[92+j] = (src[120+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[124+j] & 16777215) << 8;
	}
}

template<typename T>
void KAFOR_pack_32len_24bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] = (src[4+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 16777215) << 24;
		des[8+j] = (src[8+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 16777215) << 16;
		des[12+j] = (src[12+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[20+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 16777215) << 24;
		des[20+j] = (src[24+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 16777215) << 16;
		des[24+j] = (src[28+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[32+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[36+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[40+j] & 16777215) << 24;
		des[32+j] = (src[40+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[44+j] & 16777215) << 16;
		des[36+j] = (src[44+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[48+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[52+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[56+j] & 16777215) << 24;
		des[44+j] = (src[56+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[60+j] & 16777215) << 16;
		des[48+j] = (src[60+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[64+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[68+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[72+j] & 16777215) << 24;
		des[56+j] = (src[72+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[76+j] & 16777215) << 16;
		des[60+j] = (src[76+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[80+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[84+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[88+j] & 16777215) << 24;
		des[68+j] = (src[88+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[92+j] & 16777215) << 16;
		des[72+j] = (src[92+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[96+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[100+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[104+j] & 16777215) << 24;
		des[80+j] = (src[104+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[108+j] & 16777215) << 16;
		des[84+j] = (src[108+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[112+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[116+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[120+j] & 16777215) << 24;
		des[92+j] = (src[120+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[124+j] & 16777215) << 16;
		des[96+j] = (src[124+j] & 16777215) >> 16;
	}
}

template<typename T>
void KAFOR_pack_32len_24bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 16777215) << 16;
		des[4+j] = (src[j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 16777215) << 24;
		des[12+j] = (src[12+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 16777215) << 16;
		des[16+j] = (src[16+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] = (src[24+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 16777215) << 24;
		des[24+j] = (src[28+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[32+j] & 16777215) << 16;
		des[28+j] = (src[32+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[36+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[40+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[44+j] & 16777215) << 24;
		des[36+j] = (src[44+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[48+j] & 16777215) << 16;
		des[40+j] = (src[48+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[52+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[56+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[60+j] & 16777215) << 24;
		des[48+j] = (src[60+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[64+j] & 16777215) << 16;
		des[52+j] = (src[64+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[68+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[72+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[76+j] & 16777215) << 24;
		des[60+j] = (src[76+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[80+j] & 16777215) << 16;
		des[64+j] = (src[80+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[84+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[88+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[92+j] & 16777215) << 24;
		des[72+j] = (src[92+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[96+j] & 16777215) << 16;
		des[76+j] = (src[96+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[100+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[104+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[108+j] & 16777215) << 24;
		des[84+j] = (src[108+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[112+j] & 16777215) << 16;
		des[88+j] = (src[112+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[116+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[120+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[124+j] & 16777215) << 24;
		des[96+j] = (src[124+j] & 16777215) >> 8;
	}
}

template<typename T>
void KAFOR_pack_32len_24bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 16777215) << 24;
		des[4+j] = (src[j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 16777215) << 16;
		des[8+j] = (src[4+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] = (src[12+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 16777215) << 24;
		des[16+j] = (src[16+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 16777215) << 16;
		des[20+j] = (src[20+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[28+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[32+j] & 16777215) << 24;
		des[28+j] = (src[32+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[36+j] & 16777215) << 16;
		des[32+j] = (src[36+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[40+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[44+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[48+j] & 16777215) << 24;
		des[40+j] = (src[48+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[52+j] & 16777215) << 16;
		des[44+j] = (src[52+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[56+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[60+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[64+j] & 16777215) << 24;
		des[52+j] = (src[64+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[68+j] & 16777215) << 16;
		des[56+j] = (src[68+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[72+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[76+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[80+j] & 16777215) << 24;
		des[64+j] = (src[80+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[84+j] & 16777215) << 16;
		des[68+j] = (src[84+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[88+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[92+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[96+j] & 16777215) << 24;
		des[76+j] = (src[96+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[100+j] & 16777215) << 16;
		des[80+j] = (src[100+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[104+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[108+j] & 16777215);
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[112+j] & 16777215) << 24;
		des[88+j] = (src[112+j] & 16777215) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[116+j] & 16777215) << 16;
		des[92+j] = (src[116+j] & 16777215) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[120+j] & 16777215) << 8;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[124+j] & 16777215);
	}
}

template<typename T>
void KAFOR_pack_32len_25bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 33554431);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 33554431) << 25;
		des[4+j] = (src[4+j] & 33554431) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 33554431) << 18;
		des[8+j] = (src[8+j] & 33554431) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 33554431) << 11;
		des[12+j] = (src[12+j] & 33554431) >> 21;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 33554431) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[20+j] & 33554431) << 29;
		des[16+j] = (src[20+j] & 33554431) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 33554431) << 22;
		des[20+j] = (src[24+j] & 33554431) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 33554431) << 15;
		des[24+j] = (src[28+j] & 33554431) >> 17;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[32+j] & 33554431) << 8;
		des[28+j] = (src[32+j] & 33554431) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[36+j] & 33554431) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[40+j] & 33554431) << 26;
		des[32+j] = (src[40+j] & 33554431) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[44+j] & 33554431) << 19;
		des[36+j] = (src[44+j] & 33554431) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[48+j] & 33554431) << 12;
		des[40+j] = (src[48+j] & 33554431) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[52+j] & 33554431) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[56+j] & 33554431) << 30;
		des[44+j] = (src[56+j] & 33554431) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[60+j] & 33554431) << 23;
		des[48+j] = (src[60+j] & 33554431) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[64+j] & 33554431) << 16;
		des[52+j] = (src[64+j] & 33554431) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[68+j] & 33554431) << 9;
		des[56+j] = (src[68+j] & 33554431) >> 23;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[72+j] & 33554431) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[76+j] & 33554431) << 27;
		des[60+j] = (src[76+j] & 33554431) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[80+j] & 33554431) << 20;
		des[64+j] = (src[80+j] & 33554431) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[84+j] & 33554431) << 13;
		des[68+j] = (src[84+j] & 33554431) >> 19;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[88+j] & 33554431) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[92+j] & 33554431) << 31;
		des[72+j] = (src[92+j] & 33554431) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[96+j] & 33554431) << 24;
		des[76+j] = (src[96+j] & 33554431) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[100+j] & 33554431) << 17;
		des[80+j] = (src[100+j] & 33554431) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[104+j] & 33554431) << 10;
		des[84+j] = (src[104+j] & 33554431) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[108+j] & 33554431) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[112+j] & 33554431) << 28;
		des[88+j] = (src[112+j] & 33554431) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[116+j] & 33554431) << 21;
		des[92+j] = (src[116+j] & 33554431) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[120+j] & 33554431) << 14;
		des[96+j] = (src[120+j] & 33554431) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[124+j] & 33554431) << 7;
	}
}

template<typename T>
void KAFOR_pack_32len_25bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 33554431) << 8;
		des[4+j] = (src[j] & 33554431) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 33554431) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 33554431) << 26;
		des[8+j] = (src[8+j] & 33554431) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 33554431) << 19;
		des[12+j] = (src[12+j] & 33554431) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 33554431) << 12;
		des[16+j] = (src[16+j] & 33554431) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 33554431) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 33554431) << 30;
		des[20+j] = (src[24+j] & 33554431) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 33554431) << 23;
		des[24+j] = (src[28+j] & 33554431) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[32+j] & 33554431) << 16;
		des[28+j] = (src[32+j] & 33554431) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[36+j] & 33554431) << 9;
		des[32+j] = (src[36+j] & 33554431) >> 23;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[40+j] & 33554431) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[44+j] & 33554431) << 27;
		des[36+j] = (src[44+j] & 33554431) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[48+j] & 33554431) << 20;
		des[40+j] = (src[48+j] & 33554431) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[52+j] & 33554431) << 13;
		des[44+j] = (src[52+j] & 33554431) >> 19;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[56+j] & 33554431) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[60+j] & 33554431) << 31;
		des[48+j] = (src[60+j] & 33554431) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[64+j] & 33554431) << 24;
		des[52+j] = (src[64+j] & 33554431) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[68+j] & 33554431) << 17;
		des[56+j] = (src[68+j] & 33554431) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[72+j] & 33554431) << 10;
		des[60+j] = (src[72+j] & 33554431) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[76+j] & 33554431) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[80+j] & 33554431) << 28;
		des[64+j] = (src[80+j] & 33554431) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[84+j] & 33554431) << 21;
		des[68+j] = (src[84+j] & 33554431) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[88+j] & 33554431) << 14;
		des[72+j] = (src[88+j] & 33554431) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[92+j] & 33554431) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[96+j] & 33554431);
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[100+j] & 33554431) << 25;
		des[80+j] = (src[100+j] & 33554431) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[104+j] & 33554431) << 18;
		des[84+j] = (src[104+j] & 33554431) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[108+j] & 33554431) << 11;
		des[88+j] = (src[108+j] & 33554431) >> 21;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[112+j] & 33554431) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[116+j] & 33554431) << 29;
		des[92+j] = (src[116+j] & 33554431) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[120+j] & 33554431) << 22;
		des[96+j] = (src[120+j] & 33554431) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[124+j] & 33554431) << 15;
		des[100+j] = (src[124+j] & 33554431) >> 17;
	}
}

template<typename T>
void KAFOR_pack_32len_25bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 33554431) << 16;
		des[4+j] = (src[j] & 33554431) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 33554431) << 9;
		des[8+j] = (src[4+j] & 33554431) >> 23;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 33554431) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 33554431) << 27;
		des[12+j] = (src[12+j] & 33554431) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 33554431) << 20;
		des[16+j] = (src[16+j] & 33554431) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 33554431) << 13;
		des[20+j] = (src[20+j] & 33554431) >> 19;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 33554431) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 33554431) << 31;
		des[24+j] = (src[28+j] & 33554431) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[32+j] & 33554431) << 24;
		des[28+j] = (src[32+j] & 33554431) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[36+j] & 33554431) << 17;
		des[32+j] = (src[36+j] & 33554431) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[40+j] & 33554431) << 10;
		des[36+j] = (src[40+j] & 33554431) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[44+j] & 33554431) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[48+j] & 33554431) << 28;
		des[40+j] = (src[48+j] & 33554431) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[52+j] & 33554431) << 21;
		des[44+j] = (src[52+j] & 33554431) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[56+j] & 33554431) << 14;
		des[48+j] = (src[56+j] & 33554431) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[60+j] & 33554431) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[64+j] & 33554431);
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[68+j] & 33554431) << 25;
		des[56+j] = (src[68+j] & 33554431) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[72+j] & 33554431) << 18;
		des[60+j] = (src[72+j] & 33554431) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[76+j] & 33554431) << 11;
		des[64+j] = (src[76+j] & 33554431) >> 21;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[80+j] & 33554431) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[84+j] & 33554431) << 29;
		des[68+j] = (src[84+j] & 33554431) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[88+j] & 33554431) << 22;
		des[72+j] = (src[88+j] & 33554431) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[92+j] & 33554431) << 15;
		des[76+j] = (src[92+j] & 33554431) >> 17;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[96+j] & 33554431) << 8;
		des[80+j] = (src[96+j] & 33554431) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[100+j] & 33554431) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[104+j] & 33554431) << 26;
		des[84+j] = (src[104+j] & 33554431) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[108+j] & 33554431) << 19;
		des[88+j] = (src[108+j] & 33554431) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[112+j] & 33554431) << 12;
		des[92+j] = (src[112+j] & 33554431) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[116+j] & 33554431) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[120+j] & 33554431) << 30;
		des[96+j] = (src[120+j] & 33554431) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[124+j] & 33554431) << 23;
		des[100+j] = (src[124+j] & 33554431) >> 9;
	}
}

template<typename T>
void KAFOR_pack_32len_25bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 33554431) << 24;
		des[4+j] = (src[j] & 33554431) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 33554431) << 17;
		des[8+j] = (src[4+j] & 33554431) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 33554431) << 10;
		des[12+j] = (src[8+j] & 33554431) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j] & 33554431) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 33554431) << 28;
		des[16+j] = (src[16+j] & 33554431) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 33554431) << 21;
		des[20+j] = (src[20+j] & 33554431) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 33554431) << 14;
		des[24+j] = (src[24+j] & 33554431) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[28+j] & 33554431) << 7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[32+j] & 33554431);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[36+j] & 33554431) << 25;
		des[32+j] = (src[36+j] & 33554431) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[40+j] & 33554431) << 18;
		des[36+j] = (src[40+j] & 33554431) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[44+j] & 33554431) << 11;
		des[40+j] = (src[44+j] & 33554431) >> 21;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[48+j] & 33554431) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[52+j] & 33554431) << 29;
		des[44+j] = (src[52+j] & 33554431) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[56+j] & 33554431) << 22;
		des[48+j] = (src[56+j] & 33554431) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[60+j] & 33554431) << 15;
		des[52+j] = (src[60+j] & 33554431) >> 17;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[64+j] & 33554431) << 8;
		des[56+j] = (src[64+j] & 33554431) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[68+j] & 33554431) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[72+j] & 33554431) << 26;
		des[60+j] = (src[72+j] & 33554431) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[76+j] & 33554431) << 19;
		des[64+j] = (src[76+j] & 33554431) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[80+j] & 33554431) << 12;
		des[68+j] = (src[80+j] & 33554431) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[84+j] & 33554431) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[88+j] & 33554431) << 30;
		des[72+j] = (src[88+j] & 33554431) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[92+j] & 33554431) << 23;
		des[76+j] = (src[92+j] & 33554431) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[96+j] & 33554431) << 16;
		des[80+j] = (src[96+j] & 33554431) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[100+j] & 33554431) << 9;
		des[84+j] = (src[100+j] & 33554431) >> 23;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[104+j] & 33554431) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[108+j] & 33554431) << 27;
		des[88+j] = (src[108+j] & 33554431) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[112+j] & 33554431) << 20;
		des[92+j] = (src[112+j] & 33554431) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[116+j] & 33554431) << 13;
		des[96+j] = (src[116+j] & 33554431) >> 19;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[120+j] & 33554431) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[124+j] & 33554431) << 31;
		des[100+j] = (src[124+j] & 33554431) >> 1;
	}
}

template<typename T>
void KAFOR_pack_32len_26bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 67108863);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 67108863) << 26;
		des[4+j] = (src[4+j] & 67108863) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 67108863) << 20;
		des[8+j] = (src[8+j] & 67108863) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 67108863) << 14;
		des[12+j] = (src[12+j] & 67108863) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 67108863) << 8;
		des[16+j] = (src[16+j] & 67108863) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 67108863) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[24+j] & 67108863) << 28;
		des[20+j] = (src[24+j] & 67108863) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 67108863) << 22;
		des[24+j] = (src[28+j] & 67108863) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[32+j] & 67108863) << 16;
		des[28+j] = (src[32+j] & 67108863) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[36+j] & 67108863) << 10;
		des[32+j] = (src[36+j] & 67108863) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[40+j] & 67108863) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[44+j] & 67108863) << 30;
		des[36+j] = (src[44+j] & 67108863) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[48+j] & 67108863) << 24;
		des[40+j] = (src[48+j] & 67108863) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[52+j] & 67108863) << 18;
		des[44+j] = (src[52+j] & 67108863) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[56+j] & 67108863) << 12;
		des[48+j] = (src[56+j] & 67108863) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[60+j] & 67108863) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[64+j] & 67108863);
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[68+j] & 67108863) << 26;
		des[56+j] = (src[68+j] & 67108863) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[72+j] & 67108863) << 20;
		des[60+j] = (src[72+j] & 67108863) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[76+j] & 67108863) << 14;
		des[64+j] = (src[76+j] & 67108863) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[80+j] & 67108863) << 8;
		des[68+j] = (src[80+j] & 67108863) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[84+j] & 67108863) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[88+j] & 67108863) << 28;
		des[72+j] = (src[88+j] & 67108863) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[92+j] & 67108863) << 22;
		des[76+j] = (src[92+j] & 67108863) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[96+j] & 67108863) << 16;
		des[80+j] = (src[96+j] & 67108863) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[100+j] & 67108863) << 10;
		des[84+j] = (src[100+j] & 67108863) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[104+j] & 67108863) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[108+j] & 67108863) << 30;
		des[88+j] = (src[108+j] & 67108863) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[112+j] & 67108863) << 24;
		des[92+j] = (src[112+j] & 67108863) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[116+j] & 67108863) << 18;
		des[96+j] = (src[116+j] & 67108863) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[120+j] & 67108863) << 12;
		des[100+j] = (src[120+j] & 67108863) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] |= (src[124+j] & 67108863) << 6;
	}
}

template<typename T>
void KAFOR_pack_32len_26bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 67108863) << 8;
		des[4+j] = (src[j] & 67108863) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 67108863) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 67108863) << 28;
		des[8+j] = (src[8+j] & 67108863) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 67108863) << 22;
		des[12+j] = (src[12+j] & 67108863) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 67108863) << 16;
		des[16+j] = (src[16+j] & 67108863) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 67108863) << 10;
		des[20+j] = (src[20+j] & 67108863) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 67108863) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 67108863) << 30;
		des[24+j] = (src[28+j] & 67108863) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[32+j] & 67108863) << 24;
		des[28+j] = (src[32+j] & 67108863) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[36+j] & 67108863) << 18;
		des[32+j] = (src[36+j] & 67108863) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[40+j] & 67108863) << 12;
		des[36+j] = (src[40+j] & 67108863) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[44+j] & 67108863) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] = (src[48+j] & 67108863);
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[52+j] & 67108863) << 26;
		des[44+j] = (src[52+j] & 67108863) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[56+j] & 67108863) << 20;
		des[48+j] = (src[56+j] & 67108863) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[60+j] & 67108863) << 14;
		des[52+j] = (src[60+j] & 67108863) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[64+j] & 67108863) << 8;
		des[56+j] = (src[64+j] & 67108863) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[68+j] & 67108863) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[72+j] & 67108863) << 28;
		des[60+j] = (src[72+j] & 67108863) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[76+j] & 67108863) << 22;
		des[64+j] = (src[76+j] & 67108863) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[80+j] & 67108863) << 16;
		des[68+j] = (src[80+j] & 67108863) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[84+j] & 67108863) << 10;
		des[72+j] = (src[84+j] & 67108863) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[88+j] & 67108863) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[92+j] & 67108863) << 30;
		des[76+j] = (src[92+j] & 67108863) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[96+j] & 67108863) << 24;
		des[80+j] = (src[96+j] & 67108863) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[100+j] & 67108863) << 18;
		des[84+j] = (src[100+j] & 67108863) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[104+j] & 67108863) << 12;
		des[88+j] = (src[104+j] & 67108863) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[108+j] & 67108863) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[112+j] & 67108863);
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[116+j] & 67108863) << 26;
		des[96+j] = (src[116+j] & 67108863) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[120+j] & 67108863) << 20;
		des[100+j] = (src[120+j] & 67108863) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] |= (src[124+j] & 67108863) << 14;
		des[104+j] = (src[124+j] & 67108863) >> 18;
	}
}

template<typename T>
void KAFOR_pack_32len_26bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 67108863) << 16;
		des[4+j] = (src[j] & 67108863) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 67108863) << 10;
		des[8+j] = (src[4+j] & 67108863) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 67108863) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 67108863) << 30;
		des[12+j] = (src[12+j] & 67108863) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 67108863) << 24;
		des[16+j] = (src[16+j] & 67108863) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 67108863) << 18;
		des[20+j] = (src[20+j] & 67108863) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 67108863) << 12;
		des[24+j] = (src[24+j] & 67108863) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[28+j] & 67108863) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[32+j] & 67108863);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[36+j] & 67108863) << 26;
		des[32+j] = (src[36+j] & 67108863) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[40+j] & 67108863) << 20;
		des[36+j] = (src[40+j] & 67108863) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[44+j] & 67108863) << 14;
		des[40+j] = (src[44+j] & 67108863) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[48+j] & 67108863) << 8;
		des[44+j] = (src[48+j] & 67108863) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[52+j] & 67108863) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[56+j] & 67108863) << 28;
		des[48+j] = (src[56+j] & 67108863) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[60+j] & 67108863) << 22;
		des[52+j] = (src[60+j] & 67108863) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[64+j] & 67108863) << 16;
		des[56+j] = (src[64+j] & 67108863) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[68+j] & 67108863) << 10;
		des[60+j] = (src[68+j] & 67108863) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[72+j] & 67108863) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[76+j] & 67108863) << 30;
		des[64+j] = (src[76+j] & 67108863) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[80+j] & 67108863) << 24;
		des[68+j] = (src[80+j] & 67108863) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[84+j] & 67108863) << 18;
		des[72+j] = (src[84+j] & 67108863) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[88+j] & 67108863) << 12;
		des[76+j] = (src[88+j] & 67108863) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[92+j] & 67108863) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[96+j] & 67108863);
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[100+j] & 67108863) << 26;
		des[84+j] = (src[100+j] & 67108863) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[104+j] & 67108863) << 20;
		des[88+j] = (src[104+j] & 67108863) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[108+j] & 67108863) << 14;
		des[92+j] = (src[108+j] & 67108863) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[112+j] & 67108863) << 8;
		des[96+j] = (src[112+j] & 67108863) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[116+j] & 67108863) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[120+j] & 67108863) << 28;
		des[100+j] = (src[120+j] & 67108863) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] |= (src[124+j] & 67108863) << 22;
		des[104+j] = (src[124+j] & 67108863) >> 10;
	}
}

template<typename T>
void KAFOR_pack_32len_26bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 67108863) << 24;
		des[4+j] = (src[j] & 67108863) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 67108863) << 18;
		des[8+j] = (src[4+j] & 67108863) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 67108863) << 12;
		des[12+j] = (src[8+j] & 67108863) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j] & 67108863) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j] & 67108863);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 67108863) << 26;
		des[20+j] = (src[20+j] & 67108863) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 67108863) << 20;
		des[24+j] = (src[24+j] & 67108863) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[28+j] & 67108863) << 14;
		des[28+j] = (src[28+j] & 67108863) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[32+j] & 67108863) << 8;
		des[32+j] = (src[32+j] & 67108863) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[36+j] & 67108863) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[40+j] & 67108863) << 28;
		des[36+j] = (src[40+j] & 67108863) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[44+j] & 67108863) << 22;
		des[40+j] = (src[44+j] & 67108863) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[48+j] & 67108863) << 16;
		des[44+j] = (src[48+j] & 67108863) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[52+j] & 67108863) << 10;
		des[48+j] = (src[52+j] & 67108863) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[56+j] & 67108863) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[60+j] & 67108863) << 30;
		des[52+j] = (src[60+j] & 67108863) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[64+j] & 67108863) << 24;
		des[56+j] = (src[64+j] & 67108863) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[68+j] & 67108863) << 18;
		des[60+j] = (src[68+j] & 67108863) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[72+j] & 67108863) << 12;
		des[64+j] = (src[72+j] & 67108863) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[76+j] & 67108863) << 6;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] = (src[80+j] & 67108863);
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[84+j] & 67108863) << 26;
		des[72+j] = (src[84+j] & 67108863) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[88+j] & 67108863) << 20;
		des[76+j] = (src[88+j] & 67108863) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[92+j] & 67108863) << 14;
		des[80+j] = (src[92+j] & 67108863) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[96+j] & 67108863) << 8;
		des[84+j] = (src[96+j] & 67108863) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[100+j] & 67108863) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[104+j] & 67108863) << 28;
		des[88+j] = (src[104+j] & 67108863) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[108+j] & 67108863) << 22;
		des[92+j] = (src[108+j] & 67108863) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[112+j] & 67108863) << 16;
		des[96+j] = (src[112+j] & 67108863) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[116+j] & 67108863) << 10;
		des[100+j] = (src[116+j] & 67108863) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] |= (src[120+j] & 67108863) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] |= (src[124+j] & 67108863) << 30;
		des[104+j] = (src[124+j] & 67108863) >> 2;
	}
}

template<typename T>
void KAFOR_pack_32len_27bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 134217727);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 134217727) << 27;
		des[4+j] = (src[4+j] & 134217727) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 134217727) << 22;
		des[8+j] = (src[8+j] & 134217727) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 134217727) << 17;
		des[12+j] = (src[12+j] & 134217727) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 134217727) << 12;
		des[16+j] = (src[16+j] & 134217727) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 134217727) << 7;
		des[20+j] = (src[20+j] & 134217727) >> 25;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 134217727) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[28+j] & 134217727) << 29;
		des[24+j] = (src[28+j] & 134217727) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[32+j] & 134217727) << 24;
		des[28+j] = (src[32+j] & 134217727) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[36+j] & 134217727) << 19;
		des[32+j] = (src[36+j] & 134217727) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[40+j] & 134217727) << 14;
		des[36+j] = (src[40+j] & 134217727) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[44+j] & 134217727) << 9;
		des[40+j] = (src[44+j] & 134217727) >> 23;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[48+j] & 134217727) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[52+j] & 134217727) << 31;
		des[44+j] = (src[52+j] & 134217727) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[56+j] & 134217727) << 26;
		des[48+j] = (src[56+j] & 134217727) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[60+j] & 134217727) << 21;
		des[52+j] = (src[60+j] & 134217727) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[64+j] & 134217727) << 16;
		des[56+j] = (src[64+j] & 134217727) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[68+j] & 134217727) << 11;
		des[60+j] = (src[68+j] & 134217727) >> 21;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[72+j] & 134217727) << 6;
		des[64+j] = (src[72+j] & 134217727) >> 26;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[76+j] & 134217727) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[80+j] & 134217727) << 28;
		des[68+j] = (src[80+j] & 134217727) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[84+j] & 134217727) << 23;
		des[72+j] = (src[84+j] & 134217727) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[88+j] & 134217727) << 18;
		des[76+j] = (src[88+j] & 134217727) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[92+j] & 134217727) << 13;
		des[80+j] = (src[92+j] & 134217727) >> 19;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[96+j] & 134217727) << 8;
		des[84+j] = (src[96+j] & 134217727) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[100+j] & 134217727) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[104+j] & 134217727) << 30;
		des[88+j] = (src[104+j] & 134217727) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[108+j] & 134217727) << 25;
		des[92+j] = (src[108+j] & 134217727) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[112+j] & 134217727) << 20;
		des[96+j] = (src[112+j] & 134217727) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[116+j] & 134217727) << 15;
		des[100+j] = (src[116+j] & 134217727) >> 17;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] |= (src[120+j] & 134217727) << 10;
		des[104+j] = (src[120+j] & 134217727) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] |= (src[124+j] & 134217727) << 5;
	}
}

template<typename T>
void KAFOR_pack_32len_27bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 134217727) << 8;
		des[4+j] = (src[j] & 134217727) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 134217727) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 134217727) << 30;
		des[8+j] = (src[8+j] & 134217727) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 134217727) << 25;
		des[12+j] = (src[12+j] & 134217727) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 134217727) << 20;
		des[16+j] = (src[16+j] & 134217727) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 134217727) << 15;
		des[20+j] = (src[20+j] & 134217727) >> 17;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 134217727) << 10;
		des[24+j] = (src[24+j] & 134217727) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[28+j] & 134217727) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[32+j] & 134217727);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[36+j] & 134217727) << 27;
		des[32+j] = (src[36+j] & 134217727) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[40+j] & 134217727) << 22;
		des[36+j] = (src[40+j] & 134217727) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[44+j] & 134217727) << 17;
		des[40+j] = (src[44+j] & 134217727) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[48+j] & 134217727) << 12;
		des[44+j] = (src[48+j] & 134217727) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[52+j] & 134217727) << 7;
		des[48+j] = (src[52+j] & 134217727) >> 25;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[56+j] & 134217727) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[60+j] & 134217727) << 29;
		des[52+j] = (src[60+j] & 134217727) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[64+j] & 134217727) << 24;
		des[56+j] = (src[64+j] & 134217727) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[68+j] & 134217727) << 19;
		des[60+j] = (src[68+j] & 134217727) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[72+j] & 134217727) << 14;
		des[64+j] = (src[72+j] & 134217727) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[76+j] & 134217727) << 9;
		des[68+j] = (src[76+j] & 134217727) >> 23;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[80+j] & 134217727) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[84+j] & 134217727) << 31;
		des[72+j] = (src[84+j] & 134217727) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[88+j] & 134217727) << 26;
		des[76+j] = (src[88+j] & 134217727) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[92+j] & 134217727) << 21;
		des[80+j] = (src[92+j] & 134217727) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[96+j] & 134217727) << 16;
		des[84+j] = (src[96+j] & 134217727) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[100+j] & 134217727) << 11;
		des[88+j] = (src[100+j] & 134217727) >> 21;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[104+j] & 134217727) << 6;
		des[92+j] = (src[104+j] & 134217727) >> 26;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[108+j] & 134217727) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[112+j] & 134217727) << 28;
		des[96+j] = (src[112+j] & 134217727) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[116+j] & 134217727) << 23;
		des[100+j] = (src[116+j] & 134217727) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] |= (src[120+j] & 134217727) << 18;
		des[104+j] = (src[120+j] & 134217727) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] |= (src[124+j] & 134217727) << 13;
		des[108+j] = (src[124+j] & 134217727) >> 19;
	}
}

template<typename T>
void KAFOR_pack_32len_27bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 134217727) << 16;
		des[4+j] = (src[j] & 134217727) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 134217727) << 11;
		des[8+j] = (src[4+j] & 134217727) >> 21;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 134217727) << 6;
		des[12+j] = (src[8+j] & 134217727) >> 26;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j] & 134217727) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 134217727) << 28;
		des[16+j] = (src[16+j] & 134217727) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 134217727) << 23;
		des[20+j] = (src[20+j] & 134217727) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 134217727) << 18;
		des[24+j] = (src[24+j] & 134217727) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[28+j] & 134217727) << 13;
		des[28+j] = (src[28+j] & 134217727) >> 19;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[32+j] & 134217727) << 8;
		des[32+j] = (src[32+j] & 134217727) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[36+j] & 134217727) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[40+j] & 134217727) << 30;
		des[36+j] = (src[40+j] & 134217727) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[44+j] & 134217727) << 25;
		des[40+j] = (src[44+j] & 134217727) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[48+j] & 134217727) << 20;
		des[44+j] = (src[48+j] & 134217727) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[52+j] & 134217727) << 15;
		des[48+j] = (src[52+j] & 134217727) >> 17;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[56+j] & 134217727) << 10;
		des[52+j] = (src[56+j] & 134217727) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[60+j] & 134217727) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[64+j] & 134217727);
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[68+j] & 134217727) << 27;
		des[60+j] = (src[68+j] & 134217727) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[72+j] & 134217727) << 22;
		des[64+j] = (src[72+j] & 134217727) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[76+j] & 134217727) << 17;
		des[68+j] = (src[76+j] & 134217727) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[80+j] & 134217727) << 12;
		des[72+j] = (src[80+j] & 134217727) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[84+j] & 134217727) << 7;
		des[76+j] = (src[84+j] & 134217727) >> 25;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[88+j] & 134217727) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[92+j] & 134217727) << 29;
		des[80+j] = (src[92+j] & 134217727) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[96+j] & 134217727) << 24;
		des[84+j] = (src[96+j] & 134217727) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[100+j] & 134217727) << 19;
		des[88+j] = (src[100+j] & 134217727) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[104+j] & 134217727) << 14;
		des[92+j] = (src[104+j] & 134217727) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[108+j] & 134217727) << 9;
		des[96+j] = (src[108+j] & 134217727) >> 23;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[112+j] & 134217727) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[116+j] & 134217727) << 31;
		des[100+j] = (src[116+j] & 134217727) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] |= (src[120+j] & 134217727) << 26;
		des[104+j] = (src[120+j] & 134217727) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] |= (src[124+j] & 134217727) << 21;
		des[108+j] = (src[124+j] & 134217727) >> 11;
	}
}

template<typename T>
void KAFOR_pack_32len_27bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 134217727) << 24;
		des[4+j] = (src[j] & 134217727) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 134217727) << 19;
		des[8+j] = (src[4+j] & 134217727) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 134217727) << 14;
		des[12+j] = (src[8+j] & 134217727) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j] & 134217727) << 9;
		des[16+j] = (src[12+j] & 134217727) >> 23;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[16+j] & 134217727) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 134217727) << 31;
		des[20+j] = (src[20+j] & 134217727) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 134217727) << 26;
		des[24+j] = (src[24+j] & 134217727) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[28+j] & 134217727) << 21;
		des[28+j] = (src[28+j] & 134217727) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[32+j] & 134217727) << 16;
		des[32+j] = (src[32+j] & 134217727) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[36+j] & 134217727) << 11;
		des[36+j] = (src[36+j] & 134217727) >> 21;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[40+j] & 134217727) << 6;
		des[40+j] = (src[40+j] & 134217727) >> 26;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[44+j] & 134217727) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[48+j] & 134217727) << 28;
		des[44+j] = (src[48+j] & 134217727) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[52+j] & 134217727) << 23;
		des[48+j] = (src[52+j] & 134217727) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[56+j] & 134217727) << 18;
		des[52+j] = (src[56+j] & 134217727) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[60+j] & 134217727) << 13;
		des[56+j] = (src[60+j] & 134217727) >> 19;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[64+j] & 134217727) << 8;
		des[60+j] = (src[64+j] & 134217727) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[68+j] & 134217727) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[72+j] & 134217727) << 30;
		des[64+j] = (src[72+j] & 134217727) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[76+j] & 134217727) << 25;
		des[68+j] = (src[76+j] & 134217727) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[80+j] & 134217727) << 20;
		des[72+j] = (src[80+j] & 134217727) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[84+j] & 134217727) << 15;
		des[76+j] = (src[84+j] & 134217727) >> 17;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[88+j] & 134217727) << 10;
		des[80+j] = (src[88+j] & 134217727) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[92+j] & 134217727) << 5;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[96+j] & 134217727);
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[100+j] & 134217727) << 27;
		des[88+j] = (src[100+j] & 134217727) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[104+j] & 134217727) << 22;
		des[92+j] = (src[104+j] & 134217727) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[108+j] & 134217727) << 17;
		des[96+j] = (src[108+j] & 134217727) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[112+j] & 134217727) << 12;
		des[100+j] = (src[112+j] & 134217727) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] |= (src[116+j] & 134217727) << 7;
		des[104+j] = (src[116+j] & 134217727) >> 25;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] |= (src[120+j] & 134217727) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] |= (src[124+j] & 134217727) << 29;
		des[108+j] = (src[124+j] & 134217727) >> 3;
	}
}

template<typename T>
void KAFOR_pack_32len_28bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 268435455);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 268435455) << 28;
		des[4+j] = (src[4+j] & 268435455) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 268435455) << 24;
		des[8+j] = (src[8+j] & 268435455) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 268435455) << 20;
		des[12+j] = (src[12+j] & 268435455) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 268435455) << 16;
		des[16+j] = (src[16+j] & 268435455) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 268435455) << 12;
		des[20+j] = (src[20+j] & 268435455) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 268435455) << 8;
		des[24+j] = (src[24+j] & 268435455) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[28+j] & 268435455) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] = (src[32+j] & 268435455);
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[36+j] & 268435455) << 28;
		des[32+j] = (src[36+j] & 268435455) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[40+j] & 268435455) << 24;
		des[36+j] = (src[40+j] & 268435455) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[44+j] & 268435455) << 20;
		des[40+j] = (src[44+j] & 268435455) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[48+j] & 268435455) << 16;
		des[44+j] = (src[48+j] & 268435455) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[52+j] & 268435455) << 12;
		des[48+j] = (src[52+j] & 268435455) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[56+j] & 268435455) << 8;
		des[52+j] = (src[56+j] & 268435455) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[60+j] & 268435455) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] = (src[64+j] & 268435455);
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[68+j] & 268435455) << 28;
		des[60+j] = (src[68+j] & 268435455) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[72+j] & 268435455) << 24;
		des[64+j] = (src[72+j] & 268435455) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[76+j] & 268435455) << 20;
		des[68+j] = (src[76+j] & 268435455) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[80+j] & 268435455) << 16;
		des[72+j] = (src[80+j] & 268435455) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[84+j] & 268435455) << 12;
		des[76+j] = (src[84+j] & 268435455) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[88+j] & 268435455) << 8;
		des[80+j] = (src[88+j] & 268435455) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[92+j] & 268435455) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] = (src[96+j] & 268435455);
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[100+j] & 268435455) << 28;
		des[88+j] = (src[100+j] & 268435455) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[104+j] & 268435455) << 24;
		des[92+j] = (src[104+j] & 268435455) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[108+j] & 268435455) << 20;
		des[96+j] = (src[108+j] & 268435455) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[112+j] & 268435455) << 16;
		des[100+j] = (src[112+j] & 268435455) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] |= (src[116+j] & 268435455) << 12;
		des[104+j] = (src[116+j] & 268435455) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] |= (src[120+j] & 268435455) << 8;
		des[108+j] = (src[120+j] & 268435455) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] |= (src[124+j] & 268435455) << 4;
	}
}

template<typename T>
void KAFOR_pack_32len_28bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 268435455) << 8;
		des[4+j] = (src[j] & 268435455) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 268435455) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] = (src[8+j] & 268435455);
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 268435455) << 28;
		des[12+j] = (src[12+j] & 268435455) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 268435455) << 24;
		des[16+j] = (src[16+j] & 268435455) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 268435455) << 20;
		des[20+j] = (src[20+j] & 268435455) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 268435455) << 16;
		des[24+j] = (src[24+j] & 268435455) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[28+j] & 268435455) << 12;
		des[28+j] = (src[28+j] & 268435455) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[32+j] & 268435455) << 8;
		des[32+j] = (src[32+j] & 268435455) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[36+j] & 268435455) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] = (src[40+j] & 268435455);
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[44+j] & 268435455) << 28;
		des[40+j] = (src[44+j] & 268435455) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[48+j] & 268435455) << 24;
		des[44+j] = (src[48+j] & 268435455) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[52+j] & 268435455) << 20;
		des[48+j] = (src[52+j] & 268435455) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[56+j] & 268435455) << 16;
		des[52+j] = (src[56+j] & 268435455) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[60+j] & 268435455) << 12;
		des[56+j] = (src[60+j] & 268435455) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[64+j] & 268435455) << 8;
		des[60+j] = (src[64+j] & 268435455) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[68+j] & 268435455) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[72+j] & 268435455);
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[76+j] & 268435455) << 28;
		des[68+j] = (src[76+j] & 268435455) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[80+j] & 268435455) << 24;
		des[72+j] = (src[80+j] & 268435455) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[84+j] & 268435455) << 20;
		des[76+j] = (src[84+j] & 268435455) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[88+j] & 268435455) << 16;
		des[80+j] = (src[88+j] & 268435455) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[92+j] & 268435455) << 12;
		des[84+j] = (src[92+j] & 268435455) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[96+j] & 268435455) << 8;
		des[88+j] = (src[96+j] & 268435455) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[100+j] & 268435455) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[104+j] & 268435455);
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[108+j] & 268435455) << 28;
		des[96+j] = (src[108+j] & 268435455) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[112+j] & 268435455) << 24;
		des[100+j] = (src[112+j] & 268435455) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] |= (src[116+j] & 268435455) << 20;
		des[104+j] = (src[116+j] & 268435455) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] |= (src[120+j] & 268435455) << 16;
		des[108+j] = (src[120+j] & 268435455) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] |= (src[124+j] & 268435455) << 12;
		des[112+j] = (src[124+j] & 268435455) >> 20;
	}
}

template<typename T>
void KAFOR_pack_32len_28bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 268435455) << 16;
		des[4+j] = (src[j] & 268435455) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 268435455) << 12;
		des[8+j] = (src[4+j] & 268435455) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 268435455) << 8;
		des[12+j] = (src[8+j] & 268435455) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j] & 268435455) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j] & 268435455);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 268435455) << 28;
		des[20+j] = (src[20+j] & 268435455) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 268435455) << 24;
		des[24+j] = (src[24+j] & 268435455) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[28+j] & 268435455) << 20;
		des[28+j] = (src[28+j] & 268435455) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[32+j] & 268435455) << 16;
		des[32+j] = (src[32+j] & 268435455) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[36+j] & 268435455) << 12;
		des[36+j] = (src[36+j] & 268435455) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[40+j] & 268435455) << 8;
		des[40+j] = (src[40+j] & 268435455) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[44+j] & 268435455) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] = (src[48+j] & 268435455);
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[52+j] & 268435455) << 28;
		des[48+j] = (src[52+j] & 268435455) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[56+j] & 268435455) << 24;
		des[52+j] = (src[56+j] & 268435455) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[60+j] & 268435455) << 20;
		des[56+j] = (src[60+j] & 268435455) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[64+j] & 268435455) << 16;
		des[60+j] = (src[64+j] & 268435455) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[68+j] & 268435455) << 12;
		des[64+j] = (src[68+j] & 268435455) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[72+j] & 268435455) << 8;
		des[68+j] = (src[72+j] & 268435455) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[76+j] & 268435455) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] = (src[80+j] & 268435455);
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[84+j] & 268435455) << 28;
		des[76+j] = (src[84+j] & 268435455) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[88+j] & 268435455) << 24;
		des[80+j] = (src[88+j] & 268435455) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[92+j] & 268435455) << 20;
		des[84+j] = (src[92+j] & 268435455) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[96+j] & 268435455) << 16;
		des[88+j] = (src[96+j] & 268435455) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[100+j] & 268435455) << 12;
		des[92+j] = (src[100+j] & 268435455) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[104+j] & 268435455) << 8;
		des[96+j] = (src[104+j] & 268435455) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[108+j] & 268435455) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] = (src[112+j] & 268435455);
	}
	for (int j=0; j<4; ++j) {
		des[100+j] |= (src[116+j] & 268435455) << 28;
		des[104+j] = (src[116+j] & 268435455) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] |= (src[120+j] & 268435455) << 24;
		des[108+j] = (src[120+j] & 268435455) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] |= (src[124+j] & 268435455) << 20;
		des[112+j] = (src[124+j] & 268435455) >> 12;
	}
}

template<typename T>
void KAFOR_pack_32len_28bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 268435455) << 24;
		des[4+j] = (src[j] & 268435455) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 268435455) << 20;
		des[8+j] = (src[4+j] & 268435455) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 268435455) << 16;
		des[12+j] = (src[8+j] & 268435455) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j] & 268435455) << 12;
		des[16+j] = (src[12+j] & 268435455) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[16+j] & 268435455) << 8;
		des[20+j] = (src[16+j] & 268435455) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[20+j] & 268435455) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] = (src[24+j] & 268435455);
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[28+j] & 268435455) << 28;
		des[28+j] = (src[28+j] & 268435455) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[32+j] & 268435455) << 24;
		des[32+j] = (src[32+j] & 268435455) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[36+j] & 268435455) << 20;
		des[36+j] = (src[36+j] & 268435455) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[40+j] & 268435455) << 16;
		des[40+j] = (src[40+j] & 268435455) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[44+j] & 268435455) << 12;
		des[44+j] = (src[44+j] & 268435455) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[48+j] & 268435455) << 8;
		des[48+j] = (src[48+j] & 268435455) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[52+j] & 268435455) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] = (src[56+j] & 268435455);
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[60+j] & 268435455) << 28;
		des[56+j] = (src[60+j] & 268435455) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[64+j] & 268435455) << 24;
		des[60+j] = (src[64+j] & 268435455) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[68+j] & 268435455) << 20;
		des[64+j] = (src[68+j] & 268435455) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[72+j] & 268435455) << 16;
		des[68+j] = (src[72+j] & 268435455) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[76+j] & 268435455) << 12;
		des[72+j] = (src[76+j] & 268435455) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[80+j] & 268435455) << 8;
		des[76+j] = (src[80+j] & 268435455) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[84+j] & 268435455) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] = (src[88+j] & 268435455);
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[92+j] & 268435455) << 28;
		des[84+j] = (src[92+j] & 268435455) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[96+j] & 268435455) << 24;
		des[88+j] = (src[96+j] & 268435455) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[100+j] & 268435455) << 20;
		des[92+j] = (src[100+j] & 268435455) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[104+j] & 268435455) << 16;
		des[96+j] = (src[104+j] & 268435455) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[108+j] & 268435455) << 12;
		des[100+j] = (src[108+j] & 268435455) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] |= (src[112+j] & 268435455) << 8;
		des[104+j] = (src[112+j] & 268435455) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] |= (src[116+j] & 268435455) << 4;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[120+j] & 268435455);
	}
	for (int j=0; j<4; ++j) {
		des[108+j] |= (src[124+j] & 268435455) << 28;
		des[112+j] = (src[124+j] & 268435455) >> 4;
	}
}

template<typename T>
void KAFOR_pack_32len_29bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 536870911);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 536870911) << 29;
		des[4+j] = (src[4+j] & 536870911) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 536870911) << 26;
		des[8+j] = (src[8+j] & 536870911) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 536870911) << 23;
		des[12+j] = (src[12+j] & 536870911) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 536870911) << 20;
		des[16+j] = (src[16+j] & 536870911) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 536870911) << 17;
		des[20+j] = (src[20+j] & 536870911) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 536870911) << 14;
		des[24+j] = (src[24+j] & 536870911) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[28+j] & 536870911) << 11;
		des[28+j] = (src[28+j] & 536870911) >> 21;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[32+j] & 536870911) << 8;
		des[32+j] = (src[32+j] & 536870911) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[36+j] & 536870911) << 5;
		des[36+j] = (src[36+j] & 536870911) >> 27;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[40+j] & 536870911) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[44+j] & 536870911) << 31;
		des[40+j] = (src[44+j] & 536870911) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[48+j] & 536870911) << 28;
		des[44+j] = (src[48+j] & 536870911) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[52+j] & 536870911) << 25;
		des[48+j] = (src[52+j] & 536870911) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[56+j] & 536870911) << 22;
		des[52+j] = (src[56+j] & 536870911) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[60+j] & 536870911) << 19;
		des[56+j] = (src[60+j] & 536870911) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[64+j] & 536870911) << 16;
		des[60+j] = (src[64+j] & 536870911) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[68+j] & 536870911) << 13;
		des[64+j] = (src[68+j] & 536870911) >> 19;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[72+j] & 536870911) << 10;
		des[68+j] = (src[72+j] & 536870911) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[76+j] & 536870911) << 7;
		des[72+j] = (src[76+j] & 536870911) >> 25;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[80+j] & 536870911) << 4;
		des[76+j] = (src[80+j] & 536870911) >> 28;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[84+j] & 536870911) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[88+j] & 536870911) << 30;
		des[80+j] = (src[88+j] & 536870911) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[92+j] & 536870911) << 27;
		des[84+j] = (src[92+j] & 536870911) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[96+j] & 536870911) << 24;
		des[88+j] = (src[96+j] & 536870911) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[100+j] & 536870911) << 21;
		des[92+j] = (src[100+j] & 536870911) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[104+j] & 536870911) << 18;
		des[96+j] = (src[104+j] & 536870911) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[108+j] & 536870911) << 15;
		des[100+j] = (src[108+j] & 536870911) >> 17;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] |= (src[112+j] & 536870911) << 12;
		des[104+j] = (src[112+j] & 536870911) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] |= (src[116+j] & 536870911) << 9;
		des[108+j] = (src[116+j] & 536870911) >> 23;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] |= (src[120+j] & 536870911) << 6;
		des[112+j] = (src[120+j] & 536870911) >> 26;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] |= (src[124+j] & 536870911) << 3;
	}
}

template<typename T>
void KAFOR_pack_32len_29bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 536870911) << 8;
		des[4+j] = (src[j] & 536870911) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 536870911) << 5;
		des[8+j] = (src[4+j] & 536870911) >> 27;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 536870911) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 536870911) << 31;
		des[12+j] = (src[12+j] & 536870911) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 536870911) << 28;
		des[16+j] = (src[16+j] & 536870911) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 536870911) << 25;
		des[20+j] = (src[20+j] & 536870911) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 536870911) << 22;
		des[24+j] = (src[24+j] & 536870911) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[28+j] & 536870911) << 19;
		des[28+j] = (src[28+j] & 536870911) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[32+j] & 536870911) << 16;
		des[32+j] = (src[32+j] & 536870911) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[36+j] & 536870911) << 13;
		des[36+j] = (src[36+j] & 536870911) >> 19;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[40+j] & 536870911) << 10;
		des[40+j] = (src[40+j] & 536870911) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[44+j] & 536870911) << 7;
		des[44+j] = (src[44+j] & 536870911) >> 25;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[48+j] & 536870911) << 4;
		des[48+j] = (src[48+j] & 536870911) >> 28;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[52+j] & 536870911) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[56+j] & 536870911) << 30;
		des[52+j] = (src[56+j] & 536870911) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[60+j] & 536870911) << 27;
		des[56+j] = (src[60+j] & 536870911) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[64+j] & 536870911) << 24;
		des[60+j] = (src[64+j] & 536870911) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[68+j] & 536870911) << 21;
		des[64+j] = (src[68+j] & 536870911) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[72+j] & 536870911) << 18;
		des[68+j] = (src[72+j] & 536870911) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[76+j] & 536870911) << 15;
		des[72+j] = (src[76+j] & 536870911) >> 17;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[80+j] & 536870911) << 12;
		des[76+j] = (src[80+j] & 536870911) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[84+j] & 536870911) << 9;
		des[80+j] = (src[84+j] & 536870911) >> 23;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[88+j] & 536870911) << 6;
		des[84+j] = (src[88+j] & 536870911) >> 26;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[92+j] & 536870911) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] = (src[96+j] & 536870911);
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[100+j] & 536870911) << 29;
		des[92+j] = (src[100+j] & 536870911) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[104+j] & 536870911) << 26;
		des[96+j] = (src[104+j] & 536870911) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[108+j] & 536870911) << 23;
		des[100+j] = (src[108+j] & 536870911) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] |= (src[112+j] & 536870911) << 20;
		des[104+j] = (src[112+j] & 536870911) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] |= (src[116+j] & 536870911) << 17;
		des[108+j] = (src[116+j] & 536870911) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] |= (src[120+j] & 536870911) << 14;
		des[112+j] = (src[120+j] & 536870911) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] |= (src[124+j] & 536870911) << 11;
		des[116+j] = (src[124+j] & 536870911) >> 21;
	}
}

template<typename T>
void KAFOR_pack_32len_29bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 536870911) << 16;
		des[4+j] = (src[j] & 536870911) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 536870911) << 13;
		des[8+j] = (src[4+j] & 536870911) >> 19;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 536870911) << 10;
		des[12+j] = (src[8+j] & 536870911) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j] & 536870911) << 7;
		des[16+j] = (src[12+j] & 536870911) >> 25;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[16+j] & 536870911) << 4;
		des[20+j] = (src[16+j] & 536870911) >> 28;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[20+j] & 536870911) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 536870911) << 30;
		des[24+j] = (src[24+j] & 536870911) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[28+j] & 536870911) << 27;
		des[28+j] = (src[28+j] & 536870911) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[32+j] & 536870911) << 24;
		des[32+j] = (src[32+j] & 536870911) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[36+j] & 536870911) << 21;
		des[36+j] = (src[36+j] & 536870911) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[40+j] & 536870911) << 18;
		des[40+j] = (src[40+j] & 536870911) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[44+j] & 536870911) << 15;
		des[44+j] = (src[44+j] & 536870911) >> 17;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[48+j] & 536870911) << 12;
		des[48+j] = (src[48+j] & 536870911) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[52+j] & 536870911) << 9;
		des[52+j] = (src[52+j] & 536870911) >> 23;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[56+j] & 536870911) << 6;
		des[56+j] = (src[56+j] & 536870911) >> 26;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[60+j] & 536870911) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[64+j] & 536870911);
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[68+j] & 536870911) << 29;
		des[64+j] = (src[68+j] & 536870911) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[72+j] & 536870911) << 26;
		des[68+j] = (src[72+j] & 536870911) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[76+j] & 536870911) << 23;
		des[72+j] = (src[76+j] & 536870911) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[80+j] & 536870911) << 20;
		des[76+j] = (src[80+j] & 536870911) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[84+j] & 536870911) << 17;
		des[80+j] = (src[84+j] & 536870911) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[88+j] & 536870911) << 14;
		des[84+j] = (src[88+j] & 536870911) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[92+j] & 536870911) << 11;
		des[88+j] = (src[92+j] & 536870911) >> 21;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[96+j] & 536870911) << 8;
		des[92+j] = (src[96+j] & 536870911) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[100+j] & 536870911) << 5;
		des[96+j] = (src[100+j] & 536870911) >> 27;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[104+j] & 536870911) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[108+j] & 536870911) << 31;
		des[100+j] = (src[108+j] & 536870911) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] |= (src[112+j] & 536870911) << 28;
		des[104+j] = (src[112+j] & 536870911) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] |= (src[116+j] & 536870911) << 25;
		des[108+j] = (src[116+j] & 536870911) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] |= (src[120+j] & 536870911) << 22;
		des[112+j] = (src[120+j] & 536870911) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] |= (src[124+j] & 536870911) << 19;
		des[116+j] = (src[124+j] & 536870911) >> 13;
	}
}

template<typename T>
void KAFOR_pack_32len_29bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 536870911) << 24;
		des[4+j] = (src[j] & 536870911) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 536870911) << 21;
		des[8+j] = (src[4+j] & 536870911) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 536870911) << 18;
		des[12+j] = (src[8+j] & 536870911) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j] & 536870911) << 15;
		des[16+j] = (src[12+j] & 536870911) >> 17;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[16+j] & 536870911) << 12;
		des[20+j] = (src[16+j] & 536870911) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[20+j] & 536870911) << 9;
		des[24+j] = (src[20+j] & 536870911) >> 23;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[24+j] & 536870911) << 6;
		des[28+j] = (src[24+j] & 536870911) >> 26;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[28+j] & 536870911) << 3;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[32+j] & 536870911);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[36+j] & 536870911) << 29;
		des[36+j] = (src[36+j] & 536870911) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[40+j] & 536870911) << 26;
		des[40+j] = (src[40+j] & 536870911) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[44+j] & 536870911) << 23;
		des[44+j] = (src[44+j] & 536870911) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[48+j] & 536870911) << 20;
		des[48+j] = (src[48+j] & 536870911) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[52+j] & 536870911) << 17;
		des[52+j] = (src[52+j] & 536870911) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[56+j] & 536870911) << 14;
		des[56+j] = (src[56+j] & 536870911) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[60+j] & 536870911) << 11;
		des[60+j] = (src[60+j] & 536870911) >> 21;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[64+j] & 536870911) << 8;
		des[64+j] = (src[64+j] & 536870911) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[68+j] & 536870911) << 5;
		des[68+j] = (src[68+j] & 536870911) >> 27;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[72+j] & 536870911) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[76+j] & 536870911) << 31;
		des[72+j] = (src[76+j] & 536870911) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[80+j] & 536870911) << 28;
		des[76+j] = (src[80+j] & 536870911) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[84+j] & 536870911) << 25;
		des[80+j] = (src[84+j] & 536870911) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[88+j] & 536870911) << 22;
		des[84+j] = (src[88+j] & 536870911) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[92+j] & 536870911) << 19;
		des[88+j] = (src[92+j] & 536870911) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[96+j] & 536870911) << 16;
		des[92+j] = (src[96+j] & 536870911) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[100+j] & 536870911) << 13;
		des[96+j] = (src[100+j] & 536870911) >> 19;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[104+j] & 536870911) << 10;
		des[100+j] = (src[104+j] & 536870911) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] |= (src[108+j] & 536870911) << 7;
		des[104+j] = (src[108+j] & 536870911) >> 25;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] |= (src[112+j] & 536870911) << 4;
		des[108+j] = (src[112+j] & 536870911) >> 28;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] |= (src[116+j] & 536870911) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] |= (src[120+j] & 536870911) << 30;
		des[112+j] = (src[120+j] & 536870911) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] |= (src[124+j] & 536870911) << 27;
		des[116+j] = (src[124+j] & 536870911) >> 5;
	}
}

template<typename T>
void KAFOR_pack_32len_30bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 1073741823);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 1073741823) << 30;
		des[4+j] = (src[4+j] & 1073741823) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 1073741823) << 28;
		des[8+j] = (src[8+j] & 1073741823) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 1073741823) << 26;
		des[12+j] = (src[12+j] & 1073741823) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 1073741823) << 24;
		des[16+j] = (src[16+j] & 1073741823) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 1073741823) << 22;
		des[20+j] = (src[20+j] & 1073741823) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 1073741823) << 20;
		des[24+j] = (src[24+j] & 1073741823) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[28+j] & 1073741823) << 18;
		des[28+j] = (src[28+j] & 1073741823) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[32+j] & 1073741823) << 16;
		des[32+j] = (src[32+j] & 1073741823) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[36+j] & 1073741823) << 14;
		des[36+j] = (src[36+j] & 1073741823) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[40+j] & 1073741823) << 12;
		des[40+j] = (src[40+j] & 1073741823) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[44+j] & 1073741823) << 10;
		des[44+j] = (src[44+j] & 1073741823) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[48+j] & 1073741823) << 8;
		des[48+j] = (src[48+j] & 1073741823) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[52+j] & 1073741823) << 6;
		des[52+j] = (src[52+j] & 1073741823) >> 26;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[56+j] & 1073741823) << 4;
		des[56+j] = (src[56+j] & 1073741823) >> 28;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[60+j] & 1073741823) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] = (src[64+j] & 1073741823);
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[68+j] & 1073741823) << 30;
		des[64+j] = (src[68+j] & 1073741823) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[72+j] & 1073741823) << 28;
		des[68+j] = (src[72+j] & 1073741823) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[76+j] & 1073741823) << 26;
		des[72+j] = (src[76+j] & 1073741823) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[80+j] & 1073741823) << 24;
		des[76+j] = (src[80+j] & 1073741823) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[84+j] & 1073741823) << 22;
		des[80+j] = (src[84+j] & 1073741823) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[88+j] & 1073741823) << 20;
		des[84+j] = (src[88+j] & 1073741823) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[92+j] & 1073741823) << 18;
		des[88+j] = (src[92+j] & 1073741823) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[96+j] & 1073741823) << 16;
		des[92+j] = (src[96+j] & 1073741823) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[100+j] & 1073741823) << 14;
		des[96+j] = (src[100+j] & 1073741823) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[104+j] & 1073741823) << 12;
		des[100+j] = (src[104+j] & 1073741823) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] |= (src[108+j] & 1073741823) << 10;
		des[104+j] = (src[108+j] & 1073741823) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] |= (src[112+j] & 1073741823) << 8;
		des[108+j] = (src[112+j] & 1073741823) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] |= (src[116+j] & 1073741823) << 6;
		des[112+j] = (src[116+j] & 1073741823) >> 26;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] |= (src[120+j] & 1073741823) << 4;
		des[116+j] = (src[120+j] & 1073741823) >> 28;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] |= (src[124+j] & 1073741823) << 2;
	}
}

template<typename T>
void KAFOR_pack_32len_30bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 1073741823) << 8;
		des[4+j] = (src[j] & 1073741823) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 1073741823) << 6;
		des[8+j] = (src[4+j] & 1073741823) >> 26;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 1073741823) << 4;
		des[12+j] = (src[8+j] & 1073741823) >> 28;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j] & 1073741823) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] = (src[16+j] & 1073741823);
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 1073741823) << 30;
		des[20+j] = (src[20+j] & 1073741823) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 1073741823) << 28;
		des[24+j] = (src[24+j] & 1073741823) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[28+j] & 1073741823) << 26;
		des[28+j] = (src[28+j] & 1073741823) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[32+j] & 1073741823) << 24;
		des[32+j] = (src[32+j] & 1073741823) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[36+j] & 1073741823) << 22;
		des[36+j] = (src[36+j] & 1073741823) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[40+j] & 1073741823) << 20;
		des[40+j] = (src[40+j] & 1073741823) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[44+j] & 1073741823) << 18;
		des[44+j] = (src[44+j] & 1073741823) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[48+j] & 1073741823) << 16;
		des[48+j] = (src[48+j] & 1073741823) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[52+j] & 1073741823) << 14;
		des[52+j] = (src[52+j] & 1073741823) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[56+j] & 1073741823) << 12;
		des[56+j] = (src[56+j] & 1073741823) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[60+j] & 1073741823) << 10;
		des[60+j] = (src[60+j] & 1073741823) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[64+j] & 1073741823) << 8;
		des[64+j] = (src[64+j] & 1073741823) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[68+j] & 1073741823) << 6;
		des[68+j] = (src[68+j] & 1073741823) >> 26;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[72+j] & 1073741823) << 4;
		des[72+j] = (src[72+j] & 1073741823) >> 28;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[76+j] & 1073741823) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] = (src[80+j] & 1073741823);
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[84+j] & 1073741823) << 30;
		des[80+j] = (src[84+j] & 1073741823) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[88+j] & 1073741823) << 28;
		des[84+j] = (src[88+j] & 1073741823) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[92+j] & 1073741823) << 26;
		des[88+j] = (src[92+j] & 1073741823) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[96+j] & 1073741823) << 24;
		des[92+j] = (src[96+j] & 1073741823) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[100+j] & 1073741823) << 22;
		des[96+j] = (src[100+j] & 1073741823) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[104+j] & 1073741823) << 20;
		des[100+j] = (src[104+j] & 1073741823) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] |= (src[108+j] & 1073741823) << 18;
		des[104+j] = (src[108+j] & 1073741823) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] |= (src[112+j] & 1073741823) << 16;
		des[108+j] = (src[112+j] & 1073741823) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] |= (src[116+j] & 1073741823) << 14;
		des[112+j] = (src[116+j] & 1073741823) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] |= (src[120+j] & 1073741823) << 12;
		des[116+j] = (src[120+j] & 1073741823) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] |= (src[124+j] & 1073741823) << 10;
		des[120+j] = (src[124+j] & 1073741823) >> 22;
	}
}

template<typename T>
void KAFOR_pack_32len_30bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 1073741823) << 16;
		des[4+j] = (src[j] & 1073741823) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 1073741823) << 14;
		des[8+j] = (src[4+j] & 1073741823) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 1073741823) << 12;
		des[12+j] = (src[8+j] & 1073741823) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j] & 1073741823) << 10;
		des[16+j] = (src[12+j] & 1073741823) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[16+j] & 1073741823) << 8;
		des[20+j] = (src[16+j] & 1073741823) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[20+j] & 1073741823) << 6;
		des[24+j] = (src[20+j] & 1073741823) >> 26;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[24+j] & 1073741823) << 4;
		des[28+j] = (src[24+j] & 1073741823) >> 28;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[28+j] & 1073741823) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[32+j] & 1073741823);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[36+j] & 1073741823) << 30;
		des[36+j] = (src[36+j] & 1073741823) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[40+j] & 1073741823) << 28;
		des[40+j] = (src[40+j] & 1073741823) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[44+j] & 1073741823) << 26;
		des[44+j] = (src[44+j] & 1073741823) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[48+j] & 1073741823) << 24;
		des[48+j] = (src[48+j] & 1073741823) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[52+j] & 1073741823) << 22;
		des[52+j] = (src[52+j] & 1073741823) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[56+j] & 1073741823) << 20;
		des[56+j] = (src[56+j] & 1073741823) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[60+j] & 1073741823) << 18;
		des[60+j] = (src[60+j] & 1073741823) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[64+j] & 1073741823) << 16;
		des[64+j] = (src[64+j] & 1073741823) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[68+j] & 1073741823) << 14;
		des[68+j] = (src[68+j] & 1073741823) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[72+j] & 1073741823) << 12;
		des[72+j] = (src[72+j] & 1073741823) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[76+j] & 1073741823) << 10;
		des[76+j] = (src[76+j] & 1073741823) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[80+j] & 1073741823) << 8;
		des[80+j] = (src[80+j] & 1073741823) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[84+j] & 1073741823) << 6;
		des[84+j] = (src[84+j] & 1073741823) >> 26;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[88+j] & 1073741823) << 4;
		des[88+j] = (src[88+j] & 1073741823) >> 28;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[92+j] & 1073741823) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] = (src[96+j] & 1073741823);
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[100+j] & 1073741823) << 30;
		des[96+j] = (src[100+j] & 1073741823) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[104+j] & 1073741823) << 28;
		des[100+j] = (src[104+j] & 1073741823) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] |= (src[108+j] & 1073741823) << 26;
		des[104+j] = (src[108+j] & 1073741823) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] |= (src[112+j] & 1073741823) << 24;
		des[108+j] = (src[112+j] & 1073741823) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] |= (src[116+j] & 1073741823) << 22;
		des[112+j] = (src[116+j] & 1073741823) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] |= (src[120+j] & 1073741823) << 20;
		des[116+j] = (src[120+j] & 1073741823) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] |= (src[124+j] & 1073741823) << 18;
		des[120+j] = (src[124+j] & 1073741823) >> 14;
	}
}

template<typename T>
void KAFOR_pack_32len_30bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 1073741823) << 24;
		des[4+j] = (src[j] & 1073741823) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 1073741823) << 22;
		des[8+j] = (src[4+j] & 1073741823) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 1073741823) << 20;
		des[12+j] = (src[8+j] & 1073741823) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j] & 1073741823) << 18;
		des[16+j] = (src[12+j] & 1073741823) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[16+j] & 1073741823) << 16;
		des[20+j] = (src[16+j] & 1073741823) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[20+j] & 1073741823) << 14;
		des[24+j] = (src[20+j] & 1073741823) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[24+j] & 1073741823) << 12;
		des[28+j] = (src[24+j] & 1073741823) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[28+j] & 1073741823) << 10;
		des[32+j] = (src[28+j] & 1073741823) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[32+j] & 1073741823) << 8;
		des[36+j] = (src[32+j] & 1073741823) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[36+j] & 1073741823) << 6;
		des[40+j] = (src[36+j] & 1073741823) >> 26;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[40+j] & 1073741823) << 4;
		des[44+j] = (src[40+j] & 1073741823) >> 28;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[44+j] & 1073741823) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] = (src[48+j] & 1073741823);
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[52+j] & 1073741823) << 30;
		des[52+j] = (src[52+j] & 1073741823) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[56+j] & 1073741823) << 28;
		des[56+j] = (src[56+j] & 1073741823) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[60+j] & 1073741823) << 26;
		des[60+j] = (src[60+j] & 1073741823) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[64+j] & 1073741823) << 24;
		des[64+j] = (src[64+j] & 1073741823) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[68+j] & 1073741823) << 22;
		des[68+j] = (src[68+j] & 1073741823) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[72+j] & 1073741823) << 20;
		des[72+j] = (src[72+j] & 1073741823) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[76+j] & 1073741823) << 18;
		des[76+j] = (src[76+j] & 1073741823) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[80+j] & 1073741823) << 16;
		des[80+j] = (src[80+j] & 1073741823) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[84+j] & 1073741823) << 14;
		des[84+j] = (src[84+j] & 1073741823) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[88+j] & 1073741823) << 12;
		des[88+j] = (src[88+j] & 1073741823) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[92+j] & 1073741823) << 10;
		des[92+j] = (src[92+j] & 1073741823) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[96+j] & 1073741823) << 8;
		des[96+j] = (src[96+j] & 1073741823) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[100+j] & 1073741823) << 6;
		des[100+j] = (src[100+j] & 1073741823) >> 26;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] |= (src[104+j] & 1073741823) << 4;
		des[104+j] = (src[104+j] & 1073741823) >> 28;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] |= (src[108+j] & 1073741823) << 2;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] = (src[112+j] & 1073741823);
	}
	for (int j=0; j<4; ++j) {
		des[108+j] |= (src[116+j] & 1073741823) << 30;
		des[112+j] = (src[116+j] & 1073741823) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] |= (src[120+j] & 1073741823) << 28;
		des[116+j] = (src[120+j] & 1073741823) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] |= (src[124+j] & 1073741823) << 26;
		des[120+j] = (src[124+j] & 1073741823) >> 6;
	}
}

template<typename T>
void KAFOR_pack_32len_31bw_0offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] = (src[j] & 2147483647);
	}
	for (int j=0; j<4; ++j) {
		des[j] |= (src[4+j] & 2147483647) << 31;
		des[4+j] = (src[4+j] & 2147483647) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[8+j] & 2147483647) << 30;
		des[8+j] = (src[8+j] & 2147483647) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[12+j] & 2147483647) << 29;
		des[12+j] = (src[12+j] & 2147483647) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[16+j] & 2147483647) << 28;
		des[16+j] = (src[16+j] & 2147483647) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[20+j] & 2147483647) << 27;
		des[20+j] = (src[20+j] & 2147483647) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[24+j] & 2147483647) << 26;
		des[24+j] = (src[24+j] & 2147483647) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[28+j] & 2147483647) << 25;
		des[28+j] = (src[28+j] & 2147483647) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[32+j] & 2147483647) << 24;
		des[32+j] = (src[32+j] & 2147483647) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[36+j] & 2147483647) << 23;
		des[36+j] = (src[36+j] & 2147483647) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[40+j] & 2147483647) << 22;
		des[40+j] = (src[40+j] & 2147483647) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[44+j] & 2147483647) << 21;
		des[44+j] = (src[44+j] & 2147483647) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[48+j] & 2147483647) << 20;
		des[48+j] = (src[48+j] & 2147483647) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[52+j] & 2147483647) << 19;
		des[52+j] = (src[52+j] & 2147483647) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[56+j] & 2147483647) << 18;
		des[56+j] = (src[56+j] & 2147483647) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[60+j] & 2147483647) << 17;
		des[60+j] = (src[60+j] & 2147483647) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[64+j] & 2147483647) << 16;
		des[64+j] = (src[64+j] & 2147483647) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[68+j] & 2147483647) << 15;
		des[68+j] = (src[68+j] & 2147483647) >> 17;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[72+j] & 2147483647) << 14;
		des[72+j] = (src[72+j] & 2147483647) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[76+j] & 2147483647) << 13;
		des[76+j] = (src[76+j] & 2147483647) >> 19;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[80+j] & 2147483647) << 12;
		des[80+j] = (src[80+j] & 2147483647) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[84+j] & 2147483647) << 11;
		des[84+j] = (src[84+j] & 2147483647) >> 21;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[88+j] & 2147483647) << 10;
		des[88+j] = (src[88+j] & 2147483647) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[92+j] & 2147483647) << 9;
		des[92+j] = (src[92+j] & 2147483647) >> 23;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[96+j] & 2147483647) << 8;
		des[96+j] = (src[96+j] & 2147483647) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[100+j] & 2147483647) << 7;
		des[100+j] = (src[100+j] & 2147483647) >> 25;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] |= (src[104+j] & 2147483647) << 6;
		des[104+j] = (src[104+j] & 2147483647) >> 26;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] |= (src[108+j] & 2147483647) << 5;
		des[108+j] = (src[108+j] & 2147483647) >> 27;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] |= (src[112+j] & 2147483647) << 4;
		des[112+j] = (src[112+j] & 2147483647) >> 28;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] |= (src[116+j] & 2147483647) << 3;
		des[116+j] = (src[116+j] & 2147483647) >> 29;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] |= (src[120+j] & 2147483647) << 2;
		des[120+j] = (src[120+j] & 2147483647) >> 30;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] |= (src[124+j] & 2147483647) << 1;
	}
}

template<typename T>
void KAFOR_pack_32len_31bw_8offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 2147483647) << 8;
		des[4+j] = (src[j] & 2147483647) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 2147483647) << 7;
		des[8+j] = (src[4+j] & 2147483647) >> 25;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 2147483647) << 6;
		des[12+j] = (src[8+j] & 2147483647) >> 26;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j] & 2147483647) << 5;
		des[16+j] = (src[12+j] & 2147483647) >> 27;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[16+j] & 2147483647) << 4;
		des[20+j] = (src[16+j] & 2147483647) >> 28;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[20+j] & 2147483647) << 3;
		des[24+j] = (src[20+j] & 2147483647) >> 29;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[24+j] & 2147483647) << 2;
		des[28+j] = (src[24+j] & 2147483647) >> 30;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[28+j] & 2147483647) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] = (src[32+j] & 2147483647);
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[36+j] & 2147483647) << 31;
		des[36+j] = (src[36+j] & 2147483647) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[40+j] & 2147483647) << 30;
		des[40+j] = (src[40+j] & 2147483647) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[44+j] & 2147483647) << 29;
		des[44+j] = (src[44+j] & 2147483647) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[48+j] & 2147483647) << 28;
		des[48+j] = (src[48+j] & 2147483647) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[52+j] & 2147483647) << 27;
		des[52+j] = (src[52+j] & 2147483647) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[56+j] & 2147483647) << 26;
		des[56+j] = (src[56+j] & 2147483647) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[60+j] & 2147483647) << 25;
		des[60+j] = (src[60+j] & 2147483647) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[64+j] & 2147483647) << 24;
		des[64+j] = (src[64+j] & 2147483647) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[68+j] & 2147483647) << 23;
		des[68+j] = (src[68+j] & 2147483647) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[72+j] & 2147483647) << 22;
		des[72+j] = (src[72+j] & 2147483647) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[76+j] & 2147483647) << 21;
		des[76+j] = (src[76+j] & 2147483647) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[80+j] & 2147483647) << 20;
		des[80+j] = (src[80+j] & 2147483647) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[84+j] & 2147483647) << 19;
		des[84+j] = (src[84+j] & 2147483647) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[88+j] & 2147483647) << 18;
		des[88+j] = (src[88+j] & 2147483647) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[92+j] & 2147483647) << 17;
		des[92+j] = (src[92+j] & 2147483647) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[96+j] & 2147483647) << 16;
		des[96+j] = (src[96+j] & 2147483647) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[100+j] & 2147483647) << 15;
		des[100+j] = (src[100+j] & 2147483647) >> 17;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] |= (src[104+j] & 2147483647) << 14;
		des[104+j] = (src[104+j] & 2147483647) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] |= (src[108+j] & 2147483647) << 13;
		des[108+j] = (src[108+j] & 2147483647) >> 19;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] |= (src[112+j] & 2147483647) << 12;
		des[112+j] = (src[112+j] & 2147483647) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] |= (src[116+j] & 2147483647) << 11;
		des[116+j] = (src[116+j] & 2147483647) >> 21;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] |= (src[120+j] & 2147483647) << 10;
		des[120+j] = (src[120+j] & 2147483647) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] |= (src[124+j] & 2147483647) << 9;
		des[124+j] = (src[124+j] & 2147483647) >> 23;
	}
}

template<typename T>
void KAFOR_pack_32len_31bw_16offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 2147483647) << 16;
		des[4+j] = (src[j] & 2147483647) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 2147483647) << 15;
		des[8+j] = (src[4+j] & 2147483647) >> 17;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 2147483647) << 14;
		des[12+j] = (src[8+j] & 2147483647) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j] & 2147483647) << 13;
		des[16+j] = (src[12+j] & 2147483647) >> 19;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[16+j] & 2147483647) << 12;
		des[20+j] = (src[16+j] & 2147483647) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[20+j] & 2147483647) << 11;
		des[24+j] = (src[20+j] & 2147483647) >> 21;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[24+j] & 2147483647) << 10;
		des[28+j] = (src[24+j] & 2147483647) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[28+j] & 2147483647) << 9;
		des[32+j] = (src[28+j] & 2147483647) >> 23;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[32+j] & 2147483647) << 8;
		des[36+j] = (src[32+j] & 2147483647) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[36+j] & 2147483647) << 7;
		des[40+j] = (src[36+j] & 2147483647) >> 25;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[40+j] & 2147483647) << 6;
		des[44+j] = (src[40+j] & 2147483647) >> 26;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[44+j] & 2147483647) << 5;
		des[48+j] = (src[44+j] & 2147483647) >> 27;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[48+j] & 2147483647) << 4;
		des[52+j] = (src[48+j] & 2147483647) >> 28;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[52+j] & 2147483647) << 3;
		des[56+j] = (src[52+j] & 2147483647) >> 29;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[56+j] & 2147483647) << 2;
		des[60+j] = (src[56+j] & 2147483647) >> 30;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[60+j] & 2147483647) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] = (src[64+j] & 2147483647);
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[68+j] & 2147483647) << 31;
		des[68+j] = (src[68+j] & 2147483647) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[72+j] & 2147483647) << 30;
		des[72+j] = (src[72+j] & 2147483647) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[76+j] & 2147483647) << 29;
		des[76+j] = (src[76+j] & 2147483647) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[80+j] & 2147483647) << 28;
		des[80+j] = (src[80+j] & 2147483647) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[84+j] & 2147483647) << 27;
		des[84+j] = (src[84+j] & 2147483647) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[88+j] & 2147483647) << 26;
		des[88+j] = (src[88+j] & 2147483647) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[92+j] & 2147483647) << 25;
		des[92+j] = (src[92+j] & 2147483647) >> 7;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[96+j] & 2147483647) << 24;
		des[96+j] = (src[96+j] & 2147483647) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[100+j] & 2147483647) << 23;
		des[100+j] = (src[100+j] & 2147483647) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] |= (src[104+j] & 2147483647) << 22;
		des[104+j] = (src[104+j] & 2147483647) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] |= (src[108+j] & 2147483647) << 21;
		des[108+j] = (src[108+j] & 2147483647) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] |= (src[112+j] & 2147483647) << 20;
		des[112+j] = (src[112+j] & 2147483647) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] |= (src[116+j] & 2147483647) << 19;
		des[116+j] = (src[116+j] & 2147483647) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] |= (src[120+j] & 2147483647) << 18;
		des[120+j] = (src[120+j] & 2147483647) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] |= (src[124+j] & 2147483647) << 17;
		des[124+j] = (src[124+j] & 2147483647) >> 15;
	}
}

template<typename T>
void KAFOR_pack_32len_31bw_24offset(T * des, const uint32_t *src) {
	for (int j=0; j<4; ++j) {
		des[j] |= (src[j] & 2147483647) << 24;
		des[4+j] = (src[j] & 2147483647) >> 8;
	}
	for (int j=0; j<4; ++j) {
		des[4+j] |= (src[4+j] & 2147483647) << 23;
		des[8+j] = (src[4+j] & 2147483647) >> 9;
	}
	for (int j=0; j<4; ++j) {
		des[8+j] |= (src[8+j] & 2147483647) << 22;
		des[12+j] = (src[8+j] & 2147483647) >> 10;
	}
	for (int j=0; j<4; ++j) {
		des[12+j] |= (src[12+j] & 2147483647) << 21;
		des[16+j] = (src[12+j] & 2147483647) >> 11;
	}
	for (int j=0; j<4; ++j) {
		des[16+j] |= (src[16+j] & 2147483647) << 20;
		des[20+j] = (src[16+j] & 2147483647) >> 12;
	}
	for (int j=0; j<4; ++j) {
		des[20+j] |= (src[20+j] & 2147483647) << 19;
		des[24+j] = (src[20+j] & 2147483647) >> 13;
	}
	for (int j=0; j<4; ++j) {
		des[24+j] |= (src[24+j] & 2147483647) << 18;
		des[28+j] = (src[24+j] & 2147483647) >> 14;
	}
	for (int j=0; j<4; ++j) {
		des[28+j] |= (src[28+j] & 2147483647) << 17;
		des[32+j] = (src[28+j] & 2147483647) >> 15;
	}
	for (int j=0; j<4; ++j) {
		des[32+j] |= (src[32+j] & 2147483647) << 16;
		des[36+j] = (src[32+j] & 2147483647) >> 16;
	}
	for (int j=0; j<4; ++j) {
		des[36+j] |= (src[36+j] & 2147483647) << 15;
		des[40+j] = (src[36+j] & 2147483647) >> 17;
	}
	for (int j=0; j<4; ++j) {
		des[40+j] |= (src[40+j] & 2147483647) << 14;
		des[44+j] = (src[40+j] & 2147483647) >> 18;
	}
	for (int j=0; j<4; ++j) {
		des[44+j] |= (src[44+j] & 2147483647) << 13;
		des[48+j] = (src[44+j] & 2147483647) >> 19;
	}
	for (int j=0; j<4; ++j) {
		des[48+j] |= (src[48+j] & 2147483647) << 12;
		des[52+j] = (src[48+j] & 2147483647) >> 20;
	}
	for (int j=0; j<4; ++j) {
		des[52+j] |= (src[52+j] & 2147483647) << 11;
		des[56+j] = (src[52+j] & 2147483647) >> 21;
	}
	for (int j=0; j<4; ++j) {
		des[56+j] |= (src[56+j] & 2147483647) << 10;
		des[60+j] = (src[56+j] & 2147483647) >> 22;
	}
	for (int j=0; j<4; ++j) {
		des[60+j] |= (src[60+j] & 2147483647) << 9;
		des[64+j] = (src[60+j] & 2147483647) >> 23;
	}
	for (int j=0; j<4; ++j) {
		des[64+j] |= (src[64+j] & 2147483647) << 8;
		des[68+j] = (src[64+j] & 2147483647) >> 24;
	}
	for (int j=0; j<4; ++j) {
		des[68+j] |= (src[68+j] & 2147483647) << 7;
		des[72+j] = (src[68+j] & 2147483647) >> 25;
	}
	for (int j=0; j<4; ++j) {
		des[72+j] |= (src[72+j] & 2147483647) << 6;
		des[76+j] = (src[72+j] & 2147483647) >> 26;
	}
	for (int j=0; j<4; ++j) {
		des[76+j] |= (src[76+j] & 2147483647) << 5;
		des[80+j] = (src[76+j] & 2147483647) >> 27;
	}
	for (int j=0; j<4; ++j) {
		des[80+j] |= (src[80+j] & 2147483647) << 4;
		des[84+j] = (src[80+j] & 2147483647) >> 28;
	}
	for (int j=0; j<4; ++j) {
		des[84+j] |= (src[84+j] & 2147483647) << 3;
		des[88+j] = (src[84+j] & 2147483647) >> 29;
	}
	for (int j=0; j<4; ++j) {
		des[88+j] |= (src[88+j] & 2147483647) << 2;
		des[92+j] = (src[88+j] & 2147483647) >> 30;
	}
	for (int j=0; j<4; ++j) {
		des[92+j] |= (src[92+j] & 2147483647) << 1;
	}
	for (int j=0; j<4; ++j) {
		des[96+j] = (src[96+j] & 2147483647);
	}
	for (int j=0; j<4; ++j) {
		des[96+j] |= (src[100+j] & 2147483647) << 31;
		des[100+j] = (src[100+j] & 2147483647) >> 1;
	}
	for (int j=0; j<4; ++j) {
		des[100+j] |= (src[104+j] & 2147483647) << 30;
		des[104+j] = (src[104+j] & 2147483647) >> 2;
	}
	for (int j=0; j<4; ++j) {
		des[104+j] |= (src[108+j] & 2147483647) << 29;
		des[108+j] = (src[108+j] & 2147483647) >> 3;
	}
	for (int j=0; j<4; ++j) {
		des[108+j] |= (src[112+j] & 2147483647) << 28;
		des[112+j] = (src[112+j] & 2147483647) >> 4;
	}
	for (int j=0; j<4; ++j) {
		des[112+j] |= (src[116+j] & 2147483647) << 27;
		des[116+j] = (src[116+j] & 2147483647) >> 5;
	}
	for (int j=0; j<4; ++j) {
		des[116+j] |= (src[120+j] & 2147483647) << 26;
		des[120+j] = (src[120+j] & 2147483647) >> 6;
	}
	for (int j=0; j<4; ++j) {
		des[120+j] |= (src[124+j] & 2147483647) << 25;
		des[124+j] = (src[124+j] & 2147483647) >> 7;
	}
}

template<typename T>
void KAFOR_pack_32len_32bw_0offset(T * des, const uint32_t *src) {
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
void KAFOR_pack_32len_32bw_8offset(T * des, const uint32_t *src) {
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
void KAFOR_pack_32len_32bw_16offset(T * des, const uint32_t *src) {
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
void KAFOR_pack_32len_32bw_24offset(T * des, const uint32_t *src) {
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


static KAFORPackInfo KAFORPackInfo_0 = { KAFOR_pack_8len_1bw_0offset<uint32_t>, 0, 8, 0, 32, };
static KAFORPackInfo KAFORPackInfo_1 = { KAFOR_pack_8len_1bw_8offset<uint32_t>, 8, 16, 0, 32, };
static KAFORPackInfo KAFORPackInfo_2 = { KAFOR_pack_8len_1bw_16offset<uint32_t>, 16, 24, 0, 32, };
static KAFORPackInfo KAFORPackInfo_3 = { KAFOR_pack_8len_1bw_24offset<uint32_t>, 24, 0, 4, 32, };
static KAFORPackInfo KAFORPackInfo_4 = { KAFOR_pack_8len_2bw_0offset<uint32_t>, 0, 16, 0, 32, };
static KAFORPackInfo KAFORPackInfo_5 = { KAFOR_pack_8len_2bw_8offset<uint32_t>, 8, 24, 0, 32, };
static KAFORPackInfo KAFORPackInfo_6 = { KAFOR_pack_8len_2bw_16offset<uint32_t>, 16, 0, 4, 32, };
static KAFORPackInfo KAFORPackInfo_7 = { KAFOR_pack_8len_2bw_24offset<uint32_t>, 24, 8, 4, 32, };
static KAFORPackInfo KAFORPackInfo_8 = { KAFOR_pack_8len_3bw_0offset<uint32_t>, 0, 24, 0, 32, };
static KAFORPackInfo KAFORPackInfo_9 = { KAFOR_pack_8len_3bw_8offset<uint32_t>, 8, 0, 4, 32, };
static KAFORPackInfo KAFORPackInfo_10 = { KAFOR_pack_8len_3bw_16offset<uint32_t>, 16, 8, 4, 32, };
static KAFORPackInfo KAFORPackInfo_11 = { KAFOR_pack_8len_3bw_24offset<uint32_t>, 24, 16, 4, 32, };
static KAFORPackInfo KAFORPackInfo_12 = { KAFOR_pack_8len_4bw_0offset<uint32_t>, 0, 0, 4, 32, };
static KAFORPackInfo KAFORPackInfo_13 = { KAFOR_pack_8len_4bw_8offset<uint32_t>, 8, 8, 4, 32, };
static KAFORPackInfo KAFORPackInfo_14 = { KAFOR_pack_8len_4bw_16offset<uint32_t>, 16, 16, 4, 32, };
static KAFORPackInfo KAFORPackInfo_15 = { KAFOR_pack_8len_4bw_24offset<uint32_t>, 24, 24, 4, 32, };
static KAFORPackInfo KAFORPackInfo_16 = { KAFOR_pack_8len_5bw_0offset<uint32_t>, 0, 8, 4, 32, };
static KAFORPackInfo KAFORPackInfo_17 = { KAFOR_pack_8len_5bw_8offset<uint32_t>, 8, 16, 4, 32, };
static KAFORPackInfo KAFORPackInfo_18 = { KAFOR_pack_8len_5bw_16offset<uint32_t>, 16, 24, 4, 32, };
static KAFORPackInfo KAFORPackInfo_19 = { KAFOR_pack_8len_5bw_24offset<uint32_t>, 24, 0, 8, 32, };
static KAFORPackInfo KAFORPackInfo_20 = { KAFOR_pack_8len_6bw_0offset<uint32_t>, 0, 16, 4, 32, };
static KAFORPackInfo KAFORPackInfo_21 = { KAFOR_pack_8len_6bw_8offset<uint32_t>, 8, 24, 4, 32, };
static KAFORPackInfo KAFORPackInfo_22 = { KAFOR_pack_8len_6bw_16offset<uint32_t>, 16, 0, 8, 32, };
static KAFORPackInfo KAFORPackInfo_23 = { KAFOR_pack_8len_6bw_24offset<uint32_t>, 24, 8, 8, 32, };
static KAFORPackInfo KAFORPackInfo_24 = { KAFOR_pack_8len_7bw_0offset<uint32_t>, 0, 24, 4, 32, };
static KAFORPackInfo KAFORPackInfo_25 = { KAFOR_pack_8len_7bw_8offset<uint32_t>, 8, 0, 8, 32, };
static KAFORPackInfo KAFORPackInfo_26 = { KAFOR_pack_8len_7bw_16offset<uint32_t>, 16, 8, 8, 32, };
static KAFORPackInfo KAFORPackInfo_27 = { KAFOR_pack_8len_7bw_24offset<uint32_t>, 24, 16, 8, 32, };
static KAFORPackInfo KAFORPackInfo_28 = { KAFOR_pack_8len_8bw_0offset<uint32_t>, 0, 0, 8, 32, };
static KAFORPackInfo KAFORPackInfo_29 = { KAFOR_pack_8len_8bw_8offset<uint32_t>, 8, 8, 8, 32, };
static KAFORPackInfo KAFORPackInfo_30 = { KAFOR_pack_8len_8bw_16offset<uint32_t>, 16, 16, 8, 32, };
static KAFORPackInfo KAFORPackInfo_31 = { KAFOR_pack_8len_8bw_24offset<uint32_t>, 24, 24, 8, 32, };
static KAFORPackInfo KAFORPackInfo_32 = { KAFOR_pack_8len_9bw_0offset<uint32_t>, 0, 8, 8, 32, };
static KAFORPackInfo KAFORPackInfo_33 = { KAFOR_pack_8len_9bw_8offset<uint32_t>, 8, 16, 8, 32, };
static KAFORPackInfo KAFORPackInfo_34 = { KAFOR_pack_8len_9bw_16offset<uint32_t>, 16, 24, 8, 32, };
static KAFORPackInfo KAFORPackInfo_35 = { KAFOR_pack_8len_9bw_24offset<uint32_t>, 24, 0, 12, 32, };
static KAFORPackInfo KAFORPackInfo_36 = { KAFOR_pack_8len_10bw_0offset<uint32_t>, 0, 16, 8, 32, };
static KAFORPackInfo KAFORPackInfo_37 = { KAFOR_pack_8len_10bw_8offset<uint32_t>, 8, 24, 8, 32, };
static KAFORPackInfo KAFORPackInfo_38 = { KAFOR_pack_8len_10bw_16offset<uint32_t>, 16, 0, 12, 32, };
static KAFORPackInfo KAFORPackInfo_39 = { KAFOR_pack_8len_10bw_24offset<uint32_t>, 24, 8, 12, 32, };
static KAFORPackInfo KAFORPackInfo_40 = { KAFOR_pack_8len_11bw_0offset<uint32_t>, 0, 24, 8, 32, };
static KAFORPackInfo KAFORPackInfo_41 = { KAFOR_pack_8len_11bw_8offset<uint32_t>, 8, 0, 12, 32, };
static KAFORPackInfo KAFORPackInfo_42 = { KAFOR_pack_8len_11bw_16offset<uint32_t>, 16, 8, 12, 32, };
static KAFORPackInfo KAFORPackInfo_43 = { KAFOR_pack_8len_11bw_24offset<uint32_t>, 24, 16, 12, 32, };
static KAFORPackInfo KAFORPackInfo_44 = { KAFOR_pack_8len_12bw_0offset<uint32_t>, 0, 0, 12, 32, };
static KAFORPackInfo KAFORPackInfo_45 = { KAFOR_pack_8len_12bw_8offset<uint32_t>, 8, 8, 12, 32, };
static KAFORPackInfo KAFORPackInfo_46 = { KAFOR_pack_8len_12bw_16offset<uint32_t>, 16, 16, 12, 32, };
static KAFORPackInfo KAFORPackInfo_47 = { KAFOR_pack_8len_12bw_24offset<uint32_t>, 24, 24, 12, 32, };
static KAFORPackInfo KAFORPackInfo_48 = { KAFOR_pack_8len_13bw_0offset<uint32_t>, 0, 8, 12, 32, };
static KAFORPackInfo KAFORPackInfo_49 = { KAFOR_pack_8len_13bw_8offset<uint32_t>, 8, 16, 12, 32, };
static KAFORPackInfo KAFORPackInfo_50 = { KAFOR_pack_8len_13bw_16offset<uint32_t>, 16, 24, 12, 32, };
static KAFORPackInfo KAFORPackInfo_51 = { KAFOR_pack_8len_13bw_24offset<uint32_t>, 24, 0, 16, 32, };
static KAFORPackInfo KAFORPackInfo_52 = { KAFOR_pack_8len_14bw_0offset<uint32_t>, 0, 16, 12, 32, };
static KAFORPackInfo KAFORPackInfo_53 = { KAFOR_pack_8len_14bw_8offset<uint32_t>, 8, 24, 12, 32, };
static KAFORPackInfo KAFORPackInfo_54 = { KAFOR_pack_8len_14bw_16offset<uint32_t>, 16, 0, 16, 32, };
static KAFORPackInfo KAFORPackInfo_55 = { KAFOR_pack_8len_14bw_24offset<uint32_t>, 24, 8, 16, 32, };
static KAFORPackInfo KAFORPackInfo_56 = { KAFOR_pack_8len_15bw_0offset<uint32_t>, 0, 24, 12, 32, };
static KAFORPackInfo KAFORPackInfo_57 = { KAFOR_pack_8len_15bw_8offset<uint32_t>, 8, 0, 16, 32, };
static KAFORPackInfo KAFORPackInfo_58 = { KAFOR_pack_8len_15bw_16offset<uint32_t>, 16, 8, 16, 32, };
static KAFORPackInfo KAFORPackInfo_59 = { KAFOR_pack_8len_15bw_24offset<uint32_t>, 24, 16, 16, 32, };
static KAFORPackInfo KAFORPackInfo_60 = { KAFOR_pack_8len_16bw_0offset<uint32_t>, 0, 0, 16, 32, };
static KAFORPackInfo KAFORPackInfo_61 = { KAFOR_pack_8len_16bw_8offset<uint32_t>, 8, 8, 16, 32, };
static KAFORPackInfo KAFORPackInfo_62 = { KAFOR_pack_8len_16bw_16offset<uint32_t>, 16, 16, 16, 32, };
static KAFORPackInfo KAFORPackInfo_63 = { KAFOR_pack_8len_16bw_24offset<uint32_t>, 24, 24, 16, 32, };
static KAFORPackInfo KAFORPackInfo_64 = { KAFOR_pack_8len_17bw_0offset<uint32_t>, 0, 8, 16, 32, };
static KAFORPackInfo KAFORPackInfo_65 = { KAFOR_pack_8len_17bw_8offset<uint32_t>, 8, 16, 16, 32, };
static KAFORPackInfo KAFORPackInfo_66 = { KAFOR_pack_8len_17bw_16offset<uint32_t>, 16, 24, 16, 32, };
static KAFORPackInfo KAFORPackInfo_67 = { KAFOR_pack_8len_17bw_24offset<uint32_t>, 24, 0, 20, 32, };
static KAFORPackInfo KAFORPackInfo_68 = { KAFOR_pack_8len_18bw_0offset<uint32_t>, 0, 16, 16, 32, };
static KAFORPackInfo KAFORPackInfo_69 = { KAFOR_pack_8len_18bw_8offset<uint32_t>, 8, 24, 16, 32, };
static KAFORPackInfo KAFORPackInfo_70 = { KAFOR_pack_8len_18bw_16offset<uint32_t>, 16, 0, 20, 32, };
static KAFORPackInfo KAFORPackInfo_71 = { KAFOR_pack_8len_18bw_24offset<uint32_t>, 24, 8, 20, 32, };
static KAFORPackInfo KAFORPackInfo_72 = { KAFOR_pack_8len_19bw_0offset<uint32_t>, 0, 24, 16, 32, };
static KAFORPackInfo KAFORPackInfo_73 = { KAFOR_pack_8len_19bw_8offset<uint32_t>, 8, 0, 20, 32, };
static KAFORPackInfo KAFORPackInfo_74 = { KAFOR_pack_8len_19bw_16offset<uint32_t>, 16, 8, 20, 32, };
static KAFORPackInfo KAFORPackInfo_75 = { KAFOR_pack_8len_19bw_24offset<uint32_t>, 24, 16, 20, 32, };
static KAFORPackInfo KAFORPackInfo_76 = { KAFOR_pack_8len_20bw_0offset<uint32_t>, 0, 0, 20, 32, };
static KAFORPackInfo KAFORPackInfo_77 = { KAFOR_pack_8len_20bw_8offset<uint32_t>, 8, 8, 20, 32, };
static KAFORPackInfo KAFORPackInfo_78 = { KAFOR_pack_8len_20bw_16offset<uint32_t>, 16, 16, 20, 32, };
static KAFORPackInfo KAFORPackInfo_79 = { KAFOR_pack_8len_20bw_24offset<uint32_t>, 24, 24, 20, 32, };
static KAFORPackInfo KAFORPackInfo_80 = { KAFOR_pack_8len_21bw_0offset<uint32_t>, 0, 8, 20, 32, };
static KAFORPackInfo KAFORPackInfo_81 = { KAFOR_pack_8len_21bw_8offset<uint32_t>, 8, 16, 20, 32, };
static KAFORPackInfo KAFORPackInfo_82 = { KAFOR_pack_8len_21bw_16offset<uint32_t>, 16, 24, 20, 32, };
static KAFORPackInfo KAFORPackInfo_83 = { KAFOR_pack_8len_21bw_24offset<uint32_t>, 24, 0, 24, 32, };
static KAFORPackInfo KAFORPackInfo_84 = { KAFOR_pack_8len_22bw_0offset<uint32_t>, 0, 16, 20, 32, };
static KAFORPackInfo KAFORPackInfo_85 = { KAFOR_pack_8len_22bw_8offset<uint32_t>, 8, 24, 20, 32, };
static KAFORPackInfo KAFORPackInfo_86 = { KAFOR_pack_8len_22bw_16offset<uint32_t>, 16, 0, 24, 32, };
static KAFORPackInfo KAFORPackInfo_87 = { KAFOR_pack_8len_22bw_24offset<uint32_t>, 24, 8, 24, 32, };
static KAFORPackInfo KAFORPackInfo_88 = { KAFOR_pack_8len_23bw_0offset<uint32_t>, 0, 24, 20, 32, };
static KAFORPackInfo KAFORPackInfo_89 = { KAFOR_pack_8len_23bw_8offset<uint32_t>, 8, 0, 24, 32, };
static KAFORPackInfo KAFORPackInfo_90 = { KAFOR_pack_8len_23bw_16offset<uint32_t>, 16, 8, 24, 32, };
static KAFORPackInfo KAFORPackInfo_91 = { KAFOR_pack_8len_23bw_24offset<uint32_t>, 24, 16, 24, 32, };
static KAFORPackInfo KAFORPackInfo_92 = { KAFOR_pack_8len_24bw_0offset<uint32_t>, 0, 0, 24, 32, };
static KAFORPackInfo KAFORPackInfo_93 = { KAFOR_pack_8len_24bw_8offset<uint32_t>, 8, 8, 24, 32, };
static KAFORPackInfo KAFORPackInfo_94 = { KAFOR_pack_8len_24bw_16offset<uint32_t>, 16, 16, 24, 32, };
static KAFORPackInfo KAFORPackInfo_95 = { KAFOR_pack_8len_24bw_24offset<uint32_t>, 24, 24, 24, 32, };
static KAFORPackInfo KAFORPackInfo_96 = { KAFOR_pack_8len_25bw_0offset<uint32_t>, 0, 8, 24, 32, };
static KAFORPackInfo KAFORPackInfo_97 = { KAFOR_pack_8len_25bw_8offset<uint32_t>, 8, 16, 24, 32, };
static KAFORPackInfo KAFORPackInfo_98 = { KAFOR_pack_8len_25bw_16offset<uint32_t>, 16, 24, 24, 32, };
static KAFORPackInfo KAFORPackInfo_99 = { KAFOR_pack_8len_25bw_24offset<uint32_t>, 24, 0, 28, 32, };
static KAFORPackInfo KAFORPackInfo_100 = { KAFOR_pack_8len_26bw_0offset<uint32_t>, 0, 16, 24, 32, };
static KAFORPackInfo KAFORPackInfo_101 = { KAFOR_pack_8len_26bw_8offset<uint32_t>, 8, 24, 24, 32, };
static KAFORPackInfo KAFORPackInfo_102 = { KAFOR_pack_8len_26bw_16offset<uint32_t>, 16, 0, 28, 32, };
static KAFORPackInfo KAFORPackInfo_103 = { KAFOR_pack_8len_26bw_24offset<uint32_t>, 24, 8, 28, 32, };
static KAFORPackInfo KAFORPackInfo_104 = { KAFOR_pack_8len_27bw_0offset<uint32_t>, 0, 24, 24, 32, };
static KAFORPackInfo KAFORPackInfo_105 = { KAFOR_pack_8len_27bw_8offset<uint32_t>, 8, 0, 28, 32, };
static KAFORPackInfo KAFORPackInfo_106 = { KAFOR_pack_8len_27bw_16offset<uint32_t>, 16, 8, 28, 32, };
static KAFORPackInfo KAFORPackInfo_107 = { KAFOR_pack_8len_27bw_24offset<uint32_t>, 24, 16, 28, 32, };
static KAFORPackInfo KAFORPackInfo_108 = { KAFOR_pack_8len_28bw_0offset<uint32_t>, 0, 0, 28, 32, };
static KAFORPackInfo KAFORPackInfo_109 = { KAFOR_pack_8len_28bw_8offset<uint32_t>, 8, 8, 28, 32, };
static KAFORPackInfo KAFORPackInfo_110 = { KAFOR_pack_8len_28bw_16offset<uint32_t>, 16, 16, 28, 32, };
static KAFORPackInfo KAFORPackInfo_111 = { KAFOR_pack_8len_28bw_24offset<uint32_t>, 24, 24, 28, 32, };
static KAFORPackInfo KAFORPackInfo_112 = { KAFOR_pack_8len_29bw_0offset<uint32_t>, 0, 8, 28, 32, };
static KAFORPackInfo KAFORPackInfo_113 = { KAFOR_pack_8len_29bw_8offset<uint32_t>, 8, 16, 28, 32, };
static KAFORPackInfo KAFORPackInfo_114 = { KAFOR_pack_8len_29bw_16offset<uint32_t>, 16, 24, 28, 32, };
static KAFORPackInfo KAFORPackInfo_115 = { KAFOR_pack_8len_29bw_24offset<uint32_t>, 24, 0, 32, 32, };
static KAFORPackInfo KAFORPackInfo_116 = { KAFOR_pack_8len_30bw_0offset<uint32_t>, 0, 16, 28, 32, };
static KAFORPackInfo KAFORPackInfo_117 = { KAFOR_pack_8len_30bw_8offset<uint32_t>, 8, 24, 28, 32, };
static KAFORPackInfo KAFORPackInfo_118 = { KAFOR_pack_8len_30bw_16offset<uint32_t>, 16, 0, 32, 32, };
static KAFORPackInfo KAFORPackInfo_119 = { KAFOR_pack_8len_30bw_24offset<uint32_t>, 24, 8, 32, 32, };
static KAFORPackInfo KAFORPackInfo_120 = { KAFOR_pack_8len_31bw_0offset<uint32_t>, 0, 24, 28, 32, };
static KAFORPackInfo KAFORPackInfo_121 = { KAFOR_pack_8len_31bw_8offset<uint32_t>, 8, 0, 32, 32, };
static KAFORPackInfo KAFORPackInfo_122 = { KAFOR_pack_8len_31bw_16offset<uint32_t>, 16, 8, 32, 32, };
static KAFORPackInfo KAFORPackInfo_123 = { KAFOR_pack_8len_31bw_24offset<uint32_t>, 24, 16, 32, 32, };
static KAFORPackInfo KAFORPackInfo_124 = { KAFOR_pack_8len_32bw_0offset<uint32_t>, 0, 0, 32, 32, };
static KAFORPackInfo KAFORPackInfo_125 = { KAFOR_pack_8len_32bw_8offset<uint32_t>, 8, 8, 32, 32, };
static KAFORPackInfo KAFORPackInfo_126 = { KAFOR_pack_8len_32bw_16offset<uint32_t>, 16, 16, 32, 32, };
static KAFORPackInfo KAFORPackInfo_127 = { KAFOR_pack_8len_32bw_24offset<uint32_t>, 24, 24, 32, 32, };
static KAFORPackInfo KAFORPackInfo_128 = { KAFOR_pack_16len_1bw_0offset<uint32_t>, 0, 16, 0, 64, };
static KAFORPackInfo KAFORPackInfo_129 = { KAFOR_pack_16len_1bw_8offset<uint32_t>, 8, 24, 0, 64, };
static KAFORPackInfo KAFORPackInfo_130 = { KAFOR_pack_16len_1bw_16offset<uint32_t>, 16, 0, 4, 64, };
static KAFORPackInfo KAFORPackInfo_131 = { KAFOR_pack_16len_1bw_24offset<uint32_t>, 24, 8, 4, 64, };
static KAFORPackInfo KAFORPackInfo_132 = { KAFOR_pack_16len_2bw_0offset<uint32_t>, 0, 0, 4, 64, };
static KAFORPackInfo KAFORPackInfo_133 = { KAFOR_pack_16len_2bw_8offset<uint32_t>, 8, 8, 4, 64, };
static KAFORPackInfo KAFORPackInfo_134 = { KAFOR_pack_16len_2bw_16offset<uint32_t>, 16, 16, 4, 64, };
static KAFORPackInfo KAFORPackInfo_135 = { KAFOR_pack_16len_2bw_24offset<uint32_t>, 24, 24, 4, 64, };
static KAFORPackInfo KAFORPackInfo_136 = { KAFOR_pack_16len_3bw_0offset<uint32_t>, 0, 16, 4, 64, };
static KAFORPackInfo KAFORPackInfo_137 = { KAFOR_pack_16len_3bw_8offset<uint32_t>, 8, 24, 4, 64, };
static KAFORPackInfo KAFORPackInfo_138 = { KAFOR_pack_16len_3bw_16offset<uint32_t>, 16, 0, 8, 64, };
static KAFORPackInfo KAFORPackInfo_139 = { KAFOR_pack_16len_3bw_24offset<uint32_t>, 24, 8, 8, 64, };
static KAFORPackInfo KAFORPackInfo_140 = { KAFOR_pack_16len_4bw_0offset<uint32_t>, 0, 0, 8, 64, };
static KAFORPackInfo KAFORPackInfo_141 = { KAFOR_pack_16len_4bw_8offset<uint32_t>, 8, 8, 8, 64, };
static KAFORPackInfo KAFORPackInfo_142 = { KAFOR_pack_16len_4bw_16offset<uint32_t>, 16, 16, 8, 64, };
static KAFORPackInfo KAFORPackInfo_143 = { KAFOR_pack_16len_4bw_24offset<uint32_t>, 24, 24, 8, 64, };
static KAFORPackInfo KAFORPackInfo_144 = { KAFOR_pack_16len_5bw_0offset<uint32_t>, 0, 16, 8, 64, };
static KAFORPackInfo KAFORPackInfo_145 = { KAFOR_pack_16len_5bw_8offset<uint32_t>, 8, 24, 8, 64, };
static KAFORPackInfo KAFORPackInfo_146 = { KAFOR_pack_16len_5bw_16offset<uint32_t>, 16, 0, 12, 64, };
static KAFORPackInfo KAFORPackInfo_147 = { KAFOR_pack_16len_5bw_24offset<uint32_t>, 24, 8, 12, 64, };
static KAFORPackInfo KAFORPackInfo_148 = { KAFOR_pack_16len_6bw_0offset<uint32_t>, 0, 0, 12, 64, };
static KAFORPackInfo KAFORPackInfo_149 = { KAFOR_pack_16len_6bw_8offset<uint32_t>, 8, 8, 12, 64, };
static KAFORPackInfo KAFORPackInfo_150 = { KAFOR_pack_16len_6bw_16offset<uint32_t>, 16, 16, 12, 64, };
static KAFORPackInfo KAFORPackInfo_151 = { KAFOR_pack_16len_6bw_24offset<uint32_t>, 24, 24, 12, 64, };
static KAFORPackInfo KAFORPackInfo_152 = { KAFOR_pack_16len_7bw_0offset<uint32_t>, 0, 16, 12, 64, };
static KAFORPackInfo KAFORPackInfo_153 = { KAFOR_pack_16len_7bw_8offset<uint32_t>, 8, 24, 12, 64, };
static KAFORPackInfo KAFORPackInfo_154 = { KAFOR_pack_16len_7bw_16offset<uint32_t>, 16, 0, 16, 64, };
static KAFORPackInfo KAFORPackInfo_155 = { KAFOR_pack_16len_7bw_24offset<uint32_t>, 24, 8, 16, 64, };
static KAFORPackInfo KAFORPackInfo_156 = { KAFOR_pack_16len_8bw_0offset<uint32_t>, 0, 0, 16, 64, };
static KAFORPackInfo KAFORPackInfo_157 = { KAFOR_pack_16len_8bw_8offset<uint32_t>, 8, 8, 16, 64, };
static KAFORPackInfo KAFORPackInfo_158 = { KAFOR_pack_16len_8bw_16offset<uint32_t>, 16, 16, 16, 64, };
static KAFORPackInfo KAFORPackInfo_159 = { KAFOR_pack_16len_8bw_24offset<uint32_t>, 24, 24, 16, 64, };
static KAFORPackInfo KAFORPackInfo_160 = { KAFOR_pack_16len_9bw_0offset<uint32_t>, 0, 16, 16, 64, };
static KAFORPackInfo KAFORPackInfo_161 = { KAFOR_pack_16len_9bw_8offset<uint32_t>, 8, 24, 16, 64, };
static KAFORPackInfo KAFORPackInfo_162 = { KAFOR_pack_16len_9bw_16offset<uint32_t>, 16, 0, 20, 64, };
static KAFORPackInfo KAFORPackInfo_163 = { KAFOR_pack_16len_9bw_24offset<uint32_t>, 24, 8, 20, 64, };
static KAFORPackInfo KAFORPackInfo_164 = { KAFOR_pack_16len_10bw_0offset<uint32_t>, 0, 0, 20, 64, };
static KAFORPackInfo KAFORPackInfo_165 = { KAFOR_pack_16len_10bw_8offset<uint32_t>, 8, 8, 20, 64, };
static KAFORPackInfo KAFORPackInfo_166 = { KAFOR_pack_16len_10bw_16offset<uint32_t>, 16, 16, 20, 64, };
static KAFORPackInfo KAFORPackInfo_167 = { KAFOR_pack_16len_10bw_24offset<uint32_t>, 24, 24, 20, 64, };
static KAFORPackInfo KAFORPackInfo_168 = { KAFOR_pack_16len_11bw_0offset<uint32_t>, 0, 16, 20, 64, };
static KAFORPackInfo KAFORPackInfo_169 = { KAFOR_pack_16len_11bw_8offset<uint32_t>, 8, 24, 20, 64, };
static KAFORPackInfo KAFORPackInfo_170 = { KAFOR_pack_16len_11bw_16offset<uint32_t>, 16, 0, 24, 64, };
static KAFORPackInfo KAFORPackInfo_171 = { KAFOR_pack_16len_11bw_24offset<uint32_t>, 24, 8, 24, 64, };
static KAFORPackInfo KAFORPackInfo_172 = { KAFOR_pack_16len_12bw_0offset<uint32_t>, 0, 0, 24, 64, };
static KAFORPackInfo KAFORPackInfo_173 = { KAFOR_pack_16len_12bw_8offset<uint32_t>, 8, 8, 24, 64, };
static KAFORPackInfo KAFORPackInfo_174 = { KAFOR_pack_16len_12bw_16offset<uint32_t>, 16, 16, 24, 64, };
static KAFORPackInfo KAFORPackInfo_175 = { KAFOR_pack_16len_12bw_24offset<uint32_t>, 24, 24, 24, 64, };
static KAFORPackInfo KAFORPackInfo_176 = { KAFOR_pack_16len_13bw_0offset<uint32_t>, 0, 16, 24, 64, };
static KAFORPackInfo KAFORPackInfo_177 = { KAFOR_pack_16len_13bw_8offset<uint32_t>, 8, 24, 24, 64, };
static KAFORPackInfo KAFORPackInfo_178 = { KAFOR_pack_16len_13bw_16offset<uint32_t>, 16, 0, 28, 64, };
static KAFORPackInfo KAFORPackInfo_179 = { KAFOR_pack_16len_13bw_24offset<uint32_t>, 24, 8, 28, 64, };
static KAFORPackInfo KAFORPackInfo_180 = { KAFOR_pack_16len_14bw_0offset<uint32_t>, 0, 0, 28, 64, };
static KAFORPackInfo KAFORPackInfo_181 = { KAFOR_pack_16len_14bw_8offset<uint32_t>, 8, 8, 28, 64, };
static KAFORPackInfo KAFORPackInfo_182 = { KAFOR_pack_16len_14bw_16offset<uint32_t>, 16, 16, 28, 64, };
static KAFORPackInfo KAFORPackInfo_183 = { KAFOR_pack_16len_14bw_24offset<uint32_t>, 24, 24, 28, 64, };
static KAFORPackInfo KAFORPackInfo_184 = { KAFOR_pack_16len_15bw_0offset<uint32_t>, 0, 16, 28, 64, };
static KAFORPackInfo KAFORPackInfo_185 = { KAFOR_pack_16len_15bw_8offset<uint32_t>, 8, 24, 28, 64, };
static KAFORPackInfo KAFORPackInfo_186 = { KAFOR_pack_16len_15bw_16offset<uint32_t>, 16, 0, 32, 64, };
static KAFORPackInfo KAFORPackInfo_187 = { KAFOR_pack_16len_15bw_24offset<uint32_t>, 24, 8, 32, 64, };
static KAFORPackInfo KAFORPackInfo_188 = { KAFOR_pack_16len_16bw_0offset<uint32_t>, 0, 0, 32, 64, };
static KAFORPackInfo KAFORPackInfo_189 = { KAFOR_pack_16len_16bw_8offset<uint32_t>, 8, 8, 32, 64, };
static KAFORPackInfo KAFORPackInfo_190 = { KAFOR_pack_16len_16bw_16offset<uint32_t>, 16, 16, 32, 64, };
static KAFORPackInfo KAFORPackInfo_191 = { KAFOR_pack_16len_16bw_24offset<uint32_t>, 24, 24, 32, 64, };
static KAFORPackInfo KAFORPackInfo_192 = { KAFOR_pack_16len_17bw_0offset<uint32_t>, 0, 16, 32, 64, };
static KAFORPackInfo KAFORPackInfo_193 = { KAFOR_pack_16len_17bw_8offset<uint32_t>, 8, 24, 32, 64, };
static KAFORPackInfo KAFORPackInfo_194 = { KAFOR_pack_16len_17bw_16offset<uint32_t>, 16, 0, 36, 64, };
static KAFORPackInfo KAFORPackInfo_195 = { KAFOR_pack_16len_17bw_24offset<uint32_t>, 24, 8, 36, 64, };
static KAFORPackInfo KAFORPackInfo_196 = { KAFOR_pack_16len_18bw_0offset<uint32_t>, 0, 0, 36, 64, };
static KAFORPackInfo KAFORPackInfo_197 = { KAFOR_pack_16len_18bw_8offset<uint32_t>, 8, 8, 36, 64, };
static KAFORPackInfo KAFORPackInfo_198 = { KAFOR_pack_16len_18bw_16offset<uint32_t>, 16, 16, 36, 64, };
static KAFORPackInfo KAFORPackInfo_199 = { KAFOR_pack_16len_18bw_24offset<uint32_t>, 24, 24, 36, 64, };
static KAFORPackInfo KAFORPackInfo_200 = { KAFOR_pack_16len_19bw_0offset<uint32_t>, 0, 16, 36, 64, };
static KAFORPackInfo KAFORPackInfo_201 = { KAFOR_pack_16len_19bw_8offset<uint32_t>, 8, 24, 36, 64, };
static KAFORPackInfo KAFORPackInfo_202 = { KAFOR_pack_16len_19bw_16offset<uint32_t>, 16, 0, 40, 64, };
static KAFORPackInfo KAFORPackInfo_203 = { KAFOR_pack_16len_19bw_24offset<uint32_t>, 24, 8, 40, 64, };
static KAFORPackInfo KAFORPackInfo_204 = { KAFOR_pack_16len_20bw_0offset<uint32_t>, 0, 0, 40, 64, };
static KAFORPackInfo KAFORPackInfo_205 = { KAFOR_pack_16len_20bw_8offset<uint32_t>, 8, 8, 40, 64, };
static KAFORPackInfo KAFORPackInfo_206 = { KAFOR_pack_16len_20bw_16offset<uint32_t>, 16, 16, 40, 64, };
static KAFORPackInfo KAFORPackInfo_207 = { KAFOR_pack_16len_20bw_24offset<uint32_t>, 24, 24, 40, 64, };
static KAFORPackInfo KAFORPackInfo_208 = { KAFOR_pack_16len_21bw_0offset<uint32_t>, 0, 16, 40, 64, };
static KAFORPackInfo KAFORPackInfo_209 = { KAFOR_pack_16len_21bw_8offset<uint32_t>, 8, 24, 40, 64, };
static KAFORPackInfo KAFORPackInfo_210 = { KAFOR_pack_16len_21bw_16offset<uint32_t>, 16, 0, 44, 64, };
static KAFORPackInfo KAFORPackInfo_211 = { KAFOR_pack_16len_21bw_24offset<uint32_t>, 24, 8, 44, 64, };
static KAFORPackInfo KAFORPackInfo_212 = { KAFOR_pack_16len_22bw_0offset<uint32_t>, 0, 0, 44, 64, };
static KAFORPackInfo KAFORPackInfo_213 = { KAFOR_pack_16len_22bw_8offset<uint32_t>, 8, 8, 44, 64, };
static KAFORPackInfo KAFORPackInfo_214 = { KAFOR_pack_16len_22bw_16offset<uint32_t>, 16, 16, 44, 64, };
static KAFORPackInfo KAFORPackInfo_215 = { KAFOR_pack_16len_22bw_24offset<uint32_t>, 24, 24, 44, 64, };
static KAFORPackInfo KAFORPackInfo_216 = { KAFOR_pack_16len_23bw_0offset<uint32_t>, 0, 16, 44, 64, };
static KAFORPackInfo KAFORPackInfo_217 = { KAFOR_pack_16len_23bw_8offset<uint32_t>, 8, 24, 44, 64, };
static KAFORPackInfo KAFORPackInfo_218 = { KAFOR_pack_16len_23bw_16offset<uint32_t>, 16, 0, 48, 64, };
static KAFORPackInfo KAFORPackInfo_219 = { KAFOR_pack_16len_23bw_24offset<uint32_t>, 24, 8, 48, 64, };
static KAFORPackInfo KAFORPackInfo_220 = { KAFOR_pack_16len_24bw_0offset<uint32_t>, 0, 0, 48, 64, };
static KAFORPackInfo KAFORPackInfo_221 = { KAFOR_pack_16len_24bw_8offset<uint32_t>, 8, 8, 48, 64, };
static KAFORPackInfo KAFORPackInfo_222 = { KAFOR_pack_16len_24bw_16offset<uint32_t>, 16, 16, 48, 64, };
static KAFORPackInfo KAFORPackInfo_223 = { KAFOR_pack_16len_24bw_24offset<uint32_t>, 24, 24, 48, 64, };
static KAFORPackInfo KAFORPackInfo_224 = { KAFOR_pack_16len_25bw_0offset<uint32_t>, 0, 16, 48, 64, };
static KAFORPackInfo KAFORPackInfo_225 = { KAFOR_pack_16len_25bw_8offset<uint32_t>, 8, 24, 48, 64, };
static KAFORPackInfo KAFORPackInfo_226 = { KAFOR_pack_16len_25bw_16offset<uint32_t>, 16, 0, 52, 64, };
static KAFORPackInfo KAFORPackInfo_227 = { KAFOR_pack_16len_25bw_24offset<uint32_t>, 24, 8, 52, 64, };
static KAFORPackInfo KAFORPackInfo_228 = { KAFOR_pack_16len_26bw_0offset<uint32_t>, 0, 0, 52, 64, };
static KAFORPackInfo KAFORPackInfo_229 = { KAFOR_pack_16len_26bw_8offset<uint32_t>, 8, 8, 52, 64, };
static KAFORPackInfo KAFORPackInfo_230 = { KAFOR_pack_16len_26bw_16offset<uint32_t>, 16, 16, 52, 64, };
static KAFORPackInfo KAFORPackInfo_231 = { KAFOR_pack_16len_26bw_24offset<uint32_t>, 24, 24, 52, 64, };
static KAFORPackInfo KAFORPackInfo_232 = { KAFOR_pack_16len_27bw_0offset<uint32_t>, 0, 16, 52, 64, };
static KAFORPackInfo KAFORPackInfo_233 = { KAFOR_pack_16len_27bw_8offset<uint32_t>, 8, 24, 52, 64, };
static KAFORPackInfo KAFORPackInfo_234 = { KAFOR_pack_16len_27bw_16offset<uint32_t>, 16, 0, 56, 64, };
static KAFORPackInfo KAFORPackInfo_235 = { KAFOR_pack_16len_27bw_24offset<uint32_t>, 24, 8, 56, 64, };
static KAFORPackInfo KAFORPackInfo_236 = { KAFOR_pack_16len_28bw_0offset<uint32_t>, 0, 0, 56, 64, };
static KAFORPackInfo KAFORPackInfo_237 = { KAFOR_pack_16len_28bw_8offset<uint32_t>, 8, 8, 56, 64, };
static KAFORPackInfo KAFORPackInfo_238 = { KAFOR_pack_16len_28bw_16offset<uint32_t>, 16, 16, 56, 64, };
static KAFORPackInfo KAFORPackInfo_239 = { KAFOR_pack_16len_28bw_24offset<uint32_t>, 24, 24, 56, 64, };
static KAFORPackInfo KAFORPackInfo_240 = { KAFOR_pack_16len_29bw_0offset<uint32_t>, 0, 16, 56, 64, };
static KAFORPackInfo KAFORPackInfo_241 = { KAFOR_pack_16len_29bw_8offset<uint32_t>, 8, 24, 56, 64, };
static KAFORPackInfo KAFORPackInfo_242 = { KAFOR_pack_16len_29bw_16offset<uint32_t>, 16, 0, 60, 64, };
static KAFORPackInfo KAFORPackInfo_243 = { KAFOR_pack_16len_29bw_24offset<uint32_t>, 24, 8, 60, 64, };
static KAFORPackInfo KAFORPackInfo_244 = { KAFOR_pack_16len_30bw_0offset<uint32_t>, 0, 0, 60, 64, };
static KAFORPackInfo KAFORPackInfo_245 = { KAFOR_pack_16len_30bw_8offset<uint32_t>, 8, 8, 60, 64, };
static KAFORPackInfo KAFORPackInfo_246 = { KAFOR_pack_16len_30bw_16offset<uint32_t>, 16, 16, 60, 64, };
static KAFORPackInfo KAFORPackInfo_247 = { KAFOR_pack_16len_30bw_24offset<uint32_t>, 24, 24, 60, 64, };
static KAFORPackInfo KAFORPackInfo_248 = { KAFOR_pack_16len_31bw_0offset<uint32_t>, 0, 16, 60, 64, };
static KAFORPackInfo KAFORPackInfo_249 = { KAFOR_pack_16len_31bw_8offset<uint32_t>, 8, 24, 60, 64, };
static KAFORPackInfo KAFORPackInfo_250 = { KAFOR_pack_16len_31bw_16offset<uint32_t>, 16, 0, 64, 64, };
static KAFORPackInfo KAFORPackInfo_251 = { KAFOR_pack_16len_31bw_24offset<uint32_t>, 24, 8, 64, 64, };
static KAFORPackInfo KAFORPackInfo_252 = { KAFOR_pack_16len_32bw_0offset<uint32_t>, 0, 0, 64, 64, };
static KAFORPackInfo KAFORPackInfo_253 = { KAFOR_pack_16len_32bw_8offset<uint32_t>, 8, 8, 64, 64, };
static KAFORPackInfo KAFORPackInfo_254 = { KAFOR_pack_16len_32bw_16offset<uint32_t>, 16, 16, 64, 64, };
static KAFORPackInfo KAFORPackInfo_255 = { KAFOR_pack_16len_32bw_24offset<uint32_t>, 24, 24, 64, 64, };
static KAFORPackInfo KAFORPackInfo_256 = { KAFOR_pack_32len_1bw_0offset<uint32_t>, 0, 0, 4, 128, };
static KAFORPackInfo KAFORPackInfo_257 = { KAFOR_pack_32len_1bw_8offset<uint32_t>, 8, 8, 4, 128, };
static KAFORPackInfo KAFORPackInfo_258 = { KAFOR_pack_32len_1bw_16offset<uint32_t>, 16, 16, 4, 128, };
static KAFORPackInfo KAFORPackInfo_259 = { KAFOR_pack_32len_1bw_24offset<uint32_t>, 24, 24, 4, 128, };
static KAFORPackInfo KAFORPackInfo_260 = { KAFOR_pack_32len_2bw_0offset<uint32_t>, 0, 0, 8, 128, };
static KAFORPackInfo KAFORPackInfo_261 = { KAFOR_pack_32len_2bw_8offset<uint32_t>, 8, 8, 8, 128, };
static KAFORPackInfo KAFORPackInfo_262 = { KAFOR_pack_32len_2bw_16offset<uint32_t>, 16, 16, 8, 128, };
static KAFORPackInfo KAFORPackInfo_263 = { KAFOR_pack_32len_2bw_24offset<uint32_t>, 24, 24, 8, 128, };
static KAFORPackInfo KAFORPackInfo_264 = { KAFOR_pack_32len_3bw_0offset<uint32_t>, 0, 0, 12, 128, };
static KAFORPackInfo KAFORPackInfo_265 = { KAFOR_pack_32len_3bw_8offset<uint32_t>, 8, 8, 12, 128, };
static KAFORPackInfo KAFORPackInfo_266 = { KAFOR_pack_32len_3bw_16offset<uint32_t>, 16, 16, 12, 128, };
static KAFORPackInfo KAFORPackInfo_267 = { KAFOR_pack_32len_3bw_24offset<uint32_t>, 24, 24, 12, 128, };
static KAFORPackInfo KAFORPackInfo_268 = { KAFOR_pack_32len_4bw_0offset<uint32_t>, 0, 0, 16, 128, };
static KAFORPackInfo KAFORPackInfo_269 = { KAFOR_pack_32len_4bw_8offset<uint32_t>, 8, 8, 16, 128, };
static KAFORPackInfo KAFORPackInfo_270 = { KAFOR_pack_32len_4bw_16offset<uint32_t>, 16, 16, 16, 128, };
static KAFORPackInfo KAFORPackInfo_271 = { KAFOR_pack_32len_4bw_24offset<uint32_t>, 24, 24, 16, 128, };
static KAFORPackInfo KAFORPackInfo_272 = { KAFOR_pack_32len_5bw_0offset<uint32_t>, 0, 0, 20, 128, };
static KAFORPackInfo KAFORPackInfo_273 = { KAFOR_pack_32len_5bw_8offset<uint32_t>, 8, 8, 20, 128, };
static KAFORPackInfo KAFORPackInfo_274 = { KAFOR_pack_32len_5bw_16offset<uint32_t>, 16, 16, 20, 128, };
static KAFORPackInfo KAFORPackInfo_275 = { KAFOR_pack_32len_5bw_24offset<uint32_t>, 24, 24, 20, 128, };
static KAFORPackInfo KAFORPackInfo_276 = { KAFOR_pack_32len_6bw_0offset<uint32_t>, 0, 0, 24, 128, };
static KAFORPackInfo KAFORPackInfo_277 = { KAFOR_pack_32len_6bw_8offset<uint32_t>, 8, 8, 24, 128, };
static KAFORPackInfo KAFORPackInfo_278 = { KAFOR_pack_32len_6bw_16offset<uint32_t>, 16, 16, 24, 128, };
static KAFORPackInfo KAFORPackInfo_279 = { KAFOR_pack_32len_6bw_24offset<uint32_t>, 24, 24, 24, 128, };
static KAFORPackInfo KAFORPackInfo_280 = { KAFOR_pack_32len_7bw_0offset<uint32_t>, 0, 0, 28, 128, };
static KAFORPackInfo KAFORPackInfo_281 = { KAFOR_pack_32len_7bw_8offset<uint32_t>, 8, 8, 28, 128, };
static KAFORPackInfo KAFORPackInfo_282 = { KAFOR_pack_32len_7bw_16offset<uint32_t>, 16, 16, 28, 128, };
static KAFORPackInfo KAFORPackInfo_283 = { KAFOR_pack_32len_7bw_24offset<uint32_t>, 24, 24, 28, 128, };
static KAFORPackInfo KAFORPackInfo_284 = { KAFOR_pack_32len_8bw_0offset<uint32_t>, 0, 0, 32, 128, };
static KAFORPackInfo KAFORPackInfo_285 = { KAFOR_pack_32len_8bw_8offset<uint32_t>, 8, 8, 32, 128, };
static KAFORPackInfo KAFORPackInfo_286 = { KAFOR_pack_32len_8bw_16offset<uint32_t>, 16, 16, 32, 128, };
static KAFORPackInfo KAFORPackInfo_287 = { KAFOR_pack_32len_8bw_24offset<uint32_t>, 24, 24, 32, 128, };
static KAFORPackInfo KAFORPackInfo_288 = { KAFOR_pack_32len_9bw_0offset<uint32_t>, 0, 0, 36, 128, };
static KAFORPackInfo KAFORPackInfo_289 = { KAFOR_pack_32len_9bw_8offset<uint32_t>, 8, 8, 36, 128, };
static KAFORPackInfo KAFORPackInfo_290 = { KAFOR_pack_32len_9bw_16offset<uint32_t>, 16, 16, 36, 128, };
static KAFORPackInfo KAFORPackInfo_291 = { KAFOR_pack_32len_9bw_24offset<uint32_t>, 24, 24, 36, 128, };
static KAFORPackInfo KAFORPackInfo_292 = { KAFOR_pack_32len_10bw_0offset<uint32_t>, 0, 0, 40, 128, };
static KAFORPackInfo KAFORPackInfo_293 = { KAFOR_pack_32len_10bw_8offset<uint32_t>, 8, 8, 40, 128, };
static KAFORPackInfo KAFORPackInfo_294 = { KAFOR_pack_32len_10bw_16offset<uint32_t>, 16, 16, 40, 128, };
static KAFORPackInfo KAFORPackInfo_295 = { KAFOR_pack_32len_10bw_24offset<uint32_t>, 24, 24, 40, 128, };
static KAFORPackInfo KAFORPackInfo_296 = { KAFOR_pack_32len_11bw_0offset<uint32_t>, 0, 0, 44, 128, };
static KAFORPackInfo KAFORPackInfo_297 = { KAFOR_pack_32len_11bw_8offset<uint32_t>, 8, 8, 44, 128, };
static KAFORPackInfo KAFORPackInfo_298 = { KAFOR_pack_32len_11bw_16offset<uint32_t>, 16, 16, 44, 128, };
static KAFORPackInfo KAFORPackInfo_299 = { KAFOR_pack_32len_11bw_24offset<uint32_t>, 24, 24, 44, 128, };
static KAFORPackInfo KAFORPackInfo_300 = { KAFOR_pack_32len_12bw_0offset<uint32_t>, 0, 0, 48, 128, };
static KAFORPackInfo KAFORPackInfo_301 = { KAFOR_pack_32len_12bw_8offset<uint32_t>, 8, 8, 48, 128, };
static KAFORPackInfo KAFORPackInfo_302 = { KAFOR_pack_32len_12bw_16offset<uint32_t>, 16, 16, 48, 128, };
static KAFORPackInfo KAFORPackInfo_303 = { KAFOR_pack_32len_12bw_24offset<uint32_t>, 24, 24, 48, 128, };
static KAFORPackInfo KAFORPackInfo_304 = { KAFOR_pack_32len_13bw_0offset<uint32_t>, 0, 0, 52, 128, };
static KAFORPackInfo KAFORPackInfo_305 = { KAFOR_pack_32len_13bw_8offset<uint32_t>, 8, 8, 52, 128, };
static KAFORPackInfo KAFORPackInfo_306 = { KAFOR_pack_32len_13bw_16offset<uint32_t>, 16, 16, 52, 128, };
static KAFORPackInfo KAFORPackInfo_307 = { KAFOR_pack_32len_13bw_24offset<uint32_t>, 24, 24, 52, 128, };
static KAFORPackInfo KAFORPackInfo_308 = { KAFOR_pack_32len_14bw_0offset<uint32_t>, 0, 0, 56, 128, };
static KAFORPackInfo KAFORPackInfo_309 = { KAFOR_pack_32len_14bw_8offset<uint32_t>, 8, 8, 56, 128, };
static KAFORPackInfo KAFORPackInfo_310 = { KAFOR_pack_32len_14bw_16offset<uint32_t>, 16, 16, 56, 128, };
static KAFORPackInfo KAFORPackInfo_311 = { KAFOR_pack_32len_14bw_24offset<uint32_t>, 24, 24, 56, 128, };
static KAFORPackInfo KAFORPackInfo_312 = { KAFOR_pack_32len_15bw_0offset<uint32_t>, 0, 0, 60, 128, };
static KAFORPackInfo KAFORPackInfo_313 = { KAFOR_pack_32len_15bw_8offset<uint32_t>, 8, 8, 60, 128, };
static KAFORPackInfo KAFORPackInfo_314 = { KAFOR_pack_32len_15bw_16offset<uint32_t>, 16, 16, 60, 128, };
static KAFORPackInfo KAFORPackInfo_315 = { KAFOR_pack_32len_15bw_24offset<uint32_t>, 24, 24, 60, 128, };
static KAFORPackInfo KAFORPackInfo_316 = { KAFOR_pack_32len_16bw_0offset<uint32_t>, 0, 0, 64, 128, };
static KAFORPackInfo KAFORPackInfo_317 = { KAFOR_pack_32len_16bw_8offset<uint32_t>, 8, 8, 64, 128, };
static KAFORPackInfo KAFORPackInfo_318 = { KAFOR_pack_32len_16bw_16offset<uint32_t>, 16, 16, 64, 128, };
static KAFORPackInfo KAFORPackInfo_319 = { KAFOR_pack_32len_16bw_24offset<uint32_t>, 24, 24, 64, 128, };
static KAFORPackInfo KAFORPackInfo_320 = { KAFOR_pack_32len_17bw_0offset<uint32_t>, 0, 0, 68, 128, };
static KAFORPackInfo KAFORPackInfo_321 = { KAFOR_pack_32len_17bw_8offset<uint32_t>, 8, 8, 68, 128, };
static KAFORPackInfo KAFORPackInfo_322 = { KAFOR_pack_32len_17bw_16offset<uint32_t>, 16, 16, 68, 128, };
static KAFORPackInfo KAFORPackInfo_323 = { KAFOR_pack_32len_17bw_24offset<uint32_t>, 24, 24, 68, 128, };
static KAFORPackInfo KAFORPackInfo_324 = { KAFOR_pack_32len_18bw_0offset<uint32_t>, 0, 0, 72, 128, };
static KAFORPackInfo KAFORPackInfo_325 = { KAFOR_pack_32len_18bw_8offset<uint32_t>, 8, 8, 72, 128, };
static KAFORPackInfo KAFORPackInfo_326 = { KAFOR_pack_32len_18bw_16offset<uint32_t>, 16, 16, 72, 128, };
static KAFORPackInfo KAFORPackInfo_327 = { KAFOR_pack_32len_18bw_24offset<uint32_t>, 24, 24, 72, 128, };
static KAFORPackInfo KAFORPackInfo_328 = { KAFOR_pack_32len_19bw_0offset<uint32_t>, 0, 0, 76, 128, };
static KAFORPackInfo KAFORPackInfo_329 = { KAFOR_pack_32len_19bw_8offset<uint32_t>, 8, 8, 76, 128, };
static KAFORPackInfo KAFORPackInfo_330 = { KAFOR_pack_32len_19bw_16offset<uint32_t>, 16, 16, 76, 128, };
static KAFORPackInfo KAFORPackInfo_331 = { KAFOR_pack_32len_19bw_24offset<uint32_t>, 24, 24, 76, 128, };
static KAFORPackInfo KAFORPackInfo_332 = { KAFOR_pack_32len_20bw_0offset<uint32_t>, 0, 0, 80, 128, };
static KAFORPackInfo KAFORPackInfo_333 = { KAFOR_pack_32len_20bw_8offset<uint32_t>, 8, 8, 80, 128, };
static KAFORPackInfo KAFORPackInfo_334 = { KAFOR_pack_32len_20bw_16offset<uint32_t>, 16, 16, 80, 128, };
static KAFORPackInfo KAFORPackInfo_335 = { KAFOR_pack_32len_20bw_24offset<uint32_t>, 24, 24, 80, 128, };
static KAFORPackInfo KAFORPackInfo_336 = { KAFOR_pack_32len_21bw_0offset<uint32_t>, 0, 0, 84, 128, };
static KAFORPackInfo KAFORPackInfo_337 = { KAFOR_pack_32len_21bw_8offset<uint32_t>, 8, 8, 84, 128, };
static KAFORPackInfo KAFORPackInfo_338 = { KAFOR_pack_32len_21bw_16offset<uint32_t>, 16, 16, 84, 128, };
static KAFORPackInfo KAFORPackInfo_339 = { KAFOR_pack_32len_21bw_24offset<uint32_t>, 24, 24, 84, 128, };
static KAFORPackInfo KAFORPackInfo_340 = { KAFOR_pack_32len_22bw_0offset<uint32_t>, 0, 0, 88, 128, };
static KAFORPackInfo KAFORPackInfo_341 = { KAFOR_pack_32len_22bw_8offset<uint32_t>, 8, 8, 88, 128, };
static KAFORPackInfo KAFORPackInfo_342 = { KAFOR_pack_32len_22bw_16offset<uint32_t>, 16, 16, 88, 128, };
static KAFORPackInfo KAFORPackInfo_343 = { KAFOR_pack_32len_22bw_24offset<uint32_t>, 24, 24, 88, 128, };
static KAFORPackInfo KAFORPackInfo_344 = { KAFOR_pack_32len_23bw_0offset<uint32_t>, 0, 0, 92, 128, };
static KAFORPackInfo KAFORPackInfo_345 = { KAFOR_pack_32len_23bw_8offset<uint32_t>, 8, 8, 92, 128, };
static KAFORPackInfo KAFORPackInfo_346 = { KAFOR_pack_32len_23bw_16offset<uint32_t>, 16, 16, 92, 128, };
static KAFORPackInfo KAFORPackInfo_347 = { KAFOR_pack_32len_23bw_24offset<uint32_t>, 24, 24, 92, 128, };
static KAFORPackInfo KAFORPackInfo_348 = { KAFOR_pack_32len_24bw_0offset<uint32_t>, 0, 0, 96, 128, };
static KAFORPackInfo KAFORPackInfo_349 = { KAFOR_pack_32len_24bw_8offset<uint32_t>, 8, 8, 96, 128, };
static KAFORPackInfo KAFORPackInfo_350 = { KAFOR_pack_32len_24bw_16offset<uint32_t>, 16, 16, 96, 128, };
static KAFORPackInfo KAFORPackInfo_351 = { KAFOR_pack_32len_24bw_24offset<uint32_t>, 24, 24, 96, 128, };
static KAFORPackInfo KAFORPackInfo_352 = { KAFOR_pack_32len_25bw_0offset<uint32_t>, 0, 0, 100, 128, };
static KAFORPackInfo KAFORPackInfo_353 = { KAFOR_pack_32len_25bw_8offset<uint32_t>, 8, 8, 100, 128, };
static KAFORPackInfo KAFORPackInfo_354 = { KAFOR_pack_32len_25bw_16offset<uint32_t>, 16, 16, 100, 128, };
static KAFORPackInfo KAFORPackInfo_355 = { KAFOR_pack_32len_25bw_24offset<uint32_t>, 24, 24, 100, 128, };
static KAFORPackInfo KAFORPackInfo_356 = { KAFOR_pack_32len_26bw_0offset<uint32_t>, 0, 0, 104, 128, };
static KAFORPackInfo KAFORPackInfo_357 = { KAFOR_pack_32len_26bw_8offset<uint32_t>, 8, 8, 104, 128, };
static KAFORPackInfo KAFORPackInfo_358 = { KAFOR_pack_32len_26bw_16offset<uint32_t>, 16, 16, 104, 128, };
static KAFORPackInfo KAFORPackInfo_359 = { KAFOR_pack_32len_26bw_24offset<uint32_t>, 24, 24, 104, 128, };
static KAFORPackInfo KAFORPackInfo_360 = { KAFOR_pack_32len_27bw_0offset<uint32_t>, 0, 0, 108, 128, };
static KAFORPackInfo KAFORPackInfo_361 = { KAFOR_pack_32len_27bw_8offset<uint32_t>, 8, 8, 108, 128, };
static KAFORPackInfo KAFORPackInfo_362 = { KAFOR_pack_32len_27bw_16offset<uint32_t>, 16, 16, 108, 128, };
static KAFORPackInfo KAFORPackInfo_363 = { KAFOR_pack_32len_27bw_24offset<uint32_t>, 24, 24, 108, 128, };
static KAFORPackInfo KAFORPackInfo_364 = { KAFOR_pack_32len_28bw_0offset<uint32_t>, 0, 0, 112, 128, };
static KAFORPackInfo KAFORPackInfo_365 = { KAFOR_pack_32len_28bw_8offset<uint32_t>, 8, 8, 112, 128, };
static KAFORPackInfo KAFORPackInfo_366 = { KAFOR_pack_32len_28bw_16offset<uint32_t>, 16, 16, 112, 128, };
static KAFORPackInfo KAFORPackInfo_367 = { KAFOR_pack_32len_28bw_24offset<uint32_t>, 24, 24, 112, 128, };
static KAFORPackInfo KAFORPackInfo_368 = { KAFOR_pack_32len_29bw_0offset<uint32_t>, 0, 0, 116, 128, };
static KAFORPackInfo KAFORPackInfo_369 = { KAFOR_pack_32len_29bw_8offset<uint32_t>, 8, 8, 116, 128, };
static KAFORPackInfo KAFORPackInfo_370 = { KAFOR_pack_32len_29bw_16offset<uint32_t>, 16, 16, 116, 128, };
static KAFORPackInfo KAFORPackInfo_371 = { KAFOR_pack_32len_29bw_24offset<uint32_t>, 24, 24, 116, 128, };
static KAFORPackInfo KAFORPackInfo_372 = { KAFOR_pack_32len_30bw_0offset<uint32_t>, 0, 0, 120, 128, };
static KAFORPackInfo KAFORPackInfo_373 = { KAFOR_pack_32len_30bw_8offset<uint32_t>, 8, 8, 120, 128, };
static KAFORPackInfo KAFORPackInfo_374 = { KAFOR_pack_32len_30bw_16offset<uint32_t>, 16, 16, 120, 128, };
static KAFORPackInfo KAFORPackInfo_375 = { KAFOR_pack_32len_30bw_24offset<uint32_t>, 24, 24, 120, 128, };
static KAFORPackInfo KAFORPackInfo_376 = { KAFOR_pack_32len_31bw_0offset<uint32_t>, 0, 0, 124, 128, };
static KAFORPackInfo KAFORPackInfo_377 = { KAFOR_pack_32len_31bw_8offset<uint32_t>, 8, 8, 124, 128, };
static KAFORPackInfo KAFORPackInfo_378 = { KAFOR_pack_32len_31bw_16offset<uint32_t>, 16, 16, 124, 128, };
static KAFORPackInfo KAFORPackInfo_379 = { KAFOR_pack_32len_31bw_24offset<uint32_t>, 24, 24, 124, 128, };
static KAFORPackInfo KAFORPackInfo_380 = { KAFOR_pack_32len_32bw_0offset<uint32_t>, 0, 0, 128, 128, };
static KAFORPackInfo KAFORPackInfo_381 = { KAFOR_pack_32len_32bw_8offset<uint32_t>, 8, 8, 128, 128, };
static KAFORPackInfo KAFORPackInfo_382 = { KAFOR_pack_32len_32bw_16offset<uint32_t>, 16, 16, 128, 128, };
static KAFORPackInfo KAFORPackInfo_383 = { KAFOR_pack_32len_32bw_24offset<uint32_t>, 24, 24, 128, 128, };

static KAFORPackInfo KAFORPackInfoArr[384] = {
	KAFORPackInfo_0, KAFORPackInfo_1, KAFORPackInfo_2, KAFORPackInfo_3,
	KAFORPackInfo_4, KAFORPackInfo_5, KAFORPackInfo_6, KAFORPackInfo_7,
	KAFORPackInfo_8, KAFORPackInfo_9, KAFORPackInfo_10, KAFORPackInfo_11,
	KAFORPackInfo_12, KAFORPackInfo_13, KAFORPackInfo_14, KAFORPackInfo_15,
	KAFORPackInfo_16, KAFORPackInfo_17, KAFORPackInfo_18, KAFORPackInfo_19,
	KAFORPackInfo_20, KAFORPackInfo_21, KAFORPackInfo_22, KAFORPackInfo_23,
	KAFORPackInfo_24, KAFORPackInfo_25, KAFORPackInfo_26, KAFORPackInfo_27,
	KAFORPackInfo_28, KAFORPackInfo_29, KAFORPackInfo_30, KAFORPackInfo_31,
	KAFORPackInfo_32, KAFORPackInfo_33, KAFORPackInfo_34, KAFORPackInfo_35,
	KAFORPackInfo_36, KAFORPackInfo_37, KAFORPackInfo_38, KAFORPackInfo_39,
	KAFORPackInfo_40, KAFORPackInfo_41, KAFORPackInfo_42, KAFORPackInfo_43,
	KAFORPackInfo_44, KAFORPackInfo_45, KAFORPackInfo_46, KAFORPackInfo_47,
	KAFORPackInfo_48, KAFORPackInfo_49, KAFORPackInfo_50, KAFORPackInfo_51,
	KAFORPackInfo_52, KAFORPackInfo_53, KAFORPackInfo_54, KAFORPackInfo_55,
	KAFORPackInfo_56, KAFORPackInfo_57, KAFORPackInfo_58, KAFORPackInfo_59,
	KAFORPackInfo_60, KAFORPackInfo_61, KAFORPackInfo_62, KAFORPackInfo_63,
	KAFORPackInfo_64, KAFORPackInfo_65, KAFORPackInfo_66, KAFORPackInfo_67,
	KAFORPackInfo_68, KAFORPackInfo_69, KAFORPackInfo_70, KAFORPackInfo_71,
	KAFORPackInfo_72, KAFORPackInfo_73, KAFORPackInfo_74, KAFORPackInfo_75,
	KAFORPackInfo_76, KAFORPackInfo_77, KAFORPackInfo_78, KAFORPackInfo_79,
	KAFORPackInfo_80, KAFORPackInfo_81, KAFORPackInfo_82, KAFORPackInfo_83,
	KAFORPackInfo_84, KAFORPackInfo_85, KAFORPackInfo_86, KAFORPackInfo_87,
	KAFORPackInfo_88, KAFORPackInfo_89, KAFORPackInfo_90, KAFORPackInfo_91,
	KAFORPackInfo_92, KAFORPackInfo_93, KAFORPackInfo_94, KAFORPackInfo_95,
	KAFORPackInfo_96, KAFORPackInfo_97, KAFORPackInfo_98, KAFORPackInfo_99,
	KAFORPackInfo_100, KAFORPackInfo_101, KAFORPackInfo_102, KAFORPackInfo_103,
	KAFORPackInfo_104, KAFORPackInfo_105, KAFORPackInfo_106, KAFORPackInfo_107,
	KAFORPackInfo_108, KAFORPackInfo_109, KAFORPackInfo_110, KAFORPackInfo_111,
	KAFORPackInfo_112, KAFORPackInfo_113, KAFORPackInfo_114, KAFORPackInfo_115,
	KAFORPackInfo_116, KAFORPackInfo_117, KAFORPackInfo_118, KAFORPackInfo_119,
	KAFORPackInfo_120, KAFORPackInfo_121, KAFORPackInfo_122, KAFORPackInfo_123,
	KAFORPackInfo_124, KAFORPackInfo_125, KAFORPackInfo_126, KAFORPackInfo_127,
	KAFORPackInfo_128, KAFORPackInfo_129, KAFORPackInfo_130, KAFORPackInfo_131,
	KAFORPackInfo_132, KAFORPackInfo_133, KAFORPackInfo_134, KAFORPackInfo_135,
	KAFORPackInfo_136, KAFORPackInfo_137, KAFORPackInfo_138, KAFORPackInfo_139,
	KAFORPackInfo_140, KAFORPackInfo_141, KAFORPackInfo_142, KAFORPackInfo_143,
	KAFORPackInfo_144, KAFORPackInfo_145, KAFORPackInfo_146, KAFORPackInfo_147,
	KAFORPackInfo_148, KAFORPackInfo_149, KAFORPackInfo_150, KAFORPackInfo_151,
	KAFORPackInfo_152, KAFORPackInfo_153, KAFORPackInfo_154, KAFORPackInfo_155,
	KAFORPackInfo_156, KAFORPackInfo_157, KAFORPackInfo_158, KAFORPackInfo_159,
	KAFORPackInfo_160, KAFORPackInfo_161, KAFORPackInfo_162, KAFORPackInfo_163,
	KAFORPackInfo_164, KAFORPackInfo_165, KAFORPackInfo_166, KAFORPackInfo_167,
	KAFORPackInfo_168, KAFORPackInfo_169, KAFORPackInfo_170, KAFORPackInfo_171,
	KAFORPackInfo_172, KAFORPackInfo_173, KAFORPackInfo_174, KAFORPackInfo_175,
	KAFORPackInfo_176, KAFORPackInfo_177, KAFORPackInfo_178, KAFORPackInfo_179,
	KAFORPackInfo_180, KAFORPackInfo_181, KAFORPackInfo_182, KAFORPackInfo_183,
	KAFORPackInfo_184, KAFORPackInfo_185, KAFORPackInfo_186, KAFORPackInfo_187,
	KAFORPackInfo_188, KAFORPackInfo_189, KAFORPackInfo_190, KAFORPackInfo_191,
	KAFORPackInfo_192, KAFORPackInfo_193, KAFORPackInfo_194, KAFORPackInfo_195,
	KAFORPackInfo_196, KAFORPackInfo_197, KAFORPackInfo_198, KAFORPackInfo_199,
	KAFORPackInfo_200, KAFORPackInfo_201, KAFORPackInfo_202, KAFORPackInfo_203,
	KAFORPackInfo_204, KAFORPackInfo_205, KAFORPackInfo_206, KAFORPackInfo_207,
	KAFORPackInfo_208, KAFORPackInfo_209, KAFORPackInfo_210, KAFORPackInfo_211,
	KAFORPackInfo_212, KAFORPackInfo_213, KAFORPackInfo_214, KAFORPackInfo_215,
	KAFORPackInfo_216, KAFORPackInfo_217, KAFORPackInfo_218, KAFORPackInfo_219,
	KAFORPackInfo_220, KAFORPackInfo_221, KAFORPackInfo_222, KAFORPackInfo_223,
	KAFORPackInfo_224, KAFORPackInfo_225, KAFORPackInfo_226, KAFORPackInfo_227,
	KAFORPackInfo_228, KAFORPackInfo_229, KAFORPackInfo_230, KAFORPackInfo_231,
	KAFORPackInfo_232, KAFORPackInfo_233, KAFORPackInfo_234, KAFORPackInfo_235,
	KAFORPackInfo_236, KAFORPackInfo_237, KAFORPackInfo_238, KAFORPackInfo_239,
	KAFORPackInfo_240, KAFORPackInfo_241, KAFORPackInfo_242, KAFORPackInfo_243,
	KAFORPackInfo_244, KAFORPackInfo_245, KAFORPackInfo_246, KAFORPackInfo_247,
	KAFORPackInfo_248, KAFORPackInfo_249, KAFORPackInfo_250, KAFORPackInfo_251,
	KAFORPackInfo_252, KAFORPackInfo_253, KAFORPackInfo_254, KAFORPackInfo_255,
	KAFORPackInfo_256, KAFORPackInfo_257, KAFORPackInfo_258, KAFORPackInfo_259,
	KAFORPackInfo_260, KAFORPackInfo_261, KAFORPackInfo_262, KAFORPackInfo_263,
	KAFORPackInfo_264, KAFORPackInfo_265, KAFORPackInfo_266, KAFORPackInfo_267,
	KAFORPackInfo_268, KAFORPackInfo_269, KAFORPackInfo_270, KAFORPackInfo_271,
	KAFORPackInfo_272, KAFORPackInfo_273, KAFORPackInfo_274, KAFORPackInfo_275,
	KAFORPackInfo_276, KAFORPackInfo_277, KAFORPackInfo_278, KAFORPackInfo_279,
	KAFORPackInfo_280, KAFORPackInfo_281, KAFORPackInfo_282, KAFORPackInfo_283,
	KAFORPackInfo_284, KAFORPackInfo_285, KAFORPackInfo_286, KAFORPackInfo_287,
	KAFORPackInfo_288, KAFORPackInfo_289, KAFORPackInfo_290, KAFORPackInfo_291,
	KAFORPackInfo_292, KAFORPackInfo_293, KAFORPackInfo_294, KAFORPackInfo_295,
	KAFORPackInfo_296, KAFORPackInfo_297, KAFORPackInfo_298, KAFORPackInfo_299,
	KAFORPackInfo_300, KAFORPackInfo_301, KAFORPackInfo_302, KAFORPackInfo_303,
	KAFORPackInfo_304, KAFORPackInfo_305, KAFORPackInfo_306, KAFORPackInfo_307,
	KAFORPackInfo_308, KAFORPackInfo_309, KAFORPackInfo_310, KAFORPackInfo_311,
	KAFORPackInfo_312, KAFORPackInfo_313, KAFORPackInfo_314, KAFORPackInfo_315,
	KAFORPackInfo_316, KAFORPackInfo_317, KAFORPackInfo_318, KAFORPackInfo_319,
	KAFORPackInfo_320, KAFORPackInfo_321, KAFORPackInfo_322, KAFORPackInfo_323,
	KAFORPackInfo_324, KAFORPackInfo_325, KAFORPackInfo_326, KAFORPackInfo_327,
	KAFORPackInfo_328, KAFORPackInfo_329, KAFORPackInfo_330, KAFORPackInfo_331,
	KAFORPackInfo_332, KAFORPackInfo_333, KAFORPackInfo_334, KAFORPackInfo_335,
	KAFORPackInfo_336, KAFORPackInfo_337, KAFORPackInfo_338, KAFORPackInfo_339,
	KAFORPackInfo_340, KAFORPackInfo_341, KAFORPackInfo_342, KAFORPackInfo_343,
	KAFORPackInfo_344, KAFORPackInfo_345, KAFORPackInfo_346, KAFORPackInfo_347,
	KAFORPackInfo_348, KAFORPackInfo_349, KAFORPackInfo_350, KAFORPackInfo_351,
	KAFORPackInfo_352, KAFORPackInfo_353, KAFORPackInfo_354, KAFORPackInfo_355,
	KAFORPackInfo_356, KAFORPackInfo_357, KAFORPackInfo_358, KAFORPackInfo_359,
	KAFORPackInfo_360, KAFORPackInfo_361, KAFORPackInfo_362, KAFORPackInfo_363,
	KAFORPackInfo_364, KAFORPackInfo_365, KAFORPackInfo_366, KAFORPackInfo_367,
	KAFORPackInfo_368, KAFORPackInfo_369, KAFORPackInfo_370, KAFORPackInfo_371,
	KAFORPackInfo_372, KAFORPackInfo_373, KAFORPackInfo_374, KAFORPackInfo_375,
	KAFORPackInfo_376, KAFORPackInfo_377, KAFORPackInfo_378, KAFORPackInfo_379,
	KAFORPackInfo_380, KAFORPackInfo_381, KAFORPackInfo_382, KAFORPackInfo_383,
};

}
}

#endif /* KAFOR_PACK_HPP_ */

/*

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
			oss << "void KAFOR_pack_" << num << "len_" << i << "bw_" << (k*8) << "offset(T * des, const uint32_t *src) {" << endl;
			int infoIdx = (base << 7) + ((i - 1) << 2) + k;
			infoOss << "static KAFORPackInfo KAFORPackInfo_" << infoIdx << " = { " << "KAFOR_pack_"
					<< num << "len_" << i << "bw_" << (k*8) << "offset<uint32_t>, ";

			int offsetInWord = k << 3;
			int curWordIdx = 0;
			int j = 0;
			uint32_t mask  = (1LL << i) - 1;
			while (j < num) {
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
						tmp1 << " & " << mask;
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
							tmp2 << " & " << mask;
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
						tmp1 << " & " << mask;
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
			infoOss << (k << 3) << ", "	//begOffset
				<< (offsetInWord) << ", "	//newOffset
				<< (curWordIdx << 2) << ", "	//wordskipped
				<< (num << 2) << ", "		//integer encoded
				<< "};" << endl;
		}
	}
}

string printInfoArr(int arrNum) {
	ostringstream oss;
	oss << "static KAFORPackInfo KAFORPackInfoArr[" << arrNum << "] = {" << endl;
	for (int i=0; i<arrNum; ++i) {
		if (i % 4 == 0)
			oss << "\t";
		oss << "KAFORPackInfo_" << i << ", ";
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
 *
 */
