/*
 * simd_kvint_iu_unpack.hpp
 *
 *  Created on: 2013-6-2
 *      Author: zxd
 */

#ifndef SIMD_KVINT_IU_UNPACK_HPP_
#define SIMD_KVINT_IU_UNPACK_HPP_

#ifdef USE_SSE_INSTRUCTION

namespace paradise {
namespace index {

struct KVIntIUUnpackInfo{
	void (*m_subFunc)(uint32_t *des, const uint32_t *src);
	int m_codewordNum;
	int m_intNum;
	bool m_valid;
};


static const struct kvint_iu_and_0{
uint32_t a[4];
}kvint_iu_and_0 __attribute__((aligned(16))) = {{0xff,0xff,0xff,0xff},};
static const struct kvint_iu_and_1{
uint32_t a[4];
}kvint_iu_and_1 __attribute__((aligned(16))) = {{0xffff,0xffff,0xffff,0xffff},};
static const struct kvint_iu_and_2{
uint32_t a[4];
}kvint_iu_and_2 __attribute__((aligned(16))) = {{0xffffff,0xffffff,0xffffff,0xffffff},};

template<typename T>
void simd_kvint_iu_unpack_prepare() {
	__asm__(
			"movdqa %0,%%xmm0\n"
			"movdqa %1,%%xmm1\n"
			"movdqa %2,%%xmm2\n"
			::"m"(kvint_iu_and_0.a[0]),"m"(kvint_iu_and_1.a[0]),"m"(kvint_iu_and_2.a[0])
			:"memory");
}

template<typename T>
void simd_kvint_iu_unpack_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %8,%%xmm3\n"
			"movdqu %9,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%5\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%6\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%7\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24]),"=m"(des[28])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm3\n"
			"movdqu %8,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%5\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%6\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm3\n"
			"movdqu %8,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%5\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%6\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_4(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm3\n"
			"movdqu %8,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%5\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%6\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_5(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_6(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_7(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_8(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm3\n"
			"movdqu %8,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%5\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%6\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_9(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_10(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_11(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_12(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm5\n"
			"pslld $16,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_13(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm5\n"
			"pslld $16,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_14(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm5\n"
			"pslld $24,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_15(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pslld $32,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_16(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm3\n"
			"movdqu %8,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%5\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%6\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_17(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_18(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_19(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_20(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_21(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_22(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_23(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_24(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_25(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_26(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_27(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_28(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm5\n"
			"pslld $16,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_29(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm5\n"
			"pslld $16,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_30(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm5\n"
			"pslld $24,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_31(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pslld $32,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_32(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm3\n"
			"movdqu %8,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%5\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%6\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_33(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_34(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_35(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_36(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_37(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_38(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_39(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_40(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_41(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_42(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_43(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_44(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm5\n"
			"pslld $16,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_45(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm5\n"
			"pslld $16,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_46(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm5\n"
			"pslld $24,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_47(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pslld $32,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_48(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_49(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_50(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_51(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_52(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_53(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_54(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_55(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_56(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_57(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_58(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_59(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_60(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm5\n"
			"pslld $16,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_61(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm5\n"
			"pslld $16,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_62(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm5\n"
			"pslld $24,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_63(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pslld $32,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_64(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm3\n"
			"movdqu %8,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%5\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%6\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_65(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_66(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_67(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_68(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_69(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_70(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_71(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_72(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_73(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_74(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_75(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_76(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm5\n"
			"pslld $16,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_77(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm5\n"
			"pslld $16,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_78(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm5\n"
			"pslld $24,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_79(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pslld $32,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_80(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_81(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_82(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_83(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_84(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_85(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_86(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_87(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_88(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_89(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_90(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_91(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_92(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm5\n"
			"pslld $16,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_93(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm5\n"
			"pslld $16,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_94(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm5\n"
			"pslld $24,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_95(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pslld $32,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_96(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_97(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_98(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_99(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_100(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_101(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_102(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_103(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_104(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_105(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_106(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_107(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_108(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm5\n"
			"pslld $16,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_109(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm5\n"
			"pslld $16,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_110(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm5\n"
			"pslld $24,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_111(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pslld $32,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_112(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_113(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_114(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_115(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_116(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_117(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_118(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_119(T* des, const uint32_t* src) {
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
void simd_kvint_iu_unpack_120(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_121(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_122(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_123(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_124(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm5\n"
			"pslld $16,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_125(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm5\n"
			"pslld $16,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_126(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm5\n"
			"pslld $24,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_127(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm3\n"
			"movdqu %2,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pslld $32,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_128(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm3\n"
			"movdqu %8,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%5\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%6\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_129(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_130(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_131(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_132(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_133(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_134(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_135(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_136(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_137(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_138(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_139(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_140(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm5\n"
			"pslld $16,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_141(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm5\n"
			"pslld $16,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_142(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm5\n"
			"pslld $24,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_143(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pslld $32,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_144(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_145(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_146(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_147(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_148(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_149(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_150(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_151(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_152(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_153(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_154(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_155(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_156(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm5\n"
			"pslld $16,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_157(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm5\n"
			"pslld $16,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_158(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm5\n"
			"pslld $24,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_159(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pslld $32,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_160(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_161(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_162(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_163(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_164(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_165(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_166(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_167(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_168(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_169(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_170(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_171(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_172(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm5\n"
			"pslld $16,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_173(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm5\n"
			"pslld $16,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_174(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm5\n"
			"pslld $24,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_175(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pslld $32,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_176(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_177(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_178(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_179(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_180(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_181(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_182(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_183(T* des, const uint32_t* src) {
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
void simd_kvint_iu_unpack_184(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_185(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_186(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_187(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_188(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm5\n"
			"pslld $16,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_189(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm5\n"
			"pslld $16,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_190(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm5\n"
			"pslld $24,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_191(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm3\n"
			"movdqu %2,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pslld $32,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_192(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_193(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_194(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_195(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_196(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_197(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_198(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_199(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_200(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_201(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_202(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_203(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_204(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm5\n"
			"pslld $16,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_205(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm5\n"
			"pslld $16,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_206(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm5\n"
			"pslld $24,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_207(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pslld $32,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm4,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_208(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_209(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_210(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_211(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_212(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_213(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_214(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_215(T* des, const uint32_t* src) {
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
void simd_kvint_iu_unpack_216(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_217(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_218(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_219(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_220(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm5\n"
			"pslld $16,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_221(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm5\n"
			"pslld $16,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_222(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm5\n"
			"pslld $24,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_223(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm3\n"
			"movdqu %2,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pslld $32,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_224(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_225(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_226(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_227(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_228(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_229(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_230(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_231(T* des, const uint32_t* src) {
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
void simd_kvint_iu_unpack_232(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_233(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_234(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_235(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_236(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm5\n"
			"pslld $16,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_237(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm5\n"
			"pslld $16,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_238(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm5\n"
			"pslld $24,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_239(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm3\n"
			"movdqu %2,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pslld $32,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_240(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqa %%xmm3,%%xmm4\n"
			"pand %%xmm0,%%xmm4\n"
			"movdqu %%xmm4,%0\n"
			"movdqa %%xmm3,%%xmm4\n"
			"psrld $8,%%xmm4\n"
			"pand %%xmm0,%%xmm4\n"
			"movdqu %%xmm4,%1\n"
			"movdqa %%xmm3,%%xmm4\n"
			"psrld $16,%%xmm4\n"
			"pand %%xmm0,%%xmm4\n"
			"movdqu %%xmm4,%2\n"
			"movdqa %%xmm3,%%xmm4\n"
			"psrld $24,%%xmm4\n"
			"pand %%xmm0,%%xmm4\n"
			"movdqu %%xmm4,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_241(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqa %%xmm3,%%xmm4\n"
			"pand %%xmm1,%%xmm4\n"
			"movdqu %%xmm4,%0\n"
			"movdqa %%xmm3,%%xmm4\n"
			"psrld $16,%%xmm4\n"
			"pand %%xmm0,%%xmm4\n"
			"movdqu %%xmm4,%1\n"
			"movdqa %%xmm3,%%xmm4\n"
			"psrld $24,%%xmm4\n"
			"pand %%xmm0,%%xmm4\n"
			"movdqu %%xmm4,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_242(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqa %%xmm3,%%xmm4\n"
			"pand %%xmm0,%%xmm4\n"
			"movdqu %%xmm4,%0\n"
			"movdqa %%xmm3,%%xmm4\n"
			"psrld $8,%%xmm4\n"
			"pand %%xmm1,%%xmm4\n"
			"movdqu %%xmm4,%1\n"
			"movdqa %%xmm3,%%xmm4\n"
			"psrld $24,%%xmm4\n"
			"pand %%xmm0,%%xmm4\n"
			"movdqu %%xmm4,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_243(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqa %%xmm3,%%xmm4\n"
			"pand %%xmm2,%%xmm4\n"
			"movdqu %%xmm4,%0\n"
			"movdqa %%xmm3,%%xmm4\n"
			"psrld $24,%%xmm4\n"
			"pand %%xmm0,%%xmm4\n"
			"movdqu %%xmm4,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_244(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqa %%xmm3,%%xmm4\n"
			"pand %%xmm0,%%xmm4\n"
			"movdqu %%xmm4,%0\n"
			"movdqa %%xmm3,%%xmm4\n"
			"psrld $8,%%xmm4\n"
			"pand %%xmm0,%%xmm4\n"
			"movdqu %%xmm4,%1\n"
			"movdqa %%xmm3,%%xmm4\n"
			"psrld $16,%%xmm4\n"
			"pand %%xmm1,%%xmm4\n"
			"movdqu %%xmm4,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_245(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqa %%xmm3,%%xmm4\n"
			"pand %%xmm1,%%xmm4\n"
			"movdqu %%xmm4,%0\n"
			"movdqa %%xmm3,%%xmm4\n"
			"psrld $16,%%xmm4\n"
			"pand %%xmm1,%%xmm4\n"
			"movdqu %%xmm4,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_246(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqa %%xmm3,%%xmm4\n"
			"pand %%xmm0,%%xmm4\n"
			"movdqu %%xmm4,%0\n"
			"movdqa %%xmm3,%%xmm4\n"
			"psrld $8,%%xmm4\n"
			"pand %%xmm2,%%xmm4\n"
			"movdqu %%xmm4,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_247(T* des, const uint32_t* src) {
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
void simd_kvint_iu_unpack_248(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqa %%xmm3,%%xmm4\n"
			"pand %%xmm0,%%xmm4\n"
			"movdqu %%xmm4,%0\n"
			"movdqa %%xmm3,%%xmm4\n"
			"psrld $8,%%xmm4\n"
			"pand %%xmm0,%%xmm4\n"
			"movdqu %%xmm4,%1\n"
			"movdqa %%xmm3,%%xmm4\n"
			"psrld $16,%%xmm4\n"
			"pand %%xmm0,%%xmm4\n"
			"movdqu %%xmm4,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_249(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqa %%xmm3,%%xmm4\n"
			"pand %%xmm1,%%xmm4\n"
			"movdqu %%xmm4,%0\n"
			"movdqa %%xmm3,%%xmm4\n"
			"psrld $16,%%xmm4\n"
			"pand %%xmm0,%%xmm4\n"
			"movdqu %%xmm4,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_250(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqa %%xmm3,%%xmm4\n"
			"pand %%xmm0,%%xmm4\n"
			"movdqu %%xmm4,%0\n"
			"movdqa %%xmm3,%%xmm4\n"
			"psrld $8,%%xmm4\n"
			"pand %%xmm1,%%xmm4\n"
			"movdqu %%xmm4,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_251(T* des, const uint32_t* src) {
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
void simd_kvint_iu_unpack_252(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqa %%xmm3,%%xmm4\n"
			"pand %%xmm0,%%xmm4\n"
			"movdqu %%xmm4,%0\n"
			"movdqa %%xmm3,%%xmm4\n"
			"psrld $8,%%xmm4\n"
			"pand %%xmm0,%%xmm4\n"
			"movdqu %%xmm4,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kvint_iu_unpack_253(T* des, const uint32_t* src) {
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
void simd_kvint_iu_unpack_254(T* des, const uint32_t* src) {
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
void simd_kvint_iu_unpack_255(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}

static KVIntIUUnpackInfo KVIntIUUnpackInfo_0 = { simd_kvint_iu_unpack_0<uint32_t>, 8, 32, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_1 = { simd_kvint_iu_unpack_1<uint32_t>, 8, 28, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_2 = { simd_kvint_iu_unpack_2<uint32_t>, 8, 28, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_3 = { simd_kvint_iu_unpack_3<uint32_t>, 8, 24, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_4 = { simd_kvint_iu_unpack_4<uint32_t>, 8, 28, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_5 = { simd_kvint_iu_unpack_5<uint32_t>, 8, 24, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_6 = { simd_kvint_iu_unpack_6<uint32_t>, 8, 24, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_7 = { simd_kvint_iu_unpack_7<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_8 = { simd_kvint_iu_unpack_8<uint32_t>, 8, 28, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_9 = { simd_kvint_iu_unpack_9<uint32_t>, 8, 24, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_10 = { simd_kvint_iu_unpack_10<uint32_t>, 8, 24, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_11 = { simd_kvint_iu_unpack_11<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_12 = { simd_kvint_iu_unpack_12<uint32_t>, 8, 24, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_13 = { simd_kvint_iu_unpack_13<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_14 = { simd_kvint_iu_unpack_14<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_15 = { simd_kvint_iu_unpack_15<uint32_t>, 8, 16, false };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_16 = { simd_kvint_iu_unpack_16<uint32_t>, 8, 28, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_17 = { simd_kvint_iu_unpack_17<uint32_t>, 8, 24, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_18 = { simd_kvint_iu_unpack_18<uint32_t>, 8, 24, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_19 = { simd_kvint_iu_unpack_19<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_20 = { simd_kvint_iu_unpack_20<uint32_t>, 8, 24, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_21 = { simd_kvint_iu_unpack_21<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_22 = { simd_kvint_iu_unpack_22<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_23 = { simd_kvint_iu_unpack_23<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_24 = { simd_kvint_iu_unpack_24<uint32_t>, 8, 24, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_25 = { simd_kvint_iu_unpack_25<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_26 = { simd_kvint_iu_unpack_26<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_27 = { simd_kvint_iu_unpack_27<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_28 = { simd_kvint_iu_unpack_28<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_29 = { simd_kvint_iu_unpack_29<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_30 = { simd_kvint_iu_unpack_30<uint32_t>, 8, 16, false };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_31 = { simd_kvint_iu_unpack_31<uint32_t>, 8, 12, false };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_32 = { simd_kvint_iu_unpack_32<uint32_t>, 8, 28, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_33 = { simd_kvint_iu_unpack_33<uint32_t>, 8, 24, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_34 = { simd_kvint_iu_unpack_34<uint32_t>, 8, 24, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_35 = { simd_kvint_iu_unpack_35<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_36 = { simd_kvint_iu_unpack_36<uint32_t>, 8, 24, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_37 = { simd_kvint_iu_unpack_37<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_38 = { simd_kvint_iu_unpack_38<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_39 = { simd_kvint_iu_unpack_39<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_40 = { simd_kvint_iu_unpack_40<uint32_t>, 8, 24, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_41 = { simd_kvint_iu_unpack_41<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_42 = { simd_kvint_iu_unpack_42<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_43 = { simd_kvint_iu_unpack_43<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_44 = { simd_kvint_iu_unpack_44<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_45 = { simd_kvint_iu_unpack_45<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_46 = { simd_kvint_iu_unpack_46<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_47 = { simd_kvint_iu_unpack_47<uint32_t>, 8, 12, false };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_48 = { simd_kvint_iu_unpack_48<uint32_t>, 8, 24, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_49 = { simd_kvint_iu_unpack_49<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_50 = { simd_kvint_iu_unpack_50<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_51 = { simd_kvint_iu_unpack_51<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_52 = { simd_kvint_iu_unpack_52<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_53 = { simd_kvint_iu_unpack_53<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_54 = { simd_kvint_iu_unpack_54<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_55 = { simd_kvint_iu_unpack_55<uint32_t>, 8, 12, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_56 = { simd_kvint_iu_unpack_56<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_57 = { simd_kvint_iu_unpack_57<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_58 = { simd_kvint_iu_unpack_58<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_59 = { simd_kvint_iu_unpack_59<uint32_t>, 8, 12, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_60 = { simd_kvint_iu_unpack_60<uint32_t>, 8, 16, false };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_61 = { simd_kvint_iu_unpack_61<uint32_t>, 8, 12, false };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_62 = { simd_kvint_iu_unpack_62<uint32_t>, 8, 12, false };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_63 = { simd_kvint_iu_unpack_63<uint32_t>, 8, 8, false };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_64 = { simd_kvint_iu_unpack_64<uint32_t>, 8, 28, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_65 = { simd_kvint_iu_unpack_65<uint32_t>, 8, 24, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_66 = { simd_kvint_iu_unpack_66<uint32_t>, 8, 24, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_67 = { simd_kvint_iu_unpack_67<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_68 = { simd_kvint_iu_unpack_68<uint32_t>, 8, 24, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_69 = { simd_kvint_iu_unpack_69<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_70 = { simd_kvint_iu_unpack_70<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_71 = { simd_kvint_iu_unpack_71<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_72 = { simd_kvint_iu_unpack_72<uint32_t>, 8, 24, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_73 = { simd_kvint_iu_unpack_73<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_74 = { simd_kvint_iu_unpack_74<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_75 = { simd_kvint_iu_unpack_75<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_76 = { simd_kvint_iu_unpack_76<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_77 = { simd_kvint_iu_unpack_77<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_78 = { simd_kvint_iu_unpack_78<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_79 = { simd_kvint_iu_unpack_79<uint32_t>, 8, 12, false };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_80 = { simd_kvint_iu_unpack_80<uint32_t>, 8, 24, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_81 = { simd_kvint_iu_unpack_81<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_82 = { simd_kvint_iu_unpack_82<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_83 = { simd_kvint_iu_unpack_83<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_84 = { simd_kvint_iu_unpack_84<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_85 = { simd_kvint_iu_unpack_85<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_86 = { simd_kvint_iu_unpack_86<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_87 = { simd_kvint_iu_unpack_87<uint32_t>, 8, 12, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_88 = { simd_kvint_iu_unpack_88<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_89 = { simd_kvint_iu_unpack_89<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_90 = { simd_kvint_iu_unpack_90<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_91 = { simd_kvint_iu_unpack_91<uint32_t>, 8, 12, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_92 = { simd_kvint_iu_unpack_92<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_93 = { simd_kvint_iu_unpack_93<uint32_t>, 8, 12, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_94 = { simd_kvint_iu_unpack_94<uint32_t>, 8, 12, false };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_95 = { simd_kvint_iu_unpack_95<uint32_t>, 8, 8, false };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_96 = { simd_kvint_iu_unpack_96<uint32_t>, 8, 24, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_97 = { simd_kvint_iu_unpack_97<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_98 = { simd_kvint_iu_unpack_98<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_99 = { simd_kvint_iu_unpack_99<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_100 = { simd_kvint_iu_unpack_100<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_101 = { simd_kvint_iu_unpack_101<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_102 = { simd_kvint_iu_unpack_102<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_103 = { simd_kvint_iu_unpack_103<uint32_t>, 8, 12, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_104 = { simd_kvint_iu_unpack_104<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_105 = { simd_kvint_iu_unpack_105<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_106 = { simd_kvint_iu_unpack_106<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_107 = { simd_kvint_iu_unpack_107<uint32_t>, 8, 12, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_108 = { simd_kvint_iu_unpack_108<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_109 = { simd_kvint_iu_unpack_109<uint32_t>, 8, 12, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_110 = { simd_kvint_iu_unpack_110<uint32_t>, 8, 12, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_111 = { simd_kvint_iu_unpack_111<uint32_t>, 8, 8, false };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_112 = { simd_kvint_iu_unpack_112<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_113 = { simd_kvint_iu_unpack_113<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_114 = { simd_kvint_iu_unpack_114<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_115 = { simd_kvint_iu_unpack_115<uint32_t>, 8, 12, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_116 = { simd_kvint_iu_unpack_116<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_117 = { simd_kvint_iu_unpack_117<uint32_t>, 8, 12, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_118 = { simd_kvint_iu_unpack_118<uint32_t>, 8, 12, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_119 = { simd_kvint_iu_unpack_119<uint32_t>, 8, 8, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_120 = { simd_kvint_iu_unpack_120<uint32_t>, 8, 16, false };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_121 = { simd_kvint_iu_unpack_121<uint32_t>, 8, 12, false };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_122 = { simd_kvint_iu_unpack_122<uint32_t>, 8, 12, false };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_123 = { simd_kvint_iu_unpack_123<uint32_t>, 8, 8, false };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_124 = { simd_kvint_iu_unpack_124<uint32_t>, 8, 12, false };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_125 = { simd_kvint_iu_unpack_125<uint32_t>, 8, 8, false };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_126 = { simd_kvint_iu_unpack_126<uint32_t>, 8, 8, false };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_127 = { simd_kvint_iu_unpack_127<uint32_t>, 8, 4, false };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_128 = { simd_kvint_iu_unpack_128<uint32_t>, 8, 28, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_129 = { simd_kvint_iu_unpack_129<uint32_t>, 8, 24, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_130 = { simd_kvint_iu_unpack_130<uint32_t>, 8, 24, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_131 = { simd_kvint_iu_unpack_131<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_132 = { simd_kvint_iu_unpack_132<uint32_t>, 8, 24, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_133 = { simd_kvint_iu_unpack_133<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_134 = { simd_kvint_iu_unpack_134<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_135 = { simd_kvint_iu_unpack_135<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_136 = { simd_kvint_iu_unpack_136<uint32_t>, 8, 24, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_137 = { simd_kvint_iu_unpack_137<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_138 = { simd_kvint_iu_unpack_138<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_139 = { simd_kvint_iu_unpack_139<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_140 = { simd_kvint_iu_unpack_140<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_141 = { simd_kvint_iu_unpack_141<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_142 = { simd_kvint_iu_unpack_142<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_143 = { simd_kvint_iu_unpack_143<uint32_t>, 8, 12, false };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_144 = { simd_kvint_iu_unpack_144<uint32_t>, 8, 24, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_145 = { simd_kvint_iu_unpack_145<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_146 = { simd_kvint_iu_unpack_146<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_147 = { simd_kvint_iu_unpack_147<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_148 = { simd_kvint_iu_unpack_148<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_149 = { simd_kvint_iu_unpack_149<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_150 = { simd_kvint_iu_unpack_150<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_151 = { simd_kvint_iu_unpack_151<uint32_t>, 8, 12, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_152 = { simd_kvint_iu_unpack_152<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_153 = { simd_kvint_iu_unpack_153<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_154 = { simd_kvint_iu_unpack_154<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_155 = { simd_kvint_iu_unpack_155<uint32_t>, 8, 12, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_156 = { simd_kvint_iu_unpack_156<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_157 = { simd_kvint_iu_unpack_157<uint32_t>, 8, 12, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_158 = { simd_kvint_iu_unpack_158<uint32_t>, 8, 12, false };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_159 = { simd_kvint_iu_unpack_159<uint32_t>, 8, 8, false };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_160 = { simd_kvint_iu_unpack_160<uint32_t>, 8, 24, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_161 = { simd_kvint_iu_unpack_161<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_162 = { simd_kvint_iu_unpack_162<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_163 = { simd_kvint_iu_unpack_163<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_164 = { simd_kvint_iu_unpack_164<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_165 = { simd_kvint_iu_unpack_165<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_166 = { simd_kvint_iu_unpack_166<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_167 = { simd_kvint_iu_unpack_167<uint32_t>, 8, 12, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_168 = { simd_kvint_iu_unpack_168<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_169 = { simd_kvint_iu_unpack_169<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_170 = { simd_kvint_iu_unpack_170<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_171 = { simd_kvint_iu_unpack_171<uint32_t>, 8, 12, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_172 = { simd_kvint_iu_unpack_172<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_173 = { simd_kvint_iu_unpack_173<uint32_t>, 8, 12, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_174 = { simd_kvint_iu_unpack_174<uint32_t>, 8, 12, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_175 = { simd_kvint_iu_unpack_175<uint32_t>, 8, 8, false };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_176 = { simd_kvint_iu_unpack_176<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_177 = { simd_kvint_iu_unpack_177<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_178 = { simd_kvint_iu_unpack_178<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_179 = { simd_kvint_iu_unpack_179<uint32_t>, 8, 12, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_180 = { simd_kvint_iu_unpack_180<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_181 = { simd_kvint_iu_unpack_181<uint32_t>, 8, 12, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_182 = { simd_kvint_iu_unpack_182<uint32_t>, 8, 12, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_183 = { simd_kvint_iu_unpack_183<uint32_t>, 8, 8, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_184 = { simd_kvint_iu_unpack_184<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_185 = { simd_kvint_iu_unpack_185<uint32_t>, 8, 12, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_186 = { simd_kvint_iu_unpack_186<uint32_t>, 8, 12, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_187 = { simd_kvint_iu_unpack_187<uint32_t>, 8, 8, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_188 = { simd_kvint_iu_unpack_188<uint32_t>, 8, 12, false };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_189 = { simd_kvint_iu_unpack_189<uint32_t>, 8, 8, false };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_190 = { simd_kvint_iu_unpack_190<uint32_t>, 8, 8, false };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_191 = { simd_kvint_iu_unpack_191<uint32_t>, 8, 4, false };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_192 = { simd_kvint_iu_unpack_192<uint32_t>, 8, 24, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_193 = { simd_kvint_iu_unpack_193<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_194 = { simd_kvint_iu_unpack_194<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_195 = { simd_kvint_iu_unpack_195<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_196 = { simd_kvint_iu_unpack_196<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_197 = { simd_kvint_iu_unpack_197<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_198 = { simd_kvint_iu_unpack_198<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_199 = { simd_kvint_iu_unpack_199<uint32_t>, 8, 12, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_200 = { simd_kvint_iu_unpack_200<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_201 = { simd_kvint_iu_unpack_201<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_202 = { simd_kvint_iu_unpack_202<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_203 = { simd_kvint_iu_unpack_203<uint32_t>, 8, 12, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_204 = { simd_kvint_iu_unpack_204<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_205 = { simd_kvint_iu_unpack_205<uint32_t>, 8, 12, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_206 = { simd_kvint_iu_unpack_206<uint32_t>, 8, 12, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_207 = { simd_kvint_iu_unpack_207<uint32_t>, 8, 8, false };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_208 = { simd_kvint_iu_unpack_208<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_209 = { simd_kvint_iu_unpack_209<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_210 = { simd_kvint_iu_unpack_210<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_211 = { simd_kvint_iu_unpack_211<uint32_t>, 8, 12, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_212 = { simd_kvint_iu_unpack_212<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_213 = { simd_kvint_iu_unpack_213<uint32_t>, 8, 12, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_214 = { simd_kvint_iu_unpack_214<uint32_t>, 8, 12, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_215 = { simd_kvint_iu_unpack_215<uint32_t>, 8, 8, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_216 = { simd_kvint_iu_unpack_216<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_217 = { simd_kvint_iu_unpack_217<uint32_t>, 8, 12, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_218 = { simd_kvint_iu_unpack_218<uint32_t>, 8, 12, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_219 = { simd_kvint_iu_unpack_219<uint32_t>, 8, 8, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_220 = { simd_kvint_iu_unpack_220<uint32_t>, 8, 12, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_221 = { simd_kvint_iu_unpack_221<uint32_t>, 8, 8, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_222 = { simd_kvint_iu_unpack_222<uint32_t>, 8, 8, false };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_223 = { simd_kvint_iu_unpack_223<uint32_t>, 8, 4, false };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_224 = { simd_kvint_iu_unpack_224<uint32_t>, 8, 20, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_225 = { simd_kvint_iu_unpack_225<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_226 = { simd_kvint_iu_unpack_226<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_227 = { simd_kvint_iu_unpack_227<uint32_t>, 8, 12, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_228 = { simd_kvint_iu_unpack_228<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_229 = { simd_kvint_iu_unpack_229<uint32_t>, 8, 12, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_230 = { simd_kvint_iu_unpack_230<uint32_t>, 8, 12, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_231 = { simd_kvint_iu_unpack_231<uint32_t>, 8, 8, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_232 = { simd_kvint_iu_unpack_232<uint32_t>, 8, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_233 = { simd_kvint_iu_unpack_233<uint32_t>, 8, 12, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_234 = { simd_kvint_iu_unpack_234<uint32_t>, 8, 12, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_235 = { simd_kvint_iu_unpack_235<uint32_t>, 8, 8, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_236 = { simd_kvint_iu_unpack_236<uint32_t>, 8, 12, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_237 = { simd_kvint_iu_unpack_237<uint32_t>, 8, 8, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_238 = { simd_kvint_iu_unpack_238<uint32_t>, 8, 8, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_239 = { simd_kvint_iu_unpack_239<uint32_t>, 8, 4, false };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_240 = { simd_kvint_iu_unpack_240<uint32_t>, 4, 16, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_241 = { simd_kvint_iu_unpack_241<uint32_t>, 4, 12, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_242 = { simd_kvint_iu_unpack_242<uint32_t>, 4, 12, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_243 = { simd_kvint_iu_unpack_243<uint32_t>, 4, 8, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_244 = { simd_kvint_iu_unpack_244<uint32_t>, 4, 12, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_245 = { simd_kvint_iu_unpack_245<uint32_t>, 4, 8, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_246 = { simd_kvint_iu_unpack_246<uint32_t>, 4, 8, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_247 = { simd_kvint_iu_unpack_247<uint32_t>, 4, 4, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_248 = { simd_kvint_iu_unpack_248<uint32_t>, 4, 12, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_249 = { simd_kvint_iu_unpack_249<uint32_t>, 4, 8, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_250 = { simd_kvint_iu_unpack_250<uint32_t>, 4, 8, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_251 = { simd_kvint_iu_unpack_251<uint32_t>, 4, 4, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_252 = { simd_kvint_iu_unpack_252<uint32_t>, 4, 8, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_253 = { simd_kvint_iu_unpack_253<uint32_t>, 4, 4, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_254 = { simd_kvint_iu_unpack_254<uint32_t>, 4, 4, true };
static KVIntIUUnpackInfo KVIntIUUnpackInfo_255 = { simd_kvint_iu_unpack_255<uint32_t>, 0, 0, false };

static KVIntIUUnpackInfo KVIntIUUnpackInfoArr[256] = {
			KVIntIUUnpackInfo_0, KVIntIUUnpackInfo_1, KVIntIUUnpackInfo_2, KVIntIUUnpackInfo_3,
			KVIntIUUnpackInfo_4, KVIntIUUnpackInfo_5, KVIntIUUnpackInfo_6, KVIntIUUnpackInfo_7,
			KVIntIUUnpackInfo_8, KVIntIUUnpackInfo_9, KVIntIUUnpackInfo_10, KVIntIUUnpackInfo_11,
			KVIntIUUnpackInfo_12, KVIntIUUnpackInfo_13, KVIntIUUnpackInfo_14, KVIntIUUnpackInfo_15,
			KVIntIUUnpackInfo_16, KVIntIUUnpackInfo_17, KVIntIUUnpackInfo_18, KVIntIUUnpackInfo_19,
			KVIntIUUnpackInfo_20, KVIntIUUnpackInfo_21, KVIntIUUnpackInfo_22, KVIntIUUnpackInfo_23,
			KVIntIUUnpackInfo_24, KVIntIUUnpackInfo_25, KVIntIUUnpackInfo_26, KVIntIUUnpackInfo_27,
			KVIntIUUnpackInfo_28, KVIntIUUnpackInfo_29, KVIntIUUnpackInfo_30, KVIntIUUnpackInfo_31,
			KVIntIUUnpackInfo_32, KVIntIUUnpackInfo_33, KVIntIUUnpackInfo_34, KVIntIUUnpackInfo_35,
			KVIntIUUnpackInfo_36, KVIntIUUnpackInfo_37, KVIntIUUnpackInfo_38, KVIntIUUnpackInfo_39,
			KVIntIUUnpackInfo_40, KVIntIUUnpackInfo_41, KVIntIUUnpackInfo_42, KVIntIUUnpackInfo_43,
			KVIntIUUnpackInfo_44, KVIntIUUnpackInfo_45, KVIntIUUnpackInfo_46, KVIntIUUnpackInfo_47,
			KVIntIUUnpackInfo_48, KVIntIUUnpackInfo_49, KVIntIUUnpackInfo_50, KVIntIUUnpackInfo_51,
			KVIntIUUnpackInfo_52, KVIntIUUnpackInfo_53, KVIntIUUnpackInfo_54, KVIntIUUnpackInfo_55,
			KVIntIUUnpackInfo_56, KVIntIUUnpackInfo_57, KVIntIUUnpackInfo_58, KVIntIUUnpackInfo_59,
			KVIntIUUnpackInfo_60, KVIntIUUnpackInfo_61, KVIntIUUnpackInfo_62, KVIntIUUnpackInfo_63,
			KVIntIUUnpackInfo_64, KVIntIUUnpackInfo_65, KVIntIUUnpackInfo_66, KVIntIUUnpackInfo_67,
			KVIntIUUnpackInfo_68, KVIntIUUnpackInfo_69, KVIntIUUnpackInfo_70, KVIntIUUnpackInfo_71,
			KVIntIUUnpackInfo_72, KVIntIUUnpackInfo_73, KVIntIUUnpackInfo_74, KVIntIUUnpackInfo_75,
			KVIntIUUnpackInfo_76, KVIntIUUnpackInfo_77, KVIntIUUnpackInfo_78, KVIntIUUnpackInfo_79,
			KVIntIUUnpackInfo_80, KVIntIUUnpackInfo_81, KVIntIUUnpackInfo_82, KVIntIUUnpackInfo_83,
			KVIntIUUnpackInfo_84, KVIntIUUnpackInfo_85, KVIntIUUnpackInfo_86, KVIntIUUnpackInfo_87,
			KVIntIUUnpackInfo_88, KVIntIUUnpackInfo_89, KVIntIUUnpackInfo_90, KVIntIUUnpackInfo_91,
			KVIntIUUnpackInfo_92, KVIntIUUnpackInfo_93, KVIntIUUnpackInfo_94, KVIntIUUnpackInfo_95,
			KVIntIUUnpackInfo_96, KVIntIUUnpackInfo_97, KVIntIUUnpackInfo_98, KVIntIUUnpackInfo_99,
			KVIntIUUnpackInfo_100, KVIntIUUnpackInfo_101, KVIntIUUnpackInfo_102, KVIntIUUnpackInfo_103,
			KVIntIUUnpackInfo_104, KVIntIUUnpackInfo_105, KVIntIUUnpackInfo_106, KVIntIUUnpackInfo_107,
			KVIntIUUnpackInfo_108, KVIntIUUnpackInfo_109, KVIntIUUnpackInfo_110, KVIntIUUnpackInfo_111,
			KVIntIUUnpackInfo_112, KVIntIUUnpackInfo_113, KVIntIUUnpackInfo_114, KVIntIUUnpackInfo_115,
			KVIntIUUnpackInfo_116, KVIntIUUnpackInfo_117, KVIntIUUnpackInfo_118, KVIntIUUnpackInfo_119,
			KVIntIUUnpackInfo_120, KVIntIUUnpackInfo_121, KVIntIUUnpackInfo_122, KVIntIUUnpackInfo_123,
			KVIntIUUnpackInfo_124, KVIntIUUnpackInfo_125, KVIntIUUnpackInfo_126, KVIntIUUnpackInfo_127,
			KVIntIUUnpackInfo_128, KVIntIUUnpackInfo_129, KVIntIUUnpackInfo_130, KVIntIUUnpackInfo_131,
			KVIntIUUnpackInfo_132, KVIntIUUnpackInfo_133, KVIntIUUnpackInfo_134, KVIntIUUnpackInfo_135,
			KVIntIUUnpackInfo_136, KVIntIUUnpackInfo_137, KVIntIUUnpackInfo_138, KVIntIUUnpackInfo_139,
			KVIntIUUnpackInfo_140, KVIntIUUnpackInfo_141, KVIntIUUnpackInfo_142, KVIntIUUnpackInfo_143,
			KVIntIUUnpackInfo_144, KVIntIUUnpackInfo_145, KVIntIUUnpackInfo_146, KVIntIUUnpackInfo_147,
			KVIntIUUnpackInfo_148, KVIntIUUnpackInfo_149, KVIntIUUnpackInfo_150, KVIntIUUnpackInfo_151,
			KVIntIUUnpackInfo_152, KVIntIUUnpackInfo_153, KVIntIUUnpackInfo_154, KVIntIUUnpackInfo_155,
			KVIntIUUnpackInfo_156, KVIntIUUnpackInfo_157, KVIntIUUnpackInfo_158, KVIntIUUnpackInfo_159,
			KVIntIUUnpackInfo_160, KVIntIUUnpackInfo_161, KVIntIUUnpackInfo_162, KVIntIUUnpackInfo_163,
			KVIntIUUnpackInfo_164, KVIntIUUnpackInfo_165, KVIntIUUnpackInfo_166, KVIntIUUnpackInfo_167,
			KVIntIUUnpackInfo_168, KVIntIUUnpackInfo_169, KVIntIUUnpackInfo_170, KVIntIUUnpackInfo_171,
			KVIntIUUnpackInfo_172, KVIntIUUnpackInfo_173, KVIntIUUnpackInfo_174, KVIntIUUnpackInfo_175,
			KVIntIUUnpackInfo_176, KVIntIUUnpackInfo_177, KVIntIUUnpackInfo_178, KVIntIUUnpackInfo_179,
			KVIntIUUnpackInfo_180, KVIntIUUnpackInfo_181, KVIntIUUnpackInfo_182, KVIntIUUnpackInfo_183,
			KVIntIUUnpackInfo_184, KVIntIUUnpackInfo_185, KVIntIUUnpackInfo_186, KVIntIUUnpackInfo_187,
			KVIntIUUnpackInfo_188, KVIntIUUnpackInfo_189, KVIntIUUnpackInfo_190, KVIntIUUnpackInfo_191,
			KVIntIUUnpackInfo_192, KVIntIUUnpackInfo_193, KVIntIUUnpackInfo_194, KVIntIUUnpackInfo_195,
			KVIntIUUnpackInfo_196, KVIntIUUnpackInfo_197, KVIntIUUnpackInfo_198, KVIntIUUnpackInfo_199,
			KVIntIUUnpackInfo_200, KVIntIUUnpackInfo_201, KVIntIUUnpackInfo_202, KVIntIUUnpackInfo_203,
			KVIntIUUnpackInfo_204, KVIntIUUnpackInfo_205, KVIntIUUnpackInfo_206, KVIntIUUnpackInfo_207,
			KVIntIUUnpackInfo_208, KVIntIUUnpackInfo_209, KVIntIUUnpackInfo_210, KVIntIUUnpackInfo_211,
			KVIntIUUnpackInfo_212, KVIntIUUnpackInfo_213, KVIntIUUnpackInfo_214, KVIntIUUnpackInfo_215,
			KVIntIUUnpackInfo_216, KVIntIUUnpackInfo_217, KVIntIUUnpackInfo_218, KVIntIUUnpackInfo_219,
			KVIntIUUnpackInfo_220, KVIntIUUnpackInfo_221, KVIntIUUnpackInfo_222, KVIntIUUnpackInfo_223,
			KVIntIUUnpackInfo_224, KVIntIUUnpackInfo_225, KVIntIUUnpackInfo_226, KVIntIUUnpackInfo_227,
			KVIntIUUnpackInfo_228, KVIntIUUnpackInfo_229, KVIntIUUnpackInfo_230, KVIntIUUnpackInfo_231,
			KVIntIUUnpackInfo_232, KVIntIUUnpackInfo_233, KVIntIUUnpackInfo_234, KVIntIUUnpackInfo_235,
			KVIntIUUnpackInfo_236, KVIntIUUnpackInfo_237, KVIntIUUnpackInfo_238, KVIntIUUnpackInfo_239,
			KVIntIUUnpackInfo_240, KVIntIUUnpackInfo_241, KVIntIUUnpackInfo_242, KVIntIUUnpackInfo_243,
			KVIntIUUnpackInfo_244, KVIntIUUnpackInfo_245, KVIntIUUnpackInfo_246, KVIntIUUnpackInfo_247,
			KVIntIUUnpackInfo_248, KVIntIUUnpackInfo_249, KVIntIUUnpackInfo_250, KVIntIUUnpackInfo_251,
			KVIntIUUnpackInfo_252, KVIntIUUnpackInfo_253, KVIntIUUnpackInfo_254, KVIntIUUnpackInfo_255
};

}
}

#endif

#endif /* SIMD_KVINT_IU_UNPACK_HPP_ */


/*

// meta code:
#include <iostream>
#include <sstream>
#include <stdint.h>
#include <string>
#include <stdlib.h>

using namespace std;

string FUNC_NAME_PREFIX = "simd_kvint_iu_unpack";
string TRIPLE_TAB = "\t\t\t";
string QUOTE_END_LINE = "\\n\"\n";
int BEG_REG_IDX = 3;

string funcStr = "";
string unpackInfoStr = "";
string unpackInfoArrStr = "";

string Int2Str(int n) {
	ostringstream oss;
	oss << n;
	return oss.str();
}

void printFunc(int begByteOffset, const uint32_t *byteCount, int intNum, int funcIdx) {
	string resStr = "";
	int totalByteCount = begByteOffset;
	int *begSrcIdxPerInt = new int[intNum];
	int *endSrcIdxPerInt = new int[intNum];

	resStr += "template<typename T>\n";
	resStr += "void " + FUNC_NAME_PREFIX + "_" + Int2Str(funcIdx);
	for (int i=0; i<intNum; i++) {
		begSrcIdxPerInt[i] = totalByteCount / 4;
		//byte offset of last byte of this int
		endSrcIdxPerInt[i] = (totalByteCount + byteCount[i] - 1)/ 4;
		totalByteCount += byteCount[i];
	}
	resStr += "(T* des, const uint32_t* src) {\n";
	resStr += "\t__asm__ volatile(\"prefetchnta %0\"::\"m\" (src[0]));\n";
	if (intNum == 0) {
		resStr += "}\n";
		cout << resStr;

		delete [] begSrcIdxPerInt;
		delete [] endSrcIdxPerInt;
		return;
	}

	resStr += "\t__asm__(\n";

	int desMemCount = intNum;
	int srcMemCount = (totalByteCount + 3) / 4;

	//step 1: load all codeword need to xmm
	for (int i=0; i<srcMemCount; i++) {
		resStr += TRIPLE_TAB + "\"movdqu %" + Int2Str(desMemCount + i)
				+ ",%%xmm" + Int2Str(BEG_REG_IDX+i) + QUOTE_END_LINE;
	}

	//step 2: decode 4 int per time and store
	int TMP_REG_IDX = BEG_REG_IDX + srcMemCount;
	int tmpByteOffset = begByteOffset;
	for (int i=0; i<intNum; i++) {
		// the int is in the same word
		if (begSrcIdxPerInt[i] == endSrcIdxPerInt[i]) {
			resStr += TRIPLE_TAB + "\"movdqa %%xmm" + Int2Str(BEG_REG_IDX + begSrcIdxPerInt[i]) + ",%%xmm" + Int2Str(TMP_REG_IDX) + QUOTE_END_LINE;
			if (tmpByteOffset > 0) {
				resStr += TRIPLE_TAB + "\"psrld $" + Int2Str(tmpByteOffset << 3) + ",%%xmm" + Int2Str(TMP_REG_IDX) + QUOTE_END_LINE;
			}
		}
		// cross word
		else {
			resStr += TRIPLE_TAB + "\"movdqa %%xmm" + Int2Str(BEG_REG_IDX + begSrcIdxPerInt[i]) + ",%%xmm" + Int2Str(TMP_REG_IDX) + "\\n\"" + "\n";
			resStr += TRIPLE_TAB + "\"movdqa %%xmm" + Int2Str(BEG_REG_IDX + endSrcIdxPerInt[i]) + ",%%xmm" + Int2Str(TMP_REG_IDX + 1) + "\\n\"" + "\n";
			if (tmpByteOffset > 0) {
				resStr += TRIPLE_TAB + "\"psrld $" + Int2Str(tmpByteOffset << 3) + ",%%xmm" + Int2Str(TMP_REG_IDX) + QUOTE_END_LINE;
			}
			resStr += TRIPLE_TAB + "\"pslld $" + Int2Str(32 - (tmpByteOffset << 3)) + ",%%xmm" + Int2Str(TMP_REG_IDX + 1) + QUOTE_END_LINE;
			resStr += TRIPLE_TAB + "\"por %%xmm" + Int2Str(TMP_REG_IDX + 1) + ",%%xmm" + Int2Str(TMP_REG_IDX) + QUOTE_END_LINE;
		}

		if (byteCount[i] < 4) {
			int andMaskRegIdx = byteCount[i] - 1;
			resStr += TRIPLE_TAB + "\"pand %%xmm" + Int2Str(andMaskRegIdx) + ",%%xmm" + Int2Str(TMP_REG_IDX) + QUOTE_END_LINE;
		}
		resStr += TRIPLE_TAB + "\"movdqu %%xmm" + Int2Str(TMP_REG_IDX) + ",%" + Int2Str(i) + QUOTE_END_LINE;

		tmpByteOffset = (tmpByteOffset + byteCount[i]) % 4;
	}


	resStr += TRIPLE_TAB + ":";
	for (int i=0; i<desMemCount; i++) {
		resStr += "\"=m\"(des[" + Int2Str(4*i) +"])";
		if (i == desMemCount-1)
			resStr += "\n";
		else
			resStr += ",";
	}

        resStr += TRIPLE_TAB + ":";
        for (int i=0; i<srcMemCount; i++) {
                resStr += "\"m\"(src[" + Int2Str(4*i) +"])";
                if (i == srcMemCount-1)
                        resStr += "\n";
                else
                        resStr += ",";
        }

	resStr += TRIPLE_TAB + ":\"memory\");\n";
	resStr += "}\n";
	cout << resStr;

	delete [] begSrcIdxPerInt;
	delete [] endSrcIdxPerInt;
}

void printUnpackInfoArr() {
	unpackInfoArrStr += "static KVIntIUUnpackInfo KVIntIUUnpackInfoArr[256] = {\n";
	for (int i=0; i<256; i++) {
		if (i % 4 == 0)
			unpackInfoArrStr += TRIPLE_TAB;
		unpackInfoArrStr += "KVIntIUUnpackInfo_" + Int2Str(i);
		if (i != 255)
			unpackInfoArrStr += ", ";

		if (i % 4 == 3)
			unpackInfoArrStr += "\n";
	}
	unpackInfoArrStr += "};\n";
}

int main(int argc, char **argv) {
	for (uint32_t i=0; i<256; i++) {
		bool validGroup = true;
		uint32_t offsetArr[8] = {0,0,0,0,0,0,0,0};
		uint32_t lenArr[8] = {0,0,0,0,0,0,0,0};
		uint32_t maskArr[8] = {0,0,0,0,0,0,0,0};
		uint32_t intNum = 0;
		uint32_t mask = i;
		uint32_t totalByteCount = 0;

		uint32_t curBitIdx = 0;

		while (curBitIdx < 8) {
			uint32_t intBitNum = 0;
			bool validUnary = false;
			while (curBitIdx < 8) {
				uint32_t bit = mask & 0x1;
				mask >>= 1;
				curBitIdx ++;	//should increment first
				intBitNum ++;

				if (bit == 0) {	//got a valid unary
					validUnary = true;
					break;
				}
			}
			if (validUnary) {
				if (intBitNum > 4) {
					validGroup = false;	//a valid group can only hold integers less than 4bytes
				}
				lenArr[intNum] = intBitNum;
				offsetArr[intNum] = curBitIdx - intBitNum;	//offset starts from 0
				maskArr[intNum] = (1LL << (intBitNum * 8)) - 1;

				intNum ++;
			}
		}

		if (intNum == 0) {
			validGroup = false;	//a valid group should represent at least one integer
		}

		for (int j=0; j<intNum; j++)
			totalByteCount += lenArr[j];
		int codewordNeeded = (totalByteCount + 3) / 4;

		//if (validGroup) {
		printFunc(0, lenArr, intNum, i);
		//}

		//output
		unpackInfoStr += "static KVIntIUUnpackInfo KVIntIUUnpackInfo_" + Int2Str(i) + " = { ";
		unpackInfoStr += FUNC_NAME_PREFIX + "_" + Int2Str(i) + "<uint32_t>, ";
		unpackInfoStr += Int2Str(codewordNeeded << 2) + ", ";
		unpackInfoStr += Int2Str(intNum << 2) + ", ";
		unpackInfoStr += (validGroup ? "true" : "false");
		unpackInfoStr += " };\n";
	}

	cout << endl;
	cout << unpackInfoStr;
	cout << endl;
	printUnpackInfoArr();
	cout << unpackInfoArrStr;

	return 0;
}

 *
 */
