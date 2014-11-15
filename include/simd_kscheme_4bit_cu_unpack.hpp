/*
 * simd_kscheme_4bit_cu_unpack.hpp
 *
 *  Created on: 2013-6-9
 *      Author: zxd
 */

#ifndef SIMD_KSCHEME_4BIT_CU_UNPACK_HPP_
#define SIMD_KSCHEME_4BIT_CU_UNPACK_HPP_

#ifdef USE_SSE_INSTRUCTION

#include <stdint.h>

namespace paradise {
namespace index {

struct SIMDK4CUUnpackInfo{
	void (*m_subFunc)(uint32_t *des, const uint32_t *src);
	uint8_t m_intNum;
	uint8_t m_statusGen;
	bool m_valid;
};

static const struct kscheme_4bit_cu_and_0{
uint32_t a[4];
}kscheme_4bit_cu_and_0 __attribute__((aligned(16))) = {{0xf,0xf,0xf,0xf},};
static const struct kscheme_4bit_cu_and_1{
uint32_t a[4];
}kscheme_4bit_cu_and_1 __attribute__((aligned(16))) = {{0xff,0xff,0xff,0xff},};
static const struct kscheme_4bit_cu_and_2{
uint32_t a[4];
}kscheme_4bit_cu_and_2 __attribute__((aligned(16))) = {{0xfff,0xfff,0xfff,0xfff},};
static const struct kscheme_4bit_cu_and_3{
uint32_t a[4];
}kscheme_4bit_cu_and_3 __attribute__((aligned(16))) = {{0xffff,0xffff,0xffff,0xffff},};
static const struct kscheme_4bit_cu_and_4{
uint32_t a[4];
}kscheme_4bit_cu_and_4 __attribute__((aligned(16))) = {{0xfffff,0xfffff,0xfffff,0xfffff},};
static const struct kscheme_4bit_cu_and_5{
uint32_t a[4];
}kscheme_4bit_cu_and_5 __attribute__((aligned(16))) = {{0xffffff,0xffffff,0xffffff,0xffffff},};
static const struct kscheme_4bit_cu_and_6{
uint32_t a[4];
}kscheme_4bit_cu_and_6 __attribute__((aligned(16))) = {{0xfffffff,0xfffffff,0xfffffff,0xfffffff},};

template<typename T>
void simd_kscheme_4bit_cu_unpack_prepare() {
	__asm__(
			"movdqa %0,%%xmm0\n"
			"movdqa %1,%%xmm1\n"
			"movdqa %2,%%xmm2\n"
			"movdqa %3,%%xmm3\n"
			"movdqa %4,%%xmm4\n"
			"movdqa %5,%%xmm5\n"
			"movdqa %6,%%xmm6\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm13,%%xmm13\n"
			::"m"(kscheme_4bit_cu_and_0.a[0]),"m"(kscheme_4bit_cu_and_1.a[0]),"m"(kscheme_4bit_cu_and_2.a[0]),"m"(kscheme_4bit_cu_and_3.a[0]),"m"(kscheme_4bit_cu_and_4.a[0]),"m"(kscheme_4bit_cu_and_5.a[0]),"m"(kscheme_4bit_cu_and_6.a[0])
			:"memory");
}

template<typename T>
void simd_kscheme_4bit_cu_unpack_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %8,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24]),"=m"(des[28])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_4(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_5(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_6(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_7(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_8(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_9(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_10(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_11(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_12(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_13(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_14(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_15(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm4,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_16(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_17(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_18(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_19(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_20(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_21(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_22(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_23(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_24(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_25(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_26(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_27(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_28(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_29(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_30(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_31(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm5,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_32(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_33(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_34(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_35(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_36(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_37(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_38(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_39(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_40(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_41(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_42(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_43(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_44(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_45(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_46(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_47(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm4,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_48(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_49(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_50(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_51(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_52(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_53(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_54(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_55(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_56(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_57(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_58(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_59(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_60(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_61(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm4,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_62(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm5,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_63(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm6,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $28,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_64(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_65(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_66(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_67(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_68(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_69(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_70(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_71(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_72(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_73(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_74(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_75(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_76(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_77(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_78(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_79(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm4,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_80(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_81(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_82(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_83(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_84(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_85(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_86(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_87(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_88(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_89(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_90(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_91(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_92(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_93(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_94(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm4,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_95(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm5,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_96(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_97(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_98(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_99(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_100(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_101(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_102(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_103(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_104(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_105(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_106(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_107(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_108(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_109(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_110(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_111(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm4,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_112(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_113(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_114(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_115(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_116(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_117(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_118(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_119(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_120(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_121(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm4,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_122(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm4,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_123(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm4,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_124(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm5,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_125(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm5,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_126(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm6,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_127(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"pxor %%xmm13,%%xmm13\n"
			"pxor %%xmm12,%%xmm12\n"
			:"=m"(des[0])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_128(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_129(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_130(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_131(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_132(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_133(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_134(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_135(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_136(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_137(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_138(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_139(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_140(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_141(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_142(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_143(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm4,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_144(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_145(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_146(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_147(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_148(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_149(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_150(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_151(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_152(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_153(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_154(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_155(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_156(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_157(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_158(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm4,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_159(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm5,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $24,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_160(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_161(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_162(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_163(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_164(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_165(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_166(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_167(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_168(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_169(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_170(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_171(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_172(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_173(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_174(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_175(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm4,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_176(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_177(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_178(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_179(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_180(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_181(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_182(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_183(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_184(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_185(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_186(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_187(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_188(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm4,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_189(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm4,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_190(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm5,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_191(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm6,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $28,%%xmm13\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_192(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $24,%%xmm13\n"
			"movl $8,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_193(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $24,%%xmm13\n"
			"movl $8,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_194(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $24,%%xmm13\n"
			"movl $8,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_195(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $24,%%xmm13\n"
			"movl $8,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_196(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $24,%%xmm13\n"
			"movl $8,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_197(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $24,%%xmm13\n"
			"movl $8,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_198(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $24,%%xmm13\n"
			"movl $8,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_199(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $24,%%xmm13\n"
			"movl $8,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_200(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $24,%%xmm13\n"
			"movl $8,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_201(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $24,%%xmm13\n"
			"movl $8,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_202(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $24,%%xmm13\n"
			"movl $8,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_203(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $24,%%xmm13\n"
			"movl $8,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_204(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $24,%%xmm13\n"
			"movl $8,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_205(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $24,%%xmm13\n"
			"movl $8,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_206(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $24,%%xmm13\n"
			"movl $8,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_207(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm4,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $20,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $24,%%xmm13\n"
			"movl $8,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_208(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $24,%%xmm13\n"
			"movl $8,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_209(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $24,%%xmm13\n"
			"movl $8,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_210(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $24,%%xmm13\n"
			"movl $8,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_211(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $24,%%xmm13\n"
			"movl $8,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_212(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $24,%%xmm13\n"
			"movl $8,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_213(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $24,%%xmm13\n"
			"movl $8,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_214(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $24,%%xmm13\n"
			"movl $8,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_215(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $24,%%xmm13\n"
			"movl $8,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_216(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $24,%%xmm13\n"
			"movl $8,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_217(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $24,%%xmm13\n"
			"movl $8,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_218(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $24,%%xmm13\n"
			"movl $8,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_219(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $24,%%xmm13\n"
			"movl $8,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_220(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $24,%%xmm13\n"
			"movl $8,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_221(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $24,%%xmm13\n"
			"movl $8,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_222(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm4,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $24,%%xmm13\n"
			"movl $8,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_223(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm5,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $24,%%xmm13\n"
			"movl $8,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_224(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $20,%%xmm13\n"
			"movl $12,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_225(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $20,%%xmm13\n"
			"movl $12,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_226(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $20,%%xmm13\n"
			"movl $12,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_227(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $20,%%xmm13\n"
			"movl $12,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_228(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $20,%%xmm13\n"
			"movl $12,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_229(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $20,%%xmm13\n"
			"movl $12,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_230(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $20,%%xmm13\n"
			"movl $12,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_231(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $16,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $20,%%xmm13\n"
			"movl $12,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_232(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $20,%%xmm13\n"
			"movl $12,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_233(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $20,%%xmm13\n"
			"movl $12,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_234(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $20,%%xmm13\n"
			"movl $12,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_235(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $20,%%xmm13\n"
			"movl $12,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_236(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $20,%%xmm13\n"
			"movl $12,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_237(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $20,%%xmm13\n"
			"movl $12,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_238(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $20,%%xmm13\n"
			"movl $12,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_239(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm4,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $20,%%xmm13\n"
			"movl $12,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_240(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
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
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $16,%%xmm13\n"
			"movl $16,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_241(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $16,%%xmm13\n"
			"movl $16,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_242(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $16,%%xmm13\n"
			"movl $16,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_243(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $12,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $16,%%xmm13\n"
			"movl $16,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_244(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $16,%%xmm13\n"
			"movl $16,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_245(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $16,%%xmm13\n"
			"movl $16,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_246(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $16,%%xmm13\n"
			"movl $16,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_247(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm3,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $16,%%xmm13\n"
			"movl $16,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_248(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $12,%%xmm13\n"
			"movl $20,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_249(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $8,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $12,%%xmm13\n"
			"movl $20,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_250(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $12,%%xmm13\n"
			"movl $20,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_251(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $12,%%xmm13\n"
			"movl $20,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_252(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm8\n"
			"psrld $4,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $8,%%xmm13\n"
			"movl $24,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_253(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $8,%%xmm13\n"
			"movl $24,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_254(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm7\n"
			"movdqa %%xmm7,%%xmm8\n"
			"pand %%xmm0,%%xmm8\n"
			"pslld %%xmm12,%%xmm8\n"
			"por %%xmm13,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm7,%%xmm13\n"
			"psrld $4,%%xmm13\n"
			"movl $28,%%eax\n"
			"movd %%eax,%%xmm12\n"
			:"=m"(des[0])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_4bit_cu_unpack_255(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
}

static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_0 = { simd_kscheme_4bit_cu_unpack_0<uint32_t>, 32, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_1 = { simd_kscheme_4bit_cu_unpack_1<uint32_t>, 28, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_2 = { simd_kscheme_4bit_cu_unpack_2<uint32_t>, 28, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_3 = { simd_kscheme_4bit_cu_unpack_3<uint32_t>, 24, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_4 = { simd_kscheme_4bit_cu_unpack_4<uint32_t>, 28, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_5 = { simd_kscheme_4bit_cu_unpack_5<uint32_t>, 24, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_6 = { simd_kscheme_4bit_cu_unpack_6<uint32_t>, 24, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_7 = { simd_kscheme_4bit_cu_unpack_7<uint32_t>, 20, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_8 = { simd_kscheme_4bit_cu_unpack_8<uint32_t>, 28, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_9 = { simd_kscheme_4bit_cu_unpack_9<uint32_t>, 24, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_10 = { simd_kscheme_4bit_cu_unpack_10<uint32_t>, 24, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_11 = { simd_kscheme_4bit_cu_unpack_11<uint32_t>, 20, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_12 = { simd_kscheme_4bit_cu_unpack_12<uint32_t>, 24, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_13 = { simd_kscheme_4bit_cu_unpack_13<uint32_t>, 20, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_14 = { simd_kscheme_4bit_cu_unpack_14<uint32_t>, 20, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_15 = { simd_kscheme_4bit_cu_unpack_15<uint32_t>, 16, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_16 = { simd_kscheme_4bit_cu_unpack_16<uint32_t>, 28, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_17 = { simd_kscheme_4bit_cu_unpack_17<uint32_t>, 24, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_18 = { simd_kscheme_4bit_cu_unpack_18<uint32_t>, 24, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_19 = { simd_kscheme_4bit_cu_unpack_19<uint32_t>, 20, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_20 = { simd_kscheme_4bit_cu_unpack_20<uint32_t>, 24, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_21 = { simd_kscheme_4bit_cu_unpack_21<uint32_t>, 20, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_22 = { simd_kscheme_4bit_cu_unpack_22<uint32_t>, 20, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_23 = { simd_kscheme_4bit_cu_unpack_23<uint32_t>, 16, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_24 = { simd_kscheme_4bit_cu_unpack_24<uint32_t>, 24, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_25 = { simd_kscheme_4bit_cu_unpack_25<uint32_t>, 20, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_26 = { simd_kscheme_4bit_cu_unpack_26<uint32_t>, 20, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_27 = { simd_kscheme_4bit_cu_unpack_27<uint32_t>, 16, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_28 = { simd_kscheme_4bit_cu_unpack_28<uint32_t>, 20, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_29 = { simd_kscheme_4bit_cu_unpack_29<uint32_t>, 16, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_30 = { simd_kscheme_4bit_cu_unpack_30<uint32_t>, 16, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_31 = { simd_kscheme_4bit_cu_unpack_31<uint32_t>, 12, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_32 = { simd_kscheme_4bit_cu_unpack_32<uint32_t>, 28, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_33 = { simd_kscheme_4bit_cu_unpack_33<uint32_t>, 24, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_34 = { simd_kscheme_4bit_cu_unpack_34<uint32_t>, 24, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_35 = { simd_kscheme_4bit_cu_unpack_35<uint32_t>, 20, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_36 = { simd_kscheme_4bit_cu_unpack_36<uint32_t>, 24, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_37 = { simd_kscheme_4bit_cu_unpack_37<uint32_t>, 20, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_38 = { simd_kscheme_4bit_cu_unpack_38<uint32_t>, 20, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_39 = { simd_kscheme_4bit_cu_unpack_39<uint32_t>, 16, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_40 = { simd_kscheme_4bit_cu_unpack_40<uint32_t>, 24, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_41 = { simd_kscheme_4bit_cu_unpack_41<uint32_t>, 20, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_42 = { simd_kscheme_4bit_cu_unpack_42<uint32_t>, 20, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_43 = { simd_kscheme_4bit_cu_unpack_43<uint32_t>, 16, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_44 = { simd_kscheme_4bit_cu_unpack_44<uint32_t>, 20, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_45 = { simd_kscheme_4bit_cu_unpack_45<uint32_t>, 16, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_46 = { simd_kscheme_4bit_cu_unpack_46<uint32_t>, 16, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_47 = { simd_kscheme_4bit_cu_unpack_47<uint32_t>, 12, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_48 = { simd_kscheme_4bit_cu_unpack_48<uint32_t>, 24, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_49 = { simd_kscheme_4bit_cu_unpack_49<uint32_t>, 20, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_50 = { simd_kscheme_4bit_cu_unpack_50<uint32_t>, 20, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_51 = { simd_kscheme_4bit_cu_unpack_51<uint32_t>, 16, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_52 = { simd_kscheme_4bit_cu_unpack_52<uint32_t>, 20, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_53 = { simd_kscheme_4bit_cu_unpack_53<uint32_t>, 16, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_54 = { simd_kscheme_4bit_cu_unpack_54<uint32_t>, 16, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_55 = { simd_kscheme_4bit_cu_unpack_55<uint32_t>, 12, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_56 = { simd_kscheme_4bit_cu_unpack_56<uint32_t>, 20, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_57 = { simd_kscheme_4bit_cu_unpack_57<uint32_t>, 16, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_58 = { simd_kscheme_4bit_cu_unpack_58<uint32_t>, 16, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_59 = { simd_kscheme_4bit_cu_unpack_59<uint32_t>, 12, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_60 = { simd_kscheme_4bit_cu_unpack_60<uint32_t>, 16, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_61 = { simd_kscheme_4bit_cu_unpack_61<uint32_t>, 12, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_62 = { simd_kscheme_4bit_cu_unpack_62<uint32_t>, 12, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_63 = { simd_kscheme_4bit_cu_unpack_63<uint32_t>, 8, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_64 = { simd_kscheme_4bit_cu_unpack_64<uint32_t>, 28, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_65 = { simd_kscheme_4bit_cu_unpack_65<uint32_t>, 24, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_66 = { simd_kscheme_4bit_cu_unpack_66<uint32_t>, 24, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_67 = { simd_kscheme_4bit_cu_unpack_67<uint32_t>, 20, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_68 = { simd_kscheme_4bit_cu_unpack_68<uint32_t>, 24, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_69 = { simd_kscheme_4bit_cu_unpack_69<uint32_t>, 20, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_70 = { simd_kscheme_4bit_cu_unpack_70<uint32_t>, 20, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_71 = { simd_kscheme_4bit_cu_unpack_71<uint32_t>, 16, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_72 = { simd_kscheme_4bit_cu_unpack_72<uint32_t>, 24, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_73 = { simd_kscheme_4bit_cu_unpack_73<uint32_t>, 20, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_74 = { simd_kscheme_4bit_cu_unpack_74<uint32_t>, 20, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_75 = { simd_kscheme_4bit_cu_unpack_75<uint32_t>, 16, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_76 = { simd_kscheme_4bit_cu_unpack_76<uint32_t>, 20, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_77 = { simd_kscheme_4bit_cu_unpack_77<uint32_t>, 16, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_78 = { simd_kscheme_4bit_cu_unpack_78<uint32_t>, 16, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_79 = { simd_kscheme_4bit_cu_unpack_79<uint32_t>, 12, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_80 = { simd_kscheme_4bit_cu_unpack_80<uint32_t>, 24, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_81 = { simd_kscheme_4bit_cu_unpack_81<uint32_t>, 20, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_82 = { simd_kscheme_4bit_cu_unpack_82<uint32_t>, 20, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_83 = { simd_kscheme_4bit_cu_unpack_83<uint32_t>, 16, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_84 = { simd_kscheme_4bit_cu_unpack_84<uint32_t>, 20, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_85 = { simd_kscheme_4bit_cu_unpack_85<uint32_t>, 16, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_86 = { simd_kscheme_4bit_cu_unpack_86<uint32_t>, 16, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_87 = { simd_kscheme_4bit_cu_unpack_87<uint32_t>, 12, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_88 = { simd_kscheme_4bit_cu_unpack_88<uint32_t>, 20, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_89 = { simd_kscheme_4bit_cu_unpack_89<uint32_t>, 16, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_90 = { simd_kscheme_4bit_cu_unpack_90<uint32_t>, 16, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_91 = { simd_kscheme_4bit_cu_unpack_91<uint32_t>, 12, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_92 = { simd_kscheme_4bit_cu_unpack_92<uint32_t>, 16, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_93 = { simd_kscheme_4bit_cu_unpack_93<uint32_t>, 12, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_94 = { simd_kscheme_4bit_cu_unpack_94<uint32_t>, 12, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_95 = { simd_kscheme_4bit_cu_unpack_95<uint32_t>, 8, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_96 = { simd_kscheme_4bit_cu_unpack_96<uint32_t>, 24, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_97 = { simd_kscheme_4bit_cu_unpack_97<uint32_t>, 20, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_98 = { simd_kscheme_4bit_cu_unpack_98<uint32_t>, 20, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_99 = { simd_kscheme_4bit_cu_unpack_99<uint32_t>, 16, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_100 = { simd_kscheme_4bit_cu_unpack_100<uint32_t>, 20, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_101 = { simd_kscheme_4bit_cu_unpack_101<uint32_t>, 16, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_102 = { simd_kscheme_4bit_cu_unpack_102<uint32_t>, 16, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_103 = { simd_kscheme_4bit_cu_unpack_103<uint32_t>, 12, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_104 = { simd_kscheme_4bit_cu_unpack_104<uint32_t>, 20, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_105 = { simd_kscheme_4bit_cu_unpack_105<uint32_t>, 16, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_106 = { simd_kscheme_4bit_cu_unpack_106<uint32_t>, 16, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_107 = { simd_kscheme_4bit_cu_unpack_107<uint32_t>, 12, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_108 = { simd_kscheme_4bit_cu_unpack_108<uint32_t>, 16, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_109 = { simd_kscheme_4bit_cu_unpack_109<uint32_t>, 12, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_110 = { simd_kscheme_4bit_cu_unpack_110<uint32_t>, 12, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_111 = { simd_kscheme_4bit_cu_unpack_111<uint32_t>, 8, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_112 = { simd_kscheme_4bit_cu_unpack_112<uint32_t>, 20, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_113 = { simd_kscheme_4bit_cu_unpack_113<uint32_t>, 16, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_114 = { simd_kscheme_4bit_cu_unpack_114<uint32_t>, 16, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_115 = { simd_kscheme_4bit_cu_unpack_115<uint32_t>, 12, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_116 = { simd_kscheme_4bit_cu_unpack_116<uint32_t>, 16, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_117 = { simd_kscheme_4bit_cu_unpack_117<uint32_t>, 12, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_118 = { simd_kscheme_4bit_cu_unpack_118<uint32_t>, 12, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_119 = { simd_kscheme_4bit_cu_unpack_119<uint32_t>, 8, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_120 = { simd_kscheme_4bit_cu_unpack_120<uint32_t>, 16, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_121 = { simd_kscheme_4bit_cu_unpack_121<uint32_t>, 12, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_122 = { simd_kscheme_4bit_cu_unpack_122<uint32_t>, 12, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_123 = { simd_kscheme_4bit_cu_unpack_123<uint32_t>, 8, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_124 = { simd_kscheme_4bit_cu_unpack_124<uint32_t>, 12, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_125 = { simd_kscheme_4bit_cu_unpack_125<uint32_t>, 8, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_126 = { simd_kscheme_4bit_cu_unpack_126<uint32_t>, 8, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_127 = { simd_kscheme_4bit_cu_unpack_127<uint32_t>, 4, 0, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_128 = { simd_kscheme_4bit_cu_unpack_128<uint32_t>, 28, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_129 = { simd_kscheme_4bit_cu_unpack_129<uint32_t>, 24, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_130 = { simd_kscheme_4bit_cu_unpack_130<uint32_t>, 24, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_131 = { simd_kscheme_4bit_cu_unpack_131<uint32_t>, 20, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_132 = { simd_kscheme_4bit_cu_unpack_132<uint32_t>, 24, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_133 = { simd_kscheme_4bit_cu_unpack_133<uint32_t>, 20, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_134 = { simd_kscheme_4bit_cu_unpack_134<uint32_t>, 20, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_135 = { simd_kscheme_4bit_cu_unpack_135<uint32_t>, 16, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_136 = { simd_kscheme_4bit_cu_unpack_136<uint32_t>, 24, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_137 = { simd_kscheme_4bit_cu_unpack_137<uint32_t>, 20, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_138 = { simd_kscheme_4bit_cu_unpack_138<uint32_t>, 20, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_139 = { simd_kscheme_4bit_cu_unpack_139<uint32_t>, 16, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_140 = { simd_kscheme_4bit_cu_unpack_140<uint32_t>, 20, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_141 = { simd_kscheme_4bit_cu_unpack_141<uint32_t>, 16, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_142 = { simd_kscheme_4bit_cu_unpack_142<uint32_t>, 16, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_143 = { simd_kscheme_4bit_cu_unpack_143<uint32_t>, 12, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_144 = { simd_kscheme_4bit_cu_unpack_144<uint32_t>, 24, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_145 = { simd_kscheme_4bit_cu_unpack_145<uint32_t>, 20, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_146 = { simd_kscheme_4bit_cu_unpack_146<uint32_t>, 20, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_147 = { simd_kscheme_4bit_cu_unpack_147<uint32_t>, 16, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_148 = { simd_kscheme_4bit_cu_unpack_148<uint32_t>, 20, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_149 = { simd_kscheme_4bit_cu_unpack_149<uint32_t>, 16, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_150 = { simd_kscheme_4bit_cu_unpack_150<uint32_t>, 16, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_151 = { simd_kscheme_4bit_cu_unpack_151<uint32_t>, 12, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_152 = { simd_kscheme_4bit_cu_unpack_152<uint32_t>, 20, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_153 = { simd_kscheme_4bit_cu_unpack_153<uint32_t>, 16, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_154 = { simd_kscheme_4bit_cu_unpack_154<uint32_t>, 16, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_155 = { simd_kscheme_4bit_cu_unpack_155<uint32_t>, 12, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_156 = { simd_kscheme_4bit_cu_unpack_156<uint32_t>, 16, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_157 = { simd_kscheme_4bit_cu_unpack_157<uint32_t>, 12, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_158 = { simd_kscheme_4bit_cu_unpack_158<uint32_t>, 12, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_159 = { simd_kscheme_4bit_cu_unpack_159<uint32_t>, 8, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_160 = { simd_kscheme_4bit_cu_unpack_160<uint32_t>, 24, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_161 = { simd_kscheme_4bit_cu_unpack_161<uint32_t>, 20, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_162 = { simd_kscheme_4bit_cu_unpack_162<uint32_t>, 20, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_163 = { simd_kscheme_4bit_cu_unpack_163<uint32_t>, 16, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_164 = { simd_kscheme_4bit_cu_unpack_164<uint32_t>, 20, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_165 = { simd_kscheme_4bit_cu_unpack_165<uint32_t>, 16, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_166 = { simd_kscheme_4bit_cu_unpack_166<uint32_t>, 16, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_167 = { simd_kscheme_4bit_cu_unpack_167<uint32_t>, 12, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_168 = { simd_kscheme_4bit_cu_unpack_168<uint32_t>, 20, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_169 = { simd_kscheme_4bit_cu_unpack_169<uint32_t>, 16, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_170 = { simd_kscheme_4bit_cu_unpack_170<uint32_t>, 16, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_171 = { simd_kscheme_4bit_cu_unpack_171<uint32_t>, 12, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_172 = { simd_kscheme_4bit_cu_unpack_172<uint32_t>, 16, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_173 = { simd_kscheme_4bit_cu_unpack_173<uint32_t>, 12, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_174 = { simd_kscheme_4bit_cu_unpack_174<uint32_t>, 12, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_175 = { simd_kscheme_4bit_cu_unpack_175<uint32_t>, 8, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_176 = { simd_kscheme_4bit_cu_unpack_176<uint32_t>, 20, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_177 = { simd_kscheme_4bit_cu_unpack_177<uint32_t>, 16, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_178 = { simd_kscheme_4bit_cu_unpack_178<uint32_t>, 16, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_179 = { simd_kscheme_4bit_cu_unpack_179<uint32_t>, 12, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_180 = { simd_kscheme_4bit_cu_unpack_180<uint32_t>, 16, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_181 = { simd_kscheme_4bit_cu_unpack_181<uint32_t>, 12, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_182 = { simd_kscheme_4bit_cu_unpack_182<uint32_t>, 12, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_183 = { simd_kscheme_4bit_cu_unpack_183<uint32_t>, 8, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_184 = { simd_kscheme_4bit_cu_unpack_184<uint32_t>, 16, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_185 = { simd_kscheme_4bit_cu_unpack_185<uint32_t>, 12, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_186 = { simd_kscheme_4bit_cu_unpack_186<uint32_t>, 12, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_187 = { simd_kscheme_4bit_cu_unpack_187<uint32_t>, 8, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_188 = { simd_kscheme_4bit_cu_unpack_188<uint32_t>, 12, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_189 = { simd_kscheme_4bit_cu_unpack_189<uint32_t>, 8, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_190 = { simd_kscheme_4bit_cu_unpack_190<uint32_t>, 8, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_191 = { simd_kscheme_4bit_cu_unpack_191<uint32_t>, 4, 1, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_192 = { simd_kscheme_4bit_cu_unpack_192<uint32_t>, 24, 2, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_193 = { simd_kscheme_4bit_cu_unpack_193<uint32_t>, 20, 2, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_194 = { simd_kscheme_4bit_cu_unpack_194<uint32_t>, 20, 2, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_195 = { simd_kscheme_4bit_cu_unpack_195<uint32_t>, 16, 2, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_196 = { simd_kscheme_4bit_cu_unpack_196<uint32_t>, 20, 2, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_197 = { simd_kscheme_4bit_cu_unpack_197<uint32_t>, 16, 2, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_198 = { simd_kscheme_4bit_cu_unpack_198<uint32_t>, 16, 2, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_199 = { simd_kscheme_4bit_cu_unpack_199<uint32_t>, 12, 2, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_200 = { simd_kscheme_4bit_cu_unpack_200<uint32_t>, 20, 2, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_201 = { simd_kscheme_4bit_cu_unpack_201<uint32_t>, 16, 2, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_202 = { simd_kscheme_4bit_cu_unpack_202<uint32_t>, 16, 2, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_203 = { simd_kscheme_4bit_cu_unpack_203<uint32_t>, 12, 2, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_204 = { simd_kscheme_4bit_cu_unpack_204<uint32_t>, 16, 2, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_205 = { simd_kscheme_4bit_cu_unpack_205<uint32_t>, 12, 2, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_206 = { simd_kscheme_4bit_cu_unpack_206<uint32_t>, 12, 2, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_207 = { simd_kscheme_4bit_cu_unpack_207<uint32_t>, 8, 2, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_208 = { simd_kscheme_4bit_cu_unpack_208<uint32_t>, 20, 2, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_209 = { simd_kscheme_4bit_cu_unpack_209<uint32_t>, 16, 2, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_210 = { simd_kscheme_4bit_cu_unpack_210<uint32_t>, 16, 2, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_211 = { simd_kscheme_4bit_cu_unpack_211<uint32_t>, 12, 2, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_212 = { simd_kscheme_4bit_cu_unpack_212<uint32_t>, 16, 2, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_213 = { simd_kscheme_4bit_cu_unpack_213<uint32_t>, 12, 2, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_214 = { simd_kscheme_4bit_cu_unpack_214<uint32_t>, 12, 2, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_215 = { simd_kscheme_4bit_cu_unpack_215<uint32_t>, 8, 2, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_216 = { simd_kscheme_4bit_cu_unpack_216<uint32_t>, 16, 2, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_217 = { simd_kscheme_4bit_cu_unpack_217<uint32_t>, 12, 2, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_218 = { simd_kscheme_4bit_cu_unpack_218<uint32_t>, 12, 2, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_219 = { simd_kscheme_4bit_cu_unpack_219<uint32_t>, 8, 2, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_220 = { simd_kscheme_4bit_cu_unpack_220<uint32_t>, 12, 2, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_221 = { simd_kscheme_4bit_cu_unpack_221<uint32_t>, 8, 2, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_222 = { simd_kscheme_4bit_cu_unpack_222<uint32_t>, 8, 2, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_223 = { simd_kscheme_4bit_cu_unpack_223<uint32_t>, 4, 2, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_224 = { simd_kscheme_4bit_cu_unpack_224<uint32_t>, 20, 3, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_225 = { simd_kscheme_4bit_cu_unpack_225<uint32_t>, 16, 3, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_226 = { simd_kscheme_4bit_cu_unpack_226<uint32_t>, 16, 3, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_227 = { simd_kscheme_4bit_cu_unpack_227<uint32_t>, 12, 3, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_228 = { simd_kscheme_4bit_cu_unpack_228<uint32_t>, 16, 3, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_229 = { simd_kscheme_4bit_cu_unpack_229<uint32_t>, 12, 3, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_230 = { simd_kscheme_4bit_cu_unpack_230<uint32_t>, 12, 3, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_231 = { simd_kscheme_4bit_cu_unpack_231<uint32_t>, 8, 3, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_232 = { simd_kscheme_4bit_cu_unpack_232<uint32_t>, 16, 3, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_233 = { simd_kscheme_4bit_cu_unpack_233<uint32_t>, 12, 3, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_234 = { simd_kscheme_4bit_cu_unpack_234<uint32_t>, 12, 3, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_235 = { simd_kscheme_4bit_cu_unpack_235<uint32_t>, 8, 3, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_236 = { simd_kscheme_4bit_cu_unpack_236<uint32_t>, 12, 3, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_237 = { simd_kscheme_4bit_cu_unpack_237<uint32_t>, 8, 3, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_238 = { simd_kscheme_4bit_cu_unpack_238<uint32_t>, 8, 3, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_239 = { simd_kscheme_4bit_cu_unpack_239<uint32_t>, 4, 3, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_240 = { simd_kscheme_4bit_cu_unpack_240<uint32_t>, 16, 4, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_241 = { simd_kscheme_4bit_cu_unpack_241<uint32_t>, 12, 4, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_242 = { simd_kscheme_4bit_cu_unpack_242<uint32_t>, 12, 4, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_243 = { simd_kscheme_4bit_cu_unpack_243<uint32_t>, 8, 4, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_244 = { simd_kscheme_4bit_cu_unpack_244<uint32_t>, 12, 4, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_245 = { simd_kscheme_4bit_cu_unpack_245<uint32_t>, 8, 4, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_246 = { simd_kscheme_4bit_cu_unpack_246<uint32_t>, 8, 4, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_247 = { simd_kscheme_4bit_cu_unpack_247<uint32_t>, 4, 4, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_248 = { simd_kscheme_4bit_cu_unpack_248<uint32_t>, 12, 5, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_249 = { simd_kscheme_4bit_cu_unpack_249<uint32_t>, 8, 5, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_250 = { simd_kscheme_4bit_cu_unpack_250<uint32_t>, 8, 5, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_251 = { simd_kscheme_4bit_cu_unpack_251<uint32_t>, 4, 5, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_252 = { simd_kscheme_4bit_cu_unpack_252<uint32_t>, 8, 6, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_253 = { simd_kscheme_4bit_cu_unpack_253<uint32_t>, 4, 6, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_254 = { simd_kscheme_4bit_cu_unpack_254<uint32_t>, 4, 7, true };
static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfo_255 = { simd_kscheme_4bit_cu_unpack_255<uint32_t>, 0, 8, false };

static SIMDK4CUUnpackInfo SIMDK4CUUnpackInfoArr[256] = {
			SIMDK4CUUnpackInfo_0, SIMDK4CUUnpackInfo_1, SIMDK4CUUnpackInfo_2, SIMDK4CUUnpackInfo_3,
			SIMDK4CUUnpackInfo_4, SIMDK4CUUnpackInfo_5, SIMDK4CUUnpackInfo_6, SIMDK4CUUnpackInfo_7,
			SIMDK4CUUnpackInfo_8, SIMDK4CUUnpackInfo_9, SIMDK4CUUnpackInfo_10, SIMDK4CUUnpackInfo_11,
			SIMDK4CUUnpackInfo_12, SIMDK4CUUnpackInfo_13, SIMDK4CUUnpackInfo_14, SIMDK4CUUnpackInfo_15,
			SIMDK4CUUnpackInfo_16, SIMDK4CUUnpackInfo_17, SIMDK4CUUnpackInfo_18, SIMDK4CUUnpackInfo_19,
			SIMDK4CUUnpackInfo_20, SIMDK4CUUnpackInfo_21, SIMDK4CUUnpackInfo_22, SIMDK4CUUnpackInfo_23,
			SIMDK4CUUnpackInfo_24, SIMDK4CUUnpackInfo_25, SIMDK4CUUnpackInfo_26, SIMDK4CUUnpackInfo_27,
			SIMDK4CUUnpackInfo_28, SIMDK4CUUnpackInfo_29, SIMDK4CUUnpackInfo_30, SIMDK4CUUnpackInfo_31,
			SIMDK4CUUnpackInfo_32, SIMDK4CUUnpackInfo_33, SIMDK4CUUnpackInfo_34, SIMDK4CUUnpackInfo_35,
			SIMDK4CUUnpackInfo_36, SIMDK4CUUnpackInfo_37, SIMDK4CUUnpackInfo_38, SIMDK4CUUnpackInfo_39,
			SIMDK4CUUnpackInfo_40, SIMDK4CUUnpackInfo_41, SIMDK4CUUnpackInfo_42, SIMDK4CUUnpackInfo_43,
			SIMDK4CUUnpackInfo_44, SIMDK4CUUnpackInfo_45, SIMDK4CUUnpackInfo_46, SIMDK4CUUnpackInfo_47,
			SIMDK4CUUnpackInfo_48, SIMDK4CUUnpackInfo_49, SIMDK4CUUnpackInfo_50, SIMDK4CUUnpackInfo_51,
			SIMDK4CUUnpackInfo_52, SIMDK4CUUnpackInfo_53, SIMDK4CUUnpackInfo_54, SIMDK4CUUnpackInfo_55,
			SIMDK4CUUnpackInfo_56, SIMDK4CUUnpackInfo_57, SIMDK4CUUnpackInfo_58, SIMDK4CUUnpackInfo_59,
			SIMDK4CUUnpackInfo_60, SIMDK4CUUnpackInfo_61, SIMDK4CUUnpackInfo_62, SIMDK4CUUnpackInfo_63,
			SIMDK4CUUnpackInfo_64, SIMDK4CUUnpackInfo_65, SIMDK4CUUnpackInfo_66, SIMDK4CUUnpackInfo_67,
			SIMDK4CUUnpackInfo_68, SIMDK4CUUnpackInfo_69, SIMDK4CUUnpackInfo_70, SIMDK4CUUnpackInfo_71,
			SIMDK4CUUnpackInfo_72, SIMDK4CUUnpackInfo_73, SIMDK4CUUnpackInfo_74, SIMDK4CUUnpackInfo_75,
			SIMDK4CUUnpackInfo_76, SIMDK4CUUnpackInfo_77, SIMDK4CUUnpackInfo_78, SIMDK4CUUnpackInfo_79,
			SIMDK4CUUnpackInfo_80, SIMDK4CUUnpackInfo_81, SIMDK4CUUnpackInfo_82, SIMDK4CUUnpackInfo_83,
			SIMDK4CUUnpackInfo_84, SIMDK4CUUnpackInfo_85, SIMDK4CUUnpackInfo_86, SIMDK4CUUnpackInfo_87,
			SIMDK4CUUnpackInfo_88, SIMDK4CUUnpackInfo_89, SIMDK4CUUnpackInfo_90, SIMDK4CUUnpackInfo_91,
			SIMDK4CUUnpackInfo_92, SIMDK4CUUnpackInfo_93, SIMDK4CUUnpackInfo_94, SIMDK4CUUnpackInfo_95,
			SIMDK4CUUnpackInfo_96, SIMDK4CUUnpackInfo_97, SIMDK4CUUnpackInfo_98, SIMDK4CUUnpackInfo_99,
			SIMDK4CUUnpackInfo_100, SIMDK4CUUnpackInfo_101, SIMDK4CUUnpackInfo_102, SIMDK4CUUnpackInfo_103,
			SIMDK4CUUnpackInfo_104, SIMDK4CUUnpackInfo_105, SIMDK4CUUnpackInfo_106, SIMDK4CUUnpackInfo_107,
			SIMDK4CUUnpackInfo_108, SIMDK4CUUnpackInfo_109, SIMDK4CUUnpackInfo_110, SIMDK4CUUnpackInfo_111,
			SIMDK4CUUnpackInfo_112, SIMDK4CUUnpackInfo_113, SIMDK4CUUnpackInfo_114, SIMDK4CUUnpackInfo_115,
			SIMDK4CUUnpackInfo_116, SIMDK4CUUnpackInfo_117, SIMDK4CUUnpackInfo_118, SIMDK4CUUnpackInfo_119,
			SIMDK4CUUnpackInfo_120, SIMDK4CUUnpackInfo_121, SIMDK4CUUnpackInfo_122, SIMDK4CUUnpackInfo_123,
			SIMDK4CUUnpackInfo_124, SIMDK4CUUnpackInfo_125, SIMDK4CUUnpackInfo_126, SIMDK4CUUnpackInfo_127,
			SIMDK4CUUnpackInfo_128, SIMDK4CUUnpackInfo_129, SIMDK4CUUnpackInfo_130, SIMDK4CUUnpackInfo_131,
			SIMDK4CUUnpackInfo_132, SIMDK4CUUnpackInfo_133, SIMDK4CUUnpackInfo_134, SIMDK4CUUnpackInfo_135,
			SIMDK4CUUnpackInfo_136, SIMDK4CUUnpackInfo_137, SIMDK4CUUnpackInfo_138, SIMDK4CUUnpackInfo_139,
			SIMDK4CUUnpackInfo_140, SIMDK4CUUnpackInfo_141, SIMDK4CUUnpackInfo_142, SIMDK4CUUnpackInfo_143,
			SIMDK4CUUnpackInfo_144, SIMDK4CUUnpackInfo_145, SIMDK4CUUnpackInfo_146, SIMDK4CUUnpackInfo_147,
			SIMDK4CUUnpackInfo_148, SIMDK4CUUnpackInfo_149, SIMDK4CUUnpackInfo_150, SIMDK4CUUnpackInfo_151,
			SIMDK4CUUnpackInfo_152, SIMDK4CUUnpackInfo_153, SIMDK4CUUnpackInfo_154, SIMDK4CUUnpackInfo_155,
			SIMDK4CUUnpackInfo_156, SIMDK4CUUnpackInfo_157, SIMDK4CUUnpackInfo_158, SIMDK4CUUnpackInfo_159,
			SIMDK4CUUnpackInfo_160, SIMDK4CUUnpackInfo_161, SIMDK4CUUnpackInfo_162, SIMDK4CUUnpackInfo_163,
			SIMDK4CUUnpackInfo_164, SIMDK4CUUnpackInfo_165, SIMDK4CUUnpackInfo_166, SIMDK4CUUnpackInfo_167,
			SIMDK4CUUnpackInfo_168, SIMDK4CUUnpackInfo_169, SIMDK4CUUnpackInfo_170, SIMDK4CUUnpackInfo_171,
			SIMDK4CUUnpackInfo_172, SIMDK4CUUnpackInfo_173, SIMDK4CUUnpackInfo_174, SIMDK4CUUnpackInfo_175,
			SIMDK4CUUnpackInfo_176, SIMDK4CUUnpackInfo_177, SIMDK4CUUnpackInfo_178, SIMDK4CUUnpackInfo_179,
			SIMDK4CUUnpackInfo_180, SIMDK4CUUnpackInfo_181, SIMDK4CUUnpackInfo_182, SIMDK4CUUnpackInfo_183,
			SIMDK4CUUnpackInfo_184, SIMDK4CUUnpackInfo_185, SIMDK4CUUnpackInfo_186, SIMDK4CUUnpackInfo_187,
			SIMDK4CUUnpackInfo_188, SIMDK4CUUnpackInfo_189, SIMDK4CUUnpackInfo_190, SIMDK4CUUnpackInfo_191,
			SIMDK4CUUnpackInfo_192, SIMDK4CUUnpackInfo_193, SIMDK4CUUnpackInfo_194, SIMDK4CUUnpackInfo_195,
			SIMDK4CUUnpackInfo_196, SIMDK4CUUnpackInfo_197, SIMDK4CUUnpackInfo_198, SIMDK4CUUnpackInfo_199,
			SIMDK4CUUnpackInfo_200, SIMDK4CUUnpackInfo_201, SIMDK4CUUnpackInfo_202, SIMDK4CUUnpackInfo_203,
			SIMDK4CUUnpackInfo_204, SIMDK4CUUnpackInfo_205, SIMDK4CUUnpackInfo_206, SIMDK4CUUnpackInfo_207,
			SIMDK4CUUnpackInfo_208, SIMDK4CUUnpackInfo_209, SIMDK4CUUnpackInfo_210, SIMDK4CUUnpackInfo_211,
			SIMDK4CUUnpackInfo_212, SIMDK4CUUnpackInfo_213, SIMDK4CUUnpackInfo_214, SIMDK4CUUnpackInfo_215,
			SIMDK4CUUnpackInfo_216, SIMDK4CUUnpackInfo_217, SIMDK4CUUnpackInfo_218, SIMDK4CUUnpackInfo_219,
			SIMDK4CUUnpackInfo_220, SIMDK4CUUnpackInfo_221, SIMDK4CUUnpackInfo_222, SIMDK4CUUnpackInfo_223,
			SIMDK4CUUnpackInfo_224, SIMDK4CUUnpackInfo_225, SIMDK4CUUnpackInfo_226, SIMDK4CUUnpackInfo_227,
			SIMDK4CUUnpackInfo_228, SIMDK4CUUnpackInfo_229, SIMDK4CUUnpackInfo_230, SIMDK4CUUnpackInfo_231,
			SIMDK4CUUnpackInfo_232, SIMDK4CUUnpackInfo_233, SIMDK4CUUnpackInfo_234, SIMDK4CUUnpackInfo_235,
			SIMDK4CUUnpackInfo_236, SIMDK4CUUnpackInfo_237, SIMDK4CUUnpackInfo_238, SIMDK4CUUnpackInfo_239,
			SIMDK4CUUnpackInfo_240, SIMDK4CUUnpackInfo_241, SIMDK4CUUnpackInfo_242, SIMDK4CUUnpackInfo_243,
			SIMDK4CUUnpackInfo_244, SIMDK4CUUnpackInfo_245, SIMDK4CUUnpackInfo_246, SIMDK4CUUnpackInfo_247,
			SIMDK4CUUnpackInfo_248, SIMDK4CUUnpackInfo_249, SIMDK4CUUnpackInfo_250, SIMDK4CUUnpackInfo_251,
			SIMDK4CUUnpackInfo_252, SIMDK4CUUnpackInfo_253, SIMDK4CUUnpackInfo_254, SIMDK4CUUnpackInfo_255
};

}
}

#endif

#endif /* SIMD_KSCHEME_4BIT_CU_UNPACK_HPP_ */

/*
// metacode:
#include <iostream>
#include <sstream>
#include <stdint.h>
#include <string>
#include <stdlib.h>

using namespace std;

string INFO_NAME = "SIMDK4CUUnpackInfo";
string FUNC_NAME_PREFIX = "simd_kscheme_4bit_cu_unpack";
string TRIPLE_TAB = "\t\t\t";
string QUOTE_END_LINE = "\\n\"\n";
int BEG_REG_IDX = 7;

int LAST_GROUP_STATUS_REG_IDX = 12;
int LAST_GROUP_DATA_REG_IDX = 13;
int GROUP_OFFSET_REG_IDX = 14;
int GROUP_MASK_REG_IDX = 15;

string funcStr = "";
string unpackInfoStr = "";
string unpackInfoArrStr = "";

string Int2Str(int n) {
	ostringstream oss;
	oss << n;
	return oss.str();
}

// we assume the overal codeword is 32 bits at most!
void printFunc(const uint32_t *bitCount, int intNum, int statusGen, int funcIdx) {
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
	int srcMemCount = (totalBitCount + 31) / 32;	//should be exactly 1!

	//step 1: load all codeword need to xmm
	for (int i=0; i<srcMemCount; i++) {
		resStr += TRIPLE_TAB + "\"movdqu %" + Int2Str(desMemCount + i)
				+ ",%%xmm" + Int2Str(BEG_REG_IDX+i) + QUOTE_END_LINE;
	}

	//step 2: decode 4 int per time and store
	int TMP_REG_IDX = BEG_REG_IDX + srcMemCount;
	int tmpBitOffset = 0;

	//process bits from last group(i.e. first integer in current group)!
	//resStr += TRIPLE_TAB + "\"movd %" + Int2Str(desMemCount + 1)
	//			+ ",%%xmm" + Int2Str(LAST_GROUP_STATUS_REG_IDX) + QUOTE_END_LINE;
	resStr += TRIPLE_TAB + "\"movdqa %%xmm" + Int2Str(BEG_REG_IDX + begSrcIdxPerInt[0]) + ",%%xmm" + Int2Str(TMP_REG_IDX) + QUOTE_END_LINE;
	if (bitCount[0] < 32) {
		int andMaskRegIdx = (bitCount[0] >> 2) - 1;
		resStr += TRIPLE_TAB + "\"pand %%xmm" + Int2Str(andMaskRegIdx) + ",%%xmm" + Int2Str(TMP_REG_IDX) + QUOTE_END_LINE;
	}
	resStr += TRIPLE_TAB + "\"pslld %%xmm" + Int2Str(LAST_GROUP_STATUS_REG_IDX) + ",%%xmm" + Int2Str(TMP_REG_IDX) + QUOTE_END_LINE;
	resStr += TRIPLE_TAB + "\"por %%xmm" + Int2Str(LAST_GROUP_DATA_REG_IDX) + ",%%xmm" + Int2Str(TMP_REG_IDX) + QUOTE_END_LINE;
	resStr += TRIPLE_TAB + "\"movdqu %%xmm" + Int2Str(TMP_REG_IDX) + ",%" + Int2Str(0) + QUOTE_END_LINE;
	tmpBitOffset = (tmpBitOffset + bitCount[0]) % 32;

	for (int i=1; i<intNum; i++) {
		resStr += TRIPLE_TAB + "\"movdqa %%xmm" + Int2Str(BEG_REG_IDX + begSrcIdxPerInt[i]) + ",%%xmm" + Int2Str(TMP_REG_IDX) + QUOTE_END_LINE;
		if (tmpBitOffset > 0) {
			resStr += TRIPLE_TAB + "\"psrld $" + Int2Str(tmpBitOffset) + ",%%xmm" + Int2Str(TMP_REG_IDX) + QUOTE_END_LINE;
		}

		if (bitCount[i] < 32) {
			int andMaskRegIdx = (bitCount[i]>>2) - 1;
			resStr += TRIPLE_TAB + "\"pand %%xmm" + Int2Str(andMaskRegIdx) + ",%%xmm" + Int2Str(TMP_REG_IDX) + QUOTE_END_LINE;
		}
		resStr += TRIPLE_TAB + "\"movdqu %%xmm" + Int2Str(TMP_REG_IDX) + ",%" + Int2Str(i) + QUOTE_END_LINE;

		tmpBitOffset = (tmpBitOffset + bitCount[i]) % 32;

	}

	//presave the incomplete data and the new status
	if (statusGen == 0) {
		resStr += TRIPLE_TAB + "\"pxor %%xmm" + Int2Str(LAST_GROUP_DATA_REG_IDX) + ",%%xmm" + Int2Str(LAST_GROUP_DATA_REG_IDX) + QUOTE_END_LINE;
		resStr += TRIPLE_TAB + "\"pxor %%xmm" + Int2Str(LAST_GROUP_STATUS_REG_IDX) + ",%%xmm" + Int2Str(LAST_GROUP_STATUS_REG_IDX) + QUOTE_END_LINE;
	}
	else {
		resStr += TRIPLE_TAB + "\"movdqa %%xmm" + Int2Str(BEG_REG_IDX) + ",%%xmm" + Int2Str(LAST_GROUP_DATA_REG_IDX) + QUOTE_END_LINE;
		int shiftRight = 32 - (statusGen << 2);
		resStr += TRIPLE_TAB + "\"psrld $" + Int2Str(shiftRight) + ",%%xmm" + Int2Str(LAST_GROUP_DATA_REG_IDX) + QUOTE_END_LINE;
		resStr += TRIPLE_TAB + "\"movl $" + Int2Str(statusGen << 2) + ",%%eax" + QUOTE_END_LINE;
		resStr += TRIPLE_TAB + "\"movd %%eax" + ",%%xmm" + Int2Str(LAST_GROUP_STATUS_REG_IDX) + QUOTE_END_LINE;
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

	resStr += TRIPLE_TAB + ":\"memory\", \"eax\");\n";
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

//for (uint32_t lastStatus = 0; lastStatus < 4; lastStatus ++) {

	for (uint32_t i=0; i<256; i++) {
		uint32_t infoIdx = i;

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
				if (intBitNum > 8) {
					validGroup = false;	//a valid group can only hold integers less than 4bytes
				}

				lenArr[intNum] = intBitNum * 4;
				offsetArr[intNum] = (curBitIdx - intBitNum) * 4;	//offset starts from 0

				maskArr[intNum] = (1LL << (intBitNum * 4)) - 1;
				intNum ++;
			}
			firstGroupInt = false;
		}

		if (!validUnary) {	//last int of the group doesn't stop with 0, generate a remainder status
			statusGen = intBitNum;
		}

		if (!validGroup) {
			intNum = 0;
		}

		if (intNum == 0) {
			validGroup = false;	//a valid group should represent at least one integer
		}

		printFunc(lenArr, intNum, statusGen, infoIdx);

		//output
		//output
		unpackInfoStr += "static " + INFO_NAME + " " + INFO_NAME + "_" + Int2Str(infoIdx) + " = { ";
		unpackInfoStr += FUNC_NAME_PREFIX + "_" + Int2Str(infoIdx) + "<uint32_t>, ";
		unpackInfoStr += Int2Str(intNum << 2) + ", ";
		unpackInfoStr += Int2Str(statusGen) + ", ";
		unpackInfoStr += (validGroup ? "true" : "false");
		unpackInfoStr += " };\n";
	}

//}

	cout << endl;
	cout << unpackInfoStr;
	cout << endl;
	printUnpackInfoArr();
	cout << unpackInfoArrStr;

	return 0;
}
 */
