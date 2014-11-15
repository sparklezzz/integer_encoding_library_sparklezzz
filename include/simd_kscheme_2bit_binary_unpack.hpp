/*
 * simd_kscheme_2bit_binary_unpack.hpp
 *
 *  Created on: 2013-6-9
 *      Author: zxd
 */

#ifndef SIMD_KSCHEME_2BIT_BINARY_UNPACK_HPP_
#define SIMD_KSCHEME_2BIT_BINARY_UNPACK_HPP_

#ifdef USE_SSE_INSTRUCTION

#include <stdint.h>

namespace paradise {
namespace index {

struct SIMDK2BUnpackInfo{
	void (*m_subFunc)(uint32_t *des, const uint32_t *src);
	uint8_t m_totalBitCount;
};

static const struct kscheme_2bit_binary_val_31{
uint32_t a[4];
}kscheme_2bit_binary_val_31 __attribute__((aligned(16))) = {{0x1f,0x0,0x0,0x0},};
static const struct kscheme_2bit_binary_val_32{
uint32_t a[4];
}kscheme_2bit_binary_val_32 __attribute__((aligned(16))) = {{0x20,0x0,0x0,0x0},};

template<typename T>
void simd_kscheme_2bit_binary_unpack_prepare() {
	__asm__(
			"pxor %%xmm11,%%xmm11\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm13,%%xmm13\n"
			"movdqa %0,%%xmm14\n"
			"movdqa %1,%%xmm15\n"
			::"m"(kscheme_2bit_binary_val_31.a[0]),"m"(kscheme_2bit_binary_val_32.a[0])
			:"memory");
}

template<typename T>
void simd_kscheme_2bit_binary_unpack_0(T* des, const uint32_t* src) {
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
			"pslld $30,%%xmm2\n"
			"psrld $30,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $2,%%xmm2\n"
			"pslld $30,%%xmm2\n"
			"psrld $30,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_1(T* des, const uint32_t* src) {
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
			"pslld $30,%%xmm2\n"
			"psrld $30,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $6,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_2(T* des, const uint32_t* src) {
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
			"pslld $26,%%xmm2\n"
			"psrld $26,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $6,%%xmm2\n"
			"pslld $30,%%xmm2\n"
			"psrld $30,%%xmm2\n"
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
void simd_kscheme_2bit_binary_unpack_3(T* des, const uint32_t* src) {
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
			"pslld $30,%%xmm2\n"
			"psrld $30,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $10,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_4(T* des, const uint32_t* src) {
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
			"pslld $22,%%xmm2\n"
			"psrld $22,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $10,%%xmm2\n"
			"pslld $30,%%xmm2\n"
			"psrld $30,%%xmm2\n"
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
void simd_kscheme_2bit_binary_unpack_5(T* des, const uint32_t* src) {
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
			"pslld $30,%%xmm2\n"
			"psrld $30,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $14,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_6(T* des, const uint32_t* src) {
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
			"pslld $18,%%xmm2\n"
			"psrld $18,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $14,%%xmm2\n"
			"pslld $30,%%xmm2\n"
			"psrld $30,%%xmm2\n"
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
void simd_kscheme_2bit_binary_unpack_7(T* des, const uint32_t* src) {
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
			"pslld $30,%%xmm2\n"
			"psrld $30,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $18,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_8(T* des, const uint32_t* src) {
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
			"pslld $14,%%xmm2\n"
			"psrld $14,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $18,%%xmm2\n"
			"pslld $30,%%xmm2\n"
			"psrld $30,%%xmm2\n"
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
void simd_kscheme_2bit_binary_unpack_9(T* des, const uint32_t* src) {
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
			"pslld $30,%%xmm2\n"
			"psrld $30,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $22,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_10(T* des, const uint32_t* src) {
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
			"pslld $10,%%xmm2\n"
			"psrld $10,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $22,%%xmm2\n"
			"pslld $30,%%xmm2\n"
			"psrld $30,%%xmm2\n"
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
void simd_kscheme_2bit_binary_unpack_11(T* des, const uint32_t* src) {
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
			"pslld $30,%%xmm2\n"
			"psrld $30,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $26,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_12(T* des, const uint32_t* src) {
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
			"pslld $6,%%xmm2\n"
			"psrld $6,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $26,%%xmm2\n"
			"pslld $30,%%xmm2\n"
			"psrld $30,%%xmm2\n"
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
void simd_kscheme_2bit_binary_unpack_13(T* des, const uint32_t* src) {
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
			"pslld $30,%%xmm2\n"
			"psrld $30,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $30,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_14(T* des, const uint32_t* src) {
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
			"pslld $2,%%xmm2\n"
			"psrld $2,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $30,%%xmm2\n"
			"pslld $30,%%xmm2\n"
			"psrld $30,%%xmm2\n"
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
void simd_kscheme_2bit_binary_unpack_15(T* des, const uint32_t* src) {
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
			"pslld $30,%%xmm3\n"
			"psrld $30,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $34,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_16(T* des, const uint32_t* src) {
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
			"pslld $30,%%xmm2\n"
			"psrld $30,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $2,%%xmm2\n"
			"pslld $28,%%xmm2\n"
			"psrld $28,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $6,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_17(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_18(T* des, const uint32_t* src) {
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
			"pslld $26,%%xmm2\n"
			"psrld $26,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $6,%%xmm2\n"
			"pslld $28,%%xmm2\n"
			"psrld $28,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $10,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_19(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_20(T* des, const uint32_t* src) {
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
			"pslld $22,%%xmm2\n"
			"psrld $22,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $10,%%xmm2\n"
			"pslld $28,%%xmm2\n"
			"psrld $28,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $14,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_21(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_22(T* des, const uint32_t* src) {
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
			"pslld $18,%%xmm2\n"
			"psrld $18,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $14,%%xmm2\n"
			"pslld $28,%%xmm2\n"
			"psrld $28,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $18,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_23(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_24(T* des, const uint32_t* src) {
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
			"pslld $14,%%xmm2\n"
			"psrld $14,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $18,%%xmm2\n"
			"pslld $28,%%xmm2\n"
			"psrld $28,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $22,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_25(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_26(T* des, const uint32_t* src) {
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
			"pslld $10,%%xmm2\n"
			"psrld $10,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $22,%%xmm2\n"
			"pslld $28,%%xmm2\n"
			"psrld $28,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $26,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_27(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_28(T* des, const uint32_t* src) {
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
			"pslld $6,%%xmm2\n"
			"psrld $6,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $26,%%xmm2\n"
			"pslld $28,%%xmm2\n"
			"psrld $28,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $30,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_29(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_30(T* des, const uint32_t* src) {
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
			"pslld $2,%%xmm3\n"
			"psrld $2,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $30,%%xmm3\n"
			"pslld $2,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $28,%%xmm3\n"
			"psrld $28,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $34,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_31(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_32(T* des, const uint32_t* src) {
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
			"pslld $30,%%xmm2\n"
			"psrld $30,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $2,%%xmm2\n"
			"pslld $26,%%xmm2\n"
			"psrld $26,%%xmm2\n"
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
void simd_kscheme_2bit_binary_unpack_33(T* des, const uint32_t* src) {
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
			"pslld $26,%%xmm2\n"
			"psrld $26,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $10,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_34(T* des, const uint32_t* src) {
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
			"pslld $26,%%xmm2\n"
			"psrld $26,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $6,%%xmm2\n"
			"pslld $26,%%xmm2\n"
			"psrld $26,%%xmm2\n"
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
void simd_kscheme_2bit_binary_unpack_35(T* des, const uint32_t* src) {
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
			"pslld $26,%%xmm2\n"
			"psrld $26,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $14,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_36(T* des, const uint32_t* src) {
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
			"pslld $22,%%xmm2\n"
			"psrld $22,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $10,%%xmm2\n"
			"pslld $26,%%xmm2\n"
			"psrld $26,%%xmm2\n"
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
void simd_kscheme_2bit_binary_unpack_37(T* des, const uint32_t* src) {
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
			"pslld $26,%%xmm2\n"
			"psrld $26,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $18,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_38(T* des, const uint32_t* src) {
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
			"pslld $18,%%xmm2\n"
			"psrld $18,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $14,%%xmm2\n"
			"pslld $26,%%xmm2\n"
			"psrld $26,%%xmm2\n"
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
void simd_kscheme_2bit_binary_unpack_39(T* des, const uint32_t* src) {
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
			"pslld $26,%%xmm2\n"
			"psrld $26,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $22,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_40(T* des, const uint32_t* src) {
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
			"pslld $14,%%xmm2\n"
			"psrld $14,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $18,%%xmm2\n"
			"pslld $26,%%xmm2\n"
			"psrld $26,%%xmm2\n"
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
void simd_kscheme_2bit_binary_unpack_41(T* des, const uint32_t* src) {
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
			"pslld $26,%%xmm2\n"
			"psrld $26,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $26,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_42(T* des, const uint32_t* src) {
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
			"pslld $10,%%xmm2\n"
			"psrld $10,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $22,%%xmm2\n"
			"pslld $26,%%xmm2\n"
			"psrld $26,%%xmm2\n"
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
void simd_kscheme_2bit_binary_unpack_43(T* des, const uint32_t* src) {
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
			"pslld $26,%%xmm2\n"
			"psrld $26,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $30,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_44(T* des, const uint32_t* src) {
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
			"pslld $6,%%xmm2\n"
			"psrld $6,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $26,%%xmm2\n"
			"pslld $26,%%xmm2\n"
			"psrld $26,%%xmm2\n"
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
void simd_kscheme_2bit_binary_unpack_45(T* des, const uint32_t* src) {
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
			"pslld $26,%%xmm3\n"
			"psrld $26,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $34,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_46(T* des, const uint32_t* src) {
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
			"pslld $2,%%xmm3\n"
			"psrld $2,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $30,%%xmm3\n"
			"pslld $2,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $26,%%xmm3\n"
			"psrld $26,%%xmm3\n"
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
void simd_kscheme_2bit_binary_unpack_47(T* des, const uint32_t* src) {
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
			"pslld $26,%%xmm3\n"
			"psrld $26,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $38,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_48(T* des, const uint32_t* src) {
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
			"pslld $30,%%xmm2\n"
			"psrld $30,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $2,%%xmm2\n"
			"pslld $24,%%xmm2\n"
			"psrld $24,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $10,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_49(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_50(T* des, const uint32_t* src) {
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
			"pslld $26,%%xmm2\n"
			"psrld $26,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $6,%%xmm2\n"
			"pslld $24,%%xmm2\n"
			"psrld $24,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $14,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_51(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_52(T* des, const uint32_t* src) {
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
			"pslld $22,%%xmm2\n"
			"psrld $22,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $10,%%xmm2\n"
			"pslld $24,%%xmm2\n"
			"psrld $24,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $18,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_53(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_54(T* des, const uint32_t* src) {
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
			"pslld $18,%%xmm2\n"
			"psrld $18,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $14,%%xmm2\n"
			"pslld $24,%%xmm2\n"
			"psrld $24,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $22,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_55(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_56(T* des, const uint32_t* src) {
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
			"pslld $14,%%xmm2\n"
			"psrld $14,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $18,%%xmm2\n"
			"pslld $24,%%xmm2\n"
			"psrld $24,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $26,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_57(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_58(T* des, const uint32_t* src) {
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
			"pslld $10,%%xmm2\n"
			"psrld $10,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $22,%%xmm2\n"
			"pslld $24,%%xmm2\n"
			"psrld $24,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $30,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_59(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_60(T* des, const uint32_t* src) {
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
			"pslld $6,%%xmm3\n"
			"psrld $6,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $26,%%xmm3\n"
			"pslld $6,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $24,%%xmm3\n"
			"psrld $24,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $34,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_61(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_62(T* des, const uint32_t* src) {
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
			"pslld $2,%%xmm3\n"
			"psrld $2,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $30,%%xmm3\n"
			"pslld $2,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $24,%%xmm3\n"
			"psrld $24,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $38,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_63(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_64(T* des, const uint32_t* src) {
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
			"pslld $30,%%xmm2\n"
			"psrld $30,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $2,%%xmm2\n"
			"pslld $22,%%xmm2\n"
			"psrld $22,%%xmm2\n"
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
void simd_kscheme_2bit_binary_unpack_65(T* des, const uint32_t* src) {
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
			"pslld $22,%%xmm2\n"
			"psrld $22,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $14,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_66(T* des, const uint32_t* src) {
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
			"pslld $26,%%xmm2\n"
			"psrld $26,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $6,%%xmm2\n"
			"pslld $22,%%xmm2\n"
			"psrld $22,%%xmm2\n"
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
void simd_kscheme_2bit_binary_unpack_67(T* des, const uint32_t* src) {
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
			"pslld $22,%%xmm2\n"
			"psrld $22,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $18,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_68(T* des, const uint32_t* src) {
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
			"pslld $22,%%xmm2\n"
			"psrld $22,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $10,%%xmm2\n"
			"pslld $22,%%xmm2\n"
			"psrld $22,%%xmm2\n"
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
void simd_kscheme_2bit_binary_unpack_69(T* des, const uint32_t* src) {
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
			"pslld $22,%%xmm2\n"
			"psrld $22,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $22,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_70(T* des, const uint32_t* src) {
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
			"pslld $18,%%xmm2\n"
			"psrld $18,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $14,%%xmm2\n"
			"pslld $22,%%xmm2\n"
			"psrld $22,%%xmm2\n"
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
void simd_kscheme_2bit_binary_unpack_71(T* des, const uint32_t* src) {
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
			"pslld $22,%%xmm2\n"
			"psrld $22,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $26,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_72(T* des, const uint32_t* src) {
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
			"pslld $14,%%xmm2\n"
			"psrld $14,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $18,%%xmm2\n"
			"pslld $22,%%xmm2\n"
			"psrld $22,%%xmm2\n"
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
void simd_kscheme_2bit_binary_unpack_73(T* des, const uint32_t* src) {
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
			"pslld $22,%%xmm2\n"
			"psrld $22,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $30,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_74(T* des, const uint32_t* src) {
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
			"pslld $10,%%xmm2\n"
			"psrld $10,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $22,%%xmm2\n"
			"pslld $22,%%xmm2\n"
			"psrld $22,%%xmm2\n"
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
void simd_kscheme_2bit_binary_unpack_75(T* des, const uint32_t* src) {
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
			"pslld $22,%%xmm3\n"
			"psrld $22,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $34,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_76(T* des, const uint32_t* src) {
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
			"pslld $6,%%xmm3\n"
			"psrld $6,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $26,%%xmm3\n"
			"pslld $6,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $22,%%xmm3\n"
			"psrld $22,%%xmm3\n"
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
void simd_kscheme_2bit_binary_unpack_77(T* des, const uint32_t* src) {
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
			"pslld $22,%%xmm3\n"
			"psrld $22,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $38,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_78(T* des, const uint32_t* src) {
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
			"pslld $2,%%xmm3\n"
			"psrld $2,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $30,%%xmm3\n"
			"pslld $2,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $22,%%xmm3\n"
			"psrld $22,%%xmm3\n"
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
void simd_kscheme_2bit_binary_unpack_79(T* des, const uint32_t* src) {
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
			"pslld $22,%%xmm3\n"
			"psrld $22,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $42,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_80(T* des, const uint32_t* src) {
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
			"pslld $30,%%xmm2\n"
			"psrld $30,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $2,%%xmm2\n"
			"pslld $20,%%xmm2\n"
			"psrld $20,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $14,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_81(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_82(T* des, const uint32_t* src) {
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
			"pslld $26,%%xmm2\n"
			"psrld $26,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $6,%%xmm2\n"
			"pslld $20,%%xmm2\n"
			"psrld $20,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $18,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_83(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_84(T* des, const uint32_t* src) {
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
			"pslld $22,%%xmm2\n"
			"psrld $22,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $10,%%xmm2\n"
			"pslld $20,%%xmm2\n"
			"psrld $20,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $22,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_85(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_86(T* des, const uint32_t* src) {
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
			"pslld $18,%%xmm2\n"
			"psrld $18,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $14,%%xmm2\n"
			"pslld $20,%%xmm2\n"
			"psrld $20,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $26,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_87(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_88(T* des, const uint32_t* src) {
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
			"pslld $14,%%xmm2\n"
			"psrld $14,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $18,%%xmm2\n"
			"pslld $20,%%xmm2\n"
			"psrld $20,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $30,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_89(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_90(T* des, const uint32_t* src) {
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
			"pslld $10,%%xmm3\n"
			"psrld $10,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $22,%%xmm3\n"
			"pslld $10,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $20,%%xmm3\n"
			"psrld $20,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $34,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_91(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_92(T* des, const uint32_t* src) {
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
			"pslld $6,%%xmm3\n"
			"psrld $6,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $26,%%xmm3\n"
			"pslld $6,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $20,%%xmm3\n"
			"psrld $20,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $38,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_93(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_94(T* des, const uint32_t* src) {
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
			"pslld $2,%%xmm3\n"
			"psrld $2,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $30,%%xmm3\n"
			"pslld $2,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $20,%%xmm3\n"
			"psrld $20,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $42,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_95(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_96(T* des, const uint32_t* src) {
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
			"pslld $30,%%xmm2\n"
			"psrld $30,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $2,%%xmm2\n"
			"pslld $18,%%xmm2\n"
			"psrld $18,%%xmm2\n"
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
void simd_kscheme_2bit_binary_unpack_97(T* des, const uint32_t* src) {
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
			"pslld $18,%%xmm2\n"
			"psrld $18,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $18,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_98(T* des, const uint32_t* src) {
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
			"pslld $26,%%xmm2\n"
			"psrld $26,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $6,%%xmm2\n"
			"pslld $18,%%xmm2\n"
			"psrld $18,%%xmm2\n"
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
void simd_kscheme_2bit_binary_unpack_99(T* des, const uint32_t* src) {
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
			"pslld $18,%%xmm2\n"
			"psrld $18,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $22,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_100(T* des, const uint32_t* src) {
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
			"pslld $22,%%xmm2\n"
			"psrld $22,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $10,%%xmm2\n"
			"pslld $18,%%xmm2\n"
			"psrld $18,%%xmm2\n"
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
void simd_kscheme_2bit_binary_unpack_101(T* des, const uint32_t* src) {
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
			"pslld $18,%%xmm2\n"
			"psrld $18,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $26,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_102(T* des, const uint32_t* src) {
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
			"pslld $18,%%xmm2\n"
			"psrld $18,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $14,%%xmm2\n"
			"pslld $18,%%xmm2\n"
			"psrld $18,%%xmm2\n"
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
void simd_kscheme_2bit_binary_unpack_103(T* des, const uint32_t* src) {
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
			"pslld $18,%%xmm2\n"
			"psrld $18,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $30,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_104(T* des, const uint32_t* src) {
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
			"pslld $14,%%xmm2\n"
			"psrld $14,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $18,%%xmm2\n"
			"pslld $18,%%xmm2\n"
			"psrld $18,%%xmm2\n"
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
void simd_kscheme_2bit_binary_unpack_105(T* des, const uint32_t* src) {
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
			"pslld $18,%%xmm3\n"
			"psrld $18,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $34,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_106(T* des, const uint32_t* src) {
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
			"pslld $10,%%xmm3\n"
			"psrld $10,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $22,%%xmm3\n"
			"pslld $10,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $18,%%xmm3\n"
			"psrld $18,%%xmm3\n"
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
void simd_kscheme_2bit_binary_unpack_107(T* des, const uint32_t* src) {
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
			"pslld $18,%%xmm3\n"
			"psrld $18,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $38,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_108(T* des, const uint32_t* src) {
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
			"pslld $6,%%xmm3\n"
			"psrld $6,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $26,%%xmm3\n"
			"pslld $6,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $18,%%xmm3\n"
			"psrld $18,%%xmm3\n"
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
void simd_kscheme_2bit_binary_unpack_109(T* des, const uint32_t* src) {
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
			"pslld $18,%%xmm3\n"
			"psrld $18,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $42,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_110(T* des, const uint32_t* src) {
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
			"pslld $2,%%xmm3\n"
			"psrld $2,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $30,%%xmm3\n"
			"pslld $2,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $18,%%xmm3\n"
			"psrld $18,%%xmm3\n"
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
void simd_kscheme_2bit_binary_unpack_111(T* des, const uint32_t* src) {
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
			"pslld $18,%%xmm3\n"
			"psrld $18,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $46,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_112(T* des, const uint32_t* src) {
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
			"pslld $30,%%xmm2\n"
			"psrld $30,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $2,%%xmm2\n"
			"pslld $16,%%xmm2\n"
			"psrld $16,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $18,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_113(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_114(T* des, const uint32_t* src) {
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
			"pslld $26,%%xmm2\n"
			"psrld $26,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $6,%%xmm2\n"
			"pslld $16,%%xmm2\n"
			"psrld $16,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $22,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_115(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_116(T* des, const uint32_t* src) {
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
			"pslld $22,%%xmm2\n"
			"psrld $22,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $10,%%xmm2\n"
			"pslld $16,%%xmm2\n"
			"psrld $16,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $26,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_117(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_118(T* des, const uint32_t* src) {
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
			"pslld $18,%%xmm2\n"
			"psrld $18,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $14,%%xmm2\n"
			"pslld $16,%%xmm2\n"
			"psrld $16,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $30,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_119(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_120(T* des, const uint32_t* src) {
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
			"pslld $14,%%xmm3\n"
			"psrld $14,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $18,%%xmm3\n"
			"pslld $14,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $16,%%xmm3\n"
			"psrld $16,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $34,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_121(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_122(T* des, const uint32_t* src) {
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
			"pslld $10,%%xmm3\n"
			"psrld $10,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $22,%%xmm3\n"
			"pslld $10,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $16,%%xmm3\n"
			"psrld $16,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $38,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_123(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_124(T* des, const uint32_t* src) {
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
			"pslld $6,%%xmm3\n"
			"psrld $6,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $26,%%xmm3\n"
			"pslld $6,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $16,%%xmm3\n"
			"psrld $16,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $42,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_125(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_126(T* des, const uint32_t* src) {
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
			"pslld $2,%%xmm3\n"
			"psrld $2,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $30,%%xmm3\n"
			"pslld $2,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $16,%%xmm3\n"
			"psrld $16,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $46,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_127(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_128(T* des, const uint32_t* src) {
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
			"pslld $30,%%xmm2\n"
			"psrld $30,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $2,%%xmm2\n"
			"pslld $14,%%xmm2\n"
			"psrld $14,%%xmm2\n"
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
void simd_kscheme_2bit_binary_unpack_129(T* des, const uint32_t* src) {
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
			"pslld $14,%%xmm2\n"
			"psrld $14,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $22,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_130(T* des, const uint32_t* src) {
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
			"pslld $26,%%xmm2\n"
			"psrld $26,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $6,%%xmm2\n"
			"pslld $14,%%xmm2\n"
			"psrld $14,%%xmm2\n"
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
void simd_kscheme_2bit_binary_unpack_131(T* des, const uint32_t* src) {
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
			"pslld $14,%%xmm2\n"
			"psrld $14,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $26,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_132(T* des, const uint32_t* src) {
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
			"pslld $22,%%xmm2\n"
			"psrld $22,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $10,%%xmm2\n"
			"pslld $14,%%xmm2\n"
			"psrld $14,%%xmm2\n"
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
void simd_kscheme_2bit_binary_unpack_133(T* des, const uint32_t* src) {
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
			"pslld $14,%%xmm2\n"
			"psrld $14,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $30,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_134(T* des, const uint32_t* src) {
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
			"pslld $18,%%xmm2\n"
			"psrld $18,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $14,%%xmm2\n"
			"pslld $14,%%xmm2\n"
			"psrld $14,%%xmm2\n"
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
void simd_kscheme_2bit_binary_unpack_135(T* des, const uint32_t* src) {
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
			"pslld $14,%%xmm3\n"
			"psrld $14,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $34,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_136(T* des, const uint32_t* src) {
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
			"pslld $14,%%xmm3\n"
			"psrld $14,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $18,%%xmm3\n"
			"pslld $14,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $14,%%xmm3\n"
			"psrld $14,%%xmm3\n"
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
void simd_kscheme_2bit_binary_unpack_137(T* des, const uint32_t* src) {
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
			"pslld $14,%%xmm3\n"
			"psrld $14,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $38,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_138(T* des, const uint32_t* src) {
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
			"pslld $10,%%xmm3\n"
			"psrld $10,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $22,%%xmm3\n"
			"pslld $10,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $14,%%xmm3\n"
			"psrld $14,%%xmm3\n"
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
void simd_kscheme_2bit_binary_unpack_139(T* des, const uint32_t* src) {
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
			"pslld $14,%%xmm3\n"
			"psrld $14,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $42,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_140(T* des, const uint32_t* src) {
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
			"pslld $6,%%xmm3\n"
			"psrld $6,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $26,%%xmm3\n"
			"pslld $6,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $14,%%xmm3\n"
			"psrld $14,%%xmm3\n"
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
void simd_kscheme_2bit_binary_unpack_141(T* des, const uint32_t* src) {
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
			"pslld $14,%%xmm3\n"
			"psrld $14,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $46,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_142(T* des, const uint32_t* src) {
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
			"pslld $2,%%xmm3\n"
			"psrld $2,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $30,%%xmm3\n"
			"pslld $2,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $14,%%xmm3\n"
			"psrld $14,%%xmm3\n"
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
void simd_kscheme_2bit_binary_unpack_143(T* des, const uint32_t* src) {
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
			"pslld $14,%%xmm3\n"
			"psrld $14,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $50,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_144(T* des, const uint32_t* src) {
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
			"pslld $30,%%xmm2\n"
			"psrld $30,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $2,%%xmm2\n"
			"pslld $12,%%xmm2\n"
			"psrld $12,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $22,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_145(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_146(T* des, const uint32_t* src) {
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
			"pslld $26,%%xmm2\n"
			"psrld $26,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $6,%%xmm2\n"
			"pslld $12,%%xmm2\n"
			"psrld $12,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $26,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_147(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_148(T* des, const uint32_t* src) {
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
			"pslld $22,%%xmm2\n"
			"psrld $22,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $10,%%xmm2\n"
			"pslld $12,%%xmm2\n"
			"psrld $12,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $30,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_149(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_150(T* des, const uint32_t* src) {
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
			"pslld $18,%%xmm3\n"
			"psrld $18,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $14,%%xmm3\n"
			"pslld $18,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $12,%%xmm3\n"
			"psrld $12,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $34,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_151(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_152(T* des, const uint32_t* src) {
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
			"pslld $14,%%xmm3\n"
			"psrld $14,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $18,%%xmm3\n"
			"pslld $14,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $12,%%xmm3\n"
			"psrld $12,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $38,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_153(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_154(T* des, const uint32_t* src) {
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
			"pslld $10,%%xmm3\n"
			"psrld $10,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $22,%%xmm3\n"
			"pslld $10,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $12,%%xmm3\n"
			"psrld $12,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $42,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_155(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_156(T* des, const uint32_t* src) {
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
			"pslld $6,%%xmm3\n"
			"psrld $6,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $26,%%xmm3\n"
			"pslld $6,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $12,%%xmm3\n"
			"psrld $12,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $46,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_157(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_158(T* des, const uint32_t* src) {
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
			"pslld $2,%%xmm3\n"
			"psrld $2,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $30,%%xmm3\n"
			"pslld $2,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $12,%%xmm3\n"
			"psrld $12,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $50,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_159(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_160(T* des, const uint32_t* src) {
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
			"pslld $30,%%xmm2\n"
			"psrld $30,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $2,%%xmm2\n"
			"pslld $10,%%xmm2\n"
			"psrld $10,%%xmm2\n"
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
void simd_kscheme_2bit_binary_unpack_161(T* des, const uint32_t* src) {
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
			"pslld $10,%%xmm2\n"
			"psrld $10,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $26,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_162(T* des, const uint32_t* src) {
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
			"pslld $26,%%xmm2\n"
			"psrld $26,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $6,%%xmm2\n"
			"pslld $10,%%xmm2\n"
			"psrld $10,%%xmm2\n"
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
void simd_kscheme_2bit_binary_unpack_163(T* des, const uint32_t* src) {
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
			"pslld $10,%%xmm2\n"
			"psrld $10,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $30,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_164(T* des, const uint32_t* src) {
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
			"pslld $22,%%xmm2\n"
			"psrld $22,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $10,%%xmm2\n"
			"pslld $10,%%xmm2\n"
			"psrld $10,%%xmm2\n"
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
void simd_kscheme_2bit_binary_unpack_165(T* des, const uint32_t* src) {
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
			"pslld $10,%%xmm3\n"
			"psrld $10,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $34,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_166(T* des, const uint32_t* src) {
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
			"pslld $18,%%xmm3\n"
			"psrld $18,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $14,%%xmm3\n"
			"pslld $18,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $10,%%xmm3\n"
			"psrld $10,%%xmm3\n"
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
void simd_kscheme_2bit_binary_unpack_167(T* des, const uint32_t* src) {
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
			"pslld $10,%%xmm3\n"
			"psrld $10,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $38,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_168(T* des, const uint32_t* src) {
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
			"pslld $14,%%xmm3\n"
			"psrld $14,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $18,%%xmm3\n"
			"pslld $14,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $10,%%xmm3\n"
			"psrld $10,%%xmm3\n"
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
void simd_kscheme_2bit_binary_unpack_169(T* des, const uint32_t* src) {
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
			"pslld $10,%%xmm3\n"
			"psrld $10,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $42,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_170(T* des, const uint32_t* src) {
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
			"pslld $10,%%xmm3\n"
			"psrld $10,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $22,%%xmm3\n"
			"pslld $10,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $10,%%xmm3\n"
			"psrld $10,%%xmm3\n"
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
void simd_kscheme_2bit_binary_unpack_171(T* des, const uint32_t* src) {
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
			"pslld $10,%%xmm3\n"
			"psrld $10,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $46,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_172(T* des, const uint32_t* src) {
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
			"pslld $6,%%xmm3\n"
			"psrld $6,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $26,%%xmm3\n"
			"pslld $6,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $10,%%xmm3\n"
			"psrld $10,%%xmm3\n"
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
void simd_kscheme_2bit_binary_unpack_173(T* des, const uint32_t* src) {
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
			"pslld $10,%%xmm3\n"
			"psrld $10,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $50,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_174(T* des, const uint32_t* src) {
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
			"pslld $2,%%xmm3\n"
			"psrld $2,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $30,%%xmm3\n"
			"pslld $2,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $10,%%xmm3\n"
			"psrld $10,%%xmm3\n"
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
void simd_kscheme_2bit_binary_unpack_175(T* des, const uint32_t* src) {
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
			"pslld $10,%%xmm3\n"
			"psrld $10,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $54,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_176(T* des, const uint32_t* src) {
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
			"pslld $30,%%xmm2\n"
			"psrld $30,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $2,%%xmm2\n"
			"pslld $8,%%xmm2\n"
			"psrld $8,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $26,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_177(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_178(T* des, const uint32_t* src) {
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
			"pslld $26,%%xmm2\n"
			"psrld $26,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $6,%%xmm2\n"
			"pslld $8,%%xmm2\n"
			"psrld $8,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $30,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_179(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_180(T* des, const uint32_t* src) {
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
			"pslld $22,%%xmm3\n"
			"psrld $22,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $10,%%xmm3\n"
			"pslld $22,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $8,%%xmm3\n"
			"psrld $8,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $34,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_181(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_182(T* des, const uint32_t* src) {
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
			"pslld $18,%%xmm3\n"
			"psrld $18,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $14,%%xmm3\n"
			"pslld $18,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $8,%%xmm3\n"
			"psrld $8,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $38,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_183(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_184(T* des, const uint32_t* src) {
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
			"pslld $14,%%xmm3\n"
			"psrld $14,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $18,%%xmm3\n"
			"pslld $14,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $8,%%xmm3\n"
			"psrld $8,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $42,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_185(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_186(T* des, const uint32_t* src) {
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
			"pslld $10,%%xmm3\n"
			"psrld $10,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $22,%%xmm3\n"
			"pslld $10,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $8,%%xmm3\n"
			"psrld $8,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $46,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_187(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_188(T* des, const uint32_t* src) {
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
			"pslld $6,%%xmm3\n"
			"psrld $6,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $26,%%xmm3\n"
			"pslld $6,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $8,%%xmm3\n"
			"psrld $8,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $50,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_189(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_190(T* des, const uint32_t* src) {
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
			"pslld $2,%%xmm3\n"
			"psrld $2,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $30,%%xmm3\n"
			"pslld $2,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $8,%%xmm3\n"
			"psrld $8,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $54,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_191(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_192(T* des, const uint32_t* src) {
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
			"pslld $30,%%xmm2\n"
			"psrld $30,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $2,%%xmm2\n"
			"pslld $6,%%xmm2\n"
			"psrld $6,%%xmm2\n"
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
void simd_kscheme_2bit_binary_unpack_193(T* des, const uint32_t* src) {
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
			"pslld $6,%%xmm2\n"
			"psrld $6,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $30,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_194(T* des, const uint32_t* src) {
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
			"pslld $26,%%xmm2\n"
			"psrld $26,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $6,%%xmm2\n"
			"pslld $6,%%xmm2\n"
			"psrld $6,%%xmm2\n"
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
void simd_kscheme_2bit_binary_unpack_195(T* des, const uint32_t* src) {
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
			"pslld $6,%%xmm3\n"
			"psrld $6,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $34,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_196(T* des, const uint32_t* src) {
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
			"pslld $22,%%xmm3\n"
			"psrld $22,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $10,%%xmm3\n"
			"pslld $22,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $6,%%xmm3\n"
			"psrld $6,%%xmm3\n"
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
void simd_kscheme_2bit_binary_unpack_197(T* des, const uint32_t* src) {
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
			"pslld $6,%%xmm3\n"
			"psrld $6,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $38,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_198(T* des, const uint32_t* src) {
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
			"pslld $18,%%xmm3\n"
			"psrld $18,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $14,%%xmm3\n"
			"pslld $18,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $6,%%xmm3\n"
			"psrld $6,%%xmm3\n"
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
void simd_kscheme_2bit_binary_unpack_199(T* des, const uint32_t* src) {
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
			"pslld $6,%%xmm3\n"
			"psrld $6,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $42,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_200(T* des, const uint32_t* src) {
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
			"pslld $14,%%xmm3\n"
			"psrld $14,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $18,%%xmm3\n"
			"pslld $14,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $6,%%xmm3\n"
			"psrld $6,%%xmm3\n"
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
void simd_kscheme_2bit_binary_unpack_201(T* des, const uint32_t* src) {
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
			"pslld $6,%%xmm3\n"
			"psrld $6,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $46,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_202(T* des, const uint32_t* src) {
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
			"pslld $10,%%xmm3\n"
			"psrld $10,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $22,%%xmm3\n"
			"pslld $10,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $6,%%xmm3\n"
			"psrld $6,%%xmm3\n"
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
void simd_kscheme_2bit_binary_unpack_203(T* des, const uint32_t* src) {
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
			"pslld $6,%%xmm3\n"
			"psrld $6,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $50,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_204(T* des, const uint32_t* src) {
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
			"pslld $6,%%xmm3\n"
			"psrld $6,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $26,%%xmm3\n"
			"pslld $6,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $6,%%xmm3\n"
			"psrld $6,%%xmm3\n"
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
void simd_kscheme_2bit_binary_unpack_205(T* des, const uint32_t* src) {
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
			"pslld $6,%%xmm3\n"
			"psrld $6,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $54,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_206(T* des, const uint32_t* src) {
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
			"pslld $2,%%xmm3\n"
			"psrld $2,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $30,%%xmm3\n"
			"pslld $2,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $6,%%xmm3\n"
			"psrld $6,%%xmm3\n"
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
void simd_kscheme_2bit_binary_unpack_207(T* des, const uint32_t* src) {
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
			"pslld $6,%%xmm3\n"
			"psrld $6,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $58,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_208(T* des, const uint32_t* src) {
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
			"pslld $30,%%xmm2\n"
			"psrld $30,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $2,%%xmm2\n"
			"pslld $4,%%xmm2\n"
			"psrld $4,%%xmm2\n"
			"movdqu %%xmm2,%1\n"
			"movl $30,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_209(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_210(T* des, const uint32_t* src) {
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
			"pslld $26,%%xmm3\n"
			"psrld $26,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $6,%%xmm3\n"
			"pslld $26,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $4,%%xmm3\n"
			"psrld $4,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $34,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_211(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_212(T* des, const uint32_t* src) {
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
			"pslld $22,%%xmm3\n"
			"psrld $22,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $10,%%xmm3\n"
			"pslld $22,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $4,%%xmm3\n"
			"psrld $4,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $38,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_213(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_214(T* des, const uint32_t* src) {
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
			"pslld $18,%%xmm3\n"
			"psrld $18,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $14,%%xmm3\n"
			"pslld $18,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $4,%%xmm3\n"
			"psrld $4,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $42,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_215(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_216(T* des, const uint32_t* src) {
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
			"pslld $14,%%xmm3\n"
			"psrld $14,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $18,%%xmm3\n"
			"pslld $14,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $4,%%xmm3\n"
			"psrld $4,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $46,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_217(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_218(T* des, const uint32_t* src) {
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
			"pslld $10,%%xmm3\n"
			"psrld $10,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $22,%%xmm3\n"
			"pslld $10,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $4,%%xmm3\n"
			"psrld $4,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $50,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_219(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_220(T* des, const uint32_t* src) {
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
			"pslld $6,%%xmm3\n"
			"psrld $6,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $26,%%xmm3\n"
			"pslld $6,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $4,%%xmm3\n"
			"psrld $4,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $54,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_221(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_222(T* des, const uint32_t* src) {
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
			"pslld $2,%%xmm3\n"
			"psrld $2,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $30,%%xmm3\n"
			"pslld $2,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $4,%%xmm3\n"
			"psrld $4,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $58,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_223(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_224(T* des, const uint32_t* src) {
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
			"pslld $30,%%xmm2\n"
			"psrld $30,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"psrld $2,%%xmm2\n"
			"pslld $2,%%xmm2\n"
			"psrld $2,%%xmm2\n"
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
void simd_kscheme_2bit_binary_unpack_225(T* des, const uint32_t* src) {
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
			"pslld $2,%%xmm3\n"
			"psrld $2,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $34,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_226(T* des, const uint32_t* src) {
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
			"pslld $26,%%xmm3\n"
			"psrld $26,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $6,%%xmm3\n"
			"pslld $26,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $2,%%xmm3\n"
			"psrld $2,%%xmm3\n"
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
void simd_kscheme_2bit_binary_unpack_227(T* des, const uint32_t* src) {
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
			"pslld $2,%%xmm3\n"
			"psrld $2,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $38,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_228(T* des, const uint32_t* src) {
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
			"pslld $22,%%xmm3\n"
			"psrld $22,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $10,%%xmm3\n"
			"pslld $22,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $2,%%xmm3\n"
			"psrld $2,%%xmm3\n"
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
void simd_kscheme_2bit_binary_unpack_229(T* des, const uint32_t* src) {
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
			"pslld $2,%%xmm3\n"
			"psrld $2,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $42,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_230(T* des, const uint32_t* src) {
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
			"pslld $18,%%xmm3\n"
			"psrld $18,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $14,%%xmm3\n"
			"pslld $18,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $2,%%xmm3\n"
			"psrld $2,%%xmm3\n"
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
void simd_kscheme_2bit_binary_unpack_231(T* des, const uint32_t* src) {
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
			"pslld $2,%%xmm3\n"
			"psrld $2,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $46,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_232(T* des, const uint32_t* src) {
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
			"pslld $14,%%xmm3\n"
			"psrld $14,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $18,%%xmm3\n"
			"pslld $14,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $2,%%xmm3\n"
			"psrld $2,%%xmm3\n"
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
void simd_kscheme_2bit_binary_unpack_233(T* des, const uint32_t* src) {
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
			"pslld $2,%%xmm3\n"
			"psrld $2,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $50,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_234(T* des, const uint32_t* src) {
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
			"pslld $10,%%xmm3\n"
			"psrld $10,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $22,%%xmm3\n"
			"pslld $10,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $2,%%xmm3\n"
			"psrld $2,%%xmm3\n"
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
void simd_kscheme_2bit_binary_unpack_235(T* des, const uint32_t* src) {
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
			"pslld $2,%%xmm3\n"
			"psrld $2,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $54,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_236(T* des, const uint32_t* src) {
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
			"pslld $6,%%xmm3\n"
			"psrld $6,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $26,%%xmm3\n"
			"pslld $6,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $2,%%xmm3\n"
			"psrld $2,%%xmm3\n"
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
void simd_kscheme_2bit_binary_unpack_237(T* des, const uint32_t* src) {
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
			"pslld $2,%%xmm3\n"
			"psrld $2,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $58,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_238(T* des, const uint32_t* src) {
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
			"pslld $2,%%xmm3\n"
			"psrld $2,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $30,%%xmm3\n"
			"pslld $2,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"pslld $2,%%xmm3\n"
			"psrld $2,%%xmm3\n"
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
void simd_kscheme_2bit_binary_unpack_239(T* des, const uint32_t* src) {
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
			"pslld $2,%%xmm3\n"
			"psrld $2,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $62,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_240(T* des, const uint32_t* src) {
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
			"pslld $30,%%xmm3\n"
			"psrld $30,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $2,%%xmm3\n"
			"pslld $30,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $34,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_241(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_242(T* des, const uint32_t* src) {
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
			"pslld $26,%%xmm3\n"
			"psrld $26,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $6,%%xmm3\n"
			"pslld $26,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $38,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_243(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_244(T* des, const uint32_t* src) {
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
			"pslld $22,%%xmm3\n"
			"psrld $22,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $10,%%xmm3\n"
			"pslld $22,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $42,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_245(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_246(T* des, const uint32_t* src) {
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
			"pslld $18,%%xmm3\n"
			"psrld $18,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $14,%%xmm3\n"
			"pslld $18,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $46,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_247(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_248(T* des, const uint32_t* src) {
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
			"pslld $14,%%xmm3\n"
			"psrld $14,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $18,%%xmm3\n"
			"pslld $14,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $50,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_249(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_250(T* des, const uint32_t* src) {
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
			"pslld $10,%%xmm3\n"
			"psrld $10,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $22,%%xmm3\n"
			"pslld $10,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $54,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_251(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_252(T* des, const uint32_t* src) {
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
			"pslld $6,%%xmm3\n"
			"psrld $6,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $26,%%xmm3\n"
			"pslld $6,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $58,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_253(T* des, const uint32_t* src) {
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
void simd_kscheme_2bit_binary_unpack_254(T* des, const uint32_t* src) {
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
			"pslld $2,%%xmm3\n"
			"psrld $2,%%xmm3\n"
			"movdqu %%xmm3,%0\n"
			"movdqa %%xmm0,%%xmm3\n"
			"movdqa %%xmm1,%%xmm4\n"
			"psrld $30,%%xmm3\n"
			"pslld $2,%%xmm4\n"
			"por %%xmm4,%%xmm3\n"
			"movdqu %%xmm3,%1\n"
			"movl $62,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_2bit_binary_unpack_255(T* des, const uint32_t* src) {
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

static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_0 = { simd_kscheme_2bit_binary_unpack_0<uint32_t>, 4  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_1 = { simd_kscheme_2bit_binary_unpack_1<uint32_t>, 6  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_2 = { simd_kscheme_2bit_binary_unpack_2<uint32_t>, 8  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_3 = { simd_kscheme_2bit_binary_unpack_3<uint32_t>, 10  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_4 = { simd_kscheme_2bit_binary_unpack_4<uint32_t>, 12  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_5 = { simd_kscheme_2bit_binary_unpack_5<uint32_t>, 14  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_6 = { simd_kscheme_2bit_binary_unpack_6<uint32_t>, 16  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_7 = { simd_kscheme_2bit_binary_unpack_7<uint32_t>, 18  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_8 = { simd_kscheme_2bit_binary_unpack_8<uint32_t>, 20  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_9 = { simd_kscheme_2bit_binary_unpack_9<uint32_t>, 22  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_10 = { simd_kscheme_2bit_binary_unpack_10<uint32_t>, 24  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_11 = { simd_kscheme_2bit_binary_unpack_11<uint32_t>, 26  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_12 = { simd_kscheme_2bit_binary_unpack_12<uint32_t>, 28  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_13 = { simd_kscheme_2bit_binary_unpack_13<uint32_t>, 30  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_14 = { simd_kscheme_2bit_binary_unpack_14<uint32_t>, 32  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_15 = { simd_kscheme_2bit_binary_unpack_15<uint32_t>, 34  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_16 = { simd_kscheme_2bit_binary_unpack_16<uint32_t>, 6  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_17 = { simd_kscheme_2bit_binary_unpack_17<uint32_t>, 8  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_18 = { simd_kscheme_2bit_binary_unpack_18<uint32_t>, 10  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_19 = { simd_kscheme_2bit_binary_unpack_19<uint32_t>, 12  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_20 = { simd_kscheme_2bit_binary_unpack_20<uint32_t>, 14  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_21 = { simd_kscheme_2bit_binary_unpack_21<uint32_t>, 16  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_22 = { simd_kscheme_2bit_binary_unpack_22<uint32_t>, 18  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_23 = { simd_kscheme_2bit_binary_unpack_23<uint32_t>, 20  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_24 = { simd_kscheme_2bit_binary_unpack_24<uint32_t>, 22  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_25 = { simd_kscheme_2bit_binary_unpack_25<uint32_t>, 24  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_26 = { simd_kscheme_2bit_binary_unpack_26<uint32_t>, 26  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_27 = { simd_kscheme_2bit_binary_unpack_27<uint32_t>, 28  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_28 = { simd_kscheme_2bit_binary_unpack_28<uint32_t>, 30  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_29 = { simd_kscheme_2bit_binary_unpack_29<uint32_t>, 32  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_30 = { simd_kscheme_2bit_binary_unpack_30<uint32_t>, 34  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_31 = { simd_kscheme_2bit_binary_unpack_31<uint32_t>, 36  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_32 = { simd_kscheme_2bit_binary_unpack_32<uint32_t>, 8  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_33 = { simd_kscheme_2bit_binary_unpack_33<uint32_t>, 10  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_34 = { simd_kscheme_2bit_binary_unpack_34<uint32_t>, 12  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_35 = { simd_kscheme_2bit_binary_unpack_35<uint32_t>, 14  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_36 = { simd_kscheme_2bit_binary_unpack_36<uint32_t>, 16  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_37 = { simd_kscheme_2bit_binary_unpack_37<uint32_t>, 18  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_38 = { simd_kscheme_2bit_binary_unpack_38<uint32_t>, 20  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_39 = { simd_kscheme_2bit_binary_unpack_39<uint32_t>, 22  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_40 = { simd_kscheme_2bit_binary_unpack_40<uint32_t>, 24  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_41 = { simd_kscheme_2bit_binary_unpack_41<uint32_t>, 26  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_42 = { simd_kscheme_2bit_binary_unpack_42<uint32_t>, 28  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_43 = { simd_kscheme_2bit_binary_unpack_43<uint32_t>, 30  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_44 = { simd_kscheme_2bit_binary_unpack_44<uint32_t>, 32  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_45 = { simd_kscheme_2bit_binary_unpack_45<uint32_t>, 34  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_46 = { simd_kscheme_2bit_binary_unpack_46<uint32_t>, 36  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_47 = { simd_kscheme_2bit_binary_unpack_47<uint32_t>, 38  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_48 = { simd_kscheme_2bit_binary_unpack_48<uint32_t>, 10  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_49 = { simd_kscheme_2bit_binary_unpack_49<uint32_t>, 12  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_50 = { simd_kscheme_2bit_binary_unpack_50<uint32_t>, 14  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_51 = { simd_kscheme_2bit_binary_unpack_51<uint32_t>, 16  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_52 = { simd_kscheme_2bit_binary_unpack_52<uint32_t>, 18  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_53 = { simd_kscheme_2bit_binary_unpack_53<uint32_t>, 20  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_54 = { simd_kscheme_2bit_binary_unpack_54<uint32_t>, 22  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_55 = { simd_kscheme_2bit_binary_unpack_55<uint32_t>, 24  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_56 = { simd_kscheme_2bit_binary_unpack_56<uint32_t>, 26  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_57 = { simd_kscheme_2bit_binary_unpack_57<uint32_t>, 28  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_58 = { simd_kscheme_2bit_binary_unpack_58<uint32_t>, 30  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_59 = { simd_kscheme_2bit_binary_unpack_59<uint32_t>, 32  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_60 = { simd_kscheme_2bit_binary_unpack_60<uint32_t>, 34  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_61 = { simd_kscheme_2bit_binary_unpack_61<uint32_t>, 36  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_62 = { simd_kscheme_2bit_binary_unpack_62<uint32_t>, 38  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_63 = { simd_kscheme_2bit_binary_unpack_63<uint32_t>, 40  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_64 = { simd_kscheme_2bit_binary_unpack_64<uint32_t>, 12  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_65 = { simd_kscheme_2bit_binary_unpack_65<uint32_t>, 14  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_66 = { simd_kscheme_2bit_binary_unpack_66<uint32_t>, 16  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_67 = { simd_kscheme_2bit_binary_unpack_67<uint32_t>, 18  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_68 = { simd_kscheme_2bit_binary_unpack_68<uint32_t>, 20  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_69 = { simd_kscheme_2bit_binary_unpack_69<uint32_t>, 22  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_70 = { simd_kscheme_2bit_binary_unpack_70<uint32_t>, 24  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_71 = { simd_kscheme_2bit_binary_unpack_71<uint32_t>, 26  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_72 = { simd_kscheme_2bit_binary_unpack_72<uint32_t>, 28  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_73 = { simd_kscheme_2bit_binary_unpack_73<uint32_t>, 30  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_74 = { simd_kscheme_2bit_binary_unpack_74<uint32_t>, 32  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_75 = { simd_kscheme_2bit_binary_unpack_75<uint32_t>, 34  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_76 = { simd_kscheme_2bit_binary_unpack_76<uint32_t>, 36  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_77 = { simd_kscheme_2bit_binary_unpack_77<uint32_t>, 38  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_78 = { simd_kscheme_2bit_binary_unpack_78<uint32_t>, 40  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_79 = { simd_kscheme_2bit_binary_unpack_79<uint32_t>, 42  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_80 = { simd_kscheme_2bit_binary_unpack_80<uint32_t>, 14  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_81 = { simd_kscheme_2bit_binary_unpack_81<uint32_t>, 16  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_82 = { simd_kscheme_2bit_binary_unpack_82<uint32_t>, 18  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_83 = { simd_kscheme_2bit_binary_unpack_83<uint32_t>, 20  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_84 = { simd_kscheme_2bit_binary_unpack_84<uint32_t>, 22  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_85 = { simd_kscheme_2bit_binary_unpack_85<uint32_t>, 24  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_86 = { simd_kscheme_2bit_binary_unpack_86<uint32_t>, 26  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_87 = { simd_kscheme_2bit_binary_unpack_87<uint32_t>, 28  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_88 = { simd_kscheme_2bit_binary_unpack_88<uint32_t>, 30  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_89 = { simd_kscheme_2bit_binary_unpack_89<uint32_t>, 32  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_90 = { simd_kscheme_2bit_binary_unpack_90<uint32_t>, 34  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_91 = { simd_kscheme_2bit_binary_unpack_91<uint32_t>, 36  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_92 = { simd_kscheme_2bit_binary_unpack_92<uint32_t>, 38  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_93 = { simd_kscheme_2bit_binary_unpack_93<uint32_t>, 40  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_94 = { simd_kscheme_2bit_binary_unpack_94<uint32_t>, 42  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_95 = { simd_kscheme_2bit_binary_unpack_95<uint32_t>, 44  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_96 = { simd_kscheme_2bit_binary_unpack_96<uint32_t>, 16  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_97 = { simd_kscheme_2bit_binary_unpack_97<uint32_t>, 18  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_98 = { simd_kscheme_2bit_binary_unpack_98<uint32_t>, 20  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_99 = { simd_kscheme_2bit_binary_unpack_99<uint32_t>, 22  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_100 = { simd_kscheme_2bit_binary_unpack_100<uint32_t>, 24  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_101 = { simd_kscheme_2bit_binary_unpack_101<uint32_t>, 26  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_102 = { simd_kscheme_2bit_binary_unpack_102<uint32_t>, 28  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_103 = { simd_kscheme_2bit_binary_unpack_103<uint32_t>, 30  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_104 = { simd_kscheme_2bit_binary_unpack_104<uint32_t>, 32  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_105 = { simd_kscheme_2bit_binary_unpack_105<uint32_t>, 34  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_106 = { simd_kscheme_2bit_binary_unpack_106<uint32_t>, 36  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_107 = { simd_kscheme_2bit_binary_unpack_107<uint32_t>, 38  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_108 = { simd_kscheme_2bit_binary_unpack_108<uint32_t>, 40  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_109 = { simd_kscheme_2bit_binary_unpack_109<uint32_t>, 42  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_110 = { simd_kscheme_2bit_binary_unpack_110<uint32_t>, 44  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_111 = { simd_kscheme_2bit_binary_unpack_111<uint32_t>, 46  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_112 = { simd_kscheme_2bit_binary_unpack_112<uint32_t>, 18  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_113 = { simd_kscheme_2bit_binary_unpack_113<uint32_t>, 20  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_114 = { simd_kscheme_2bit_binary_unpack_114<uint32_t>, 22  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_115 = { simd_kscheme_2bit_binary_unpack_115<uint32_t>, 24  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_116 = { simd_kscheme_2bit_binary_unpack_116<uint32_t>, 26  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_117 = { simd_kscheme_2bit_binary_unpack_117<uint32_t>, 28  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_118 = { simd_kscheme_2bit_binary_unpack_118<uint32_t>, 30  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_119 = { simd_kscheme_2bit_binary_unpack_119<uint32_t>, 32  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_120 = { simd_kscheme_2bit_binary_unpack_120<uint32_t>, 34  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_121 = { simd_kscheme_2bit_binary_unpack_121<uint32_t>, 36  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_122 = { simd_kscheme_2bit_binary_unpack_122<uint32_t>, 38  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_123 = { simd_kscheme_2bit_binary_unpack_123<uint32_t>, 40  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_124 = { simd_kscheme_2bit_binary_unpack_124<uint32_t>, 42  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_125 = { simd_kscheme_2bit_binary_unpack_125<uint32_t>, 44  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_126 = { simd_kscheme_2bit_binary_unpack_126<uint32_t>, 46  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_127 = { simd_kscheme_2bit_binary_unpack_127<uint32_t>, 48  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_128 = { simd_kscheme_2bit_binary_unpack_128<uint32_t>, 20  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_129 = { simd_kscheme_2bit_binary_unpack_129<uint32_t>, 22  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_130 = { simd_kscheme_2bit_binary_unpack_130<uint32_t>, 24  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_131 = { simd_kscheme_2bit_binary_unpack_131<uint32_t>, 26  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_132 = { simd_kscheme_2bit_binary_unpack_132<uint32_t>, 28  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_133 = { simd_kscheme_2bit_binary_unpack_133<uint32_t>, 30  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_134 = { simd_kscheme_2bit_binary_unpack_134<uint32_t>, 32  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_135 = { simd_kscheme_2bit_binary_unpack_135<uint32_t>, 34  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_136 = { simd_kscheme_2bit_binary_unpack_136<uint32_t>, 36  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_137 = { simd_kscheme_2bit_binary_unpack_137<uint32_t>, 38  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_138 = { simd_kscheme_2bit_binary_unpack_138<uint32_t>, 40  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_139 = { simd_kscheme_2bit_binary_unpack_139<uint32_t>, 42  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_140 = { simd_kscheme_2bit_binary_unpack_140<uint32_t>, 44  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_141 = { simd_kscheme_2bit_binary_unpack_141<uint32_t>, 46  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_142 = { simd_kscheme_2bit_binary_unpack_142<uint32_t>, 48  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_143 = { simd_kscheme_2bit_binary_unpack_143<uint32_t>, 50  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_144 = { simd_kscheme_2bit_binary_unpack_144<uint32_t>, 22  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_145 = { simd_kscheme_2bit_binary_unpack_145<uint32_t>, 24  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_146 = { simd_kscheme_2bit_binary_unpack_146<uint32_t>, 26  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_147 = { simd_kscheme_2bit_binary_unpack_147<uint32_t>, 28  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_148 = { simd_kscheme_2bit_binary_unpack_148<uint32_t>, 30  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_149 = { simd_kscheme_2bit_binary_unpack_149<uint32_t>, 32  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_150 = { simd_kscheme_2bit_binary_unpack_150<uint32_t>, 34  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_151 = { simd_kscheme_2bit_binary_unpack_151<uint32_t>, 36  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_152 = { simd_kscheme_2bit_binary_unpack_152<uint32_t>, 38  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_153 = { simd_kscheme_2bit_binary_unpack_153<uint32_t>, 40  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_154 = { simd_kscheme_2bit_binary_unpack_154<uint32_t>, 42  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_155 = { simd_kscheme_2bit_binary_unpack_155<uint32_t>, 44  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_156 = { simd_kscheme_2bit_binary_unpack_156<uint32_t>, 46  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_157 = { simd_kscheme_2bit_binary_unpack_157<uint32_t>, 48  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_158 = { simd_kscheme_2bit_binary_unpack_158<uint32_t>, 50  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_159 = { simd_kscheme_2bit_binary_unpack_159<uint32_t>, 52  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_160 = { simd_kscheme_2bit_binary_unpack_160<uint32_t>, 24  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_161 = { simd_kscheme_2bit_binary_unpack_161<uint32_t>, 26  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_162 = { simd_kscheme_2bit_binary_unpack_162<uint32_t>, 28  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_163 = { simd_kscheme_2bit_binary_unpack_163<uint32_t>, 30  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_164 = { simd_kscheme_2bit_binary_unpack_164<uint32_t>, 32  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_165 = { simd_kscheme_2bit_binary_unpack_165<uint32_t>, 34  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_166 = { simd_kscheme_2bit_binary_unpack_166<uint32_t>, 36  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_167 = { simd_kscheme_2bit_binary_unpack_167<uint32_t>, 38  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_168 = { simd_kscheme_2bit_binary_unpack_168<uint32_t>, 40  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_169 = { simd_kscheme_2bit_binary_unpack_169<uint32_t>, 42  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_170 = { simd_kscheme_2bit_binary_unpack_170<uint32_t>, 44  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_171 = { simd_kscheme_2bit_binary_unpack_171<uint32_t>, 46  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_172 = { simd_kscheme_2bit_binary_unpack_172<uint32_t>, 48  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_173 = { simd_kscheme_2bit_binary_unpack_173<uint32_t>, 50  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_174 = { simd_kscheme_2bit_binary_unpack_174<uint32_t>, 52  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_175 = { simd_kscheme_2bit_binary_unpack_175<uint32_t>, 54  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_176 = { simd_kscheme_2bit_binary_unpack_176<uint32_t>, 26  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_177 = { simd_kscheme_2bit_binary_unpack_177<uint32_t>, 28  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_178 = { simd_kscheme_2bit_binary_unpack_178<uint32_t>, 30  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_179 = { simd_kscheme_2bit_binary_unpack_179<uint32_t>, 32  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_180 = { simd_kscheme_2bit_binary_unpack_180<uint32_t>, 34  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_181 = { simd_kscheme_2bit_binary_unpack_181<uint32_t>, 36  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_182 = { simd_kscheme_2bit_binary_unpack_182<uint32_t>, 38  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_183 = { simd_kscheme_2bit_binary_unpack_183<uint32_t>, 40  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_184 = { simd_kscheme_2bit_binary_unpack_184<uint32_t>, 42  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_185 = { simd_kscheme_2bit_binary_unpack_185<uint32_t>, 44  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_186 = { simd_kscheme_2bit_binary_unpack_186<uint32_t>, 46  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_187 = { simd_kscheme_2bit_binary_unpack_187<uint32_t>, 48  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_188 = { simd_kscheme_2bit_binary_unpack_188<uint32_t>, 50  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_189 = { simd_kscheme_2bit_binary_unpack_189<uint32_t>, 52  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_190 = { simd_kscheme_2bit_binary_unpack_190<uint32_t>, 54  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_191 = { simd_kscheme_2bit_binary_unpack_191<uint32_t>, 56  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_192 = { simd_kscheme_2bit_binary_unpack_192<uint32_t>, 28  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_193 = { simd_kscheme_2bit_binary_unpack_193<uint32_t>, 30  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_194 = { simd_kscheme_2bit_binary_unpack_194<uint32_t>, 32  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_195 = { simd_kscheme_2bit_binary_unpack_195<uint32_t>, 34  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_196 = { simd_kscheme_2bit_binary_unpack_196<uint32_t>, 36  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_197 = { simd_kscheme_2bit_binary_unpack_197<uint32_t>, 38  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_198 = { simd_kscheme_2bit_binary_unpack_198<uint32_t>, 40  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_199 = { simd_kscheme_2bit_binary_unpack_199<uint32_t>, 42  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_200 = { simd_kscheme_2bit_binary_unpack_200<uint32_t>, 44  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_201 = { simd_kscheme_2bit_binary_unpack_201<uint32_t>, 46  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_202 = { simd_kscheme_2bit_binary_unpack_202<uint32_t>, 48  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_203 = { simd_kscheme_2bit_binary_unpack_203<uint32_t>, 50  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_204 = { simd_kscheme_2bit_binary_unpack_204<uint32_t>, 52  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_205 = { simd_kscheme_2bit_binary_unpack_205<uint32_t>, 54  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_206 = { simd_kscheme_2bit_binary_unpack_206<uint32_t>, 56  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_207 = { simd_kscheme_2bit_binary_unpack_207<uint32_t>, 58  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_208 = { simd_kscheme_2bit_binary_unpack_208<uint32_t>, 30  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_209 = { simd_kscheme_2bit_binary_unpack_209<uint32_t>, 32  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_210 = { simd_kscheme_2bit_binary_unpack_210<uint32_t>, 34  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_211 = { simd_kscheme_2bit_binary_unpack_211<uint32_t>, 36  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_212 = { simd_kscheme_2bit_binary_unpack_212<uint32_t>, 38  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_213 = { simd_kscheme_2bit_binary_unpack_213<uint32_t>, 40  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_214 = { simd_kscheme_2bit_binary_unpack_214<uint32_t>, 42  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_215 = { simd_kscheme_2bit_binary_unpack_215<uint32_t>, 44  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_216 = { simd_kscheme_2bit_binary_unpack_216<uint32_t>, 46  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_217 = { simd_kscheme_2bit_binary_unpack_217<uint32_t>, 48  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_218 = { simd_kscheme_2bit_binary_unpack_218<uint32_t>, 50  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_219 = { simd_kscheme_2bit_binary_unpack_219<uint32_t>, 52  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_220 = { simd_kscheme_2bit_binary_unpack_220<uint32_t>, 54  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_221 = { simd_kscheme_2bit_binary_unpack_221<uint32_t>, 56  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_222 = { simd_kscheme_2bit_binary_unpack_222<uint32_t>, 58  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_223 = { simd_kscheme_2bit_binary_unpack_223<uint32_t>, 60  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_224 = { simd_kscheme_2bit_binary_unpack_224<uint32_t>, 32  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_225 = { simd_kscheme_2bit_binary_unpack_225<uint32_t>, 34  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_226 = { simd_kscheme_2bit_binary_unpack_226<uint32_t>, 36  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_227 = { simd_kscheme_2bit_binary_unpack_227<uint32_t>, 38  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_228 = { simd_kscheme_2bit_binary_unpack_228<uint32_t>, 40  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_229 = { simd_kscheme_2bit_binary_unpack_229<uint32_t>, 42  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_230 = { simd_kscheme_2bit_binary_unpack_230<uint32_t>, 44  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_231 = { simd_kscheme_2bit_binary_unpack_231<uint32_t>, 46  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_232 = { simd_kscheme_2bit_binary_unpack_232<uint32_t>, 48  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_233 = { simd_kscheme_2bit_binary_unpack_233<uint32_t>, 50  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_234 = { simd_kscheme_2bit_binary_unpack_234<uint32_t>, 52  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_235 = { simd_kscheme_2bit_binary_unpack_235<uint32_t>, 54  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_236 = { simd_kscheme_2bit_binary_unpack_236<uint32_t>, 56  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_237 = { simd_kscheme_2bit_binary_unpack_237<uint32_t>, 58  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_238 = { simd_kscheme_2bit_binary_unpack_238<uint32_t>, 60  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_239 = { simd_kscheme_2bit_binary_unpack_239<uint32_t>, 62  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_240 = { simd_kscheme_2bit_binary_unpack_240<uint32_t>, 34  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_241 = { simd_kscheme_2bit_binary_unpack_241<uint32_t>, 36  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_242 = { simd_kscheme_2bit_binary_unpack_242<uint32_t>, 38  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_243 = { simd_kscheme_2bit_binary_unpack_243<uint32_t>, 40  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_244 = { simd_kscheme_2bit_binary_unpack_244<uint32_t>, 42  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_245 = { simd_kscheme_2bit_binary_unpack_245<uint32_t>, 44  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_246 = { simd_kscheme_2bit_binary_unpack_246<uint32_t>, 46  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_247 = { simd_kscheme_2bit_binary_unpack_247<uint32_t>, 48  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_248 = { simd_kscheme_2bit_binary_unpack_248<uint32_t>, 50  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_249 = { simd_kscheme_2bit_binary_unpack_249<uint32_t>, 52  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_250 = { simd_kscheme_2bit_binary_unpack_250<uint32_t>, 54  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_251 = { simd_kscheme_2bit_binary_unpack_251<uint32_t>, 56  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_252 = { simd_kscheme_2bit_binary_unpack_252<uint32_t>, 58  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_253 = { simd_kscheme_2bit_binary_unpack_253<uint32_t>, 60  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_254 = { simd_kscheme_2bit_binary_unpack_254<uint32_t>, 62  };
static SIMDK2BUnpackInfo SIMDK2BUnpackInfo_255 = { simd_kscheme_2bit_binary_unpack_255<uint32_t>, 64  };

static SIMDK2BUnpackInfo SIMDK2BUnpackInfoArr[256] = {
			SIMDK2BUnpackInfo_0, SIMDK2BUnpackInfo_1, SIMDK2BUnpackInfo_2, SIMDK2BUnpackInfo_3,
			SIMDK2BUnpackInfo_4, SIMDK2BUnpackInfo_5, SIMDK2BUnpackInfo_6, SIMDK2BUnpackInfo_7,
			SIMDK2BUnpackInfo_8, SIMDK2BUnpackInfo_9, SIMDK2BUnpackInfo_10, SIMDK2BUnpackInfo_11,
			SIMDK2BUnpackInfo_12, SIMDK2BUnpackInfo_13, SIMDK2BUnpackInfo_14, SIMDK2BUnpackInfo_15,
			SIMDK2BUnpackInfo_16, SIMDK2BUnpackInfo_17, SIMDK2BUnpackInfo_18, SIMDK2BUnpackInfo_19,
			SIMDK2BUnpackInfo_20, SIMDK2BUnpackInfo_21, SIMDK2BUnpackInfo_22, SIMDK2BUnpackInfo_23,
			SIMDK2BUnpackInfo_24, SIMDK2BUnpackInfo_25, SIMDK2BUnpackInfo_26, SIMDK2BUnpackInfo_27,
			SIMDK2BUnpackInfo_28, SIMDK2BUnpackInfo_29, SIMDK2BUnpackInfo_30, SIMDK2BUnpackInfo_31,
			SIMDK2BUnpackInfo_32, SIMDK2BUnpackInfo_33, SIMDK2BUnpackInfo_34, SIMDK2BUnpackInfo_35,
			SIMDK2BUnpackInfo_36, SIMDK2BUnpackInfo_37, SIMDK2BUnpackInfo_38, SIMDK2BUnpackInfo_39,
			SIMDK2BUnpackInfo_40, SIMDK2BUnpackInfo_41, SIMDK2BUnpackInfo_42, SIMDK2BUnpackInfo_43,
			SIMDK2BUnpackInfo_44, SIMDK2BUnpackInfo_45, SIMDK2BUnpackInfo_46, SIMDK2BUnpackInfo_47,
			SIMDK2BUnpackInfo_48, SIMDK2BUnpackInfo_49, SIMDK2BUnpackInfo_50, SIMDK2BUnpackInfo_51,
			SIMDK2BUnpackInfo_52, SIMDK2BUnpackInfo_53, SIMDK2BUnpackInfo_54, SIMDK2BUnpackInfo_55,
			SIMDK2BUnpackInfo_56, SIMDK2BUnpackInfo_57, SIMDK2BUnpackInfo_58, SIMDK2BUnpackInfo_59,
			SIMDK2BUnpackInfo_60, SIMDK2BUnpackInfo_61, SIMDK2BUnpackInfo_62, SIMDK2BUnpackInfo_63,
			SIMDK2BUnpackInfo_64, SIMDK2BUnpackInfo_65, SIMDK2BUnpackInfo_66, SIMDK2BUnpackInfo_67,
			SIMDK2BUnpackInfo_68, SIMDK2BUnpackInfo_69, SIMDK2BUnpackInfo_70, SIMDK2BUnpackInfo_71,
			SIMDK2BUnpackInfo_72, SIMDK2BUnpackInfo_73, SIMDK2BUnpackInfo_74, SIMDK2BUnpackInfo_75,
			SIMDK2BUnpackInfo_76, SIMDK2BUnpackInfo_77, SIMDK2BUnpackInfo_78, SIMDK2BUnpackInfo_79,
			SIMDK2BUnpackInfo_80, SIMDK2BUnpackInfo_81, SIMDK2BUnpackInfo_82, SIMDK2BUnpackInfo_83,
			SIMDK2BUnpackInfo_84, SIMDK2BUnpackInfo_85, SIMDK2BUnpackInfo_86, SIMDK2BUnpackInfo_87,
			SIMDK2BUnpackInfo_88, SIMDK2BUnpackInfo_89, SIMDK2BUnpackInfo_90, SIMDK2BUnpackInfo_91,
			SIMDK2BUnpackInfo_92, SIMDK2BUnpackInfo_93, SIMDK2BUnpackInfo_94, SIMDK2BUnpackInfo_95,
			SIMDK2BUnpackInfo_96, SIMDK2BUnpackInfo_97, SIMDK2BUnpackInfo_98, SIMDK2BUnpackInfo_99,
			SIMDK2BUnpackInfo_100, SIMDK2BUnpackInfo_101, SIMDK2BUnpackInfo_102, SIMDK2BUnpackInfo_103,
			SIMDK2BUnpackInfo_104, SIMDK2BUnpackInfo_105, SIMDK2BUnpackInfo_106, SIMDK2BUnpackInfo_107,
			SIMDK2BUnpackInfo_108, SIMDK2BUnpackInfo_109, SIMDK2BUnpackInfo_110, SIMDK2BUnpackInfo_111,
			SIMDK2BUnpackInfo_112, SIMDK2BUnpackInfo_113, SIMDK2BUnpackInfo_114, SIMDK2BUnpackInfo_115,
			SIMDK2BUnpackInfo_116, SIMDK2BUnpackInfo_117, SIMDK2BUnpackInfo_118, SIMDK2BUnpackInfo_119,
			SIMDK2BUnpackInfo_120, SIMDK2BUnpackInfo_121, SIMDK2BUnpackInfo_122, SIMDK2BUnpackInfo_123,
			SIMDK2BUnpackInfo_124, SIMDK2BUnpackInfo_125, SIMDK2BUnpackInfo_126, SIMDK2BUnpackInfo_127,
			SIMDK2BUnpackInfo_128, SIMDK2BUnpackInfo_129, SIMDK2BUnpackInfo_130, SIMDK2BUnpackInfo_131,
			SIMDK2BUnpackInfo_132, SIMDK2BUnpackInfo_133, SIMDK2BUnpackInfo_134, SIMDK2BUnpackInfo_135,
			SIMDK2BUnpackInfo_136, SIMDK2BUnpackInfo_137, SIMDK2BUnpackInfo_138, SIMDK2BUnpackInfo_139,
			SIMDK2BUnpackInfo_140, SIMDK2BUnpackInfo_141, SIMDK2BUnpackInfo_142, SIMDK2BUnpackInfo_143,
			SIMDK2BUnpackInfo_144, SIMDK2BUnpackInfo_145, SIMDK2BUnpackInfo_146, SIMDK2BUnpackInfo_147,
			SIMDK2BUnpackInfo_148, SIMDK2BUnpackInfo_149, SIMDK2BUnpackInfo_150, SIMDK2BUnpackInfo_151,
			SIMDK2BUnpackInfo_152, SIMDK2BUnpackInfo_153, SIMDK2BUnpackInfo_154, SIMDK2BUnpackInfo_155,
			SIMDK2BUnpackInfo_156, SIMDK2BUnpackInfo_157, SIMDK2BUnpackInfo_158, SIMDK2BUnpackInfo_159,
			SIMDK2BUnpackInfo_160, SIMDK2BUnpackInfo_161, SIMDK2BUnpackInfo_162, SIMDK2BUnpackInfo_163,
			SIMDK2BUnpackInfo_164, SIMDK2BUnpackInfo_165, SIMDK2BUnpackInfo_166, SIMDK2BUnpackInfo_167,
			SIMDK2BUnpackInfo_168, SIMDK2BUnpackInfo_169, SIMDK2BUnpackInfo_170, SIMDK2BUnpackInfo_171,
			SIMDK2BUnpackInfo_172, SIMDK2BUnpackInfo_173, SIMDK2BUnpackInfo_174, SIMDK2BUnpackInfo_175,
			SIMDK2BUnpackInfo_176, SIMDK2BUnpackInfo_177, SIMDK2BUnpackInfo_178, SIMDK2BUnpackInfo_179,
			SIMDK2BUnpackInfo_180, SIMDK2BUnpackInfo_181, SIMDK2BUnpackInfo_182, SIMDK2BUnpackInfo_183,
			SIMDK2BUnpackInfo_184, SIMDK2BUnpackInfo_185, SIMDK2BUnpackInfo_186, SIMDK2BUnpackInfo_187,
			SIMDK2BUnpackInfo_188, SIMDK2BUnpackInfo_189, SIMDK2BUnpackInfo_190, SIMDK2BUnpackInfo_191,
			SIMDK2BUnpackInfo_192, SIMDK2BUnpackInfo_193, SIMDK2BUnpackInfo_194, SIMDK2BUnpackInfo_195,
			SIMDK2BUnpackInfo_196, SIMDK2BUnpackInfo_197, SIMDK2BUnpackInfo_198, SIMDK2BUnpackInfo_199,
			SIMDK2BUnpackInfo_200, SIMDK2BUnpackInfo_201, SIMDK2BUnpackInfo_202, SIMDK2BUnpackInfo_203,
			SIMDK2BUnpackInfo_204, SIMDK2BUnpackInfo_205, SIMDK2BUnpackInfo_206, SIMDK2BUnpackInfo_207,
			SIMDK2BUnpackInfo_208, SIMDK2BUnpackInfo_209, SIMDK2BUnpackInfo_210, SIMDK2BUnpackInfo_211,
			SIMDK2BUnpackInfo_212, SIMDK2BUnpackInfo_213, SIMDK2BUnpackInfo_214, SIMDK2BUnpackInfo_215,
			SIMDK2BUnpackInfo_216, SIMDK2BUnpackInfo_217, SIMDK2BUnpackInfo_218, SIMDK2BUnpackInfo_219,
			SIMDK2BUnpackInfo_220, SIMDK2BUnpackInfo_221, SIMDK2BUnpackInfo_222, SIMDK2BUnpackInfo_223,
			SIMDK2BUnpackInfo_224, SIMDK2BUnpackInfo_225, SIMDK2BUnpackInfo_226, SIMDK2BUnpackInfo_227,
			SIMDK2BUnpackInfo_228, SIMDK2BUnpackInfo_229, SIMDK2BUnpackInfo_230, SIMDK2BUnpackInfo_231,
			SIMDK2BUnpackInfo_232, SIMDK2BUnpackInfo_233, SIMDK2BUnpackInfo_234, SIMDK2BUnpackInfo_235,
			SIMDK2BUnpackInfo_236, SIMDK2BUnpackInfo_237, SIMDK2BUnpackInfo_238, SIMDK2BUnpackInfo_239,
			SIMDK2BUnpackInfo_240, SIMDK2BUnpackInfo_241, SIMDK2BUnpackInfo_242, SIMDK2BUnpackInfo_243,
			SIMDK2BUnpackInfo_244, SIMDK2BUnpackInfo_245, SIMDK2BUnpackInfo_246, SIMDK2BUnpackInfo_247,
			SIMDK2BUnpackInfo_248, SIMDK2BUnpackInfo_249, SIMDK2BUnpackInfo_250, SIMDK2BUnpackInfo_251,
			SIMDK2BUnpackInfo_252, SIMDK2BUnpackInfo_253, SIMDK2BUnpackInfo_254, SIMDK2BUnpackInfo_255
};

}
}

#endif

#endif /* SIMD_KSCHEME_2BIT_BINARY_UNPACK_HPP_ */

/*
#include <iostream>
#include <sstream>
#include <stdint.h>
#include <string>
#include <stdlib.h>

using namespace std;

string INFO_NAME = "SIMDK2BUnpackInfo";
string FUNC_NAME_PREFIX = "simd_kscheme_2bit_binary_unpack";
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
	unpackInfoArrStr += "static " + INFO_NAME + " " + INFO_NAME + "Arr[256] = {\n";
	for (int i=0; i<256; i++) {
		if (i % 4 == 0)
			unpackInfoArrStr += TRIPLE_TAB;
		unpackInfoArrStr += INFO_NAME + "_" + Int2Str(i);
		if (i != 255)
			unpackInfoArrStr += ", ";

		if (i % 4 == 3)
			unpackInfoArrStr += "\n";
	}
	unpackInfoArrStr += "};\n";
}

int main(int argc, char **argv) {

	for (uint32_t i=0; i<256; i++) {
		uint32_t infoIdx = i;

		bool validGroup = true;
		uint32_t offsetArr[8] = {0,0,0,0,0,0,0,0};
		uint32_t lenArr[8] = {0,0,0,0,0,0,0,0};
		uint32_t maskArr[8] = {0,0,0,0,0,0,0,0};
		uint32_t intNum = 2;
		uint32_t bitToWrite = 0;
		uint32_t mask = i;

		lenArr[0] = (1 + (i & 0xf)) * 2;
		if (lenArr[0] > 32)
			validGroup = false;
		lenArr[1] = (1 + ((i>>4) & 0xf)) * 2;
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
