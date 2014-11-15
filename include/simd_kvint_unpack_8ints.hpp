/*
 * simd_kvint_unpack_8ints.hpp
 *
 *  simd_kvint_unpack_x_y: x->curByteOffset (0-3), y->byteCount-1 (0-3)
 *  simd_kvint_unpack_x_y_z: x->curByteOffset (0-3), y->byteCount-1 of second int(0-3),
 *  						z->byteCount-1 of first int(0-3)
 *
 *  Created on: 2013-6-2
 *      Author: zxd
 */

#ifndef SIMD_KVINT_UNPACK_8INTS_HPP_
#define SIMD_KVINT_UNPACK_8INTS_HPP_

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
void simd_kvint_unpack_0_0_0(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_1_0(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_2_0(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_3_0(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_0_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_1_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_2_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_3_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_0_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_1_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_2_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_3_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_0_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_1_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_2_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_0_3_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_1_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqa %%xmm3,%%xmm4\n"
			"psrld $8,%%xmm4\n"
			"pand %%xmm0,%%xmm4\n"
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
void simd_kvint_unpack_1_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqa %%xmm3,%%xmm4\n"
			"psrld $8,%%xmm4\n"
			"pand %%xmm0,%%xmm4\n"
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
void simd_kvint_unpack_1_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
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
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
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
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_0_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqa %%xmm3,%%xmm4\n"
			"psrld $8,%%xmm4\n"
			"pand %%xmm1,%%xmm4\n"
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
void simd_kvint_unpack_1_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
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
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
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
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
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
void simd_kvint_unpack_1_0_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_1_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $8,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm4,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_1_0_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_1_1_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_1_2_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_1_3_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqa %%xmm3,%%xmm4\n"
			"psrld $16,%%xmm4\n"
			"pand %%xmm0,%%xmm4\n"
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
void simd_kvint_unpack_2_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
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
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
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
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
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
void simd_kvint_unpack_2_0_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $16,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm4,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_2_0_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_1_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_2_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_3_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_0_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_1_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_2_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_2_3_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm4,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %2,%%xmm3\n"
			"movdqu %3,%%xmm4\n"
			"movdqa %%xmm3,%%xmm5\n"
			"psrld $24,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"movdqu %%xmm5,%0\n"
			"movdqa %%xmm4,%%xmm5\n"
			"movdqu %%xmm5,%1\n"
			:"=m"(des[0]),"=m"(des[4])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}
template<typename T>
void simd_kvint_unpack_3_0_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_1_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_2_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_3_1(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_0_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_1_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_2_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_3_2(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_0_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_1_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_2_3(T* des, const uint32_t* src) {
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
void simd_kvint_unpack_3_3_3(T* des, const uint32_t* src) {
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

}
}

#endif

#endif /* SIMD_KVINT_UNPACK_8INTS_HPP_ */


/* meta code:

#include <iostream>
#include <sstream>
#include <stdint.h>
#include <string>
#include <stdlib.h>

using namespace std;

string FUNC_NAME_PREFIX = "simd_kvint_unpack";
string TRIPLE_TAB = "\t\t\t";
string QUOTE_END_LINE = "\\n\"\n";
int BEG_REG_IDX = 3;

int curHeaderIdx = 0;
string curHeaderStr = "";

string Int2Str(int n) {
	ostringstream oss;
	oss << n;
	return oss.str();
}

void printFunc(int begByteOffset, const int *byteCount, int intNum) {
	string resStr = "";
	int totalByteCount = begByteOffset;
	int *begSrcIdxPerInt = new int[intNum];
	int *endSrcIdxPerInt = new int[intNum];

	resStr += "template<typename T>\n";
	resStr += "void " + FUNC_NAME_PREFIX + "_" + Int2Str(begByteOffset);
	string tmpStr = "";
	for (int i=0; i<intNum; i++) {
		begSrcIdxPerInt[i] = totalByteCount / 4;
		//byte offset of last byte of this int
		endSrcIdxPerInt[i] = (totalByteCount + byteCount[i] - 1)/ 4;
		totalByteCount += byteCount[i];
		tmpStr = "_" + Int2Str(byteCount[i]-1) + tmpStr;	//reverse order!
	}
	resStr += tmpStr;
	resStr += "(T* des, const uint32_t* src) {\n";
	resStr += "\t__asm__ volatile(\"prefetchnta %0\"::\"m\" (src[0]));\n";
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

void recursivePrint(int begByteOffset, int *byteCount, int intNum, int curIdx) {
	if (curIdx == intNum) {
		printFunc(begByteOffset, byteCount, intNum);
		return;
	}
	for (int i=0; i<4; i++) {
		byteCount[curIdx] = i + 1;
		recursivePrint(begByteOffset, byteCount, intNum, curIdx + 1);
	}
}

void printFuncHeader(int *arr, int num, int idx) {
	if (idx == num) {
		if (curHeaderIdx % 4 == 0)
			curHeaderStr += TRIPLE_TAB;
		curHeaderStr += FUNC_NAME_PREFIX;
		for (int i=0; i<num; i++) {
			curHeaderStr += "_" + Int2Str(arr[i]);
		}
		curHeaderStr += "<T>,";
		if (curHeaderIdx % 4 == 3)
			curHeaderStr += "\n";
		curHeaderIdx ++;
		return;
	}

	for (int i=0; i<4; i++) {
		arr[idx] = i;
		printFuncHeader(arr, num, idx + 1);
	}
}

void GenTotalByteCount_Binary_4Ints() {
	for (int i=0; i<256; i++) {
		int totalByteCount = 4 +
			(i & 3) + ((i>>2)&3) + ((i>>4)&3) + ((i>>6)&3);
		cout << totalByteCount << ",";
		if (i % 16 == 15)
			cout << endl;
	}
}

int main(int argc, char **argv) {
	int begByteOffset = 0;
	int byteCount[10];
	int arr[10];

	int intNum = atoi(argv[1]);

	GenTotalByteCount_Binary_4Ints();

	printFuncHeader(arr, intNum+1, 0);
	cout << curHeaderStr;

	for (begByteOffset = 0; begByteOffset < 4; begByteOffset++) {
		recursivePrint(begByteOffset, byteCount, intNum, 0);
	}
	return 0;
}

 */
