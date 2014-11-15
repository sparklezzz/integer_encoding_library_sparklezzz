/*
 * simd_kvint_cu_unpack.hpp
 *
 *
 *  Created on: 2013-6-2
 *      Author: zxd
 */

#ifndef SIMD_KVINT_CU_UNPACK_HPP_
#define SIMD_KVINT_CU_UNPACK_HPP_

#ifdef USE_SSE_INSTRUCTION

namespace paradise {
namespace index {

struct KVIntCUUnpackInfo{
	void (*m_subFunc)(uint32_t *des, const uint32_t *src);
	int m_codewordSkipped;
	int m_intNum;
	int m_statusGen;
	bool m_valid;
};


static const struct kvint_cu_and_0{
uint32_t a[4];
}kvint_cu_and_0 __attribute__((aligned(16))) = {{0xff,0xff,0xff,0xff},};
static const struct kvint_cu_and_1{
uint32_t a[4];
}kvint_cu_and_1 __attribute__((aligned(16))) = {{0xffff,0xffff,0xffff,0xffff},};
static const struct kvint_cu_and_2{
uint32_t a[4];
}kvint_cu_and_2 __attribute__((aligned(16))) = {{0xffffff,0xffffff,0xffffff,0xffffff},};

template<typename T>
void simd_kvint_cu_unpack_prepare() {
	__asm__(
			"movdqa %0,%%xmm0\n"
			"movdqa %1,%%xmm1\n"
			"movdqa %2,%%xmm2\n"
			::"m"(kvint_cu_and_0.a[0]),"m"(kvint_cu_and_1.a[0]),"m"(kvint_cu_and_2.a[0])
			:"memory");
}

template<typename T>
void simd_kvint_cu_unpack_0(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_1(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_2(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_3(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_4(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_5(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_6(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_7(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_8(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_9(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_10(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_11(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_12(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_13(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_14(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_15(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_16(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_17(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_18(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_19(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_20(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_21(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_22(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_23(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_24(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_25(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_26(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_27(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_28(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_29(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_30(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_31(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_32(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_33(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_34(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_35(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_36(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_37(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_38(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_39(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_40(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_41(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_42(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_43(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_44(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_45(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_46(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_47(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_48(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_49(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_50(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_51(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_52(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_53(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_54(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_55(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_56(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_57(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_58(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_59(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_60(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_61(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_62(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_63(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_64(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_65(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_66(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_67(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_68(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_69(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_70(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_71(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_72(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_73(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_74(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_75(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_76(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_77(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_78(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_79(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_80(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_81(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_82(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_83(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_84(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_85(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_86(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_87(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_88(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_89(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_90(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_91(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_92(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_93(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_94(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_95(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_96(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_97(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_98(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_99(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_100(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_101(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_102(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_103(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_104(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_105(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_106(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_107(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_108(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_109(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_110(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_111(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_112(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_113(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_114(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_115(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_116(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_117(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_118(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_119(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_120(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_121(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_122(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_123(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_124(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_125(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_126(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_127(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_128(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_129(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_130(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_131(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_132(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_133(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_134(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_135(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_136(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_137(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_138(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_139(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_140(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_141(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_142(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_143(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_144(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_145(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_146(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_147(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_148(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_149(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_150(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_151(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_152(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_153(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_154(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_155(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_156(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_157(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_158(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_159(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_160(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_161(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_162(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_163(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_164(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_165(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_166(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_167(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_168(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_169(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_170(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_171(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_172(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_173(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_174(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_175(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_176(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_177(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_178(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_179(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_180(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_181(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_182(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_183(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_184(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_185(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_186(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_187(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_188(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_189(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_190(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_191(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_192(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_193(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_194(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_195(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_196(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_197(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_198(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_199(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_200(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_201(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_202(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_203(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_204(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_205(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_206(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_207(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_208(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_209(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_210(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_211(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_212(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_213(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_214(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_215(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_216(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_217(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_218(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_219(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_220(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_221(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_222(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_223(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_224(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_225(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_226(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_227(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_228(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_229(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_230(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_231(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_232(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_233(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_234(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_235(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_236(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_237(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_238(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_239(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_240(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_241(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_242(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_243(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_244(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_245(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_246(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_247(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_248(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_249(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_250(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_251(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_252(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_253(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_254(T* des, const uint32_t* src) {
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
void simd_kvint_cu_unpack_255(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_256(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %8,%%xmm3\n"
			"movdqu %9,%%xmm4\n"
			"movdqu %10,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%6\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%7\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24]),"=m"(des[28])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_257(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm3\n"
			"movdqu %8,%%xmm4\n"
			"movdqu %9,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%6\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_258(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm3\n"
			"movdqu %8,%%xmm4\n"
			"movdqu %9,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%6\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_259(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_260(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm3\n"
			"movdqu %8,%%xmm4\n"
			"movdqu %9,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%6\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_261(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_262(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_263(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_264(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm3\n"
			"movdqu %8,%%xmm4\n"
			"movdqu %9,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%6\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_265(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_266(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_267(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_268(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_269(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_270(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_271(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_272(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm3\n"
			"movdqu %8,%%xmm4\n"
			"movdqu %9,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%6\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_273(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_274(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_275(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_276(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_277(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_278(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_279(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_280(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_281(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_282(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_283(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_284(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_285(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_286(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_287(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_288(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm3\n"
			"movdqu %8,%%xmm4\n"
			"movdqu %9,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%6\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_289(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_290(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_291(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_292(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_293(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_294(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_295(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_296(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_297(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_298(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_299(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_300(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_301(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_302(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_303(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_304(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_305(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_306(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_307(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_308(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_309(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_310(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_311(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_312(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_313(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_314(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_315(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_316(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_317(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_318(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_319(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_320(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm3\n"
			"movdqu %8,%%xmm4\n"
			"movdqu %9,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%6\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_321(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_322(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_323(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_324(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_325(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_326(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_327(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_328(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_329(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_330(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_331(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_332(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_333(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_334(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_335(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_336(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_337(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_338(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_339(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_340(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_341(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_342(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_343(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_344(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_345(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_346(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_347(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_348(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_349(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_350(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_351(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_352(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_353(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_354(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_355(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_356(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_357(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_358(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_359(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_360(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_361(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_362(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_363(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_364(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_365(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_366(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_367(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_368(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_369(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_370(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_371(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_372(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_373(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_374(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_375(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_376(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_377(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_378(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_379(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_380(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_381(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_382(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_383(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_384(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm3\n"
			"movdqu %8,%%xmm4\n"
			"movdqu %9,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%6\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_385(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_386(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_387(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_388(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_389(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_390(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_391(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_392(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_393(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_394(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_395(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_396(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_397(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_398(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_399(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_400(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_401(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_402(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_403(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_404(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_405(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_406(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_407(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_408(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_409(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_410(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_411(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_412(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_413(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_414(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_415(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_416(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_417(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_418(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_419(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_420(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_421(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_422(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_423(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_424(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_425(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_426(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_427(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_428(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_429(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_430(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_431(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_432(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_433(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_434(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_435(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_436(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_437(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_438(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_439(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_440(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_441(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_442(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_443(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_444(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_445(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_446(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_447(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_448(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_449(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_450(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_451(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_452(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_453(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_454(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_455(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_456(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_457(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_458(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_459(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_460(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_461(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_462(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_463(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_464(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_465(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_466(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_467(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_468(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_469(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_470(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_471(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_472(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_473(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_474(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_475(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_476(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_477(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_478(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_479(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_480(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_481(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_482(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_483(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_484(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_485(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_486(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_487(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_488(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_489(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_490(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_491(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_492(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_493(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_494(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_495(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_496(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
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
void simd_kvint_cu_unpack_497(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
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
void simd_kvint_cu_unpack_498(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
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
void simd_kvint_cu_unpack_499(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
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
void simd_kvint_cu_unpack_500(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
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
void simd_kvint_cu_unpack_501(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
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
void simd_kvint_cu_unpack_502(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
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
void simd_kvint_cu_unpack_503(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_504(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
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
void simd_kvint_cu_unpack_505(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
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
void simd_kvint_cu_unpack_506(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
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
void simd_kvint_cu_unpack_507(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm3\n"
			"movdqu %2,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_508(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
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
void simd_kvint_cu_unpack_509(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm3\n"
			"movdqu %2,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_510(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm3\n"
			"movdqu %2,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm5\n"
			"pslld $8,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_511(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_512(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %8,%%xmm3\n"
			"movdqu %9,%%xmm4\n"
			"movdqu %10,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%6\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%7\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24]),"=m"(des[28])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_513(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm3\n"
			"movdqu %8,%%xmm4\n"
			"movdqu %9,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%6\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_514(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm3\n"
			"movdqu %8,%%xmm4\n"
			"movdqu %9,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%6\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_515(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_516(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm3\n"
			"movdqu %8,%%xmm4\n"
			"movdqu %9,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%6\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_517(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_518(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_519(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_520(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm3\n"
			"movdqu %8,%%xmm4\n"
			"movdqu %9,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%6\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_521(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_522(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_523(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_524(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_525(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_526(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_527(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_528(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm3\n"
			"movdqu %8,%%xmm4\n"
			"movdqu %9,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%6\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_529(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_530(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_531(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_532(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_533(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_534(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_535(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_536(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_537(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_538(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_539(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_540(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_541(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_542(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_543(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_544(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm3\n"
			"movdqu %8,%%xmm4\n"
			"movdqu %9,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%6\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_545(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_546(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_547(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_548(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_549(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_550(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_551(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_552(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_553(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_554(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_555(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_556(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_557(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_558(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_559(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_560(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_561(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_562(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_563(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_564(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_565(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_566(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_567(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_568(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_569(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_570(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_571(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_572(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_573(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_574(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_575(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_576(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm3\n"
			"movdqu %8,%%xmm4\n"
			"movdqu %9,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%6\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_577(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_578(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_579(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_580(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_581(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_582(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_583(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_584(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_585(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_586(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_587(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_588(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_589(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_590(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_591(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_592(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_593(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_594(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_595(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_596(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_597(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_598(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_599(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_600(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_601(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_602(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_603(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_604(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_605(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_606(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_607(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_608(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_609(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_610(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_611(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_612(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_613(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_614(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_615(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_616(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_617(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_618(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_619(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_620(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_621(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_622(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_623(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_624(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_625(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_626(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_627(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_628(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_629(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_630(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_631(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_632(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_633(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_634(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_635(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_636(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_637(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_638(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_639(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_640(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm3\n"
			"movdqu %8,%%xmm4\n"
			"movdqu %9,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%6\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_641(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_642(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_643(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_644(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_645(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_646(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_647(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_648(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_649(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_650(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_651(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_652(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_653(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_654(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_655(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_656(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_657(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_658(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_659(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_660(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_661(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_662(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_663(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_664(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_665(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_666(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_667(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_668(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_669(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_670(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_671(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_672(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_673(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_674(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_675(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_676(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_677(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_678(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_679(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_680(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_681(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_682(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_683(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_684(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_685(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_686(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_687(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_688(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_689(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_690(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_691(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_692(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_693(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_694(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_695(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_696(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_697(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_698(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_699(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_700(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_701(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_702(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_703(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_704(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_705(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_706(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_707(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_708(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_709(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_710(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_711(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_712(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_713(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_714(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_715(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_716(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_717(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_718(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_719(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_720(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_721(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_722(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_723(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_724(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_725(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_726(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_727(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_728(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_729(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_730(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_731(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_732(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_733(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_734(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_735(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_736(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_737(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_738(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_739(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_740(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_741(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_742(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_743(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_744(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_745(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_746(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_747(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_748(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_749(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_750(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_751(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_752(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm5\n"
			"pslld $16,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
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
void simd_kvint_cu_unpack_753(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm5\n"
			"pslld $16,%%xmm6\n"
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
void simd_kvint_cu_unpack_754(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm5\n"
			"pslld $16,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
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
void simd_kvint_cu_unpack_755(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_756(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm5\n"
			"pslld $16,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
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
void simd_kvint_cu_unpack_757(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm5\n"
			"pslld $16,%%xmm6\n"
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
void simd_kvint_cu_unpack_758(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm5\n"
			"pslld $16,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
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
void simd_kvint_cu_unpack_759(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_760(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm5\n"
			"pslld $16,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
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
void simd_kvint_cu_unpack_761(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm5\n"
			"pslld $16,%%xmm6\n"
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
void simd_kvint_cu_unpack_762(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm5\n"
			"pslld $16,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
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
void simd_kvint_cu_unpack_763(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_764(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm5\n"
			"pslld $16,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
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
void simd_kvint_cu_unpack_765(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm3\n"
			"movdqu %2,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm5\n"
			"pslld $16,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_766(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm3\n"
			"movdqu %2,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm5\n"
			"pslld $16,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_767(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_768(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %8,%%xmm3\n"
			"movdqu %9,%%xmm4\n"
			"movdqu %10,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%6\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%7\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24]),"=m"(des[28])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_769(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_770(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm3\n"
			"movdqu %8,%%xmm4\n"
			"movdqu %9,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%6\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_771(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_772(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm3\n"
			"movdqu %8,%%xmm4\n"
			"movdqu %9,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%6\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_773(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_774(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_775(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_776(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm3\n"
			"movdqu %8,%%xmm4\n"
			"movdqu %9,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%6\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_777(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_778(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_779(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_780(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_781(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_782(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_783(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_784(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm3\n"
			"movdqu %8,%%xmm4\n"
			"movdqu %9,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%6\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_785(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_786(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_787(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_788(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_789(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_790(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_791(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_792(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_793(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_794(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_795(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_796(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_797(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_798(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_799(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_800(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm3\n"
			"movdqu %8,%%xmm4\n"
			"movdqu %9,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%6\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_801(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_802(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_803(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_804(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_805(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_806(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_807(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_808(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_809(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_810(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_811(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_812(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_813(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_814(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_815(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_816(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_817(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_818(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_819(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_820(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_821(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_822(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_823(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_824(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_825(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_826(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_827(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_828(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_829(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_830(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_831(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_832(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm3\n"
			"movdqu %8,%%xmm4\n"
			"movdqu %9,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%6\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_833(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_834(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_835(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_836(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_837(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_838(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_839(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_840(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_841(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_842(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_843(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_844(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_845(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_846(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_847(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_848(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_849(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_850(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_851(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_852(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_853(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_854(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_855(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_856(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_857(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_858(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_859(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_860(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_861(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_862(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_863(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_864(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_865(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_866(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_867(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_868(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_869(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_870(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_871(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_872(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_873(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_874(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_875(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_876(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_877(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_878(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_879(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_880(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_881(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_882(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_883(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_884(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_885(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_886(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_887(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_888(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_889(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_890(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_891(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_892(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_893(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_894(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_895(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_896(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm3\n"
			"movdqu %8,%%xmm4\n"
			"movdqu %9,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%6\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_897(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_898(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_899(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_900(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_901(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_902(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_903(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_904(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_905(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_906(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_907(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_908(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_909(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_910(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_911(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_912(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_913(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_914(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_915(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_916(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_917(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_918(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_919(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_920(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_921(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_922(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_923(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_924(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_925(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_926(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_927(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_928(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_929(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_930(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_931(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_932(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_933(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_934(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_935(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_936(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_937(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_938(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_939(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_940(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_941(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_942(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_943(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_944(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_945(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_946(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_947(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_948(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_949(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_950(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_951(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_952(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_953(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_954(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_955(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_956(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_957(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_958(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_959(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_960(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm3\n"
			"movdqu %7,%%xmm4\n"
			"movdqu %8,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_961(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_962(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_963(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_964(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_965(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_966(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_967(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_968(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_969(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_970(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_971(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_972(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_973(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_974(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_975(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_976(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_977(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_978(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_979(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_980(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_981(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_982(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_983(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_984(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_985(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_986(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_987(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_988(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_989(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_990(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_991(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_992(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm3\n"
			"movdqu %6,%%xmm4\n"
			"movdqu %7,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_993(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_994(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_995(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_996(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_997(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_998(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_999(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_1000(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_1001(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_1002(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_1003(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_1004(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqu %5,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_1005(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_1006(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqu %4,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_1007(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_1008(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm5\n"
			"pslld $24,%%xmm6\n"
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
void simd_kvint_cu_unpack_1009(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_1010(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm5\n"
			"pslld $24,%%xmm6\n"
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
void simd_kvint_cu_unpack_1011(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_1012(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm5\n"
			"pslld $24,%%xmm6\n"
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
void simd_kvint_cu_unpack_1013(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_1014(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm5\n"
			"pslld $24,%%xmm6\n"
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
void simd_kvint_cu_unpack_1015(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_1016(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm3\n"
			"movdqu %4,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm5\n"
			"pslld $24,%%xmm6\n"
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
void simd_kvint_cu_unpack_1017(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_1018(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm5\n"
			"pslld $24,%%xmm6\n"
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
void simd_kvint_cu_unpack_1019(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_1020(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm5\n"
			"pslld $24,%%xmm6\n"
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
void simd_kvint_cu_unpack_1021(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kvint_cu_unpack_1022(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm3\n"
			"movdqu %2,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm5\n"
			"pslld $24,%%xmm6\n"
			"por %%xmm6,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_cu_unpack_1023(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}

static KVIntCUUnpackInfo KVIntCUUnpackInfo_0 = { simd_kvint_cu_unpack_0<uint32_t>, 8, 32, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_1 = { simd_kvint_cu_unpack_1<uint32_t>, 8, 28, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_2 = { simd_kvint_cu_unpack_2<uint32_t>, 8, 28, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_3 = { simd_kvint_cu_unpack_3<uint32_t>, 8, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_4 = { simd_kvint_cu_unpack_4<uint32_t>, 8, 28, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_5 = { simd_kvint_cu_unpack_5<uint32_t>, 8, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_6 = { simd_kvint_cu_unpack_6<uint32_t>, 8, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_7 = { simd_kvint_cu_unpack_7<uint32_t>, 8, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_8 = { simd_kvint_cu_unpack_8<uint32_t>, 8, 28, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_9 = { simd_kvint_cu_unpack_9<uint32_t>, 8, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_10 = { simd_kvint_cu_unpack_10<uint32_t>, 8, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_11 = { simd_kvint_cu_unpack_11<uint32_t>, 8, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_12 = { simd_kvint_cu_unpack_12<uint32_t>, 8, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_13 = { simd_kvint_cu_unpack_13<uint32_t>, 8, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_14 = { simd_kvint_cu_unpack_14<uint32_t>, 8, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_15 = { simd_kvint_cu_unpack_15<uint32_t>, 0, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_16 = { simd_kvint_cu_unpack_16<uint32_t>, 8, 28, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_17 = { simd_kvint_cu_unpack_17<uint32_t>, 8, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_18 = { simd_kvint_cu_unpack_18<uint32_t>, 8, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_19 = { simd_kvint_cu_unpack_19<uint32_t>, 8, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_20 = { simd_kvint_cu_unpack_20<uint32_t>, 8, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_21 = { simd_kvint_cu_unpack_21<uint32_t>, 8, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_22 = { simd_kvint_cu_unpack_22<uint32_t>, 8, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_23 = { simd_kvint_cu_unpack_23<uint32_t>, 8, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_24 = { simd_kvint_cu_unpack_24<uint32_t>, 8, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_25 = { simd_kvint_cu_unpack_25<uint32_t>, 8, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_26 = { simd_kvint_cu_unpack_26<uint32_t>, 8, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_27 = { simd_kvint_cu_unpack_27<uint32_t>, 8, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_28 = { simd_kvint_cu_unpack_28<uint32_t>, 8, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_29 = { simd_kvint_cu_unpack_29<uint32_t>, 8, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_30 = { simd_kvint_cu_unpack_30<uint32_t>, 0, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_31 = { simd_kvint_cu_unpack_31<uint32_t>, 0, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_32 = { simd_kvint_cu_unpack_32<uint32_t>, 8, 28, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_33 = { simd_kvint_cu_unpack_33<uint32_t>, 8, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_34 = { simd_kvint_cu_unpack_34<uint32_t>, 8, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_35 = { simd_kvint_cu_unpack_35<uint32_t>, 8, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_36 = { simd_kvint_cu_unpack_36<uint32_t>, 8, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_37 = { simd_kvint_cu_unpack_37<uint32_t>, 8, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_38 = { simd_kvint_cu_unpack_38<uint32_t>, 8, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_39 = { simd_kvint_cu_unpack_39<uint32_t>, 8, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_40 = { simd_kvint_cu_unpack_40<uint32_t>, 8, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_41 = { simd_kvint_cu_unpack_41<uint32_t>, 8, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_42 = { simd_kvint_cu_unpack_42<uint32_t>, 8, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_43 = { simd_kvint_cu_unpack_43<uint32_t>, 8, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_44 = { simd_kvint_cu_unpack_44<uint32_t>, 8, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_45 = { simd_kvint_cu_unpack_45<uint32_t>, 8, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_46 = { simd_kvint_cu_unpack_46<uint32_t>, 8, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_47 = { simd_kvint_cu_unpack_47<uint32_t>, 0, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_48 = { simd_kvint_cu_unpack_48<uint32_t>, 8, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_49 = { simd_kvint_cu_unpack_49<uint32_t>, 8, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_50 = { simd_kvint_cu_unpack_50<uint32_t>, 8, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_51 = { simd_kvint_cu_unpack_51<uint32_t>, 8, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_52 = { simd_kvint_cu_unpack_52<uint32_t>, 8, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_53 = { simd_kvint_cu_unpack_53<uint32_t>, 8, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_54 = { simd_kvint_cu_unpack_54<uint32_t>, 8, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_55 = { simd_kvint_cu_unpack_55<uint32_t>, 8, 12, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_56 = { simd_kvint_cu_unpack_56<uint32_t>, 8, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_57 = { simd_kvint_cu_unpack_57<uint32_t>, 8, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_58 = { simd_kvint_cu_unpack_58<uint32_t>, 8, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_59 = { simd_kvint_cu_unpack_59<uint32_t>, 8, 12, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_60 = { simd_kvint_cu_unpack_60<uint32_t>, 0, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_61 = { simd_kvint_cu_unpack_61<uint32_t>, 0, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_62 = { simd_kvint_cu_unpack_62<uint32_t>, 0, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_63 = { simd_kvint_cu_unpack_63<uint32_t>, 0, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_64 = { simd_kvint_cu_unpack_64<uint32_t>, 8, 28, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_65 = { simd_kvint_cu_unpack_65<uint32_t>, 8, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_66 = { simd_kvint_cu_unpack_66<uint32_t>, 8, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_67 = { simd_kvint_cu_unpack_67<uint32_t>, 8, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_68 = { simd_kvint_cu_unpack_68<uint32_t>, 8, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_69 = { simd_kvint_cu_unpack_69<uint32_t>, 8, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_70 = { simd_kvint_cu_unpack_70<uint32_t>, 8, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_71 = { simd_kvint_cu_unpack_71<uint32_t>, 8, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_72 = { simd_kvint_cu_unpack_72<uint32_t>, 8, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_73 = { simd_kvint_cu_unpack_73<uint32_t>, 8, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_74 = { simd_kvint_cu_unpack_74<uint32_t>, 8, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_75 = { simd_kvint_cu_unpack_75<uint32_t>, 8, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_76 = { simd_kvint_cu_unpack_76<uint32_t>, 8, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_77 = { simd_kvint_cu_unpack_77<uint32_t>, 8, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_78 = { simd_kvint_cu_unpack_78<uint32_t>, 8, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_79 = { simd_kvint_cu_unpack_79<uint32_t>, 0, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_80 = { simd_kvint_cu_unpack_80<uint32_t>, 8, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_81 = { simd_kvint_cu_unpack_81<uint32_t>, 8, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_82 = { simd_kvint_cu_unpack_82<uint32_t>, 8, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_83 = { simd_kvint_cu_unpack_83<uint32_t>, 8, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_84 = { simd_kvint_cu_unpack_84<uint32_t>, 8, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_85 = { simd_kvint_cu_unpack_85<uint32_t>, 8, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_86 = { simd_kvint_cu_unpack_86<uint32_t>, 8, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_87 = { simd_kvint_cu_unpack_87<uint32_t>, 8, 12, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_88 = { simd_kvint_cu_unpack_88<uint32_t>, 8, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_89 = { simd_kvint_cu_unpack_89<uint32_t>, 8, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_90 = { simd_kvint_cu_unpack_90<uint32_t>, 8, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_91 = { simd_kvint_cu_unpack_91<uint32_t>, 8, 12, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_92 = { simd_kvint_cu_unpack_92<uint32_t>, 8, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_93 = { simd_kvint_cu_unpack_93<uint32_t>, 8, 12, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_94 = { simd_kvint_cu_unpack_94<uint32_t>, 0, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_95 = { simd_kvint_cu_unpack_95<uint32_t>, 0, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_96 = { simd_kvint_cu_unpack_96<uint32_t>, 8, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_97 = { simd_kvint_cu_unpack_97<uint32_t>, 8, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_98 = { simd_kvint_cu_unpack_98<uint32_t>, 8, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_99 = { simd_kvint_cu_unpack_99<uint32_t>, 8, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_100 = { simd_kvint_cu_unpack_100<uint32_t>, 8, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_101 = { simd_kvint_cu_unpack_101<uint32_t>, 8, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_102 = { simd_kvint_cu_unpack_102<uint32_t>, 8, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_103 = { simd_kvint_cu_unpack_103<uint32_t>, 8, 12, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_104 = { simd_kvint_cu_unpack_104<uint32_t>, 8, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_105 = { simd_kvint_cu_unpack_105<uint32_t>, 8, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_106 = { simd_kvint_cu_unpack_106<uint32_t>, 8, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_107 = { simd_kvint_cu_unpack_107<uint32_t>, 8, 12, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_108 = { simd_kvint_cu_unpack_108<uint32_t>, 8, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_109 = { simd_kvint_cu_unpack_109<uint32_t>, 8, 12, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_110 = { simd_kvint_cu_unpack_110<uint32_t>, 8, 12, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_111 = { simd_kvint_cu_unpack_111<uint32_t>, 0, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_112 = { simd_kvint_cu_unpack_112<uint32_t>, 8, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_113 = { simd_kvint_cu_unpack_113<uint32_t>, 8, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_114 = { simd_kvint_cu_unpack_114<uint32_t>, 8, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_115 = { simd_kvint_cu_unpack_115<uint32_t>, 8, 12, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_116 = { simd_kvint_cu_unpack_116<uint32_t>, 8, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_117 = { simd_kvint_cu_unpack_117<uint32_t>, 8, 12, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_118 = { simd_kvint_cu_unpack_118<uint32_t>, 8, 12, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_119 = { simd_kvint_cu_unpack_119<uint32_t>, 8, 8, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_120 = { simd_kvint_cu_unpack_120<uint32_t>, 0, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_121 = { simd_kvint_cu_unpack_121<uint32_t>, 0, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_122 = { simd_kvint_cu_unpack_122<uint32_t>, 0, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_123 = { simd_kvint_cu_unpack_123<uint32_t>, 0, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_124 = { simd_kvint_cu_unpack_124<uint32_t>, 0, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_125 = { simd_kvint_cu_unpack_125<uint32_t>, 0, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_126 = { simd_kvint_cu_unpack_126<uint32_t>, 0, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_127 = { simd_kvint_cu_unpack_127<uint32_t>, 0, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_128 = { simd_kvint_cu_unpack_128<uint32_t>, 4, 28, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_129 = { simd_kvint_cu_unpack_129<uint32_t>, 4, 24, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_130 = { simd_kvint_cu_unpack_130<uint32_t>, 4, 24, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_131 = { simd_kvint_cu_unpack_131<uint32_t>, 4, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_132 = { simd_kvint_cu_unpack_132<uint32_t>, 4, 24, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_133 = { simd_kvint_cu_unpack_133<uint32_t>, 4, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_134 = { simd_kvint_cu_unpack_134<uint32_t>, 4, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_135 = { simd_kvint_cu_unpack_135<uint32_t>, 4, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_136 = { simd_kvint_cu_unpack_136<uint32_t>, 4, 24, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_137 = { simd_kvint_cu_unpack_137<uint32_t>, 4, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_138 = { simd_kvint_cu_unpack_138<uint32_t>, 4, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_139 = { simd_kvint_cu_unpack_139<uint32_t>, 4, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_140 = { simd_kvint_cu_unpack_140<uint32_t>, 4, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_141 = { simd_kvint_cu_unpack_141<uint32_t>, 4, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_142 = { simd_kvint_cu_unpack_142<uint32_t>, 4, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_143 = { simd_kvint_cu_unpack_143<uint32_t>, -4, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_144 = { simd_kvint_cu_unpack_144<uint32_t>, 4, 24, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_145 = { simd_kvint_cu_unpack_145<uint32_t>, 4, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_146 = { simd_kvint_cu_unpack_146<uint32_t>, 4, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_147 = { simd_kvint_cu_unpack_147<uint32_t>, 4, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_148 = { simd_kvint_cu_unpack_148<uint32_t>, 4, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_149 = { simd_kvint_cu_unpack_149<uint32_t>, 4, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_150 = { simd_kvint_cu_unpack_150<uint32_t>, 4, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_151 = { simd_kvint_cu_unpack_151<uint32_t>, 4, 12, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_152 = { simd_kvint_cu_unpack_152<uint32_t>, 4, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_153 = { simd_kvint_cu_unpack_153<uint32_t>, 4, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_154 = { simd_kvint_cu_unpack_154<uint32_t>, 4, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_155 = { simd_kvint_cu_unpack_155<uint32_t>, 4, 12, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_156 = { simd_kvint_cu_unpack_156<uint32_t>, 4, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_157 = { simd_kvint_cu_unpack_157<uint32_t>, 4, 12, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_158 = { simd_kvint_cu_unpack_158<uint32_t>, -4, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_159 = { simd_kvint_cu_unpack_159<uint32_t>, -4, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_160 = { simd_kvint_cu_unpack_160<uint32_t>, 4, 24, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_161 = { simd_kvint_cu_unpack_161<uint32_t>, 4, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_162 = { simd_kvint_cu_unpack_162<uint32_t>, 4, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_163 = { simd_kvint_cu_unpack_163<uint32_t>, 4, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_164 = { simd_kvint_cu_unpack_164<uint32_t>, 4, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_165 = { simd_kvint_cu_unpack_165<uint32_t>, 4, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_166 = { simd_kvint_cu_unpack_166<uint32_t>, 4, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_167 = { simd_kvint_cu_unpack_167<uint32_t>, 4, 12, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_168 = { simd_kvint_cu_unpack_168<uint32_t>, 4, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_169 = { simd_kvint_cu_unpack_169<uint32_t>, 4, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_170 = { simd_kvint_cu_unpack_170<uint32_t>, 4, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_171 = { simd_kvint_cu_unpack_171<uint32_t>, 4, 12, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_172 = { simd_kvint_cu_unpack_172<uint32_t>, 4, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_173 = { simd_kvint_cu_unpack_173<uint32_t>, 4, 12, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_174 = { simd_kvint_cu_unpack_174<uint32_t>, 4, 12, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_175 = { simd_kvint_cu_unpack_175<uint32_t>, -4, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_176 = { simd_kvint_cu_unpack_176<uint32_t>, 4, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_177 = { simd_kvint_cu_unpack_177<uint32_t>, 4, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_178 = { simd_kvint_cu_unpack_178<uint32_t>, 4, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_179 = { simd_kvint_cu_unpack_179<uint32_t>, 4, 12, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_180 = { simd_kvint_cu_unpack_180<uint32_t>, 4, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_181 = { simd_kvint_cu_unpack_181<uint32_t>, 4, 12, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_182 = { simd_kvint_cu_unpack_182<uint32_t>, 4, 12, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_183 = { simd_kvint_cu_unpack_183<uint32_t>, 4, 8, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_184 = { simd_kvint_cu_unpack_184<uint32_t>, 4, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_185 = { simd_kvint_cu_unpack_185<uint32_t>, 4, 12, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_186 = { simd_kvint_cu_unpack_186<uint32_t>, 4, 12, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_187 = { simd_kvint_cu_unpack_187<uint32_t>, 4, 8, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_188 = { simd_kvint_cu_unpack_188<uint32_t>, -4, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_189 = { simd_kvint_cu_unpack_189<uint32_t>, -4, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_190 = { simd_kvint_cu_unpack_190<uint32_t>, -4, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_191 = { simd_kvint_cu_unpack_191<uint32_t>, -4, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_192 = { simd_kvint_cu_unpack_192<uint32_t>, 4, 24, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_193 = { simd_kvint_cu_unpack_193<uint32_t>, 4, 20, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_194 = { simd_kvint_cu_unpack_194<uint32_t>, 4, 20, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_195 = { simd_kvint_cu_unpack_195<uint32_t>, 4, 16, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_196 = { simd_kvint_cu_unpack_196<uint32_t>, 4, 20, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_197 = { simd_kvint_cu_unpack_197<uint32_t>, 4, 16, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_198 = { simd_kvint_cu_unpack_198<uint32_t>, 4, 16, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_199 = { simd_kvint_cu_unpack_199<uint32_t>, 4, 12, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_200 = { simd_kvint_cu_unpack_200<uint32_t>, 4, 20, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_201 = { simd_kvint_cu_unpack_201<uint32_t>, 4, 16, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_202 = { simd_kvint_cu_unpack_202<uint32_t>, 4, 16, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_203 = { simd_kvint_cu_unpack_203<uint32_t>, 4, 12, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_204 = { simd_kvint_cu_unpack_204<uint32_t>, 4, 16, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_205 = { simd_kvint_cu_unpack_205<uint32_t>, 4, 12, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_206 = { simd_kvint_cu_unpack_206<uint32_t>, 4, 12, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_207 = { simd_kvint_cu_unpack_207<uint32_t>, -4, 0, 2, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_208 = { simd_kvint_cu_unpack_208<uint32_t>, 4, 20, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_209 = { simd_kvint_cu_unpack_209<uint32_t>, 4, 16, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_210 = { simd_kvint_cu_unpack_210<uint32_t>, 4, 16, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_211 = { simd_kvint_cu_unpack_211<uint32_t>, 4, 12, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_212 = { simd_kvint_cu_unpack_212<uint32_t>, 4, 16, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_213 = { simd_kvint_cu_unpack_213<uint32_t>, 4, 12, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_214 = { simd_kvint_cu_unpack_214<uint32_t>, 4, 12, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_215 = { simd_kvint_cu_unpack_215<uint32_t>, 4, 8, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_216 = { simd_kvint_cu_unpack_216<uint32_t>, 4, 16, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_217 = { simd_kvint_cu_unpack_217<uint32_t>, 4, 12, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_218 = { simd_kvint_cu_unpack_218<uint32_t>, 4, 12, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_219 = { simd_kvint_cu_unpack_219<uint32_t>, 4, 8, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_220 = { simd_kvint_cu_unpack_220<uint32_t>, 4, 12, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_221 = { simd_kvint_cu_unpack_221<uint32_t>, 4, 8, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_222 = { simd_kvint_cu_unpack_222<uint32_t>, -4, 0, 2, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_223 = { simd_kvint_cu_unpack_223<uint32_t>, -4, 0, 2, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_224 = { simd_kvint_cu_unpack_224<uint32_t>, 4, 20, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_225 = { simd_kvint_cu_unpack_225<uint32_t>, 4, 16, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_226 = { simd_kvint_cu_unpack_226<uint32_t>, 4, 16, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_227 = { simd_kvint_cu_unpack_227<uint32_t>, 4, 12, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_228 = { simd_kvint_cu_unpack_228<uint32_t>, 4, 16, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_229 = { simd_kvint_cu_unpack_229<uint32_t>, 4, 12, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_230 = { simd_kvint_cu_unpack_230<uint32_t>, 4, 12, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_231 = { simd_kvint_cu_unpack_231<uint32_t>, 4, 8, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_232 = { simd_kvint_cu_unpack_232<uint32_t>, 4, 16, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_233 = { simd_kvint_cu_unpack_233<uint32_t>, 4, 12, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_234 = { simd_kvint_cu_unpack_234<uint32_t>, 4, 12, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_235 = { simd_kvint_cu_unpack_235<uint32_t>, 4, 8, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_236 = { simd_kvint_cu_unpack_236<uint32_t>, 4, 12, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_237 = { simd_kvint_cu_unpack_237<uint32_t>, 4, 8, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_238 = { simd_kvint_cu_unpack_238<uint32_t>, 4, 8, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_239 = { simd_kvint_cu_unpack_239<uint32_t>, -4, 0, 3, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_240 = { simd_kvint_cu_unpack_240<uint32_t>, 0, 16, 4, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_241 = { simd_kvint_cu_unpack_241<uint32_t>, 0, 12, 4, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_242 = { simd_kvint_cu_unpack_242<uint32_t>, 0, 12, 4, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_243 = { simd_kvint_cu_unpack_243<uint32_t>, 0, 8, 4, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_244 = { simd_kvint_cu_unpack_244<uint32_t>, 0, 12, 4, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_245 = { simd_kvint_cu_unpack_245<uint32_t>, 0, 8, 4, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_246 = { simd_kvint_cu_unpack_246<uint32_t>, 0, 8, 4, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_247 = { simd_kvint_cu_unpack_247<uint32_t>, 0, 4, 4, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_248 = { simd_kvint_cu_unpack_248<uint32_t>, 0, 12, 5, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_249 = { simd_kvint_cu_unpack_249<uint32_t>, 0, 8, 5, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_250 = { simd_kvint_cu_unpack_250<uint32_t>, 0, 8, 5, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_251 = { simd_kvint_cu_unpack_251<uint32_t>, 0, 4, 5, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_252 = { simd_kvint_cu_unpack_252<uint32_t>, 0, 8, 6, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_253 = { simd_kvint_cu_unpack_253<uint32_t>, 0, 4, 6, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_254 = { simd_kvint_cu_unpack_254<uint32_t>, 0, 4, 7, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_255 = { simd_kvint_cu_unpack_255<uint32_t>, -4, 0, 8, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_256 = { simd_kvint_cu_unpack_256<uint32_t>, 12, 32, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_257 = { simd_kvint_cu_unpack_257<uint32_t>, 12, 28, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_258 = { simd_kvint_cu_unpack_258<uint32_t>, 12, 28, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_259 = { simd_kvint_cu_unpack_259<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_260 = { simd_kvint_cu_unpack_260<uint32_t>, 12, 28, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_261 = { simd_kvint_cu_unpack_261<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_262 = { simd_kvint_cu_unpack_262<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_263 = { simd_kvint_cu_unpack_263<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_264 = { simd_kvint_cu_unpack_264<uint32_t>, 12, 28, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_265 = { simd_kvint_cu_unpack_265<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_266 = { simd_kvint_cu_unpack_266<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_267 = { simd_kvint_cu_unpack_267<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_268 = { simd_kvint_cu_unpack_268<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_269 = { simd_kvint_cu_unpack_269<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_270 = { simd_kvint_cu_unpack_270<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_271 = { simd_kvint_cu_unpack_271<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_272 = { simd_kvint_cu_unpack_272<uint32_t>, 12, 28, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_273 = { simd_kvint_cu_unpack_273<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_274 = { simd_kvint_cu_unpack_274<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_275 = { simd_kvint_cu_unpack_275<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_276 = { simd_kvint_cu_unpack_276<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_277 = { simd_kvint_cu_unpack_277<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_278 = { simd_kvint_cu_unpack_278<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_279 = { simd_kvint_cu_unpack_279<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_280 = { simd_kvint_cu_unpack_280<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_281 = { simd_kvint_cu_unpack_281<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_282 = { simd_kvint_cu_unpack_282<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_283 = { simd_kvint_cu_unpack_283<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_284 = { simd_kvint_cu_unpack_284<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_285 = { simd_kvint_cu_unpack_285<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_286 = { simd_kvint_cu_unpack_286<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_287 = { simd_kvint_cu_unpack_287<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_288 = { simd_kvint_cu_unpack_288<uint32_t>, 12, 28, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_289 = { simd_kvint_cu_unpack_289<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_290 = { simd_kvint_cu_unpack_290<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_291 = { simd_kvint_cu_unpack_291<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_292 = { simd_kvint_cu_unpack_292<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_293 = { simd_kvint_cu_unpack_293<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_294 = { simd_kvint_cu_unpack_294<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_295 = { simd_kvint_cu_unpack_295<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_296 = { simd_kvint_cu_unpack_296<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_297 = { simd_kvint_cu_unpack_297<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_298 = { simd_kvint_cu_unpack_298<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_299 = { simd_kvint_cu_unpack_299<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_300 = { simd_kvint_cu_unpack_300<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_301 = { simd_kvint_cu_unpack_301<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_302 = { simd_kvint_cu_unpack_302<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_303 = { simd_kvint_cu_unpack_303<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_304 = { simd_kvint_cu_unpack_304<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_305 = { simd_kvint_cu_unpack_305<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_306 = { simd_kvint_cu_unpack_306<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_307 = { simd_kvint_cu_unpack_307<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_308 = { simd_kvint_cu_unpack_308<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_309 = { simd_kvint_cu_unpack_309<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_310 = { simd_kvint_cu_unpack_310<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_311 = { simd_kvint_cu_unpack_311<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_312 = { simd_kvint_cu_unpack_312<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_313 = { simd_kvint_cu_unpack_313<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_314 = { simd_kvint_cu_unpack_314<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_315 = { simd_kvint_cu_unpack_315<uint32_t>, 12, 12, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_316 = { simd_kvint_cu_unpack_316<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_317 = { simd_kvint_cu_unpack_317<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_318 = { simd_kvint_cu_unpack_318<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_319 = { simd_kvint_cu_unpack_319<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_320 = { simd_kvint_cu_unpack_320<uint32_t>, 12, 28, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_321 = { simd_kvint_cu_unpack_321<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_322 = { simd_kvint_cu_unpack_322<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_323 = { simd_kvint_cu_unpack_323<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_324 = { simd_kvint_cu_unpack_324<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_325 = { simd_kvint_cu_unpack_325<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_326 = { simd_kvint_cu_unpack_326<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_327 = { simd_kvint_cu_unpack_327<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_328 = { simd_kvint_cu_unpack_328<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_329 = { simd_kvint_cu_unpack_329<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_330 = { simd_kvint_cu_unpack_330<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_331 = { simd_kvint_cu_unpack_331<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_332 = { simd_kvint_cu_unpack_332<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_333 = { simd_kvint_cu_unpack_333<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_334 = { simd_kvint_cu_unpack_334<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_335 = { simd_kvint_cu_unpack_335<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_336 = { simd_kvint_cu_unpack_336<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_337 = { simd_kvint_cu_unpack_337<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_338 = { simd_kvint_cu_unpack_338<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_339 = { simd_kvint_cu_unpack_339<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_340 = { simd_kvint_cu_unpack_340<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_341 = { simd_kvint_cu_unpack_341<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_342 = { simd_kvint_cu_unpack_342<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_343 = { simd_kvint_cu_unpack_343<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_344 = { simd_kvint_cu_unpack_344<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_345 = { simd_kvint_cu_unpack_345<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_346 = { simd_kvint_cu_unpack_346<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_347 = { simd_kvint_cu_unpack_347<uint32_t>, 12, 12, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_348 = { simd_kvint_cu_unpack_348<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_349 = { simd_kvint_cu_unpack_349<uint32_t>, 12, 12, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_350 = { simd_kvint_cu_unpack_350<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_351 = { simd_kvint_cu_unpack_351<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_352 = { simd_kvint_cu_unpack_352<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_353 = { simd_kvint_cu_unpack_353<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_354 = { simd_kvint_cu_unpack_354<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_355 = { simd_kvint_cu_unpack_355<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_356 = { simd_kvint_cu_unpack_356<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_357 = { simd_kvint_cu_unpack_357<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_358 = { simd_kvint_cu_unpack_358<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_359 = { simd_kvint_cu_unpack_359<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_360 = { simd_kvint_cu_unpack_360<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_361 = { simd_kvint_cu_unpack_361<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_362 = { simd_kvint_cu_unpack_362<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_363 = { simd_kvint_cu_unpack_363<uint32_t>, 12, 12, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_364 = { simd_kvint_cu_unpack_364<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_365 = { simd_kvint_cu_unpack_365<uint32_t>, 12, 12, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_366 = { simd_kvint_cu_unpack_366<uint32_t>, 12, 12, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_367 = { simd_kvint_cu_unpack_367<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_368 = { simd_kvint_cu_unpack_368<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_369 = { simd_kvint_cu_unpack_369<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_370 = { simd_kvint_cu_unpack_370<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_371 = { simd_kvint_cu_unpack_371<uint32_t>, 12, 12, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_372 = { simd_kvint_cu_unpack_372<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_373 = { simd_kvint_cu_unpack_373<uint32_t>, 12, 12, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_374 = { simd_kvint_cu_unpack_374<uint32_t>, 12, 12, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_375 = { simd_kvint_cu_unpack_375<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_376 = { simd_kvint_cu_unpack_376<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_377 = { simd_kvint_cu_unpack_377<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_378 = { simd_kvint_cu_unpack_378<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_379 = { simd_kvint_cu_unpack_379<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_380 = { simd_kvint_cu_unpack_380<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_381 = { simd_kvint_cu_unpack_381<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_382 = { simd_kvint_cu_unpack_382<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_383 = { simd_kvint_cu_unpack_383<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_384 = { simd_kvint_cu_unpack_384<uint32_t>, 8, 28, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_385 = { simd_kvint_cu_unpack_385<uint32_t>, 8, 24, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_386 = { simd_kvint_cu_unpack_386<uint32_t>, 8, 24, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_387 = { simd_kvint_cu_unpack_387<uint32_t>, 8, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_388 = { simd_kvint_cu_unpack_388<uint32_t>, 8, 24, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_389 = { simd_kvint_cu_unpack_389<uint32_t>, 8, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_390 = { simd_kvint_cu_unpack_390<uint32_t>, 8, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_391 = { simd_kvint_cu_unpack_391<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_392 = { simd_kvint_cu_unpack_392<uint32_t>, 8, 24, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_393 = { simd_kvint_cu_unpack_393<uint32_t>, 8, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_394 = { simd_kvint_cu_unpack_394<uint32_t>, 8, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_395 = { simd_kvint_cu_unpack_395<uint32_t>, 8, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_396 = { simd_kvint_cu_unpack_396<uint32_t>, 8, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_397 = { simd_kvint_cu_unpack_397<uint32_t>, 8, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_398 = { simd_kvint_cu_unpack_398<uint32_t>, 8, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_399 = { simd_kvint_cu_unpack_399<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_400 = { simd_kvint_cu_unpack_400<uint32_t>, 8, 24, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_401 = { simd_kvint_cu_unpack_401<uint32_t>, 8, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_402 = { simd_kvint_cu_unpack_402<uint32_t>, 8, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_403 = { simd_kvint_cu_unpack_403<uint32_t>, 8, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_404 = { simd_kvint_cu_unpack_404<uint32_t>, 8, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_405 = { simd_kvint_cu_unpack_405<uint32_t>, 8, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_406 = { simd_kvint_cu_unpack_406<uint32_t>, 8, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_407 = { simd_kvint_cu_unpack_407<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_408 = { simd_kvint_cu_unpack_408<uint32_t>, 8, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_409 = { simd_kvint_cu_unpack_409<uint32_t>, 8, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_410 = { simd_kvint_cu_unpack_410<uint32_t>, 8, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_411 = { simd_kvint_cu_unpack_411<uint32_t>, 8, 12, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_412 = { simd_kvint_cu_unpack_412<uint32_t>, 8, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_413 = { simd_kvint_cu_unpack_413<uint32_t>, 8, 12, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_414 = { simd_kvint_cu_unpack_414<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_415 = { simd_kvint_cu_unpack_415<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_416 = { simd_kvint_cu_unpack_416<uint32_t>, 8, 24, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_417 = { simd_kvint_cu_unpack_417<uint32_t>, 8, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_418 = { simd_kvint_cu_unpack_418<uint32_t>, 8, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_419 = { simd_kvint_cu_unpack_419<uint32_t>, 8, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_420 = { simd_kvint_cu_unpack_420<uint32_t>, 8, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_421 = { simd_kvint_cu_unpack_421<uint32_t>, 8, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_422 = { simd_kvint_cu_unpack_422<uint32_t>, 8, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_423 = { simd_kvint_cu_unpack_423<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_424 = { simd_kvint_cu_unpack_424<uint32_t>, 8, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_425 = { simd_kvint_cu_unpack_425<uint32_t>, 8, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_426 = { simd_kvint_cu_unpack_426<uint32_t>, 8, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_427 = { simd_kvint_cu_unpack_427<uint32_t>, 8, 12, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_428 = { simd_kvint_cu_unpack_428<uint32_t>, 8, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_429 = { simd_kvint_cu_unpack_429<uint32_t>, 8, 12, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_430 = { simd_kvint_cu_unpack_430<uint32_t>, 8, 12, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_431 = { simd_kvint_cu_unpack_431<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_432 = { simd_kvint_cu_unpack_432<uint32_t>, 8, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_433 = { simd_kvint_cu_unpack_433<uint32_t>, 8, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_434 = { simd_kvint_cu_unpack_434<uint32_t>, 8, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_435 = { simd_kvint_cu_unpack_435<uint32_t>, 8, 12, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_436 = { simd_kvint_cu_unpack_436<uint32_t>, 8, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_437 = { simd_kvint_cu_unpack_437<uint32_t>, 8, 12, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_438 = { simd_kvint_cu_unpack_438<uint32_t>, 8, 12, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_439 = { simd_kvint_cu_unpack_439<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_440 = { simd_kvint_cu_unpack_440<uint32_t>, 8, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_441 = { simd_kvint_cu_unpack_441<uint32_t>, 8, 12, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_442 = { simd_kvint_cu_unpack_442<uint32_t>, 8, 12, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_443 = { simd_kvint_cu_unpack_443<uint32_t>, 8, 8, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_444 = { simd_kvint_cu_unpack_444<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_445 = { simd_kvint_cu_unpack_445<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_446 = { simd_kvint_cu_unpack_446<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_447 = { simd_kvint_cu_unpack_447<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_448 = { simd_kvint_cu_unpack_448<uint32_t>, 8, 24, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_449 = { simd_kvint_cu_unpack_449<uint32_t>, 8, 20, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_450 = { simd_kvint_cu_unpack_450<uint32_t>, 8, 20, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_451 = { simd_kvint_cu_unpack_451<uint32_t>, 8, 16, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_452 = { simd_kvint_cu_unpack_452<uint32_t>, 8, 20, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_453 = { simd_kvint_cu_unpack_453<uint32_t>, 8, 16, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_454 = { simd_kvint_cu_unpack_454<uint32_t>, 8, 16, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_455 = { simd_kvint_cu_unpack_455<uint32_t>, 0, 0, 2, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_456 = { simd_kvint_cu_unpack_456<uint32_t>, 8, 20, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_457 = { simd_kvint_cu_unpack_457<uint32_t>, 8, 16, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_458 = { simd_kvint_cu_unpack_458<uint32_t>, 8, 16, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_459 = { simd_kvint_cu_unpack_459<uint32_t>, 8, 12, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_460 = { simd_kvint_cu_unpack_460<uint32_t>, 8, 16, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_461 = { simd_kvint_cu_unpack_461<uint32_t>, 8, 12, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_462 = { simd_kvint_cu_unpack_462<uint32_t>, 8, 12, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_463 = { simd_kvint_cu_unpack_463<uint32_t>, 0, 0, 2, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_464 = { simd_kvint_cu_unpack_464<uint32_t>, 8, 20, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_465 = { simd_kvint_cu_unpack_465<uint32_t>, 8, 16, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_466 = { simd_kvint_cu_unpack_466<uint32_t>, 8, 16, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_467 = { simd_kvint_cu_unpack_467<uint32_t>, 8, 12, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_468 = { simd_kvint_cu_unpack_468<uint32_t>, 8, 16, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_469 = { simd_kvint_cu_unpack_469<uint32_t>, 8, 12, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_470 = { simd_kvint_cu_unpack_470<uint32_t>, 8, 12, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_471 = { simd_kvint_cu_unpack_471<uint32_t>, 0, 0, 2, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_472 = { simd_kvint_cu_unpack_472<uint32_t>, 8, 16, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_473 = { simd_kvint_cu_unpack_473<uint32_t>, 8, 12, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_474 = { simd_kvint_cu_unpack_474<uint32_t>, 8, 12, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_475 = { simd_kvint_cu_unpack_475<uint32_t>, 8, 8, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_476 = { simd_kvint_cu_unpack_476<uint32_t>, 8, 12, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_477 = { simd_kvint_cu_unpack_477<uint32_t>, 8, 8, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_478 = { simd_kvint_cu_unpack_478<uint32_t>, 0, 0, 2, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_479 = { simd_kvint_cu_unpack_479<uint32_t>, 0, 0, 2, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_480 = { simd_kvint_cu_unpack_480<uint32_t>, 8, 20, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_481 = { simd_kvint_cu_unpack_481<uint32_t>, 8, 16, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_482 = { simd_kvint_cu_unpack_482<uint32_t>, 8, 16, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_483 = { simd_kvint_cu_unpack_483<uint32_t>, 8, 12, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_484 = { simd_kvint_cu_unpack_484<uint32_t>, 8, 16, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_485 = { simd_kvint_cu_unpack_485<uint32_t>, 8, 12, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_486 = { simd_kvint_cu_unpack_486<uint32_t>, 8, 12, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_487 = { simd_kvint_cu_unpack_487<uint32_t>, 0, 0, 3, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_488 = { simd_kvint_cu_unpack_488<uint32_t>, 8, 16, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_489 = { simd_kvint_cu_unpack_489<uint32_t>, 8, 12, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_490 = { simd_kvint_cu_unpack_490<uint32_t>, 8, 12, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_491 = { simd_kvint_cu_unpack_491<uint32_t>, 8, 8, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_492 = { simd_kvint_cu_unpack_492<uint32_t>, 8, 12, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_493 = { simd_kvint_cu_unpack_493<uint32_t>, 8, 8, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_494 = { simd_kvint_cu_unpack_494<uint32_t>, 8, 8, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_495 = { simd_kvint_cu_unpack_495<uint32_t>, 0, 0, 3, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_496 = { simd_kvint_cu_unpack_496<uint32_t>, 4, 16, 4, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_497 = { simd_kvint_cu_unpack_497<uint32_t>, 4, 12, 4, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_498 = { simd_kvint_cu_unpack_498<uint32_t>, 4, 12, 4, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_499 = { simd_kvint_cu_unpack_499<uint32_t>, 4, 8, 4, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_500 = { simd_kvint_cu_unpack_500<uint32_t>, 4, 12, 4, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_501 = { simd_kvint_cu_unpack_501<uint32_t>, 4, 8, 4, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_502 = { simd_kvint_cu_unpack_502<uint32_t>, 4, 8, 4, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_503 = { simd_kvint_cu_unpack_503<uint32_t>, 0, 0, 4, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_504 = { simd_kvint_cu_unpack_504<uint32_t>, 4, 12, 5, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_505 = { simd_kvint_cu_unpack_505<uint32_t>, 4, 8, 5, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_506 = { simd_kvint_cu_unpack_506<uint32_t>, 4, 8, 5, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_507 = { simd_kvint_cu_unpack_507<uint32_t>, 4, 4, 5, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_508 = { simd_kvint_cu_unpack_508<uint32_t>, 4, 8, 6, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_509 = { simd_kvint_cu_unpack_509<uint32_t>, 4, 4, 6, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_510 = { simd_kvint_cu_unpack_510<uint32_t>, 4, 4, 7, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_511 = { simd_kvint_cu_unpack_511<uint32_t>, 0, 0, 8, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_512 = { simd_kvint_cu_unpack_512<uint32_t>, 12, 32, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_513 = { simd_kvint_cu_unpack_513<uint32_t>, 12, 28, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_514 = { simd_kvint_cu_unpack_514<uint32_t>, 12, 28, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_515 = { simd_kvint_cu_unpack_515<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_516 = { simd_kvint_cu_unpack_516<uint32_t>, 12, 28, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_517 = { simd_kvint_cu_unpack_517<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_518 = { simd_kvint_cu_unpack_518<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_519 = { simd_kvint_cu_unpack_519<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_520 = { simd_kvint_cu_unpack_520<uint32_t>, 12, 28, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_521 = { simd_kvint_cu_unpack_521<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_522 = { simd_kvint_cu_unpack_522<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_523 = { simd_kvint_cu_unpack_523<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_524 = { simd_kvint_cu_unpack_524<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_525 = { simd_kvint_cu_unpack_525<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_526 = { simd_kvint_cu_unpack_526<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_527 = { simd_kvint_cu_unpack_527<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_528 = { simd_kvint_cu_unpack_528<uint32_t>, 12, 28, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_529 = { simd_kvint_cu_unpack_529<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_530 = { simd_kvint_cu_unpack_530<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_531 = { simd_kvint_cu_unpack_531<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_532 = { simd_kvint_cu_unpack_532<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_533 = { simd_kvint_cu_unpack_533<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_534 = { simd_kvint_cu_unpack_534<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_535 = { simd_kvint_cu_unpack_535<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_536 = { simd_kvint_cu_unpack_536<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_537 = { simd_kvint_cu_unpack_537<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_538 = { simd_kvint_cu_unpack_538<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_539 = { simd_kvint_cu_unpack_539<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_540 = { simd_kvint_cu_unpack_540<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_541 = { simd_kvint_cu_unpack_541<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_542 = { simd_kvint_cu_unpack_542<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_543 = { simd_kvint_cu_unpack_543<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_544 = { simd_kvint_cu_unpack_544<uint32_t>, 12, 28, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_545 = { simd_kvint_cu_unpack_545<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_546 = { simd_kvint_cu_unpack_546<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_547 = { simd_kvint_cu_unpack_547<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_548 = { simd_kvint_cu_unpack_548<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_549 = { simd_kvint_cu_unpack_549<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_550 = { simd_kvint_cu_unpack_550<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_551 = { simd_kvint_cu_unpack_551<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_552 = { simd_kvint_cu_unpack_552<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_553 = { simd_kvint_cu_unpack_553<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_554 = { simd_kvint_cu_unpack_554<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_555 = { simd_kvint_cu_unpack_555<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_556 = { simd_kvint_cu_unpack_556<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_557 = { simd_kvint_cu_unpack_557<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_558 = { simd_kvint_cu_unpack_558<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_559 = { simd_kvint_cu_unpack_559<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_560 = { simd_kvint_cu_unpack_560<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_561 = { simd_kvint_cu_unpack_561<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_562 = { simd_kvint_cu_unpack_562<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_563 = { simd_kvint_cu_unpack_563<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_564 = { simd_kvint_cu_unpack_564<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_565 = { simd_kvint_cu_unpack_565<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_566 = { simd_kvint_cu_unpack_566<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_567 = { simd_kvint_cu_unpack_567<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_568 = { simd_kvint_cu_unpack_568<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_569 = { simd_kvint_cu_unpack_569<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_570 = { simd_kvint_cu_unpack_570<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_571 = { simd_kvint_cu_unpack_571<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_572 = { simd_kvint_cu_unpack_572<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_573 = { simd_kvint_cu_unpack_573<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_574 = { simd_kvint_cu_unpack_574<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_575 = { simd_kvint_cu_unpack_575<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_576 = { simd_kvint_cu_unpack_576<uint32_t>, 12, 28, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_577 = { simd_kvint_cu_unpack_577<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_578 = { simd_kvint_cu_unpack_578<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_579 = { simd_kvint_cu_unpack_579<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_580 = { simd_kvint_cu_unpack_580<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_581 = { simd_kvint_cu_unpack_581<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_582 = { simd_kvint_cu_unpack_582<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_583 = { simd_kvint_cu_unpack_583<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_584 = { simd_kvint_cu_unpack_584<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_585 = { simd_kvint_cu_unpack_585<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_586 = { simd_kvint_cu_unpack_586<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_587 = { simd_kvint_cu_unpack_587<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_588 = { simd_kvint_cu_unpack_588<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_589 = { simd_kvint_cu_unpack_589<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_590 = { simd_kvint_cu_unpack_590<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_591 = { simd_kvint_cu_unpack_591<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_592 = { simd_kvint_cu_unpack_592<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_593 = { simd_kvint_cu_unpack_593<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_594 = { simd_kvint_cu_unpack_594<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_595 = { simd_kvint_cu_unpack_595<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_596 = { simd_kvint_cu_unpack_596<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_597 = { simd_kvint_cu_unpack_597<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_598 = { simd_kvint_cu_unpack_598<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_599 = { simd_kvint_cu_unpack_599<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_600 = { simd_kvint_cu_unpack_600<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_601 = { simd_kvint_cu_unpack_601<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_602 = { simd_kvint_cu_unpack_602<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_603 = { simd_kvint_cu_unpack_603<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_604 = { simd_kvint_cu_unpack_604<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_605 = { simd_kvint_cu_unpack_605<uint32_t>, 12, 12, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_606 = { simd_kvint_cu_unpack_606<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_607 = { simd_kvint_cu_unpack_607<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_608 = { simd_kvint_cu_unpack_608<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_609 = { simd_kvint_cu_unpack_609<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_610 = { simd_kvint_cu_unpack_610<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_611 = { simd_kvint_cu_unpack_611<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_612 = { simd_kvint_cu_unpack_612<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_613 = { simd_kvint_cu_unpack_613<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_614 = { simd_kvint_cu_unpack_614<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_615 = { simd_kvint_cu_unpack_615<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_616 = { simd_kvint_cu_unpack_616<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_617 = { simd_kvint_cu_unpack_617<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_618 = { simd_kvint_cu_unpack_618<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_619 = { simd_kvint_cu_unpack_619<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_620 = { simd_kvint_cu_unpack_620<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_621 = { simd_kvint_cu_unpack_621<uint32_t>, 12, 12, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_622 = { simd_kvint_cu_unpack_622<uint32_t>, 12, 12, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_623 = { simd_kvint_cu_unpack_623<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_624 = { simd_kvint_cu_unpack_624<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_625 = { simd_kvint_cu_unpack_625<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_626 = { simd_kvint_cu_unpack_626<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_627 = { simd_kvint_cu_unpack_627<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_628 = { simd_kvint_cu_unpack_628<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_629 = { simd_kvint_cu_unpack_629<uint32_t>, 12, 12, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_630 = { simd_kvint_cu_unpack_630<uint32_t>, 12, 12, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_631 = { simd_kvint_cu_unpack_631<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_632 = { simd_kvint_cu_unpack_632<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_633 = { simd_kvint_cu_unpack_633<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_634 = { simd_kvint_cu_unpack_634<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_635 = { simd_kvint_cu_unpack_635<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_636 = { simd_kvint_cu_unpack_636<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_637 = { simd_kvint_cu_unpack_637<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_638 = { simd_kvint_cu_unpack_638<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_639 = { simd_kvint_cu_unpack_639<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_640 = { simd_kvint_cu_unpack_640<uint32_t>, 8, 28, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_641 = { simd_kvint_cu_unpack_641<uint32_t>, 8, 24, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_642 = { simd_kvint_cu_unpack_642<uint32_t>, 8, 24, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_643 = { simd_kvint_cu_unpack_643<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_644 = { simd_kvint_cu_unpack_644<uint32_t>, 8, 24, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_645 = { simd_kvint_cu_unpack_645<uint32_t>, 8, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_646 = { simd_kvint_cu_unpack_646<uint32_t>, 8, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_647 = { simd_kvint_cu_unpack_647<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_648 = { simd_kvint_cu_unpack_648<uint32_t>, 8, 24, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_649 = { simd_kvint_cu_unpack_649<uint32_t>, 8, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_650 = { simd_kvint_cu_unpack_650<uint32_t>, 8, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_651 = { simd_kvint_cu_unpack_651<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_652 = { simd_kvint_cu_unpack_652<uint32_t>, 8, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_653 = { simd_kvint_cu_unpack_653<uint32_t>, 8, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_654 = { simd_kvint_cu_unpack_654<uint32_t>, 8, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_655 = { simd_kvint_cu_unpack_655<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_656 = { simd_kvint_cu_unpack_656<uint32_t>, 8, 24, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_657 = { simd_kvint_cu_unpack_657<uint32_t>, 8, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_658 = { simd_kvint_cu_unpack_658<uint32_t>, 8, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_659 = { simd_kvint_cu_unpack_659<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_660 = { simd_kvint_cu_unpack_660<uint32_t>, 8, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_661 = { simd_kvint_cu_unpack_661<uint32_t>, 8, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_662 = { simd_kvint_cu_unpack_662<uint32_t>, 8, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_663 = { simd_kvint_cu_unpack_663<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_664 = { simd_kvint_cu_unpack_664<uint32_t>, 8, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_665 = { simd_kvint_cu_unpack_665<uint32_t>, 8, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_666 = { simd_kvint_cu_unpack_666<uint32_t>, 8, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_667 = { simd_kvint_cu_unpack_667<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_668 = { simd_kvint_cu_unpack_668<uint32_t>, 8, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_669 = { simd_kvint_cu_unpack_669<uint32_t>, 8, 12, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_670 = { simd_kvint_cu_unpack_670<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_671 = { simd_kvint_cu_unpack_671<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_672 = { simd_kvint_cu_unpack_672<uint32_t>, 8, 24, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_673 = { simd_kvint_cu_unpack_673<uint32_t>, 8, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_674 = { simd_kvint_cu_unpack_674<uint32_t>, 8, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_675 = { simd_kvint_cu_unpack_675<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_676 = { simd_kvint_cu_unpack_676<uint32_t>, 8, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_677 = { simd_kvint_cu_unpack_677<uint32_t>, 8, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_678 = { simd_kvint_cu_unpack_678<uint32_t>, 8, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_679 = { simd_kvint_cu_unpack_679<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_680 = { simd_kvint_cu_unpack_680<uint32_t>, 8, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_681 = { simd_kvint_cu_unpack_681<uint32_t>, 8, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_682 = { simd_kvint_cu_unpack_682<uint32_t>, 8, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_683 = { simd_kvint_cu_unpack_683<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_684 = { simd_kvint_cu_unpack_684<uint32_t>, 8, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_685 = { simd_kvint_cu_unpack_685<uint32_t>, 8, 12, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_686 = { simd_kvint_cu_unpack_686<uint32_t>, 8, 12, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_687 = { simd_kvint_cu_unpack_687<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_688 = { simd_kvint_cu_unpack_688<uint32_t>, 8, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_689 = { simd_kvint_cu_unpack_689<uint32_t>, 8, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_690 = { simd_kvint_cu_unpack_690<uint32_t>, 8, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_691 = { simd_kvint_cu_unpack_691<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_692 = { simd_kvint_cu_unpack_692<uint32_t>, 8, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_693 = { simd_kvint_cu_unpack_693<uint32_t>, 8, 12, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_694 = { simd_kvint_cu_unpack_694<uint32_t>, 8, 12, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_695 = { simd_kvint_cu_unpack_695<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_696 = { simd_kvint_cu_unpack_696<uint32_t>, 8, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_697 = { simd_kvint_cu_unpack_697<uint32_t>, 8, 12, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_698 = { simd_kvint_cu_unpack_698<uint32_t>, 8, 12, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_699 = { simd_kvint_cu_unpack_699<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_700 = { simd_kvint_cu_unpack_700<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_701 = { simd_kvint_cu_unpack_701<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_702 = { simd_kvint_cu_unpack_702<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_703 = { simd_kvint_cu_unpack_703<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_704 = { simd_kvint_cu_unpack_704<uint32_t>, 8, 24, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_705 = { simd_kvint_cu_unpack_705<uint32_t>, 8, 20, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_706 = { simd_kvint_cu_unpack_706<uint32_t>, 8, 20, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_707 = { simd_kvint_cu_unpack_707<uint32_t>, 0, 0, 2, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_708 = { simd_kvint_cu_unpack_708<uint32_t>, 8, 20, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_709 = { simd_kvint_cu_unpack_709<uint32_t>, 8, 16, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_710 = { simd_kvint_cu_unpack_710<uint32_t>, 8, 16, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_711 = { simd_kvint_cu_unpack_711<uint32_t>, 0, 0, 2, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_712 = { simd_kvint_cu_unpack_712<uint32_t>, 8, 20, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_713 = { simd_kvint_cu_unpack_713<uint32_t>, 8, 16, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_714 = { simd_kvint_cu_unpack_714<uint32_t>, 8, 16, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_715 = { simd_kvint_cu_unpack_715<uint32_t>, 0, 0, 2, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_716 = { simd_kvint_cu_unpack_716<uint32_t>, 8, 16, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_717 = { simd_kvint_cu_unpack_717<uint32_t>, 8, 12, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_718 = { simd_kvint_cu_unpack_718<uint32_t>, 8, 12, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_719 = { simd_kvint_cu_unpack_719<uint32_t>, 0, 0, 2, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_720 = { simd_kvint_cu_unpack_720<uint32_t>, 8, 20, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_721 = { simd_kvint_cu_unpack_721<uint32_t>, 8, 16, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_722 = { simd_kvint_cu_unpack_722<uint32_t>, 8, 16, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_723 = { simd_kvint_cu_unpack_723<uint32_t>, 0, 0, 2, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_724 = { simd_kvint_cu_unpack_724<uint32_t>, 8, 16, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_725 = { simd_kvint_cu_unpack_725<uint32_t>, 8, 12, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_726 = { simd_kvint_cu_unpack_726<uint32_t>, 8, 12, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_727 = { simd_kvint_cu_unpack_727<uint32_t>, 0, 0, 2, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_728 = { simd_kvint_cu_unpack_728<uint32_t>, 8, 16, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_729 = { simd_kvint_cu_unpack_729<uint32_t>, 8, 12, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_730 = { simd_kvint_cu_unpack_730<uint32_t>, 8, 12, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_731 = { simd_kvint_cu_unpack_731<uint32_t>, 0, 0, 2, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_732 = { simd_kvint_cu_unpack_732<uint32_t>, 8, 12, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_733 = { simd_kvint_cu_unpack_733<uint32_t>, 8, 8, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_734 = { simd_kvint_cu_unpack_734<uint32_t>, 0, 0, 2, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_735 = { simd_kvint_cu_unpack_735<uint32_t>, 0, 0, 2, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_736 = { simd_kvint_cu_unpack_736<uint32_t>, 8, 20, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_737 = { simd_kvint_cu_unpack_737<uint32_t>, 8, 16, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_738 = { simd_kvint_cu_unpack_738<uint32_t>, 8, 16, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_739 = { simd_kvint_cu_unpack_739<uint32_t>, 0, 0, 3, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_740 = { simd_kvint_cu_unpack_740<uint32_t>, 8, 16, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_741 = { simd_kvint_cu_unpack_741<uint32_t>, 8, 12, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_742 = { simd_kvint_cu_unpack_742<uint32_t>, 8, 12, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_743 = { simd_kvint_cu_unpack_743<uint32_t>, 0, 0, 3, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_744 = { simd_kvint_cu_unpack_744<uint32_t>, 8, 16, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_745 = { simd_kvint_cu_unpack_745<uint32_t>, 8, 12, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_746 = { simd_kvint_cu_unpack_746<uint32_t>, 8, 12, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_747 = { simd_kvint_cu_unpack_747<uint32_t>, 0, 0, 3, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_748 = { simd_kvint_cu_unpack_748<uint32_t>, 8, 12, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_749 = { simd_kvint_cu_unpack_749<uint32_t>, 8, 8, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_750 = { simd_kvint_cu_unpack_750<uint32_t>, 8, 8, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_751 = { simd_kvint_cu_unpack_751<uint32_t>, 0, 0, 3, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_752 = { simd_kvint_cu_unpack_752<uint32_t>, 4, 16, 4, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_753 = { simd_kvint_cu_unpack_753<uint32_t>, 4, 12, 4, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_754 = { simd_kvint_cu_unpack_754<uint32_t>, 4, 12, 4, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_755 = { simd_kvint_cu_unpack_755<uint32_t>, 0, 0, 4, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_756 = { simd_kvint_cu_unpack_756<uint32_t>, 4, 12, 4, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_757 = { simd_kvint_cu_unpack_757<uint32_t>, 4, 8, 4, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_758 = { simd_kvint_cu_unpack_758<uint32_t>, 4, 8, 4, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_759 = { simd_kvint_cu_unpack_759<uint32_t>, 0, 0, 4, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_760 = { simd_kvint_cu_unpack_760<uint32_t>, 4, 12, 5, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_761 = { simd_kvint_cu_unpack_761<uint32_t>, 4, 8, 5, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_762 = { simd_kvint_cu_unpack_762<uint32_t>, 4, 8, 5, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_763 = { simd_kvint_cu_unpack_763<uint32_t>, 0, 0, 5, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_764 = { simd_kvint_cu_unpack_764<uint32_t>, 4, 8, 6, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_765 = { simd_kvint_cu_unpack_765<uint32_t>, 4, 4, 6, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_766 = { simd_kvint_cu_unpack_766<uint32_t>, 4, 4, 7, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_767 = { simd_kvint_cu_unpack_767<uint32_t>, 0, 0, 8, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_768 = { simd_kvint_cu_unpack_768<uint32_t>, 12, 32, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_769 = { simd_kvint_cu_unpack_769<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_770 = { simd_kvint_cu_unpack_770<uint32_t>, 12, 28, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_771 = { simd_kvint_cu_unpack_771<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_772 = { simd_kvint_cu_unpack_772<uint32_t>, 12, 28, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_773 = { simd_kvint_cu_unpack_773<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_774 = { simd_kvint_cu_unpack_774<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_775 = { simd_kvint_cu_unpack_775<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_776 = { simd_kvint_cu_unpack_776<uint32_t>, 12, 28, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_777 = { simd_kvint_cu_unpack_777<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_778 = { simd_kvint_cu_unpack_778<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_779 = { simd_kvint_cu_unpack_779<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_780 = { simd_kvint_cu_unpack_780<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_781 = { simd_kvint_cu_unpack_781<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_782 = { simd_kvint_cu_unpack_782<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_783 = { simd_kvint_cu_unpack_783<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_784 = { simd_kvint_cu_unpack_784<uint32_t>, 12, 28, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_785 = { simd_kvint_cu_unpack_785<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_786 = { simd_kvint_cu_unpack_786<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_787 = { simd_kvint_cu_unpack_787<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_788 = { simd_kvint_cu_unpack_788<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_789 = { simd_kvint_cu_unpack_789<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_790 = { simd_kvint_cu_unpack_790<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_791 = { simd_kvint_cu_unpack_791<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_792 = { simd_kvint_cu_unpack_792<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_793 = { simd_kvint_cu_unpack_793<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_794 = { simd_kvint_cu_unpack_794<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_795 = { simd_kvint_cu_unpack_795<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_796 = { simd_kvint_cu_unpack_796<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_797 = { simd_kvint_cu_unpack_797<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_798 = { simd_kvint_cu_unpack_798<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_799 = { simd_kvint_cu_unpack_799<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_800 = { simd_kvint_cu_unpack_800<uint32_t>, 12, 28, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_801 = { simd_kvint_cu_unpack_801<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_802 = { simd_kvint_cu_unpack_802<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_803 = { simd_kvint_cu_unpack_803<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_804 = { simd_kvint_cu_unpack_804<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_805 = { simd_kvint_cu_unpack_805<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_806 = { simd_kvint_cu_unpack_806<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_807 = { simd_kvint_cu_unpack_807<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_808 = { simd_kvint_cu_unpack_808<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_809 = { simd_kvint_cu_unpack_809<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_810 = { simd_kvint_cu_unpack_810<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_811 = { simd_kvint_cu_unpack_811<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_812 = { simd_kvint_cu_unpack_812<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_813 = { simd_kvint_cu_unpack_813<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_814 = { simd_kvint_cu_unpack_814<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_815 = { simd_kvint_cu_unpack_815<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_816 = { simd_kvint_cu_unpack_816<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_817 = { simd_kvint_cu_unpack_817<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_818 = { simd_kvint_cu_unpack_818<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_819 = { simd_kvint_cu_unpack_819<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_820 = { simd_kvint_cu_unpack_820<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_821 = { simd_kvint_cu_unpack_821<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_822 = { simd_kvint_cu_unpack_822<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_823 = { simd_kvint_cu_unpack_823<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_824 = { simd_kvint_cu_unpack_824<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_825 = { simd_kvint_cu_unpack_825<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_826 = { simd_kvint_cu_unpack_826<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_827 = { simd_kvint_cu_unpack_827<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_828 = { simd_kvint_cu_unpack_828<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_829 = { simd_kvint_cu_unpack_829<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_830 = { simd_kvint_cu_unpack_830<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_831 = { simd_kvint_cu_unpack_831<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_832 = { simd_kvint_cu_unpack_832<uint32_t>, 12, 28, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_833 = { simd_kvint_cu_unpack_833<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_834 = { simd_kvint_cu_unpack_834<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_835 = { simd_kvint_cu_unpack_835<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_836 = { simd_kvint_cu_unpack_836<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_837 = { simd_kvint_cu_unpack_837<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_838 = { simd_kvint_cu_unpack_838<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_839 = { simd_kvint_cu_unpack_839<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_840 = { simd_kvint_cu_unpack_840<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_841 = { simd_kvint_cu_unpack_841<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_842 = { simd_kvint_cu_unpack_842<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_843 = { simd_kvint_cu_unpack_843<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_844 = { simd_kvint_cu_unpack_844<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_845 = { simd_kvint_cu_unpack_845<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_846 = { simd_kvint_cu_unpack_846<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_847 = { simd_kvint_cu_unpack_847<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_848 = { simd_kvint_cu_unpack_848<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_849 = { simd_kvint_cu_unpack_849<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_850 = { simd_kvint_cu_unpack_850<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_851 = { simd_kvint_cu_unpack_851<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_852 = { simd_kvint_cu_unpack_852<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_853 = { simd_kvint_cu_unpack_853<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_854 = { simd_kvint_cu_unpack_854<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_855 = { simd_kvint_cu_unpack_855<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_856 = { simd_kvint_cu_unpack_856<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_857 = { simd_kvint_cu_unpack_857<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_858 = { simd_kvint_cu_unpack_858<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_859 = { simd_kvint_cu_unpack_859<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_860 = { simd_kvint_cu_unpack_860<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_861 = { simd_kvint_cu_unpack_861<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_862 = { simd_kvint_cu_unpack_862<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_863 = { simd_kvint_cu_unpack_863<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_864 = { simd_kvint_cu_unpack_864<uint32_t>, 12, 24, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_865 = { simd_kvint_cu_unpack_865<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_866 = { simd_kvint_cu_unpack_866<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_867 = { simd_kvint_cu_unpack_867<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_868 = { simd_kvint_cu_unpack_868<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_869 = { simd_kvint_cu_unpack_869<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_870 = { simd_kvint_cu_unpack_870<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_871 = { simd_kvint_cu_unpack_871<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_872 = { simd_kvint_cu_unpack_872<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_873 = { simd_kvint_cu_unpack_873<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_874 = { simd_kvint_cu_unpack_874<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_875 = { simd_kvint_cu_unpack_875<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_876 = { simd_kvint_cu_unpack_876<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_877 = { simd_kvint_cu_unpack_877<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_878 = { simd_kvint_cu_unpack_878<uint32_t>, 12, 12, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_879 = { simd_kvint_cu_unpack_879<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_880 = { simd_kvint_cu_unpack_880<uint32_t>, 12, 20, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_881 = { simd_kvint_cu_unpack_881<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_882 = { simd_kvint_cu_unpack_882<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_883 = { simd_kvint_cu_unpack_883<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_884 = { simd_kvint_cu_unpack_884<uint32_t>, 12, 16, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_885 = { simd_kvint_cu_unpack_885<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_886 = { simd_kvint_cu_unpack_886<uint32_t>, 12, 12, 0, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_887 = { simd_kvint_cu_unpack_887<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_888 = { simd_kvint_cu_unpack_888<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_889 = { simd_kvint_cu_unpack_889<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_890 = { simd_kvint_cu_unpack_890<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_891 = { simd_kvint_cu_unpack_891<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_892 = { simd_kvint_cu_unpack_892<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_893 = { simd_kvint_cu_unpack_893<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_894 = { simd_kvint_cu_unpack_894<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_895 = { simd_kvint_cu_unpack_895<uint32_t>, 4, 0, 0, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_896 = { simd_kvint_cu_unpack_896<uint32_t>, 8, 28, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_897 = { simd_kvint_cu_unpack_897<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_898 = { simd_kvint_cu_unpack_898<uint32_t>, 8, 24, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_899 = { simd_kvint_cu_unpack_899<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_900 = { simd_kvint_cu_unpack_900<uint32_t>, 8, 24, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_901 = { simd_kvint_cu_unpack_901<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_902 = { simd_kvint_cu_unpack_902<uint32_t>, 8, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_903 = { simd_kvint_cu_unpack_903<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_904 = { simd_kvint_cu_unpack_904<uint32_t>, 8, 24, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_905 = { simd_kvint_cu_unpack_905<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_906 = { simd_kvint_cu_unpack_906<uint32_t>, 8, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_907 = { simd_kvint_cu_unpack_907<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_908 = { simd_kvint_cu_unpack_908<uint32_t>, 8, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_909 = { simd_kvint_cu_unpack_909<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_910 = { simd_kvint_cu_unpack_910<uint32_t>, 8, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_911 = { simd_kvint_cu_unpack_911<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_912 = { simd_kvint_cu_unpack_912<uint32_t>, 8, 24, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_913 = { simd_kvint_cu_unpack_913<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_914 = { simd_kvint_cu_unpack_914<uint32_t>, 8, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_915 = { simd_kvint_cu_unpack_915<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_916 = { simd_kvint_cu_unpack_916<uint32_t>, 8, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_917 = { simd_kvint_cu_unpack_917<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_918 = { simd_kvint_cu_unpack_918<uint32_t>, 8, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_919 = { simd_kvint_cu_unpack_919<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_920 = { simd_kvint_cu_unpack_920<uint32_t>, 8, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_921 = { simd_kvint_cu_unpack_921<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_922 = { simd_kvint_cu_unpack_922<uint32_t>, 8, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_923 = { simd_kvint_cu_unpack_923<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_924 = { simd_kvint_cu_unpack_924<uint32_t>, 8, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_925 = { simd_kvint_cu_unpack_925<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_926 = { simd_kvint_cu_unpack_926<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_927 = { simd_kvint_cu_unpack_927<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_928 = { simd_kvint_cu_unpack_928<uint32_t>, 8, 24, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_929 = { simd_kvint_cu_unpack_929<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_930 = { simd_kvint_cu_unpack_930<uint32_t>, 8, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_931 = { simd_kvint_cu_unpack_931<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_932 = { simd_kvint_cu_unpack_932<uint32_t>, 8, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_933 = { simd_kvint_cu_unpack_933<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_934 = { simd_kvint_cu_unpack_934<uint32_t>, 8, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_935 = { simd_kvint_cu_unpack_935<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_936 = { simd_kvint_cu_unpack_936<uint32_t>, 8, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_937 = { simd_kvint_cu_unpack_937<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_938 = { simd_kvint_cu_unpack_938<uint32_t>, 8, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_939 = { simd_kvint_cu_unpack_939<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_940 = { simd_kvint_cu_unpack_940<uint32_t>, 8, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_941 = { simd_kvint_cu_unpack_941<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_942 = { simd_kvint_cu_unpack_942<uint32_t>, 8, 12, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_943 = { simd_kvint_cu_unpack_943<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_944 = { simd_kvint_cu_unpack_944<uint32_t>, 8, 20, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_945 = { simd_kvint_cu_unpack_945<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_946 = { simd_kvint_cu_unpack_946<uint32_t>, 8, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_947 = { simd_kvint_cu_unpack_947<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_948 = { simd_kvint_cu_unpack_948<uint32_t>, 8, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_949 = { simd_kvint_cu_unpack_949<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_950 = { simd_kvint_cu_unpack_950<uint32_t>, 8, 12, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_951 = { simd_kvint_cu_unpack_951<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_952 = { simd_kvint_cu_unpack_952<uint32_t>, 8, 16, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_953 = { simd_kvint_cu_unpack_953<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_954 = { simd_kvint_cu_unpack_954<uint32_t>, 8, 12, 1, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_955 = { simd_kvint_cu_unpack_955<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_956 = { simd_kvint_cu_unpack_956<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_957 = { simd_kvint_cu_unpack_957<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_958 = { simd_kvint_cu_unpack_958<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_959 = { simd_kvint_cu_unpack_959<uint32_t>, 0, 0, 1, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_960 = { simd_kvint_cu_unpack_960<uint32_t>, 8, 24, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_961 = { simd_kvint_cu_unpack_961<uint32_t>, 0, 0, 2, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_962 = { simd_kvint_cu_unpack_962<uint32_t>, 8, 20, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_963 = { simd_kvint_cu_unpack_963<uint32_t>, 0, 0, 2, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_964 = { simd_kvint_cu_unpack_964<uint32_t>, 8, 20, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_965 = { simd_kvint_cu_unpack_965<uint32_t>, 0, 0, 2, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_966 = { simd_kvint_cu_unpack_966<uint32_t>, 8, 16, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_967 = { simd_kvint_cu_unpack_967<uint32_t>, 0, 0, 2, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_968 = { simd_kvint_cu_unpack_968<uint32_t>, 8, 20, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_969 = { simd_kvint_cu_unpack_969<uint32_t>, 0, 0, 2, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_970 = { simd_kvint_cu_unpack_970<uint32_t>, 8, 16, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_971 = { simd_kvint_cu_unpack_971<uint32_t>, 0, 0, 2, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_972 = { simd_kvint_cu_unpack_972<uint32_t>, 8, 16, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_973 = { simd_kvint_cu_unpack_973<uint32_t>, 0, 0, 2, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_974 = { simd_kvint_cu_unpack_974<uint32_t>, 8, 12, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_975 = { simd_kvint_cu_unpack_975<uint32_t>, 0, 0, 2, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_976 = { simd_kvint_cu_unpack_976<uint32_t>, 8, 20, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_977 = { simd_kvint_cu_unpack_977<uint32_t>, 0, 0, 2, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_978 = { simd_kvint_cu_unpack_978<uint32_t>, 8, 16, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_979 = { simd_kvint_cu_unpack_979<uint32_t>, 0, 0, 2, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_980 = { simd_kvint_cu_unpack_980<uint32_t>, 8, 16, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_981 = { simd_kvint_cu_unpack_981<uint32_t>, 0, 0, 2, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_982 = { simd_kvint_cu_unpack_982<uint32_t>, 8, 12, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_983 = { simd_kvint_cu_unpack_983<uint32_t>, 0, 0, 2, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_984 = { simd_kvint_cu_unpack_984<uint32_t>, 8, 16, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_985 = { simd_kvint_cu_unpack_985<uint32_t>, 0, 0, 2, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_986 = { simd_kvint_cu_unpack_986<uint32_t>, 8, 12, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_987 = { simd_kvint_cu_unpack_987<uint32_t>, 0, 0, 2, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_988 = { simd_kvint_cu_unpack_988<uint32_t>, 8, 12, 2, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_989 = { simd_kvint_cu_unpack_989<uint32_t>, 0, 0, 2, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_990 = { simd_kvint_cu_unpack_990<uint32_t>, 0, 0, 2, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_991 = { simd_kvint_cu_unpack_991<uint32_t>, 0, 0, 2, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_992 = { simd_kvint_cu_unpack_992<uint32_t>, 8, 20, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_993 = { simd_kvint_cu_unpack_993<uint32_t>, 0, 0, 3, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_994 = { simd_kvint_cu_unpack_994<uint32_t>, 8, 16, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_995 = { simd_kvint_cu_unpack_995<uint32_t>, 0, 0, 3, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_996 = { simd_kvint_cu_unpack_996<uint32_t>, 8, 16, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_997 = { simd_kvint_cu_unpack_997<uint32_t>, 0, 0, 3, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_998 = { simd_kvint_cu_unpack_998<uint32_t>, 8, 12, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_999 = { simd_kvint_cu_unpack_999<uint32_t>, 0, 0, 3, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_1000 = { simd_kvint_cu_unpack_1000<uint32_t>, 8, 16, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_1001 = { simd_kvint_cu_unpack_1001<uint32_t>, 0, 0, 3, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_1002 = { simd_kvint_cu_unpack_1002<uint32_t>, 8, 12, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_1003 = { simd_kvint_cu_unpack_1003<uint32_t>, 0, 0, 3, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_1004 = { simd_kvint_cu_unpack_1004<uint32_t>, 8, 12, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_1005 = { simd_kvint_cu_unpack_1005<uint32_t>, 0, 0, 3, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_1006 = { simd_kvint_cu_unpack_1006<uint32_t>, 8, 8, 3, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_1007 = { simd_kvint_cu_unpack_1007<uint32_t>, 0, 0, 3, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_1008 = { simd_kvint_cu_unpack_1008<uint32_t>, 4, 16, 4, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_1009 = { simd_kvint_cu_unpack_1009<uint32_t>, 0, 0, 4, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_1010 = { simd_kvint_cu_unpack_1010<uint32_t>, 4, 12, 4, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_1011 = { simd_kvint_cu_unpack_1011<uint32_t>, 0, 0, 4, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_1012 = { simd_kvint_cu_unpack_1012<uint32_t>, 4, 12, 4, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_1013 = { simd_kvint_cu_unpack_1013<uint32_t>, 0, 0, 4, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_1014 = { simd_kvint_cu_unpack_1014<uint32_t>, 4, 8, 4, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_1015 = { simd_kvint_cu_unpack_1015<uint32_t>, 0, 0, 4, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_1016 = { simd_kvint_cu_unpack_1016<uint32_t>, 4, 12, 5, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_1017 = { simd_kvint_cu_unpack_1017<uint32_t>, 0, 0, 5, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_1018 = { simd_kvint_cu_unpack_1018<uint32_t>, 4, 8, 5, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_1019 = { simd_kvint_cu_unpack_1019<uint32_t>, 0, 0, 5, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_1020 = { simd_kvint_cu_unpack_1020<uint32_t>, 4, 8, 6, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_1021 = { simd_kvint_cu_unpack_1021<uint32_t>, 0, 0, 6, false };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_1022 = { simd_kvint_cu_unpack_1022<uint32_t>, 4, 4, 7, true };
static KVIntCUUnpackInfo KVIntCUUnpackInfo_1023 = { simd_kvint_cu_unpack_1023<uint32_t>, 0, 0, 8, false };

static KVIntCUUnpackInfo KVIntCUUnpackInfoArr[1024] = {
			KVIntCUUnpackInfo_0, KVIntCUUnpackInfo_1, KVIntCUUnpackInfo_2, KVIntCUUnpackInfo_3,
			KVIntCUUnpackInfo_4, KVIntCUUnpackInfo_5, KVIntCUUnpackInfo_6, KVIntCUUnpackInfo_7,
			KVIntCUUnpackInfo_8, KVIntCUUnpackInfo_9, KVIntCUUnpackInfo_10, KVIntCUUnpackInfo_11,
			KVIntCUUnpackInfo_12, KVIntCUUnpackInfo_13, KVIntCUUnpackInfo_14, KVIntCUUnpackInfo_15,
			KVIntCUUnpackInfo_16, KVIntCUUnpackInfo_17, KVIntCUUnpackInfo_18, KVIntCUUnpackInfo_19,
			KVIntCUUnpackInfo_20, KVIntCUUnpackInfo_21, KVIntCUUnpackInfo_22, KVIntCUUnpackInfo_23,
			KVIntCUUnpackInfo_24, KVIntCUUnpackInfo_25, KVIntCUUnpackInfo_26, KVIntCUUnpackInfo_27,
			KVIntCUUnpackInfo_28, KVIntCUUnpackInfo_29, KVIntCUUnpackInfo_30, KVIntCUUnpackInfo_31,
			KVIntCUUnpackInfo_32, KVIntCUUnpackInfo_33, KVIntCUUnpackInfo_34, KVIntCUUnpackInfo_35,
			KVIntCUUnpackInfo_36, KVIntCUUnpackInfo_37, KVIntCUUnpackInfo_38, KVIntCUUnpackInfo_39,
			KVIntCUUnpackInfo_40, KVIntCUUnpackInfo_41, KVIntCUUnpackInfo_42, KVIntCUUnpackInfo_43,
			KVIntCUUnpackInfo_44, KVIntCUUnpackInfo_45, KVIntCUUnpackInfo_46, KVIntCUUnpackInfo_47,
			KVIntCUUnpackInfo_48, KVIntCUUnpackInfo_49, KVIntCUUnpackInfo_50, KVIntCUUnpackInfo_51,
			KVIntCUUnpackInfo_52, KVIntCUUnpackInfo_53, KVIntCUUnpackInfo_54, KVIntCUUnpackInfo_55,
			KVIntCUUnpackInfo_56, KVIntCUUnpackInfo_57, KVIntCUUnpackInfo_58, KVIntCUUnpackInfo_59,
			KVIntCUUnpackInfo_60, KVIntCUUnpackInfo_61, KVIntCUUnpackInfo_62, KVIntCUUnpackInfo_63,
			KVIntCUUnpackInfo_64, KVIntCUUnpackInfo_65, KVIntCUUnpackInfo_66, KVIntCUUnpackInfo_67,
			KVIntCUUnpackInfo_68, KVIntCUUnpackInfo_69, KVIntCUUnpackInfo_70, KVIntCUUnpackInfo_71,
			KVIntCUUnpackInfo_72, KVIntCUUnpackInfo_73, KVIntCUUnpackInfo_74, KVIntCUUnpackInfo_75,
			KVIntCUUnpackInfo_76, KVIntCUUnpackInfo_77, KVIntCUUnpackInfo_78, KVIntCUUnpackInfo_79,
			KVIntCUUnpackInfo_80, KVIntCUUnpackInfo_81, KVIntCUUnpackInfo_82, KVIntCUUnpackInfo_83,
			KVIntCUUnpackInfo_84, KVIntCUUnpackInfo_85, KVIntCUUnpackInfo_86, KVIntCUUnpackInfo_87,
			KVIntCUUnpackInfo_88, KVIntCUUnpackInfo_89, KVIntCUUnpackInfo_90, KVIntCUUnpackInfo_91,
			KVIntCUUnpackInfo_92, KVIntCUUnpackInfo_93, KVIntCUUnpackInfo_94, KVIntCUUnpackInfo_95,
			KVIntCUUnpackInfo_96, KVIntCUUnpackInfo_97, KVIntCUUnpackInfo_98, KVIntCUUnpackInfo_99,
			KVIntCUUnpackInfo_100, KVIntCUUnpackInfo_101, KVIntCUUnpackInfo_102, KVIntCUUnpackInfo_103,
			KVIntCUUnpackInfo_104, KVIntCUUnpackInfo_105, KVIntCUUnpackInfo_106, KVIntCUUnpackInfo_107,
			KVIntCUUnpackInfo_108, KVIntCUUnpackInfo_109, KVIntCUUnpackInfo_110, KVIntCUUnpackInfo_111,
			KVIntCUUnpackInfo_112, KVIntCUUnpackInfo_113, KVIntCUUnpackInfo_114, KVIntCUUnpackInfo_115,
			KVIntCUUnpackInfo_116, KVIntCUUnpackInfo_117, KVIntCUUnpackInfo_118, KVIntCUUnpackInfo_119,
			KVIntCUUnpackInfo_120, KVIntCUUnpackInfo_121, KVIntCUUnpackInfo_122, KVIntCUUnpackInfo_123,
			KVIntCUUnpackInfo_124, KVIntCUUnpackInfo_125, KVIntCUUnpackInfo_126, KVIntCUUnpackInfo_127,
			KVIntCUUnpackInfo_128, KVIntCUUnpackInfo_129, KVIntCUUnpackInfo_130, KVIntCUUnpackInfo_131,
			KVIntCUUnpackInfo_132, KVIntCUUnpackInfo_133, KVIntCUUnpackInfo_134, KVIntCUUnpackInfo_135,
			KVIntCUUnpackInfo_136, KVIntCUUnpackInfo_137, KVIntCUUnpackInfo_138, KVIntCUUnpackInfo_139,
			KVIntCUUnpackInfo_140, KVIntCUUnpackInfo_141, KVIntCUUnpackInfo_142, KVIntCUUnpackInfo_143,
			KVIntCUUnpackInfo_144, KVIntCUUnpackInfo_145, KVIntCUUnpackInfo_146, KVIntCUUnpackInfo_147,
			KVIntCUUnpackInfo_148, KVIntCUUnpackInfo_149, KVIntCUUnpackInfo_150, KVIntCUUnpackInfo_151,
			KVIntCUUnpackInfo_152, KVIntCUUnpackInfo_153, KVIntCUUnpackInfo_154, KVIntCUUnpackInfo_155,
			KVIntCUUnpackInfo_156, KVIntCUUnpackInfo_157, KVIntCUUnpackInfo_158, KVIntCUUnpackInfo_159,
			KVIntCUUnpackInfo_160, KVIntCUUnpackInfo_161, KVIntCUUnpackInfo_162, KVIntCUUnpackInfo_163,
			KVIntCUUnpackInfo_164, KVIntCUUnpackInfo_165, KVIntCUUnpackInfo_166, KVIntCUUnpackInfo_167,
			KVIntCUUnpackInfo_168, KVIntCUUnpackInfo_169, KVIntCUUnpackInfo_170, KVIntCUUnpackInfo_171,
			KVIntCUUnpackInfo_172, KVIntCUUnpackInfo_173, KVIntCUUnpackInfo_174, KVIntCUUnpackInfo_175,
			KVIntCUUnpackInfo_176, KVIntCUUnpackInfo_177, KVIntCUUnpackInfo_178, KVIntCUUnpackInfo_179,
			KVIntCUUnpackInfo_180, KVIntCUUnpackInfo_181, KVIntCUUnpackInfo_182, KVIntCUUnpackInfo_183,
			KVIntCUUnpackInfo_184, KVIntCUUnpackInfo_185, KVIntCUUnpackInfo_186, KVIntCUUnpackInfo_187,
			KVIntCUUnpackInfo_188, KVIntCUUnpackInfo_189, KVIntCUUnpackInfo_190, KVIntCUUnpackInfo_191,
			KVIntCUUnpackInfo_192, KVIntCUUnpackInfo_193, KVIntCUUnpackInfo_194, KVIntCUUnpackInfo_195,
			KVIntCUUnpackInfo_196, KVIntCUUnpackInfo_197, KVIntCUUnpackInfo_198, KVIntCUUnpackInfo_199,
			KVIntCUUnpackInfo_200, KVIntCUUnpackInfo_201, KVIntCUUnpackInfo_202, KVIntCUUnpackInfo_203,
			KVIntCUUnpackInfo_204, KVIntCUUnpackInfo_205, KVIntCUUnpackInfo_206, KVIntCUUnpackInfo_207,
			KVIntCUUnpackInfo_208, KVIntCUUnpackInfo_209, KVIntCUUnpackInfo_210, KVIntCUUnpackInfo_211,
			KVIntCUUnpackInfo_212, KVIntCUUnpackInfo_213, KVIntCUUnpackInfo_214, KVIntCUUnpackInfo_215,
			KVIntCUUnpackInfo_216, KVIntCUUnpackInfo_217, KVIntCUUnpackInfo_218, KVIntCUUnpackInfo_219,
			KVIntCUUnpackInfo_220, KVIntCUUnpackInfo_221, KVIntCUUnpackInfo_222, KVIntCUUnpackInfo_223,
			KVIntCUUnpackInfo_224, KVIntCUUnpackInfo_225, KVIntCUUnpackInfo_226, KVIntCUUnpackInfo_227,
			KVIntCUUnpackInfo_228, KVIntCUUnpackInfo_229, KVIntCUUnpackInfo_230, KVIntCUUnpackInfo_231,
			KVIntCUUnpackInfo_232, KVIntCUUnpackInfo_233, KVIntCUUnpackInfo_234, KVIntCUUnpackInfo_235,
			KVIntCUUnpackInfo_236, KVIntCUUnpackInfo_237, KVIntCUUnpackInfo_238, KVIntCUUnpackInfo_239,
			KVIntCUUnpackInfo_240, KVIntCUUnpackInfo_241, KVIntCUUnpackInfo_242, KVIntCUUnpackInfo_243,
			KVIntCUUnpackInfo_244, KVIntCUUnpackInfo_245, KVIntCUUnpackInfo_246, KVIntCUUnpackInfo_247,
			KVIntCUUnpackInfo_248, KVIntCUUnpackInfo_249, KVIntCUUnpackInfo_250, KVIntCUUnpackInfo_251,
			KVIntCUUnpackInfo_252, KVIntCUUnpackInfo_253, KVIntCUUnpackInfo_254, KVIntCUUnpackInfo_255,
			KVIntCUUnpackInfo_256, KVIntCUUnpackInfo_257, KVIntCUUnpackInfo_258, KVIntCUUnpackInfo_259,
			KVIntCUUnpackInfo_260, KVIntCUUnpackInfo_261, KVIntCUUnpackInfo_262, KVIntCUUnpackInfo_263,
			KVIntCUUnpackInfo_264, KVIntCUUnpackInfo_265, KVIntCUUnpackInfo_266, KVIntCUUnpackInfo_267,
			KVIntCUUnpackInfo_268, KVIntCUUnpackInfo_269, KVIntCUUnpackInfo_270, KVIntCUUnpackInfo_271,
			KVIntCUUnpackInfo_272, KVIntCUUnpackInfo_273, KVIntCUUnpackInfo_274, KVIntCUUnpackInfo_275,
			KVIntCUUnpackInfo_276, KVIntCUUnpackInfo_277, KVIntCUUnpackInfo_278, KVIntCUUnpackInfo_279,
			KVIntCUUnpackInfo_280, KVIntCUUnpackInfo_281, KVIntCUUnpackInfo_282, KVIntCUUnpackInfo_283,
			KVIntCUUnpackInfo_284, KVIntCUUnpackInfo_285, KVIntCUUnpackInfo_286, KVIntCUUnpackInfo_287,
			KVIntCUUnpackInfo_288, KVIntCUUnpackInfo_289, KVIntCUUnpackInfo_290, KVIntCUUnpackInfo_291,
			KVIntCUUnpackInfo_292, KVIntCUUnpackInfo_293, KVIntCUUnpackInfo_294, KVIntCUUnpackInfo_295,
			KVIntCUUnpackInfo_296, KVIntCUUnpackInfo_297, KVIntCUUnpackInfo_298, KVIntCUUnpackInfo_299,
			KVIntCUUnpackInfo_300, KVIntCUUnpackInfo_301, KVIntCUUnpackInfo_302, KVIntCUUnpackInfo_303,
			KVIntCUUnpackInfo_304, KVIntCUUnpackInfo_305, KVIntCUUnpackInfo_306, KVIntCUUnpackInfo_307,
			KVIntCUUnpackInfo_308, KVIntCUUnpackInfo_309, KVIntCUUnpackInfo_310, KVIntCUUnpackInfo_311,
			KVIntCUUnpackInfo_312, KVIntCUUnpackInfo_313, KVIntCUUnpackInfo_314, KVIntCUUnpackInfo_315,
			KVIntCUUnpackInfo_316, KVIntCUUnpackInfo_317, KVIntCUUnpackInfo_318, KVIntCUUnpackInfo_319,
			KVIntCUUnpackInfo_320, KVIntCUUnpackInfo_321, KVIntCUUnpackInfo_322, KVIntCUUnpackInfo_323,
			KVIntCUUnpackInfo_324, KVIntCUUnpackInfo_325, KVIntCUUnpackInfo_326, KVIntCUUnpackInfo_327,
			KVIntCUUnpackInfo_328, KVIntCUUnpackInfo_329, KVIntCUUnpackInfo_330, KVIntCUUnpackInfo_331,
			KVIntCUUnpackInfo_332, KVIntCUUnpackInfo_333, KVIntCUUnpackInfo_334, KVIntCUUnpackInfo_335,
			KVIntCUUnpackInfo_336, KVIntCUUnpackInfo_337, KVIntCUUnpackInfo_338, KVIntCUUnpackInfo_339,
			KVIntCUUnpackInfo_340, KVIntCUUnpackInfo_341, KVIntCUUnpackInfo_342, KVIntCUUnpackInfo_343,
			KVIntCUUnpackInfo_344, KVIntCUUnpackInfo_345, KVIntCUUnpackInfo_346, KVIntCUUnpackInfo_347,
			KVIntCUUnpackInfo_348, KVIntCUUnpackInfo_349, KVIntCUUnpackInfo_350, KVIntCUUnpackInfo_351,
			KVIntCUUnpackInfo_352, KVIntCUUnpackInfo_353, KVIntCUUnpackInfo_354, KVIntCUUnpackInfo_355,
			KVIntCUUnpackInfo_356, KVIntCUUnpackInfo_357, KVIntCUUnpackInfo_358, KVIntCUUnpackInfo_359,
			KVIntCUUnpackInfo_360, KVIntCUUnpackInfo_361, KVIntCUUnpackInfo_362, KVIntCUUnpackInfo_363,
			KVIntCUUnpackInfo_364, KVIntCUUnpackInfo_365, KVIntCUUnpackInfo_366, KVIntCUUnpackInfo_367,
			KVIntCUUnpackInfo_368, KVIntCUUnpackInfo_369, KVIntCUUnpackInfo_370, KVIntCUUnpackInfo_371,
			KVIntCUUnpackInfo_372, KVIntCUUnpackInfo_373, KVIntCUUnpackInfo_374, KVIntCUUnpackInfo_375,
			KVIntCUUnpackInfo_376, KVIntCUUnpackInfo_377, KVIntCUUnpackInfo_378, KVIntCUUnpackInfo_379,
			KVIntCUUnpackInfo_380, KVIntCUUnpackInfo_381, KVIntCUUnpackInfo_382, KVIntCUUnpackInfo_383,
			KVIntCUUnpackInfo_384, KVIntCUUnpackInfo_385, KVIntCUUnpackInfo_386, KVIntCUUnpackInfo_387,
			KVIntCUUnpackInfo_388, KVIntCUUnpackInfo_389, KVIntCUUnpackInfo_390, KVIntCUUnpackInfo_391,
			KVIntCUUnpackInfo_392, KVIntCUUnpackInfo_393, KVIntCUUnpackInfo_394, KVIntCUUnpackInfo_395,
			KVIntCUUnpackInfo_396, KVIntCUUnpackInfo_397, KVIntCUUnpackInfo_398, KVIntCUUnpackInfo_399,
			KVIntCUUnpackInfo_400, KVIntCUUnpackInfo_401, KVIntCUUnpackInfo_402, KVIntCUUnpackInfo_403,
			KVIntCUUnpackInfo_404, KVIntCUUnpackInfo_405, KVIntCUUnpackInfo_406, KVIntCUUnpackInfo_407,
			KVIntCUUnpackInfo_408, KVIntCUUnpackInfo_409, KVIntCUUnpackInfo_410, KVIntCUUnpackInfo_411,
			KVIntCUUnpackInfo_412, KVIntCUUnpackInfo_413, KVIntCUUnpackInfo_414, KVIntCUUnpackInfo_415,
			KVIntCUUnpackInfo_416, KVIntCUUnpackInfo_417, KVIntCUUnpackInfo_418, KVIntCUUnpackInfo_419,
			KVIntCUUnpackInfo_420, KVIntCUUnpackInfo_421, KVIntCUUnpackInfo_422, KVIntCUUnpackInfo_423,
			KVIntCUUnpackInfo_424, KVIntCUUnpackInfo_425, KVIntCUUnpackInfo_426, KVIntCUUnpackInfo_427,
			KVIntCUUnpackInfo_428, KVIntCUUnpackInfo_429, KVIntCUUnpackInfo_430, KVIntCUUnpackInfo_431,
			KVIntCUUnpackInfo_432, KVIntCUUnpackInfo_433, KVIntCUUnpackInfo_434, KVIntCUUnpackInfo_435,
			KVIntCUUnpackInfo_436, KVIntCUUnpackInfo_437, KVIntCUUnpackInfo_438, KVIntCUUnpackInfo_439,
			KVIntCUUnpackInfo_440, KVIntCUUnpackInfo_441, KVIntCUUnpackInfo_442, KVIntCUUnpackInfo_443,
			KVIntCUUnpackInfo_444, KVIntCUUnpackInfo_445, KVIntCUUnpackInfo_446, KVIntCUUnpackInfo_447,
			KVIntCUUnpackInfo_448, KVIntCUUnpackInfo_449, KVIntCUUnpackInfo_450, KVIntCUUnpackInfo_451,
			KVIntCUUnpackInfo_452, KVIntCUUnpackInfo_453, KVIntCUUnpackInfo_454, KVIntCUUnpackInfo_455,
			KVIntCUUnpackInfo_456, KVIntCUUnpackInfo_457, KVIntCUUnpackInfo_458, KVIntCUUnpackInfo_459,
			KVIntCUUnpackInfo_460, KVIntCUUnpackInfo_461, KVIntCUUnpackInfo_462, KVIntCUUnpackInfo_463,
			KVIntCUUnpackInfo_464, KVIntCUUnpackInfo_465, KVIntCUUnpackInfo_466, KVIntCUUnpackInfo_467,
			KVIntCUUnpackInfo_468, KVIntCUUnpackInfo_469, KVIntCUUnpackInfo_470, KVIntCUUnpackInfo_471,
			KVIntCUUnpackInfo_472, KVIntCUUnpackInfo_473, KVIntCUUnpackInfo_474, KVIntCUUnpackInfo_475,
			KVIntCUUnpackInfo_476, KVIntCUUnpackInfo_477, KVIntCUUnpackInfo_478, KVIntCUUnpackInfo_479,
			KVIntCUUnpackInfo_480, KVIntCUUnpackInfo_481, KVIntCUUnpackInfo_482, KVIntCUUnpackInfo_483,
			KVIntCUUnpackInfo_484, KVIntCUUnpackInfo_485, KVIntCUUnpackInfo_486, KVIntCUUnpackInfo_487,
			KVIntCUUnpackInfo_488, KVIntCUUnpackInfo_489, KVIntCUUnpackInfo_490, KVIntCUUnpackInfo_491,
			KVIntCUUnpackInfo_492, KVIntCUUnpackInfo_493, KVIntCUUnpackInfo_494, KVIntCUUnpackInfo_495,
			KVIntCUUnpackInfo_496, KVIntCUUnpackInfo_497, KVIntCUUnpackInfo_498, KVIntCUUnpackInfo_499,
			KVIntCUUnpackInfo_500, KVIntCUUnpackInfo_501, KVIntCUUnpackInfo_502, KVIntCUUnpackInfo_503,
			KVIntCUUnpackInfo_504, KVIntCUUnpackInfo_505, KVIntCUUnpackInfo_506, KVIntCUUnpackInfo_507,
			KVIntCUUnpackInfo_508, KVIntCUUnpackInfo_509, KVIntCUUnpackInfo_510, KVIntCUUnpackInfo_511,
			KVIntCUUnpackInfo_512, KVIntCUUnpackInfo_513, KVIntCUUnpackInfo_514, KVIntCUUnpackInfo_515,
			KVIntCUUnpackInfo_516, KVIntCUUnpackInfo_517, KVIntCUUnpackInfo_518, KVIntCUUnpackInfo_519,
			KVIntCUUnpackInfo_520, KVIntCUUnpackInfo_521, KVIntCUUnpackInfo_522, KVIntCUUnpackInfo_523,
			KVIntCUUnpackInfo_524, KVIntCUUnpackInfo_525, KVIntCUUnpackInfo_526, KVIntCUUnpackInfo_527,
			KVIntCUUnpackInfo_528, KVIntCUUnpackInfo_529, KVIntCUUnpackInfo_530, KVIntCUUnpackInfo_531,
			KVIntCUUnpackInfo_532, KVIntCUUnpackInfo_533, KVIntCUUnpackInfo_534, KVIntCUUnpackInfo_535,
			KVIntCUUnpackInfo_536, KVIntCUUnpackInfo_537, KVIntCUUnpackInfo_538, KVIntCUUnpackInfo_539,
			KVIntCUUnpackInfo_540, KVIntCUUnpackInfo_541, KVIntCUUnpackInfo_542, KVIntCUUnpackInfo_543,
			KVIntCUUnpackInfo_544, KVIntCUUnpackInfo_545, KVIntCUUnpackInfo_546, KVIntCUUnpackInfo_547,
			KVIntCUUnpackInfo_548, KVIntCUUnpackInfo_549, KVIntCUUnpackInfo_550, KVIntCUUnpackInfo_551,
			KVIntCUUnpackInfo_552, KVIntCUUnpackInfo_553, KVIntCUUnpackInfo_554, KVIntCUUnpackInfo_555,
			KVIntCUUnpackInfo_556, KVIntCUUnpackInfo_557, KVIntCUUnpackInfo_558, KVIntCUUnpackInfo_559,
			KVIntCUUnpackInfo_560, KVIntCUUnpackInfo_561, KVIntCUUnpackInfo_562, KVIntCUUnpackInfo_563,
			KVIntCUUnpackInfo_564, KVIntCUUnpackInfo_565, KVIntCUUnpackInfo_566, KVIntCUUnpackInfo_567,
			KVIntCUUnpackInfo_568, KVIntCUUnpackInfo_569, KVIntCUUnpackInfo_570, KVIntCUUnpackInfo_571,
			KVIntCUUnpackInfo_572, KVIntCUUnpackInfo_573, KVIntCUUnpackInfo_574, KVIntCUUnpackInfo_575,
			KVIntCUUnpackInfo_576, KVIntCUUnpackInfo_577, KVIntCUUnpackInfo_578, KVIntCUUnpackInfo_579,
			KVIntCUUnpackInfo_580, KVIntCUUnpackInfo_581, KVIntCUUnpackInfo_582, KVIntCUUnpackInfo_583,
			KVIntCUUnpackInfo_584, KVIntCUUnpackInfo_585, KVIntCUUnpackInfo_586, KVIntCUUnpackInfo_587,
			KVIntCUUnpackInfo_588, KVIntCUUnpackInfo_589, KVIntCUUnpackInfo_590, KVIntCUUnpackInfo_591,
			KVIntCUUnpackInfo_592, KVIntCUUnpackInfo_593, KVIntCUUnpackInfo_594, KVIntCUUnpackInfo_595,
			KVIntCUUnpackInfo_596, KVIntCUUnpackInfo_597, KVIntCUUnpackInfo_598, KVIntCUUnpackInfo_599,
			KVIntCUUnpackInfo_600, KVIntCUUnpackInfo_601, KVIntCUUnpackInfo_602, KVIntCUUnpackInfo_603,
			KVIntCUUnpackInfo_604, KVIntCUUnpackInfo_605, KVIntCUUnpackInfo_606, KVIntCUUnpackInfo_607,
			KVIntCUUnpackInfo_608, KVIntCUUnpackInfo_609, KVIntCUUnpackInfo_610, KVIntCUUnpackInfo_611,
			KVIntCUUnpackInfo_612, KVIntCUUnpackInfo_613, KVIntCUUnpackInfo_614, KVIntCUUnpackInfo_615,
			KVIntCUUnpackInfo_616, KVIntCUUnpackInfo_617, KVIntCUUnpackInfo_618, KVIntCUUnpackInfo_619,
			KVIntCUUnpackInfo_620, KVIntCUUnpackInfo_621, KVIntCUUnpackInfo_622, KVIntCUUnpackInfo_623,
			KVIntCUUnpackInfo_624, KVIntCUUnpackInfo_625, KVIntCUUnpackInfo_626, KVIntCUUnpackInfo_627,
			KVIntCUUnpackInfo_628, KVIntCUUnpackInfo_629, KVIntCUUnpackInfo_630, KVIntCUUnpackInfo_631,
			KVIntCUUnpackInfo_632, KVIntCUUnpackInfo_633, KVIntCUUnpackInfo_634, KVIntCUUnpackInfo_635,
			KVIntCUUnpackInfo_636, KVIntCUUnpackInfo_637, KVIntCUUnpackInfo_638, KVIntCUUnpackInfo_639,
			KVIntCUUnpackInfo_640, KVIntCUUnpackInfo_641, KVIntCUUnpackInfo_642, KVIntCUUnpackInfo_643,
			KVIntCUUnpackInfo_644, KVIntCUUnpackInfo_645, KVIntCUUnpackInfo_646, KVIntCUUnpackInfo_647,
			KVIntCUUnpackInfo_648, KVIntCUUnpackInfo_649, KVIntCUUnpackInfo_650, KVIntCUUnpackInfo_651,
			KVIntCUUnpackInfo_652, KVIntCUUnpackInfo_653, KVIntCUUnpackInfo_654, KVIntCUUnpackInfo_655,
			KVIntCUUnpackInfo_656, KVIntCUUnpackInfo_657, KVIntCUUnpackInfo_658, KVIntCUUnpackInfo_659,
			KVIntCUUnpackInfo_660, KVIntCUUnpackInfo_661, KVIntCUUnpackInfo_662, KVIntCUUnpackInfo_663,
			KVIntCUUnpackInfo_664, KVIntCUUnpackInfo_665, KVIntCUUnpackInfo_666, KVIntCUUnpackInfo_667,
			KVIntCUUnpackInfo_668, KVIntCUUnpackInfo_669, KVIntCUUnpackInfo_670, KVIntCUUnpackInfo_671,
			KVIntCUUnpackInfo_672, KVIntCUUnpackInfo_673, KVIntCUUnpackInfo_674, KVIntCUUnpackInfo_675,
			KVIntCUUnpackInfo_676, KVIntCUUnpackInfo_677, KVIntCUUnpackInfo_678, KVIntCUUnpackInfo_679,
			KVIntCUUnpackInfo_680, KVIntCUUnpackInfo_681, KVIntCUUnpackInfo_682, KVIntCUUnpackInfo_683,
			KVIntCUUnpackInfo_684, KVIntCUUnpackInfo_685, KVIntCUUnpackInfo_686, KVIntCUUnpackInfo_687,
			KVIntCUUnpackInfo_688, KVIntCUUnpackInfo_689, KVIntCUUnpackInfo_690, KVIntCUUnpackInfo_691,
			KVIntCUUnpackInfo_692, KVIntCUUnpackInfo_693, KVIntCUUnpackInfo_694, KVIntCUUnpackInfo_695,
			KVIntCUUnpackInfo_696, KVIntCUUnpackInfo_697, KVIntCUUnpackInfo_698, KVIntCUUnpackInfo_699,
			KVIntCUUnpackInfo_700, KVIntCUUnpackInfo_701, KVIntCUUnpackInfo_702, KVIntCUUnpackInfo_703,
			KVIntCUUnpackInfo_704, KVIntCUUnpackInfo_705, KVIntCUUnpackInfo_706, KVIntCUUnpackInfo_707,
			KVIntCUUnpackInfo_708, KVIntCUUnpackInfo_709, KVIntCUUnpackInfo_710, KVIntCUUnpackInfo_711,
			KVIntCUUnpackInfo_712, KVIntCUUnpackInfo_713, KVIntCUUnpackInfo_714, KVIntCUUnpackInfo_715,
			KVIntCUUnpackInfo_716, KVIntCUUnpackInfo_717, KVIntCUUnpackInfo_718, KVIntCUUnpackInfo_719,
			KVIntCUUnpackInfo_720, KVIntCUUnpackInfo_721, KVIntCUUnpackInfo_722, KVIntCUUnpackInfo_723,
			KVIntCUUnpackInfo_724, KVIntCUUnpackInfo_725, KVIntCUUnpackInfo_726, KVIntCUUnpackInfo_727,
			KVIntCUUnpackInfo_728, KVIntCUUnpackInfo_729, KVIntCUUnpackInfo_730, KVIntCUUnpackInfo_731,
			KVIntCUUnpackInfo_732, KVIntCUUnpackInfo_733, KVIntCUUnpackInfo_734, KVIntCUUnpackInfo_735,
			KVIntCUUnpackInfo_736, KVIntCUUnpackInfo_737, KVIntCUUnpackInfo_738, KVIntCUUnpackInfo_739,
			KVIntCUUnpackInfo_740, KVIntCUUnpackInfo_741, KVIntCUUnpackInfo_742, KVIntCUUnpackInfo_743,
			KVIntCUUnpackInfo_744, KVIntCUUnpackInfo_745, KVIntCUUnpackInfo_746, KVIntCUUnpackInfo_747,
			KVIntCUUnpackInfo_748, KVIntCUUnpackInfo_749, KVIntCUUnpackInfo_750, KVIntCUUnpackInfo_751,
			KVIntCUUnpackInfo_752, KVIntCUUnpackInfo_753, KVIntCUUnpackInfo_754, KVIntCUUnpackInfo_755,
			KVIntCUUnpackInfo_756, KVIntCUUnpackInfo_757, KVIntCUUnpackInfo_758, KVIntCUUnpackInfo_759,
			KVIntCUUnpackInfo_760, KVIntCUUnpackInfo_761, KVIntCUUnpackInfo_762, KVIntCUUnpackInfo_763,
			KVIntCUUnpackInfo_764, KVIntCUUnpackInfo_765, KVIntCUUnpackInfo_766, KVIntCUUnpackInfo_767,
			KVIntCUUnpackInfo_768, KVIntCUUnpackInfo_769, KVIntCUUnpackInfo_770, KVIntCUUnpackInfo_771,
			KVIntCUUnpackInfo_772, KVIntCUUnpackInfo_773, KVIntCUUnpackInfo_774, KVIntCUUnpackInfo_775,
			KVIntCUUnpackInfo_776, KVIntCUUnpackInfo_777, KVIntCUUnpackInfo_778, KVIntCUUnpackInfo_779,
			KVIntCUUnpackInfo_780, KVIntCUUnpackInfo_781, KVIntCUUnpackInfo_782, KVIntCUUnpackInfo_783,
			KVIntCUUnpackInfo_784, KVIntCUUnpackInfo_785, KVIntCUUnpackInfo_786, KVIntCUUnpackInfo_787,
			KVIntCUUnpackInfo_788, KVIntCUUnpackInfo_789, KVIntCUUnpackInfo_790, KVIntCUUnpackInfo_791,
			KVIntCUUnpackInfo_792, KVIntCUUnpackInfo_793, KVIntCUUnpackInfo_794, KVIntCUUnpackInfo_795,
			KVIntCUUnpackInfo_796, KVIntCUUnpackInfo_797, KVIntCUUnpackInfo_798, KVIntCUUnpackInfo_799,
			KVIntCUUnpackInfo_800, KVIntCUUnpackInfo_801, KVIntCUUnpackInfo_802, KVIntCUUnpackInfo_803,
			KVIntCUUnpackInfo_804, KVIntCUUnpackInfo_805, KVIntCUUnpackInfo_806, KVIntCUUnpackInfo_807,
			KVIntCUUnpackInfo_808, KVIntCUUnpackInfo_809, KVIntCUUnpackInfo_810, KVIntCUUnpackInfo_811,
			KVIntCUUnpackInfo_812, KVIntCUUnpackInfo_813, KVIntCUUnpackInfo_814, KVIntCUUnpackInfo_815,
			KVIntCUUnpackInfo_816, KVIntCUUnpackInfo_817, KVIntCUUnpackInfo_818, KVIntCUUnpackInfo_819,
			KVIntCUUnpackInfo_820, KVIntCUUnpackInfo_821, KVIntCUUnpackInfo_822, KVIntCUUnpackInfo_823,
			KVIntCUUnpackInfo_824, KVIntCUUnpackInfo_825, KVIntCUUnpackInfo_826, KVIntCUUnpackInfo_827,
			KVIntCUUnpackInfo_828, KVIntCUUnpackInfo_829, KVIntCUUnpackInfo_830, KVIntCUUnpackInfo_831,
			KVIntCUUnpackInfo_832, KVIntCUUnpackInfo_833, KVIntCUUnpackInfo_834, KVIntCUUnpackInfo_835,
			KVIntCUUnpackInfo_836, KVIntCUUnpackInfo_837, KVIntCUUnpackInfo_838, KVIntCUUnpackInfo_839,
			KVIntCUUnpackInfo_840, KVIntCUUnpackInfo_841, KVIntCUUnpackInfo_842, KVIntCUUnpackInfo_843,
			KVIntCUUnpackInfo_844, KVIntCUUnpackInfo_845, KVIntCUUnpackInfo_846, KVIntCUUnpackInfo_847,
			KVIntCUUnpackInfo_848, KVIntCUUnpackInfo_849, KVIntCUUnpackInfo_850, KVIntCUUnpackInfo_851,
			KVIntCUUnpackInfo_852, KVIntCUUnpackInfo_853, KVIntCUUnpackInfo_854, KVIntCUUnpackInfo_855,
			KVIntCUUnpackInfo_856, KVIntCUUnpackInfo_857, KVIntCUUnpackInfo_858, KVIntCUUnpackInfo_859,
			KVIntCUUnpackInfo_860, KVIntCUUnpackInfo_861, KVIntCUUnpackInfo_862, KVIntCUUnpackInfo_863,
			KVIntCUUnpackInfo_864, KVIntCUUnpackInfo_865, KVIntCUUnpackInfo_866, KVIntCUUnpackInfo_867,
			KVIntCUUnpackInfo_868, KVIntCUUnpackInfo_869, KVIntCUUnpackInfo_870, KVIntCUUnpackInfo_871,
			KVIntCUUnpackInfo_872, KVIntCUUnpackInfo_873, KVIntCUUnpackInfo_874, KVIntCUUnpackInfo_875,
			KVIntCUUnpackInfo_876, KVIntCUUnpackInfo_877, KVIntCUUnpackInfo_878, KVIntCUUnpackInfo_879,
			KVIntCUUnpackInfo_880, KVIntCUUnpackInfo_881, KVIntCUUnpackInfo_882, KVIntCUUnpackInfo_883,
			KVIntCUUnpackInfo_884, KVIntCUUnpackInfo_885, KVIntCUUnpackInfo_886, KVIntCUUnpackInfo_887,
			KVIntCUUnpackInfo_888, KVIntCUUnpackInfo_889, KVIntCUUnpackInfo_890, KVIntCUUnpackInfo_891,
			KVIntCUUnpackInfo_892, KVIntCUUnpackInfo_893, KVIntCUUnpackInfo_894, KVIntCUUnpackInfo_895,
			KVIntCUUnpackInfo_896, KVIntCUUnpackInfo_897, KVIntCUUnpackInfo_898, KVIntCUUnpackInfo_899,
			KVIntCUUnpackInfo_900, KVIntCUUnpackInfo_901, KVIntCUUnpackInfo_902, KVIntCUUnpackInfo_903,
			KVIntCUUnpackInfo_904, KVIntCUUnpackInfo_905, KVIntCUUnpackInfo_906, KVIntCUUnpackInfo_907,
			KVIntCUUnpackInfo_908, KVIntCUUnpackInfo_909, KVIntCUUnpackInfo_910, KVIntCUUnpackInfo_911,
			KVIntCUUnpackInfo_912, KVIntCUUnpackInfo_913, KVIntCUUnpackInfo_914, KVIntCUUnpackInfo_915,
			KVIntCUUnpackInfo_916, KVIntCUUnpackInfo_917, KVIntCUUnpackInfo_918, KVIntCUUnpackInfo_919,
			KVIntCUUnpackInfo_920, KVIntCUUnpackInfo_921, KVIntCUUnpackInfo_922, KVIntCUUnpackInfo_923,
			KVIntCUUnpackInfo_924, KVIntCUUnpackInfo_925, KVIntCUUnpackInfo_926, KVIntCUUnpackInfo_927,
			KVIntCUUnpackInfo_928, KVIntCUUnpackInfo_929, KVIntCUUnpackInfo_930, KVIntCUUnpackInfo_931,
			KVIntCUUnpackInfo_932, KVIntCUUnpackInfo_933, KVIntCUUnpackInfo_934, KVIntCUUnpackInfo_935,
			KVIntCUUnpackInfo_936, KVIntCUUnpackInfo_937, KVIntCUUnpackInfo_938, KVIntCUUnpackInfo_939,
			KVIntCUUnpackInfo_940, KVIntCUUnpackInfo_941, KVIntCUUnpackInfo_942, KVIntCUUnpackInfo_943,
			KVIntCUUnpackInfo_944, KVIntCUUnpackInfo_945, KVIntCUUnpackInfo_946, KVIntCUUnpackInfo_947,
			KVIntCUUnpackInfo_948, KVIntCUUnpackInfo_949, KVIntCUUnpackInfo_950, KVIntCUUnpackInfo_951,
			KVIntCUUnpackInfo_952, KVIntCUUnpackInfo_953, KVIntCUUnpackInfo_954, KVIntCUUnpackInfo_955,
			KVIntCUUnpackInfo_956, KVIntCUUnpackInfo_957, KVIntCUUnpackInfo_958, KVIntCUUnpackInfo_959,
			KVIntCUUnpackInfo_960, KVIntCUUnpackInfo_961, KVIntCUUnpackInfo_962, KVIntCUUnpackInfo_963,
			KVIntCUUnpackInfo_964, KVIntCUUnpackInfo_965, KVIntCUUnpackInfo_966, KVIntCUUnpackInfo_967,
			KVIntCUUnpackInfo_968, KVIntCUUnpackInfo_969, KVIntCUUnpackInfo_970, KVIntCUUnpackInfo_971,
			KVIntCUUnpackInfo_972, KVIntCUUnpackInfo_973, KVIntCUUnpackInfo_974, KVIntCUUnpackInfo_975,
			KVIntCUUnpackInfo_976, KVIntCUUnpackInfo_977, KVIntCUUnpackInfo_978, KVIntCUUnpackInfo_979,
			KVIntCUUnpackInfo_980, KVIntCUUnpackInfo_981, KVIntCUUnpackInfo_982, KVIntCUUnpackInfo_983,
			KVIntCUUnpackInfo_984, KVIntCUUnpackInfo_985, KVIntCUUnpackInfo_986, KVIntCUUnpackInfo_987,
			KVIntCUUnpackInfo_988, KVIntCUUnpackInfo_989, KVIntCUUnpackInfo_990, KVIntCUUnpackInfo_991,
			KVIntCUUnpackInfo_992, KVIntCUUnpackInfo_993, KVIntCUUnpackInfo_994, KVIntCUUnpackInfo_995,
			KVIntCUUnpackInfo_996, KVIntCUUnpackInfo_997, KVIntCUUnpackInfo_998, KVIntCUUnpackInfo_999,
			KVIntCUUnpackInfo_1000, KVIntCUUnpackInfo_1001, KVIntCUUnpackInfo_1002, KVIntCUUnpackInfo_1003,
			KVIntCUUnpackInfo_1004, KVIntCUUnpackInfo_1005, KVIntCUUnpackInfo_1006, KVIntCUUnpackInfo_1007,
			KVIntCUUnpackInfo_1008, KVIntCUUnpackInfo_1009, KVIntCUUnpackInfo_1010, KVIntCUUnpackInfo_1011,
			KVIntCUUnpackInfo_1012, KVIntCUUnpackInfo_1013, KVIntCUUnpackInfo_1014, KVIntCUUnpackInfo_1015,
			KVIntCUUnpackInfo_1016, KVIntCUUnpackInfo_1017, KVIntCUUnpackInfo_1018, KVIntCUUnpackInfo_1019,
			KVIntCUUnpackInfo_1020, KVIntCUUnpackInfo_1021, KVIntCUUnpackInfo_1022, KVIntCUUnpackInfo_1023
};

}
}

#endif

#endif /* SIMD_KVINT_CU_UNPACK_HPP_ */

/*

#include <iostream>
#include <sstream>
#include <stdint.h>
#include <string>
#include <stdlib.h>

using namespace std;

string FUNC_NAME_PREFIX = "simd_kvint_cu_unpack";
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
	unpackInfoArrStr += "static KVIntCUUnpackInfo KVIntCUUnpackInfoArr[1024] = {\n";
	for (int i=0; i<1024; i++) {
		if (i % 4 == 0)
			unpackInfoArrStr += TRIPLE_TAB;
		unpackInfoArrStr += "KVIntCUUnpackInfo_" + Int2Str(i);
		if (i != 1023)
			unpackInfoArrStr += ", ";

		if (i % 4 == 3)
			unpackInfoArrStr += "\n";
	}
	unpackInfoArrStr += "};\n";
}

int main(int argc, char **argv) {

for (uint32_t lastStatus = 0; lastStatus < 4; lastStatus ++) {

	for (uint32_t i=0; i<256; i++) {
		uint32_t infoIdx = (lastStatus << 8) + i;

		bool validGroup = true;
		uint32_t offsetArr[8] = {0,0,0,0,0,0,0,0};
		uint32_t lenArr[8] = {0,0,0,0,0,0,0,0};
		uint32_t maskArr[8] = {0,0,0,0,0,0,0,0};
		uint32_t intNum = 0;
		uint32_t statusGen = 0;
		uint32_t byteToWrite = 0;
		uint32_t mask = i;
		uint32_t totalByteCount = 0;
		uint32_t curBitIdx = 0;

		uint32_t intBitNum;
		bool validUnary;
		bool firstGroupInt = true;
		while (curBitIdx < 8) {
			intBitNum = 0;
			validUnary = false;
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
				else if (firstGroupInt && intBitNum + lastStatus > 4) {
					validGroup = false;
				}

				lenArr[intNum] = intBitNum;
				offsetArr[intNum] = curBitIdx - intBitNum;	//offset starts from 0

				maskArr[intNum] = (1LL << (intBitNum * 8)) - 1;
				intNum ++;
			}
			firstGroupInt = false;
		}

		// include bytes from last group
		lenArr[0] += lastStatus;

		if (!validUnary) {	//last int of the group doesn't stop with 0, generate a remainder status
			statusGen = intBitNum;
		}

		if (!validGroup) {
			intNum = 0;
		}

		if (intNum == 0) {
			validGroup = false;	//a valid group should represent at least one integer
		}



		// begByteOffset: if there exists remaining unprocesse bytes in the last groups, start reading from the last
		// half part in the previous group!
		int begByteOffset = (4 - lastStatus) % 4;

		// note that begByteOffset is different from infoIdx!
		printFunc(begByteOffset, lenArr, intNum, infoIdx);

		byteToWrite = statusGen + (intNum << 2) - lastStatus;

		for (int j=0; j<intNum; j++)
			totalByteCount += lenArr[j];

		// different from codeword actually read!
		int codewordSkipped = 0;
		if (lastStatus > 0)	{	// skip the words in last group
			codewordSkipped ++;
		}
		int tmp = totalByteCount - lastStatus;
		codewordSkipped += (tmp + 3) / 4;
		if (statusGen > 0) {
			codewordSkipped --;		// leave the right words in current group
		}

		//output
		//output
		unpackInfoStr += "static KVIntCUUnpackInfo KVIntCUUnpackInfo_" + Int2Str(infoIdx) + " = { ";
		unpackInfoStr += FUNC_NAME_PREFIX + "_" + Int2Str(infoIdx) + "<uint32_t>, ";
		unpackInfoStr += Int2Str(codewordSkipped << 2) + ", ";
		unpackInfoStr += Int2Str(intNum << 2) + ", ";
		unpackInfoStr += Int2Str(statusGen) + ", ";
		unpackInfoStr += (validGroup ? "true" : "false");
		unpackInfoStr += " };\n";
	}

}

	cout << endl;
	cout << unpackInfoStr;
	cout << endl;
	printUnpackInfoArr();
	cout << unpackInfoArrStr;

	return 0;
}

*/
