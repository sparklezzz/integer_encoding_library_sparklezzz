/*
 * simd_kscheme_1bit_cu_unpack.hpp
 *
 *  Created on: 2013-6-9
 *      Author: zxd
 */

#ifndef SIMD_KSCHEME_1BIT_CU_UNPACK_HPP_
#define SIMD_KSCHEME_1BIT_CU_UNPACK_HPP_

#ifdef USE_SSE_INSTRUCTION

#include <stdint.h>

namespace paradise {
namespace index {

struct SIMDK1CUUnpackInfo{
	void (*m_subFunc)(uint32_t *des, const uint32_t *src);
	uint8_t m_intNum;
	uint8_t m_statusGen;
};

static const struct kscheme_1bit_cu_and_0{
uint32_t a[4];
}kscheme_1bit_cu_and_0 __attribute__((aligned(16))) = {{0x1,0x1,0x1,0x1},};
static const struct kscheme_1bit_cu_and_1{
uint32_t a[4];
}kscheme_1bit_cu_and_1 __attribute__((aligned(16))) = {{0x3,0x3,0x3,0x3},};
static const struct kscheme_1bit_cu_and_2{
uint32_t a[4];
}kscheme_1bit_cu_and_2 __attribute__((aligned(16))) = {{0x7,0x7,0x7,0x7},};
static const struct kscheme_1bit_cu_and_3{
uint32_t a[4];
}kscheme_1bit_cu_and_3 __attribute__((aligned(16))) = {{0xf,0xf,0xf,0xf},};
static const struct kscheme_1bit_cu_and_4{
uint32_t a[4];
}kscheme_1bit_cu_and_4 __attribute__((aligned(16))) = {{0x1f,0x1f,0x1f,0x1f},};
static const struct kscheme_1bit_cu_and_5{
uint32_t a[4];
}kscheme_1bit_cu_and_5 __attribute__((aligned(16))) = {{0x3f,0x3f,0x3f,0x3f},};
static const struct kscheme_1bit_cu_and_6{
uint32_t a[4];
}kscheme_1bit_cu_and_6 __attribute__((aligned(16))) = {{0x7f,0x7f,0x7f,0x7f},};
static const struct kscheme_1bit_cu_and_7{
uint32_t a[4];
}kscheme_1bit_cu_and_7 __attribute__((aligned(16))) = {{0xff,0xff,0xff,0xff},};

static const struct kscheme_1bit_cu_val_31{
uint32_t a[4];
}kscheme_1bit_cu_val_31 __attribute__((aligned(16))) = {{0x1f,0x0,0x0,0x0},};
static const struct kscheme_1bit_cu_val_8{
uint32_t a[4];
}kscheme_1bit_cu_val_8 __attribute__((aligned(16))) = {{0x8,0x0,0x0,0x0},};

template<typename T>
void simd_kscheme_1bit_cu_unpack_prepare() {
	__asm__(
			"movdqa %0,%%xmm0\n"
			"movdqa %1,%%xmm1\n"
			"movdqa %2,%%xmm2\n"
			"movdqa %3,%%xmm3\n"
			"movdqa %4,%%xmm4\n"
			"movdqa %5,%%xmm5\n"
			"movdqa %6,%%xmm6\n"
			"movdqa %7,%%xmm7\n"
			"movdqa %8,%%xmm14\n"
			"movdqa %9,%%xmm15\n"
			"pxor %%xmm11,%%xmm11\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm13,%%xmm13\n"
			::"m"(kscheme_1bit_cu_and_0.a[0]),"m"(kscheme_1bit_cu_and_1.a[0]),"m"(kscheme_1bit_cu_and_2.a[0]),"m"(kscheme_1bit_cu_and_3.a[0]),"m"(kscheme_1bit_cu_and_4.a[0]),"m"(kscheme_1bit_cu_and_5.a[0]),"m"(kscheme_1bit_cu_and_6.a[0]),"m"(kscheme_1bit_cu_and_7.a[0]),"m"(kscheme_1bit_cu_val_31.a[0]),"m"(kscheme_1bit_cu_val_8.a[0])
			:"memory");
}

template<typename T>
void simd_kscheme_1bit_cu_unpack_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %8,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%5\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%6\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%7\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24]),"=m"(des[28])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%5\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%6\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%5\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%6\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%5\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_4(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%5\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%6\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_5(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%5\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_6(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%5\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_7(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm3,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_8(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%5\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%6\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_9(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%5\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_10(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%5\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_11(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_12(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%5\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_13(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_14(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm3,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_15(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm4,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_16(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%5\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%6\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_17(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%5\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_18(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%5\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_19(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_20(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%5\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_21(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_22(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_23(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm3,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_24(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%5\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_25(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_26(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_27(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_28(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm3,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_29(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm3,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_30(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm4,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_31(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm5,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_32(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%5\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%6\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_33(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%5\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_34(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%5\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_35(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_36(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%5\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_37(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_38(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_39(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm3,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_40(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%5\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_41(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_42(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_43(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_44(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_45(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_46(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm3,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_47(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm4,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_48(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%5\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_49(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_50(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_51(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_52(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_53(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_54(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_55(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm3,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_56(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm3,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_57(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm3,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_58(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm3,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_59(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm3,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_60(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm4,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_61(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm4,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_62(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm5,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_63(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm6,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $7,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_64(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%5\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%6\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_65(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%5\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_66(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%5\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_67(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_68(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%5\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_69(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_70(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_71(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm3,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_72(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%5\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_73(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_74(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_75(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_76(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_77(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_78(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm3,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_79(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm4,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_80(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%5\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_81(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_82(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_83(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_84(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_85(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_86(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_87(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm3,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_88(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_89(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_90(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_91(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_92(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm3,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_93(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm3,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_94(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm4,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_95(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm5,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_96(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%5\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_97(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_98(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_99(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_100(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_101(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_102(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_103(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm3,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_104(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_105(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_106(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_107(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_108(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_109(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_110(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm3,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_111(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm4,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_112(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm3,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_113(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm3,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_114(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm3,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_115(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm3,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_116(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm3,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_117(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm3,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_118(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm3,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_119(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm3,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm3,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_120(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm4,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_121(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm4,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_122(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm4,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_123(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm4,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_124(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm5,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_125(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm5,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_126(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm6,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_127(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm7,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"pxor %%xmm12,%%xmm12\n"
			"pxor %%xmm11,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_128(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %7,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%5\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%6\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20]),"=m"(des[24])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_129(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%5\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_130(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%5\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_131(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_132(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%5\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_133(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_134(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_135(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm3,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_136(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%5\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_137(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_138(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_139(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_140(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_141(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_142(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm3,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_143(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm4,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_144(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%5\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_145(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_146(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_147(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_148(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_149(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_150(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_151(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm3,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_152(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_153(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_154(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_155(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_156(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm3,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_157(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm3,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_158(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm4,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_159(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm5,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $6,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_160(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%5\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_161(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_162(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_163(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_164(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_165(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_166(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_167(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm3,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_168(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_169(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_170(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_171(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_172(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_173(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_174(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm3,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_175(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm4,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_176(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_177(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_178(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_179(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_180(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_181(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_182(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_183(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm3,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_184(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm3,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_185(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm3,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_186(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm3,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_187(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm3,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_188(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm4,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_189(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm4,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_190(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm5,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_191(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm6,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $7,%%xmm12\n"
			"movl $1,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_192(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %6,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%5\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $6,%%xmm12\n"
			"movl $2,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16]),"=m"(des[20])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_193(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $6,%%xmm12\n"
			"movl $2,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_194(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $6,%%xmm12\n"
			"movl $2,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_195(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $6,%%xmm12\n"
			"movl $2,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_196(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $6,%%xmm12\n"
			"movl $2,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_197(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $6,%%xmm12\n"
			"movl $2,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_198(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $6,%%xmm12\n"
			"movl $2,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_199(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm3,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $6,%%xmm12\n"
			"movl $2,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_200(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $6,%%xmm12\n"
			"movl $2,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_201(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $6,%%xmm12\n"
			"movl $2,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_202(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $6,%%xmm12\n"
			"movl $2,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_203(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $6,%%xmm12\n"
			"movl $2,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_204(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $6,%%xmm12\n"
			"movl $2,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_205(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $6,%%xmm12\n"
			"movl $2,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_206(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm3,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $6,%%xmm12\n"
			"movl $2,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_207(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm4,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $5,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $6,%%xmm12\n"
			"movl $2,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_208(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $6,%%xmm12\n"
			"movl $2,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_209(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $6,%%xmm12\n"
			"movl $2,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_210(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $6,%%xmm12\n"
			"movl $2,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_211(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $6,%%xmm12\n"
			"movl $2,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_212(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $6,%%xmm12\n"
			"movl $2,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_213(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $6,%%xmm12\n"
			"movl $2,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_214(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $6,%%xmm12\n"
			"movl $2,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_215(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm3,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $6,%%xmm12\n"
			"movl $2,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_216(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $6,%%xmm12\n"
			"movl $2,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_217(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $6,%%xmm12\n"
			"movl $2,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_218(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $6,%%xmm12\n"
			"movl $2,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_219(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $6,%%xmm12\n"
			"movl $2,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_220(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm3,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $6,%%xmm12\n"
			"movl $2,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_221(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm3,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $6,%%xmm12\n"
			"movl $2,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_222(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm4,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $6,%%xmm12\n"
			"movl $2,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_223(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm5,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $6,%%xmm12\n"
			"movl $2,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_224(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %5,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%4\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $5,%%xmm12\n"
			"movl $3,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12]),"=m"(des[16])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_225(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $5,%%xmm12\n"
			"movl $3,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_226(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $5,%%xmm12\n"
			"movl $3,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_227(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $5,%%xmm12\n"
			"movl $3,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_228(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $5,%%xmm12\n"
			"movl $3,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_229(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $5,%%xmm12\n"
			"movl $3,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_230(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $5,%%xmm12\n"
			"movl $3,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_231(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm3,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $4,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $5,%%xmm12\n"
			"movl $3,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_232(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $5,%%xmm12\n"
			"movl $3,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_233(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $5,%%xmm12\n"
			"movl $3,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_234(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $5,%%xmm12\n"
			"movl $3,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_235(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $5,%%xmm12\n"
			"movl $3,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_236(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $5,%%xmm12\n"
			"movl $3,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_237(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $5,%%xmm12\n"
			"movl $3,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_238(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm3,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $5,%%xmm12\n"
			"movl $3,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_239(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm4,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $5,%%xmm12\n"
			"movl $3,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_240(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%3\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $4,%%xmm12\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_241(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $4,%%xmm12\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_242(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $4,%%xmm12\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_243(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $3,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $4,%%xmm12\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_244(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $4,%%xmm12\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_245(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $4,%%xmm12\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_246(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $4,%%xmm12\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_247(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm3,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $4,%%xmm12\n"
			"movl $4,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_248(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %3,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%2\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $3,%%xmm12\n"
			"movl $5,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_249(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $2,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $3,%%xmm12\n"
			"movl $5,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_250(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $3,%%xmm12\n"
			"movl $5,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_251(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm2,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $3,%%xmm12\n"
			"movl $5,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_252(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm9\n"
			"psrld $1,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"movdqu %%xmm9,%1\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $2,%%xmm12\n"
			"movl $6,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_253(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm1,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $2,%%xmm12\n"
			"movl $6,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_254(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pand %%xmm0,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm12,%%xmm9\n"
			"movdqu %%xmm9,%0\n"
			"movdqa %%xmm8,%%xmm12\n"
			"psrld $1,%%xmm12\n"
			"movl $7,%%eax\n"
			"movd %%eax,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			:"=m"(des[0])
			:"m"(src[0])
			:"memory", "eax");
}
template<typename T>
void simd_kscheme_1bit_cu_unpack_255(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %0,%%xmm8\n"
			"psrld %%xmm13,%%xmm8\n"
			"pand %%xmm7,%%xmm8\n"
			"movdqa %%xmm8,%%xmm9\n"
			"pslld %%xmm11,%%xmm9\n"
			"por %%xmm9,%%xmm12\n"
			"paddd %%xmm15,%%xmm11\n"
			"paddd %%xmm15,%%xmm13\n"
			"pand %%xmm14,%%xmm13\n"
			::"m"(src[0])
:"memory", "eax");
}

static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_0 = { simd_kscheme_1bit_cu_unpack_0<uint32_t>, 32, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_1 = { simd_kscheme_1bit_cu_unpack_1<uint32_t>, 28, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_2 = { simd_kscheme_1bit_cu_unpack_2<uint32_t>, 28, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_3 = { simd_kscheme_1bit_cu_unpack_3<uint32_t>, 24, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_4 = { simd_kscheme_1bit_cu_unpack_4<uint32_t>, 28, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_5 = { simd_kscheme_1bit_cu_unpack_5<uint32_t>, 24, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_6 = { simd_kscheme_1bit_cu_unpack_6<uint32_t>, 24, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_7 = { simd_kscheme_1bit_cu_unpack_7<uint32_t>, 20, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_8 = { simd_kscheme_1bit_cu_unpack_8<uint32_t>, 28, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_9 = { simd_kscheme_1bit_cu_unpack_9<uint32_t>, 24, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_10 = { simd_kscheme_1bit_cu_unpack_10<uint32_t>, 24, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_11 = { simd_kscheme_1bit_cu_unpack_11<uint32_t>, 20, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_12 = { simd_kscheme_1bit_cu_unpack_12<uint32_t>, 24, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_13 = { simd_kscheme_1bit_cu_unpack_13<uint32_t>, 20, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_14 = { simd_kscheme_1bit_cu_unpack_14<uint32_t>, 20, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_15 = { simd_kscheme_1bit_cu_unpack_15<uint32_t>, 16, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_16 = { simd_kscheme_1bit_cu_unpack_16<uint32_t>, 28, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_17 = { simd_kscheme_1bit_cu_unpack_17<uint32_t>, 24, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_18 = { simd_kscheme_1bit_cu_unpack_18<uint32_t>, 24, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_19 = { simd_kscheme_1bit_cu_unpack_19<uint32_t>, 20, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_20 = { simd_kscheme_1bit_cu_unpack_20<uint32_t>, 24, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_21 = { simd_kscheme_1bit_cu_unpack_21<uint32_t>, 20, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_22 = { simd_kscheme_1bit_cu_unpack_22<uint32_t>, 20, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_23 = { simd_kscheme_1bit_cu_unpack_23<uint32_t>, 16, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_24 = { simd_kscheme_1bit_cu_unpack_24<uint32_t>, 24, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_25 = { simd_kscheme_1bit_cu_unpack_25<uint32_t>, 20, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_26 = { simd_kscheme_1bit_cu_unpack_26<uint32_t>, 20, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_27 = { simd_kscheme_1bit_cu_unpack_27<uint32_t>, 16, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_28 = { simd_kscheme_1bit_cu_unpack_28<uint32_t>, 20, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_29 = { simd_kscheme_1bit_cu_unpack_29<uint32_t>, 16, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_30 = { simd_kscheme_1bit_cu_unpack_30<uint32_t>, 16, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_31 = { simd_kscheme_1bit_cu_unpack_31<uint32_t>, 12, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_32 = { simd_kscheme_1bit_cu_unpack_32<uint32_t>, 28, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_33 = { simd_kscheme_1bit_cu_unpack_33<uint32_t>, 24, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_34 = { simd_kscheme_1bit_cu_unpack_34<uint32_t>, 24, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_35 = { simd_kscheme_1bit_cu_unpack_35<uint32_t>, 20, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_36 = { simd_kscheme_1bit_cu_unpack_36<uint32_t>, 24, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_37 = { simd_kscheme_1bit_cu_unpack_37<uint32_t>, 20, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_38 = { simd_kscheme_1bit_cu_unpack_38<uint32_t>, 20, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_39 = { simd_kscheme_1bit_cu_unpack_39<uint32_t>, 16, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_40 = { simd_kscheme_1bit_cu_unpack_40<uint32_t>, 24, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_41 = { simd_kscheme_1bit_cu_unpack_41<uint32_t>, 20, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_42 = { simd_kscheme_1bit_cu_unpack_42<uint32_t>, 20, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_43 = { simd_kscheme_1bit_cu_unpack_43<uint32_t>, 16, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_44 = { simd_kscheme_1bit_cu_unpack_44<uint32_t>, 20, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_45 = { simd_kscheme_1bit_cu_unpack_45<uint32_t>, 16, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_46 = { simd_kscheme_1bit_cu_unpack_46<uint32_t>, 16, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_47 = { simd_kscheme_1bit_cu_unpack_47<uint32_t>, 12, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_48 = { simd_kscheme_1bit_cu_unpack_48<uint32_t>, 24, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_49 = { simd_kscheme_1bit_cu_unpack_49<uint32_t>, 20, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_50 = { simd_kscheme_1bit_cu_unpack_50<uint32_t>, 20, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_51 = { simd_kscheme_1bit_cu_unpack_51<uint32_t>, 16, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_52 = { simd_kscheme_1bit_cu_unpack_52<uint32_t>, 20, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_53 = { simd_kscheme_1bit_cu_unpack_53<uint32_t>, 16, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_54 = { simd_kscheme_1bit_cu_unpack_54<uint32_t>, 16, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_55 = { simd_kscheme_1bit_cu_unpack_55<uint32_t>, 12, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_56 = { simd_kscheme_1bit_cu_unpack_56<uint32_t>, 20, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_57 = { simd_kscheme_1bit_cu_unpack_57<uint32_t>, 16, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_58 = { simd_kscheme_1bit_cu_unpack_58<uint32_t>, 16, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_59 = { simd_kscheme_1bit_cu_unpack_59<uint32_t>, 12, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_60 = { simd_kscheme_1bit_cu_unpack_60<uint32_t>, 16, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_61 = { simd_kscheme_1bit_cu_unpack_61<uint32_t>, 12, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_62 = { simd_kscheme_1bit_cu_unpack_62<uint32_t>, 12, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_63 = { simd_kscheme_1bit_cu_unpack_63<uint32_t>, 8, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_64 = { simd_kscheme_1bit_cu_unpack_64<uint32_t>, 28, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_65 = { simd_kscheme_1bit_cu_unpack_65<uint32_t>, 24, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_66 = { simd_kscheme_1bit_cu_unpack_66<uint32_t>, 24, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_67 = { simd_kscheme_1bit_cu_unpack_67<uint32_t>, 20, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_68 = { simd_kscheme_1bit_cu_unpack_68<uint32_t>, 24, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_69 = { simd_kscheme_1bit_cu_unpack_69<uint32_t>, 20, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_70 = { simd_kscheme_1bit_cu_unpack_70<uint32_t>, 20, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_71 = { simd_kscheme_1bit_cu_unpack_71<uint32_t>, 16, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_72 = { simd_kscheme_1bit_cu_unpack_72<uint32_t>, 24, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_73 = { simd_kscheme_1bit_cu_unpack_73<uint32_t>, 20, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_74 = { simd_kscheme_1bit_cu_unpack_74<uint32_t>, 20, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_75 = { simd_kscheme_1bit_cu_unpack_75<uint32_t>, 16, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_76 = { simd_kscheme_1bit_cu_unpack_76<uint32_t>, 20, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_77 = { simd_kscheme_1bit_cu_unpack_77<uint32_t>, 16, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_78 = { simd_kscheme_1bit_cu_unpack_78<uint32_t>, 16, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_79 = { simd_kscheme_1bit_cu_unpack_79<uint32_t>, 12, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_80 = { simd_kscheme_1bit_cu_unpack_80<uint32_t>, 24, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_81 = { simd_kscheme_1bit_cu_unpack_81<uint32_t>, 20, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_82 = { simd_kscheme_1bit_cu_unpack_82<uint32_t>, 20, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_83 = { simd_kscheme_1bit_cu_unpack_83<uint32_t>, 16, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_84 = { simd_kscheme_1bit_cu_unpack_84<uint32_t>, 20, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_85 = { simd_kscheme_1bit_cu_unpack_85<uint32_t>, 16, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_86 = { simd_kscheme_1bit_cu_unpack_86<uint32_t>, 16, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_87 = { simd_kscheme_1bit_cu_unpack_87<uint32_t>, 12, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_88 = { simd_kscheme_1bit_cu_unpack_88<uint32_t>, 20, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_89 = { simd_kscheme_1bit_cu_unpack_89<uint32_t>, 16, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_90 = { simd_kscheme_1bit_cu_unpack_90<uint32_t>, 16, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_91 = { simd_kscheme_1bit_cu_unpack_91<uint32_t>, 12, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_92 = { simd_kscheme_1bit_cu_unpack_92<uint32_t>, 16, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_93 = { simd_kscheme_1bit_cu_unpack_93<uint32_t>, 12, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_94 = { simd_kscheme_1bit_cu_unpack_94<uint32_t>, 12, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_95 = { simd_kscheme_1bit_cu_unpack_95<uint32_t>, 8, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_96 = { simd_kscheme_1bit_cu_unpack_96<uint32_t>, 24, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_97 = { simd_kscheme_1bit_cu_unpack_97<uint32_t>, 20, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_98 = { simd_kscheme_1bit_cu_unpack_98<uint32_t>, 20, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_99 = { simd_kscheme_1bit_cu_unpack_99<uint32_t>, 16, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_100 = { simd_kscheme_1bit_cu_unpack_100<uint32_t>, 20, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_101 = { simd_kscheme_1bit_cu_unpack_101<uint32_t>, 16, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_102 = { simd_kscheme_1bit_cu_unpack_102<uint32_t>, 16, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_103 = { simd_kscheme_1bit_cu_unpack_103<uint32_t>, 12, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_104 = { simd_kscheme_1bit_cu_unpack_104<uint32_t>, 20, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_105 = { simd_kscheme_1bit_cu_unpack_105<uint32_t>, 16, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_106 = { simd_kscheme_1bit_cu_unpack_106<uint32_t>, 16, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_107 = { simd_kscheme_1bit_cu_unpack_107<uint32_t>, 12, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_108 = { simd_kscheme_1bit_cu_unpack_108<uint32_t>, 16, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_109 = { simd_kscheme_1bit_cu_unpack_109<uint32_t>, 12, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_110 = { simd_kscheme_1bit_cu_unpack_110<uint32_t>, 12, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_111 = { simd_kscheme_1bit_cu_unpack_111<uint32_t>, 8, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_112 = { simd_kscheme_1bit_cu_unpack_112<uint32_t>, 20, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_113 = { simd_kscheme_1bit_cu_unpack_113<uint32_t>, 16, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_114 = { simd_kscheme_1bit_cu_unpack_114<uint32_t>, 16, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_115 = { simd_kscheme_1bit_cu_unpack_115<uint32_t>, 12, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_116 = { simd_kscheme_1bit_cu_unpack_116<uint32_t>, 16, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_117 = { simd_kscheme_1bit_cu_unpack_117<uint32_t>, 12, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_118 = { simd_kscheme_1bit_cu_unpack_118<uint32_t>, 12, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_119 = { simd_kscheme_1bit_cu_unpack_119<uint32_t>, 8, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_120 = { simd_kscheme_1bit_cu_unpack_120<uint32_t>, 16, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_121 = { simd_kscheme_1bit_cu_unpack_121<uint32_t>, 12, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_122 = { simd_kscheme_1bit_cu_unpack_122<uint32_t>, 12, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_123 = { simd_kscheme_1bit_cu_unpack_123<uint32_t>, 8, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_124 = { simd_kscheme_1bit_cu_unpack_124<uint32_t>, 12, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_125 = { simd_kscheme_1bit_cu_unpack_125<uint32_t>, 8, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_126 = { simd_kscheme_1bit_cu_unpack_126<uint32_t>, 8, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_127 = { simd_kscheme_1bit_cu_unpack_127<uint32_t>, 4, 0  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_128 = { simd_kscheme_1bit_cu_unpack_128<uint32_t>, 28, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_129 = { simd_kscheme_1bit_cu_unpack_129<uint32_t>, 24, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_130 = { simd_kscheme_1bit_cu_unpack_130<uint32_t>, 24, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_131 = { simd_kscheme_1bit_cu_unpack_131<uint32_t>, 20, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_132 = { simd_kscheme_1bit_cu_unpack_132<uint32_t>, 24, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_133 = { simd_kscheme_1bit_cu_unpack_133<uint32_t>, 20, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_134 = { simd_kscheme_1bit_cu_unpack_134<uint32_t>, 20, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_135 = { simd_kscheme_1bit_cu_unpack_135<uint32_t>, 16, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_136 = { simd_kscheme_1bit_cu_unpack_136<uint32_t>, 24, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_137 = { simd_kscheme_1bit_cu_unpack_137<uint32_t>, 20, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_138 = { simd_kscheme_1bit_cu_unpack_138<uint32_t>, 20, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_139 = { simd_kscheme_1bit_cu_unpack_139<uint32_t>, 16, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_140 = { simd_kscheme_1bit_cu_unpack_140<uint32_t>, 20, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_141 = { simd_kscheme_1bit_cu_unpack_141<uint32_t>, 16, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_142 = { simd_kscheme_1bit_cu_unpack_142<uint32_t>, 16, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_143 = { simd_kscheme_1bit_cu_unpack_143<uint32_t>, 12, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_144 = { simd_kscheme_1bit_cu_unpack_144<uint32_t>, 24, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_145 = { simd_kscheme_1bit_cu_unpack_145<uint32_t>, 20, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_146 = { simd_kscheme_1bit_cu_unpack_146<uint32_t>, 20, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_147 = { simd_kscheme_1bit_cu_unpack_147<uint32_t>, 16, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_148 = { simd_kscheme_1bit_cu_unpack_148<uint32_t>, 20, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_149 = { simd_kscheme_1bit_cu_unpack_149<uint32_t>, 16, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_150 = { simd_kscheme_1bit_cu_unpack_150<uint32_t>, 16, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_151 = { simd_kscheme_1bit_cu_unpack_151<uint32_t>, 12, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_152 = { simd_kscheme_1bit_cu_unpack_152<uint32_t>, 20, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_153 = { simd_kscheme_1bit_cu_unpack_153<uint32_t>, 16, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_154 = { simd_kscheme_1bit_cu_unpack_154<uint32_t>, 16, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_155 = { simd_kscheme_1bit_cu_unpack_155<uint32_t>, 12, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_156 = { simd_kscheme_1bit_cu_unpack_156<uint32_t>, 16, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_157 = { simd_kscheme_1bit_cu_unpack_157<uint32_t>, 12, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_158 = { simd_kscheme_1bit_cu_unpack_158<uint32_t>, 12, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_159 = { simd_kscheme_1bit_cu_unpack_159<uint32_t>, 8, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_160 = { simd_kscheme_1bit_cu_unpack_160<uint32_t>, 24, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_161 = { simd_kscheme_1bit_cu_unpack_161<uint32_t>, 20, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_162 = { simd_kscheme_1bit_cu_unpack_162<uint32_t>, 20, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_163 = { simd_kscheme_1bit_cu_unpack_163<uint32_t>, 16, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_164 = { simd_kscheme_1bit_cu_unpack_164<uint32_t>, 20, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_165 = { simd_kscheme_1bit_cu_unpack_165<uint32_t>, 16, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_166 = { simd_kscheme_1bit_cu_unpack_166<uint32_t>, 16, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_167 = { simd_kscheme_1bit_cu_unpack_167<uint32_t>, 12, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_168 = { simd_kscheme_1bit_cu_unpack_168<uint32_t>, 20, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_169 = { simd_kscheme_1bit_cu_unpack_169<uint32_t>, 16, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_170 = { simd_kscheme_1bit_cu_unpack_170<uint32_t>, 16, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_171 = { simd_kscheme_1bit_cu_unpack_171<uint32_t>, 12, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_172 = { simd_kscheme_1bit_cu_unpack_172<uint32_t>, 16, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_173 = { simd_kscheme_1bit_cu_unpack_173<uint32_t>, 12, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_174 = { simd_kscheme_1bit_cu_unpack_174<uint32_t>, 12, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_175 = { simd_kscheme_1bit_cu_unpack_175<uint32_t>, 8, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_176 = { simd_kscheme_1bit_cu_unpack_176<uint32_t>, 20, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_177 = { simd_kscheme_1bit_cu_unpack_177<uint32_t>, 16, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_178 = { simd_kscheme_1bit_cu_unpack_178<uint32_t>, 16, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_179 = { simd_kscheme_1bit_cu_unpack_179<uint32_t>, 12, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_180 = { simd_kscheme_1bit_cu_unpack_180<uint32_t>, 16, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_181 = { simd_kscheme_1bit_cu_unpack_181<uint32_t>, 12, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_182 = { simd_kscheme_1bit_cu_unpack_182<uint32_t>, 12, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_183 = { simd_kscheme_1bit_cu_unpack_183<uint32_t>, 8, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_184 = { simd_kscheme_1bit_cu_unpack_184<uint32_t>, 16, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_185 = { simd_kscheme_1bit_cu_unpack_185<uint32_t>, 12, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_186 = { simd_kscheme_1bit_cu_unpack_186<uint32_t>, 12, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_187 = { simd_kscheme_1bit_cu_unpack_187<uint32_t>, 8, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_188 = { simd_kscheme_1bit_cu_unpack_188<uint32_t>, 12, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_189 = { simd_kscheme_1bit_cu_unpack_189<uint32_t>, 8, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_190 = { simd_kscheme_1bit_cu_unpack_190<uint32_t>, 8, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_191 = { simd_kscheme_1bit_cu_unpack_191<uint32_t>, 4, 1  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_192 = { simd_kscheme_1bit_cu_unpack_192<uint32_t>, 24, 2  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_193 = { simd_kscheme_1bit_cu_unpack_193<uint32_t>, 20, 2  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_194 = { simd_kscheme_1bit_cu_unpack_194<uint32_t>, 20, 2  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_195 = { simd_kscheme_1bit_cu_unpack_195<uint32_t>, 16, 2  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_196 = { simd_kscheme_1bit_cu_unpack_196<uint32_t>, 20, 2  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_197 = { simd_kscheme_1bit_cu_unpack_197<uint32_t>, 16, 2  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_198 = { simd_kscheme_1bit_cu_unpack_198<uint32_t>, 16, 2  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_199 = { simd_kscheme_1bit_cu_unpack_199<uint32_t>, 12, 2  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_200 = { simd_kscheme_1bit_cu_unpack_200<uint32_t>, 20, 2  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_201 = { simd_kscheme_1bit_cu_unpack_201<uint32_t>, 16, 2  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_202 = { simd_kscheme_1bit_cu_unpack_202<uint32_t>, 16, 2  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_203 = { simd_kscheme_1bit_cu_unpack_203<uint32_t>, 12, 2  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_204 = { simd_kscheme_1bit_cu_unpack_204<uint32_t>, 16, 2  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_205 = { simd_kscheme_1bit_cu_unpack_205<uint32_t>, 12, 2  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_206 = { simd_kscheme_1bit_cu_unpack_206<uint32_t>, 12, 2  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_207 = { simd_kscheme_1bit_cu_unpack_207<uint32_t>, 8, 2  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_208 = { simd_kscheme_1bit_cu_unpack_208<uint32_t>, 20, 2  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_209 = { simd_kscheme_1bit_cu_unpack_209<uint32_t>, 16, 2  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_210 = { simd_kscheme_1bit_cu_unpack_210<uint32_t>, 16, 2  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_211 = { simd_kscheme_1bit_cu_unpack_211<uint32_t>, 12, 2  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_212 = { simd_kscheme_1bit_cu_unpack_212<uint32_t>, 16, 2  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_213 = { simd_kscheme_1bit_cu_unpack_213<uint32_t>, 12, 2  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_214 = { simd_kscheme_1bit_cu_unpack_214<uint32_t>, 12, 2  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_215 = { simd_kscheme_1bit_cu_unpack_215<uint32_t>, 8, 2  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_216 = { simd_kscheme_1bit_cu_unpack_216<uint32_t>, 16, 2  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_217 = { simd_kscheme_1bit_cu_unpack_217<uint32_t>, 12, 2  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_218 = { simd_kscheme_1bit_cu_unpack_218<uint32_t>, 12, 2  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_219 = { simd_kscheme_1bit_cu_unpack_219<uint32_t>, 8, 2  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_220 = { simd_kscheme_1bit_cu_unpack_220<uint32_t>, 12, 2  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_221 = { simd_kscheme_1bit_cu_unpack_221<uint32_t>, 8, 2  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_222 = { simd_kscheme_1bit_cu_unpack_222<uint32_t>, 8, 2  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_223 = { simd_kscheme_1bit_cu_unpack_223<uint32_t>, 4, 2  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_224 = { simd_kscheme_1bit_cu_unpack_224<uint32_t>, 20, 3  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_225 = { simd_kscheme_1bit_cu_unpack_225<uint32_t>, 16, 3  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_226 = { simd_kscheme_1bit_cu_unpack_226<uint32_t>, 16, 3  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_227 = { simd_kscheme_1bit_cu_unpack_227<uint32_t>, 12, 3  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_228 = { simd_kscheme_1bit_cu_unpack_228<uint32_t>, 16, 3  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_229 = { simd_kscheme_1bit_cu_unpack_229<uint32_t>, 12, 3  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_230 = { simd_kscheme_1bit_cu_unpack_230<uint32_t>, 12, 3  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_231 = { simd_kscheme_1bit_cu_unpack_231<uint32_t>, 8, 3  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_232 = { simd_kscheme_1bit_cu_unpack_232<uint32_t>, 16, 3  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_233 = { simd_kscheme_1bit_cu_unpack_233<uint32_t>, 12, 3  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_234 = { simd_kscheme_1bit_cu_unpack_234<uint32_t>, 12, 3  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_235 = { simd_kscheme_1bit_cu_unpack_235<uint32_t>, 8, 3  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_236 = { simd_kscheme_1bit_cu_unpack_236<uint32_t>, 12, 3  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_237 = { simd_kscheme_1bit_cu_unpack_237<uint32_t>, 8, 3  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_238 = { simd_kscheme_1bit_cu_unpack_238<uint32_t>, 8, 3  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_239 = { simd_kscheme_1bit_cu_unpack_239<uint32_t>, 4, 3  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_240 = { simd_kscheme_1bit_cu_unpack_240<uint32_t>, 16, 4  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_241 = { simd_kscheme_1bit_cu_unpack_241<uint32_t>, 12, 4  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_242 = { simd_kscheme_1bit_cu_unpack_242<uint32_t>, 12, 4  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_243 = { simd_kscheme_1bit_cu_unpack_243<uint32_t>, 8, 4  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_244 = { simd_kscheme_1bit_cu_unpack_244<uint32_t>, 12, 4  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_245 = { simd_kscheme_1bit_cu_unpack_245<uint32_t>, 8, 4  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_246 = { simd_kscheme_1bit_cu_unpack_246<uint32_t>, 8, 4  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_247 = { simd_kscheme_1bit_cu_unpack_247<uint32_t>, 4, 4  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_248 = { simd_kscheme_1bit_cu_unpack_248<uint32_t>, 12, 5  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_249 = { simd_kscheme_1bit_cu_unpack_249<uint32_t>, 8, 5  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_250 = { simd_kscheme_1bit_cu_unpack_250<uint32_t>, 8, 5  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_251 = { simd_kscheme_1bit_cu_unpack_251<uint32_t>, 4, 5  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_252 = { simd_kscheme_1bit_cu_unpack_252<uint32_t>, 8, 6  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_253 = { simd_kscheme_1bit_cu_unpack_253<uint32_t>, 4, 6  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_254 = { simd_kscheme_1bit_cu_unpack_254<uint32_t>, 4, 7  };
static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfo_255 = { simd_kscheme_1bit_cu_unpack_255<uint32_t>, 0, 8  };

static SIMDK1CUUnpackInfo SIMDK1CUUnpackInfoArr[256] = {
			SIMDK1CUUnpackInfo_0, SIMDK1CUUnpackInfo_1, SIMDK1CUUnpackInfo_2, SIMDK1CUUnpackInfo_3,
			SIMDK1CUUnpackInfo_4, SIMDK1CUUnpackInfo_5, SIMDK1CUUnpackInfo_6, SIMDK1CUUnpackInfo_7,
			SIMDK1CUUnpackInfo_8, SIMDK1CUUnpackInfo_9, SIMDK1CUUnpackInfo_10, SIMDK1CUUnpackInfo_11,
			SIMDK1CUUnpackInfo_12, SIMDK1CUUnpackInfo_13, SIMDK1CUUnpackInfo_14, SIMDK1CUUnpackInfo_15,
			SIMDK1CUUnpackInfo_16, SIMDK1CUUnpackInfo_17, SIMDK1CUUnpackInfo_18, SIMDK1CUUnpackInfo_19,
			SIMDK1CUUnpackInfo_20, SIMDK1CUUnpackInfo_21, SIMDK1CUUnpackInfo_22, SIMDK1CUUnpackInfo_23,
			SIMDK1CUUnpackInfo_24, SIMDK1CUUnpackInfo_25, SIMDK1CUUnpackInfo_26, SIMDK1CUUnpackInfo_27,
			SIMDK1CUUnpackInfo_28, SIMDK1CUUnpackInfo_29, SIMDK1CUUnpackInfo_30, SIMDK1CUUnpackInfo_31,
			SIMDK1CUUnpackInfo_32, SIMDK1CUUnpackInfo_33, SIMDK1CUUnpackInfo_34, SIMDK1CUUnpackInfo_35,
			SIMDK1CUUnpackInfo_36, SIMDK1CUUnpackInfo_37, SIMDK1CUUnpackInfo_38, SIMDK1CUUnpackInfo_39,
			SIMDK1CUUnpackInfo_40, SIMDK1CUUnpackInfo_41, SIMDK1CUUnpackInfo_42, SIMDK1CUUnpackInfo_43,
			SIMDK1CUUnpackInfo_44, SIMDK1CUUnpackInfo_45, SIMDK1CUUnpackInfo_46, SIMDK1CUUnpackInfo_47,
			SIMDK1CUUnpackInfo_48, SIMDK1CUUnpackInfo_49, SIMDK1CUUnpackInfo_50, SIMDK1CUUnpackInfo_51,
			SIMDK1CUUnpackInfo_52, SIMDK1CUUnpackInfo_53, SIMDK1CUUnpackInfo_54, SIMDK1CUUnpackInfo_55,
			SIMDK1CUUnpackInfo_56, SIMDK1CUUnpackInfo_57, SIMDK1CUUnpackInfo_58, SIMDK1CUUnpackInfo_59,
			SIMDK1CUUnpackInfo_60, SIMDK1CUUnpackInfo_61, SIMDK1CUUnpackInfo_62, SIMDK1CUUnpackInfo_63,
			SIMDK1CUUnpackInfo_64, SIMDK1CUUnpackInfo_65, SIMDK1CUUnpackInfo_66, SIMDK1CUUnpackInfo_67,
			SIMDK1CUUnpackInfo_68, SIMDK1CUUnpackInfo_69, SIMDK1CUUnpackInfo_70, SIMDK1CUUnpackInfo_71,
			SIMDK1CUUnpackInfo_72, SIMDK1CUUnpackInfo_73, SIMDK1CUUnpackInfo_74, SIMDK1CUUnpackInfo_75,
			SIMDK1CUUnpackInfo_76, SIMDK1CUUnpackInfo_77, SIMDK1CUUnpackInfo_78, SIMDK1CUUnpackInfo_79,
			SIMDK1CUUnpackInfo_80, SIMDK1CUUnpackInfo_81, SIMDK1CUUnpackInfo_82, SIMDK1CUUnpackInfo_83,
			SIMDK1CUUnpackInfo_84, SIMDK1CUUnpackInfo_85, SIMDK1CUUnpackInfo_86, SIMDK1CUUnpackInfo_87,
			SIMDK1CUUnpackInfo_88, SIMDK1CUUnpackInfo_89, SIMDK1CUUnpackInfo_90, SIMDK1CUUnpackInfo_91,
			SIMDK1CUUnpackInfo_92, SIMDK1CUUnpackInfo_93, SIMDK1CUUnpackInfo_94, SIMDK1CUUnpackInfo_95,
			SIMDK1CUUnpackInfo_96, SIMDK1CUUnpackInfo_97, SIMDK1CUUnpackInfo_98, SIMDK1CUUnpackInfo_99,
			SIMDK1CUUnpackInfo_100, SIMDK1CUUnpackInfo_101, SIMDK1CUUnpackInfo_102, SIMDK1CUUnpackInfo_103,
			SIMDK1CUUnpackInfo_104, SIMDK1CUUnpackInfo_105, SIMDK1CUUnpackInfo_106, SIMDK1CUUnpackInfo_107,
			SIMDK1CUUnpackInfo_108, SIMDK1CUUnpackInfo_109, SIMDK1CUUnpackInfo_110, SIMDK1CUUnpackInfo_111,
			SIMDK1CUUnpackInfo_112, SIMDK1CUUnpackInfo_113, SIMDK1CUUnpackInfo_114, SIMDK1CUUnpackInfo_115,
			SIMDK1CUUnpackInfo_116, SIMDK1CUUnpackInfo_117, SIMDK1CUUnpackInfo_118, SIMDK1CUUnpackInfo_119,
			SIMDK1CUUnpackInfo_120, SIMDK1CUUnpackInfo_121, SIMDK1CUUnpackInfo_122, SIMDK1CUUnpackInfo_123,
			SIMDK1CUUnpackInfo_124, SIMDK1CUUnpackInfo_125, SIMDK1CUUnpackInfo_126, SIMDK1CUUnpackInfo_127,
			SIMDK1CUUnpackInfo_128, SIMDK1CUUnpackInfo_129, SIMDK1CUUnpackInfo_130, SIMDK1CUUnpackInfo_131,
			SIMDK1CUUnpackInfo_132, SIMDK1CUUnpackInfo_133, SIMDK1CUUnpackInfo_134, SIMDK1CUUnpackInfo_135,
			SIMDK1CUUnpackInfo_136, SIMDK1CUUnpackInfo_137, SIMDK1CUUnpackInfo_138, SIMDK1CUUnpackInfo_139,
			SIMDK1CUUnpackInfo_140, SIMDK1CUUnpackInfo_141, SIMDK1CUUnpackInfo_142, SIMDK1CUUnpackInfo_143,
			SIMDK1CUUnpackInfo_144, SIMDK1CUUnpackInfo_145, SIMDK1CUUnpackInfo_146, SIMDK1CUUnpackInfo_147,
			SIMDK1CUUnpackInfo_148, SIMDK1CUUnpackInfo_149, SIMDK1CUUnpackInfo_150, SIMDK1CUUnpackInfo_151,
			SIMDK1CUUnpackInfo_152, SIMDK1CUUnpackInfo_153, SIMDK1CUUnpackInfo_154, SIMDK1CUUnpackInfo_155,
			SIMDK1CUUnpackInfo_156, SIMDK1CUUnpackInfo_157, SIMDK1CUUnpackInfo_158, SIMDK1CUUnpackInfo_159,
			SIMDK1CUUnpackInfo_160, SIMDK1CUUnpackInfo_161, SIMDK1CUUnpackInfo_162, SIMDK1CUUnpackInfo_163,
			SIMDK1CUUnpackInfo_164, SIMDK1CUUnpackInfo_165, SIMDK1CUUnpackInfo_166, SIMDK1CUUnpackInfo_167,
			SIMDK1CUUnpackInfo_168, SIMDK1CUUnpackInfo_169, SIMDK1CUUnpackInfo_170, SIMDK1CUUnpackInfo_171,
			SIMDK1CUUnpackInfo_172, SIMDK1CUUnpackInfo_173, SIMDK1CUUnpackInfo_174, SIMDK1CUUnpackInfo_175,
			SIMDK1CUUnpackInfo_176, SIMDK1CUUnpackInfo_177, SIMDK1CUUnpackInfo_178, SIMDK1CUUnpackInfo_179,
			SIMDK1CUUnpackInfo_180, SIMDK1CUUnpackInfo_181, SIMDK1CUUnpackInfo_182, SIMDK1CUUnpackInfo_183,
			SIMDK1CUUnpackInfo_184, SIMDK1CUUnpackInfo_185, SIMDK1CUUnpackInfo_186, SIMDK1CUUnpackInfo_187,
			SIMDK1CUUnpackInfo_188, SIMDK1CUUnpackInfo_189, SIMDK1CUUnpackInfo_190, SIMDK1CUUnpackInfo_191,
			SIMDK1CUUnpackInfo_192, SIMDK1CUUnpackInfo_193, SIMDK1CUUnpackInfo_194, SIMDK1CUUnpackInfo_195,
			SIMDK1CUUnpackInfo_196, SIMDK1CUUnpackInfo_197, SIMDK1CUUnpackInfo_198, SIMDK1CUUnpackInfo_199,
			SIMDK1CUUnpackInfo_200, SIMDK1CUUnpackInfo_201, SIMDK1CUUnpackInfo_202, SIMDK1CUUnpackInfo_203,
			SIMDK1CUUnpackInfo_204, SIMDK1CUUnpackInfo_205, SIMDK1CUUnpackInfo_206, SIMDK1CUUnpackInfo_207,
			SIMDK1CUUnpackInfo_208, SIMDK1CUUnpackInfo_209, SIMDK1CUUnpackInfo_210, SIMDK1CUUnpackInfo_211,
			SIMDK1CUUnpackInfo_212, SIMDK1CUUnpackInfo_213, SIMDK1CUUnpackInfo_214, SIMDK1CUUnpackInfo_215,
			SIMDK1CUUnpackInfo_216, SIMDK1CUUnpackInfo_217, SIMDK1CUUnpackInfo_218, SIMDK1CUUnpackInfo_219,
			SIMDK1CUUnpackInfo_220, SIMDK1CUUnpackInfo_221, SIMDK1CUUnpackInfo_222, SIMDK1CUUnpackInfo_223,
			SIMDK1CUUnpackInfo_224, SIMDK1CUUnpackInfo_225, SIMDK1CUUnpackInfo_226, SIMDK1CUUnpackInfo_227,
			SIMDK1CUUnpackInfo_228, SIMDK1CUUnpackInfo_229, SIMDK1CUUnpackInfo_230, SIMDK1CUUnpackInfo_231,
			SIMDK1CUUnpackInfo_232, SIMDK1CUUnpackInfo_233, SIMDK1CUUnpackInfo_234, SIMDK1CUUnpackInfo_235,
			SIMDK1CUUnpackInfo_236, SIMDK1CUUnpackInfo_237, SIMDK1CUUnpackInfo_238, SIMDK1CUUnpackInfo_239,
			SIMDK1CUUnpackInfo_240, SIMDK1CUUnpackInfo_241, SIMDK1CUUnpackInfo_242, SIMDK1CUUnpackInfo_243,
			SIMDK1CUUnpackInfo_244, SIMDK1CUUnpackInfo_245, SIMDK1CUUnpackInfo_246, SIMDK1CUUnpackInfo_247,
			SIMDK1CUUnpackInfo_248, SIMDK1CUUnpackInfo_249, SIMDK1CUUnpackInfo_250, SIMDK1CUUnpackInfo_251,
			SIMDK1CUUnpackInfo_252, SIMDK1CUUnpackInfo_253, SIMDK1CUUnpackInfo_254, SIMDK1CUUnpackInfo_255
};


}
}

#endif

#endif /* SIMD_KSCHEME_1BIT_CU_UNPACK_HPP_ */

