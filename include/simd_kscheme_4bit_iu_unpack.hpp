/*
 * simd_kscheme_4bit_iu_unpack.hpp
 *
 *  Created on: 2013-6-9
 *      Author: zxd
 */

#ifndef SIMD_KSCHEME_4BIT_IU_UNPACK_HPP_
#define SIMD_KSCHEME_4BIT_IU_UNPACK_HPP_

#ifdef USE_SSE_INSTRUCTION

namespace paradise {
namespace index {

struct SIMDK4IUUnpackInfo{
	void (*m_subFunc)(uint32_t *des, const uint32_t *src);
	int m_codewordNum;
	int m_intNum;
	bool m_valid;
};

static const struct kscheme_4bit_iu_and_0{
uint32_t a[4];
}kscheme_4bit_iu_and_0 __attribute__((aligned(16))) = {{0xf,0xf,0xf,0xf},};
static const struct kscheme_4bit_iu_and_1{
uint32_t a[4];
}kscheme_4bit_iu_and_1 __attribute__((aligned(16))) = {{0xff,0xff,0xff,0xff},};
static const struct kscheme_4bit_iu_and_2{
uint32_t a[4];
}kscheme_4bit_iu_and_2 __attribute__((aligned(16))) = {{0xfff,0xfff,0xfff,0xfff},};
static const struct kscheme_4bit_iu_and_3{
uint32_t a[4];
}kscheme_4bit_iu_and_3 __attribute__((aligned(16))) = {{0xffff,0xffff,0xffff,0xffff},};
static const struct kscheme_4bit_iu_and_4{
uint32_t a[4];
}kscheme_4bit_iu_and_4 __attribute__((aligned(16))) = {{0xfffff,0xfffff,0xfffff,0xfffff},};
static const struct kscheme_4bit_iu_and_5{
uint32_t a[4];
}kscheme_4bit_iu_and_5 __attribute__((aligned(16))) = {{0xffffff,0xffffff,0xffffff,0xffffff},};
static const struct kscheme_4bit_iu_and_6{
uint32_t a[4];
}kscheme_4bit_iu_and_6 __attribute__((aligned(16))) = {{0xfffffff,0xfffffff,0xfffffff,0xfffffff},};

template<typename T>
void simd_kscheme_4bit_iu_unpack_prepare() {
	__asm__(
			"movdqa %0,%%xmm0\n"
			"movdqa %1,%%xmm1\n"
			"movdqa %2,%%xmm2\n"
			"movdqa %3,%%xmm3\n"
			"movdqa %4,%%xmm4\n"
			"movdqa %5,%%xmm5\n"
			"movdqa %6,%%xmm6\n"
			::"m"(kscheme_4bit_iu_and_0.a[0]),"m"(kscheme_4bit_iu_and_1.a[0]),"m"(kscheme_4bit_iu_and_2.a[0]),"m"(kscheme_4bit_iu_and_3.a[0]),"m"(kscheme_4bit_iu_and_4.a[0]),"m"(kscheme_4bit_iu_and_5.a[0]),"m"(kscheme_4bit_iu_and_6.a[0])
			:"memory");
}

template<typename T>
void simd_kscheme_4bit_iu_unpack_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %8,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%5\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%6\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%7\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24]),"=m"(des[28])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%5\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%6\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%5\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%6\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_4(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%5\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%6\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_5(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_6(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_7(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_8(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%5\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%6\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_9(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_10(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_11(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_12(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_13(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_14(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_15(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm4,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_16(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%5\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%6\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_17(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_18(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_19(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_20(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_21(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_22(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_23(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_24(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_25(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_26(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_27(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_28(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_29(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_30(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm4,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_31(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm5,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_32(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%5\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%6\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_33(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_34(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_35(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_36(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_37(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_38(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_39(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_40(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_41(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_42(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_43(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_44(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_45(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_46(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_47(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm4,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_48(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_49(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_50(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_51(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_52(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_53(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_54(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_55(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_56(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_57(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_58(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_59(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_60(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm4,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_61(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm4,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_62(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm5,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_63(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm6,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_64(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%5\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%6\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_65(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_66(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_67(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_68(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_69(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_70(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_71(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_72(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_73(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_74(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_75(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_76(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_77(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_78(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_79(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm4,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_80(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_81(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_82(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_83(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_84(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_85(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_86(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_87(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_88(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_89(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_90(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_91(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_92(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_93(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_94(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm4,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_95(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm5,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_96(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_97(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_98(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_99(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_100(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_101(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_102(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_103(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_104(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_105(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_106(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_107(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_108(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_109(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_110(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_111(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm4,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_112(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_113(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_114(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_115(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_116(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_117(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_118(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_119(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_120(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm4,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_121(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm4,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_122(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm4,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_123(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm4,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_124(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm5,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_125(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm5,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_126(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm6,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_127(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			:"=m"(des[0])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_128(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%5\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%6\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_129(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_130(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_131(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_132(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_133(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_134(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_135(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_136(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_137(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_138(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_139(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_140(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_141(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_142(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_143(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm4,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_144(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_145(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_146(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_147(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_148(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_149(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_150(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_151(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_152(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_153(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_154(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_155(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_156(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_157(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_158(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm4,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_159(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm5,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_160(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_161(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_162(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_163(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_164(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_165(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_166(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_167(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_168(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_169(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_170(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_171(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_172(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_173(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_174(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_175(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm4,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_176(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_177(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_178(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_179(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_180(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_181(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_182(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_183(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_184(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_185(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_186(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_187(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_188(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm4,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_189(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm4,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_190(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm5,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_191(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm6,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			:"=m"(des[0])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_192(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%5\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_193(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_194(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_195(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_196(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_197(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_198(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_199(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_200(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_201(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_202(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_203(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_204(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_205(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_206(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_207(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm4,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_208(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_209(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_210(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_211(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_212(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_213(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_214(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_215(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_216(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_217(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_218(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_219(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_220(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_221(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_222(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm4,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_223(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm5,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			:"=m"(des[0])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_224(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%4\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_225(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_226(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_227(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_228(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_229(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_230(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_231(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_232(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_233(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_234(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_235(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_236(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_237(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_238(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_239(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm4,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			:"=m"(des[0])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_240(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_241(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_242(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_243(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_244(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_245(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_246(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_247(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			:"=m"(des[0])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_248(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_249(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_250(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_251(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			:"=m"(des[0])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_252(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_253(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			:"=m"(des[0])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_254(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			:"=m"(des[0])
			:"m"(src[0])
			:"memory");
}
template<typename T>
void simd_kscheme_4bit_iu_unpack_255(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}

static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_0 = { simd_kscheme_4bit_iu_unpack_0<uint32_t>, 4, 32, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_1 = { simd_kscheme_4bit_iu_unpack_1<uint32_t>, 4, 28, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_2 = { simd_kscheme_4bit_iu_unpack_2<uint32_t>, 4, 28, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_3 = { simd_kscheme_4bit_iu_unpack_3<uint32_t>, 4, 24, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_4 = { simd_kscheme_4bit_iu_unpack_4<uint32_t>, 4, 28, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_5 = { simd_kscheme_4bit_iu_unpack_5<uint32_t>, 4, 24, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_6 = { simd_kscheme_4bit_iu_unpack_6<uint32_t>, 4, 24, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_7 = { simd_kscheme_4bit_iu_unpack_7<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_8 = { simd_kscheme_4bit_iu_unpack_8<uint32_t>, 4, 28, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_9 = { simd_kscheme_4bit_iu_unpack_9<uint32_t>, 4, 24, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_10 = { simd_kscheme_4bit_iu_unpack_10<uint32_t>, 4, 24, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_11 = { simd_kscheme_4bit_iu_unpack_11<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_12 = { simd_kscheme_4bit_iu_unpack_12<uint32_t>, 4, 24, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_13 = { simd_kscheme_4bit_iu_unpack_13<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_14 = { simd_kscheme_4bit_iu_unpack_14<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_15 = { simd_kscheme_4bit_iu_unpack_15<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_16 = { simd_kscheme_4bit_iu_unpack_16<uint32_t>, 4, 28, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_17 = { simd_kscheme_4bit_iu_unpack_17<uint32_t>, 4, 24, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_18 = { simd_kscheme_4bit_iu_unpack_18<uint32_t>, 4, 24, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_19 = { simd_kscheme_4bit_iu_unpack_19<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_20 = { simd_kscheme_4bit_iu_unpack_20<uint32_t>, 4, 24, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_21 = { simd_kscheme_4bit_iu_unpack_21<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_22 = { simd_kscheme_4bit_iu_unpack_22<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_23 = { simd_kscheme_4bit_iu_unpack_23<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_24 = { simd_kscheme_4bit_iu_unpack_24<uint32_t>, 4, 24, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_25 = { simd_kscheme_4bit_iu_unpack_25<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_26 = { simd_kscheme_4bit_iu_unpack_26<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_27 = { simd_kscheme_4bit_iu_unpack_27<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_28 = { simd_kscheme_4bit_iu_unpack_28<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_29 = { simd_kscheme_4bit_iu_unpack_29<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_30 = { simd_kscheme_4bit_iu_unpack_30<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_31 = { simd_kscheme_4bit_iu_unpack_31<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_32 = { simd_kscheme_4bit_iu_unpack_32<uint32_t>, 4, 28, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_33 = { simd_kscheme_4bit_iu_unpack_33<uint32_t>, 4, 24, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_34 = { simd_kscheme_4bit_iu_unpack_34<uint32_t>, 4, 24, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_35 = { simd_kscheme_4bit_iu_unpack_35<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_36 = { simd_kscheme_4bit_iu_unpack_36<uint32_t>, 4, 24, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_37 = { simd_kscheme_4bit_iu_unpack_37<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_38 = { simd_kscheme_4bit_iu_unpack_38<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_39 = { simd_kscheme_4bit_iu_unpack_39<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_40 = { simd_kscheme_4bit_iu_unpack_40<uint32_t>, 4, 24, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_41 = { simd_kscheme_4bit_iu_unpack_41<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_42 = { simd_kscheme_4bit_iu_unpack_42<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_43 = { simd_kscheme_4bit_iu_unpack_43<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_44 = { simd_kscheme_4bit_iu_unpack_44<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_45 = { simd_kscheme_4bit_iu_unpack_45<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_46 = { simd_kscheme_4bit_iu_unpack_46<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_47 = { simd_kscheme_4bit_iu_unpack_47<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_48 = { simd_kscheme_4bit_iu_unpack_48<uint32_t>, 4, 24, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_49 = { simd_kscheme_4bit_iu_unpack_49<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_50 = { simd_kscheme_4bit_iu_unpack_50<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_51 = { simd_kscheme_4bit_iu_unpack_51<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_52 = { simd_kscheme_4bit_iu_unpack_52<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_53 = { simd_kscheme_4bit_iu_unpack_53<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_54 = { simd_kscheme_4bit_iu_unpack_54<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_55 = { simd_kscheme_4bit_iu_unpack_55<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_56 = { simd_kscheme_4bit_iu_unpack_56<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_57 = { simd_kscheme_4bit_iu_unpack_57<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_58 = { simd_kscheme_4bit_iu_unpack_58<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_59 = { simd_kscheme_4bit_iu_unpack_59<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_60 = { simd_kscheme_4bit_iu_unpack_60<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_61 = { simd_kscheme_4bit_iu_unpack_61<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_62 = { simd_kscheme_4bit_iu_unpack_62<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_63 = { simd_kscheme_4bit_iu_unpack_63<uint32_t>, 4, 8, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_64 = { simd_kscheme_4bit_iu_unpack_64<uint32_t>, 4, 28, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_65 = { simd_kscheme_4bit_iu_unpack_65<uint32_t>, 4, 24, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_66 = { simd_kscheme_4bit_iu_unpack_66<uint32_t>, 4, 24, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_67 = { simd_kscheme_4bit_iu_unpack_67<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_68 = { simd_kscheme_4bit_iu_unpack_68<uint32_t>, 4, 24, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_69 = { simd_kscheme_4bit_iu_unpack_69<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_70 = { simd_kscheme_4bit_iu_unpack_70<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_71 = { simd_kscheme_4bit_iu_unpack_71<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_72 = { simd_kscheme_4bit_iu_unpack_72<uint32_t>, 4, 24, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_73 = { simd_kscheme_4bit_iu_unpack_73<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_74 = { simd_kscheme_4bit_iu_unpack_74<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_75 = { simd_kscheme_4bit_iu_unpack_75<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_76 = { simd_kscheme_4bit_iu_unpack_76<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_77 = { simd_kscheme_4bit_iu_unpack_77<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_78 = { simd_kscheme_4bit_iu_unpack_78<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_79 = { simd_kscheme_4bit_iu_unpack_79<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_80 = { simd_kscheme_4bit_iu_unpack_80<uint32_t>, 4, 24, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_81 = { simd_kscheme_4bit_iu_unpack_81<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_82 = { simd_kscheme_4bit_iu_unpack_82<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_83 = { simd_kscheme_4bit_iu_unpack_83<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_84 = { simd_kscheme_4bit_iu_unpack_84<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_85 = { simd_kscheme_4bit_iu_unpack_85<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_86 = { simd_kscheme_4bit_iu_unpack_86<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_87 = { simd_kscheme_4bit_iu_unpack_87<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_88 = { simd_kscheme_4bit_iu_unpack_88<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_89 = { simd_kscheme_4bit_iu_unpack_89<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_90 = { simd_kscheme_4bit_iu_unpack_90<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_91 = { simd_kscheme_4bit_iu_unpack_91<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_92 = { simd_kscheme_4bit_iu_unpack_92<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_93 = { simd_kscheme_4bit_iu_unpack_93<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_94 = { simd_kscheme_4bit_iu_unpack_94<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_95 = { simd_kscheme_4bit_iu_unpack_95<uint32_t>, 4, 8, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_96 = { simd_kscheme_4bit_iu_unpack_96<uint32_t>, 4, 24, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_97 = { simd_kscheme_4bit_iu_unpack_97<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_98 = { simd_kscheme_4bit_iu_unpack_98<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_99 = { simd_kscheme_4bit_iu_unpack_99<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_100 = { simd_kscheme_4bit_iu_unpack_100<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_101 = { simd_kscheme_4bit_iu_unpack_101<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_102 = { simd_kscheme_4bit_iu_unpack_102<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_103 = { simd_kscheme_4bit_iu_unpack_103<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_104 = { simd_kscheme_4bit_iu_unpack_104<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_105 = { simd_kscheme_4bit_iu_unpack_105<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_106 = { simd_kscheme_4bit_iu_unpack_106<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_107 = { simd_kscheme_4bit_iu_unpack_107<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_108 = { simd_kscheme_4bit_iu_unpack_108<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_109 = { simd_kscheme_4bit_iu_unpack_109<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_110 = { simd_kscheme_4bit_iu_unpack_110<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_111 = { simd_kscheme_4bit_iu_unpack_111<uint32_t>, 4, 8, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_112 = { simd_kscheme_4bit_iu_unpack_112<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_113 = { simd_kscheme_4bit_iu_unpack_113<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_114 = { simd_kscheme_4bit_iu_unpack_114<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_115 = { simd_kscheme_4bit_iu_unpack_115<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_116 = { simd_kscheme_4bit_iu_unpack_116<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_117 = { simd_kscheme_4bit_iu_unpack_117<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_118 = { simd_kscheme_4bit_iu_unpack_118<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_119 = { simd_kscheme_4bit_iu_unpack_119<uint32_t>, 4, 8, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_120 = { simd_kscheme_4bit_iu_unpack_120<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_121 = { simd_kscheme_4bit_iu_unpack_121<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_122 = { simd_kscheme_4bit_iu_unpack_122<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_123 = { simd_kscheme_4bit_iu_unpack_123<uint32_t>, 4, 8, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_124 = { simd_kscheme_4bit_iu_unpack_124<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_125 = { simd_kscheme_4bit_iu_unpack_125<uint32_t>, 4, 8, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_126 = { simd_kscheme_4bit_iu_unpack_126<uint32_t>, 4, 8, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_127 = { simd_kscheme_4bit_iu_unpack_127<uint32_t>, 4, 4, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_128 = { simd_kscheme_4bit_iu_unpack_128<uint32_t>, 4, 28, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_129 = { simd_kscheme_4bit_iu_unpack_129<uint32_t>, 4, 24, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_130 = { simd_kscheme_4bit_iu_unpack_130<uint32_t>, 4, 24, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_131 = { simd_kscheme_4bit_iu_unpack_131<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_132 = { simd_kscheme_4bit_iu_unpack_132<uint32_t>, 4, 24, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_133 = { simd_kscheme_4bit_iu_unpack_133<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_134 = { simd_kscheme_4bit_iu_unpack_134<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_135 = { simd_kscheme_4bit_iu_unpack_135<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_136 = { simd_kscheme_4bit_iu_unpack_136<uint32_t>, 4, 24, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_137 = { simd_kscheme_4bit_iu_unpack_137<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_138 = { simd_kscheme_4bit_iu_unpack_138<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_139 = { simd_kscheme_4bit_iu_unpack_139<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_140 = { simd_kscheme_4bit_iu_unpack_140<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_141 = { simd_kscheme_4bit_iu_unpack_141<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_142 = { simd_kscheme_4bit_iu_unpack_142<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_143 = { simd_kscheme_4bit_iu_unpack_143<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_144 = { simd_kscheme_4bit_iu_unpack_144<uint32_t>, 4, 24, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_145 = { simd_kscheme_4bit_iu_unpack_145<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_146 = { simd_kscheme_4bit_iu_unpack_146<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_147 = { simd_kscheme_4bit_iu_unpack_147<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_148 = { simd_kscheme_4bit_iu_unpack_148<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_149 = { simd_kscheme_4bit_iu_unpack_149<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_150 = { simd_kscheme_4bit_iu_unpack_150<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_151 = { simd_kscheme_4bit_iu_unpack_151<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_152 = { simd_kscheme_4bit_iu_unpack_152<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_153 = { simd_kscheme_4bit_iu_unpack_153<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_154 = { simd_kscheme_4bit_iu_unpack_154<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_155 = { simd_kscheme_4bit_iu_unpack_155<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_156 = { simd_kscheme_4bit_iu_unpack_156<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_157 = { simd_kscheme_4bit_iu_unpack_157<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_158 = { simd_kscheme_4bit_iu_unpack_158<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_159 = { simd_kscheme_4bit_iu_unpack_159<uint32_t>, 4, 8, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_160 = { simd_kscheme_4bit_iu_unpack_160<uint32_t>, 4, 24, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_161 = { simd_kscheme_4bit_iu_unpack_161<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_162 = { simd_kscheme_4bit_iu_unpack_162<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_163 = { simd_kscheme_4bit_iu_unpack_163<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_164 = { simd_kscheme_4bit_iu_unpack_164<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_165 = { simd_kscheme_4bit_iu_unpack_165<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_166 = { simd_kscheme_4bit_iu_unpack_166<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_167 = { simd_kscheme_4bit_iu_unpack_167<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_168 = { simd_kscheme_4bit_iu_unpack_168<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_169 = { simd_kscheme_4bit_iu_unpack_169<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_170 = { simd_kscheme_4bit_iu_unpack_170<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_171 = { simd_kscheme_4bit_iu_unpack_171<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_172 = { simd_kscheme_4bit_iu_unpack_172<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_173 = { simd_kscheme_4bit_iu_unpack_173<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_174 = { simd_kscheme_4bit_iu_unpack_174<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_175 = { simd_kscheme_4bit_iu_unpack_175<uint32_t>, 4, 8, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_176 = { simd_kscheme_4bit_iu_unpack_176<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_177 = { simd_kscheme_4bit_iu_unpack_177<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_178 = { simd_kscheme_4bit_iu_unpack_178<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_179 = { simd_kscheme_4bit_iu_unpack_179<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_180 = { simd_kscheme_4bit_iu_unpack_180<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_181 = { simd_kscheme_4bit_iu_unpack_181<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_182 = { simd_kscheme_4bit_iu_unpack_182<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_183 = { simd_kscheme_4bit_iu_unpack_183<uint32_t>, 4, 8, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_184 = { simd_kscheme_4bit_iu_unpack_184<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_185 = { simd_kscheme_4bit_iu_unpack_185<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_186 = { simd_kscheme_4bit_iu_unpack_186<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_187 = { simd_kscheme_4bit_iu_unpack_187<uint32_t>, 4, 8, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_188 = { simd_kscheme_4bit_iu_unpack_188<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_189 = { simd_kscheme_4bit_iu_unpack_189<uint32_t>, 4, 8, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_190 = { simd_kscheme_4bit_iu_unpack_190<uint32_t>, 4, 8, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_191 = { simd_kscheme_4bit_iu_unpack_191<uint32_t>, 4, 4, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_192 = { simd_kscheme_4bit_iu_unpack_192<uint32_t>, 4, 24, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_193 = { simd_kscheme_4bit_iu_unpack_193<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_194 = { simd_kscheme_4bit_iu_unpack_194<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_195 = { simd_kscheme_4bit_iu_unpack_195<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_196 = { simd_kscheme_4bit_iu_unpack_196<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_197 = { simd_kscheme_4bit_iu_unpack_197<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_198 = { simd_kscheme_4bit_iu_unpack_198<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_199 = { simd_kscheme_4bit_iu_unpack_199<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_200 = { simd_kscheme_4bit_iu_unpack_200<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_201 = { simd_kscheme_4bit_iu_unpack_201<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_202 = { simd_kscheme_4bit_iu_unpack_202<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_203 = { simd_kscheme_4bit_iu_unpack_203<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_204 = { simd_kscheme_4bit_iu_unpack_204<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_205 = { simd_kscheme_4bit_iu_unpack_205<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_206 = { simd_kscheme_4bit_iu_unpack_206<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_207 = { simd_kscheme_4bit_iu_unpack_207<uint32_t>, 4, 8, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_208 = { simd_kscheme_4bit_iu_unpack_208<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_209 = { simd_kscheme_4bit_iu_unpack_209<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_210 = { simd_kscheme_4bit_iu_unpack_210<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_211 = { simd_kscheme_4bit_iu_unpack_211<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_212 = { simd_kscheme_4bit_iu_unpack_212<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_213 = { simd_kscheme_4bit_iu_unpack_213<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_214 = { simd_kscheme_4bit_iu_unpack_214<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_215 = { simd_kscheme_4bit_iu_unpack_215<uint32_t>, 4, 8, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_216 = { simd_kscheme_4bit_iu_unpack_216<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_217 = { simd_kscheme_4bit_iu_unpack_217<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_218 = { simd_kscheme_4bit_iu_unpack_218<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_219 = { simd_kscheme_4bit_iu_unpack_219<uint32_t>, 4, 8, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_220 = { simd_kscheme_4bit_iu_unpack_220<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_221 = { simd_kscheme_4bit_iu_unpack_221<uint32_t>, 4, 8, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_222 = { simd_kscheme_4bit_iu_unpack_222<uint32_t>, 4, 8, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_223 = { simd_kscheme_4bit_iu_unpack_223<uint32_t>, 4, 4, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_224 = { simd_kscheme_4bit_iu_unpack_224<uint32_t>, 4, 20, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_225 = { simd_kscheme_4bit_iu_unpack_225<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_226 = { simd_kscheme_4bit_iu_unpack_226<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_227 = { simd_kscheme_4bit_iu_unpack_227<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_228 = { simd_kscheme_4bit_iu_unpack_228<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_229 = { simd_kscheme_4bit_iu_unpack_229<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_230 = { simd_kscheme_4bit_iu_unpack_230<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_231 = { simd_kscheme_4bit_iu_unpack_231<uint32_t>, 4, 8, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_232 = { simd_kscheme_4bit_iu_unpack_232<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_233 = { simd_kscheme_4bit_iu_unpack_233<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_234 = { simd_kscheme_4bit_iu_unpack_234<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_235 = { simd_kscheme_4bit_iu_unpack_235<uint32_t>, 4, 8, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_236 = { simd_kscheme_4bit_iu_unpack_236<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_237 = { simd_kscheme_4bit_iu_unpack_237<uint32_t>, 4, 8, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_238 = { simd_kscheme_4bit_iu_unpack_238<uint32_t>, 4, 8, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_239 = { simd_kscheme_4bit_iu_unpack_239<uint32_t>, 4, 4, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_240 = { simd_kscheme_4bit_iu_unpack_240<uint32_t>, 4, 16, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_241 = { simd_kscheme_4bit_iu_unpack_241<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_242 = { simd_kscheme_4bit_iu_unpack_242<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_243 = { simd_kscheme_4bit_iu_unpack_243<uint32_t>, 4, 8, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_244 = { simd_kscheme_4bit_iu_unpack_244<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_245 = { simd_kscheme_4bit_iu_unpack_245<uint32_t>, 4, 8, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_246 = { simd_kscheme_4bit_iu_unpack_246<uint32_t>, 4, 8, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_247 = { simd_kscheme_4bit_iu_unpack_247<uint32_t>, 4, 4, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_248 = { simd_kscheme_4bit_iu_unpack_248<uint32_t>, 4, 12, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_249 = { simd_kscheme_4bit_iu_unpack_249<uint32_t>, 4, 8, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_250 = { simd_kscheme_4bit_iu_unpack_250<uint32_t>, 4, 8, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_251 = { simd_kscheme_4bit_iu_unpack_251<uint32_t>, 4, 4, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_252 = { simd_kscheme_4bit_iu_unpack_252<uint32_t>, 4, 8, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_253 = { simd_kscheme_4bit_iu_unpack_253<uint32_t>, 4, 4, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_254 = { simd_kscheme_4bit_iu_unpack_254<uint32_t>, 4, 4, true };
static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfo_255 = { simd_kscheme_4bit_iu_unpack_255<uint32_t>, 0, 0, false };

static SIMDK4IUUnpackInfo SIMDK4IUUnpackInfoArr[256] = {
			SIMDK4IUUnpackInfo_0, SIMDK4IUUnpackInfo_1, SIMDK4IUUnpackInfo_2, SIMDK4IUUnpackInfo_3,
			SIMDK4IUUnpackInfo_4, SIMDK4IUUnpackInfo_5, SIMDK4IUUnpackInfo_6, SIMDK4IUUnpackInfo_7,
			SIMDK4IUUnpackInfo_8, SIMDK4IUUnpackInfo_9, SIMDK4IUUnpackInfo_10, SIMDK4IUUnpackInfo_11,
			SIMDK4IUUnpackInfo_12, SIMDK4IUUnpackInfo_13, SIMDK4IUUnpackInfo_14, SIMDK4IUUnpackInfo_15,
			SIMDK4IUUnpackInfo_16, SIMDK4IUUnpackInfo_17, SIMDK4IUUnpackInfo_18, SIMDK4IUUnpackInfo_19,
			SIMDK4IUUnpackInfo_20, SIMDK4IUUnpackInfo_21, SIMDK4IUUnpackInfo_22, SIMDK4IUUnpackInfo_23,
			SIMDK4IUUnpackInfo_24, SIMDK4IUUnpackInfo_25, SIMDK4IUUnpackInfo_26, SIMDK4IUUnpackInfo_27,
			SIMDK4IUUnpackInfo_28, SIMDK4IUUnpackInfo_29, SIMDK4IUUnpackInfo_30, SIMDK4IUUnpackInfo_31,
			SIMDK4IUUnpackInfo_32, SIMDK4IUUnpackInfo_33, SIMDK4IUUnpackInfo_34, SIMDK4IUUnpackInfo_35,
			SIMDK4IUUnpackInfo_36, SIMDK4IUUnpackInfo_37, SIMDK4IUUnpackInfo_38, SIMDK4IUUnpackInfo_39,
			SIMDK4IUUnpackInfo_40, SIMDK4IUUnpackInfo_41, SIMDK4IUUnpackInfo_42, SIMDK4IUUnpackInfo_43,
			SIMDK4IUUnpackInfo_44, SIMDK4IUUnpackInfo_45, SIMDK4IUUnpackInfo_46, SIMDK4IUUnpackInfo_47,
			SIMDK4IUUnpackInfo_48, SIMDK4IUUnpackInfo_49, SIMDK4IUUnpackInfo_50, SIMDK4IUUnpackInfo_51,
			SIMDK4IUUnpackInfo_52, SIMDK4IUUnpackInfo_53, SIMDK4IUUnpackInfo_54, SIMDK4IUUnpackInfo_55,
			SIMDK4IUUnpackInfo_56, SIMDK4IUUnpackInfo_57, SIMDK4IUUnpackInfo_58, SIMDK4IUUnpackInfo_59,
			SIMDK4IUUnpackInfo_60, SIMDK4IUUnpackInfo_61, SIMDK4IUUnpackInfo_62, SIMDK4IUUnpackInfo_63,
			SIMDK4IUUnpackInfo_64, SIMDK4IUUnpackInfo_65, SIMDK4IUUnpackInfo_66, SIMDK4IUUnpackInfo_67,
			SIMDK4IUUnpackInfo_68, SIMDK4IUUnpackInfo_69, SIMDK4IUUnpackInfo_70, SIMDK4IUUnpackInfo_71,
			SIMDK4IUUnpackInfo_72, SIMDK4IUUnpackInfo_73, SIMDK4IUUnpackInfo_74, SIMDK4IUUnpackInfo_75,
			SIMDK4IUUnpackInfo_76, SIMDK4IUUnpackInfo_77, SIMDK4IUUnpackInfo_78, SIMDK4IUUnpackInfo_79,
			SIMDK4IUUnpackInfo_80, SIMDK4IUUnpackInfo_81, SIMDK4IUUnpackInfo_82, SIMDK4IUUnpackInfo_83,
			SIMDK4IUUnpackInfo_84, SIMDK4IUUnpackInfo_85, SIMDK4IUUnpackInfo_86, SIMDK4IUUnpackInfo_87,
			SIMDK4IUUnpackInfo_88, SIMDK4IUUnpackInfo_89, SIMDK4IUUnpackInfo_90, SIMDK4IUUnpackInfo_91,
			SIMDK4IUUnpackInfo_92, SIMDK4IUUnpackInfo_93, SIMDK4IUUnpackInfo_94, SIMDK4IUUnpackInfo_95,
			SIMDK4IUUnpackInfo_96, SIMDK4IUUnpackInfo_97, SIMDK4IUUnpackInfo_98, SIMDK4IUUnpackInfo_99,
			SIMDK4IUUnpackInfo_100, SIMDK4IUUnpackInfo_101, SIMDK4IUUnpackInfo_102, SIMDK4IUUnpackInfo_103,
			SIMDK4IUUnpackInfo_104, SIMDK4IUUnpackInfo_105, SIMDK4IUUnpackInfo_106, SIMDK4IUUnpackInfo_107,
			SIMDK4IUUnpackInfo_108, SIMDK4IUUnpackInfo_109, SIMDK4IUUnpackInfo_110, SIMDK4IUUnpackInfo_111,
			SIMDK4IUUnpackInfo_112, SIMDK4IUUnpackInfo_113, SIMDK4IUUnpackInfo_114, SIMDK4IUUnpackInfo_115,
			SIMDK4IUUnpackInfo_116, SIMDK4IUUnpackInfo_117, SIMDK4IUUnpackInfo_118, SIMDK4IUUnpackInfo_119,
			SIMDK4IUUnpackInfo_120, SIMDK4IUUnpackInfo_121, SIMDK4IUUnpackInfo_122, SIMDK4IUUnpackInfo_123,
			SIMDK4IUUnpackInfo_124, SIMDK4IUUnpackInfo_125, SIMDK4IUUnpackInfo_126, SIMDK4IUUnpackInfo_127,
			SIMDK4IUUnpackInfo_128, SIMDK4IUUnpackInfo_129, SIMDK4IUUnpackInfo_130, SIMDK4IUUnpackInfo_131,
			SIMDK4IUUnpackInfo_132, SIMDK4IUUnpackInfo_133, SIMDK4IUUnpackInfo_134, SIMDK4IUUnpackInfo_135,
			SIMDK4IUUnpackInfo_136, SIMDK4IUUnpackInfo_137, SIMDK4IUUnpackInfo_138, SIMDK4IUUnpackInfo_139,
			SIMDK4IUUnpackInfo_140, SIMDK4IUUnpackInfo_141, SIMDK4IUUnpackInfo_142, SIMDK4IUUnpackInfo_143,
			SIMDK4IUUnpackInfo_144, SIMDK4IUUnpackInfo_145, SIMDK4IUUnpackInfo_146, SIMDK4IUUnpackInfo_147,
			SIMDK4IUUnpackInfo_148, SIMDK4IUUnpackInfo_149, SIMDK4IUUnpackInfo_150, SIMDK4IUUnpackInfo_151,
			SIMDK4IUUnpackInfo_152, SIMDK4IUUnpackInfo_153, SIMDK4IUUnpackInfo_154, SIMDK4IUUnpackInfo_155,
			SIMDK4IUUnpackInfo_156, SIMDK4IUUnpackInfo_157, SIMDK4IUUnpackInfo_158, SIMDK4IUUnpackInfo_159,
			SIMDK4IUUnpackInfo_160, SIMDK4IUUnpackInfo_161, SIMDK4IUUnpackInfo_162, SIMDK4IUUnpackInfo_163,
			SIMDK4IUUnpackInfo_164, SIMDK4IUUnpackInfo_165, SIMDK4IUUnpackInfo_166, SIMDK4IUUnpackInfo_167,
			SIMDK4IUUnpackInfo_168, SIMDK4IUUnpackInfo_169, SIMDK4IUUnpackInfo_170, SIMDK4IUUnpackInfo_171,
			SIMDK4IUUnpackInfo_172, SIMDK4IUUnpackInfo_173, SIMDK4IUUnpackInfo_174, SIMDK4IUUnpackInfo_175,
			SIMDK4IUUnpackInfo_176, SIMDK4IUUnpackInfo_177, SIMDK4IUUnpackInfo_178, SIMDK4IUUnpackInfo_179,
			SIMDK4IUUnpackInfo_180, SIMDK4IUUnpackInfo_181, SIMDK4IUUnpackInfo_182, SIMDK4IUUnpackInfo_183,
			SIMDK4IUUnpackInfo_184, SIMDK4IUUnpackInfo_185, SIMDK4IUUnpackInfo_186, SIMDK4IUUnpackInfo_187,
			SIMDK4IUUnpackInfo_188, SIMDK4IUUnpackInfo_189, SIMDK4IUUnpackInfo_190, SIMDK4IUUnpackInfo_191,
			SIMDK4IUUnpackInfo_192, SIMDK4IUUnpackInfo_193, SIMDK4IUUnpackInfo_194, SIMDK4IUUnpackInfo_195,
			SIMDK4IUUnpackInfo_196, SIMDK4IUUnpackInfo_197, SIMDK4IUUnpackInfo_198, SIMDK4IUUnpackInfo_199,
			SIMDK4IUUnpackInfo_200, SIMDK4IUUnpackInfo_201, SIMDK4IUUnpackInfo_202, SIMDK4IUUnpackInfo_203,
			SIMDK4IUUnpackInfo_204, SIMDK4IUUnpackInfo_205, SIMDK4IUUnpackInfo_206, SIMDK4IUUnpackInfo_207,
			SIMDK4IUUnpackInfo_208, SIMDK4IUUnpackInfo_209, SIMDK4IUUnpackInfo_210, SIMDK4IUUnpackInfo_211,
			SIMDK4IUUnpackInfo_212, SIMDK4IUUnpackInfo_213, SIMDK4IUUnpackInfo_214, SIMDK4IUUnpackInfo_215,
			SIMDK4IUUnpackInfo_216, SIMDK4IUUnpackInfo_217, SIMDK4IUUnpackInfo_218, SIMDK4IUUnpackInfo_219,
			SIMDK4IUUnpackInfo_220, SIMDK4IUUnpackInfo_221, SIMDK4IUUnpackInfo_222, SIMDK4IUUnpackInfo_223,
			SIMDK4IUUnpackInfo_224, SIMDK4IUUnpackInfo_225, SIMDK4IUUnpackInfo_226, SIMDK4IUUnpackInfo_227,
			SIMDK4IUUnpackInfo_228, SIMDK4IUUnpackInfo_229, SIMDK4IUUnpackInfo_230, SIMDK4IUUnpackInfo_231,
			SIMDK4IUUnpackInfo_232, SIMDK4IUUnpackInfo_233, SIMDK4IUUnpackInfo_234, SIMDK4IUUnpackInfo_235,
			SIMDK4IUUnpackInfo_236, SIMDK4IUUnpackInfo_237, SIMDK4IUUnpackInfo_238, SIMDK4IUUnpackInfo_239,
			SIMDK4IUUnpackInfo_240, SIMDK4IUUnpackInfo_241, SIMDK4IUUnpackInfo_242, SIMDK4IUUnpackInfo_243,
			SIMDK4IUUnpackInfo_244, SIMDK4IUUnpackInfo_245, SIMDK4IUUnpackInfo_246, SIMDK4IUUnpackInfo_247,
			SIMDK4IUUnpackInfo_248, SIMDK4IUUnpackInfo_249, SIMDK4IUUnpackInfo_250, SIMDK4IUUnpackInfo_251,
			SIMDK4IUUnpackInfo_252, SIMDK4IUUnpackInfo_253, SIMDK4IUUnpackInfo_254, SIMDK4IUUnpackInfo_255
};

}
}


#endif

#endif /* SIMD_KSCHEME_4BIT_IU_UNPACK_HPP_ */


/*
// metacode:

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

 */
