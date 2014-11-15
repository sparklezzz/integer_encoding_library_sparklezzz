/*
 * simd_kvint_unpack_16ints.hpp
 *
 *  simd_kvint_unpack_x_y: x->curByteOffset (0-3), y->byteCount-1 (0-3)
 *  simd_kvint_unpack_x_y_z: x->curByteOffset (0-3), y->byteCount-1 (0-3), z->byteCount-1 (0-3)
 *
 *  Created on: 2013-6-2
 *      Author: zxd
 */

#ifndef SIMD_KVINT_UNPACK_16INTS_HPP_
#define SIMD_KVINT_UNPACK_16INTS_HPP_

#ifdef USE_SSE_INSTRUCTION

namespace paradise {
namespace index {

/*
static const struct kvint_and_0{
uint32_t a[4];
}kvint_and_0 __attribute__((aligned(16))) = {{0xff,0xff,0xff,0xff},};
static const struct kvint_and_1{
uint32_t a[4];
}kvint_and_1 __attribute__((aligned(16))) = {{0xffff,0xffff,0xffff,0xffff},};
static const struct kvint_and_2{
uint32_t a[4];
}kvint_and_2 __attribute__((aligned(16))) = {{0xffffff,0xffffff,0xffffff,0xffffff},};

template<typename T>
void simd_kvint_unpack_prepare() {
	__asm__(
			"movdqa %0,%%xmm0\n"
			"movdqa %1,%%xmm1\n"
			"movdqa %2,%%xmm2\n"
			::"m"(kvint_and_0.a[0]),"m"(kvint_and_1.a[0]),"m"(kvint_and_2.a[0])
			:"memory");
}
*/


template<typename T>
void simd_kvint_unpack_0_0_0_0_0(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_1_0_0_0(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_2_0_0_0(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_3_0_0_0(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_0_1_0_0(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_1_1_0_0(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_2_1_0_0(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_3_1_0_0(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_0_2_0_0(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_1_2_0_0(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_2_2_0_0(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_3_2_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_0_3_0_0(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_1_3_0_0(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_2_3_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_3_3_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_0_0_1_0(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_1_0_1_0(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_2_0_1_0(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_3_0_1_0(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_0_1_1_0(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_1_1_1_0(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_2_1_1_0(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_3_1_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_0_2_1_0(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_1_2_1_0(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_2_2_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_3_2_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_0_3_1_0(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_1_3_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_0_2_3_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_0_3_3_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_0_0_0_2_0(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_1_0_2_0(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_2_0_2_0(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_3_0_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_0_1_2_0(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_1_1_2_0(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_2_1_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_3_1_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_0_2_2_0(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_1_2_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_0_2_2_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_0_3_2_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_0_0_3_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_1_3_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_2_3_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_3_3_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_0_0_3_0(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_1_0_3_0(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_2_0_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_3_0_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_0_1_3_0(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_1_1_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_0_2_1_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_0_3_1_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_0_0_2_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_1_2_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_2_2_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_3_2_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_0_3_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_0_1_3_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_0_2_3_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_0_3_3_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_0_0_0_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_1_0_0_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_2_0_0_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_3_0_0_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_0_1_0_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_1_1_0_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_2_1_0_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_3_1_0_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_0_2_0_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_1_2_0_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_2_2_0_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_3_2_0_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_0_3_0_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_1_3_0_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_0_2_3_0_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_0_3_3_0_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_0_0_0_1_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_1_0_1_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_2_0_1_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_3_0_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_0_1_1_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_1_1_1_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_2_1_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_3_1_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_0_2_1_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_1_2_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_0_2_2_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_0_3_2_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_0_0_3_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_1_3_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_2_3_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_3_3_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_0_0_2_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_1_0_2_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_2_0_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_3_0_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_0_1_2_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_1_1_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_0_2_1_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_0_3_1_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_0_0_2_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_1_2_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_2_2_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_3_2_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_0_3_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_0_1_3_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_0_2_3_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_0_3_3_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_0_0_3_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_1_0_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_0_2_0_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_0_3_0_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_0_0_1_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_0_1_1_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_0_2_1_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_0_3_1_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_0_0_2_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_0_1_2_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_0_2_2_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_0_3_2_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_0_3_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_0_1_3_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_0_2_3_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_3_3_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_0_0_0_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_1_0_0_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_2_0_0_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_3_0_0_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_0_1_0_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_1_1_0_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_2_1_0_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_3_1_0_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_0_2_0_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_1_2_0_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_0_2_2_0_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_0_3_2_0_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_0_0_3_0_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_1_3_0_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_2_3_0_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_3_3_0_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_0_0_1_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_1_0_1_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_2_0_1_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_3_0_1_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_0_1_1_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_1_1_1_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_0_2_1_1_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_0_3_1_1_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_0_0_2_1_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_1_2_1_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_2_2_1_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_3_2_1_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_0_3_1_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_0_1_3_1_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_0_2_3_1_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_0_3_3_1_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_0_0_2_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_1_0_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_0_2_0_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_0_3_0_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_0_0_1_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_0_1_1_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_0_2_1_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_0_3_1_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_0_0_2_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_0_1_2_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_0_2_2_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_0_3_2_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_0_3_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_0_1_3_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_0_2_3_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_3_3_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_0_0_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_0_1_0_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_0_2_0_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_0_3_0_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_0_0_1_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_0_1_1_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_0_2_1_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_0_3_1_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_0_2_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_0_1_2_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_0_2_2_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_3_2_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_0_3_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_0_1_3_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_2_3_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_3_3_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_0_0_0_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_1_0_0_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_2_0_0_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_3_0_0_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_0_1_0_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_1_1_0_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_0_2_1_0_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_0_3_1_0_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_0_0_2_0_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_1_2_0_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_2_2_0_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_3_2_0_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_0_3_0_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_0_1_3_0_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_0_2_3_0_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_0_3_3_0_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_0_0_1_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_1_0_1_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_0_2_0_1_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_0_3_0_1_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_0_0_1_1_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_0_1_1_1_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_0_2_1_1_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_0_3_1_1_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_0_0_2_1_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_0_1_2_1_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_0_2_2_1_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_0_3_2_1_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_0_3_1_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_0_1_3_1_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_0_2_3_1_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_3_3_1_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_0_0_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_0_1_0_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_0_2_0_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_0_3_0_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_0_0_1_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_0_1_1_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_0_2_1_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_0_3_1_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_0_2_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_0_1_2_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_0_2_2_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_3_2_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_0_3_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_0_1_3_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_2_3_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_3_3_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_0_0_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
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
void simd_kvint_unpack_0_1_0_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
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
void simd_kvint_unpack_0_2_0_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
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
void simd_kvint_unpack_0_3_0_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_0_1_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
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
void simd_kvint_unpack_0_1_1_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
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
void simd_kvint_unpack_0_2_1_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_3_1_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_0_2_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
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
void simd_kvint_unpack_0_1_2_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_2_2_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_3_2_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_0_3_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_1_3_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_2_3_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_0_3_3_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_0_0_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
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
void simd_kvint_unpack_1_1_0_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
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
void simd_kvint_unpack_1_2_0_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
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
void simd_kvint_unpack_1_3_0_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
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
void simd_kvint_unpack_1_0_1_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
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
void simd_kvint_unpack_1_1_1_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
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
void simd_kvint_unpack_1_2_1_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
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
void simd_kvint_unpack_1_3_1_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_0_2_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
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
void simd_kvint_unpack_1_1_2_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
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
void simd_kvint_unpack_1_2_2_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_3_2_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_0_3_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
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
void simd_kvint_unpack_1_1_3_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_1_2_3_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_1_3_3_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_1_0_0_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
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
void simd_kvint_unpack_1_1_0_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
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
void simd_kvint_unpack_1_2_0_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
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
void simd_kvint_unpack_1_3_0_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_0_1_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
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
void simd_kvint_unpack_1_1_1_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
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
void simd_kvint_unpack_1_2_1_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_3_1_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_0_2_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
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
void simd_kvint_unpack_1_1_2_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_1_2_2_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_1_3_2_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_1_0_3_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_1_3_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_2_3_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_3_3_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_0_0_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
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
void simd_kvint_unpack_1_1_0_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
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
void simd_kvint_unpack_1_2_0_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_3_0_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_0_1_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
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
void simd_kvint_unpack_1_1_1_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_1_2_1_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_1_3_1_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_1_0_2_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_1_2_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_2_2_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_3_2_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_0_3_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_1_1_3_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_1_2_3_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_1_3_3_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_0_0_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
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
void simd_kvint_unpack_1_1_0_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_1_2_0_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_1_3_0_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_1_0_1_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_1_1_1_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_1_2_1_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_1_3_1_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_1_0_2_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_1_1_2_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_1_2_2_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_1_3_2_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_0_3_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_1_1_3_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_1_2_3_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_3_3_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_0_0_0_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
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
void simd_kvint_unpack_1_1_0_0_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
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
void simd_kvint_unpack_1_2_0_0_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
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
void simd_kvint_unpack_1_3_0_0_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_0_1_0_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
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
void simd_kvint_unpack_1_1_1_0_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
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
void simd_kvint_unpack_1_2_1_0_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_3_1_0_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_0_2_0_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
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
void simd_kvint_unpack_1_1_2_0_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_1_2_2_0_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_1_3_2_0_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_1_0_3_0_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_1_3_0_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_2_3_0_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_3_3_0_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_0_0_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
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
void simd_kvint_unpack_1_1_0_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
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
void simd_kvint_unpack_1_2_0_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_3_0_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_0_1_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
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
void simd_kvint_unpack_1_1_1_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_1_2_1_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_1_3_1_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_1_0_2_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_1_2_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_2_2_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_3_2_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_0_3_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_1_1_3_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_1_2_3_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_1_3_3_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_0_0_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
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
void simd_kvint_unpack_1_1_0_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_1_2_0_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_1_3_0_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_1_0_1_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_1_1_1_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_1_2_1_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_1_3_1_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_1_0_2_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_1_1_2_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_1_2_2_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_1_3_2_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_0_3_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_1_1_3_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_1_2_3_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_3_3_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_0_0_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_1_1_0_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_1_2_0_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_1_3_0_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_1_0_1_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_1_1_1_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_1_2_1_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_1_3_1_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_0_2_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_1_1_2_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_1_2_2_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_3_2_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_0_3_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_1_1_3_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_2_3_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_3_3_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_0_0_0_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
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
void simd_kvint_unpack_1_1_0_0_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
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
void simd_kvint_unpack_1_2_0_0_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_3_0_0_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_0_1_0_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
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
void simd_kvint_unpack_1_1_1_0_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_1_2_1_0_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_1_3_1_0_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_1_0_2_0_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_1_2_0_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_2_2_0_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_3_2_0_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_0_3_0_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_1_1_3_0_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_1_2_3_0_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_1_3_3_0_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_0_0_1_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
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
void simd_kvint_unpack_1_1_0_1_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_1_2_0_1_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_1_3_0_1_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_1_0_1_1_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_1_1_1_1_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_1_2_1_1_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_1_3_1_1_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_1_0_2_1_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_1_1_2_1_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_1_2_2_1_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_1_3_2_1_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_0_3_1_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_1_1_3_1_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_1_2_3_1_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_3_3_1_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_0_0_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_1_1_0_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_1_2_0_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_1_3_0_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_1_0_1_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_1_1_1_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_1_2_1_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_1_3_1_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_0_2_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_1_1_2_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_1_2_2_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_3_2_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_0_3_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_1_1_3_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_2_3_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_3_3_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_0_0_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
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
void simd_kvint_unpack_1_1_0_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
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
void simd_kvint_unpack_1_2_0_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
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
void simd_kvint_unpack_1_3_0_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_0_1_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
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
void simd_kvint_unpack_1_1_1_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
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
void simd_kvint_unpack_1_2_1_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_3_1_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_0_2_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
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
void simd_kvint_unpack_1_1_2_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_2_2_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_3_2_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_0_3_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_1_3_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_2_3_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_3_3_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_0_0_0_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_1_1_0_0_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_1_2_0_0_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_1_3_0_0_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_1_0_1_0_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_1_1_1_0_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_1_2_1_0_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_1_3_1_0_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_1_0_2_0_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_1_1_2_0_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_1_2_2_0_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_1_3_2_0_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_0_3_0_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_1_1_3_0_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_1_2_3_0_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_3_3_0_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_0_0_1_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_1_1_0_1_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_1_2_0_1_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_1_3_0_1_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_1_0_1_1_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_1_1_1_1_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_1_2_1_1_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_1_3_1_1_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_0_2_1_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_1_1_2_1_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_1_2_2_1_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_3_2_1_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_0_3_1_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_1_1_3_1_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_2_3_1_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_3_3_1_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_0_0_2_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_1_1_0_2_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_1_2_0_2_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_1_3_0_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_0_1_2_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_1_1_1_2_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_1_2_1_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_3_1_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_0_2_2_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_1_1_2_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_2_2_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_3_2_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_0_3_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_1_3_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_2_3_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_3_3_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_0_0_3_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_1_1_0_3_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_1_2_0_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_3_0_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_0_1_3_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_1_1_1_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_2_1_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_3_1_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_0_2_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_1_2_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_2_2_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_3_2_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_0_3_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_1_3_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_2_3_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_3_3_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqu %8,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"psrld $8,%%xmm8\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm4,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"psrld $8,%%xmm8\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm5,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"psrld $8,%%xmm8\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm6,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"psrld $8,%%xmm8\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_0_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
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
void simd_kvint_unpack_2_1_0_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
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
void simd_kvint_unpack_2_2_0_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
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
void simd_kvint_unpack_2_3_0_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_1_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
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
void simd_kvint_unpack_2_1_1_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
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
void simd_kvint_unpack_2_2_1_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_3_1_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_2_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
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
void simd_kvint_unpack_2_1_2_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_2_2_2_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_2_3_2_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_2_0_3_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_1_3_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_2_3_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_3_3_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_0_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
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
void simd_kvint_unpack_2_1_0_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
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
void simd_kvint_unpack_2_2_0_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_3_0_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_1_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
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
void simd_kvint_unpack_2_1_1_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_2_2_1_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_2_3_1_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_2_0_2_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_1_2_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_2_2_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_3_2_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_3_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_2_1_3_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_2_2_3_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_2_3_3_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_0_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
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
void simd_kvint_unpack_2_1_0_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_2_2_0_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_2_3_0_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_2_0_1_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_2_1_1_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_2_2_1_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_2_3_1_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_2_0_2_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_2_1_2_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_2_2_2_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_2_3_2_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_3_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_2_1_3_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_2_2_3_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_3_3_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_0_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_2_1_0_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_2_2_0_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_2_3_0_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_2_0_1_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_2_1_1_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_2_2_1_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_2_3_1_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_2_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_2_1_2_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_2_2_2_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_3_2_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_3_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm3,%%xmm6\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm6\n"
			"pslld $8,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_2_1_3_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_2_3_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_3_3_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_0_0_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
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
void simd_kvint_unpack_2_1_0_0_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
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
void simd_kvint_unpack_2_2_0_0_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_3_0_0_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_1_0_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
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
void simd_kvint_unpack_2_1_1_0_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_2_2_1_0_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_2_3_1_0_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_2_0_2_0_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_1_2_0_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_2_2_0_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_3_2_0_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_3_0_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_2_1_3_0_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_2_2_3_0_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_2_3_3_0_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_0_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
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
void simd_kvint_unpack_2_1_0_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_2_2_0_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_2_3_0_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_2_0_1_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_2_1_1_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_2_2_1_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_2_3_1_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_2_0_2_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_2_1_2_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_2_2_2_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_2_3_2_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_3_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_2_1_3_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_2_2_3_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_3_3_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_0_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_2_1_0_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_2_2_0_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_2_3_0_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_2_0_1_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_2_1_1_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_2_2_1_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_2_3_1_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_2_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_2_1_2_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_2_2_2_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_3_2_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_3_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_2_1_3_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_2_3_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_3_3_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_0_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
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
void simd_kvint_unpack_2_1_0_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
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
void simd_kvint_unpack_2_2_0_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
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
void simd_kvint_unpack_2_3_0_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_1_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
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
void simd_kvint_unpack_2_1_1_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
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
void simd_kvint_unpack_2_2_1_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_3_1_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_2_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $16,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
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
void simd_kvint_unpack_2_1_2_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_2_2_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_3_2_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_3_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_1_3_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_2_3_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_3_3_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_0_0_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_1_0_0_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_2_0_0_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_3_0_0_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_0_1_0_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_1_1_0_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_2_1_0_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_3_1_0_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_0_2_0_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_1_2_0_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_2_2_0_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_3_2_0_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_3_0_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_1_3_0_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_2_3_0_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_3_3_0_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_0_1_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_1_0_1_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_2_0_1_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_3_0_1_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_0_1_1_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_1_1_1_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_2_1_1_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_3_1_1_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_2_1_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_1_2_1_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_2_2_1_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_3_2_1_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_3_1_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_1_3_1_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_2_3_1_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_3_3_1_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_0_2_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_1_0_2_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_2_0_2_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_3_0_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_1_2_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_1_1_2_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_2_1_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_3_1_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_2_2_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_1_2_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_2_2_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_3_2_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_3_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_1_3_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_2_3_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_3_3_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_0_3_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_1_0_3_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_2_0_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_3_0_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_1_3_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_1_1_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_2_1_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_3_1_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_2_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_1_2_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_2_2_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_3_2_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_3_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_1_3_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_2_3_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_3_3_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqu %8,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"psrld $16,%%xmm8\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm4,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"psrld $8,%%xmm8\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm5,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"psrld $8,%%xmm8\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm6,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"psrld $8,%%xmm8\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_0_0_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_1_0_0_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_2_0_0_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_3_0_0_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_0_1_0_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_1_1_0_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_2_1_0_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_3_1_0_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_2_0_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_1_2_0_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_2_2_0_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_3_2_0_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_3_0_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_1_3_0_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_2_3_0_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_3_3_0_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_0_1_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_1_0_1_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_2_0_1_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_3_0_1_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_1_1_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_1_1_1_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_2_1_1_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_3_1_1_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_2_1_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_1_2_1_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_2_2_1_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_3_2_1_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_3_1_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_1_3_1_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_2_3_1_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_3_3_1_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_0_2_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_1_0_2_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_2_0_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_3_0_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_1_2_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_1_1_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_2_1_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_3_1_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_2_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_1_2_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_2_2_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_3_2_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_3_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_1_3_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_2_3_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_3_3_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqu %8,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"psrld $16,%%xmm8\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm4,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"psrld $16,%%xmm8\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm5,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"psrld $8,%%xmm8\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm6,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"psrld $8,%%xmm8\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_0_3_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_1_0_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_2_0_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_3_0_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_1_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_1_1_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_2_1_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_3_1_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_2_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_1_2_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_2_2_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_3_2_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqu %8,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"psrld $16,%%xmm8\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm4,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"psrld $16,%%xmm8\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm5,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"psrld $16,%%xmm8\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm6,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"psrld $8,%%xmm8\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_3_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_1_3_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_2_3_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqu %8,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"psrld $16,%%xmm8\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm4,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"psrld $16,%%xmm8\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm5,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"psrld $16,%%xmm8\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm6,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"psrld $16,%%xmm8\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_3_3_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqu %8,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"psrld $16,%%xmm8\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm4,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"psrld $16,%%xmm8\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm5,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"psrld $16,%%xmm8\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm6,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"psrld $16,%%xmm8\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_0_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
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
void simd_kvint_unpack_3_1_0_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
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
void simd_kvint_unpack_3_2_0_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_3_0_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm6\n"
			"pslld $16,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_1_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
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
void simd_kvint_unpack_3_1_1_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_3_2_1_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_3_3_1_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_3_0_2_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_1_2_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_2_2_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_3_2_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"psrld $8,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
			"movdqu %%xmm6,%2\n"
			"movdqa %%xmm5,%%xmm6\n"
			"movdqu %%xmm6,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_3_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_3_1_3_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_3_2_3_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%1\n"
			"movdqa %%xmm4,%%xmm6\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm6\n"
			"pslld $24,%%xmm7\n"
			"por %%xmm7,%%xmm6\n"
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
void simd_kvint_unpack_3_3_3_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $24,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_0_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
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
void simd_kvint_unpack_3_1_0_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_3_2_0_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_3_3_0_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_3_0_1_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_3_1_1_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_3_2_1_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_3_3_1_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_3_0_2_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_3_1_2_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_3_2_2_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_3_3_2_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $24,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_3_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_3_1_3_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm1,%%xmm6\n"
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
void simd_kvint_unpack_3_2_3_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $24,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_3_3_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $24,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_0_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_3_1_0_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_3_2_0_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_3_3_0_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_3_0_1_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_3_1_1_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_3_2_1_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_3_3_1_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $24,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_2_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_3_1_2_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_3_2_2_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $24,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_3_2_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $24,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_3_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
			"pand %%xmm2,%%xmm6\n"
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
void simd_kvint_unpack_3_1_3_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $24,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_2_3_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $24,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_3_3_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $24,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_0_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
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
void simd_kvint_unpack_3_1_0_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
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
void simd_kvint_unpack_3_2_0_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
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
void simd_kvint_unpack_3_3_0_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $24,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_1_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
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
void simd_kvint_unpack_3_1_1_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
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
void simd_kvint_unpack_3_2_1_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $24,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_3_1_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $24,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_2_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqa %%xmm3,%%xmm6\n"
			"psrld $24,%%xmm6\n"
			"pand %%xmm0,%%xmm6\n"
			"movdqu %%xmm6,%0\n"
			"movdqa %%xmm4,%%xmm6\n"
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
void simd_kvint_unpack_3_1_2_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $24,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_2_2_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $24,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_3_2_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $24,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_3_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $24,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_1_3_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $24,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_2_3_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $24,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_3_3_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"psrld $24,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_0_0_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_1_0_0_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_2_0_0_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_3_0_0_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_0_1_0_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_1_1_0_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_2_1_0_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_3_1_0_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_0_2_0_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_1_2_0_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_2_2_0_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_3_2_0_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_3_0_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_1_3_0_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_2_3_0_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_3_3_0_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_0_1_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_1_0_1_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_2_0_1_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_3_0_1_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_0_1_1_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_1_1_1_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_2_1_1_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_3_1_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_2_1_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_1_2_1_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_2_2_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_3_2_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_3_1_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_1_3_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_2_3_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_3_3_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_0_2_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_1_0_2_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_2_0_2_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_3_0_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_1_2_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_1_1_2_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_2_1_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_3_1_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_2_2_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_1_2_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_2_2_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_3_2_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_3_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_1_3_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_2_3_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_3_3_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_0_3_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_1_0_3_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_2_0_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_3_0_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_1_3_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_1_1_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_2_1_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_3_1_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_2_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_1_2_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_2_2_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_3_2_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_3_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_1_3_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_2_3_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_3_3_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqu %8,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"psrld $24,%%xmm8\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm4,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"psrld $8,%%xmm8\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm5,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"psrld $8,%%xmm8\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm6,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"psrld $8,%%xmm8\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_0_0_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_1_0_0_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_2_0_0_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_3_0_0_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_0_1_0_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_1_1_0_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_2_1_0_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_3_1_0_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_2_0_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_1_2_0_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_2_2_0_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_3_2_0_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_3_0_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_1_3_0_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_2_3_0_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_3_3_0_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_0_1_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_1_0_1_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_2_0_1_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_3_0_1_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_1_1_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_1_1_1_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_2_1_1_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_3_1_1_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_2_1_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_1_2_1_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_2_2_1_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_3_2_1_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_3_1_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_1_3_1_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_2_3_1_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_3_3_1_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_0_2_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_1_0_2_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_2_0_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_3_0_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_1_2_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_1_1_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_2_1_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_3_1_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_2_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_1_2_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_2_2_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_3_2_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_3_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_1_3_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_2_3_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_3_3_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqu %8,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"psrld $24,%%xmm8\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm4,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"psrld $16,%%xmm8\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm5,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"psrld $8,%%xmm8\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm6,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"psrld $8,%%xmm8\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_0_3_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_1_0_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_2_0_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_3_0_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_1_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_1_1_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_2_1_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_3_1_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_2_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_1_2_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_2_2_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_3_2_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqu %8,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"psrld $24,%%xmm8\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm4,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"psrld $16,%%xmm8\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm5,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"psrld $16,%%xmm8\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm6,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"psrld $8,%%xmm8\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_3_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_1_3_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_2_3_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqu %8,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"psrld $24,%%xmm8\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm4,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"psrld $16,%%xmm8\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm5,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"psrld $16,%%xmm8\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm6,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"psrld $16,%%xmm8\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_3_3_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqu %8,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"psrld $24,%%xmm8\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm4,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"psrld $16,%%xmm8\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm5,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"psrld $16,%%xmm8\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm6,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"psrld $16,%%xmm8\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_0_0_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_1_0_0_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_2_0_0_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_3_0_0_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_1_0_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_1_1_0_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_2_1_0_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_3_1_0_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_2_0_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_1_2_0_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_2_2_0_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_3_2_0_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_3_0_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_1_3_0_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_2_3_0_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_3_3_0_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"psrld $24,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_0_1_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_1_0_1_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_2_0_1_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_3_0_1_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_1_1_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_1_1_1_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_2_1_1_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_3_1_1_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_2_1_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_1_2_1_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_2_2_1_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_3_2_1_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_3_1_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_1_3_1_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_2_3_1_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $8,%%xmm7\n"
			"pslld $24,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_3_3_1_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqu %8,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"psrld $24,%%xmm8\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm4,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"psrld $24,%%xmm8\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm5,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"psrld $8,%%xmm8\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm6,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"psrld $8,%%xmm8\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_0_2_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_1_0_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_2_0_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_3_0_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_1_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_1_1_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_2_1_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_3_1_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_2_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_1_2_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_2_2_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_3_2_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqu %8,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"psrld $24,%%xmm8\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm4,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"psrld $24,%%xmm8\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm5,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"psrld $16,%%xmm8\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm6,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"psrld $8,%%xmm8\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_3_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_1_3_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $16,%%xmm7\n"
			"pslld $16,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_2_3_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqu %8,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"psrld $24,%%xmm8\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm4,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"psrld $24,%%xmm8\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm5,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"psrld $16,%%xmm8\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm6,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"psrld $16,%%xmm8\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_3_3_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqu %8,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"psrld $24,%%xmm8\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm4,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"psrld $24,%%xmm8\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm5,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"psrld $16,%%xmm8\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm6,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"psrld $16,%%xmm8\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_0_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_1_0_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_2_0_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_3_0_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"psrld $24,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_1_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_1_1_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_2_1_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"psrld $8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_3_1_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqu %8,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"psrld $24,%%xmm8\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm4,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"psrld $24,%%xmm8\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm5,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"psrld $24,%%xmm8\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm6,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"psrld $8,%%xmm8\n"
			"pslld $24,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_2_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_1_2_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"pand %%xmm2,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"psrld $16,%%xmm7\n"
			"pand %%xmm1,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_2_2_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqu %8,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"psrld $24,%%xmm8\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm4,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"psrld $24,%%xmm8\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm5,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"psrld $24,%%xmm8\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm6,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"psrld $16,%%xmm8\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_3_2_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqu %8,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"psrld $24,%%xmm8\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm4,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"psrld $24,%%xmm8\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm5,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"psrld $24,%%xmm8\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm6,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"psrld $16,%%xmm8\n"
			"pslld $16,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_3_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqa %%xmm3,%%xmm7\n"
			"movdqa %%xmm4,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%0\n"
			"movdqa %%xmm4,%%xmm7\n"
			"movdqa %%xmm5,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%1\n"
			"movdqa %%xmm5,%%xmm7\n"
			"movdqa %%xmm6,%%xmm8\n"
			"psrld $24,%%xmm7\n"
			"pslld $8,%%xmm8\n"
			"por %%xmm8,%%xmm7\n"
			"movdqu %%xmm7,%2\n"
			"movdqa %%xmm6,%%xmm7\n"
			"psrld $24,%%xmm7\n"
			"pand %%xmm0,%%xmm7\n"
			"movdqu %%xmm7,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_1_3_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqu %8,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"psrld $24,%%xmm8\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm4,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"psrld $24,%%xmm8\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm5,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"psrld $24,%%xmm8\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm6,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"psrld $24,%%xmm8\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"pand %%xmm1,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_2_3_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqu %8,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"psrld $24,%%xmm8\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm4,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"psrld $24,%%xmm8\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm5,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"psrld $24,%%xmm8\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm6,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"psrld $24,%%xmm8\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"pand %%xmm2,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_3_3_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %4,%%xmm3\n"
			"movdqu %5,%%xmm4\n"
			"movdqu %6,%%xmm5\n"
			"movdqu %7,%%xmm6\n"
			"movdqu %8,%%xmm7\n"
			"movdqa %%xmm3,%%xmm8\n"
			"movdqa %%xmm4,%%xmm9\n"
			"psrld $24,%%xmm8\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%0\n"
			"movdqa %%xmm4,%%xmm8\n"
			"movdqa %%xmm5,%%xmm9\n"
			"psrld $24,%%xmm8\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%1\n"
			"movdqa %%xmm5,%%xmm8\n"
			"movdqa %%xmm6,%%xmm9\n"
			"psrld $24,%%xmm8\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%2\n"
			"movdqa %%xmm6,%%xmm8\n"
			"movdqa %%xmm7,%%xmm9\n"
			"psrld $24,%%xmm8\n"
			"pslld $8,%%xmm9\n"
			"por %%xmm9,%%xmm8\n"
			"movdqu %%xmm8,%3\n"
			:"=m"(des[0]),"=m"(des[4]),"=m"(des[8]),"=m"(des[12])
			:"m"(src[0]),"m"(src[4]),"m"(src[8]),"m"(src[12]),"m"(src[16])
			:"memory");
}

}
}

#endif

#endif /* SIMD_KVINT_UNPACK_16INTS_HPP_ */
