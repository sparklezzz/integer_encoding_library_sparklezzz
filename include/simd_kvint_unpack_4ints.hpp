/*
 * simd_kvint_unpack_4ints.hpp
 *
 *  simd_kvint_unpack_x_y: x->curByteOffset (0-3), y->byteCount-1 (0-3)
 *  simd_kvint_unpack_x_y_z: x->curByteOffset (0-3), y->byteCount-1 (0-3), z->byteCount-1 (0-3)
 *
 *  Created on: 2013-6-2
 *      Author: zxd
 */

#ifndef SIMD_KVINT_UNPACK_4INTS_HPP_
#define SIMD_KVINT_UNPACK_4INTS_HPP_

#ifdef USE_SSE_INSTRUCTION

namespace paradise {
namespace index {

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

template<typename T>
void simd_kvint_unpack_0_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm4\n"
			"pand %%xmm0,%%xmm4\n"
			"movdqu %%xmm4,%0\n"
			:"=m"(des[0])
			:"m"(src[0])
			:"memory");
}

template<typename T>
void simd_kvint_unpack_0_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm4\n"
			"pand %%xmm1,%%xmm4\n"
			"movdqu %%xmm4,%0\n"
			:"=m"(des[0])
			:"m"(src[0])
			:"memory");
}

template<typename T>
void simd_kvint_unpack_0_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm4\n"
			"pand %%xmm2,%%xmm4\n"
			"movdqu %%xmm4,%0\n"
			:"=m"(des[0])
			:"m"(src[0])
			:"memory");
}

template<typename T>
void simd_kvint_unpack_0_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm4\n"
			"movdqu %%xmm4,%0\n"
			:"=m"(des[0])
			:"m"(src[0])
			:"memory");
}

template<typename T>
void simd_kvint_unpack_1_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm4\n"
			"psrld $8,%%xmm4\n"
			"pand %%xmm0,%%xmm4\n"
			"movdqu %%xmm4,%0\n"
			:"=m"(des[0])
			:"m"(src[0])
			:"memory");
}

template<typename T>
void simd_kvint_unpack_1_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm4\n"
			"psrld $8,%%xmm4\n"
			"pand %%xmm1,%%xmm4\n"
			"movdqu %%xmm4,%0\n"
			:"=m"(des[0])
			:"m"(src[0])
			:"memory");
}

template<typename T>
void simd_kvint_unpack_1_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm4\n"
			"psrld $8,%%xmm4\n"
			//"pand %%xmm2,%%xmm4\n"
			"movdqu %%xmm4,%0\n"
			:"=m"(des[0])
			:"m"(src[0])
			:"memory");
}

template<typename T>
void simd_kvint_unpack_1_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm4\n"
			"psrld $8,%%xmm4\n"
			"movdqu %2,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"pslld $24,%%xmm5\n"
			"por %%xmm5,%%xmm4\n"
			"movdqu %%xmm4,%0\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}

template<typename T>
void simd_kvint_unpack_2_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm4\n"
			"psrld $16,%%xmm4\n"
			"pand %%xmm0,%%xmm4\n"
			"movdqu %%xmm4,%0\n"
			:"=m"(des[0])
			:"m"(src[0])
			:"memory");
}

template<typename T>
void simd_kvint_unpack_2_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm4\n"
			"psrld $16,%%xmm4\n"
			//"pand %%xmm1,%%xmm4\n"
			"movdqu %%xmm4,%0\n"
			:"=m"(des[0])
			:"m"(src[0])
			:"memory");
}

template<typename T>
void simd_kvint_unpack_2_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm4\n"
			"psrld $16,%%xmm4\n"
			"movdqu %2,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"pslld $16,%%xmm5\n"
			"por %%xmm5,%%xmm4\n"
			"movdqu %%xmm4,%0\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}

template<typename T>
void simd_kvint_unpack_2_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm4\n"
			"psrld $16,%%xmm4\n"
			"movdqu %2,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"pslld $16,%%xmm5\n"
			"por %%xmm5,%%xmm4\n"
			"movdqu %%xmm4,%0\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}

template<typename T>
void simd_kvint_unpack_3_0(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm4\n"
			"psrld $24,%%xmm4\n"
			//"pand %%xmm0,%%xmm4\n"
			"movdqu %%xmm4,%0\n"
			:"=m"(des[0])
			:"m"(src[0])
			:"memory");
}

template<typename T>
void simd_kvint_unpack_3_1(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm4\n"
			"psrld $24,%%xmm4\n"
			"movdqu %2,%%xmm5\n"
			"pand %%xmm0,%%xmm5\n"
			"pslld $8,%%xmm5\n"
			"por %%xmm5,%%xmm4\n"
			"movdqu %%xmm4,%0\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}

template<typename T>
void simd_kvint_unpack_3_2(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm4\n"
			"psrld $24,%%xmm4\n"
			"movdqu %2,%%xmm5\n"
			"pand %%xmm1,%%xmm5\n"
			"pslld $8,%%xmm5\n"
			"por %%xmm5,%%xmm4\n"
			"movdqu %%xmm4,%0\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}

template<typename T>
void simd_kvint_unpack_3_3(T* des, const uint32_t* src) {
	__asm__ volatile("prefetchnta %0"::"m" (src[0]));
	__asm__(
			"movdqu %1,%%xmm4\n"
			"psrld $24,%%xmm4\n"
			"movdqu %2,%%xmm5\n"
			"pand %%xmm2,%%xmm5\n"
			"pslld $8,%%xmm5\n"
			"por %%xmm5,%%xmm4\n"
			"movdqu %%xmm4,%0\n"
			:"=m"(des[0])
			:"m"(src[0]),"m"(src[4])
			:"memory");
}

}
}

#endif

#endif /* SIMD_KVINT_UNPACK_4INTS_HPP_ */
