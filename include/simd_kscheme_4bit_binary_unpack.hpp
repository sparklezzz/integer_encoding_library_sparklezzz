/*
 * simd_kscheme_4bit_binary_unpack.hpp
 *
 *  Created on: 2013-6-9
 *      Author: zxd
 */

#ifndef SIMD_KSCHEME_4BIT_BINARY_UNPACK_HPP_
#define SIMD_KSCHEME_4BIT_BINARY_UNPACK_HPP_

#ifdef USE_SSE_INSTRUCTION

#include <stdint.h>

namespace paradise {
namespace index {

struct SIMDK4BUnpackInfo{
	void (*m_subFunc)(uint32_t *des, const uint32_t *src);
	uint8_t m_totalBitCount;
};

static const struct kscheme_4bit_binary_val_31{
uint32_t a[4];
}kscheme_4bit_binary_val_31 __attribute__((aligned(16))) = {{0x1f,0x0,0x0,0x0},};
static const struct kscheme_4bit_binary_val_32{
uint32_t a[4];
}kscheme_4bit_binary_val_32 __attribute__((aligned(16))) = {{0x20,0x0,0x0,0x0},};

template<typename T>
void simd_kscheme_4bit_binary_unpack_prepare() {
	__asm__(
			"pxor %%xmm11,%%xmm11\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm13,%%xmm13\n"
			"movdqa %0,%%xmm14\n"
			"movdqa %1,%%xmm15\n"
			::"m"(kscheme_4bit_binary_val_31.a[0]),"m"(kscheme_4bit_binary_val_32.a[0])
			:"memory");
}

template<typename T>
void simd_kscheme_4bit_binary_unpack_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $28,%%xmm2\n"
			"psrld $28,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $4,%%xmm2\n"
			"pslld $28,%%xmm2\n"
			"psrld $28,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $8,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $24,%%xmm2\n"
			"psrld $24,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $8,%%xmm2\n"
			"pslld $28,%%xmm2\n"
			"psrld $28,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $12,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $20,%%xmm2\n"
			"psrld $20,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $12,%%xmm2\n"
			"pslld $28,%%xmm2\n"
			"psrld $28,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $16,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $16,%%xmm2\n"
			"psrld $16,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $16,%%xmm2\n"
			"pslld $28,%%xmm2\n"
			"psrld $28,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $20,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_4(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $12,%%xmm2\n"
			"psrld $12,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $20,%%xmm2\n"
			"pslld $28,%%xmm2\n"
			"psrld $28,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $24,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_5(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $8,%%xmm2\n"
			"psrld $8,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $24,%%xmm2\n"
			"pslld $28,%%xmm2\n"
			"psrld $28,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $28,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_6(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $4,%%xmm2\n"
			"psrld $4,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $28,%%xmm2\n"
			"pslld $28,%%xmm2\n"
			"psrld $28,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $32,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_7(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqu %4,%%xmm2\n"
			"movdqa %%xmm1,%%xmm3\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm0\n"
			"movdqa %%xmm2,%%xmm3\n"
			"psrld %%xmm12,%%xmm1\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm1\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm1,%%xmm3\n"
			"pslld $28,%%xmm3\n"
			"psrld $28,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $36,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_8(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_9(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_10(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_11(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_12(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_13(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_14(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_15(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_16(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $28,%%xmm2\n"
			"psrld $28,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $4,%%xmm2\n"
			"pslld $24,%%xmm2\n"
			"psrld $24,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $12,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_17(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $24,%%xmm2\n"
			"psrld $24,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $8,%%xmm2\n"
			"pslld $24,%%xmm2\n"
			"psrld $24,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $16,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_18(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $20,%%xmm2\n"
			"psrld $20,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $12,%%xmm2\n"
			"pslld $24,%%xmm2\n"
			"psrld $24,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $20,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_19(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $16,%%xmm2\n"
			"psrld $16,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $16,%%xmm2\n"
			"pslld $24,%%xmm2\n"
			"psrld $24,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $24,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_20(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $12,%%xmm2\n"
			"psrld $12,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $20,%%xmm2\n"
			"pslld $24,%%xmm2\n"
			"psrld $24,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $28,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_21(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $8,%%xmm2\n"
			"psrld $8,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $24,%%xmm2\n"
			"pslld $24,%%xmm2\n"
			"psrld $24,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $32,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_22(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqu %4,%%xmm2\n"
			"movdqa %%xmm1,%%xmm3\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm0\n"
			"movdqa %%xmm2,%%xmm3\n"
			"psrld %%xmm12,%%xmm1\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm1\n"
			"movdqa %%xmm0,%%xmm3\n"
			"pslld $4,%%xmm3\n"
			"psrld $4,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $28,%%xmm3\n"
			"pslld $4,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $24,%%xmm3\n"
			"psrld $24,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $36,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_23(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqu %4,%%xmm2\n"
			"movdqa %%xmm1,%%xmm3\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm0\n"
			"movdqa %%xmm2,%%xmm3\n"
			"psrld %%xmm12,%%xmm1\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm1\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm1,%%xmm3\n"
			"pslld $24,%%xmm3\n"
			"psrld $24,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $40,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_24(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_25(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_26(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_27(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_28(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_29(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_30(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_31(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_32(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $28,%%xmm2\n"
			"psrld $28,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $4,%%xmm2\n"
			"pslld $20,%%xmm2\n"
			"psrld $20,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $16,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_33(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $24,%%xmm2\n"
			"psrld $24,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $8,%%xmm2\n"
			"pslld $20,%%xmm2\n"
			"psrld $20,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $20,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_34(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $20,%%xmm2\n"
			"psrld $20,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $12,%%xmm2\n"
			"pslld $20,%%xmm2\n"
			"psrld $20,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $24,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_35(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $16,%%xmm2\n"
			"psrld $16,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $16,%%xmm2\n"
			"pslld $20,%%xmm2\n"
			"psrld $20,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $28,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_36(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $12,%%xmm2\n"
			"psrld $12,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $20,%%xmm2\n"
			"pslld $20,%%xmm2\n"
			"psrld $20,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $32,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_37(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqu %4,%%xmm2\n"
			"movdqa %%xmm1,%%xmm3\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm0\n"
			"movdqa %%xmm2,%%xmm3\n"
			"psrld %%xmm12,%%xmm1\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm1\n"
			"movdqa %%xmm0,%%xmm3\n"
			"pslld $8,%%xmm3\n"
			"psrld $8,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $24,%%xmm3\n"
			"pslld $8,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $20,%%xmm3\n"
			"psrld $20,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $36,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_38(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqu %4,%%xmm2\n"
			"movdqa %%xmm1,%%xmm3\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm0\n"
			"movdqa %%xmm2,%%xmm3\n"
			"psrld %%xmm12,%%xmm1\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm1\n"
			"movdqa %%xmm0,%%xmm3\n"
			"pslld $4,%%xmm3\n"
			"psrld $4,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $28,%%xmm3\n"
			"pslld $4,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $20,%%xmm3\n"
			"psrld $20,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $40,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_39(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqu %4,%%xmm2\n"
			"movdqa %%xmm1,%%xmm3\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm0\n"
			"movdqa %%xmm2,%%xmm3\n"
			"psrld %%xmm12,%%xmm1\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm1\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm1,%%xmm3\n"
			"pslld $20,%%xmm3\n"
			"psrld $20,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $44,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_40(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_41(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_42(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_43(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_44(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_45(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_46(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_47(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_48(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $28,%%xmm2\n"
			"psrld $28,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $4,%%xmm2\n"
			"pslld $16,%%xmm2\n"
			"psrld $16,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $20,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_49(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $24,%%xmm2\n"
			"psrld $24,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $8,%%xmm2\n"
			"pslld $16,%%xmm2\n"
			"psrld $16,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $24,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_50(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $20,%%xmm2\n"
			"psrld $20,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $12,%%xmm2\n"
			"pslld $16,%%xmm2\n"
			"psrld $16,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $28,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_51(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $16,%%xmm2\n"
			"psrld $16,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $16,%%xmm2\n"
			"pslld $16,%%xmm2\n"
			"psrld $16,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $32,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_52(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqu %4,%%xmm2\n"
			"movdqa %%xmm1,%%xmm3\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm0\n"
			"movdqa %%xmm2,%%xmm3\n"
			"psrld %%xmm12,%%xmm1\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm1\n"
			"movdqa %%xmm0,%%xmm3\n"
			"pslld $12,%%xmm3\n"
			"psrld $12,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $20,%%xmm3\n"
			"pslld $12,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $16,%%xmm3\n"
			"psrld $16,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $36,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_53(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqu %4,%%xmm2\n"
			"movdqa %%xmm1,%%xmm3\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm0\n"
			"movdqa %%xmm2,%%xmm3\n"
			"psrld %%xmm12,%%xmm1\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm1\n"
			"movdqa %%xmm0,%%xmm3\n"
			"pslld $8,%%xmm3\n"
			"psrld $8,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $24,%%xmm3\n"
			"pslld $8,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $16,%%xmm3\n"
			"psrld $16,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $40,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_54(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqu %4,%%xmm2\n"
			"movdqa %%xmm1,%%xmm3\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm0\n"
			"movdqa %%xmm2,%%xmm3\n"
			"psrld %%xmm12,%%xmm1\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm1\n"
			"movdqa %%xmm0,%%xmm3\n"
			"pslld $4,%%xmm3\n"
			"psrld $4,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $28,%%xmm3\n"
			"pslld $4,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $16,%%xmm3\n"
			"psrld $16,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $44,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_55(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqu %4,%%xmm2\n"
			"movdqa %%xmm1,%%xmm3\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm0\n"
			"movdqa %%xmm2,%%xmm3\n"
			"psrld %%xmm12,%%xmm1\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm1\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm1,%%xmm3\n"
			"pslld $16,%%xmm3\n"
			"psrld $16,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $48,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_56(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_57(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_58(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_59(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_60(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_61(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_62(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_63(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_64(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $28,%%xmm2\n"
			"psrld $28,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $4,%%xmm2\n"
			"pslld $12,%%xmm2\n"
			"psrld $12,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $24,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_65(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $24,%%xmm2\n"
			"psrld $24,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $8,%%xmm2\n"
			"pslld $12,%%xmm2\n"
			"psrld $12,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $28,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_66(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $20,%%xmm2\n"
			"psrld $20,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $12,%%xmm2\n"
			"pslld $12,%%xmm2\n"
			"psrld $12,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $32,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_67(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqu %4,%%xmm2\n"
			"movdqa %%xmm1,%%xmm3\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm0\n"
			"movdqa %%xmm2,%%xmm3\n"
			"psrld %%xmm12,%%xmm1\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm1\n"
			"movdqa %%xmm0,%%xmm3\n"
			"pslld $16,%%xmm3\n"
			"psrld $16,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $16,%%xmm3\n"
			"pslld $16,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $12,%%xmm3\n"
			"psrld $12,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $36,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_68(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqu %4,%%xmm2\n"
			"movdqa %%xmm1,%%xmm3\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm0\n"
			"movdqa %%xmm2,%%xmm3\n"
			"psrld %%xmm12,%%xmm1\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm1\n"
			"movdqa %%xmm0,%%xmm3\n"
			"pslld $12,%%xmm3\n"
			"psrld $12,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $20,%%xmm3\n"
			"pslld $12,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $12,%%xmm3\n"
			"psrld $12,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $40,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_69(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqu %4,%%xmm2\n"
			"movdqa %%xmm1,%%xmm3\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm0\n"
			"movdqa %%xmm2,%%xmm3\n"
			"psrld %%xmm12,%%xmm1\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm1\n"
			"movdqa %%xmm0,%%xmm3\n"
			"pslld $8,%%xmm3\n"
			"psrld $8,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $24,%%xmm3\n"
			"pslld $8,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $12,%%xmm3\n"
			"psrld $12,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $44,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_70(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqu %4,%%xmm2\n"
			"movdqa %%xmm1,%%xmm3\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm0\n"
			"movdqa %%xmm2,%%xmm3\n"
			"psrld %%xmm12,%%xmm1\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm1\n"
			"movdqa %%xmm0,%%xmm3\n"
			"pslld $4,%%xmm3\n"
			"psrld $4,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $28,%%xmm3\n"
			"pslld $4,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $12,%%xmm3\n"
			"psrld $12,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $48,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_71(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqu %4,%%xmm2\n"
			"movdqa %%xmm1,%%xmm3\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm0\n"
			"movdqa %%xmm2,%%xmm3\n"
			"psrld %%xmm12,%%xmm1\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm1\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm1,%%xmm3\n"
			"pslld $12,%%xmm3\n"
			"psrld $12,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $52,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_72(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_73(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_74(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_75(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_76(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_77(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_78(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_79(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_80(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $28,%%xmm2\n"
			"psrld $28,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $4,%%xmm2\n"
			"pslld $8,%%xmm2\n"
			"psrld $8,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $28,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_81(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $24,%%xmm2\n"
			"psrld $24,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $8,%%xmm2\n"
			"pslld $8,%%xmm2\n"
			"psrld $8,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $32,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_82(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqu %4,%%xmm2\n"
			"movdqa %%xmm1,%%xmm3\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm0\n"
			"movdqa %%xmm2,%%xmm3\n"
			"psrld %%xmm12,%%xmm1\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm1\n"
			"movdqa %%xmm0,%%xmm3\n"
			"pslld $20,%%xmm3\n"
			"psrld $20,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $12,%%xmm3\n"
			"pslld $20,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $8,%%xmm3\n"
			"psrld $8,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $36,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_83(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqu %4,%%xmm2\n"
			"movdqa %%xmm1,%%xmm3\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm0\n"
			"movdqa %%xmm2,%%xmm3\n"
			"psrld %%xmm12,%%xmm1\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm1\n"
			"movdqa %%xmm0,%%xmm3\n"
			"pslld $16,%%xmm3\n"
			"psrld $16,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $16,%%xmm3\n"
			"pslld $16,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $8,%%xmm3\n"
			"psrld $8,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $40,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_84(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqu %4,%%xmm2\n"
			"movdqa %%xmm1,%%xmm3\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm0\n"
			"movdqa %%xmm2,%%xmm3\n"
			"psrld %%xmm12,%%xmm1\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm1\n"
			"movdqa %%xmm0,%%xmm3\n"
			"pslld $12,%%xmm3\n"
			"psrld $12,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $20,%%xmm3\n"
			"pslld $12,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $8,%%xmm3\n"
			"psrld $8,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $44,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_85(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqu %4,%%xmm2\n"
			"movdqa %%xmm1,%%xmm3\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm0\n"
			"movdqa %%xmm2,%%xmm3\n"
			"psrld %%xmm12,%%xmm1\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm1\n"
			"movdqa %%xmm0,%%xmm3\n"
			"pslld $8,%%xmm3\n"
			"psrld $8,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $24,%%xmm3\n"
			"pslld $8,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $8,%%xmm3\n"
			"psrld $8,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $48,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_86(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqu %4,%%xmm2\n"
			"movdqa %%xmm1,%%xmm3\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm0\n"
			"movdqa %%xmm2,%%xmm3\n"
			"psrld %%xmm12,%%xmm1\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm1\n"
			"movdqa %%xmm0,%%xmm3\n"
			"pslld $4,%%xmm3\n"
			"psrld $4,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $28,%%xmm3\n"
			"pslld $4,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $8,%%xmm3\n"
			"psrld $8,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $52,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_87(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqu %4,%%xmm2\n"
			"movdqa %%xmm1,%%xmm3\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm0\n"
			"movdqa %%xmm2,%%xmm3\n"
			"psrld %%xmm12,%%xmm1\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm1\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm1,%%xmm3\n"
			"pslld $8,%%xmm3\n"
			"psrld $8,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $56,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_88(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_89(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_90(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_91(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_92(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_93(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_94(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_95(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_96(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $28,%%xmm2\n"
			"psrld $28,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $4,%%xmm2\n"
			"pslld $4,%%xmm2\n"
			"psrld $4,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $32,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_97(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqu %4,%%xmm2\n"
			"movdqa %%xmm1,%%xmm3\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm0\n"
			"movdqa %%xmm2,%%xmm3\n"
			"psrld %%xmm12,%%xmm1\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm1\n"
			"movdqa %%xmm0,%%xmm3\n"
			"pslld $24,%%xmm3\n"
			"psrld $24,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $8,%%xmm3\n"
			"pslld $24,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $4,%%xmm3\n"
			"psrld $4,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $36,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_98(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqu %4,%%xmm2\n"
			"movdqa %%xmm1,%%xmm3\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm0\n"
			"movdqa %%xmm2,%%xmm3\n"
			"psrld %%xmm12,%%xmm1\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm1\n"
			"movdqa %%xmm0,%%xmm3\n"
			"pslld $20,%%xmm3\n"
			"psrld $20,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $12,%%xmm3\n"
			"pslld $20,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $4,%%xmm3\n"
			"psrld $4,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $40,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_99(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqu %4,%%xmm2\n"
			"movdqa %%xmm1,%%xmm3\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm0\n"
			"movdqa %%xmm2,%%xmm3\n"
			"psrld %%xmm12,%%xmm1\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm1\n"
			"movdqa %%xmm0,%%xmm3\n"
			"pslld $16,%%xmm3\n"
			"psrld $16,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $16,%%xmm3\n"
			"pslld $16,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $4,%%xmm3\n"
			"psrld $4,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $44,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_100(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqu %4,%%xmm2\n"
			"movdqa %%xmm1,%%xmm3\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm0\n"
			"movdqa %%xmm2,%%xmm3\n"
			"psrld %%xmm12,%%xmm1\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm1\n"
			"movdqa %%xmm0,%%xmm3\n"
			"pslld $12,%%xmm3\n"
			"psrld $12,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $20,%%xmm3\n"
			"pslld $12,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $4,%%xmm3\n"
			"psrld $4,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $48,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_101(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqu %4,%%xmm2\n"
			"movdqa %%xmm1,%%xmm3\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm0\n"
			"movdqa %%xmm2,%%xmm3\n"
			"psrld %%xmm12,%%xmm1\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm1\n"
			"movdqa %%xmm0,%%xmm3\n"
			"pslld $8,%%xmm3\n"
			"psrld $8,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $24,%%xmm3\n"
			"pslld $8,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $4,%%xmm3\n"
			"psrld $4,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $52,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_102(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqu %4,%%xmm2\n"
			"movdqa %%xmm1,%%xmm3\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm0\n"
			"movdqa %%xmm2,%%xmm3\n"
			"psrld %%xmm12,%%xmm1\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm1\n"
			"movdqa %%xmm0,%%xmm3\n"
			"pslld $4,%%xmm3\n"
			"psrld $4,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $28,%%xmm3\n"
			"pslld $4,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $4,%%xmm3\n"
			"psrld $4,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $56,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_103(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqu %4,%%xmm2\n"
			"movdqa %%xmm1,%%xmm3\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm0\n"
			"movdqa %%xmm2,%%xmm3\n"
			"psrld %%xmm12,%%xmm1\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm1\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm1,%%xmm3\n"
			"pslld $4,%%xmm3\n"
			"psrld $4,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $60,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_104(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_105(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_106(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_107(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_108(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_109(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_110(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_111(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_112(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqu %4,%%xmm2\n"
			"movdqa %%xmm1,%%xmm3\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm0\n"
			"movdqa %%xmm2,%%xmm3\n"
			"psrld %%xmm12,%%xmm1\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm1\n"
			"movdqa %%xmm0,%%xmm3\n"
			"pslld $28,%%xmm3\n"
			"psrld $28,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $4,%%xmm3\n"
			"pslld $28,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $36,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_113(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqu %4,%%xmm2\n"
			"movdqa %%xmm1,%%xmm3\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm0\n"
			"movdqa %%xmm2,%%xmm3\n"
			"psrld %%xmm12,%%xmm1\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm1\n"
			"movdqa %%xmm0,%%xmm3\n"
			"pslld $24,%%xmm3\n"
			"psrld $24,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $8,%%xmm3\n"
			"pslld $24,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $40,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_114(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqu %4,%%xmm2\n"
			"movdqa %%xmm1,%%xmm3\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm0\n"
			"movdqa %%xmm2,%%xmm3\n"
			"psrld %%xmm12,%%xmm1\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm1\n"
			"movdqa %%xmm0,%%xmm3\n"
			"pslld $20,%%xmm3\n"
			"psrld $20,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $12,%%xmm3\n"
			"pslld $20,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $44,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_115(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqu %4,%%xmm2\n"
			"movdqa %%xmm1,%%xmm3\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm0\n"
			"movdqa %%xmm2,%%xmm3\n"
			"psrld %%xmm12,%%xmm1\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm1\n"
			"movdqa %%xmm0,%%xmm3\n"
			"pslld $16,%%xmm3\n"
			"psrld $16,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $16,%%xmm3\n"
			"pslld $16,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $48,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_116(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqu %4,%%xmm2\n"
			"movdqa %%xmm1,%%xmm3\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm0\n"
			"movdqa %%xmm2,%%xmm3\n"
			"psrld %%xmm12,%%xmm1\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm1\n"
			"movdqa %%xmm0,%%xmm3\n"
			"pslld $12,%%xmm3\n"
			"psrld $12,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $20,%%xmm3\n"
			"pslld $12,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $52,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_117(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqu %4,%%xmm2\n"
			"movdqa %%xmm1,%%xmm3\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm0\n"
			"movdqa %%xmm2,%%xmm3\n"
			"psrld %%xmm12,%%xmm1\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm1\n"
			"movdqa %%xmm0,%%xmm3\n"
			"pslld $8,%%xmm3\n"
			"psrld $8,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $24,%%xmm3\n"
			"pslld $8,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $56,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_118(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqu %4,%%xmm2\n"
			"movdqa %%xmm1,%%xmm3\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm0\n"
			"movdqa %%xmm2,%%xmm3\n"
			"psrld %%xmm12,%%xmm1\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm1\n"
			"movdqa %%xmm0,%%xmm3\n"
			"pslld $4,%%xmm3\n"
			"psrld $4,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $28,%%xmm3\n"
			"pslld $4,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $60,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_119(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %2,%%xmm0\n"
			"movdqu %3,%%xmm1\n"
			"movdqu %4,%%xmm2\n"
			"movdqa %%xmm1,%%xmm3\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm0\n"
			"movdqa %%xmm2,%%xmm3\n"
			"psrld %%xmm12,%%xmm1\n"
			"pslld %%xmm13,%%xmm3\n"
			"por %%xmm3,%%xmm1\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm1,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $64,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_120(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_121(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_122(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_123(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_124(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_125(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_126(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}
template<typename T>
void simd_kscheme_4bit_binary_unpack_127(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}

static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_0 = { simd_kscheme_4bit_binary_unpack_0<uint32_t>, 8  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_1 = { simd_kscheme_4bit_binary_unpack_1<uint32_t>, 12  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_2 = { simd_kscheme_4bit_binary_unpack_2<uint32_t>, 16  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_3 = { simd_kscheme_4bit_binary_unpack_3<uint32_t>, 20  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_4 = { simd_kscheme_4bit_binary_unpack_4<uint32_t>, 24  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_5 = { simd_kscheme_4bit_binary_unpack_5<uint32_t>, 28  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_6 = { simd_kscheme_4bit_binary_unpack_6<uint32_t>, 32  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_7 = { simd_kscheme_4bit_binary_unpack_7<uint32_t>, 36  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_8 = { simd_kscheme_4bit_binary_unpack_8<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_9 = { simd_kscheme_4bit_binary_unpack_9<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_10 = { simd_kscheme_4bit_binary_unpack_10<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_11 = { simd_kscheme_4bit_binary_unpack_11<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_12 = { simd_kscheme_4bit_binary_unpack_12<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_13 = { simd_kscheme_4bit_binary_unpack_13<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_14 = { simd_kscheme_4bit_binary_unpack_14<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_15 = { simd_kscheme_4bit_binary_unpack_15<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_16 = { simd_kscheme_4bit_binary_unpack_16<uint32_t>, 12  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_17 = { simd_kscheme_4bit_binary_unpack_17<uint32_t>, 16  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_18 = { simd_kscheme_4bit_binary_unpack_18<uint32_t>, 20  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_19 = { simd_kscheme_4bit_binary_unpack_19<uint32_t>, 24  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_20 = { simd_kscheme_4bit_binary_unpack_20<uint32_t>, 28  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_21 = { simd_kscheme_4bit_binary_unpack_21<uint32_t>, 32  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_22 = { simd_kscheme_4bit_binary_unpack_22<uint32_t>, 36  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_23 = { simd_kscheme_4bit_binary_unpack_23<uint32_t>, 40  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_24 = { simd_kscheme_4bit_binary_unpack_24<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_25 = { simd_kscheme_4bit_binary_unpack_25<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_26 = { simd_kscheme_4bit_binary_unpack_26<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_27 = { simd_kscheme_4bit_binary_unpack_27<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_28 = { simd_kscheme_4bit_binary_unpack_28<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_29 = { simd_kscheme_4bit_binary_unpack_29<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_30 = { simd_kscheme_4bit_binary_unpack_30<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_31 = { simd_kscheme_4bit_binary_unpack_31<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_32 = { simd_kscheme_4bit_binary_unpack_32<uint32_t>, 16  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_33 = { simd_kscheme_4bit_binary_unpack_33<uint32_t>, 20  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_34 = { simd_kscheme_4bit_binary_unpack_34<uint32_t>, 24  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_35 = { simd_kscheme_4bit_binary_unpack_35<uint32_t>, 28  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_36 = { simd_kscheme_4bit_binary_unpack_36<uint32_t>, 32  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_37 = { simd_kscheme_4bit_binary_unpack_37<uint32_t>, 36  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_38 = { simd_kscheme_4bit_binary_unpack_38<uint32_t>, 40  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_39 = { simd_kscheme_4bit_binary_unpack_39<uint32_t>, 44  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_40 = { simd_kscheme_4bit_binary_unpack_40<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_41 = { simd_kscheme_4bit_binary_unpack_41<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_42 = { simd_kscheme_4bit_binary_unpack_42<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_43 = { simd_kscheme_4bit_binary_unpack_43<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_44 = { simd_kscheme_4bit_binary_unpack_44<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_45 = { simd_kscheme_4bit_binary_unpack_45<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_46 = { simd_kscheme_4bit_binary_unpack_46<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_47 = { simd_kscheme_4bit_binary_unpack_47<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_48 = { simd_kscheme_4bit_binary_unpack_48<uint32_t>, 20  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_49 = { simd_kscheme_4bit_binary_unpack_49<uint32_t>, 24  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_50 = { simd_kscheme_4bit_binary_unpack_50<uint32_t>, 28  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_51 = { simd_kscheme_4bit_binary_unpack_51<uint32_t>, 32  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_52 = { simd_kscheme_4bit_binary_unpack_52<uint32_t>, 36  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_53 = { simd_kscheme_4bit_binary_unpack_53<uint32_t>, 40  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_54 = { simd_kscheme_4bit_binary_unpack_54<uint32_t>, 44  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_55 = { simd_kscheme_4bit_binary_unpack_55<uint32_t>, 48  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_56 = { simd_kscheme_4bit_binary_unpack_56<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_57 = { simd_kscheme_4bit_binary_unpack_57<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_58 = { simd_kscheme_4bit_binary_unpack_58<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_59 = { simd_kscheme_4bit_binary_unpack_59<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_60 = { simd_kscheme_4bit_binary_unpack_60<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_61 = { simd_kscheme_4bit_binary_unpack_61<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_62 = { simd_kscheme_4bit_binary_unpack_62<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_63 = { simd_kscheme_4bit_binary_unpack_63<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_64 = { simd_kscheme_4bit_binary_unpack_64<uint32_t>, 24  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_65 = { simd_kscheme_4bit_binary_unpack_65<uint32_t>, 28  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_66 = { simd_kscheme_4bit_binary_unpack_66<uint32_t>, 32  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_67 = { simd_kscheme_4bit_binary_unpack_67<uint32_t>, 36  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_68 = { simd_kscheme_4bit_binary_unpack_68<uint32_t>, 40  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_69 = { simd_kscheme_4bit_binary_unpack_69<uint32_t>, 44  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_70 = { simd_kscheme_4bit_binary_unpack_70<uint32_t>, 48  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_71 = { simd_kscheme_4bit_binary_unpack_71<uint32_t>, 52  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_72 = { simd_kscheme_4bit_binary_unpack_72<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_73 = { simd_kscheme_4bit_binary_unpack_73<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_74 = { simd_kscheme_4bit_binary_unpack_74<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_75 = { simd_kscheme_4bit_binary_unpack_75<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_76 = { simd_kscheme_4bit_binary_unpack_76<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_77 = { simd_kscheme_4bit_binary_unpack_77<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_78 = { simd_kscheme_4bit_binary_unpack_78<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_79 = { simd_kscheme_4bit_binary_unpack_79<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_80 = { simd_kscheme_4bit_binary_unpack_80<uint32_t>, 28  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_81 = { simd_kscheme_4bit_binary_unpack_81<uint32_t>, 32  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_82 = { simd_kscheme_4bit_binary_unpack_82<uint32_t>, 36  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_83 = { simd_kscheme_4bit_binary_unpack_83<uint32_t>, 40  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_84 = { simd_kscheme_4bit_binary_unpack_84<uint32_t>, 44  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_85 = { simd_kscheme_4bit_binary_unpack_85<uint32_t>, 48  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_86 = { simd_kscheme_4bit_binary_unpack_86<uint32_t>, 52  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_87 = { simd_kscheme_4bit_binary_unpack_87<uint32_t>, 56  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_88 = { simd_kscheme_4bit_binary_unpack_88<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_89 = { simd_kscheme_4bit_binary_unpack_89<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_90 = { simd_kscheme_4bit_binary_unpack_90<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_91 = { simd_kscheme_4bit_binary_unpack_91<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_92 = { simd_kscheme_4bit_binary_unpack_92<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_93 = { simd_kscheme_4bit_binary_unpack_93<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_94 = { simd_kscheme_4bit_binary_unpack_94<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_95 = { simd_kscheme_4bit_binary_unpack_95<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_96 = { simd_kscheme_4bit_binary_unpack_96<uint32_t>, 32  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_97 = { simd_kscheme_4bit_binary_unpack_97<uint32_t>, 36  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_98 = { simd_kscheme_4bit_binary_unpack_98<uint32_t>, 40  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_99 = { simd_kscheme_4bit_binary_unpack_99<uint32_t>, 44  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_100 = { simd_kscheme_4bit_binary_unpack_100<uint32_t>, 48  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_101 = { simd_kscheme_4bit_binary_unpack_101<uint32_t>, 52  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_102 = { simd_kscheme_4bit_binary_unpack_102<uint32_t>, 56  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_103 = { simd_kscheme_4bit_binary_unpack_103<uint32_t>, 60  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_104 = { simd_kscheme_4bit_binary_unpack_104<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_105 = { simd_kscheme_4bit_binary_unpack_105<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_106 = { simd_kscheme_4bit_binary_unpack_106<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_107 = { simd_kscheme_4bit_binary_unpack_107<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_108 = { simd_kscheme_4bit_binary_unpack_108<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_109 = { simd_kscheme_4bit_binary_unpack_109<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_110 = { simd_kscheme_4bit_binary_unpack_110<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_111 = { simd_kscheme_4bit_binary_unpack_111<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_112 = { simd_kscheme_4bit_binary_unpack_112<uint32_t>, 36  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_113 = { simd_kscheme_4bit_binary_unpack_113<uint32_t>, 40  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_114 = { simd_kscheme_4bit_binary_unpack_114<uint32_t>, 44  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_115 = { simd_kscheme_4bit_binary_unpack_115<uint32_t>, 48  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_116 = { simd_kscheme_4bit_binary_unpack_116<uint32_t>, 52  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_117 = { simd_kscheme_4bit_binary_unpack_117<uint32_t>, 56  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_118 = { simd_kscheme_4bit_binary_unpack_118<uint32_t>, 60  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_119 = { simd_kscheme_4bit_binary_unpack_119<uint32_t>, 64  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_120 = { simd_kscheme_4bit_binary_unpack_120<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_121 = { simd_kscheme_4bit_binary_unpack_121<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_122 = { simd_kscheme_4bit_binary_unpack_122<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_123 = { simd_kscheme_4bit_binary_unpack_123<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_124 = { simd_kscheme_4bit_binary_unpack_124<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_125 = { simd_kscheme_4bit_binary_unpack_125<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_126 = { simd_kscheme_4bit_binary_unpack_126<uint32_t>, 0  };
static SIMDK4BUnpackInfo SIMDK4BUnpackInfo_127 = { simd_kscheme_4bit_binary_unpack_127<uint32_t>, 0  };

static SIMDK4BUnpackInfo SIMDK4BUnpackInfoArr[128] = {
			SIMDK4BUnpackInfo_0, SIMDK4BUnpackInfo_1, SIMDK4BUnpackInfo_2, SIMDK4BUnpackInfo_3,
			SIMDK4BUnpackInfo_4, SIMDK4BUnpackInfo_5, SIMDK4BUnpackInfo_6, SIMDK4BUnpackInfo_7,
			SIMDK4BUnpackInfo_8, SIMDK4BUnpackInfo_9, SIMDK4BUnpackInfo_10, SIMDK4BUnpackInfo_11,
			SIMDK4BUnpackInfo_12, SIMDK4BUnpackInfo_13, SIMDK4BUnpackInfo_14, SIMDK4BUnpackInfo_15,
			SIMDK4BUnpackInfo_16, SIMDK4BUnpackInfo_17, SIMDK4BUnpackInfo_18, SIMDK4BUnpackInfo_19,
			SIMDK4BUnpackInfo_20, SIMDK4BUnpackInfo_21, SIMDK4BUnpackInfo_22, SIMDK4BUnpackInfo_23,
			SIMDK4BUnpackInfo_24, SIMDK4BUnpackInfo_25, SIMDK4BUnpackInfo_26, SIMDK4BUnpackInfo_27,
			SIMDK4BUnpackInfo_28, SIMDK4BUnpackInfo_29, SIMDK4BUnpackInfo_30, SIMDK4BUnpackInfo_31,
			SIMDK4BUnpackInfo_32, SIMDK4BUnpackInfo_33, SIMDK4BUnpackInfo_34, SIMDK4BUnpackInfo_35,
			SIMDK4BUnpackInfo_36, SIMDK4BUnpackInfo_37, SIMDK4BUnpackInfo_38, SIMDK4BUnpackInfo_39,
			SIMDK4BUnpackInfo_40, SIMDK4BUnpackInfo_41, SIMDK4BUnpackInfo_42, SIMDK4BUnpackInfo_43,
			SIMDK4BUnpackInfo_44, SIMDK4BUnpackInfo_45, SIMDK4BUnpackInfo_46, SIMDK4BUnpackInfo_47,
			SIMDK4BUnpackInfo_48, SIMDK4BUnpackInfo_49, SIMDK4BUnpackInfo_50, SIMDK4BUnpackInfo_51,
			SIMDK4BUnpackInfo_52, SIMDK4BUnpackInfo_53, SIMDK4BUnpackInfo_54, SIMDK4BUnpackInfo_55,
			SIMDK4BUnpackInfo_56, SIMDK4BUnpackInfo_57, SIMDK4BUnpackInfo_58, SIMDK4BUnpackInfo_59,
			SIMDK4BUnpackInfo_60, SIMDK4BUnpackInfo_61, SIMDK4BUnpackInfo_62, SIMDK4BUnpackInfo_63,
			SIMDK4BUnpackInfo_64, SIMDK4BUnpackInfo_65, SIMDK4BUnpackInfo_66, SIMDK4BUnpackInfo_67,
			SIMDK4BUnpackInfo_68, SIMDK4BUnpackInfo_69, SIMDK4BUnpackInfo_70, SIMDK4BUnpackInfo_71,
			SIMDK4BUnpackInfo_72, SIMDK4BUnpackInfo_73, SIMDK4BUnpackInfo_74, SIMDK4BUnpackInfo_75,
			SIMDK4BUnpackInfo_76, SIMDK4BUnpackInfo_77, SIMDK4BUnpackInfo_78, SIMDK4BUnpackInfo_79,
			SIMDK4BUnpackInfo_80, SIMDK4BUnpackInfo_81, SIMDK4BUnpackInfo_82, SIMDK4BUnpackInfo_83,
			SIMDK4BUnpackInfo_84, SIMDK4BUnpackInfo_85, SIMDK4BUnpackInfo_86, SIMDK4BUnpackInfo_87,
			SIMDK4BUnpackInfo_88, SIMDK4BUnpackInfo_89, SIMDK4BUnpackInfo_90, SIMDK4BUnpackInfo_91,
			SIMDK4BUnpackInfo_92, SIMDK4BUnpackInfo_93, SIMDK4BUnpackInfo_94, SIMDK4BUnpackInfo_95,
			SIMDK4BUnpackInfo_96, SIMDK4BUnpackInfo_97, SIMDK4BUnpackInfo_98, SIMDK4BUnpackInfo_99,
			SIMDK4BUnpackInfo_100, SIMDK4BUnpackInfo_101, SIMDK4BUnpackInfo_102, SIMDK4BUnpackInfo_103,
			SIMDK4BUnpackInfo_104, SIMDK4BUnpackInfo_105, SIMDK4BUnpackInfo_106, SIMDK4BUnpackInfo_107,
			SIMDK4BUnpackInfo_108, SIMDK4BUnpackInfo_109, SIMDK4BUnpackInfo_110, SIMDK4BUnpackInfo_111,
			SIMDK4BUnpackInfo_112, SIMDK4BUnpackInfo_113, SIMDK4BUnpackInfo_114, SIMDK4BUnpackInfo_115,
			SIMDK4BUnpackInfo_116, SIMDK4BUnpackInfo_117, SIMDK4BUnpackInfo_118, SIMDK4BUnpackInfo_119,
			SIMDK4BUnpackInfo_120, SIMDK4BUnpackInfo_121, SIMDK4BUnpackInfo_122, SIMDK4BUnpackInfo_123,
			SIMDK4BUnpackInfo_124, SIMDK4BUnpackInfo_125, SIMDK4BUnpackInfo_126, SIMDK4BUnpackInfo_127
};


}
}

#endif

#endif /* SIMD_KSCHEME_4BIT_BINARY_UNPACK_HPP_ */

/*
#include <iostream>
#include <sstream>
#include <stdint.h>
#include <string>
#include <stdlib.h>

using namespace std;

string INFO_NAME = "SIMDK4BUnpackInfo";
string FUNC_NAME_PREFIX = "simd_kscheme_4bit_binary_unpack";
string TRIPLE_TAB = "\t\t\t";
string QUOTE_END_LINE = "\\n\"\n";
int BEG_REG_IDX = 0;

int TOTAL_BIT_COUNT_REG_IDX = 11;
int CUR_BIT_OFFSET_REG_IDX = 12;
int BIT_LEFT_IN_CODEWORD_REG_IDX = 13;
int CODEWORD_LEN_MASK_REG_IDX = 14;	// value in this register: 31
int MAX_BIT_LEN_REG_IDX = 15;	// value in this register: 32

string funcStr = "";
string unpackInfoStr = "";
string unpackInfoArrStr = "";

string Int2Str(int n) {
	ostringstream oss;
	oss << n;
	return oss.str();
}

// we assume the overal codeword is 32 bits at most!
void printFunc(const uint32_t *bitCount, int intNum, int funcIdx) {
	string resStr = "";
	int totalBitCount = 0;
	int *begSrcIdxPerInt = new int[intNum];
	int *endSrcIdxPerInt = new int[intNum];

	resStr += "template<typename T>\n";
	resStr += "void " + FUNC_NAME_PREFIX + "_" + Int2Str(funcIdx);
	for (int i=0; i<intNum; i++) {
		begSrcIdxPerInt[i] = totalBitCount / 32;
		endSrcIdxPerInt[i] = (totalBitCount + bitCount[i] - 1)/ 32;
		totalBitCount += bitCount[i];
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
	int srcMemCount = (totalBitCount + 31) / 32;

	srcMemCount ++;	// account for unaligned

	//step 1: load all codeword need to xmm and shift left/right to correct bit pos
	// calculate cur bit left in codeword
	resStr += TRIPLE_TAB + "\"movdqa %%xmm" + Int2Str(MAX_BIT_LEN_REG_IDX) + ",%%xmm" + Int2Str(BIT_LEFT_IN_CODEWORD_REG_IDX) + QUOTE_END_LINE;
	resStr += TRIPLE_TAB + "\"psubd %%xmm" + Int2Str(CUR_BIT_OFFSET_REG_IDX) + ",%%xmm" + Int2Str(BIT_LEFT_IN_CODEWORD_REG_IDX) + QUOTE_END_LINE;

	// load codeword from mem
	int TMP_REG_IDX = BEG_REG_IDX + srcMemCount;
	for (int i=0; i<srcMemCount; i++) {
		resStr += TRIPLE_TAB + "\"movdqu %" + Int2Str(desMemCount + i) + ",%%xmm" + Int2Str(BEG_REG_IDX+i) + QUOTE_END_LINE;
	}

	// align each codeword
	for (int i=0; i<srcMemCount - 1; i++) {
		resStr += TRIPLE_TAB + "\"movdqa %%xmm" + Int2Str(BEG_REG_IDX+i+1) + ",%%xmm" + Int2Str(TMP_REG_IDX) + QUOTE_END_LINE;
		resStr += TRIPLE_TAB + "\"psrld %%xmm" + Int2Str(CUR_BIT_OFFSET_REG_IDX) + ",%%xmm" + Int2Str(BEG_REG_IDX+i) + QUOTE_END_LINE;
		resStr += TRIPLE_TAB + "\"pslld %%xmm" + Int2Str(BIT_LEFT_IN_CODEWORD_REG_IDX) + ",%%xmm" + Int2Str(TMP_REG_IDX) + QUOTE_END_LINE;
		resStr += TRIPLE_TAB + "\"por %%xmm" + Int2Str(TMP_REG_IDX) + ",%%xmm" + Int2Str(BEG_REG_IDX+i) + QUOTE_END_LINE;
	}

	//step 2: decode 4 int per time and store

	int tmpBitOffset = 0;

	for (int i=0; i<intNum; i++) {
		// the int is in the same word
		if (begSrcIdxPerInt[i] == endSrcIdxPerInt[i]) {
			resStr += TRIPLE_TAB + "\"movdqa %%xmm" + Int2Str(BEG_REG_IDX + begSrcIdxPerInt[i]) + ",%%xmm" + Int2Str(TMP_REG_IDX) + QUOTE_END_LINE;
			if (tmpBitOffset > 0) {
				resStr += TRIPLE_TAB + "\"psrld $" + Int2Str(tmpBitOffset) + ",%%xmm" + Int2Str(TMP_REG_IDX) + QUOTE_END_LINE;
			}
		}
		// cross word
		else {
			resStr += TRIPLE_TAB + "\"movdqa %%xmm" + Int2Str(BEG_REG_IDX + begSrcIdxPerInt[i]) + ",%%xmm" + Int2Str(TMP_REG_IDX) + "\\n\"" + "\n";
			resStr += TRIPLE_TAB + "\"movdqa %%xmm" + Int2Str(BEG_REG_IDX + endSrcIdxPerInt[i]) + ",%%xmm" + Int2Str(TMP_REG_IDX + 1) + "\\n\"" + "\n";
			if (tmpBitOffset > 0) {
				resStr += TRIPLE_TAB + "\"psrld $" + Int2Str(tmpBitOffset) + ",%%xmm" + Int2Str(TMP_REG_IDX) + QUOTE_END_LINE;
			}
			resStr += TRIPLE_TAB + "\"pslld $" + Int2Str(32 - tmpBitOffset) + ",%%xmm" + Int2Str(TMP_REG_IDX + 1) + QUOTE_END_LINE;
			resStr += TRIPLE_TAB + "\"por %%xmm" + Int2Str(TMP_REG_IDX + 1) + ",%%xmm" + Int2Str(TMP_REG_IDX) + QUOTE_END_LINE;
		}

		if (bitCount[i] < 32) {
			int shift = 32 - bitCount[i];
			resStr += TRIPLE_TAB + "\"pslld $" + Int2Str(shift) + ",%%xmm" + Int2Str(TMP_REG_IDX) + QUOTE_END_LINE;
			resStr += TRIPLE_TAB + "\"psrld $" + Int2Str(shift) + ",%%xmm" + Int2Str(TMP_REG_IDX) + QUOTE_END_LINE;
		}
		resStr += TRIPLE_TAB + "\"movdqu %%xmm" + Int2Str(TMP_REG_IDX) + ",%" + Int2Str(i) + QUOTE_END_LINE;

		tmpBitOffset = (tmpBitOffset + bitCount[i]) % 32;
	}

	// update cur bit offset in 32-bit codeword: curbitoffset = (curbitoffset + totalBitCount) & 31
	resStr += TRIPLE_TAB + "\"movl $" + Int2Str(totalBitCount) + ",%%eax" + QUOTE_END_LINE;
	resStr += TRIPLE_TAB + "\"movd %%eax" + ",%%xmm" + Int2Str(TOTAL_BIT_COUNT_REG_IDX) + QUOTE_END_LINE;
	resStr += TRIPLE_TAB + "\"paddd %%xmm" + Int2Str(TOTAL_BIT_COUNT_REG_IDX) + ",%%xmm" + Int2Str(CUR_BIT_OFFSET_REG_IDX) + QUOTE_END_LINE;
	resStr += TRIPLE_TAB + "\"pand %%xmm" + Int2Str(CODEWORD_LEN_MASK_REG_IDX) + ",%%xmm" + Int2Str(CUR_BIT_OFFSET_REG_IDX) + QUOTE_END_LINE;

	resStr += TRIPLE_TAB + ":";
	for (int i=0; i<desMemCount; i++) {
		resStr += "\"=m\"(des[" + Int2Str(4*i) +"])";
		if (i == desMemCount-1)
			resStr += "\n";
		else
			resStr += ",";
	}

	if (intNum > 0)
		resStr += TRIPLE_TAB;
        resStr += ":";
        for (int i=0; i<srcMemCount; i++) {
                resStr += "\"m\"(src[" + Int2Str(4*i) +"])";
                if (i == srcMemCount-1)
                        resStr += "\n";
                else
                        resStr += ",";
        }

	if (intNum > 0)
		resStr += TRIPLE_TAB;
	resStr += ":\"memory\", \"eax\");\n";
	resStr += "}\n";
	cout << resStr;

	delete [] begSrcIdxPerInt;
	delete [] endSrcIdxPerInt;
}

void printUnpackInfoArr() {
	unpackInfoArrStr += "static " + INFO_NAME + " " + INFO_NAME + "Arr[128] = {\n";
	for (int i=0; i<128; i++) {
		if (i % 4 == 0)
			unpackInfoArrStr += TRIPLE_TAB;
		unpackInfoArrStr += INFO_NAME + "_" + Int2Str(i);
		if (i != 127)
			unpackInfoArrStr += ", ";

		if (i % 4 == 3)
			unpackInfoArrStr += "\n";
	}
	unpackInfoArrStr += "};\n";
}

int main(int argc, char **argv) {

	for (uint32_t i=0; i<128; i++) {
		uint32_t infoIdx = i;

		bool validGroup = true;
		uint32_t offsetArr[8] = {0,0,0,0,0,0,0,0};
		uint32_t lenArr[8] = {0,0,0,0,0,0,0,0};
		uint32_t maskArr[8] = {0,0,0,0,0,0,0,0};
		uint32_t intNum = 2;
		uint32_t bitToWrite = 0;
		uint32_t mask = i;

		lenArr[0] = (1 + (i & 0xf)) * 4;
		if (lenArr[0] > 32)
			validGroup = false;
		lenArr[1] = (1 + ((i>>4) & 0xf)) * 4;
		if (lenArr[1] > 32)
			validGroup = false;

		if (!validGroup) {
			intNum = 0;
		}

		if (intNum == 0) {
			validGroup = false;	//a valid group should represent at least one integer
		}

		if (validGroup) {
			bitToWrite = lenArr[0] + lenArr[1];
		}

		printFunc(lenArr, intNum, infoIdx);

		//output
		unpackInfoStr += "static " + INFO_NAME + " " + INFO_NAME + "_" + Int2Str(infoIdx) + " = { ";
		unpackInfoStr += FUNC_NAME_PREFIX + "_" + Int2Str(infoIdx) + "<uint32_t>, ";
		unpackInfoStr += Int2Str(bitToWrite) + " ";
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

