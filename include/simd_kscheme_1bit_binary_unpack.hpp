/*
 * simd_kscheme_1bit_binary_unpack.hpp
 *
 *  Created on: 2013-6-9
 *      Author: zxd
 */

#ifndef SIMD_KSCHEME_1BIT_BINARY_UNPACK_HPP_
#define SIMD_KSCHEME_1BIT_BINARY_UNPACK_HPP_

#ifdef USE_SSE_INSTRUCTION

#include <stdint.h>

namespace paradise {
namespace index {

struct SIMDK1BUnpackInfo{
	void (*m_subFunc)(uint32_t *des, const uint32_t *src);
	uint8_t m_totalBitCount;
};

static const struct kscheme_1bit_binary_val_31{
uint32_t a[4];
}kscheme_1bit_binary_val_31 __attribute__((aligned(16))) = {{0x1f,0x0,0x0,0x0},};
static const struct kscheme_1bit_binary_val_32{
uint32_t a[4];
}kscheme_1bit_binary_val_32 __attribute__((aligned(16))) = {{0x20,0x0,0x0,0x0},};

template<typename T>
void simd_kscheme_1bit_binary_unpack_prepare() {
	__asm__(
			"pxor %%xmm11,%%xmm11\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm13,%%xmm13\n"
			"movdqa %0,%%xmm14\n"
			"movdqa %1,%%xmm15\n"
			::"m"(kscheme_1bit_binary_val_31.a[0]),"m"(kscheme_1bit_binary_val_32.a[0])
			:"memory");
}

template<typename T>
void simd_kscheme_1bit_binary_unpack_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %1,%%xmm0\n"
			"movdqu %2,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $31,%%xmm2\n"
			"psrld $31,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_binary_unpack_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %1,%%xmm0\n"
			"movdqu %2,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $30,%%xmm2\n"
			"psrld $30,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movl $2,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_binary_unpack_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %1,%%xmm0\n"
			"movdqu %2,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $29,%%xmm2\n"
			"psrld $29,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movl $3,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_binary_unpack_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %1,%%xmm0\n"
			"movdqu %2,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $28,%%xmm2\n"
			"psrld $28,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_binary_unpack_4(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %1,%%xmm0\n"
			"movdqu %2,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $27,%%xmm2\n"
			"psrld $27,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movl $5,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_binary_unpack_5(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %1,%%xmm0\n"
			"movdqu %2,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $26,%%xmm2\n"
			"psrld $26,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movl $6,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_binary_unpack_6(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %1,%%xmm0\n"
			"movdqu %2,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $25,%%xmm2\n"
			"psrld $25,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movl $7,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_binary_unpack_7(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %1,%%xmm0\n"
			"movdqu %2,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $24,%%xmm2\n"
			"psrld $24,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movl $8,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_binary_unpack_8(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %1,%%xmm0\n"
			"movdqu %2,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $23,%%xmm2\n"
			"psrld $23,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movl $9,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_binary_unpack_9(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %1,%%xmm0\n"
			"movdqu %2,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $22,%%xmm2\n"
			"psrld $22,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movl $10,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_binary_unpack_10(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %1,%%xmm0\n"
			"movdqu %2,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $21,%%xmm2\n"
			"psrld $21,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movl $11,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_binary_unpack_11(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %1,%%xmm0\n"
			"movdqu %2,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $20,%%xmm2\n"
			"psrld $20,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movl $12,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_binary_unpack_12(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %1,%%xmm0\n"
			"movdqu %2,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $19,%%xmm2\n"
			"psrld $19,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movl $13,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_binary_unpack_13(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %1,%%xmm0\n"
			"movdqu %2,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $18,%%xmm2\n"
			"psrld $18,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movl $14,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_binary_unpack_14(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %1,%%xmm0\n"
			"movdqu %2,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $17,%%xmm2\n"
			"psrld $17,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movl $15,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_binary_unpack_15(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %1,%%xmm0\n"
			"movdqu %2,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $16,%%xmm2\n"
			"psrld $16,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movl $16,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_binary_unpack_16(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %1,%%xmm0\n"
			"movdqu %2,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $15,%%xmm2\n"
			"psrld $15,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movl $17,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_binary_unpack_17(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %1,%%xmm0\n"
			"movdqu %2,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $14,%%xmm2\n"
			"psrld $14,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movl $18,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_binary_unpack_18(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %1,%%xmm0\n"
			"movdqu %2,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $13,%%xmm2\n"
			"psrld $13,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movl $19,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_binary_unpack_19(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %1,%%xmm0\n"
			"movdqu %2,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $12,%%xmm2\n"
			"psrld $12,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movl $20,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_binary_unpack_20(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %1,%%xmm0\n"
			"movdqu %2,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $11,%%xmm2\n"
			"psrld $11,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movl $21,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_binary_unpack_21(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %1,%%xmm0\n"
			"movdqu %2,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $10,%%xmm2\n"
			"psrld $10,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movl $22,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_binary_unpack_22(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %1,%%xmm0\n"
			"movdqu %2,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $9,%%xmm2\n"
			"psrld $9,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movl $23,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_binary_unpack_23(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %1,%%xmm0\n"
			"movdqu %2,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $8,%%xmm2\n"
			"psrld $8,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movl $24,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_binary_unpack_24(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %1,%%xmm0\n"
			"movdqu %2,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $7,%%xmm2\n"
			"psrld $7,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movl $25,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_binary_unpack_25(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %1,%%xmm0\n"
			"movdqu %2,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $6,%%xmm2\n"
			"psrld $6,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movl $26,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_binary_unpack_26(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %1,%%xmm0\n"
			"movdqu %2,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $5,%%xmm2\n"
			"psrld $5,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movl $27,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_binary_unpack_27(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %1,%%xmm0\n"
			"movdqu %2,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $4,%%xmm2\n"
			"psrld $4,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movl $28,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_binary_unpack_28(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %1,%%xmm0\n"
			"movdqu %2,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $3,%%xmm2\n"
			"psrld $3,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movl $29,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_binary_unpack_29(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %1,%%xmm0\n"
			"movdqu %2,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $2,%%xmm2\n"
			"psrld $2,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movl $30,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_binary_unpack_30(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %1,%%xmm0\n"
			"movdqu %2,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"pslld $1,%%xmm2\n"
			"psrld $1,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movl $31,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_binary_unpack_31(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqa %%xmm15,%%xmm13\n"
			"psubd %%xmm12,%%xmm13\n"
			"movdqu %1,%%xmm0\n"
			"movdqu %2,%%xmm1\n"
			"movdqa %%xmm1,%%xmm2\n"
			"psrld %%xmm12,%%xmm0\n"
			"pslld %%xmm13,%%xmm2\n"
			"por %%xmm2,%%xmm0\n"
			"movdqa %%xmm0,%%xmm2\n"
			"movdqu %%xmm2,%0\n"
			"movl $32,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm11,%%xmm12\n"
			"pand %%xmm14,%%xmm12\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory", "eax");
}

static SIMDK1BUnpackInfo SIMDK1BUnpackInfo_0 = { simd_kscheme_1bit_binary_unpack_0<uint32_t>, 1  };
static SIMDK1BUnpackInfo SIMDK1BUnpackInfo_1 = { simd_kscheme_1bit_binary_unpack_1<uint32_t>, 2  };
static SIMDK1BUnpackInfo SIMDK1BUnpackInfo_2 = { simd_kscheme_1bit_binary_unpack_2<uint32_t>, 3  };
static SIMDK1BUnpackInfo SIMDK1BUnpackInfo_3 = { simd_kscheme_1bit_binary_unpack_3<uint32_t>, 4  };
static SIMDK1BUnpackInfo SIMDK1BUnpackInfo_4 = { simd_kscheme_1bit_binary_unpack_4<uint32_t>, 5  };
static SIMDK1BUnpackInfo SIMDK1BUnpackInfo_5 = { simd_kscheme_1bit_binary_unpack_5<uint32_t>, 6  };
static SIMDK1BUnpackInfo SIMDK1BUnpackInfo_6 = { simd_kscheme_1bit_binary_unpack_6<uint32_t>, 7  };
static SIMDK1BUnpackInfo SIMDK1BUnpackInfo_7 = { simd_kscheme_1bit_binary_unpack_7<uint32_t>, 8  };
static SIMDK1BUnpackInfo SIMDK1BUnpackInfo_8 = { simd_kscheme_1bit_binary_unpack_8<uint32_t>, 9  };
static SIMDK1BUnpackInfo SIMDK1BUnpackInfo_9 = { simd_kscheme_1bit_binary_unpack_9<uint32_t>, 10  };
static SIMDK1BUnpackInfo SIMDK1BUnpackInfo_10 = { simd_kscheme_1bit_binary_unpack_10<uint32_t>, 11  };
static SIMDK1BUnpackInfo SIMDK1BUnpackInfo_11 = { simd_kscheme_1bit_binary_unpack_11<uint32_t>, 12  };
static SIMDK1BUnpackInfo SIMDK1BUnpackInfo_12 = { simd_kscheme_1bit_binary_unpack_12<uint32_t>, 13  };
static SIMDK1BUnpackInfo SIMDK1BUnpackInfo_13 = { simd_kscheme_1bit_binary_unpack_13<uint32_t>, 14  };
static SIMDK1BUnpackInfo SIMDK1BUnpackInfo_14 = { simd_kscheme_1bit_binary_unpack_14<uint32_t>, 15  };
static SIMDK1BUnpackInfo SIMDK1BUnpackInfo_15 = { simd_kscheme_1bit_binary_unpack_15<uint32_t>, 16  };
static SIMDK1BUnpackInfo SIMDK1BUnpackInfo_16 = { simd_kscheme_1bit_binary_unpack_16<uint32_t>, 17  };
static SIMDK1BUnpackInfo SIMDK1BUnpackInfo_17 = { simd_kscheme_1bit_binary_unpack_17<uint32_t>, 18  };
static SIMDK1BUnpackInfo SIMDK1BUnpackInfo_18 = { simd_kscheme_1bit_binary_unpack_18<uint32_t>, 19  };
static SIMDK1BUnpackInfo SIMDK1BUnpackInfo_19 = { simd_kscheme_1bit_binary_unpack_19<uint32_t>, 20  };
static SIMDK1BUnpackInfo SIMDK1BUnpackInfo_20 = { simd_kscheme_1bit_binary_unpack_20<uint32_t>, 21  };
static SIMDK1BUnpackInfo SIMDK1BUnpackInfo_21 = { simd_kscheme_1bit_binary_unpack_21<uint32_t>, 22  };
static SIMDK1BUnpackInfo SIMDK1BUnpackInfo_22 = { simd_kscheme_1bit_binary_unpack_22<uint32_t>, 23  };
static SIMDK1BUnpackInfo SIMDK1BUnpackInfo_23 = { simd_kscheme_1bit_binary_unpack_23<uint32_t>, 24  };
static SIMDK1BUnpackInfo SIMDK1BUnpackInfo_24 = { simd_kscheme_1bit_binary_unpack_24<uint32_t>, 25  };
static SIMDK1BUnpackInfo SIMDK1BUnpackInfo_25 = { simd_kscheme_1bit_binary_unpack_25<uint32_t>, 26  };
static SIMDK1BUnpackInfo SIMDK1BUnpackInfo_26 = { simd_kscheme_1bit_binary_unpack_26<uint32_t>, 27  };
static SIMDK1BUnpackInfo SIMDK1BUnpackInfo_27 = { simd_kscheme_1bit_binary_unpack_27<uint32_t>, 28  };
static SIMDK1BUnpackInfo SIMDK1BUnpackInfo_28 = { simd_kscheme_1bit_binary_unpack_28<uint32_t>, 29  };
static SIMDK1BUnpackInfo SIMDK1BUnpackInfo_29 = { simd_kscheme_1bit_binary_unpack_29<uint32_t>, 30  };
static SIMDK1BUnpackInfo SIMDK1BUnpackInfo_30 = { simd_kscheme_1bit_binary_unpack_30<uint32_t>, 31  };
static SIMDK1BUnpackInfo SIMDK1BUnpackInfo_31 = { simd_kscheme_1bit_binary_unpack_31<uint32_t>, 32  };

static SIMDK1BUnpackInfo SIMDK1BUnpackInfoArr[32] = {
			SIMDK1BUnpackInfo_0, SIMDK1BUnpackInfo_1, SIMDK1BUnpackInfo_2, SIMDK1BUnpackInfo_3,
			SIMDK1BUnpackInfo_4, SIMDK1BUnpackInfo_5, SIMDK1BUnpackInfo_6, SIMDK1BUnpackInfo_7,
			SIMDK1BUnpackInfo_8, SIMDK1BUnpackInfo_9, SIMDK1BUnpackInfo_10, SIMDK1BUnpackInfo_11,
			SIMDK1BUnpackInfo_12, SIMDK1BUnpackInfo_13, SIMDK1BUnpackInfo_14, SIMDK1BUnpackInfo_15,
			SIMDK1BUnpackInfo_16, SIMDK1BUnpackInfo_17, SIMDK1BUnpackInfo_18, SIMDK1BUnpackInfo_19,
			SIMDK1BUnpackInfo_20, SIMDK1BUnpackInfo_21, SIMDK1BUnpackInfo_22, SIMDK1BUnpackInfo_23,
			SIMDK1BUnpackInfo_24, SIMDK1BUnpackInfo_25, SIMDK1BUnpackInfo_26, SIMDK1BUnpackInfo_27,
			SIMDK1BUnpackInfo_28, SIMDK1BUnpackInfo_29, SIMDK1BUnpackInfo_30, SIMDK1BUnpackInfo_31
};


}
}

#endif

#endif /* SIMD_KSCHEME_1BIT_BINARY_UNPACK_HPP_ */

/*
#include <iostream>
#include <sstream>
#include <stdint.h>
#include <string>
#include <stdlib.h>

using namespace std;

string INFO_NAME = "SIMDK1BUnpackInfo";
string FUNC_NAME_PREFIX = "simd_kscheme_1bit_binary_unpack";
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
	unpackInfoArrStr += "static " + INFO_NAME + " " + INFO_NAME + "Arr[32] = {\n";
	for (int i=0; i<32; i++) {
		if (i % 4 == 0)
			unpackInfoArrStr += TRIPLE_TAB;
		unpackInfoArrStr += INFO_NAME + "_" + Int2Str(i);
		if (i != 31)
			unpackInfoArrStr += ", ";

		if (i % 4 == 3)
			unpackInfoArrStr += "\n";
	}
	unpackInfoArrStr += "};\n";
}

int main(int argc, char **argv) {

	for (uint32_t i=0; i<32; i++) {
		uint32_t infoIdx = i;

		bool validGroup = true;
		uint32_t offsetArr[8] = {0,0,0,0,0,0,0,0};
		uint32_t lenArr[8] = {0,0,0,0,0,0,0,0};
		uint32_t maskArr[8] = {0,0,0,0,0,0,0,0};
		uint32_t intNum = 1;
		uint32_t bitToWrite = 0;
		uint32_t mask = i;

		lenArr[0] = 1 + i;

		if (!validGroup) {
			intNum = 0;
		}

		if (intNum == 0) {
			validGroup = false;	//a valid group should represent at least one integer
		}

		if (validGroup) {
			bitToWrite = lenArr[0];
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
