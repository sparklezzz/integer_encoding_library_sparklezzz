/*-----------------------------------------------------------------------------
 *  VSEncodingNaive.hpp - A naive implementation of VSEncoding
 *
 *  Coding-Style: google-styleguide
 *      https://code.google.com/p/google-styleguide/
 *
 *  Authors:
 *      Takeshi Yamamuro <linguin.m.s_at_gmail.com>
 *      Fabrizio Silvestri <fabrizio.silvestri_at_isti.cnr.it>
 *      Rossano Venturini <rossano.venturini_at_isti.cnr.it>
 *
 *  Copyright 2012 Integer Encoding Library <integerencoding_at_isti.cnr.it>
 *      http://integerencoding.ist.cnr.it/
 *
 *  Modified by Xudong Zhang
 *  Date: 2013/11/29
 *
 *-----------------------------------------------------------------------------
 */

#ifndef __VSENCODINGNAIVE_HPP__
#define __VSENCODINGNAIVE_HPP__

#include "encoding_internals.hpp"

#include "Compressor.hpp"
#include "VSEncodingDP.hpp"
#include "BitWriter.hpp"
#include "BitReader.hpp"

namespace paradise {
namespace index {

class VSEncodingNaive: public Compressor {
public:
	VSEncodingNaive();

	~VSEncodingNaive();

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
	virtual std::string getCompressorName() {
		return "vse_naive";
	}
	virtual Compressor* clone();

private:

	template<typename T>
	int encode(char* des, const T* src, uint32_t length);

	template<typename T>
	int decode(T* des, const char* src, uint32_t length);

	VSEncodingDP *vdp_;
	//std::tr1::shared_ptr<VSEncodingDP> vdp_;

	const static uint32_t VSENAIVE_LOGLEN;
	const static uint32_t VSENAIVE_LOGLOG;

	const static uint32_t VSENAIVE_LENS_LEN;

	const static uint32_t VSENAIVE_LENS[8];

	const static uint32_t VSENAIVE_LOGS[16];

	const static uint32_t VSENAIVE_REMAPLOGS[33];

	const static uint32_t VSENAIVE_CODELENS[65];

	const static uint32_t VSENAIVE_CODELOGS[33];

};
/* VSEncodingNaive */

template<typename T>
int VSEncodingNaive::encode(char* des, const T* src, uint32_t length) {
	const uint32_t *in = (const uint32_t *) src;
	uint32_t *out = (uint32_t*) des;
	uint64_t len = length;

	if (in == NULL)
		THROW_ENCODING_EXCEPTION("Invalid input: in");
	if (len == 0)
		THROW_ENCODING_EXCEPTION("Invalid input: len");
	if (out == NULL)
		THROW_ENCODING_EXCEPTION("Invalid input: out");

	ASSERT_ADDR(in, len);ASSERT_ADDR(out, *nvalue);

	/* Compute optimal partition */
	std::vector<uint32_t> logs;
	std::vector<uint32_t> parts;

	for (uint64_t i = 0; i < len; i++)
		logs.push_back(VSENAIVE_REMAPLOGS[32 - MSB32(in[i])]);

	ASSERT(logs.size() == len);
	ASSERT(parts.size() == 0);

	vdp_->computePartition(logs, &parts, VSENAIVE_LOGLEN + VSENAIVE_LOGLOG);
	ASSERT(parts.size() > 1);

	/* Ready to write data */
	BitWriter wt(out);

	uint64_t num = parts.size() - 1;
	for (uint64_t i = 0; i < num; i++) {
		/* Compute max B in the block */
		uint32_t maxB = 0;

		for (uint64_t j = parts[i]; j < parts[i + 1]; j++) {
			if (maxB < logs[j])
				maxB = logs[j];
		}

		/* Write the value of B and K */
		wt.putBinary(VSENAIVE_CODELOGS[maxB], VSENAIVE_LOGLOG);
		wt.putBinary(VSENAIVE_CODELENS[parts[i + 1] - parts[i]],
				VSENAIVE_LOGLEN);

		/* Write integers */
		for (uint64_t j = parts[i]; j < parts[i + 1]; j++)
			wt.putBinary(in[j], maxB);
	}

	return wt.getByteLenWritten();
}

template<typename T>
int VSEncodingNaive::decode(T* des, const char* src, uint32_t length) {
	const uint32_t *in = (const uint32_t *) src;
	uint32_t *out = (uint32_t *) des;
	uint32_t decoded = 0;

	if (in == NULL)
		THROW_ENCODING_EXCEPTION("Invalid input: in");
	if (out == NULL)
		THROW_ENCODING_EXCEPTION("Invalid input: out");

	BitReader rd(in);

	while (decoded < length) {
		uint32_t B = VSENAIVE_LOGS[rd.getBinary(VSENAIVE_LOGLOG)];
		uint32_t K = VSENAIVE_LENS[rd.getBinary(VSENAIVE_LOGLEN)];

		for (uint32_t i = 0; i < K; i++)
			out[i] = (B != 0) ? rd.getBinary(B) : 0;
		out += K;
		decoded += K;
	}
	return rd.getByteLenRead();
}

}
}

#endif /* __VSENCODINGNAIVE_HPP__ */
