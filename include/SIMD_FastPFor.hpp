/**
 * filename:SIMD_FastPFor.hpp
 * @brief:
 * @date:2014-02-28
 * @author:zxd
 *
 * A simulation of SIMD-FastPFor of Lemire et al. in GitHub.
 *
 *
 */

#ifndef SIMD_FASTPFOR_HPP_
#define SIMD_FASTPFOR_HPP_

#ifdef USE_SSE_INSTRUCTION

#include <stdint.h>
#include <iostream>
#include <string.h>
#include <cassert>
#include <vector>
#include "encoding_internals.hpp"
#include "PForDeltaBase.hpp"
#include "VarByte.hpp"
#include "simd_pack_vl.hpp"
#include "simd_unpack_vl.hpp"
#include "simd_pack_se.hpp"
#include "simd_unpack_se.hpp"

namespace paradise {
namespace index {

template <class T>
T * padTo128bits(T * inbyte) {
    return reinterpret_cast<T *> ((reinterpret_cast<uintptr_t> (inbyte)
            + 15) & ~15);
}


class SIMD_FastPFor: public PForDeltaBase {
public:
	SIMD_FastPFor();

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

	void setAbnormalRatio(float ratio) {
		m_expRatio = ratio;
	}
	virtual std::string getCompressorName() {
		return "simd_fastpfor";
	}
	virtual Compressor* clone();

	template<typename T>
	int encode(char* des, const T* src, uint32_t encodeNum);

	template<typename T>
	int decode(T* des, const char* src, uint32_t decodeNum);

private:
	template<typename T>
	int encodeAlign(char* des, const T* src, uint32_t encodeNum);

	template<typename T>
	int decodeAlign(T* des, const char* src, uint32_t decodeNum);

	template<typename T>
	void getBestBFromData(const T * in, uint8_t& bestb,
	        uint8_t & bestcexcept, uint8_t & maxb);

    template<class STLContainer>
    uint32_t * packmeupwithoutmasksimd(STLContainer & source, uint32_t * out,
            const uint32_t bit);

    template<class STLContainer>
    const uint32_t * unpackmesimd(const uint32_t * in, STLContainer & out,
            const uint32_t bit);

    void resetBuffer();


private:

	const int overheadofeachexcept;
    std::vector<std::vector<uint32_t> > datatobepacked;
    std::vector<uint8_t> bytescontainer;

protected:
	/**********************************************************************
	 * pack n elements into b-bits wide array.
	 * v: input array, the number to be packed.
	 * w: the output compressed array.
	 * b: the bits-width per element in the compressed array
	 * n: the number of element to be packed
	 * note: the function does not modified the output array pointer. you need
	 * to calculate yourself outside the function
	 **********************************************************************/

	static void pack_vl(uint32_t *des, const uint32_t *src, uint32_t bitNum,
			uint32_t num);

	static void pack_se(uint32_t *des, const uint32_t *src, uint32_t bitNum,
			uint32_t num);

};

template<typename T>
int SIMD_FastPFor::encode(char* des, const T* src, uint32_t encodeNum) {
	int compLen = 0;
	uint32_t alignEncodeNum = encodeNum / m_blockSize * m_blockSize;

	compLen += encodeAlign(des, src, alignEncodeNum);

	compLen += VarByte::encode(des + compLen, src + alignEncodeNum, encodeNum - alignEncodeNum);

	return compLen;
}

template<typename T>
int SIMD_FastPFor::decode(T* des, const char* src, uint32_t decodeNum) {
	int decodeLen = 0;
	uint32_t alignDecodeNum = decodeNum / m_blockSize * m_blockSize;

	decodeLen += decodeAlign(des, src, alignDecodeNum);

	decodeLen += VarByte::decode<T>(des + alignDecodeNum, src + decodeLen, decodeNum
			- alignDecodeNum);

	return decodeLen;
}

template<typename T>
int SIMD_FastPFor::encodeAlign(char* des, const T* src, uint32_t encodeNum) {
	if (encodeNum == 0)
		return 0;

	const uint32_t *in = (const uint32_t *)src;
	uint32_t *out = (uint32_t*)des;
	const size_t length = encodeNum;
	const uint32_t BlockSize = 128;

	uint32_t * const initout = out; // keep track of this
	uint32_t * const headerout = out++; // keep track of this
	for (uint32_t k = 0; k < 32 + 1; ++k)
		datatobepacked[k].clear();
	
	//uint8_t * bc = &bytescontainer[0];
	out = padTo128bits(out);
	//assert(!needPaddingTo128Bits(in));
	for (const uint32_t * const final = in + length; (in + BlockSize <= final);
			in += BlockSize) {
		uint8_t bestb, bestcexcept, maxb;
		getBestBFromData(in, bestb, bestcexcept, maxb);
		//*bc++ = bestb;
		bytescontainer.push_back(bestb);
		//*bc++ = bestcexcept;
		bytescontainer.push_back(bestcexcept);
		if (bestcexcept > 0) {
			//*bc++ = maxb;
			bytescontainer.push_back(maxb);
			std::vector<uint32_t> &thisexceptioncontainer =
					datatobepacked[maxb - bestb];
			const uint32_t maxval = 1U << bestb;
			for (uint32_t k = 0; k < BlockSize; ++k) {
				if (in[k] >= maxval) {
					// we have an exception
					thisexceptioncontainer.push_back(in[k] >> bestb);
					//*bc++ = static_cast<uint8_t>(k);
					bytescontainer.push_back(static_cast<uint8_t>(k));
				}
			}
		}
		//out = packblockupsimd(in, out, bestb);
		int needWord = ((bestb * BlockSize) >> 5);
		memset(out, 0, sizeof(uint32_t) * needWord);
		pack_vl(out, in, bestb, BlockSize);
		out += needWord;
	}
	headerout[0] = static_cast<uint32_t>(out - headerout);
	//const uint32_t bytescontainersize = static_cast<uint32_t>(bc
	const uint32_t bytescontainersize = bytescontainer.size();
	*(out++) = bytescontainersize;
	memcpy(out, &bytescontainer[0], bytescontainersize);
	out += (bytescontainersize + sizeof(uint32_t) - 1) / sizeof(uint32_t);
	uint32_t bitmap = 0;
	for (uint32_t k = 1; k <= 32; ++k) {
		if (datatobepacked[k].size() != 0)
			bitmap |= (1U << (k - 1));
	}
	*(out++) = bitmap;
	for (uint32_t k = 1; k <= 32; ++k) {
		if (datatobepacked[k].size() > 0)
			out = packmeupwithoutmasksimd(datatobepacked[k], out, k);
	}

	resetBuffer();
	return (out - initout) * sizeof(uint32_t);
}

template<typename STLContainer>
uint32_t * SIMD_FastPFor::packmeupwithoutmasksimd(STLContainer & source, uint32_t * out,
            const uint32_t bit) {
	const uint32_t size = static_cast<uint32_t>(source.size());
	*out = size;
	out++;
	out = padTo128bits(out);
	if (source.size() == 0)
		return out;
	source.resize((source.size() + 32 - 1) / 32 * 32);
	pack_se(out, &source[0], bit, source.size());
	out += (bit * source.size()) >> 5;

	source.resize(size);
	return out;
}

template<class STLContainer>
const uint32_t * SIMD_FastPFor::unpackmesimd(const uint32_t * in, STLContainer & out,
        const uint32_t bit) {
	typedef void (*simd_unpackSEFun)(uint32_t *des, const uint32_t *srcInt, int blockSize);
	static simd_unpackSEFun simd_unpack_SEFuns[33] = { simd_unpack_se0<uint32_t> , simd_unpack_se1<uint32_t> , simd_unpack_se2<uint32_t> ,
			simd_unpack_se3<uint32_t> , simd_unpack_se4<uint32_t> , simd_unpack_se5<uint32_t> , simd_unpack_se6<uint32_t> , simd_unpack_se7<uint32_t> ,
			simd_unpack_se8<uint32_t> , simd_unpack_se9<uint32_t> , simd_unpack_se10<uint32_t> , simd_unpack_se11<uint32_t> , simd_unpack_se12<uint32_t> ,
			simd_unpack_se13<uint32_t> , simd_unpack_se14<uint32_t> , simd_unpack_se15<uint32_t> , simd_unpack_se16<uint32_t> ,
			simd_unpack_se17<uint32_t> , simd_unpack_se18<uint32_t> , simd_unpack_se19<uint32_t> , simd_unpack_se20<uint32_t> ,
			simd_unpack_se21<uint32_t> , simd_unpack_se22<uint32_t> , simd_unpack_se23<uint32_t> , simd_unpack_se24<uint32_t> ,
			simd_unpack_se25<uint32_t> , simd_unpack_se26<uint32_t> , simd_unpack_se27<uint32_t> , simd_unpack_se28<uint32_t> ,
			simd_unpack_se29<uint32_t> , simd_unpack_se30<uint32_t> , simd_unpack_se31<uint32_t> , simd_unpack_se32<uint32_t> };

	const uint32_t size = *in;
    ++in;
    in = padTo128bits(in);
    out.resize((size + 32 - 1) / 32 * 32);
    (simd_unpack_SEFuns[bit])(&out[0], in, out.size());
    in += (bit * out.size()) >> 5;
    out.resize(size);
    return in;
}


template<typename T>
int SIMD_FastPFor::decodeAlign(T* des, const char* src, uint32_t decodeNum) {
	typedef void (*simd_unpackVLFun)(T *des, const uint32_t *srcInt, int blockSize);
	static simd_unpackVLFun simd_unpack_VLFuns[33] = { simd_unpack_vl0<T> , simd_unpack_vl1<T> , simd_unpack_vl2<T> ,
			simd_unpack_vl3<T> , simd_unpack_vl4<T> , simd_unpack_vl5<T> , simd_unpack_vl6<T> , simd_unpack_vl7<T> ,
			simd_unpack_vl8<T> , simd_unpack_vl9<T> , simd_unpack_vl10<T> , simd_unpack_vl11<T> , simd_unpack_vl12<T> ,
			simd_unpack_vl13<T> , simd_unpack_vl14<T> , simd_unpack_vl15<T> , simd_unpack_vl16<T> ,
			simd_unpack_vl17<T> , simd_unpack_vl18<T> , simd_unpack_vl19<T> , simd_unpack_vl20<T> ,
			simd_unpack_vl21<T> , simd_unpack_vl22<T> , simd_unpack_vl23<T> , simd_unpack_vl24<T> ,
			simd_unpack_vl25<T> , simd_unpack_vl26<T> , simd_unpack_vl27<T> , simd_unpack_vl28<T> ,
			simd_unpack_vl29<T> , simd_unpack_vl30<T> , simd_unpack_vl31<T> , simd_unpack_vl32<T> };

	if (decodeNum == 0)
		return 0;

	const uint32_t BlockSize = 128;
	const uint32_t *in = (const uint32_t *)src;
	uint32_t *out = (uint32_t *)des;

	const uint32_t * const initin = in;
	const uint32_t * const headerin = in++;
	const uint32_t wheremeta = headerin[0];
	const uint32_t *inexcept = headerin + wheremeta;
	const uint32_t bytesize = *inexcept++;
	const uint8_t * bytep = reinterpret_cast<const uint8_t *> (inexcept);
	inexcept += (bytesize + sizeof(uint32_t) - 1) / sizeof(uint32_t);
	const uint32_t bitmap = *(inexcept++);
	for (uint32_t k = 1; k <= 32; ++k) {
		if ((bitmap & (1U << (k - 1))) != 0) {
			inexcept = unpackmesimd(inexcept, datatobepacked[k], k);
		}
	}
	std::vector<uint32_t>::const_iterator unpackpointers[32 + 1];
	for (uint32_t k = 1; k <= 32; ++k) {
		unpackpointers[k] = datatobepacked[k].begin();
	}
	in = padTo128bits(in);
	//assert(!needPaddingTo128Bits(out));
	for (uint32_t run = 0; run < decodeNum / BlockSize; ++run, out
			+= BlockSize) {
		const uint8_t b = *bytep++;
		const uint8_t cexcept = *bytep++;
		//in = unpackblocksimd(in, out, b);

		(simd_unpack_VLFuns[b])((T*)out, in, BlockSize);
		in += (b * BlockSize) >> 5;


		if (cexcept > 0) {
			const uint8_t maxbits = *bytep++;
			std::vector<uint32_t>::const_iterator & exceptionsptr =
					unpackpointers[maxbits - b];
			for (uint32_t k = 0; k < cexcept; ++k) {
				const uint8_t pos = *(bytep++);
				out[pos] |= (*(exceptionsptr++)) << b;
			}
		}
	}
	assert(in == headerin + wheremeta);
	resetBuffer();

	return (inexcept - initin) * sizeof(uint32_t);
}

template<typename T>
void SIMD_FastPFor::getBestBFromData(const T * in, uint8_t& bestb,
        uint8_t & bestcexcept, uint8_t & maxb) {
    uint32_t BlockSize = 128;

	uint32_t freqs[33];
    for (uint32_t k = 0; k <= 32; ++k)
        freqs[k] = 0;
    for (uint32_t k = 0; k < BlockSize; ++k) {
        freqs[asmbits(in[k])]++;
    }
    bestb = 32;
    while (freqs[bestb] == 0)
        bestb--;
    maxb = bestb;
    uint32_t bestcost = bestb * BlockSize;
    uint32_t cexcept = 0;
    bestcexcept = static_cast<uint8_t>(cexcept);
    for (uint32_t b = bestb - 1; b < 32; --b) {
        cexcept += freqs[b + 1];
        uint32_t thiscost = cexcept * overheadofeachexcept + cexcept
                * (maxb - b) + b * BlockSize + 8;// the  extra 8 is the cost of storing maxbits
        if (thiscost < bestcost) {
            bestcost = thiscost;
            bestb = static_cast<uint8_t>(b);
            bestcexcept = static_cast<uint8_t>(cexcept);
        }
    }
}

}
}

#endif

#endif /* SIMD_FASTPFOR_HPP_ */
