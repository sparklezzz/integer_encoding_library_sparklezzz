/*
 * simd_kvint_iu_pack.hpp
 *
 *  Created on: 2013-6-2
 *      Author: zxd
 */

#ifndef SIMD_KVINT_IU_PACK_HPP_
#define SIMD_KVINT_IU_PACK_HPP_

#ifdef USE_SSE_INSTRUCTION

namespace paradise {
namespace index {

struct KVIntIUPackInfo{
	void (*m_subFunc)(uint32_t *des, const uint32_t *src);
	int m_codewordNum;
	int m_intNum;
	bool m_valid;
};


static const struct kvint_iu_pack_and_0{
uint32_t a[4];
}kvint_iu_pack_and_0 __attribute__((aligned(16))) = {{0xff,0xff,0xff,0xff},};
static const struct kvint_iu_pack_and_1{
uint32_t a[4];
}kvint_iu_pack_and_1 __attribute__((aligned(16))) = {{0xffff,0xffff,0xffff,0xffff},};
static const struct kvint_iu_pack_and_2{
uint32_t a[4];
}kvint_iu_pack_and_2 __attribute__((aligned(16))) = {{0xffffff,0xffffff,0xffffff,0xffffff},};

template<typename T>
void simd_kvint_iu_pack_prepare() {
	__asm__(
			"movdqa %0,%%xmm0\n"
			"movdqa %1,%%xmm1\n"
			"movdqa %2,%%xmm2\n"
			::"m"(kvint_iu_pack_and_0.a[0]),"m"(kvint_iu_pack_and_1.a[0]),"m"(kvint_iu_pack_and_2.a[0])
			:"memory");
}

template<typename T>
void simd_kvint_iu_pack_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqu %7,%%xmm8\n"
			"movdqu %8,%%xmm9\n"
			"movdqu %9,%%xmm10\n"
			"movdqa %%xmm3,%%xmm11\n"
			"pand %%xmm0,%%xmm11\n"
			"movdqa %%xmm4,%%xmm12\n"
			"pand %%xmm0,%%xmm12\n"
			"pslld $8,%%xmm12\n"
			"por %%xmm12,%%xmm11\n"
			"movdqa %%xmm5,%%xmm12\n"
			"pand %%xmm0,%%xmm12\n"
			"pslld $16,%%xmm12\n"
			"por %%xmm12,%%xmm11\n"
			"movdqa %%xmm6,%%xmm12\n"
			"pslld $24,%%xmm12\n"
			"por %%xmm12,%%xmm11\n"
			"movdqu %%xmm11,%0\n"
			"movdqa %%xmm7,%%xmm11\n"
			"pand %%xmm0,%%xmm11\n"
			"movdqa %%xmm8,%%xmm12\n"
			"pand %%xmm0,%%xmm12\n"
			"pslld $8,%%xmm12\n"
			"por %%xmm12,%%xmm11\n"
			"movdqa %%xmm9,%%xmm12\n"
			"pand %%xmm0,%%xmm12\n"
			"pslld $16,%%xmm12\n"
			"por %%xmm12,%%xmm11\n"
			"movdqa %%xmm10,%%xmm12\n"
			"pslld $24,%%xmm12\n"
			"por %%xmm12,%%xmm11\n"
			"movdqu %%xmm11,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16]),"m"(src[20]),"m"(src[24]),"m"(src[28])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqu %7,%%xmm8\n"
			"movdqu %8,%%xmm9\n"
			"movdqa %%xmm3,%%xmm10\n"
			"pand %%xmm1,%%xmm10\n"
			"movdqa %%xmm4,%%xmm11\n"
			"pand %%xmm0,%%xmm11\n"
			"pslld $16,%%xmm11\n"
			"por %%xmm11,%%xmm10\n"
			"movdqa %%xmm5,%%xmm11\n"
			"pslld $24,%%xmm11\n"
			"por %%xmm11,%%xmm10\n"
			"movdqu %%xmm10,%0\n"
			"movdqa %%xmm6,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"movdqa %%xmm7,%%xmm11\n"
			"pand %%xmm0,%%xmm11\n"
			"pslld $8,%%xmm11\n"
			"por %%xmm11,%%xmm10\n"
			"movdqa %%xmm8,%%xmm11\n"
			"pand %%xmm0,%%xmm11\n"
			"pslld $16,%%xmm11\n"
			"por %%xmm11,%%xmm10\n"
			"movdqa %%xmm9,%%xmm11\n"
			"pslld $24,%%xmm11\n"
			"por %%xmm11,%%xmm10\n"
			"movdqu %%xmm10,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16]),"m"(src[20]),"m"(src[24])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqu %7,%%xmm8\n"
			"movdqu %8,%%xmm9\n"
			"movdqa %%xmm3,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"movdqa %%xmm4,%%xmm11\n"
			"pand %%xmm1,%%xmm11\n"
			"pslld $8,%%xmm11\n"
			"por %%xmm11,%%xmm10\n"
			"movdqa %%xmm5,%%xmm11\n"
			"pslld $24,%%xmm11\n"
			"por %%xmm11,%%xmm10\n"
			"movdqu %%xmm10,%0\n"
			"movdqa %%xmm6,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"movdqa %%xmm7,%%xmm11\n"
			"pand %%xmm0,%%xmm11\n"
			"pslld $8,%%xmm11\n"
			"por %%xmm11,%%xmm10\n"
			"movdqa %%xmm8,%%xmm11\n"
			"pand %%xmm0,%%xmm11\n"
			"pslld $16,%%xmm11\n"
			"por %%xmm11,%%xmm10\n"
			"movdqa %%xmm9,%%xmm11\n"
			"pslld $24,%%xmm11\n"
			"por %%xmm11,%%xmm10\n"
			"movdqu %%xmm10,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16]),"m"(src[20]),"m"(src[24])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqu %7,%%xmm8\n"
			"movdqa %%xmm3,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqa %%xmm4,%%xmm10\n"
			"pslld $24,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqa %%xmm6,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $8,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm7,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $16,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm8,%%xmm10\n"
			"pslld $24,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16]),"m"(src[20])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_4(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqu %7,%%xmm8\n"
			"movdqu %8,%%xmm9\n"
			"movdqa %%xmm3,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"movdqa %%xmm4,%%xmm11\n"
			"pand %%xmm0,%%xmm11\n"
			"pslld $8,%%xmm11\n"
			"por %%xmm11,%%xmm10\n"
			"movdqa %%xmm5,%%xmm11\n"
			"pslld $16,%%xmm11\n"
			"por %%xmm11,%%xmm10\n"
			"movdqu %%xmm10,%0\n"
			"movdqa %%xmm6,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"movdqa %%xmm7,%%xmm11\n"
			"pand %%xmm0,%%xmm11\n"
			"pslld $8,%%xmm11\n"
			"por %%xmm11,%%xmm10\n"
			"movdqa %%xmm8,%%xmm11\n"
			"pand %%xmm0,%%xmm11\n"
			"pslld $16,%%xmm11\n"
			"por %%xmm11,%%xmm10\n"
			"movdqa %%xmm9,%%xmm11\n"
			"pslld $24,%%xmm11\n"
			"por %%xmm11,%%xmm10\n"
			"movdqu %%xmm10,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16]),"m"(src[20]),"m"(src[24])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_5(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqu %7,%%xmm8\n"
			"movdqa %%xmm3,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqa %%xmm4,%%xmm10\n"
			"pslld $16,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqa %%xmm6,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $8,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm7,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $16,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm8,%%xmm10\n"
			"pslld $24,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16]),"m"(src[20])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_6(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqu %7,%%xmm8\n"
			"movdqa %%xmm3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqa %%xmm4,%%xmm10\n"
			"pslld $8,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqa %%xmm6,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $8,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm7,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $16,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm8,%%xmm10\n"
			"pslld $24,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16]),"m"(src[20])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_7(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_8(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqu %7,%%xmm8\n"
			"movdqu %8,%%xmm9\n"
			"movdqa %%xmm3,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"movdqa %%xmm4,%%xmm11\n"
			"pand %%xmm0,%%xmm11\n"
			"pslld $8,%%xmm11\n"
			"por %%xmm11,%%xmm10\n"
			"movdqa %%xmm5,%%xmm11\n"
			"pand %%xmm0,%%xmm11\n"
			"pslld $16,%%xmm11\n"
			"por %%xmm11,%%xmm10\n"
			"movdqa %%xmm6,%%xmm11\n"
			"pslld $24,%%xmm11\n"
			"por %%xmm11,%%xmm10\n"
			"movdqu %%xmm10,%0\n"
			"movdqa %%xmm6,%%xmm10\n"
			"pand %%xmm1,%%xmm10\n"
			"psrld $8,%%xmm10\n"
			"movdqa %%xmm7,%%xmm11\n"
			"pand %%xmm0,%%xmm11\n"
			"pslld $8,%%xmm11\n"
			"por %%xmm11,%%xmm10\n"
			"movdqa %%xmm8,%%xmm11\n"
			"pand %%xmm0,%%xmm11\n"
			"pslld $16,%%xmm11\n"
			"por %%xmm11,%%xmm10\n"
			"movdqa %%xmm9,%%xmm11\n"
			"pslld $24,%%xmm11\n"
			"por %%xmm11,%%xmm10\n"
			"movdqu %%xmm10,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16]),"m"(src[20]),"m"(src[24])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_9(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqu %7,%%xmm8\n"
			"movdqa %%xmm3,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqa %%xmm4,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $16,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm5,%%xmm10\n"
			"pslld $24,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"psrld $8,%%xmm9\n"
			"movdqa %%xmm6,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $8,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm7,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $16,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm8,%%xmm10\n"
			"pslld $24,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16]),"m"(src[20])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_10(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqu %7,%%xmm8\n"
			"movdqa %%xmm3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqa %%xmm4,%%xmm10\n"
			"pand %%xmm1,%%xmm10\n"
			"pslld $8,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm5,%%xmm10\n"
			"pslld $24,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"psrld $8,%%xmm9\n"
			"movdqa %%xmm6,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $8,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm7,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $16,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm8,%%xmm10\n"
			"pslld $24,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16]),"m"(src[20])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_11(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_12(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqu %7,%%xmm8\n"
			"movdqa %%xmm3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqa %%xmm4,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $8,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm5,%%xmm10\n"
			"pslld $16,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"psrld $16,%%xmm9\n"
			"movdqa %%xmm6,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $8,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm7,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $16,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm8,%%xmm10\n"
			"pslld $24,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16]),"m"(src[20])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_13(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_14(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_15(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_iu_pack_16(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqu %7,%%xmm8\n"
			"movdqu %8,%%xmm9\n"
			"movdqa %%xmm3,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"movdqa %%xmm4,%%xmm11\n"
			"pand %%xmm0,%%xmm11\n"
			"pslld $8,%%xmm11\n"
			"por %%xmm11,%%xmm10\n"
			"movdqa %%xmm5,%%xmm11\n"
			"pand %%xmm0,%%xmm11\n"
			"pslld $16,%%xmm11\n"
			"por %%xmm11,%%xmm10\n"
			"movdqa %%xmm6,%%xmm11\n"
			"pslld $24,%%xmm11\n"
			"por %%xmm11,%%xmm10\n"
			"movdqu %%xmm10,%0\n"
			"movdqa %%xmm7,%%xmm10\n"
			"pand %%xmm1,%%xmm10\n"
			"movdqa %%xmm8,%%xmm11\n"
			"pand %%xmm0,%%xmm11\n"
			"pslld $16,%%xmm11\n"
			"por %%xmm11,%%xmm10\n"
			"movdqa %%xmm9,%%xmm11\n"
			"pslld $24,%%xmm11\n"
			"por %%xmm11,%%xmm10\n"
			"movdqu %%xmm10,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16]),"m"(src[20]),"m"(src[24])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_17(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqu %7,%%xmm8\n"
			"movdqa %%xmm3,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqa %%xmm4,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $16,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm5,%%xmm10\n"
			"pslld $24,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqa %%xmm7,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $16,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm8,%%xmm10\n"
			"pslld $24,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16]),"m"(src[20])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_18(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqu %7,%%xmm8\n"
			"movdqa %%xmm3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqa %%xmm4,%%xmm10\n"
			"pand %%xmm1,%%xmm10\n"
			"pslld $8,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm5,%%xmm10\n"
			"pslld $24,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqa %%xmm7,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $16,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm8,%%xmm10\n"
			"pslld $24,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16]),"m"(src[20])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_19(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_20(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqu %7,%%xmm8\n"
			"movdqa %%xmm3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqa %%xmm4,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $8,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm5,%%xmm10\n"
			"pslld $16,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqa %%xmm7,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $16,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm8,%%xmm10\n"
			"pslld $24,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16]),"m"(src[20])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_21(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_22(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_23(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_24(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqu %7,%%xmm8\n"
			"movdqa %%xmm3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqa %%xmm4,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $8,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm5,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $16,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm6,%%xmm10\n"
			"pslld $24,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"psrld $8,%%xmm9\n"
			"movdqa %%xmm7,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $16,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm8,%%xmm10\n"
			"pslld $24,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16]),"m"(src[20])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_25(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_26(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_27(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_28(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_29(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_30(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_iu_pack_31(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_iu_pack_32(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqu %7,%%xmm8\n"
			"movdqu %8,%%xmm9\n"
			"movdqa %%xmm3,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"movdqa %%xmm4,%%xmm11\n"
			"pand %%xmm0,%%xmm11\n"
			"pslld $8,%%xmm11\n"
			"por %%xmm11,%%xmm10\n"
			"movdqa %%xmm5,%%xmm11\n"
			"pand %%xmm0,%%xmm11\n"
			"pslld $16,%%xmm11\n"
			"por %%xmm11,%%xmm10\n"
			"movdqa %%xmm6,%%xmm11\n"
			"pslld $24,%%xmm11\n"
			"por %%xmm11,%%xmm10\n"
			"movdqu %%xmm10,%0\n"
			"movdqa %%xmm7,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"movdqa %%xmm8,%%xmm11\n"
			"pand %%xmm1,%%xmm11\n"
			"pslld $8,%%xmm11\n"
			"por %%xmm11,%%xmm10\n"
			"movdqa %%xmm9,%%xmm11\n"
			"pslld $24,%%xmm11\n"
			"por %%xmm11,%%xmm10\n"
			"movdqu %%xmm10,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16]),"m"(src[20]),"m"(src[24])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_33(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqu %7,%%xmm8\n"
			"movdqa %%xmm3,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqa %%xmm4,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $16,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm5,%%xmm10\n"
			"pslld $24,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqa %%xmm7,%%xmm10\n"
			"pand %%xmm1,%%xmm10\n"
			"pslld $8,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm8,%%xmm10\n"
			"pslld $24,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16]),"m"(src[20])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_34(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqu %7,%%xmm8\n"
			"movdqa %%xmm3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqa %%xmm4,%%xmm10\n"
			"pand %%xmm1,%%xmm10\n"
			"pslld $8,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm5,%%xmm10\n"
			"pslld $24,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqa %%xmm7,%%xmm10\n"
			"pand %%xmm1,%%xmm10\n"
			"pslld $8,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm8,%%xmm10\n"
			"pslld $24,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16]),"m"(src[20])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_35(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_36(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqu %7,%%xmm8\n"
			"movdqa %%xmm3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqa %%xmm4,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $8,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm5,%%xmm10\n"
			"pslld $16,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqa %%xmm7,%%xmm10\n"
			"pand %%xmm1,%%xmm10\n"
			"pslld $8,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm8,%%xmm10\n"
			"pslld $24,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16]),"m"(src[20])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_37(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_38(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_39(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_40(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqu %7,%%xmm8\n"
			"movdqa %%xmm3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqa %%xmm4,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $8,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm5,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $16,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm6,%%xmm10\n"
			"pslld $24,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"psrld $8,%%xmm9\n"
			"movdqa %%xmm7,%%xmm10\n"
			"pand %%xmm1,%%xmm10\n"
			"pslld $8,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm8,%%xmm10\n"
			"pslld $24,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16]),"m"(src[20])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_41(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_42(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_43(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_44(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_45(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_46(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_47(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_iu_pack_48(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqu %7,%%xmm8\n"
			"movdqa %%xmm3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqa %%xmm4,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $8,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm5,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $16,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm6,%%xmm10\n"
			"pslld $24,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqa %%xmm8,%%xmm10\n"
			"pslld $24,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16]),"m"(src[20])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_49(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_50(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_51(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_52(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_53(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_54(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_55(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_56(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_57(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_58(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_59(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_60(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_iu_pack_61(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_iu_pack_62(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_iu_pack_63(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_iu_pack_64(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqu %7,%%xmm8\n"
			"movdqu %8,%%xmm9\n"
			"movdqa %%xmm3,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"movdqa %%xmm4,%%xmm11\n"
			"pand %%xmm0,%%xmm11\n"
			"pslld $8,%%xmm11\n"
			"por %%xmm11,%%xmm10\n"
			"movdqa %%xmm5,%%xmm11\n"
			"pand %%xmm0,%%xmm11\n"
			"pslld $16,%%xmm11\n"
			"por %%xmm11,%%xmm10\n"
			"movdqa %%xmm6,%%xmm11\n"
			"pslld $24,%%xmm11\n"
			"por %%xmm11,%%xmm10\n"
			"movdqu %%xmm10,%0\n"
			"movdqa %%xmm7,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"movdqa %%xmm8,%%xmm11\n"
			"pand %%xmm0,%%xmm11\n"
			"pslld $8,%%xmm11\n"
			"por %%xmm11,%%xmm10\n"
			"movdqa %%xmm9,%%xmm11\n"
			"pslld $16,%%xmm11\n"
			"por %%xmm11,%%xmm10\n"
			"movdqu %%xmm10,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16]),"m"(src[20]),"m"(src[24])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_65(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqu %7,%%xmm8\n"
			"movdqa %%xmm3,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqa %%xmm4,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $16,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm5,%%xmm10\n"
			"pslld $24,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqa %%xmm7,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $8,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm8,%%xmm10\n"
			"pslld $16,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16]),"m"(src[20])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_66(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqu %7,%%xmm8\n"
			"movdqa %%xmm3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqa %%xmm4,%%xmm10\n"
			"pand %%xmm1,%%xmm10\n"
			"pslld $8,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm5,%%xmm10\n"
			"pslld $24,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqa %%xmm7,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $8,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm8,%%xmm10\n"
			"pslld $16,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16]),"m"(src[20])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_67(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_68(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqu %7,%%xmm8\n"
			"movdqa %%xmm3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqa %%xmm4,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $8,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm5,%%xmm10\n"
			"pslld $16,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqa %%xmm7,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $8,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm8,%%xmm10\n"
			"pslld $16,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16]),"m"(src[20])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_69(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_70(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_71(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_72(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqu %7,%%xmm8\n"
			"movdqa %%xmm3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqa %%xmm4,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $8,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm5,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $16,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm6,%%xmm10\n"
			"pslld $24,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"psrld $8,%%xmm9\n"
			"movdqa %%xmm7,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $8,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm8,%%xmm10\n"
			"pslld $16,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16]),"m"(src[20])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_73(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_74(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_75(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_76(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_77(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_78(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_79(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_iu_pack_80(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqu %7,%%xmm8\n"
			"movdqa %%xmm3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqa %%xmm4,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $8,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm5,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $16,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm6,%%xmm10\n"
			"pslld $24,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqa %%xmm8,%%xmm10\n"
			"pslld $16,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16]),"m"(src[20])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_81(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_82(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_83(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_84(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_85(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_86(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_87(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_88(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_89(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_90(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_91(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_92(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_93(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_94(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_iu_pack_95(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_iu_pack_96(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqu %7,%%xmm8\n"
			"movdqa %%xmm3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqa %%xmm4,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $8,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm5,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $16,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm6,%%xmm10\n"
			"pslld $24,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqa %%xmm8,%%xmm10\n"
			"pslld $8,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16]),"m"(src[20])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_97(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_98(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_99(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_100(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_101(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_102(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_103(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_104(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_105(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_106(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_107(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_108(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_109(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_110(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_111(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_iu_pack_112(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_113(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm6,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_114(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm6,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_115(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm5,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_116(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm6,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_117(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm5,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_118(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm5,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_119(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm4,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_120(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_iu_pack_121(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_iu_pack_122(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_iu_pack_123(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_iu_pack_124(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_iu_pack_125(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_iu_pack_126(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_iu_pack_127(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_iu_pack_128(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqu %7,%%xmm8\n"
			"movdqu %8,%%xmm9\n"
			"movdqa %%xmm3,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"movdqa %%xmm4,%%xmm11\n"
			"pand %%xmm0,%%xmm11\n"
			"pslld $8,%%xmm11\n"
			"por %%xmm11,%%xmm10\n"
			"movdqa %%xmm5,%%xmm11\n"
			"pand %%xmm0,%%xmm11\n"
			"pslld $16,%%xmm11\n"
			"por %%xmm11,%%xmm10\n"
			"movdqa %%xmm6,%%xmm11\n"
			"pslld $24,%%xmm11\n"
			"por %%xmm11,%%xmm10\n"
			"movdqu %%xmm10,%0\n"
			"movdqa %%xmm7,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"movdqa %%xmm8,%%xmm11\n"
			"pand %%xmm0,%%xmm11\n"
			"pslld $8,%%xmm11\n"
			"por %%xmm11,%%xmm10\n"
			"movdqa %%xmm9,%%xmm11\n"
			"pand %%xmm0,%%xmm11\n"
			"pslld $16,%%xmm11\n"
			"por %%xmm11,%%xmm10\n"
			"movdqu %%xmm10,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16]),"m"(src[20]),"m"(src[24])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_129(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqu %7,%%xmm8\n"
			"movdqa %%xmm3,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqa %%xmm4,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $16,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm5,%%xmm10\n"
			"pslld $24,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqa %%xmm7,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $8,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm8,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $16,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16]),"m"(src[20])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_130(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqu %7,%%xmm8\n"
			"movdqa %%xmm3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqa %%xmm4,%%xmm10\n"
			"pand %%xmm1,%%xmm10\n"
			"pslld $8,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm5,%%xmm10\n"
			"pslld $24,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqa %%xmm7,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $8,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm8,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $16,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16]),"m"(src[20])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_131(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_132(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqu %7,%%xmm8\n"
			"movdqa %%xmm3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqa %%xmm4,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $8,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm5,%%xmm10\n"
			"pslld $16,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqa %%xmm7,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $8,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm8,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $16,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16]),"m"(src[20])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_133(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_134(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_135(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_136(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqu %7,%%xmm8\n"
			"movdqa %%xmm3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqa %%xmm4,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $8,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm5,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $16,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm6,%%xmm10\n"
			"pslld $24,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"psrld $8,%%xmm9\n"
			"movdqa %%xmm7,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $8,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm8,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $16,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16]),"m"(src[20])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_137(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_138(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_139(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_140(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_141(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_142(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_143(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_iu_pack_144(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqu %7,%%xmm8\n"
			"movdqa %%xmm3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqa %%xmm4,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $8,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm5,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $16,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm6,%%xmm10\n"
			"pslld $24,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqa %%xmm8,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $16,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16]),"m"(src[20])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_145(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_146(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_147(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_148(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_149(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_150(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_151(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_152(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_153(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_154(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_155(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_156(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_157(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_158(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_iu_pack_159(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_iu_pack_160(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqu %7,%%xmm8\n"
			"movdqa %%xmm3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqa %%xmm4,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $8,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm5,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $16,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm6,%%xmm10\n"
			"pslld $24,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqa %%xmm8,%%xmm10\n"
			"pand %%xmm1,%%xmm10\n"
			"pslld $8,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16]),"m"(src[20])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_161(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_162(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_163(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_164(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_165(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_166(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_167(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_168(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_169(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_170(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_171(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_172(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_173(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_174(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_175(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_iu_pack_176(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_177(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_178(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_179(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_180(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_181(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_182(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_183(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_184(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm6,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_185(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_186(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_187(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pslld $24,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_188(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_iu_pack_189(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_iu_pack_190(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_iu_pack_191(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_iu_pack_192(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqu %7,%%xmm8\n"
			"movdqa %%xmm3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqa %%xmm4,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $8,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm5,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $16,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqa %%xmm6,%%xmm10\n"
			"pslld $24,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqa %%xmm8,%%xmm10\n"
			"pand %%xmm0,%%xmm10\n"
			"pslld $8,%%xmm10\n"
			"por %%xmm10,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16]),"m"(src[20])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_193(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_194(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_195(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_196(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_197(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_198(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_199(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_200(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_201(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_202(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_203(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_204(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_205(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_206(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_207(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_iu_pack_208(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_209(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_210(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_211(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_212(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_213(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_214(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_215(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_216(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_217(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_218(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_219(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pslld $24,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_220(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_221(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pslld $16,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_222(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_iu_pack_223(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_iu_pack_224(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_225(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_226(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_227(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_228(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_229(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_230(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_231(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_232(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqu %5,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_233(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_234(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_235(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pslld $24,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_236(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_237(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pslld $16,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_238(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_239(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_iu_pack_240(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm3\n"
			"movdqu %2,%%xmm4\n"
			"movdqu %3,%%xmm5\n"
			"movdqu %4,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_241(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm3\n"
			"movdqu %2,%%xmm4\n"
			"movdqu %3,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_242(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm3\n"
			"movdqu %2,%%xmm4\n"
			"movdqu %3,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_243(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm3\n"
			"movdqu %2,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pslld $24,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_244(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm3\n"
			"movdqu %2,%%xmm4\n"
			"movdqu %3,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_245(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm3\n"
			"movdqu %2,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pslld $16,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_246(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm3\n"
			"movdqu %2,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_247(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm3\n"
			"movdqa %%xmm3,%%xmm4\n"
			"movdqu %%xmm4,%0\n"
			:"=m"(des[0])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_248(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm3\n"
			"movdqu %2,%%xmm4\n"
			"movdqu %3,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_249(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm3\n"
			"movdqu %2,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"pslld $16,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_250(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm3\n"
			"movdqu %2,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_251(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm3\n"
			"movdqa %%xmm3,%%xmm4\n"
			"pand %%xmm2,%%xmm4\n"
			"movdqu %%xmm4,%0\n"
			:"=m"(des[0])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_252(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm3\n"
			"movdqu %2,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_253(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm3\n"
			"movdqa %%xmm3,%%xmm4\n"
			"pand %%xmm1,%%xmm4\n"
			"movdqu %%xmm4,%0\n"
			:"=m"(des[0])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_254(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm3\n"
			"movdqa %%xmm3,%%xmm4\n"
			"pand %%xmm0,%%xmm4\n"
			"movdqu %%xmm4,%0\n"
			:"=m"(des[0])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kvint_iu_pack_255(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}

static KVIntIUPackInfo KVIntIUPackInfo_0 = { simd_kvint_iu_pack_0<uint32_t>, 8, 32, true };
static KVIntIUPackInfo KVIntIUPackInfo_1 = { simd_kvint_iu_pack_1<uint32_t>, 8, 28, true };
static KVIntIUPackInfo KVIntIUPackInfo_2 = { simd_kvint_iu_pack_2<uint32_t>, 8, 28, true };
static KVIntIUPackInfo KVIntIUPackInfo_3 = { simd_kvint_iu_pack_3<uint32_t>, 8, 24, true };
static KVIntIUPackInfo KVIntIUPackInfo_4 = { simd_kvint_iu_pack_4<uint32_t>, 8, 28, true };
static KVIntIUPackInfo KVIntIUPackInfo_5 = { simd_kvint_iu_pack_5<uint32_t>, 8, 24, true };
static KVIntIUPackInfo KVIntIUPackInfo_6 = { simd_kvint_iu_pack_6<uint32_t>, 8, 24, true };
static KVIntIUPackInfo KVIntIUPackInfo_7 = { simd_kvint_iu_pack_7<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_8 = { simd_kvint_iu_pack_8<uint32_t>, 8, 28, true };
static KVIntIUPackInfo KVIntIUPackInfo_9 = { simd_kvint_iu_pack_9<uint32_t>, 8, 24, true };
static KVIntIUPackInfo KVIntIUPackInfo_10 = { simd_kvint_iu_pack_10<uint32_t>, 8, 24, true };
static KVIntIUPackInfo KVIntIUPackInfo_11 = { simd_kvint_iu_pack_11<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_12 = { simd_kvint_iu_pack_12<uint32_t>, 8, 24, true };
static KVIntIUPackInfo KVIntIUPackInfo_13 = { simd_kvint_iu_pack_13<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_14 = { simd_kvint_iu_pack_14<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_15 = { simd_kvint_iu_pack_15<uint32_t>, 0, 0, false };
static KVIntIUPackInfo KVIntIUPackInfo_16 = { simd_kvint_iu_pack_16<uint32_t>, 8, 28, true };
static KVIntIUPackInfo KVIntIUPackInfo_17 = { simd_kvint_iu_pack_17<uint32_t>, 8, 24, true };
static KVIntIUPackInfo KVIntIUPackInfo_18 = { simd_kvint_iu_pack_18<uint32_t>, 8, 24, true };
static KVIntIUPackInfo KVIntIUPackInfo_19 = { simd_kvint_iu_pack_19<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_20 = { simd_kvint_iu_pack_20<uint32_t>, 8, 24, true };
static KVIntIUPackInfo KVIntIUPackInfo_21 = { simd_kvint_iu_pack_21<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_22 = { simd_kvint_iu_pack_22<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_23 = { simd_kvint_iu_pack_23<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_24 = { simd_kvint_iu_pack_24<uint32_t>, 8, 24, true };
static KVIntIUPackInfo KVIntIUPackInfo_25 = { simd_kvint_iu_pack_25<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_26 = { simd_kvint_iu_pack_26<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_27 = { simd_kvint_iu_pack_27<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_28 = { simd_kvint_iu_pack_28<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_29 = { simd_kvint_iu_pack_29<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_30 = { simd_kvint_iu_pack_30<uint32_t>, 0, 0, false };
static KVIntIUPackInfo KVIntIUPackInfo_31 = { simd_kvint_iu_pack_31<uint32_t>, 0, 0, false };
static KVIntIUPackInfo KVIntIUPackInfo_32 = { simd_kvint_iu_pack_32<uint32_t>, 8, 28, true };
static KVIntIUPackInfo KVIntIUPackInfo_33 = { simd_kvint_iu_pack_33<uint32_t>, 8, 24, true };
static KVIntIUPackInfo KVIntIUPackInfo_34 = { simd_kvint_iu_pack_34<uint32_t>, 8, 24, true };
static KVIntIUPackInfo KVIntIUPackInfo_35 = { simd_kvint_iu_pack_35<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_36 = { simd_kvint_iu_pack_36<uint32_t>, 8, 24, true };
static KVIntIUPackInfo KVIntIUPackInfo_37 = { simd_kvint_iu_pack_37<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_38 = { simd_kvint_iu_pack_38<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_39 = { simd_kvint_iu_pack_39<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_40 = { simd_kvint_iu_pack_40<uint32_t>, 8, 24, true };
static KVIntIUPackInfo KVIntIUPackInfo_41 = { simd_kvint_iu_pack_41<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_42 = { simd_kvint_iu_pack_42<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_43 = { simd_kvint_iu_pack_43<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_44 = { simd_kvint_iu_pack_44<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_45 = { simd_kvint_iu_pack_45<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_46 = { simd_kvint_iu_pack_46<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_47 = { simd_kvint_iu_pack_47<uint32_t>, 0, 0, false };
static KVIntIUPackInfo KVIntIUPackInfo_48 = { simd_kvint_iu_pack_48<uint32_t>, 8, 24, true };
static KVIntIUPackInfo KVIntIUPackInfo_49 = { simd_kvint_iu_pack_49<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_50 = { simd_kvint_iu_pack_50<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_51 = { simd_kvint_iu_pack_51<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_52 = { simd_kvint_iu_pack_52<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_53 = { simd_kvint_iu_pack_53<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_54 = { simd_kvint_iu_pack_54<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_55 = { simd_kvint_iu_pack_55<uint32_t>, 8, 12, true };
static KVIntIUPackInfo KVIntIUPackInfo_56 = { simd_kvint_iu_pack_56<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_57 = { simd_kvint_iu_pack_57<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_58 = { simd_kvint_iu_pack_58<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_59 = { simd_kvint_iu_pack_59<uint32_t>, 8, 12, true };
static KVIntIUPackInfo KVIntIUPackInfo_60 = { simd_kvint_iu_pack_60<uint32_t>, 0, 0, false };
static KVIntIUPackInfo KVIntIUPackInfo_61 = { simd_kvint_iu_pack_61<uint32_t>, 0, 0, false };
static KVIntIUPackInfo KVIntIUPackInfo_62 = { simd_kvint_iu_pack_62<uint32_t>, 0, 0, false };
static KVIntIUPackInfo KVIntIUPackInfo_63 = { simd_kvint_iu_pack_63<uint32_t>, 0, 0, false };
static KVIntIUPackInfo KVIntIUPackInfo_64 = { simd_kvint_iu_pack_64<uint32_t>, 8, 28, true };
static KVIntIUPackInfo KVIntIUPackInfo_65 = { simd_kvint_iu_pack_65<uint32_t>, 8, 24, true };
static KVIntIUPackInfo KVIntIUPackInfo_66 = { simd_kvint_iu_pack_66<uint32_t>, 8, 24, true };
static KVIntIUPackInfo KVIntIUPackInfo_67 = { simd_kvint_iu_pack_67<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_68 = { simd_kvint_iu_pack_68<uint32_t>, 8, 24, true };
static KVIntIUPackInfo KVIntIUPackInfo_69 = { simd_kvint_iu_pack_69<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_70 = { simd_kvint_iu_pack_70<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_71 = { simd_kvint_iu_pack_71<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_72 = { simd_kvint_iu_pack_72<uint32_t>, 8, 24, true };
static KVIntIUPackInfo KVIntIUPackInfo_73 = { simd_kvint_iu_pack_73<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_74 = { simd_kvint_iu_pack_74<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_75 = { simd_kvint_iu_pack_75<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_76 = { simd_kvint_iu_pack_76<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_77 = { simd_kvint_iu_pack_77<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_78 = { simd_kvint_iu_pack_78<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_79 = { simd_kvint_iu_pack_79<uint32_t>, 0, 0, false };
static KVIntIUPackInfo KVIntIUPackInfo_80 = { simd_kvint_iu_pack_80<uint32_t>, 8, 24, true };
static KVIntIUPackInfo KVIntIUPackInfo_81 = { simd_kvint_iu_pack_81<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_82 = { simd_kvint_iu_pack_82<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_83 = { simd_kvint_iu_pack_83<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_84 = { simd_kvint_iu_pack_84<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_85 = { simd_kvint_iu_pack_85<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_86 = { simd_kvint_iu_pack_86<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_87 = { simd_kvint_iu_pack_87<uint32_t>, 8, 12, true };
static KVIntIUPackInfo KVIntIUPackInfo_88 = { simd_kvint_iu_pack_88<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_89 = { simd_kvint_iu_pack_89<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_90 = { simd_kvint_iu_pack_90<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_91 = { simd_kvint_iu_pack_91<uint32_t>, 8, 12, true };
static KVIntIUPackInfo KVIntIUPackInfo_92 = { simd_kvint_iu_pack_92<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_93 = { simd_kvint_iu_pack_93<uint32_t>, 8, 12, true };
static KVIntIUPackInfo KVIntIUPackInfo_94 = { simd_kvint_iu_pack_94<uint32_t>, 0, 0, false };
static KVIntIUPackInfo KVIntIUPackInfo_95 = { simd_kvint_iu_pack_95<uint32_t>, 0, 0, false };
static KVIntIUPackInfo KVIntIUPackInfo_96 = { simd_kvint_iu_pack_96<uint32_t>, 8, 24, true };
static KVIntIUPackInfo KVIntIUPackInfo_97 = { simd_kvint_iu_pack_97<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_98 = { simd_kvint_iu_pack_98<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_99 = { simd_kvint_iu_pack_99<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_100 = { simd_kvint_iu_pack_100<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_101 = { simd_kvint_iu_pack_101<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_102 = { simd_kvint_iu_pack_102<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_103 = { simd_kvint_iu_pack_103<uint32_t>, 8, 12, true };
static KVIntIUPackInfo KVIntIUPackInfo_104 = { simd_kvint_iu_pack_104<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_105 = { simd_kvint_iu_pack_105<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_106 = { simd_kvint_iu_pack_106<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_107 = { simd_kvint_iu_pack_107<uint32_t>, 8, 12, true };
static KVIntIUPackInfo KVIntIUPackInfo_108 = { simd_kvint_iu_pack_108<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_109 = { simd_kvint_iu_pack_109<uint32_t>, 8, 12, true };
static KVIntIUPackInfo KVIntIUPackInfo_110 = { simd_kvint_iu_pack_110<uint32_t>, 8, 12, true };
static KVIntIUPackInfo KVIntIUPackInfo_111 = { simd_kvint_iu_pack_111<uint32_t>, 0, 0, false };
static KVIntIUPackInfo KVIntIUPackInfo_112 = { simd_kvint_iu_pack_112<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_113 = { simd_kvint_iu_pack_113<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_114 = { simd_kvint_iu_pack_114<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_115 = { simd_kvint_iu_pack_115<uint32_t>, 8, 12, true };
static KVIntIUPackInfo KVIntIUPackInfo_116 = { simd_kvint_iu_pack_116<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_117 = { simd_kvint_iu_pack_117<uint32_t>, 8, 12, true };
static KVIntIUPackInfo KVIntIUPackInfo_118 = { simd_kvint_iu_pack_118<uint32_t>, 8, 12, true };
static KVIntIUPackInfo KVIntIUPackInfo_119 = { simd_kvint_iu_pack_119<uint32_t>, 8, 8, true };
static KVIntIUPackInfo KVIntIUPackInfo_120 = { simd_kvint_iu_pack_120<uint32_t>, 0, 0, false };
static KVIntIUPackInfo KVIntIUPackInfo_121 = { simd_kvint_iu_pack_121<uint32_t>, 0, 0, false };
static KVIntIUPackInfo KVIntIUPackInfo_122 = { simd_kvint_iu_pack_122<uint32_t>, 0, 0, false };
static KVIntIUPackInfo KVIntIUPackInfo_123 = { simd_kvint_iu_pack_123<uint32_t>, 0, 0, false };
static KVIntIUPackInfo KVIntIUPackInfo_124 = { simd_kvint_iu_pack_124<uint32_t>, 0, 0, false };
static KVIntIUPackInfo KVIntIUPackInfo_125 = { simd_kvint_iu_pack_125<uint32_t>, 0, 0, false };
static KVIntIUPackInfo KVIntIUPackInfo_126 = { simd_kvint_iu_pack_126<uint32_t>, 0, 0, false };
static KVIntIUPackInfo KVIntIUPackInfo_127 = { simd_kvint_iu_pack_127<uint32_t>, 0, 0, false };
static KVIntIUPackInfo KVIntIUPackInfo_128 = { simd_kvint_iu_pack_128<uint32_t>, 8, 28, true };
static KVIntIUPackInfo KVIntIUPackInfo_129 = { simd_kvint_iu_pack_129<uint32_t>, 8, 24, true };
static KVIntIUPackInfo KVIntIUPackInfo_130 = { simd_kvint_iu_pack_130<uint32_t>, 8, 24, true };
static KVIntIUPackInfo KVIntIUPackInfo_131 = { simd_kvint_iu_pack_131<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_132 = { simd_kvint_iu_pack_132<uint32_t>, 8, 24, true };
static KVIntIUPackInfo KVIntIUPackInfo_133 = { simd_kvint_iu_pack_133<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_134 = { simd_kvint_iu_pack_134<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_135 = { simd_kvint_iu_pack_135<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_136 = { simd_kvint_iu_pack_136<uint32_t>, 8, 24, true };
static KVIntIUPackInfo KVIntIUPackInfo_137 = { simd_kvint_iu_pack_137<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_138 = { simd_kvint_iu_pack_138<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_139 = { simd_kvint_iu_pack_139<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_140 = { simd_kvint_iu_pack_140<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_141 = { simd_kvint_iu_pack_141<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_142 = { simd_kvint_iu_pack_142<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_143 = { simd_kvint_iu_pack_143<uint32_t>, 0, 0, false };
static KVIntIUPackInfo KVIntIUPackInfo_144 = { simd_kvint_iu_pack_144<uint32_t>, 8, 24, true };
static KVIntIUPackInfo KVIntIUPackInfo_145 = { simd_kvint_iu_pack_145<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_146 = { simd_kvint_iu_pack_146<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_147 = { simd_kvint_iu_pack_147<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_148 = { simd_kvint_iu_pack_148<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_149 = { simd_kvint_iu_pack_149<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_150 = { simd_kvint_iu_pack_150<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_151 = { simd_kvint_iu_pack_151<uint32_t>, 8, 12, true };
static KVIntIUPackInfo KVIntIUPackInfo_152 = { simd_kvint_iu_pack_152<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_153 = { simd_kvint_iu_pack_153<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_154 = { simd_kvint_iu_pack_154<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_155 = { simd_kvint_iu_pack_155<uint32_t>, 8, 12, true };
static KVIntIUPackInfo KVIntIUPackInfo_156 = { simd_kvint_iu_pack_156<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_157 = { simd_kvint_iu_pack_157<uint32_t>, 8, 12, true };
static KVIntIUPackInfo KVIntIUPackInfo_158 = { simd_kvint_iu_pack_158<uint32_t>, 0, 0, false };
static KVIntIUPackInfo KVIntIUPackInfo_159 = { simd_kvint_iu_pack_159<uint32_t>, 0, 0, false };
static KVIntIUPackInfo KVIntIUPackInfo_160 = { simd_kvint_iu_pack_160<uint32_t>, 8, 24, true };
static KVIntIUPackInfo KVIntIUPackInfo_161 = { simd_kvint_iu_pack_161<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_162 = { simd_kvint_iu_pack_162<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_163 = { simd_kvint_iu_pack_163<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_164 = { simd_kvint_iu_pack_164<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_165 = { simd_kvint_iu_pack_165<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_166 = { simd_kvint_iu_pack_166<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_167 = { simd_kvint_iu_pack_167<uint32_t>, 8, 12, true };
static KVIntIUPackInfo KVIntIUPackInfo_168 = { simd_kvint_iu_pack_168<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_169 = { simd_kvint_iu_pack_169<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_170 = { simd_kvint_iu_pack_170<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_171 = { simd_kvint_iu_pack_171<uint32_t>, 8, 12, true };
static KVIntIUPackInfo KVIntIUPackInfo_172 = { simd_kvint_iu_pack_172<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_173 = { simd_kvint_iu_pack_173<uint32_t>, 8, 12, true };
static KVIntIUPackInfo KVIntIUPackInfo_174 = { simd_kvint_iu_pack_174<uint32_t>, 8, 12, true };
static KVIntIUPackInfo KVIntIUPackInfo_175 = { simd_kvint_iu_pack_175<uint32_t>, 0, 0, false };
static KVIntIUPackInfo KVIntIUPackInfo_176 = { simd_kvint_iu_pack_176<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_177 = { simd_kvint_iu_pack_177<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_178 = { simd_kvint_iu_pack_178<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_179 = { simd_kvint_iu_pack_179<uint32_t>, 8, 12, true };
static KVIntIUPackInfo KVIntIUPackInfo_180 = { simd_kvint_iu_pack_180<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_181 = { simd_kvint_iu_pack_181<uint32_t>, 8, 12, true };
static KVIntIUPackInfo KVIntIUPackInfo_182 = { simd_kvint_iu_pack_182<uint32_t>, 8, 12, true };
static KVIntIUPackInfo KVIntIUPackInfo_183 = { simd_kvint_iu_pack_183<uint32_t>, 8, 8, true };
static KVIntIUPackInfo KVIntIUPackInfo_184 = { simd_kvint_iu_pack_184<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_185 = { simd_kvint_iu_pack_185<uint32_t>, 8, 12, true };
static KVIntIUPackInfo KVIntIUPackInfo_186 = { simd_kvint_iu_pack_186<uint32_t>, 8, 12, true };
static KVIntIUPackInfo KVIntIUPackInfo_187 = { simd_kvint_iu_pack_187<uint32_t>, 8, 8, true };
static KVIntIUPackInfo KVIntIUPackInfo_188 = { simd_kvint_iu_pack_188<uint32_t>, 0, 0, false };
static KVIntIUPackInfo KVIntIUPackInfo_189 = { simd_kvint_iu_pack_189<uint32_t>, 0, 0, false };
static KVIntIUPackInfo KVIntIUPackInfo_190 = { simd_kvint_iu_pack_190<uint32_t>, 0, 0, false };
static KVIntIUPackInfo KVIntIUPackInfo_191 = { simd_kvint_iu_pack_191<uint32_t>, 0, 0, false };
static KVIntIUPackInfo KVIntIUPackInfo_192 = { simd_kvint_iu_pack_192<uint32_t>, 8, 24, true };
static KVIntIUPackInfo KVIntIUPackInfo_193 = { simd_kvint_iu_pack_193<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_194 = { simd_kvint_iu_pack_194<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_195 = { simd_kvint_iu_pack_195<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_196 = { simd_kvint_iu_pack_196<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_197 = { simd_kvint_iu_pack_197<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_198 = { simd_kvint_iu_pack_198<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_199 = { simd_kvint_iu_pack_199<uint32_t>, 8, 12, true };
static KVIntIUPackInfo KVIntIUPackInfo_200 = { simd_kvint_iu_pack_200<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_201 = { simd_kvint_iu_pack_201<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_202 = { simd_kvint_iu_pack_202<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_203 = { simd_kvint_iu_pack_203<uint32_t>, 8, 12, true };
static KVIntIUPackInfo KVIntIUPackInfo_204 = { simd_kvint_iu_pack_204<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_205 = { simd_kvint_iu_pack_205<uint32_t>, 8, 12, true };
static KVIntIUPackInfo KVIntIUPackInfo_206 = { simd_kvint_iu_pack_206<uint32_t>, 8, 12, true };
static KVIntIUPackInfo KVIntIUPackInfo_207 = { simd_kvint_iu_pack_207<uint32_t>, 0, 0, false };
static KVIntIUPackInfo KVIntIUPackInfo_208 = { simd_kvint_iu_pack_208<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_209 = { simd_kvint_iu_pack_209<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_210 = { simd_kvint_iu_pack_210<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_211 = { simd_kvint_iu_pack_211<uint32_t>, 8, 12, true };
static KVIntIUPackInfo KVIntIUPackInfo_212 = { simd_kvint_iu_pack_212<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_213 = { simd_kvint_iu_pack_213<uint32_t>, 8, 12, true };
static KVIntIUPackInfo KVIntIUPackInfo_214 = { simd_kvint_iu_pack_214<uint32_t>, 8, 12, true };
static KVIntIUPackInfo KVIntIUPackInfo_215 = { simd_kvint_iu_pack_215<uint32_t>, 8, 8, true };
static KVIntIUPackInfo KVIntIUPackInfo_216 = { simd_kvint_iu_pack_216<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_217 = { simd_kvint_iu_pack_217<uint32_t>, 8, 12, true };
static KVIntIUPackInfo KVIntIUPackInfo_218 = { simd_kvint_iu_pack_218<uint32_t>, 8, 12, true };
static KVIntIUPackInfo KVIntIUPackInfo_219 = { simd_kvint_iu_pack_219<uint32_t>, 8, 8, true };
static KVIntIUPackInfo KVIntIUPackInfo_220 = { simd_kvint_iu_pack_220<uint32_t>, 8, 12, true };
static KVIntIUPackInfo KVIntIUPackInfo_221 = { simd_kvint_iu_pack_221<uint32_t>, 8, 8, true };
static KVIntIUPackInfo KVIntIUPackInfo_222 = { simd_kvint_iu_pack_222<uint32_t>, 0, 0, false };
static KVIntIUPackInfo KVIntIUPackInfo_223 = { simd_kvint_iu_pack_223<uint32_t>, 0, 0, false };
static KVIntIUPackInfo KVIntIUPackInfo_224 = { simd_kvint_iu_pack_224<uint32_t>, 8, 20, true };
static KVIntIUPackInfo KVIntIUPackInfo_225 = { simd_kvint_iu_pack_225<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_226 = { simd_kvint_iu_pack_226<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_227 = { simd_kvint_iu_pack_227<uint32_t>, 8, 12, true };
static KVIntIUPackInfo KVIntIUPackInfo_228 = { simd_kvint_iu_pack_228<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_229 = { simd_kvint_iu_pack_229<uint32_t>, 8, 12, true };
static KVIntIUPackInfo KVIntIUPackInfo_230 = { simd_kvint_iu_pack_230<uint32_t>, 8, 12, true };
static KVIntIUPackInfo KVIntIUPackInfo_231 = { simd_kvint_iu_pack_231<uint32_t>, 8, 8, true };
static KVIntIUPackInfo KVIntIUPackInfo_232 = { simd_kvint_iu_pack_232<uint32_t>, 8, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_233 = { simd_kvint_iu_pack_233<uint32_t>, 8, 12, true };
static KVIntIUPackInfo KVIntIUPackInfo_234 = { simd_kvint_iu_pack_234<uint32_t>, 8, 12, true };
static KVIntIUPackInfo KVIntIUPackInfo_235 = { simd_kvint_iu_pack_235<uint32_t>, 8, 8, true };
static KVIntIUPackInfo KVIntIUPackInfo_236 = { simd_kvint_iu_pack_236<uint32_t>, 8, 12, true };
static KVIntIUPackInfo KVIntIUPackInfo_237 = { simd_kvint_iu_pack_237<uint32_t>, 8, 8, true };
static KVIntIUPackInfo KVIntIUPackInfo_238 = { simd_kvint_iu_pack_238<uint32_t>, 8, 8, true };
static KVIntIUPackInfo KVIntIUPackInfo_239 = { simd_kvint_iu_pack_239<uint32_t>, 0, 0, false };
static KVIntIUPackInfo KVIntIUPackInfo_240 = { simd_kvint_iu_pack_240<uint32_t>, 4, 16, true };
static KVIntIUPackInfo KVIntIUPackInfo_241 = { simd_kvint_iu_pack_241<uint32_t>, 4, 12, true };
static KVIntIUPackInfo KVIntIUPackInfo_242 = { simd_kvint_iu_pack_242<uint32_t>, 4, 12, true };
static KVIntIUPackInfo KVIntIUPackInfo_243 = { simd_kvint_iu_pack_243<uint32_t>, 4, 8, true };
static KVIntIUPackInfo KVIntIUPackInfo_244 = { simd_kvint_iu_pack_244<uint32_t>, 4, 12, true };
static KVIntIUPackInfo KVIntIUPackInfo_245 = { simd_kvint_iu_pack_245<uint32_t>, 4, 8, true };
static KVIntIUPackInfo KVIntIUPackInfo_246 = { simd_kvint_iu_pack_246<uint32_t>, 4, 8, true };
static KVIntIUPackInfo KVIntIUPackInfo_247 = { simd_kvint_iu_pack_247<uint32_t>, 4, 4, true };
static KVIntIUPackInfo KVIntIUPackInfo_248 = { simd_kvint_iu_pack_248<uint32_t>, 4, 12, true };
static KVIntIUPackInfo KVIntIUPackInfo_249 = { simd_kvint_iu_pack_249<uint32_t>, 4, 8, true };
static KVIntIUPackInfo KVIntIUPackInfo_250 = { simd_kvint_iu_pack_250<uint32_t>, 4, 8, true };
static KVIntIUPackInfo KVIntIUPackInfo_251 = { simd_kvint_iu_pack_251<uint32_t>, 4, 4, true };
static KVIntIUPackInfo KVIntIUPackInfo_252 = { simd_kvint_iu_pack_252<uint32_t>, 4, 8, true };
static KVIntIUPackInfo KVIntIUPackInfo_253 = { simd_kvint_iu_pack_253<uint32_t>, 4, 4, true };
static KVIntIUPackInfo KVIntIUPackInfo_254 = { simd_kvint_iu_pack_254<uint32_t>, 4, 4, true };
static KVIntIUPackInfo KVIntIUPackInfo_255 = { simd_kvint_iu_pack_255<uint32_t>, 0, 0, false };

static KVIntIUPackInfo KVIntIUPackInfoArr[256] = {
			KVIntIUPackInfo_0, KVIntIUPackInfo_1, KVIntIUPackInfo_2, KVIntIUPackInfo_3,
			KVIntIUPackInfo_4, KVIntIUPackInfo_5, KVIntIUPackInfo_6, KVIntIUPackInfo_7,
			KVIntIUPackInfo_8, KVIntIUPackInfo_9, KVIntIUPackInfo_10, KVIntIUPackInfo_11,
			KVIntIUPackInfo_12, KVIntIUPackInfo_13, KVIntIUPackInfo_14, KVIntIUPackInfo_15,
			KVIntIUPackInfo_16, KVIntIUPackInfo_17, KVIntIUPackInfo_18, KVIntIUPackInfo_19,
			KVIntIUPackInfo_20, KVIntIUPackInfo_21, KVIntIUPackInfo_22, KVIntIUPackInfo_23,
			KVIntIUPackInfo_24, KVIntIUPackInfo_25, KVIntIUPackInfo_26, KVIntIUPackInfo_27,
			KVIntIUPackInfo_28, KVIntIUPackInfo_29, KVIntIUPackInfo_30, KVIntIUPackInfo_31,
			KVIntIUPackInfo_32, KVIntIUPackInfo_33, KVIntIUPackInfo_34, KVIntIUPackInfo_35,
			KVIntIUPackInfo_36, KVIntIUPackInfo_37, KVIntIUPackInfo_38, KVIntIUPackInfo_39,
			KVIntIUPackInfo_40, KVIntIUPackInfo_41, KVIntIUPackInfo_42, KVIntIUPackInfo_43,
			KVIntIUPackInfo_44, KVIntIUPackInfo_45, KVIntIUPackInfo_46, KVIntIUPackInfo_47,
			KVIntIUPackInfo_48, KVIntIUPackInfo_49, KVIntIUPackInfo_50, KVIntIUPackInfo_51,
			KVIntIUPackInfo_52, KVIntIUPackInfo_53, KVIntIUPackInfo_54, KVIntIUPackInfo_55,
			KVIntIUPackInfo_56, KVIntIUPackInfo_57, KVIntIUPackInfo_58, KVIntIUPackInfo_59,
			KVIntIUPackInfo_60, KVIntIUPackInfo_61, KVIntIUPackInfo_62, KVIntIUPackInfo_63,
			KVIntIUPackInfo_64, KVIntIUPackInfo_65, KVIntIUPackInfo_66, KVIntIUPackInfo_67,
			KVIntIUPackInfo_68, KVIntIUPackInfo_69, KVIntIUPackInfo_70, KVIntIUPackInfo_71,
			KVIntIUPackInfo_72, KVIntIUPackInfo_73, KVIntIUPackInfo_74, KVIntIUPackInfo_75,
			KVIntIUPackInfo_76, KVIntIUPackInfo_77, KVIntIUPackInfo_78, KVIntIUPackInfo_79,
			KVIntIUPackInfo_80, KVIntIUPackInfo_81, KVIntIUPackInfo_82, KVIntIUPackInfo_83,
			KVIntIUPackInfo_84, KVIntIUPackInfo_85, KVIntIUPackInfo_86, KVIntIUPackInfo_87,
			KVIntIUPackInfo_88, KVIntIUPackInfo_89, KVIntIUPackInfo_90, KVIntIUPackInfo_91,
			KVIntIUPackInfo_92, KVIntIUPackInfo_93, KVIntIUPackInfo_94, KVIntIUPackInfo_95,
			KVIntIUPackInfo_96, KVIntIUPackInfo_97, KVIntIUPackInfo_98, KVIntIUPackInfo_99,
			KVIntIUPackInfo_100, KVIntIUPackInfo_101, KVIntIUPackInfo_102, KVIntIUPackInfo_103,
			KVIntIUPackInfo_104, KVIntIUPackInfo_105, KVIntIUPackInfo_106, KVIntIUPackInfo_107,
			KVIntIUPackInfo_108, KVIntIUPackInfo_109, KVIntIUPackInfo_110, KVIntIUPackInfo_111,
			KVIntIUPackInfo_112, KVIntIUPackInfo_113, KVIntIUPackInfo_114, KVIntIUPackInfo_115,
			KVIntIUPackInfo_116, KVIntIUPackInfo_117, KVIntIUPackInfo_118, KVIntIUPackInfo_119,
			KVIntIUPackInfo_120, KVIntIUPackInfo_121, KVIntIUPackInfo_122, KVIntIUPackInfo_123,
			KVIntIUPackInfo_124, KVIntIUPackInfo_125, KVIntIUPackInfo_126, KVIntIUPackInfo_127,
			KVIntIUPackInfo_128, KVIntIUPackInfo_129, KVIntIUPackInfo_130, KVIntIUPackInfo_131,
			KVIntIUPackInfo_132, KVIntIUPackInfo_133, KVIntIUPackInfo_134, KVIntIUPackInfo_135,
			KVIntIUPackInfo_136, KVIntIUPackInfo_137, KVIntIUPackInfo_138, KVIntIUPackInfo_139,
			KVIntIUPackInfo_140, KVIntIUPackInfo_141, KVIntIUPackInfo_142, KVIntIUPackInfo_143,
			KVIntIUPackInfo_144, KVIntIUPackInfo_145, KVIntIUPackInfo_146, KVIntIUPackInfo_147,
			KVIntIUPackInfo_148, KVIntIUPackInfo_149, KVIntIUPackInfo_150, KVIntIUPackInfo_151,
			KVIntIUPackInfo_152, KVIntIUPackInfo_153, KVIntIUPackInfo_154, KVIntIUPackInfo_155,
			KVIntIUPackInfo_156, KVIntIUPackInfo_157, KVIntIUPackInfo_158, KVIntIUPackInfo_159,
			KVIntIUPackInfo_160, KVIntIUPackInfo_161, KVIntIUPackInfo_162, KVIntIUPackInfo_163,
			KVIntIUPackInfo_164, KVIntIUPackInfo_165, KVIntIUPackInfo_166, KVIntIUPackInfo_167,
			KVIntIUPackInfo_168, KVIntIUPackInfo_169, KVIntIUPackInfo_170, KVIntIUPackInfo_171,
			KVIntIUPackInfo_172, KVIntIUPackInfo_173, KVIntIUPackInfo_174, KVIntIUPackInfo_175,
			KVIntIUPackInfo_176, KVIntIUPackInfo_177, KVIntIUPackInfo_178, KVIntIUPackInfo_179,
			KVIntIUPackInfo_180, KVIntIUPackInfo_181, KVIntIUPackInfo_182, KVIntIUPackInfo_183,
			KVIntIUPackInfo_184, KVIntIUPackInfo_185, KVIntIUPackInfo_186, KVIntIUPackInfo_187,
			KVIntIUPackInfo_188, KVIntIUPackInfo_189, KVIntIUPackInfo_190, KVIntIUPackInfo_191,
			KVIntIUPackInfo_192, KVIntIUPackInfo_193, KVIntIUPackInfo_194, KVIntIUPackInfo_195,
			KVIntIUPackInfo_196, KVIntIUPackInfo_197, KVIntIUPackInfo_198, KVIntIUPackInfo_199,
			KVIntIUPackInfo_200, KVIntIUPackInfo_201, KVIntIUPackInfo_202, KVIntIUPackInfo_203,
			KVIntIUPackInfo_204, KVIntIUPackInfo_205, KVIntIUPackInfo_206, KVIntIUPackInfo_207,
			KVIntIUPackInfo_208, KVIntIUPackInfo_209, KVIntIUPackInfo_210, KVIntIUPackInfo_211,
			KVIntIUPackInfo_212, KVIntIUPackInfo_213, KVIntIUPackInfo_214, KVIntIUPackInfo_215,
			KVIntIUPackInfo_216, KVIntIUPackInfo_217, KVIntIUPackInfo_218, KVIntIUPackInfo_219,
			KVIntIUPackInfo_220, KVIntIUPackInfo_221, KVIntIUPackInfo_222, KVIntIUPackInfo_223,
			KVIntIUPackInfo_224, KVIntIUPackInfo_225, KVIntIUPackInfo_226, KVIntIUPackInfo_227,
			KVIntIUPackInfo_228, KVIntIUPackInfo_229, KVIntIUPackInfo_230, KVIntIUPackInfo_231,
			KVIntIUPackInfo_232, KVIntIUPackInfo_233, KVIntIUPackInfo_234, KVIntIUPackInfo_235,
			KVIntIUPackInfo_236, KVIntIUPackInfo_237, KVIntIUPackInfo_238, KVIntIUPackInfo_239,
			KVIntIUPackInfo_240, KVIntIUPackInfo_241, KVIntIUPackInfo_242, KVIntIUPackInfo_243,
			KVIntIUPackInfo_244, KVIntIUPackInfo_245, KVIntIUPackInfo_246, KVIntIUPackInfo_247,
			KVIntIUPackInfo_248, KVIntIUPackInfo_249, KVIntIUPackInfo_250, KVIntIUPackInfo_251,
			KVIntIUPackInfo_252, KVIntIUPackInfo_253, KVIntIUPackInfo_254, KVIntIUPackInfo_255
};

}
}

#endif

#endif /* SIMD_KVINT_IU_PACK_HPP_ */

