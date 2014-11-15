/*
 * GvintCompUnaryUnpack.hpp
 *
 *  Created on: 2013-1-24
 *      Author: zxd
 */

#ifndef GVINTCOMPUNARYUNPACK_HPP_
#define GVINTCOMPUNARYUNPACK_HPP_

namespace paradise {
namespace index {
struct GvintCompUnaryUnpackInfo {
		uint8_t offsetArr[8];
		uint32_t maskArr[8];
		uint8_t intNum;
		uint8_t statusGen;	//the bytes left by the group
		bool valid;		//true if it's a valid representation of the group
};

static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_0 = { {0, 1, 2, 3, 4, 5, 6, 7}, {0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff}, 8, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_1 = { {0, 2, 3, 4, 5, 6, 7, 0}, {0xffff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0}, 7, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_2 = { {0, 1, 3, 4, 5, 6, 7, 0}, {0xff, 0xffff, 0xff, 0xff, 0xff, 0xff, 0xff, 0}, 7, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_3 = { {0, 3, 4, 5, 6, 7, 0, 0}, {0xffffff, 0xff, 0xff, 0xff, 0xff, 0xff, 0, 0}, 6, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_4 = { {0, 1, 2, 4, 5, 6, 7, 0}, {0xff, 0xff, 0xffff, 0xff, 0xff, 0xff, 0xff, 0}, 7, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_5 = { {0, 2, 4, 5, 6, 7, 0, 0}, {0xffff, 0xffff, 0xff, 0xff, 0xff, 0xff, 0, 0}, 6, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_6 = { {0, 1, 4, 5, 6, 7, 0, 0}, {0xff, 0xffffff, 0xff, 0xff, 0xff, 0xff, 0, 0}, 6, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_7 = { {0, 4, 5, 6, 7, 0, 0, 0}, {0xffffffff, 0xff, 0xff, 0xff, 0xff, 0, 0, 0}, 5, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_8 = { {0, 1, 2, 3, 5, 6, 7, 0}, {0xff, 0xff, 0xff, 0xffff, 0xff, 0xff, 0xff, 0}, 7, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_9 = { {0, 2, 3, 5, 6, 7, 0, 0}, {0xffff, 0xff, 0xffff, 0xff, 0xff, 0xff, 0, 0}, 6, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_10 = { {0, 1, 3, 5, 6, 7, 0, 0}, {0xff, 0xffff, 0xffff, 0xff, 0xff, 0xff, 0, 0}, 6, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_11 = { {0, 3, 5, 6, 7, 0, 0, 0}, {0xffffff, 0xffff, 0xff, 0xff, 0xff, 0, 0, 0}, 5, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_12 = { {0, 1, 2, 5, 6, 7, 0, 0}, {0xff, 0xff, 0xffffff, 0xff, 0xff, 0xff, 0, 0}, 6, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_13 = { {0, 2, 5, 6, 7, 0, 0, 0}, {0xffff, 0xffffff, 0xff, 0xff, 0xff, 0, 0, 0}, 5, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_14 = { {0, 1, 5, 6, 7, 0, 0, 0}, {0xff, 0xffffffff, 0xff, 0xff, 0xff, 0, 0, 0}, 5, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_15 = { {0, 5, 6, 7, 0, 0, 0, 0}, {0, 0xff, 0xff, 0xff, 0, 0, 0, 0}, 4, 0, false };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_16 = { {0, 1, 2, 3, 4, 6, 7, 0}, {0xff, 0xff, 0xff, 0xff, 0xffff, 0xff, 0xff, 0}, 7, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_17 = { {0, 2, 3, 4, 6, 7, 0, 0}, {0xffff, 0xff, 0xff, 0xffff, 0xff, 0xff, 0, 0}, 6, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_18 = { {0, 1, 3, 4, 6, 7, 0, 0}, {0xff, 0xffff, 0xff, 0xffff, 0xff, 0xff, 0, 0}, 6, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_19 = { {0, 3, 4, 6, 7, 0, 0, 0}, {0xffffff, 0xff, 0xffff, 0xff, 0xff, 0, 0, 0}, 5, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_20 = { {0, 1, 2, 4, 6, 7, 0, 0}, {0xff, 0xff, 0xffff, 0xffff, 0xff, 0xff, 0, 0}, 6, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_21 = { {0, 2, 4, 6, 7, 0, 0, 0}, {0xffff, 0xffff, 0xffff, 0xff, 0xff, 0, 0, 0}, 5, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_22 = { {0, 1, 4, 6, 7, 0, 0, 0}, {0xff, 0xffffff, 0xffff, 0xff, 0xff, 0, 0, 0}, 5, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_23 = { {0, 4, 6, 7, 0, 0, 0, 0}, {0xffffffff, 0xffff, 0xff, 0xff, 0, 0, 0, 0}, 4, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_24 = { {0, 1, 2, 3, 6, 7, 0, 0}, {0xff, 0xff, 0xff, 0xffffff, 0xff, 0xff, 0, 0}, 6, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_25 = { {0, 2, 3, 6, 7, 0, 0, 0}, {0xffff, 0xff, 0xffffff, 0xff, 0xff, 0, 0, 0}, 5, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_26 = { {0, 1, 3, 6, 7, 0, 0, 0}, {0xff, 0xffff, 0xffffff, 0xff, 0xff, 0, 0, 0}, 5, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_27 = { {0, 3, 6, 7, 0, 0, 0, 0}, {0xffffff, 0xffffff, 0xff, 0xff, 0, 0, 0, 0}, 4, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_28 = { {0, 1, 2, 6, 7, 0, 0, 0}, {0xff, 0xff, 0xffffffff, 0xff, 0xff, 0, 0, 0}, 5, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_29 = { {0, 2, 6, 7, 0, 0, 0, 0}, {0xffff, 0xffffffff, 0xff, 0xff, 0, 0, 0, 0}, 4, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_30 = { {0, 1, 6, 7, 0, 0, 0, 0}, {0xff, 0, 0xff, 0xff, 0, 0, 0, 0}, 4, 0, false };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_31 = { {0, 6, 7, 0, 0, 0, 0, 0}, {0, 0xff, 0xff, 0, 0, 0, 0, 0}, 3, 0, false };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_32 = { {0, 1, 2, 3, 4, 5, 7, 0}, {0xff, 0xff, 0xff, 0xff, 0xff, 0xffff, 0xff, 0}, 7, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_33 = { {0, 2, 3, 4, 5, 7, 0, 0}, {0xffff, 0xff, 0xff, 0xff, 0xffff, 0xff, 0, 0}, 6, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_34 = { {0, 1, 3, 4, 5, 7, 0, 0}, {0xff, 0xffff, 0xff, 0xff, 0xffff, 0xff, 0, 0}, 6, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_35 = { {0, 3, 4, 5, 7, 0, 0, 0}, {0xffffff, 0xff, 0xff, 0xffff, 0xff, 0, 0, 0}, 5, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_36 = { {0, 1, 2, 4, 5, 7, 0, 0}, {0xff, 0xff, 0xffff, 0xff, 0xffff, 0xff, 0, 0}, 6, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_37 = { {0, 2, 4, 5, 7, 0, 0, 0}, {0xffff, 0xffff, 0xff, 0xffff, 0xff, 0, 0, 0}, 5, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_38 = { {0, 1, 4, 5, 7, 0, 0, 0}, {0xff, 0xffffff, 0xff, 0xffff, 0xff, 0, 0, 0}, 5, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_39 = { {0, 4, 5, 7, 0, 0, 0, 0}, {0xffffffff, 0xff, 0xffff, 0xff, 0, 0, 0, 0}, 4, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_40 = { {0, 1, 2, 3, 5, 7, 0, 0}, {0xff, 0xff, 0xff, 0xffff, 0xffff, 0xff, 0, 0}, 6, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_41 = { {0, 2, 3, 5, 7, 0, 0, 0}, {0xffff, 0xff, 0xffff, 0xffff, 0xff, 0, 0, 0}, 5, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_42 = { {0, 1, 3, 5, 7, 0, 0, 0}, {0xff, 0xffff, 0xffff, 0xffff, 0xff, 0, 0, 0}, 5, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_43 = { {0, 3, 5, 7, 0, 0, 0, 0}, {0xffffff, 0xffff, 0xffff, 0xff, 0, 0, 0, 0}, 4, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_44 = { {0, 1, 2, 5, 7, 0, 0, 0}, {0xff, 0xff, 0xffffff, 0xffff, 0xff, 0, 0, 0}, 5, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_45 = { {0, 2, 5, 7, 0, 0, 0, 0}, {0xffff, 0xffffff, 0xffff, 0xff, 0, 0, 0, 0}, 4, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_46 = { {0, 1, 5, 7, 0, 0, 0, 0}, {0xff, 0xffffffff, 0xffff, 0xff, 0, 0, 0, 0}, 4, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_47 = { {0, 5, 7, 0, 0, 0, 0, 0}, {0, 0xffff, 0xff, 0, 0, 0, 0, 0}, 3, 0, false };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_48 = { {0, 1, 2, 3, 4, 7, 0, 0}, {0xff, 0xff, 0xff, 0xff, 0xffffff, 0xff, 0, 0}, 6, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_49 = { {0, 2, 3, 4, 7, 0, 0, 0}, {0xffff, 0xff, 0xff, 0xffffff, 0xff, 0, 0, 0}, 5, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_50 = { {0, 1, 3, 4, 7, 0, 0, 0}, {0xff, 0xffff, 0xff, 0xffffff, 0xff, 0, 0, 0}, 5, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_51 = { {0, 3, 4, 7, 0, 0, 0, 0}, {0xffffff, 0xff, 0xffffff, 0xff, 0, 0, 0, 0}, 4, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_52 = { {0, 1, 2, 4, 7, 0, 0, 0}, {0xff, 0xff, 0xffff, 0xffffff, 0xff, 0, 0, 0}, 5, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_53 = { {0, 2, 4, 7, 0, 0, 0, 0}, {0xffff, 0xffff, 0xffffff, 0xff, 0, 0, 0, 0}, 4, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_54 = { {0, 1, 4, 7, 0, 0, 0, 0}, {0xff, 0xffffff, 0xffffff, 0xff, 0, 0, 0, 0}, 4, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_55 = { {0, 4, 7, 0, 0, 0, 0, 0}, {0xffffffff, 0xffffff, 0xff, 0, 0, 0, 0, 0}, 3, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_56 = { {0, 1, 2, 3, 7, 0, 0, 0}, {0xff, 0xff, 0xff, 0xffffffff, 0xff, 0, 0, 0}, 5, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_57 = { {0, 2, 3, 7, 0, 0, 0, 0}, {0xffff, 0xff, 0xffffffff, 0xff, 0, 0, 0, 0}, 4, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_58 = { {0, 1, 3, 7, 0, 0, 0, 0}, {0xff, 0xffff, 0xffffffff, 0xff, 0, 0, 0, 0}, 4, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_59 = { {0, 3, 7, 0, 0, 0, 0, 0}, {0xffffff, 0xffffffff, 0xff, 0, 0, 0, 0, 0}, 3, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_60 = { {0, 1, 2, 7, 0, 0, 0, 0}, {0xff, 0xff, 0, 0xff, 0, 0, 0, 0}, 4, 0, false };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_61 = { {0, 2, 7, 0, 0, 0, 0, 0}, {0xffff, 0, 0xff, 0, 0, 0, 0, 0}, 3, 0, false };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_62 = { {0, 1, 7, 0, 0, 0, 0, 0}, {0xff, 0, 0xff, 0, 0, 0, 0, 0}, 3, 0, false };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_63 = { {0, 7, 0, 0, 0, 0, 0, 0}, {0, 0xff, 0, 0, 0, 0, 0, 0}, 2, 0, false };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_64 = { {0, 1, 2, 3, 4, 5, 6, 0}, {0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xffff, 0}, 7, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_65 = { {0, 2, 3, 4, 5, 6, 0, 0}, {0xffff, 0xff, 0xff, 0xff, 0xff, 0xffff, 0, 0}, 6, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_66 = { {0, 1, 3, 4, 5, 6, 0, 0}, {0xff, 0xffff, 0xff, 0xff, 0xff, 0xffff, 0, 0}, 6, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_67 = { {0, 3, 4, 5, 6, 0, 0, 0}, {0xffffff, 0xff, 0xff, 0xff, 0xffff, 0, 0, 0}, 5, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_68 = { {0, 1, 2, 4, 5, 6, 0, 0}, {0xff, 0xff, 0xffff, 0xff, 0xff, 0xffff, 0, 0}, 6, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_69 = { {0, 2, 4, 5, 6, 0, 0, 0}, {0xffff, 0xffff, 0xff, 0xff, 0xffff, 0, 0, 0}, 5, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_70 = { {0, 1, 4, 5, 6, 0, 0, 0}, {0xff, 0xffffff, 0xff, 0xff, 0xffff, 0, 0, 0}, 5, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_71 = { {0, 4, 5, 6, 0, 0, 0, 0}, {0xffffffff, 0xff, 0xff, 0xffff, 0, 0, 0, 0}, 4, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_72 = { {0, 1, 2, 3, 5, 6, 0, 0}, {0xff, 0xff, 0xff, 0xffff, 0xff, 0xffff, 0, 0}, 6, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_73 = { {0, 2, 3, 5, 6, 0, 0, 0}, {0xffff, 0xff, 0xffff, 0xff, 0xffff, 0, 0, 0}, 5, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_74 = { {0, 1, 3, 5, 6, 0, 0, 0}, {0xff, 0xffff, 0xffff, 0xff, 0xffff, 0, 0, 0}, 5, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_75 = { {0, 3, 5, 6, 0, 0, 0, 0}, {0xffffff, 0xffff, 0xff, 0xffff, 0, 0, 0, 0}, 4, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_76 = { {0, 1, 2, 5, 6, 0, 0, 0}, {0xff, 0xff, 0xffffff, 0xff, 0xffff, 0, 0, 0}, 5, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_77 = { {0, 2, 5, 6, 0, 0, 0, 0}, {0xffff, 0xffffff, 0xff, 0xffff, 0, 0, 0, 0}, 4, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_78 = { {0, 1, 5, 6, 0, 0, 0, 0}, {0xff, 0xffffffff, 0xff, 0xffff, 0, 0, 0, 0}, 4, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_79 = { {0, 5, 6, 0, 0, 0, 0, 0}, {0, 0xff, 0xffff, 0, 0, 0, 0, 0}, 3, 0, false };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_80 = { {0, 1, 2, 3, 4, 6, 0, 0}, {0xff, 0xff, 0xff, 0xff, 0xffff, 0xffff, 0, 0}, 6, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_81 = { {0, 2, 3, 4, 6, 0, 0, 0}, {0xffff, 0xff, 0xff, 0xffff, 0xffff, 0, 0, 0}, 5, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_82 = { {0, 1, 3, 4, 6, 0, 0, 0}, {0xff, 0xffff, 0xff, 0xffff, 0xffff, 0, 0, 0}, 5, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_83 = { {0, 3, 4, 6, 0, 0, 0, 0}, {0xffffff, 0xff, 0xffff, 0xffff, 0, 0, 0, 0}, 4, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_84 = { {0, 1, 2, 4, 6, 0, 0, 0}, {0xff, 0xff, 0xffff, 0xffff, 0xffff, 0, 0, 0}, 5, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_85 = { {0, 2, 4, 6, 0, 0, 0, 0}, {0xffff, 0xffff, 0xffff, 0xffff, 0, 0, 0, 0}, 4, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_86 = { {0, 1, 4, 6, 0, 0, 0, 0}, {0xff, 0xffffff, 0xffff, 0xffff, 0, 0, 0, 0}, 4, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_87 = { {0, 4, 6, 0, 0, 0, 0, 0}, {0xffffffff, 0xffff, 0xffff, 0, 0, 0, 0, 0}, 3, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_88 = { {0, 1, 2, 3, 6, 0, 0, 0}, {0xff, 0xff, 0xff, 0xffffff, 0xffff, 0, 0, 0}, 5, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_89 = { {0, 2, 3, 6, 0, 0, 0, 0}, {0xffff, 0xff, 0xffffff, 0xffff, 0, 0, 0, 0}, 4, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_90 = { {0, 1, 3, 6, 0, 0, 0, 0}, {0xff, 0xffff, 0xffffff, 0xffff, 0, 0, 0, 0}, 4, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_91 = { {0, 3, 6, 0, 0, 0, 0, 0}, {0xffffff, 0xffffff, 0xffff, 0, 0, 0, 0, 0}, 3, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_92 = { {0, 1, 2, 6, 0, 0, 0, 0}, {0xff, 0xff, 0xffffffff, 0xffff, 0, 0, 0, 0}, 4, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_93 = { {0, 2, 6, 0, 0, 0, 0, 0}, {0xffff, 0xffffffff, 0xffff, 0, 0, 0, 0, 0}, 3, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_94 = { {0, 1, 6, 0, 0, 0, 0, 0}, {0xff, 0, 0xffff, 0, 0, 0, 0, 0}, 3, 0, false };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_95 = { {0, 6, 0, 0, 0, 0, 0, 0}, {0, 0xffff, 0, 0, 0, 0, 0, 0}, 2, 0, false };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_96 = { {0, 1, 2, 3, 4, 5, 0, 0}, {0xff, 0xff, 0xff, 0xff, 0xff, 0xffffff, 0, 0}, 6, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_97 = { {0, 2, 3, 4, 5, 0, 0, 0}, {0xffff, 0xff, 0xff, 0xff, 0xffffff, 0, 0, 0}, 5, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_98 = { {0, 1, 3, 4, 5, 0, 0, 0}, {0xff, 0xffff, 0xff, 0xff, 0xffffff, 0, 0, 0}, 5, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_99 = { {0, 3, 4, 5, 0, 0, 0, 0}, {0xffffff, 0xff, 0xff, 0xffffff, 0, 0, 0, 0}, 4, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_100 = { {0, 1, 2, 4, 5, 0, 0, 0}, {0xff, 0xff, 0xffff, 0xff, 0xffffff, 0, 0, 0}, 5, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_101 = { {0, 2, 4, 5, 0, 0, 0, 0}, {0xffff, 0xffff, 0xff, 0xffffff, 0, 0, 0, 0}, 4, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_102 = { {0, 1, 4, 5, 0, 0, 0, 0}, {0xff, 0xffffff, 0xff, 0xffffff, 0, 0, 0, 0}, 4, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_103 = { {0, 4, 5, 0, 0, 0, 0, 0}, {0xffffffff, 0xff, 0xffffff, 0, 0, 0, 0, 0}, 3, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_104 = { {0, 1, 2, 3, 5, 0, 0, 0}, {0xff, 0xff, 0xff, 0xffff, 0xffffff, 0, 0, 0}, 5, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_105 = { {0, 2, 3, 5, 0, 0, 0, 0}, {0xffff, 0xff, 0xffff, 0xffffff, 0, 0, 0, 0}, 4, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_106 = { {0, 1, 3, 5, 0, 0, 0, 0}, {0xff, 0xffff, 0xffff, 0xffffff, 0, 0, 0, 0}, 4, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_107 = { {0, 3, 5, 0, 0, 0, 0, 0}, {0xffffff, 0xffff, 0xffffff, 0, 0, 0, 0, 0}, 3, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_108 = { {0, 1, 2, 5, 0, 0, 0, 0}, {0xff, 0xff, 0xffffff, 0xffffff, 0, 0, 0, 0}, 4, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_109 = { {0, 2, 5, 0, 0, 0, 0, 0}, {0xffff, 0xffffff, 0xffffff, 0, 0, 0, 0, 0}, 3, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_110 = { {0, 1, 5, 0, 0, 0, 0, 0}, {0xff, 0xffffffff, 0xffffff, 0, 0, 0, 0, 0}, 3, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_111 = { {0, 5, 0, 0, 0, 0, 0, 0}, {0, 0xffffff, 0, 0, 0, 0, 0, 0}, 2, 0, false };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_112 = { {0, 1, 2, 3, 4, 0, 0, 0}, {0xff, 0xff, 0xff, 0xff, 0xffffffff, 0, 0, 0}, 5, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_113 = { {0, 2, 3, 4, 0, 0, 0, 0}, {0xffff, 0xff, 0xff, 0xffffffff, 0, 0, 0, 0}, 4, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_114 = { {0, 1, 3, 4, 0, 0, 0, 0}, {0xff, 0xffff, 0xff, 0xffffffff, 0, 0, 0, 0}, 4, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_115 = { {0, 3, 4, 0, 0, 0, 0, 0}, {0xffffff, 0xff, 0xffffffff, 0, 0, 0, 0, 0}, 3, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_116 = { {0, 1, 2, 4, 0, 0, 0, 0}, {0xff, 0xff, 0xffff, 0xffffffff, 0, 0, 0, 0}, 4, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_117 = { {0, 2, 4, 0, 0, 0, 0, 0}, {0xffff, 0xffff, 0xffffffff, 0, 0, 0, 0, 0}, 3, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_118 = { {0, 1, 4, 0, 0, 0, 0, 0}, {0xff, 0xffffff, 0xffffffff, 0, 0, 0, 0, 0}, 3, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_119 = { {0, 4, 0, 0, 0, 0, 0, 0}, {0xffffffff, 0xffffffff, 0, 0, 0, 0, 0, 0}, 2, 0, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_120 = { {0, 1, 2, 3, 0, 0, 0, 0}, {0xff, 0xff, 0xff, 0, 0, 0, 0, 0}, 4, 0, false };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_121 = { {0, 2, 3, 0, 0, 0, 0, 0}, {0xffff, 0xff, 0, 0, 0, 0, 0, 0}, 3, 0, false };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_122 = { {0, 1, 3, 0, 0, 0, 0, 0}, {0xff, 0xffff, 0, 0, 0, 0, 0, 0}, 3, 0, false };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_123 = { {0, 3, 0, 0, 0, 0, 0, 0}, {0xffffff, 0, 0, 0, 0, 0, 0, 0}, 2, 0, false };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_124 = { {0, 1, 2, 0, 0, 0, 0, 0}, {0xff, 0xff, 0, 0, 0, 0, 0, 0}, 3, 0, false };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_125 = { {0, 2, 0, 0, 0, 0, 0, 0}, {0xffff, 0, 0, 0, 0, 0, 0, 0}, 2, 0, false };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_126 = { {0, 1, 0, 0, 0, 0, 0, 0}, {0xff, 0, 0, 0, 0, 0, 0, 0}, 2, 0, false };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_127 = { {0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0}, 1, 0, false };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_128 = { {0, 1, 2, 3, 4, 5, 6, 0}, {0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0}, 7, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_129 = { {0, 2, 3, 4, 5, 6, 0, 0}, {0xffff, 0xff, 0xff, 0xff, 0xff, 0xff, 0, 0}, 6, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_130 = { {0, 1, 3, 4, 5, 6, 0, 0}, {0xff, 0xffff, 0xff, 0xff, 0xff, 0xff, 0, 0}, 6, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_131 = { {0, 3, 4, 5, 6, 0, 0, 0}, {0xffffff, 0xff, 0xff, 0xff, 0xff, 0, 0, 0}, 5, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_132 = { {0, 1, 2, 4, 5, 6, 0, 0}, {0xff, 0xff, 0xffff, 0xff, 0xff, 0xff, 0, 0}, 6, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_133 = { {0, 2, 4, 5, 6, 0, 0, 0}, {0xffff, 0xffff, 0xff, 0xff, 0xff, 0, 0, 0}, 5, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_134 = { {0, 1, 4, 5, 6, 0, 0, 0}, {0xff, 0xffffff, 0xff, 0xff, 0xff, 0, 0, 0}, 5, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_135 = { {0, 4, 5, 6, 0, 0, 0, 0}, {0xffffffff, 0xff, 0xff, 0xff, 0, 0, 0, 0}, 4, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_136 = { {0, 1, 2, 3, 5, 6, 0, 0}, {0xff, 0xff, 0xff, 0xffff, 0xff, 0xff, 0, 0}, 6, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_137 = { {0, 2, 3, 5, 6, 0, 0, 0}, {0xffff, 0xff, 0xffff, 0xff, 0xff, 0, 0, 0}, 5, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_138 = { {0, 1, 3, 5, 6, 0, 0, 0}, {0xff, 0xffff, 0xffff, 0xff, 0xff, 0, 0, 0}, 5, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_139 = { {0, 3, 5, 6, 0, 0, 0, 0}, {0xffffff, 0xffff, 0xff, 0xff, 0, 0, 0, 0}, 4, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_140 = { {0, 1, 2, 5, 6, 0, 0, 0}, {0xff, 0xff, 0xffffff, 0xff, 0xff, 0, 0, 0}, 5, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_141 = { {0, 2, 5, 6, 0, 0, 0, 0}, {0xffff, 0xffffff, 0xff, 0xff, 0, 0, 0, 0}, 4, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_142 = { {0, 1, 5, 6, 0, 0, 0, 0}, {0xff, 0xffffffff, 0xff, 0xff, 0, 0, 0, 0}, 4, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_143 = { {0, 5, 6, 0, 0, 0, 0, 0}, {0, 0xff, 0xff, 0, 0, 0, 0, 0}, 3, 1, false };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_144 = { {0, 1, 2, 3, 4, 6, 0, 0}, {0xff, 0xff, 0xff, 0xff, 0xffff, 0xff, 0, 0}, 6, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_145 = { {0, 2, 3, 4, 6, 0, 0, 0}, {0xffff, 0xff, 0xff, 0xffff, 0xff, 0, 0, 0}, 5, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_146 = { {0, 1, 3, 4, 6, 0, 0, 0}, {0xff, 0xffff, 0xff, 0xffff, 0xff, 0, 0, 0}, 5, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_147 = { {0, 3, 4, 6, 0, 0, 0, 0}, {0xffffff, 0xff, 0xffff, 0xff, 0, 0, 0, 0}, 4, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_148 = { {0, 1, 2, 4, 6, 0, 0, 0}, {0xff, 0xff, 0xffff, 0xffff, 0xff, 0, 0, 0}, 5, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_149 = { {0, 2, 4, 6, 0, 0, 0, 0}, {0xffff, 0xffff, 0xffff, 0xff, 0, 0, 0, 0}, 4, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_150 = { {0, 1, 4, 6, 0, 0, 0, 0}, {0xff, 0xffffff, 0xffff, 0xff, 0, 0, 0, 0}, 4, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_151 = { {0, 4, 6, 0, 0, 0, 0, 0}, {0xffffffff, 0xffff, 0xff, 0, 0, 0, 0, 0}, 3, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_152 = { {0, 1, 2, 3, 6, 0, 0, 0}, {0xff, 0xff, 0xff, 0xffffff, 0xff, 0, 0, 0}, 5, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_153 = { {0, 2, 3, 6, 0, 0, 0, 0}, {0xffff, 0xff, 0xffffff, 0xff, 0, 0, 0, 0}, 4, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_154 = { {0, 1, 3, 6, 0, 0, 0, 0}, {0xff, 0xffff, 0xffffff, 0xff, 0, 0, 0, 0}, 4, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_155 = { {0, 3, 6, 0, 0, 0, 0, 0}, {0xffffff, 0xffffff, 0xff, 0, 0, 0, 0, 0}, 3, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_156 = { {0, 1, 2, 6, 0, 0, 0, 0}, {0xff, 0xff, 0xffffffff, 0xff, 0, 0, 0, 0}, 4, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_157 = { {0, 2, 6, 0, 0, 0, 0, 0}, {0xffff, 0xffffffff, 0xff, 0, 0, 0, 0, 0}, 3, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_158 = { {0, 1, 6, 0, 0, 0, 0, 0}, {0xff, 0, 0xff, 0, 0, 0, 0, 0}, 3, 1, false };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_159 = { {0, 6, 0, 0, 0, 0, 0, 0}, {0, 0xff, 0, 0, 0, 0, 0, 0}, 2, 1, false };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_160 = { {0, 1, 2, 3, 4, 5, 0, 0}, {0xff, 0xff, 0xff, 0xff, 0xff, 0xffff, 0, 0}, 6, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_161 = { {0, 2, 3, 4, 5, 0, 0, 0}, {0xffff, 0xff, 0xff, 0xff, 0xffff, 0, 0, 0}, 5, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_162 = { {0, 1, 3, 4, 5, 0, 0, 0}, {0xff, 0xffff, 0xff, 0xff, 0xffff, 0, 0, 0}, 5, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_163 = { {0, 3, 4, 5, 0, 0, 0, 0}, {0xffffff, 0xff, 0xff, 0xffff, 0, 0, 0, 0}, 4, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_164 = { {0, 1, 2, 4, 5, 0, 0, 0}, {0xff, 0xff, 0xffff, 0xff, 0xffff, 0, 0, 0}, 5, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_165 = { {0, 2, 4, 5, 0, 0, 0, 0}, {0xffff, 0xffff, 0xff, 0xffff, 0, 0, 0, 0}, 4, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_166 = { {0, 1, 4, 5, 0, 0, 0, 0}, {0xff, 0xffffff, 0xff, 0xffff, 0, 0, 0, 0}, 4, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_167 = { {0, 4, 5, 0, 0, 0, 0, 0}, {0xffffffff, 0xff, 0xffff, 0, 0, 0, 0, 0}, 3, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_168 = { {0, 1, 2, 3, 5, 0, 0, 0}, {0xff, 0xff, 0xff, 0xffff, 0xffff, 0, 0, 0}, 5, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_169 = { {0, 2, 3, 5, 0, 0, 0, 0}, {0xffff, 0xff, 0xffff, 0xffff, 0, 0, 0, 0}, 4, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_170 = { {0, 1, 3, 5, 0, 0, 0, 0}, {0xff, 0xffff, 0xffff, 0xffff, 0, 0, 0, 0}, 4, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_171 = { {0, 3, 5, 0, 0, 0, 0, 0}, {0xffffff, 0xffff, 0xffff, 0, 0, 0, 0, 0}, 3, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_172 = { {0, 1, 2, 5, 0, 0, 0, 0}, {0xff, 0xff, 0xffffff, 0xffff, 0, 0, 0, 0}, 4, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_173 = { {0, 2, 5, 0, 0, 0, 0, 0}, {0xffff, 0xffffff, 0xffff, 0, 0, 0, 0, 0}, 3, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_174 = { {0, 1, 5, 0, 0, 0, 0, 0}, {0xff, 0xffffffff, 0xffff, 0, 0, 0, 0, 0}, 3, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_175 = { {0, 5, 0, 0, 0, 0, 0, 0}, {0, 0xffff, 0, 0, 0, 0, 0, 0}, 2, 1, false };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_176 = { {0, 1, 2, 3, 4, 0, 0, 0}, {0xff, 0xff, 0xff, 0xff, 0xffffff, 0, 0, 0}, 5, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_177 = { {0, 2, 3, 4, 0, 0, 0, 0}, {0xffff, 0xff, 0xff, 0xffffff, 0, 0, 0, 0}, 4, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_178 = { {0, 1, 3, 4, 0, 0, 0, 0}, {0xff, 0xffff, 0xff, 0xffffff, 0, 0, 0, 0}, 4, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_179 = { {0, 3, 4, 0, 0, 0, 0, 0}, {0xffffff, 0xff, 0xffffff, 0, 0, 0, 0, 0}, 3, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_180 = { {0, 1, 2, 4, 0, 0, 0, 0}, {0xff, 0xff, 0xffff, 0xffffff, 0, 0, 0, 0}, 4, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_181 = { {0, 2, 4, 0, 0, 0, 0, 0}, {0xffff, 0xffff, 0xffffff, 0, 0, 0, 0, 0}, 3, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_182 = { {0, 1, 4, 0, 0, 0, 0, 0}, {0xff, 0xffffff, 0xffffff, 0, 0, 0, 0, 0}, 3, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_183 = { {0, 4, 0, 0, 0, 0, 0, 0}, {0xffffffff, 0xffffff, 0, 0, 0, 0, 0, 0}, 2, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_184 = { {0, 1, 2, 3, 0, 0, 0, 0}, {0xff, 0xff, 0xff, 0xffffffff, 0, 0, 0, 0}, 4, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_185 = { {0, 2, 3, 0, 0, 0, 0, 0}, {0xffff, 0xff, 0xffffffff, 0, 0, 0, 0, 0}, 3, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_186 = { {0, 1, 3, 0, 0, 0, 0, 0}, {0xff, 0xffff, 0xffffffff, 0, 0, 0, 0, 0}, 3, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_187 = { {0, 3, 0, 0, 0, 0, 0, 0}, {0xffffff, 0xffffffff, 0, 0, 0, 0, 0, 0}, 2, 1, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_188 = { {0, 1, 2, 0, 0, 0, 0, 0}, {0xff, 0xff, 0, 0, 0, 0, 0, 0}, 3, 1, false };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_189 = { {0, 2, 0, 0, 0, 0, 0, 0}, {0xffff, 0, 0, 0, 0, 0, 0, 0}, 2, 1, false };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_190 = { {0, 1, 0, 0, 0, 0, 0, 0}, {0xff, 0, 0, 0, 0, 0, 0, 0}, 2, 1, false };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_191 = { {0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0}, 1, 1, false };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_192 = { {0, 1, 2, 3, 4, 5, 0, 0}, {0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0, 0}, 6, 2, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_193 = { {0, 2, 3, 4, 5, 0, 0, 0}, {0xffff, 0xff, 0xff, 0xff, 0xff, 0, 0, 0}, 5, 2, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_194 = { {0, 1, 3, 4, 5, 0, 0, 0}, {0xff, 0xffff, 0xff, 0xff, 0xff, 0, 0, 0}, 5, 2, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_195 = { {0, 3, 4, 5, 0, 0, 0, 0}, {0xffffff, 0xff, 0xff, 0xff, 0, 0, 0, 0}, 4, 2, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_196 = { {0, 1, 2, 4, 5, 0, 0, 0}, {0xff, 0xff, 0xffff, 0xff, 0xff, 0, 0, 0}, 5, 2, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_197 = { {0, 2, 4, 5, 0, 0, 0, 0}, {0xffff, 0xffff, 0xff, 0xff, 0, 0, 0, 0}, 4, 2, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_198 = { {0, 1, 4, 5, 0, 0, 0, 0}, {0xff, 0xffffff, 0xff, 0xff, 0, 0, 0, 0}, 4, 2, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_199 = { {0, 4, 5, 0, 0, 0, 0, 0}, {0xffffffff, 0xff, 0xff, 0, 0, 0, 0, 0}, 3, 2, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_200 = { {0, 1, 2, 3, 5, 0, 0, 0}, {0xff, 0xff, 0xff, 0xffff, 0xff, 0, 0, 0}, 5, 2, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_201 = { {0, 2, 3, 5, 0, 0, 0, 0}, {0xffff, 0xff, 0xffff, 0xff, 0, 0, 0, 0}, 4, 2, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_202 = { {0, 1, 3, 5, 0, 0, 0, 0}, {0xff, 0xffff, 0xffff, 0xff, 0, 0, 0, 0}, 4, 2, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_203 = { {0, 3, 5, 0, 0, 0, 0, 0}, {0xffffff, 0xffff, 0xff, 0, 0, 0, 0, 0}, 3, 2, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_204 = { {0, 1, 2, 5, 0, 0, 0, 0}, {0xff, 0xff, 0xffffff, 0xff, 0, 0, 0, 0}, 4, 2, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_205 = { {0, 2, 5, 0, 0, 0, 0, 0}, {0xffff, 0xffffff, 0xff, 0, 0, 0, 0, 0}, 3, 2, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_206 = { {0, 1, 5, 0, 0, 0, 0, 0}, {0xff, 0xffffffff, 0xff, 0, 0, 0, 0, 0}, 3, 2, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_207 = { {0, 5, 0, 0, 0, 0, 0, 0}, {0, 0xff, 0, 0, 0, 0, 0, 0}, 2, 2, false };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_208 = { {0, 1, 2, 3, 4, 0, 0, 0}, {0xff, 0xff, 0xff, 0xff, 0xffff, 0, 0, 0}, 5, 2, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_209 = { {0, 2, 3, 4, 0, 0, 0, 0}, {0xffff, 0xff, 0xff, 0xffff, 0, 0, 0, 0}, 4, 2, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_210 = { {0, 1, 3, 4, 0, 0, 0, 0}, {0xff, 0xffff, 0xff, 0xffff, 0, 0, 0, 0}, 4, 2, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_211 = { {0, 3, 4, 0, 0, 0, 0, 0}, {0xffffff, 0xff, 0xffff, 0, 0, 0, 0, 0}, 3, 2, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_212 = { {0, 1, 2, 4, 0, 0, 0, 0}, {0xff, 0xff, 0xffff, 0xffff, 0, 0, 0, 0}, 4, 2, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_213 = { {0, 2, 4, 0, 0, 0, 0, 0}, {0xffff, 0xffff, 0xffff, 0, 0, 0, 0, 0}, 3, 2, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_214 = { {0, 1, 4, 0, 0, 0, 0, 0}, {0xff, 0xffffff, 0xffff, 0, 0, 0, 0, 0}, 3, 2, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_215 = { {0, 4, 0, 0, 0, 0, 0, 0}, {0xffffffff, 0xffff, 0, 0, 0, 0, 0, 0}, 2, 2, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_216 = { {0, 1, 2, 3, 0, 0, 0, 0}, {0xff, 0xff, 0xff, 0xffffff, 0, 0, 0, 0}, 4, 2, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_217 = { {0, 2, 3, 0, 0, 0, 0, 0}, {0xffff, 0xff, 0xffffff, 0, 0, 0, 0, 0}, 3, 2, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_218 = { {0, 1, 3, 0, 0, 0, 0, 0}, {0xff, 0xffff, 0xffffff, 0, 0, 0, 0, 0}, 3, 2, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_219 = { {0, 3, 0, 0, 0, 0, 0, 0}, {0xffffff, 0xffffff, 0, 0, 0, 0, 0, 0}, 2, 2, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_220 = { {0, 1, 2, 0, 0, 0, 0, 0}, {0xff, 0xff, 0xffffffff, 0, 0, 0, 0, 0}, 3, 2, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_221 = { {0, 2, 0, 0, 0, 0, 0, 0}, {0xffff, 0xffffffff, 0, 0, 0, 0, 0, 0}, 2, 2, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_222 = { {0, 1, 0, 0, 0, 0, 0, 0}, {0xff, 0, 0, 0, 0, 0, 0, 0}, 2, 2, false };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_223 = { {0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0}, 1, 2, false };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_224 = { {0, 1, 2, 3, 4, 0, 0, 0}, {0xff, 0xff, 0xff, 0xff, 0xff, 0, 0, 0}, 5, 3, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_225 = { {0, 2, 3, 4, 0, 0, 0, 0}, {0xffff, 0xff, 0xff, 0xff, 0, 0, 0, 0}, 4, 3, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_226 = { {0, 1, 3, 4, 0, 0, 0, 0}, {0xff, 0xffff, 0xff, 0xff, 0, 0, 0, 0}, 4, 3, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_227 = { {0, 3, 4, 0, 0, 0, 0, 0}, {0xffffff, 0xff, 0xff, 0, 0, 0, 0, 0}, 3, 3, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_228 = { {0, 1, 2, 4, 0, 0, 0, 0}, {0xff, 0xff, 0xffff, 0xff, 0, 0, 0, 0}, 4, 3, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_229 = { {0, 2, 4, 0, 0, 0, 0, 0}, {0xffff, 0xffff, 0xff, 0, 0, 0, 0, 0}, 3, 3, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_230 = { {0, 1, 4, 0, 0, 0, 0, 0}, {0xff, 0xffffff, 0xff, 0, 0, 0, 0, 0}, 3, 3, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_231 = { {0, 4, 0, 0, 0, 0, 0, 0}, {0xffffffff, 0xff, 0, 0, 0, 0, 0, 0}, 2, 3, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_232 = { {0, 1, 2, 3, 0, 0, 0, 0}, {0xff, 0xff, 0xff, 0xffff, 0, 0, 0, 0}, 4, 3, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_233 = { {0, 2, 3, 0, 0, 0, 0, 0}, {0xffff, 0xff, 0xffff, 0, 0, 0, 0, 0}, 3, 3, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_234 = { {0, 1, 3, 0, 0, 0, 0, 0}, {0xff, 0xffff, 0xffff, 0, 0, 0, 0, 0}, 3, 3, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_235 = { {0, 3, 0, 0, 0, 0, 0, 0}, {0xffffff, 0xffff, 0, 0, 0, 0, 0, 0}, 2, 3, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_236 = { {0, 1, 2, 0, 0, 0, 0, 0}, {0xff, 0xff, 0xffffff, 0, 0, 0, 0, 0}, 3, 3, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_237 = { {0, 2, 0, 0, 0, 0, 0, 0}, {0xffff, 0xffffff, 0, 0, 0, 0, 0, 0}, 2, 3, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_238 = { {0, 1, 0, 0, 0, 0, 0, 0}, {0xff, 0xffffffff, 0, 0, 0, 0, 0, 0}, 2, 3, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_239 = { {0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0}, 1, 3, false };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_240 = { {0, 1, 2, 3, 0, 0, 0, 0}, {0xff, 0xff, 0xff, 0xff, 0, 0, 0, 0}, 4, 3, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_241 = { {0, 2, 3, 0, 0, 0, 0, 0}, {0xffff, 0xff, 0xff, 0, 0, 0, 0, 0}, 3, 3, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_242 = { {0, 1, 3, 0, 0, 0, 0, 0}, {0xff, 0xffff, 0xff, 0, 0, 0, 0, 0}, 3, 3, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_243 = { {0, 3, 0, 0, 0, 0, 0, 0}, {0xffffff, 0xff, 0, 0, 0, 0, 0, 0}, 2, 3, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_244 = { {0, 1, 2, 0, 0, 0, 0, 0}, {0xff, 0xff, 0xffff, 0, 0, 0, 0, 0}, 3, 3, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_245 = { {0, 2, 0, 0, 0, 0, 0, 0}, {0xffff, 0xffff, 0, 0, 0, 0, 0, 0}, 2, 3, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_246 = { {0, 1, 0, 0, 0, 0, 0, 0}, {0xff, 0xffffff, 0, 0, 0, 0, 0, 0}, 2, 3, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_247 = { {0, 0, 0, 0, 0, 0, 0, 0}, {0xffffffff, 0, 0, 0, 0, 0, 0, 0}, 1, 3, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_248 = { {0, 1, 2, 0, 0, 0, 0, 0}, {0xff, 0xff, 0xff, 0, 0, 0, 0, 0}, 3, 3, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_249 = { {0, 2, 0, 0, 0, 0, 0, 0}, {0xffff, 0xff, 0, 0, 0, 0, 0, 0}, 2, 3, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_250 = { {0, 1, 0, 0, 0, 0, 0, 0}, {0xff, 0xffff, 0, 0, 0, 0, 0, 0}, 2, 3, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_251 = { {0, 0, 0, 0, 0, 0, 0, 0}, {0xffffff, 0, 0, 0, 0, 0, 0, 0}, 1, 3, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_252 = { {0, 1, 0, 0, 0, 0, 0, 0}, {0xff, 0xff, 0, 0, 0, 0, 0, 0}, 2, 3, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_253 = { {0, 0, 0, 0, 0, 0, 0, 0}, {0xffff, 0, 0, 0, 0, 0, 0, 0}, 1, 3, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_254 = { {0, 0, 0, 0, 0, 0, 0, 0}, {0xff, 0, 0, 0, 0, 0, 0, 0}, 1, 3, true };
static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_255 = { {0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0}, 0, 3, false };

static GvintCompUnaryUnpackInfo CompUnaryUnpackInfoArr[256] = { GvintCompUnaryUnpackInfo_0,
		GvintCompUnaryUnpackInfo_1, GvintCompUnaryUnpackInfo_2, GvintCompUnaryUnpackInfo_3,
		GvintCompUnaryUnpackInfo_4, GvintCompUnaryUnpackInfo_5, GvintCompUnaryUnpackInfo_6,
		GvintCompUnaryUnpackInfo_7, GvintCompUnaryUnpackInfo_8, GvintCompUnaryUnpackInfo_9,
		GvintCompUnaryUnpackInfo_10, GvintCompUnaryUnpackInfo_11, GvintCompUnaryUnpackInfo_12,
		GvintCompUnaryUnpackInfo_13, GvintCompUnaryUnpackInfo_14, GvintCompUnaryUnpackInfo_15,
		GvintCompUnaryUnpackInfo_16, GvintCompUnaryUnpackInfo_17, GvintCompUnaryUnpackInfo_18,
		GvintCompUnaryUnpackInfo_19, GvintCompUnaryUnpackInfo_20, GvintCompUnaryUnpackInfo_21,
		GvintCompUnaryUnpackInfo_22, GvintCompUnaryUnpackInfo_23, GvintCompUnaryUnpackInfo_24,
		GvintCompUnaryUnpackInfo_25, GvintCompUnaryUnpackInfo_26, GvintCompUnaryUnpackInfo_27,
		GvintCompUnaryUnpackInfo_28, GvintCompUnaryUnpackInfo_29, GvintCompUnaryUnpackInfo_30,
		GvintCompUnaryUnpackInfo_31, GvintCompUnaryUnpackInfo_32, GvintCompUnaryUnpackInfo_33,
		GvintCompUnaryUnpackInfo_34, GvintCompUnaryUnpackInfo_35, GvintCompUnaryUnpackInfo_36,
		GvintCompUnaryUnpackInfo_37, GvintCompUnaryUnpackInfo_38, GvintCompUnaryUnpackInfo_39,
		GvintCompUnaryUnpackInfo_40, GvintCompUnaryUnpackInfo_41, GvintCompUnaryUnpackInfo_42,
		GvintCompUnaryUnpackInfo_43, GvintCompUnaryUnpackInfo_44, GvintCompUnaryUnpackInfo_45,
		GvintCompUnaryUnpackInfo_46, GvintCompUnaryUnpackInfo_47, GvintCompUnaryUnpackInfo_48,
		GvintCompUnaryUnpackInfo_49, GvintCompUnaryUnpackInfo_50, GvintCompUnaryUnpackInfo_51,
		GvintCompUnaryUnpackInfo_52, GvintCompUnaryUnpackInfo_53, GvintCompUnaryUnpackInfo_54,
		GvintCompUnaryUnpackInfo_55, GvintCompUnaryUnpackInfo_56, GvintCompUnaryUnpackInfo_57,
		GvintCompUnaryUnpackInfo_58, GvintCompUnaryUnpackInfo_59, GvintCompUnaryUnpackInfo_60,
		GvintCompUnaryUnpackInfo_61, GvintCompUnaryUnpackInfo_62, GvintCompUnaryUnpackInfo_63,
		GvintCompUnaryUnpackInfo_64, GvintCompUnaryUnpackInfo_65, GvintCompUnaryUnpackInfo_66,
		GvintCompUnaryUnpackInfo_67, GvintCompUnaryUnpackInfo_68, GvintCompUnaryUnpackInfo_69,
		GvintCompUnaryUnpackInfo_70, GvintCompUnaryUnpackInfo_71, GvintCompUnaryUnpackInfo_72,
		GvintCompUnaryUnpackInfo_73, GvintCompUnaryUnpackInfo_74, GvintCompUnaryUnpackInfo_75,
		GvintCompUnaryUnpackInfo_76, GvintCompUnaryUnpackInfo_77, GvintCompUnaryUnpackInfo_78,
		GvintCompUnaryUnpackInfo_79, GvintCompUnaryUnpackInfo_80, GvintCompUnaryUnpackInfo_81,
		GvintCompUnaryUnpackInfo_82, GvintCompUnaryUnpackInfo_83, GvintCompUnaryUnpackInfo_84,
		GvintCompUnaryUnpackInfo_85, GvintCompUnaryUnpackInfo_86, GvintCompUnaryUnpackInfo_87,
		GvintCompUnaryUnpackInfo_88, GvintCompUnaryUnpackInfo_89, GvintCompUnaryUnpackInfo_90,
		GvintCompUnaryUnpackInfo_91, GvintCompUnaryUnpackInfo_92, GvintCompUnaryUnpackInfo_93,
		GvintCompUnaryUnpackInfo_94, GvintCompUnaryUnpackInfo_95, GvintCompUnaryUnpackInfo_96,
		GvintCompUnaryUnpackInfo_97, GvintCompUnaryUnpackInfo_98, GvintCompUnaryUnpackInfo_99,
		GvintCompUnaryUnpackInfo_100, GvintCompUnaryUnpackInfo_101, GvintCompUnaryUnpackInfo_102,
		GvintCompUnaryUnpackInfo_103, GvintCompUnaryUnpackInfo_104, GvintCompUnaryUnpackInfo_105,
		GvintCompUnaryUnpackInfo_106, GvintCompUnaryUnpackInfo_107, GvintCompUnaryUnpackInfo_108,
		GvintCompUnaryUnpackInfo_109, GvintCompUnaryUnpackInfo_110, GvintCompUnaryUnpackInfo_111,
		GvintCompUnaryUnpackInfo_112, GvintCompUnaryUnpackInfo_113, GvintCompUnaryUnpackInfo_114,
		GvintCompUnaryUnpackInfo_115, GvintCompUnaryUnpackInfo_116, GvintCompUnaryUnpackInfo_117,
		GvintCompUnaryUnpackInfo_118, GvintCompUnaryUnpackInfo_119, GvintCompUnaryUnpackInfo_120,
		GvintCompUnaryUnpackInfo_121, GvintCompUnaryUnpackInfo_122, GvintCompUnaryUnpackInfo_123,
		GvintCompUnaryUnpackInfo_124, GvintCompUnaryUnpackInfo_125, GvintCompUnaryUnpackInfo_126,
		GvintCompUnaryUnpackInfo_127, GvintCompUnaryUnpackInfo_128, GvintCompUnaryUnpackInfo_129,
		GvintCompUnaryUnpackInfo_130, GvintCompUnaryUnpackInfo_131, GvintCompUnaryUnpackInfo_132,
		GvintCompUnaryUnpackInfo_133, GvintCompUnaryUnpackInfo_134, GvintCompUnaryUnpackInfo_135,
		GvintCompUnaryUnpackInfo_136, GvintCompUnaryUnpackInfo_137, GvintCompUnaryUnpackInfo_138,
		GvintCompUnaryUnpackInfo_139, GvintCompUnaryUnpackInfo_140, GvintCompUnaryUnpackInfo_141,
		GvintCompUnaryUnpackInfo_142, GvintCompUnaryUnpackInfo_143, GvintCompUnaryUnpackInfo_144,
		GvintCompUnaryUnpackInfo_145, GvintCompUnaryUnpackInfo_146, GvintCompUnaryUnpackInfo_147,
		GvintCompUnaryUnpackInfo_148, GvintCompUnaryUnpackInfo_149, GvintCompUnaryUnpackInfo_150,
		GvintCompUnaryUnpackInfo_151, GvintCompUnaryUnpackInfo_152, GvintCompUnaryUnpackInfo_153,
		GvintCompUnaryUnpackInfo_154, GvintCompUnaryUnpackInfo_155, GvintCompUnaryUnpackInfo_156,
		GvintCompUnaryUnpackInfo_157, GvintCompUnaryUnpackInfo_158, GvintCompUnaryUnpackInfo_159,
		GvintCompUnaryUnpackInfo_160, GvintCompUnaryUnpackInfo_161, GvintCompUnaryUnpackInfo_162,
		GvintCompUnaryUnpackInfo_163, GvintCompUnaryUnpackInfo_164, GvintCompUnaryUnpackInfo_165,
		GvintCompUnaryUnpackInfo_166, GvintCompUnaryUnpackInfo_167, GvintCompUnaryUnpackInfo_168,
		GvintCompUnaryUnpackInfo_169, GvintCompUnaryUnpackInfo_170, GvintCompUnaryUnpackInfo_171,
		GvintCompUnaryUnpackInfo_172, GvintCompUnaryUnpackInfo_173, GvintCompUnaryUnpackInfo_174,
		GvintCompUnaryUnpackInfo_175, GvintCompUnaryUnpackInfo_176, GvintCompUnaryUnpackInfo_177,
		GvintCompUnaryUnpackInfo_178, GvintCompUnaryUnpackInfo_179, GvintCompUnaryUnpackInfo_180,
		GvintCompUnaryUnpackInfo_181, GvintCompUnaryUnpackInfo_182, GvintCompUnaryUnpackInfo_183,
		GvintCompUnaryUnpackInfo_184, GvintCompUnaryUnpackInfo_185, GvintCompUnaryUnpackInfo_186,
		GvintCompUnaryUnpackInfo_187, GvintCompUnaryUnpackInfo_188, GvintCompUnaryUnpackInfo_189,
		GvintCompUnaryUnpackInfo_190, GvintCompUnaryUnpackInfo_191, GvintCompUnaryUnpackInfo_192,
		GvintCompUnaryUnpackInfo_193, GvintCompUnaryUnpackInfo_194, GvintCompUnaryUnpackInfo_195,
		GvintCompUnaryUnpackInfo_196, GvintCompUnaryUnpackInfo_197, GvintCompUnaryUnpackInfo_198,
		GvintCompUnaryUnpackInfo_199, GvintCompUnaryUnpackInfo_200, GvintCompUnaryUnpackInfo_201,
		GvintCompUnaryUnpackInfo_202, GvintCompUnaryUnpackInfo_203, GvintCompUnaryUnpackInfo_204,
		GvintCompUnaryUnpackInfo_205, GvintCompUnaryUnpackInfo_206, GvintCompUnaryUnpackInfo_207,
		GvintCompUnaryUnpackInfo_208, GvintCompUnaryUnpackInfo_209, GvintCompUnaryUnpackInfo_210,
		GvintCompUnaryUnpackInfo_211, GvintCompUnaryUnpackInfo_212, GvintCompUnaryUnpackInfo_213,
		GvintCompUnaryUnpackInfo_214, GvintCompUnaryUnpackInfo_215, GvintCompUnaryUnpackInfo_216,
		GvintCompUnaryUnpackInfo_217, GvintCompUnaryUnpackInfo_218, GvintCompUnaryUnpackInfo_219,
		GvintCompUnaryUnpackInfo_220, GvintCompUnaryUnpackInfo_221, GvintCompUnaryUnpackInfo_222,
		GvintCompUnaryUnpackInfo_223, GvintCompUnaryUnpackInfo_224, GvintCompUnaryUnpackInfo_225,
		GvintCompUnaryUnpackInfo_226, GvintCompUnaryUnpackInfo_227, GvintCompUnaryUnpackInfo_228,
		GvintCompUnaryUnpackInfo_229, GvintCompUnaryUnpackInfo_230, GvintCompUnaryUnpackInfo_231,
		GvintCompUnaryUnpackInfo_232, GvintCompUnaryUnpackInfo_233, GvintCompUnaryUnpackInfo_234,
		GvintCompUnaryUnpackInfo_235, GvintCompUnaryUnpackInfo_236, GvintCompUnaryUnpackInfo_237,
		GvintCompUnaryUnpackInfo_238, GvintCompUnaryUnpackInfo_239, GvintCompUnaryUnpackInfo_240,
		GvintCompUnaryUnpackInfo_241, GvintCompUnaryUnpackInfo_242, GvintCompUnaryUnpackInfo_243,
		GvintCompUnaryUnpackInfo_244, GvintCompUnaryUnpackInfo_245, GvintCompUnaryUnpackInfo_246,
		GvintCompUnaryUnpackInfo_247, GvintCompUnaryUnpackInfo_248, GvintCompUnaryUnpackInfo_249,
		GvintCompUnaryUnpackInfo_250, GvintCompUnaryUnpackInfo_251, GvintCompUnaryUnpackInfo_252,
		GvintCompUnaryUnpackInfo_253, GvintCompUnaryUnpackInfo_254, GvintCompUnaryUnpackInfo_255 };
}
}

/*
 * code for generating the infoArr:

#include <iostream>
#include <stdint.h>

using namespace std;

int main() {
	//for (uint32_t lastStatus = 0; lastStatus < 4; lastStatus ++) {

	for (uint32_t i=0; i<256; i++) {
		//uint32_t infoIdx = (lastStatus << 8) + i;

		bool validGroup = true;
		uint32_t offsetArr[8] = {0,0,0,0,0,0,0,0};
		uint32_t maskArr[8] = {0,0,0,0,0,0,0,0};
		uint32_t lenArr[8] = {0,0,0,0,0,0,0,0};
		uint32_t intNum = 0;
		uint32_t statusGen = 0;
		uint32_t mask = i;

		uint32_t curBitIdx = 0;

		bool firstGroupInt = true;

		uint32_t intBitNum;
		bool validUnary;
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
				if (intBitNum > 4) {
					validGroup = false;	//a valid group can only hold integers less than 4bytes
				}
				//else if (firstGroupInt && intBitNum + lastStatus > 4) {
				//	validGroup = false;
				//}

				offsetArr[intNum] = curBitIdx - intBitNum;	//offset starts from 0
				if (intBitNum < 4) {
					maskArr[intNum] = (1L << (intBitNum * 8)) - 1;
				}
				else if (intBitNum == 4) {
					maskArr[intNum] = 0xffffffff;
				}
				intNum ++;
			}
			firstGroupInt = false;
		}

		if (!validUnary) {	//last int of the group doesn't stop with 0, generate a remainder status
			statusGen = intBitNum < 3 ? intBitNum : 3;
		}

		if (intNum == 0) {
			validGroup = false;	//a valid group should represent at least one integer
		}

		//output
		cout << "static GvintCompUnaryUnpackInfo GvintCompUnaryUnpackInfo_" << i << " = { ";
		cout << "{";
		for (int j=0; j<7; j++) {
			cout << offsetArr[j] << ", ";
		}
		cout << offsetArr[7] << "}, {";
		for (int j=0; j<7; j++) {
			cout << showbase << hex << maskArr[j] << dec << ", ";
		}
		cout << showbase << hex << maskArr[7] << dec << "}, ";
		cout << intNum << ", ";
		cout << statusGen << ", ";
		cout << (validGroup ? "true" : "false");
		cout << " };" << endl;
	}

	//}
	return 0;
}


 *
 */


#endif /* GVINTCOMPUNARYUNPACK_HPP_ */
