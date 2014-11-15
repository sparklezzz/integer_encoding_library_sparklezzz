/*
 * Simple64_x64.hpp
 *
 *  Created on: 2010-12-1
 *      Author: shandd
 */

#ifndef SIMPLE64_X64_HPP_
#define SIMPLE64_X64_HPP_
#include "Compressor.hpp"
#include <stdint.h>
namespace paradise {
namespace index {
class Simple64_x64: public Compressor {
public:
	Simple64_x64() {
	}
	virtual ~Simple64_x64() {
	}

public:
	virtual int
	encodeUint32(char* des, const uint32_t* src, uint32_t encodeNum);
	virtual int
	decodeUint32(uint32_t* des, const char* src, uint32_t decodeNum);

	virtual int
	encodeUint16(char* des, const uint16_t* src, uint32_t encodeNum);
	virtual int
	decodeUint16(uint16_t* des, const char* src, uint32_t decodeNum);

	virtual int encodeUint8(char* des, const uint8_t* src, uint32_t encodeNum);
	virtual int decodeUint8(uint8_t* des, const char* src, uint32_t decodeNum);

	template<typename T>
	static int encode(char* des, const T* src, uint32_t length);

	template<typename T>
	static int decode(T* des, const char* src, int length);

	template<typename T>
	static int s64_encode(uint64_t* des, const T* src, int left);

	template<typename T>
	static int s64_decode(T* des, uint64_t src);
	virtual std::string getCompressorName() {
		return "Simple64_x64";
	}
	virtual Compressor* clone();
private:
	static uint8_t bitSizeArr[64][58];
	static uint8_t codeNum[64];
};

template<typename T>
int Simple64_x64::encode(char* des, const T* src, uint32_t encodeNum) {
	uint64_t* desInt = (uint64_t *) des;
	int left = encodeNum;
	int ret;
	while (left > 0) {
		ret = s64_encode(desInt, src, left);
		src += ret;
		left -= ret;
		desInt++;
	}
	return (char*) desInt - des;
}

template<typename T>
int Simple64_x64::decode(T* des, const char* src, int decodeNum) {
	int num;
	uint64_t* input = (uint64_t*) src;
	int left = decodeNum;
	while (left > 0) {
		num = s64_decode(des, *input);
		input++;
		left -= num;
		des += num;
	}
	return (char*) input - src;
}
template<typename T>
int Simple64_x64::s64_encode(uint64_t* des, const T* src, int left) {
	uint32_t pos, num2code, shift;
	uint64_t maskVal = 1, tmpVal;
	for (uint64_t bitNum = 0; bitNum < 64; bitNum++) {
		(*des) = bitNum << 58;
		if (left < codeNum[bitNum]) {
			continue;
		}
		num2code = codeNum[bitNum];
		for (pos = 0, shift = 0; (pos < num2code) && ((tmpVal = *(src + pos))
				< (maskVal << bitSizeArr[bitNum][pos]));) {
			(*des) += (tmpVal << shift);
			shift += bitSizeArr[bitNum][pos];
			pos++;

		}
		if (pos == num2code) {
			(src) += num2code;
			break;
		}
	}
	return num2code;
}
template<typename T>
int Simple64_x64::s64_decode(T* des, uint64_t src) {
	/*
	uint8_t num = (src) >> 58;
	int enNum = codeNum[num];
	uint8_t * decodeArr = bitSizeArr[num];
	uint8_t bitPos = 0;
	for (int i = 0; i < enNum; i++) {
		*des = (src >> bitPos) & ((1U << decodeArr[i]) - 1);
		++des;
		bitPos += decodeArr[i];
	}
	return enNum;
	*/
	uint8_t num = (src) >> 58;
	switch (num) {
	case 0: {
		int i = 0;
		for(; i < 58; i++){
			*des = (src >> i) & 1;
			++des;
		}
		break;
	}
	case 1: {
		int i = 0;
		for(; i < 20; i += 2){
			*des = (src >> i) & 3;
			++des;
		}
		for(; i < 58; i++){
			*des = (src >> i) & 1;
			++des;
		}
		break;
	}
	case 2: {
		int i = 0;
		for(; i < 10; i++){
			*des = (src >> i) & 1;
			++des;
		}
		for(; i < 30; i += 2){
			*des = (src >> i) & 3;
			++des;
		}
		for(; i < 58; i++){
			*des = (src >> i) & 1;
			++des;
		}
		break;
	}
	case 3: {
		int i = 0;
		for(; i < 20; i++){
			*des = (src >> i) & 1;
			++des;
		}
		for(; i < 40; i += 2){
			*des = (src >> i) & 3;
			++des;
		}
		for(; i < 58; i++){
			*des = (src >> i) & 1;
			++des;
		}
		break;
	}
	case 4: {
		int i = 0;
		for(; i < 30; i++){
			*des = (src >> i) & 1;
			++des;
		}
		for(; i < 50; i += 2){
			*des = (src >> i) & 3;
			++des;
		}
		for(; i < 58; i++){
			*des = (src >> i) & 1;
			++des;
		}
		break;
	}
	case 5: {
		int i = 0;
		for(; i < 38; i++){
			*des = (src >> i) & 1;
			++des;
		}
		for(; i < 58; i += 2){
			*des = (src >> i) & 3;
			++des;
		}
		break;
	}
	case 6: {
		int i = 0;
		for(; i < 28; i += 2){
			*des = (src >> i) & 3;
			++des;
		}
		for(; i < 58; i++){
			*des = (src >> i) & 1;
			++des;
		}
		break;
	}
	case 7: {
		int i = 0;
		for(; i < 18; i++){
			*des = (src >> i) & 1;
			++des;
		}
		for(; i < 46; i += 2){
			*des = (src >> i) & 3;
			++des;
		}
		for(; i < 58; i++){
			*des = (src >> i) & 1;
			++des;
		}
		break;
	}
	case 8: {
		int i = 0;
		for(; i < 36; i += 2){
			*des = (src >> i) & 3;
			++des;
		}
		for(; i < 58; i++){
			*des = (src >> i) & 1;
			++des;
		}
		break;
	}
	case 9: {
		int i = 0;
		for(; i < 18; i++){
			*des = (src >> i) & 1;
			++des;
		}
		for(; i < 54; i += 2){
			*des = (src >> i) & 3;
			++des;
		}
		for(; i < 58; i++){
			*des = (src >> i) & 1;
			++des;
		}
		break;
	}
	case 10: {
		int i = 0;
		for(; i < 44; i += 2){
			*des = (src >> i) & 3;
			++des;
		}
		for(; i < 58; i++){
			*des = (src >> i) & 1;
			++des;
		}
		break;
	}
	case 11: {
		int i = 0;
		for(; i < 14; i++){
			*des = (src >> i) & 1;
			++des;
		}
		for(; i < 58; i += 2){
			*des = (src >> i) & 3;
			++des;
		}
		break;
	}
	case 12: {
		int i = 0;
		for(; i < 52; i += 2){
			*des = (src >> i) & 3;
			++des;
		}
		for(; i < 58; i++){
			*des = (src >> i) & 1;
			++des;
		}
		break;
	}
	case 13: {
		int i = 0;
		for(; i < 58; i += 2){
			*des = (src >> i) & 3;
			++des;
		}
		break;
	}
	case 14: {
		int i = 0;
		for(; i < 52; i += 2){
			*des = (src >> i) & 3;
			++des;
		}
		for(; i < 58; i += 3){
			*des = (src >> i) & 7;
			++des;
		}
		break;
	}
	case 15: {
		int i = 0;
		for(; i < 12; i += 3){
			*des = (src >> i) & 7;
			++des;
		}
		for(; i < 58; i += 2){
			*des = (src >> i) & 3;
			++des;
		}
		break;
	}
	case 16: {
		int i = 0;
		for(; i < 40; i += 2){
			*des = (src >> i) & 3;
			++des;
		}
		for(; i < 58; i += 3){
			*des = (src >> i) & 7;
			++des;
		}
		break;
	}
	case 17: {
		int i = 0;
		for(; i < 18; i += 3){
			*des = (src >> i) & 7;
			++des;
		}
		for(; i < 58; i += 2){
			*des = (src >> i) & 3;
			++des;
		}
		break;
	}
	case 18: {
		int i = 0;
		for(; i < 30; i += 3){
			*des = (src >> i) & 7;
			++des;
		}
		for(; i < 58; i += 2){
			*des = (src >> i) & 3;
			++des;
		}
		break;
	}
	case 19: {
		int i = 0;
		for(; i < 28; i += 2){
			*des = (src >> i) & 3;
			++des;
		}
		for(; i < 58; i += 3){
			*des = (src >> i) & 7;
			++des;
		}
		break;
	}
	case 20: {
		int i = 0;
		for(; i < 30; i += 3){
			*des = (src >> i) & 7;
			++des;
		}
		for(; i < 58; i += 2){
			*des = (src >> i) & 3;
			++des;
		}
		break;
	}
	case 21: {
		int i = 0;
		for(; i < 22; i += 2){
			*des = (src >> i) & 3;
			++des;
		}
		for(; i < 58; i += 3){
			*des = (src >> i) & 7;
			++des;
		}
		break;
	}
	case 22: {
		int i = 0;
		for(; i < 42; i += 3){
			*des = (src >> i) & 7;
			++des;
		}
		for(; i < 58; i += 2){
			*des = (src >> i) & 3;
			++des;
		}
		break;
	}
	case 23: {
		int i = 0;
		for(; i < 16; i += 2){
			*des = (src >> i) & 3;
			++des;
		}
		for(; i < 58; i += 3){
			*des = (src >> i) & 7;
			++des;
		}
		break;
	}
	case 24: {
		int i = 0;
		for(; i < 54; i += 3){
			*des = (src >> i) & 7;
			++des;
		}
		for(; i < 58; i += 2){
			*des = (src >> i) & 3;
			++des;
		}
		break;
	}
	case 25: {
		int i = 0;
		for(; i < 4; i += 2){
			*des = (src >> i) & 3;
			++des;
		}
		for(; i < 58; i += 3){
			*des = (src >> i) & 7;
			++des;
		}
		break;
	}
	case 26: {
		int i = 0;
		for(; i < 24; i += 3){
			*des = (src >> i) & 7;
			++des;
		}
		for(; i < 28; i += 2){
			*des = (src >> i) & 3;
			++des;
		}
		for(; i < 58; i += 3){
			*des = (src >> i) & 7;
			++des;
		}
		break;
	}
	case 27: {
		int i = 0;
		*des = (src >> i) & 15;
		++des;
		i+=4;
		for(; i < 58; i += 3){
			*des = (src >> i) & 7;
			++des;
		}
		break;
	}
	case 28: {
		int i = 0;
		for(; i < 16; i += 4){
			*des = (src >> i) & 15;
			++des;
		}
		for(; i < 58; i += 3){
			*des = (src >> i) & 7;
			++des;
		}
		break;
	}
	case 29: {
		int i = 0;
		for(; i < 18; i += 3){
			*des = (src >> i) & 7;
			++des;
		}
		for(; i < 34; i += 4){
			*des = (src >> i) & 15;
			++des;
		}
		for(; i < 58; i += 3){
			*des = (src >> i) & 7;
			++des;
		}
		break;
	}
	case 30: {
		int i = 0;
		for(; i < 36; i += 3){
			*des = (src >> i) & 7;
			++des;
		}
		for(; i < 52; i += 4){
			*des = (src >> i) & 15;
			++des;
		}
		for(; i < 58; i += 3){
			*des = (src >> i) & 7;
			++des;
		}
		break;
	}
	case 31: {
		int i = 0;
		for(; i < 40; i += 4){
			*des = (src >> i) & 15;
			++des;
		}
		for(; i < 58; i += 3){
			*des = (src >> i) & 7;
			++des;
		}
		break;
	}
	case 32: {
		int i = 0;
		for(; i < 18; i += 3){
			*des = (src >> i) & 7;
			++des;
		}
		for(; i < 58; i += 4){
			*des = (src >> i) & 15;
			++des;
		}
		break;
	}
	case 33: {
		int i = 0;
		for(; i < 9; i += 3){
			*des = (src >> i) & 7;
			++des;
		}
		for(; i < 49; i += 4){
			*des = (src >> i) & 15;
			++des;
		}
		for(; i < 58; i += 3){
			*des = (src >> i) & 7;
			++des;
		}
		break;
	}
	case 34: {
		int i = 0;
		for(; i < 52; i += 4){
			*des = (src >> i) & 15;
			++des;
		}
		for(; i < 58; i += 3){
			*des = (src >> i) & 7;
			++des;
		}
		break;
	}
	case 35: {
		int i = 0;
		for(; i < 6; i += 3){
			*des = (src >> i) & 7;
			++des;
		}
		for(; i < 58; i += 4){
			*des = (src >> i) & 15;
			++des;
		}
		break;
	}
	case 36: {
		int i = 0;
		for(; i < 10; i += 5){
			*des = (src >> i) & 31;
			++des;
		}
		for(; i < 58; i += 4){
			*des = (src >> i) & 15;
			++des;
		}
		break;
	}
	case 37: {
		int i = 0;
		for(; i < 20; i += 4){
			*des = (src >> i) & 15;
			++des;
		}
		for(; i < 30; i += 5){
			*des = (src >> i) & 31;
			++des;
		}
		for(; i < 58; i += 4){
			*des = (src >> i) & 15;
			++des;
		}
		break;
	}
	case 38: {
		int i = 0;
		for(; i < 40; i += 4){
			*des = (src >> i) & 15;
			++des;
		}
		for(; i < 50; i += 5){
			*des = (src >> i) & 31;
			++des;
		}
		for(; i < 58; i += 4){
			*des = (src >> i) & 15;
			++des;
		}
		break;
	}
	case 39: {
		int i = 0;
		for(; i < 30; i += 5){
			*des = (src >> i) & 31;
			++des;
		}
		for(; i < 58; i += 4){
			*des = (src >> i) & 15;
			++des;
		}
		break;
	}
	case 40: {
		int i = 0;
		for(; i < 28; i += 4){
			*des = (src >> i) & 15;
			++des;
		}
		for(; i < 58; i += 5){
			*des = (src >> i) & 31;
			++des;
		}
		break;
	}
	case 41: {
		int i = 0;
		for(; i < 30; i += 5){
			*des = (src >> i) & 31;
			++des;
		}
		for(; i < 58; i += 4){
			*des = (src >> i) & 15;
			++des;
		}
		break;
	}
	 case 42:
	 *des = (src) & 31;
	 ++des;
	 *des = (src >> 5) & 31;
	 ++des;
	 *des = (src >> 10) & 31;
	 ++des;
	 *des = (src >> 15) & 31;
	 ++des;
	 *des = (src >> 20) & 31;
	 ++des;
	 *des = (src >> 25) & 31;
	 ++des;
	 *des = (src >> 30) & 31;
	 ++des;
	 *des = (src >> 35) & 31;
	 ++des;
	 *des = (src >> 40) & 31;
	 ++des;
	 *des = (src >> 45) & 31;
	 ++des;
	 *des = (src >> 50) & 15;
	 ++des;
	 *des = (src >> 54) & 15;
	 ++des;
	 break;

	 case 43:
	 *des = (src) & 15;
	 ++des;
	 *des = (src >> 4) & 15;
	 ++des;
	 *des = (src >> 8) & 31;
	 ++des;
	 *des = (src >> 13) & 31;
	 ++des;
	 *des = (src >> 18) & 31;
	 ++des;
	 *des = (src >> 23) & 31;
	 ++des;
	 *des = (src >> 28) & 31;
	 ++des;
	 *des = (src >> 33) & 31;
	 ++des;
	 *des = (src >> 38) & 31;
	 ++des;
	 *des = (src >> 43) & 31;
	 ++des;
	 *des = (src >> 48) & 31;
	 ++des;
	 *des = (src >> 53) & 31;
	 ++des;
	 break;

	 case 44:
	 *des = (src) & 31;
	 ++des;
	 *des = (src >> 5) & 31;
	 ++des;
	 *des = (src >> 10) & 31;
	 ++des;
	 *des = (src >> 15) & 31;
	 ++des;
	 *des = (src >> 20) & 31;
	 ++des;
	 *des = (src >> 25) & 15;
	 ++des;
	 *des = (src >> 29) & 15;
	 ++des;
	 *des = (src >> 33) & 31;
	 ++des;
	 *des = (src >> 38) & 31;
	 ++des;
	 *des = (src >> 43) & 31;
	 ++des;
	 *des = (src >> 48) & 31;
	 ++des;
	 *des = (src >> 53) & 31;
	 ++des;
	 break;

	 case 45:
	 *des = (src) & 63;
	 ++des;
	 *des = (src >> 6) & 63;
	 ++des;
	 *des = (src >> 12) & 63;
	 ++des;
	 *des = (src >> 18) & 31;
	 ++des;
	 *des = (src >> 23) & 31;
	 ++des;
	 *des = (src >> 28) & 31;
	 ++des;
	 *des = (src >> 33) & 31;
	 ++des;
	 *des = (src >> 38) & 31;
	 ++des;
	 *des = (src >> 43) & 31;
	 ++des;
	 *des = (src >> 48) & 31;
	 ++des;
	 *des = (src >> 53) & 31;
	 ++des;
	 break;

	 case 46:
	 *des = (src) & 31;
	 ++des;
	 *des = (src >> 5) & 31;
	 ++des;
	 *des = (src >> 10) & 31;
	 ++des;
	 *des = (src >> 15) & 31;
	 ++des;
	 *des = (src >> 20) & 31;
	 ++des;
	 *des = (src >> 25) & 63;
	 ++des;
	 *des = (src >> 31) & 63;
	 ++des;
	 *des = (src >> 37) & 63;
	 ++des;
	 *des = (src >> 43) & 31;
	 ++des;
	 *des = (src >> 48) & 31;
	 ++des;
	 *des = (src >> 53) & 31;
	 ++des;
	 break;


	 case 47:
	 *des = (src) & 63;
	 ++des;
	 *des = (src >> 6) & 63;
	 ++des;
	 *des = (src >> 12) & 63;
	 ++des;
	 *des = (src >> 18) & 63;
	 ++des;
	 *des = (src >> 24) & 63;
	 ++des;
	 *des = (src >> 30) & 63;
	 ++des;
	 *des = (src >> 36) & 63;
	 ++des;
	 *des = (src >> 42) & 63;
	 ++des;
	 *des = (src >> 48) & 31;
	 ++des;
	 *des = (src >> 53) & 31;
	 ++des;
	 break;

	 case 48:
	 *des = (src) & 31;
	 ++des;
	 *des = (src >> 5) & 31;
	 ++des;
	 *des = (src >> 10) & 63;
	 ++des;
	 *des = (src >> 16) & 63;
	 ++des;
	 *des = (src >> 22) & 63;
	 ++des;
	 *des = (src >> 28) & 63;
	 ++des;
	 *des = (src >> 34) & 63;
	 ++des;
	 *des = (src >> 40) & 63;
	 ++des;
	 *des = (src >> 46) & 63;
	 ++des;
	 *des = (src >> 52) & 63;
	 ++des;
	 break;

	 case 49:
	 *des = (src) & 127;
	 ++des;
	 *des = (src >> 7) & 127;
	 ++des;
	 *des = (src >> 14) & 127;
	 ++des;
	 *des = (src >> 21) & 127;
	 ++des;
	 *des = (src >> 28) & 63;
	 ++des;
	 *des = (src >> 34) & 63;
	 ++des;
	 *des = (src >> 40) & 63;
	 ++des;
	 *des = (src >> 46) & 63;
	 ++des;
	 *des = (src >> 52) & 63;
	 ++des;
	 break;

	 case 50:
	 *des = (src) & 63;
	 ++des;
	 *des = (src >> 6) & 63;
	 ++des;
	 *des = (src >> 12) & 63;
	 ++des;
	 *des = (src >> 18) & 127;
	 ++des;
	 *des = (src >> 25) & 127;
	 ++des;
	 *des = (src >> 32) & 127;
	 ++des;
	 *des = (src >> 39) & 127;
	 ++des;
	 *des = (src >> 46) & 63;
	 ++des;
	 *des = (src >> 52) & 63;
	 ++des;
	 break;

	 case 51:
	 *des = (src) & 63;
	 ++des;
	 *des = (src >> 6) & 63;
	 ++des;
	 *des = (src >> 12) & 63;
	 ++des;
	 *des = (src >> 18) & 63;
	 ++des;
	 *des = (src >> 24) & 63;
	 ++des;
	 *des = (src >> 30) & 127;
	 ++des;
	 *des = (src >> 37) & 127;
	 ++des;
	 *des = (src >> 44) & 127;
	 ++des;
	 *des = (src >> 51) & 127;
	 ++des;
	 break;

	 case 52:
	 *des = (src) & 255;
	 ++des;
	 *des = (src >> 8) & 255;
	 ++des;
	 *des = (src >> 16) & 127;
	 ++des;
	 *des = (src >> 23) & 127;
	 ++des;
	 *des = (src >> 30) & 127;
	 ++des;
	 *des = (src >> 37) & 127;
	 ++des;
	 *des = (src >> 44) & 127;
	 ++des;
	 *des = (src >> 51) & 127;
	 ++des;
	 break;

	 case 53:
	 *des = (src) & 127;
	 ++des;
	 *des = (src >> 7) & 127;
	 ++des;
	 *des = (src >> 14) & 127;
	 ++des;
	 *des = (src >> 21) & 127;
	 ++des;
	 *des = (src >> 28) & 127;
	 ++des;
	 *des = (src >> 35) & 127;
	 ++des;
	 *des = (src >> 42) & 255;
	 ++des;
	 *des = (src >> 50) & 255;
	 ++des;
	 break;

	 case 54:
	 *des = (src) & 511;
	 ++des;
	 *des = (src >> 9) & 511;
	 ++des;
	 *des = (src >> 18) & 255;
	 ++des;
	 *des = (src >> 26) & 255;
	 ++des;
	 *des = (src >> 34) & 255;
	 ++des;
	 *des = (src >> 42) & 255;
	 ++des;
	 *des = (src >> 50) & 255;
	 ++des;
	 break;

	 case 55:
	 *des = (src) & 255;
	 ++des;
	 *des = (src >> 8) & 255;
	 ++des;
	 *des = (src >> 16) & 255;
	 ++des;
	 *des = (src >> 24) & 255;
	 ++des;
	 *des = (src >> 32) & 255;
	 ++des;
	 *des = (src >> 40) & 511;
	 ++des;
	 *des = (src >> 49) & 511;
	 ++des;
	 break;

	 case 56:
	 *des = (src) & 1023;
	 ++des;
	 *des = (src >> 10) & 1023;
	 ++des;
	 *des = (src >> 20) & 1023;
	 ++des;
	 *des = (src >> 30) & 1023;
	 ++des;
	 *des = (src >> 40) & 511;
	 ++des;
	 *des = (src >> 49) & 511;
	 ++des;
	 break;

	 case 57:
	 *des = (src) & 4095;
	 ++des;
	 *des = (src >> 12) & 4095;
	 ++des;
	 *des = (src >> 24) & 4095;
	 ++des;
	 *des = (src >> 36) & 2047;
	 ++des;
	 *des = (src >> 47) & 2047;
	 ++des;
	 break;

	 case 58:
	 *des = (src) & 2047;
	 ++des;
	 *des = (src >> 11) & 2047;
	 ++des;
	 *des = (src >> 22) & 4095;
	 ++des;
	 *des = (src >> 34) & 4095;
	 ++des;
	 *des = (src >> 46) & 4095;
	 ++des;
	 break;

	 case 59:
	 *des = (src) & 32767;
	 ++des;
	 *des = (src >> 15) & 32767;
	 ++des;
	 *des = (src >> 30) & 16383;
	 ++des;
	 *des = (src >> 44) & 16383;
	 ++des;
	 break;

	 case 60:
	 *des = (src) & 16383;
	 ++des;
	 *des = (src >> 14) & 16383;
	 ++des;
	 *des = (src >> 28) & 32767;
	 ++des;
	 *des = (src >> 43) & 32767;
	 ++des;
	 break;

	 case 61:
	 *des = (src) & ((1 << 20) - 1);
	 ++des;
	 *des = (src >> 20) & ((1 << 19) - 1);
	 ++des;
	 *des = (src >> 39) & ((1 << 19) - 1);
	 ++des;
	 break;

	 case 62:
	 *des = (src) & ((1 << 29) - 1);
	 ++des;
	 *des = (src >> 29) & ((1 << 29) - 1);
	 ++des;
	 break;

	 case 63:
	 *des = (src) & ((1LL << 58) - 1);
	 ++des;
	 break;
}
	return codeNum[num];
}

}
}

#endif /* SIMPLE64_X64_HPP_ */
