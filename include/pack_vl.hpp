/*
 * pack_vl.hpp
 *  pack vertical layout
 *  Created on: 2013-5-3
 *      Author: zxd
 */

#ifndef PACK_VL_HPP_
#define PACK_VL_HPP_

namespace paradise {
namespace index {

template<typename T>
void pack_vl0(uint32_t * des, const T *src, int blockSize) {

}

template<typename T>
void pack_vl1(uint32_t * des, const T *src, int blockSize) {
	int i;
	for (i = 0; i < blockSize; i += 128) {
		for (int j=0; j<4; j++) {
			des[j] = (src[j] & 0x1);
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1) << 1;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1) << 2;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1) << 3;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1) << 4;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1) << 5;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1) << 6;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1) << 7;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1) << 8;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1) << 9;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1) << 10;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1) << 11;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1) << 12;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1) << 13;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1) << 14;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1) << 15;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1) << 16;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1) << 17;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1) << 18;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1) << 19;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1) << 20;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1) << 21;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1) << 22;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1) << 23;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1) << 24;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1) << 25;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1) << 26;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1) << 27;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1) << 28;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1) << 29;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1) << 30;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1) << 31;
		}
		src += 4;
		des += 4;
	}
}

template<typename T>
void pack_vl2(uint32_t * des, const T *src, int blockSize) {
	int i;
	for (i = 0; i < blockSize; i += 128) {
		for (int k=0; k<2; k++) {
			for (int j=0; j<4; j++) {
				des[j] = (src[j] & 0x3);
			}
			src += 4;
			for (int j=0; j<4; j++) {
				des[j] |= (src[j] & 0x3) << 2;
			}
			src += 4;
			for (int j=0; j<4; j++) {
				des[j] |= (src[j] & 0x3) << 4;
			}
			src += 4;
			for (int j=0; j<4; j++) {
				des[j] |= (src[j] & 0x3) << 6;
			}
			src += 4;
			for (int j=0; j<4; j++) {
				des[j] |= (src[j] & 0x3) << 8;
			}
			src += 4;
			for (int j=0; j<4; j++) {
				des[j] |= (src[j] & 0x3) << 10;
			}
			src += 4;
			for (int j=0; j<4; j++) {
				des[j] |= (src[j] & 0x3) << 12;
			}
			src += 4;
			for (int j=0; j<4; j++) {
				des[j] |= (src[j] & 0x3) << 14;
			}
			src += 4;
			for (int j=0; j<4; j++) {
				des[j] |= (src[j] & 0x3) << 16;
			}
			src += 4;
			for (int j=0; j<4; j++) {
				des[j] |= (src[j] & 0x3) << 18;
			}
			src += 4;
			for (int j=0; j<4; j++) {
				des[j] |= (src[j] & 0x3) << 20;
			}
			src += 4;
			for (int j=0; j<4; j++) {
				des[j] |= (src[j] & 0x3) << 22;
			}
			src += 4;
			for (int j=0; j<4; j++) {
				des[j] |= (src[j] & 0x3) << 24;
			}
			src += 4;
			for (int j=0; j<4; j++) {
				des[j] |= (src[j] & 0x3) << 26;
			}
			src += 4;
			for (int j=0; j<4; j++) {
				des[j] |= (src[j] & 0x3) << 28;
			}
			src += 4;
			for (int j=0; j<4; j++) {
				des[j] |= (src[j] & 0x3) << 30;
			}
			src += 4;

			des += 4;
		}
	}
}

template<typename T>
void pack_vl3(uint32_t * des, const T *src, int blockSize) {
	int i;
	for (i = 0; i < blockSize; i += 128) {
		for (int j=0; j<4; j++) {
			des[j] = (src[j] & 0x7);
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7) << 3;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7) << 6;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7) << 9;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7) << 12;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7) << 15;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7) << 18;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7) << 21;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7) << 24;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7) << 27;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7) << 30;
		}
		des += 4;

		for (int j=0; j<4; j++) {
			des[j] = (src[j] & 0x7) >> 2;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7) << 1;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7) << 4;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7) << 7;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7) << 10;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7) << 13;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7) << 16;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7) << 19;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7) << 22;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7) << 25;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7) << 28;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7) << 31;
		}
		des += 4;

		for (int j=0; j<4; j++) {
			des[j] = (src[j] & 0x7) >> 1;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7) << 2;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7) << 5;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7) << 8;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7) << 11;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7) << 14;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7) << 17;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7) << 20;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7) << 23;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7) << 26;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7) << 29;
		}
		src += 4;
		des += 4;
	}
}

template<typename T>
void pack_vl4(uint32_t * des, const T *src, int blockSize) {
	int i;
	for (i = 0; i < blockSize; i += 128) {
		for (int k=0; k<4; k++) {
			for (int j=0; j<4; j++) {
				des[j] = (src[j] & 0xf);
			}
			src += 4;
			for (int j=0; j<4; j++) {
				des[j] |= (src[j] & 0xf) << 4;
			}
			src += 4;
			for (int j=0; j<4; j++) {
				des[j] |= (src[j] & 0xf) << 8;
			}
			src += 4;
			for (int j=0; j<4; j++) {
				des[j] |= (src[j] & 0xf) << 12;
			}
			src += 4;
			for (int j=0; j<4; j++) {
				des[j] |= (src[j] & 0xf) << 16;
			}
			src += 4;
			for (int j=0; j<4; j++) {
				des[j] |= (src[j] & 0xf) << 20;
			}
			src += 4;
			for (int j=0; j<4; j++) {
				des[j] |= (src[j] & 0xf) << 24;
			}
			src += 4;
			for (int j=0; j<4; j++) {
				des[j] |= (src[j] & 0xf) << 28;
			}
			src += 4;

			des += 4;
		}
	}
}

template<typename T>
void pack_vl5(uint32_t * des, const T *src, int blockSize) {
	int i;
	for (i = 0; i < blockSize; i += 128) {
		for (int j=0; j<4; j++) {
			des[j] = (src[j] & 0x1f);
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1f) << 5;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1f) << 10;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1f) << 15;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1f) << 20;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1f) << 25;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1f) << 30;
		}
		des += 4;

		for (int j=0; j<4; j++) {
			des[j] = (src[j] & 0x1f) >> 2;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1f) << 3;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1f) << 8;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1f) << 13;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1f) << 18;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1f) << 23;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1f) << 28;
		}
		des += 4;

		for (int j=0; j<4; j++) {
			des[j] = (src[j] & 0x1f) >> 4;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1f) << 1;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1f) << 6;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1f) << 11;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1f) << 16;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1f) << 21;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1f) << 26;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1f) << 31;
		}
		des += 4;

		for (int j=0; j<4; j++) {
			des[j] = (src[j] & 0x1f) >> 1;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1f) << 4;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1f) << 9;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1f) << 14;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1f) << 19;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1f) << 24;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1f) << 29;
		}
		des += 4;

		for (int j=0; j<4; j++) {
			des[j] = (src[j] & 0x1f) >> 3;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1f) << 2;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1f) << 7;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1f) << 12;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1f) << 17;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1f) << 22;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x1f) << 27;
		}
		src += 4;
		des += 4;
	}
}

template<typename T>
void pack_vl6(uint32_t * des, const T *src, int blockSize) {
	int i;
	for (i = 0; i < blockSize; i += 128) {
		for (int k=0; k<2; k++) {
			for (int j=0; j<4; j++) {
				des[j] = (src[j] & 0x3f);
			}
			src += 4;
			for (int j=0; j<4; j++) {
				des[j] |= (src[j] & 0x3f) << 6;
			}
			src += 4;
			for (int j=0; j<4; j++) {
				des[j] |= (src[j] & 0x3f) << 12;
			}
			src += 4;
			for (int j=0; j<4; j++) {
				des[j] |= (src[j] & 0x3f) << 18;
			}
			src += 4;
			for (int j=0; j<4; j++) {
				des[j] |= (src[j] & 0x3f) << 24;
			}
			src += 4;
			for (int j=0; j<4; j++) {
				des[j] |= (src[j] & 0x3f) << 30;
			}
			des += 4;

			for (int j=0; j<4; j++) {
				des[j] = (src[j] & 0x3f) >> 2;
			}
			src += 4;
			for (int j=0; j<4; j++) {
				des[j] |= (src[j] & 0x3f) << 4;
			}
			src += 4;
			for (int j=0; j<4; j++) {
				des[j] |= (src[j] & 0x3f) << 10;
			}
			src += 4;
			for (int j=0; j<4; j++) {
				des[j] |= (src[j] & 0x3f) << 16;
			}
			src += 4;
			for (int j=0; j<4; j++) {
				des[j] |= (src[j] & 0x3f) << 22;
			}
			src += 4;
			for (int j=0; j<4; j++) {
				des[j] |= (src[j] & 0x3f) << 28;
			}
			des += 4;

			for (int j=0; j<4; j++) {
				des[j] = (src[j] & 0x3f) >> 4;
			}
			src += 4;
			for (int j=0; j<4; j++) {
				des[j] |= (src[j] & 0x3f) << 2;
			}
			src += 4;
			for (int j=0; j<4; j++) {
				des[j] |= (src[j] & 0x3f) << 8;
			}
			src += 4;
			for (int j=0; j<4; j++) {
				des[j] |= (src[j] & 0x3f) << 14;
			}
			src += 4;
			for (int j=0; j<4; j++) {
				des[j] |= (src[j] & 0x3f) << 20;
			}
			src += 4;
			for (int j=0; j<4; j++) {
				des[j] |= (src[j] & 0x3f) << 26;
			}
			src += 4;
			des += 4;
		}
	}
}

template<typename T>
void pack_vl7(uint32_t * des, const T *src, int blockSize) {
	int i;
	for (i = 0; i < blockSize; i += 128) {
		for (int j=0; j<4; j++) {
			des[j] = (src[j] & 0x7f);
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7f) << 7;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7f) << 14;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7f) << 21;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7f) << 28;
		}
		des += 4;

		for (int j=0; j<4; j++) {
			des[j] = (src[j] & 0x7f) >> 4;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7f) << 3;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7f) << 10;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7f) << 17;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7f) << 24;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7f) << 31;
		}
		des += 4;

		for (int j=0; j<4; j++) {
			des[j] = (src[j] & 0x7f) >> 1;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7f) << 6;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7f) << 13;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7f) << 20;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7f) << 27;
		}
		des += 4;

		for (int j=0; j<4; j++) {
			des[j] = (src[j] & 0x7f) >> 5;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7f) << 2;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7f) << 9;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7f) << 16;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7f) << 23;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7f) << 30;
		}
		des += 4;

		for (int j=0; j<4; j++) {
			des[j] = (src[j] & 0x7f) >> 2;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7f) << 5;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7f) << 12;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7f) << 19;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7f) << 26;
		}
		des += 4;

		for (int j=0; j<4; j++) {
			des[j] = (src[j] & 0x7f) >> 6;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7f) << 1;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7f) << 8;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7f) << 15;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7f) << 22;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7f) << 29;
		}
		des += 4;

		for (int j=0; j<4; j++) {
			des[j] = (src[j] & 0x7f) >> 3;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7f) << 4;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7f) << 11;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7f) << 18;
		}
		src += 4;
		for (int j=0; j<4; j++) {
			des[j] |= (src[j] & 0x7f) << 25;
		}
		src += 4;
		des += 4;
	}
}

template<typename T>
void pack_vl8(uint32_t * des, const T *src, int blockSize) {
	int i;
	for (i = 0; i < blockSize; i += 128) {
		for (int k=0; k<8; k++) {
			for (int j=0; j<4; j++) {
				des[j] = (src[j] & 0xff);
			}
			src += 4;
			for (int j=0; j<4; j++) {
				des[j] |= (src[j] & 0xff) << 8;
			}
			src += 4;
			for (int j=0; j<4; j++) {
				des[j] |= (src[j] & 0xff) << 16;
			}
			src += 4;
			for (int j=0; j<4; j++) {
				des[j] |= (src[j] & 0xff) << 24;
			}
			src += 4;

			des += 4;
		}
	}
}

}
}


#endif /* PACK_VL_HPP_ */
