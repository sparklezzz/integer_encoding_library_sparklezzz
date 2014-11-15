/*
 * GvintIncompUnaryUnpack.hpp
 *
 *  Created on: 2013-1-22
 *      Author: zxd
 */

#ifndef GVINTINCOMPUNARYUNPACK_HPP_
#define GVINTINCOMPUNARYUNPACK_HPP_

namespace paradise {
namespace index {
struct GvintIncompUnaryUnpackInfo {
		uint8_t offsetArr[8];
		uint32_t maskArr[8];
		uint8_t intNum;
		bool valid;		//true if it's a valid representation of the group
};

static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_0 = { {0, 1, 2, 3, 4, 5, 6, 7}, {0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff}, 8, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_1 = { {0, 2, 3, 4, 5, 6, 7, 0}, {0xffff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0}, 7, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_2 = { {0, 1, 3, 4, 5, 6, 7, 0}, {0xff, 0xffff, 0xff, 0xff, 0xff, 0xff, 0xff, 0}, 7, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_3 = { {0, 3, 4, 5, 6, 7, 0, 0}, {0xffffff, 0xff, 0xff, 0xff, 0xff, 0xff, 0, 0}, 6, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_4 = { {0, 1, 2, 4, 5, 6, 7, 0}, {0xff, 0xff, 0xffff, 0xff, 0xff, 0xff, 0xff, 0}, 7, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_5 = { {0, 2, 4, 5, 6, 7, 0, 0}, {0xffff, 0xffff, 0xff, 0xff, 0xff, 0xff, 0, 0}, 6, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_6 = { {0, 1, 4, 5, 6, 7, 0, 0}, {0xff, 0xffffff, 0xff, 0xff, 0xff, 0xff, 0, 0}, 6, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_7 = { {0, 4, 5, 6, 7, 0, 0, 0}, {0xffffffff, 0xff, 0xff, 0xff, 0xff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_8 = { {0, 1, 2, 3, 5, 6, 7, 0}, {0xff, 0xff, 0xff, 0xffff, 0xff, 0xff, 0xff, 0}, 7, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_9 = { {0, 2, 3, 5, 6, 7, 0, 0}, {0xffff, 0xff, 0xffff, 0xff, 0xff, 0xff, 0, 0}, 6, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_10 = { {0, 1, 3, 5, 6, 7, 0, 0}, {0xff, 0xffff, 0xffff, 0xff, 0xff, 0xff, 0, 0}, 6, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_11 = { {0, 3, 5, 6, 7, 0, 0, 0}, {0xffffff, 0xffff, 0xff, 0xff, 0xff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_12 = { {0, 1, 2, 5, 6, 7, 0, 0}, {0xff, 0xff, 0xffffff, 0xff, 0xff, 0xff, 0, 0}, 6, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_13 = { {0, 2, 5, 6, 7, 0, 0, 0}, {0xffff, 0xffffff, 0xff, 0xff, 0xff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_14 = { {0, 1, 5, 6, 7, 0, 0, 0}, {0xff, 0xffffffff, 0xff, 0xff, 0xff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_15 = { {0, 5, 6, 7, 0, 0, 0, 0}, {0, 0xff, 0xff, 0xff, 0, 0, 0, 0}, 4, false };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_16 = { {0, 1, 2, 3, 4, 6, 7, 0}, {0xff, 0xff, 0xff, 0xff, 0xffff, 0xff, 0xff, 0}, 7, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_17 = { {0, 2, 3, 4, 6, 7, 0, 0}, {0xffff, 0xff, 0xff, 0xffff, 0xff, 0xff, 0, 0}, 6, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_18 = { {0, 1, 3, 4, 6, 7, 0, 0}, {0xff, 0xffff, 0xff, 0xffff, 0xff, 0xff, 0, 0}, 6, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_19 = { {0, 3, 4, 6, 7, 0, 0, 0}, {0xffffff, 0xff, 0xffff, 0xff, 0xff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_20 = { {0, 1, 2, 4, 6, 7, 0, 0}, {0xff, 0xff, 0xffff, 0xffff, 0xff, 0xff, 0, 0}, 6, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_21 = { {0, 2, 4, 6, 7, 0, 0, 0}, {0xffff, 0xffff, 0xffff, 0xff, 0xff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_22 = { {0, 1, 4, 6, 7, 0, 0, 0}, {0xff, 0xffffff, 0xffff, 0xff, 0xff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_23 = { {0, 4, 6, 7, 0, 0, 0, 0}, {0xffffffff, 0xffff, 0xff, 0xff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_24 = { {0, 1, 2, 3, 6, 7, 0, 0}, {0xff, 0xff, 0xff, 0xffffff, 0xff, 0xff, 0, 0}, 6, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_25 = { {0, 2, 3, 6, 7, 0, 0, 0}, {0xffff, 0xff, 0xffffff, 0xff, 0xff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_26 = { {0, 1, 3, 6, 7, 0, 0, 0}, {0xff, 0xffff, 0xffffff, 0xff, 0xff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_27 = { {0, 3, 6, 7, 0, 0, 0, 0}, {0xffffff, 0xffffff, 0xff, 0xff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_28 = { {0, 1, 2, 6, 7, 0, 0, 0}, {0xff, 0xff, 0xffffffff, 0xff, 0xff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_29 = { {0, 2, 6, 7, 0, 0, 0, 0}, {0xffff, 0xffffffff, 0xff, 0xff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_30 = { {0, 1, 6, 7, 0, 0, 0, 0}, {0xff, 0, 0xff, 0xff, 0, 0, 0, 0}, 4, false };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_31 = { {0, 6, 7, 0, 0, 0, 0, 0}, {0, 0xff, 0xff, 0, 0, 0, 0, 0}, 3, false };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_32 = { {0, 1, 2, 3, 4, 5, 7, 0}, {0xff, 0xff, 0xff, 0xff, 0xff, 0xffff, 0xff, 0}, 7, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_33 = { {0, 2, 3, 4, 5, 7, 0, 0}, {0xffff, 0xff, 0xff, 0xff, 0xffff, 0xff, 0, 0}, 6, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_34 = { {0, 1, 3, 4, 5, 7, 0, 0}, {0xff, 0xffff, 0xff, 0xff, 0xffff, 0xff, 0, 0}, 6, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_35 = { {0, 3, 4, 5, 7, 0, 0, 0}, {0xffffff, 0xff, 0xff, 0xffff, 0xff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_36 = { {0, 1, 2, 4, 5, 7, 0, 0}, {0xff, 0xff, 0xffff, 0xff, 0xffff, 0xff, 0, 0}, 6, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_37 = { {0, 2, 4, 5, 7, 0, 0, 0}, {0xffff, 0xffff, 0xff, 0xffff, 0xff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_38 = { {0, 1, 4, 5, 7, 0, 0, 0}, {0xff, 0xffffff, 0xff, 0xffff, 0xff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_39 = { {0, 4, 5, 7, 0, 0, 0, 0}, {0xffffffff, 0xff, 0xffff, 0xff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_40 = { {0, 1, 2, 3, 5, 7, 0, 0}, {0xff, 0xff, 0xff, 0xffff, 0xffff, 0xff, 0, 0}, 6, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_41 = { {0, 2, 3, 5, 7, 0, 0, 0}, {0xffff, 0xff, 0xffff, 0xffff, 0xff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_42 = { {0, 1, 3, 5, 7, 0, 0, 0}, {0xff, 0xffff, 0xffff, 0xffff, 0xff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_43 = { {0, 3, 5, 7, 0, 0, 0, 0}, {0xffffff, 0xffff, 0xffff, 0xff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_44 = { {0, 1, 2, 5, 7, 0, 0, 0}, {0xff, 0xff, 0xffffff, 0xffff, 0xff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_45 = { {0, 2, 5, 7, 0, 0, 0, 0}, {0xffff, 0xffffff, 0xffff, 0xff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_46 = { {0, 1, 5, 7, 0, 0, 0, 0}, {0xff, 0xffffffff, 0xffff, 0xff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_47 = { {0, 5, 7, 0, 0, 0, 0, 0}, {0, 0xffff, 0xff, 0, 0, 0, 0, 0}, 3, false };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_48 = { {0, 1, 2, 3, 4, 7, 0, 0}, {0xff, 0xff, 0xff, 0xff, 0xffffff, 0xff, 0, 0}, 6, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_49 = { {0, 2, 3, 4, 7, 0, 0, 0}, {0xffff, 0xff, 0xff, 0xffffff, 0xff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_50 = { {0, 1, 3, 4, 7, 0, 0, 0}, {0xff, 0xffff, 0xff, 0xffffff, 0xff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_51 = { {0, 3, 4, 7, 0, 0, 0, 0}, {0xffffff, 0xff, 0xffffff, 0xff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_52 = { {0, 1, 2, 4, 7, 0, 0, 0}, {0xff, 0xff, 0xffff, 0xffffff, 0xff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_53 = { {0, 2, 4, 7, 0, 0, 0, 0}, {0xffff, 0xffff, 0xffffff, 0xff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_54 = { {0, 1, 4, 7, 0, 0, 0, 0}, {0xff, 0xffffff, 0xffffff, 0xff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_55 = { {0, 4, 7, 0, 0, 0, 0, 0}, {0xffffffff, 0xffffff, 0xff, 0, 0, 0, 0, 0}, 3, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_56 = { {0, 1, 2, 3, 7, 0, 0, 0}, {0xff, 0xff, 0xff, 0xffffffff, 0xff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_57 = { {0, 2, 3, 7, 0, 0, 0, 0}, {0xffff, 0xff, 0xffffffff, 0xff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_58 = { {0, 1, 3, 7, 0, 0, 0, 0}, {0xff, 0xffff, 0xffffffff, 0xff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_59 = { {0, 3, 7, 0, 0, 0, 0, 0}, {0xffffff, 0xffffffff, 0xff, 0, 0, 0, 0, 0}, 3, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_60 = { {0, 1, 2, 7, 0, 0, 0, 0}, {0xff, 0xff, 0, 0xff, 0, 0, 0, 0}, 4, false };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_61 = { {0, 2, 7, 0, 0, 0, 0, 0}, {0xffff, 0, 0xff, 0, 0, 0, 0, 0}, 3, false };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_62 = { {0, 1, 7, 0, 0, 0, 0, 0}, {0xff, 0, 0xff, 0, 0, 0, 0, 0}, 3, false };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_63 = { {0, 7, 0, 0, 0, 0, 0, 0}, {0, 0xff, 0, 0, 0, 0, 0, 0}, 2, false };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_64 = { {0, 1, 2, 3, 4, 5, 6, 0}, {0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xffff, 0}, 7, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_65 = { {0, 2, 3, 4, 5, 6, 0, 0}, {0xffff, 0xff, 0xff, 0xff, 0xff, 0xffff, 0, 0}, 6, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_66 = { {0, 1, 3, 4, 5, 6, 0, 0}, {0xff, 0xffff, 0xff, 0xff, 0xff, 0xffff, 0, 0}, 6, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_67 = { {0, 3, 4, 5, 6, 0, 0, 0}, {0xffffff, 0xff, 0xff, 0xff, 0xffff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_68 = { {0, 1, 2, 4, 5, 6, 0, 0}, {0xff, 0xff, 0xffff, 0xff, 0xff, 0xffff, 0, 0}, 6, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_69 = { {0, 2, 4, 5, 6, 0, 0, 0}, {0xffff, 0xffff, 0xff, 0xff, 0xffff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_70 = { {0, 1, 4, 5, 6, 0, 0, 0}, {0xff, 0xffffff, 0xff, 0xff, 0xffff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_71 = { {0, 4, 5, 6, 0, 0, 0, 0}, {0xffffffff, 0xff, 0xff, 0xffff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_72 = { {0, 1, 2, 3, 5, 6, 0, 0}, {0xff, 0xff, 0xff, 0xffff, 0xff, 0xffff, 0, 0}, 6, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_73 = { {0, 2, 3, 5, 6, 0, 0, 0}, {0xffff, 0xff, 0xffff, 0xff, 0xffff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_74 = { {0, 1, 3, 5, 6, 0, 0, 0}, {0xff, 0xffff, 0xffff, 0xff, 0xffff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_75 = { {0, 3, 5, 6, 0, 0, 0, 0}, {0xffffff, 0xffff, 0xff, 0xffff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_76 = { {0, 1, 2, 5, 6, 0, 0, 0}, {0xff, 0xff, 0xffffff, 0xff, 0xffff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_77 = { {0, 2, 5, 6, 0, 0, 0, 0}, {0xffff, 0xffffff, 0xff, 0xffff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_78 = { {0, 1, 5, 6, 0, 0, 0, 0}, {0xff, 0xffffffff, 0xff, 0xffff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_79 = { {0, 5, 6, 0, 0, 0, 0, 0}, {0, 0xff, 0xffff, 0, 0, 0, 0, 0}, 3, false };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_80 = { {0, 1, 2, 3, 4, 6, 0, 0}, {0xff, 0xff, 0xff, 0xff, 0xffff, 0xffff, 0, 0}, 6, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_81 = { {0, 2, 3, 4, 6, 0, 0, 0}, {0xffff, 0xff, 0xff, 0xffff, 0xffff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_82 = { {0, 1, 3, 4, 6, 0, 0, 0}, {0xff, 0xffff, 0xff, 0xffff, 0xffff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_83 = { {0, 3, 4, 6, 0, 0, 0, 0}, {0xffffff, 0xff, 0xffff, 0xffff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_84 = { {0, 1, 2, 4, 6, 0, 0, 0}, {0xff, 0xff, 0xffff, 0xffff, 0xffff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_85 = { {0, 2, 4, 6, 0, 0, 0, 0}, {0xffff, 0xffff, 0xffff, 0xffff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_86 = { {0, 1, 4, 6, 0, 0, 0, 0}, {0xff, 0xffffff, 0xffff, 0xffff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_87 = { {0, 4, 6, 0, 0, 0, 0, 0}, {0xffffffff, 0xffff, 0xffff, 0, 0, 0, 0, 0}, 3, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_88 = { {0, 1, 2, 3, 6, 0, 0, 0}, {0xff, 0xff, 0xff, 0xffffff, 0xffff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_89 = { {0, 2, 3, 6, 0, 0, 0, 0}, {0xffff, 0xff, 0xffffff, 0xffff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_90 = { {0, 1, 3, 6, 0, 0, 0, 0}, {0xff, 0xffff, 0xffffff, 0xffff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_91 = { {0, 3, 6, 0, 0, 0, 0, 0}, {0xffffff, 0xffffff, 0xffff, 0, 0, 0, 0, 0}, 3, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_92 = { {0, 1, 2, 6, 0, 0, 0, 0}, {0xff, 0xff, 0xffffffff, 0xffff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_93 = { {0, 2, 6, 0, 0, 0, 0, 0}, {0xffff, 0xffffffff, 0xffff, 0, 0, 0, 0, 0}, 3, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_94 = { {0, 1, 6, 0, 0, 0, 0, 0}, {0xff, 0, 0xffff, 0, 0, 0, 0, 0}, 3, false };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_95 = { {0, 6, 0, 0, 0, 0, 0, 0}, {0, 0xffff, 0, 0, 0, 0, 0, 0}, 2, false };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_96 = { {0, 1, 2, 3, 4, 5, 0, 0}, {0xff, 0xff, 0xff, 0xff, 0xff, 0xffffff, 0, 0}, 6, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_97 = { {0, 2, 3, 4, 5, 0, 0, 0}, {0xffff, 0xff, 0xff, 0xff, 0xffffff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_98 = { {0, 1, 3, 4, 5, 0, 0, 0}, {0xff, 0xffff, 0xff, 0xff, 0xffffff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_99 = { {0, 3, 4, 5, 0, 0, 0, 0}, {0xffffff, 0xff, 0xff, 0xffffff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_100 = { {0, 1, 2, 4, 5, 0, 0, 0}, {0xff, 0xff, 0xffff, 0xff, 0xffffff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_101 = { {0, 2, 4, 5, 0, 0, 0, 0}, {0xffff, 0xffff, 0xff, 0xffffff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_102 = { {0, 1, 4, 5, 0, 0, 0, 0}, {0xff, 0xffffff, 0xff, 0xffffff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_103 = { {0, 4, 5, 0, 0, 0, 0, 0}, {0xffffffff, 0xff, 0xffffff, 0, 0, 0, 0, 0}, 3, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_104 = { {0, 1, 2, 3, 5, 0, 0, 0}, {0xff, 0xff, 0xff, 0xffff, 0xffffff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_105 = { {0, 2, 3, 5, 0, 0, 0, 0}, {0xffff, 0xff, 0xffff, 0xffffff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_106 = { {0, 1, 3, 5, 0, 0, 0, 0}, {0xff, 0xffff, 0xffff, 0xffffff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_107 = { {0, 3, 5, 0, 0, 0, 0, 0}, {0xffffff, 0xffff, 0xffffff, 0, 0, 0, 0, 0}, 3, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_108 = { {0, 1, 2, 5, 0, 0, 0, 0}, {0xff, 0xff, 0xffffff, 0xffffff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_109 = { {0, 2, 5, 0, 0, 0, 0, 0}, {0xffff, 0xffffff, 0xffffff, 0, 0, 0, 0, 0}, 3, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_110 = { {0, 1, 5, 0, 0, 0, 0, 0}, {0xff, 0xffffffff, 0xffffff, 0, 0, 0, 0, 0}, 3, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_111 = { {0, 5, 0, 0, 0, 0, 0, 0}, {0, 0xffffff, 0, 0, 0, 0, 0, 0}, 2, false };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_112 = { {0, 1, 2, 3, 4, 0, 0, 0}, {0xff, 0xff, 0xff, 0xff, 0xffffffff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_113 = { {0, 2, 3, 4, 0, 0, 0, 0}, {0xffff, 0xff, 0xff, 0xffffffff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_114 = { {0, 1, 3, 4, 0, 0, 0, 0}, {0xff, 0xffff, 0xff, 0xffffffff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_115 = { {0, 3, 4, 0, 0, 0, 0, 0}, {0xffffff, 0xff, 0xffffffff, 0, 0, 0, 0, 0}, 3, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_116 = { {0, 1, 2, 4, 0, 0, 0, 0}, {0xff, 0xff, 0xffff, 0xffffffff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_117 = { {0, 2, 4, 0, 0, 0, 0, 0}, {0xffff, 0xffff, 0xffffffff, 0, 0, 0, 0, 0}, 3, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_118 = { {0, 1, 4, 0, 0, 0, 0, 0}, {0xff, 0xffffff, 0xffffffff, 0, 0, 0, 0, 0}, 3, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_119 = { {0, 4, 0, 0, 0, 0, 0, 0}, {0xffffffff, 0xffffffff, 0, 0, 0, 0, 0, 0}, 2, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_120 = { {0, 1, 2, 3, 0, 0, 0, 0}, {0xff, 0xff, 0xff, 0, 0, 0, 0, 0}, 4, false };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_121 = { {0, 2, 3, 0, 0, 0, 0, 0}, {0xffff, 0xff, 0, 0, 0, 0, 0, 0}, 3, false };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_122 = { {0, 1, 3, 0, 0, 0, 0, 0}, {0xff, 0xffff, 0, 0, 0, 0, 0, 0}, 3, false };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_123 = { {0, 3, 0, 0, 0, 0, 0, 0}, {0xffffff, 0, 0, 0, 0, 0, 0, 0}, 2, false };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_124 = { {0, 1, 2, 0, 0, 0, 0, 0}, {0xff, 0xff, 0, 0, 0, 0, 0, 0}, 3, false };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_125 = { {0, 2, 0, 0, 0, 0, 0, 0}, {0xffff, 0, 0, 0, 0, 0, 0, 0}, 2, false };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_126 = { {0, 1, 0, 0, 0, 0, 0, 0}, {0xff, 0, 0, 0, 0, 0, 0, 0}, 2, false };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_127 = { {0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0}, 1, false };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_128 = { {0, 1, 2, 3, 4, 5, 6, 0}, {0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0}, 7, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_129 = { {0, 2, 3, 4, 5, 6, 0, 0}, {0xffff, 0xff, 0xff, 0xff, 0xff, 0xff, 0, 0}, 6, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_130 = { {0, 1, 3, 4, 5, 6, 0, 0}, {0xff, 0xffff, 0xff, 0xff, 0xff, 0xff, 0, 0}, 6, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_131 = { {0, 3, 4, 5, 6, 0, 0, 0}, {0xffffff, 0xff, 0xff, 0xff, 0xff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_132 = { {0, 1, 2, 4, 5, 6, 0, 0}, {0xff, 0xff, 0xffff, 0xff, 0xff, 0xff, 0, 0}, 6, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_133 = { {0, 2, 4, 5, 6, 0, 0, 0}, {0xffff, 0xffff, 0xff, 0xff, 0xff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_134 = { {0, 1, 4, 5, 6, 0, 0, 0}, {0xff, 0xffffff, 0xff, 0xff, 0xff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_135 = { {0, 4, 5, 6, 0, 0, 0, 0}, {0xffffffff, 0xff, 0xff, 0xff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_136 = { {0, 1, 2, 3, 5, 6, 0, 0}, {0xff, 0xff, 0xff, 0xffff, 0xff, 0xff, 0, 0}, 6, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_137 = { {0, 2, 3, 5, 6, 0, 0, 0}, {0xffff, 0xff, 0xffff, 0xff, 0xff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_138 = { {0, 1, 3, 5, 6, 0, 0, 0}, {0xff, 0xffff, 0xffff, 0xff, 0xff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_139 = { {0, 3, 5, 6, 0, 0, 0, 0}, {0xffffff, 0xffff, 0xff, 0xff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_140 = { {0, 1, 2, 5, 6, 0, 0, 0}, {0xff, 0xff, 0xffffff, 0xff, 0xff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_141 = { {0, 2, 5, 6, 0, 0, 0, 0}, {0xffff, 0xffffff, 0xff, 0xff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_142 = { {0, 1, 5, 6, 0, 0, 0, 0}, {0xff, 0xffffffff, 0xff, 0xff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_143 = { {0, 5, 6, 0, 0, 0, 0, 0}, {0, 0xff, 0xff, 0, 0, 0, 0, 0}, 3, false };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_144 = { {0, 1, 2, 3, 4, 6, 0, 0}, {0xff, 0xff, 0xff, 0xff, 0xffff, 0xff, 0, 0}, 6, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_145 = { {0, 2, 3, 4, 6, 0, 0, 0}, {0xffff, 0xff, 0xff, 0xffff, 0xff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_146 = { {0, 1, 3, 4, 6, 0, 0, 0}, {0xff, 0xffff, 0xff, 0xffff, 0xff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_147 = { {0, 3, 4, 6, 0, 0, 0, 0}, {0xffffff, 0xff, 0xffff, 0xff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_148 = { {0, 1, 2, 4, 6, 0, 0, 0}, {0xff, 0xff, 0xffff, 0xffff, 0xff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_149 = { {0, 2, 4, 6, 0, 0, 0, 0}, {0xffff, 0xffff, 0xffff, 0xff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_150 = { {0, 1, 4, 6, 0, 0, 0, 0}, {0xff, 0xffffff, 0xffff, 0xff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_151 = { {0, 4, 6, 0, 0, 0, 0, 0}, {0xffffffff, 0xffff, 0xff, 0, 0, 0, 0, 0}, 3, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_152 = { {0, 1, 2, 3, 6, 0, 0, 0}, {0xff, 0xff, 0xff, 0xffffff, 0xff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_153 = { {0, 2, 3, 6, 0, 0, 0, 0}, {0xffff, 0xff, 0xffffff, 0xff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_154 = { {0, 1, 3, 6, 0, 0, 0, 0}, {0xff, 0xffff, 0xffffff, 0xff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_155 = { {0, 3, 6, 0, 0, 0, 0, 0}, {0xffffff, 0xffffff, 0xff, 0, 0, 0, 0, 0}, 3, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_156 = { {0, 1, 2, 6, 0, 0, 0, 0}, {0xff, 0xff, 0xffffffff, 0xff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_157 = { {0, 2, 6, 0, 0, 0, 0, 0}, {0xffff, 0xffffffff, 0xff, 0, 0, 0, 0, 0}, 3, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_158 = { {0, 1, 6, 0, 0, 0, 0, 0}, {0xff, 0, 0xff, 0, 0, 0, 0, 0}, 3, false };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_159 = { {0, 6, 0, 0, 0, 0, 0, 0}, {0, 0xff, 0, 0, 0, 0, 0, 0}, 2, false };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_160 = { {0, 1, 2, 3, 4, 5, 0, 0}, {0xff, 0xff, 0xff, 0xff, 0xff, 0xffff, 0, 0}, 6, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_161 = { {0, 2, 3, 4, 5, 0, 0, 0}, {0xffff, 0xff, 0xff, 0xff, 0xffff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_162 = { {0, 1, 3, 4, 5, 0, 0, 0}, {0xff, 0xffff, 0xff, 0xff, 0xffff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_163 = { {0, 3, 4, 5, 0, 0, 0, 0}, {0xffffff, 0xff, 0xff, 0xffff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_164 = { {0, 1, 2, 4, 5, 0, 0, 0}, {0xff, 0xff, 0xffff, 0xff, 0xffff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_165 = { {0, 2, 4, 5, 0, 0, 0, 0}, {0xffff, 0xffff, 0xff, 0xffff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_166 = { {0, 1, 4, 5, 0, 0, 0, 0}, {0xff, 0xffffff, 0xff, 0xffff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_167 = { {0, 4, 5, 0, 0, 0, 0, 0}, {0xffffffff, 0xff, 0xffff, 0, 0, 0, 0, 0}, 3, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_168 = { {0, 1, 2, 3, 5, 0, 0, 0}, {0xff, 0xff, 0xff, 0xffff, 0xffff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_169 = { {0, 2, 3, 5, 0, 0, 0, 0}, {0xffff, 0xff, 0xffff, 0xffff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_170 = { {0, 1, 3, 5, 0, 0, 0, 0}, {0xff, 0xffff, 0xffff, 0xffff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_171 = { {0, 3, 5, 0, 0, 0, 0, 0}, {0xffffff, 0xffff, 0xffff, 0, 0, 0, 0, 0}, 3, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_172 = { {0, 1, 2, 5, 0, 0, 0, 0}, {0xff, 0xff, 0xffffff, 0xffff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_173 = { {0, 2, 5, 0, 0, 0, 0, 0}, {0xffff, 0xffffff, 0xffff, 0, 0, 0, 0, 0}, 3, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_174 = { {0, 1, 5, 0, 0, 0, 0, 0}, {0xff, 0xffffffff, 0xffff, 0, 0, 0, 0, 0}, 3, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_175 = { {0, 5, 0, 0, 0, 0, 0, 0}, {0, 0xffff, 0, 0, 0, 0, 0, 0}, 2, false };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_176 = { {0, 1, 2, 3, 4, 0, 0, 0}, {0xff, 0xff, 0xff, 0xff, 0xffffff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_177 = { {0, 2, 3, 4, 0, 0, 0, 0}, {0xffff, 0xff, 0xff, 0xffffff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_178 = { {0, 1, 3, 4, 0, 0, 0, 0}, {0xff, 0xffff, 0xff, 0xffffff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_179 = { {0, 3, 4, 0, 0, 0, 0, 0}, {0xffffff, 0xff, 0xffffff, 0, 0, 0, 0, 0}, 3, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_180 = { {0, 1, 2, 4, 0, 0, 0, 0}, {0xff, 0xff, 0xffff, 0xffffff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_181 = { {0, 2, 4, 0, 0, 0, 0, 0}, {0xffff, 0xffff, 0xffffff, 0, 0, 0, 0, 0}, 3, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_182 = { {0, 1, 4, 0, 0, 0, 0, 0}, {0xff, 0xffffff, 0xffffff, 0, 0, 0, 0, 0}, 3, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_183 = { {0, 4, 0, 0, 0, 0, 0, 0}, {0xffffffff, 0xffffff, 0, 0, 0, 0, 0, 0}, 2, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_184 = { {0, 1, 2, 3, 0, 0, 0, 0}, {0xff, 0xff, 0xff, 0xffffffff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_185 = { {0, 2, 3, 0, 0, 0, 0, 0}, {0xffff, 0xff, 0xffffffff, 0, 0, 0, 0, 0}, 3, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_186 = { {0, 1, 3, 0, 0, 0, 0, 0}, {0xff, 0xffff, 0xffffffff, 0, 0, 0, 0, 0}, 3, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_187 = { {0, 3, 0, 0, 0, 0, 0, 0}, {0xffffff, 0xffffffff, 0, 0, 0, 0, 0, 0}, 2, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_188 = { {0, 1, 2, 0, 0, 0, 0, 0}, {0xff, 0xff, 0, 0, 0, 0, 0, 0}, 3, false };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_189 = { {0, 2, 0, 0, 0, 0, 0, 0}, {0xffff, 0, 0, 0, 0, 0, 0, 0}, 2, false };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_190 = { {0, 1, 0, 0, 0, 0, 0, 0}, {0xff, 0, 0, 0, 0, 0, 0, 0}, 2, false };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_191 = { {0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0}, 1, false };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_192 = { {0, 1, 2, 3, 4, 5, 0, 0}, {0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0, 0}, 6, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_193 = { {0, 2, 3, 4, 5, 0, 0, 0}, {0xffff, 0xff, 0xff, 0xff, 0xff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_194 = { {0, 1, 3, 4, 5, 0, 0, 0}, {0xff, 0xffff, 0xff, 0xff, 0xff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_195 = { {0, 3, 4, 5, 0, 0, 0, 0}, {0xffffff, 0xff, 0xff, 0xff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_196 = { {0, 1, 2, 4, 5, 0, 0, 0}, {0xff, 0xff, 0xffff, 0xff, 0xff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_197 = { {0, 2, 4, 5, 0, 0, 0, 0}, {0xffff, 0xffff, 0xff, 0xff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_198 = { {0, 1, 4, 5, 0, 0, 0, 0}, {0xff, 0xffffff, 0xff, 0xff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_199 = { {0, 4, 5, 0, 0, 0, 0, 0}, {0xffffffff, 0xff, 0xff, 0, 0, 0, 0, 0}, 3, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_200 = { {0, 1, 2, 3, 5, 0, 0, 0}, {0xff, 0xff, 0xff, 0xffff, 0xff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_201 = { {0, 2, 3, 5, 0, 0, 0, 0}, {0xffff, 0xff, 0xffff, 0xff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_202 = { {0, 1, 3, 5, 0, 0, 0, 0}, {0xff, 0xffff, 0xffff, 0xff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_203 = { {0, 3, 5, 0, 0, 0, 0, 0}, {0xffffff, 0xffff, 0xff, 0, 0, 0, 0, 0}, 3, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_204 = { {0, 1, 2, 5, 0, 0, 0, 0}, {0xff, 0xff, 0xffffff, 0xff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_205 = { {0, 2, 5, 0, 0, 0, 0, 0}, {0xffff, 0xffffff, 0xff, 0, 0, 0, 0, 0}, 3, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_206 = { {0, 1, 5, 0, 0, 0, 0, 0}, {0xff, 0xffffffff, 0xff, 0, 0, 0, 0, 0}, 3, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_207 = { {0, 5, 0, 0, 0, 0, 0, 0}, {0, 0xff, 0, 0, 0, 0, 0, 0}, 2, false };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_208 = { {0, 1, 2, 3, 4, 0, 0, 0}, {0xff, 0xff, 0xff, 0xff, 0xffff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_209 = { {0, 2, 3, 4, 0, 0, 0, 0}, {0xffff, 0xff, 0xff, 0xffff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_210 = { {0, 1, 3, 4, 0, 0, 0, 0}, {0xff, 0xffff, 0xff, 0xffff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_211 = { {0, 3, 4, 0, 0, 0, 0, 0}, {0xffffff, 0xff, 0xffff, 0, 0, 0, 0, 0}, 3, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_212 = { {0, 1, 2, 4, 0, 0, 0, 0}, {0xff, 0xff, 0xffff, 0xffff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_213 = { {0, 2, 4, 0, 0, 0, 0, 0}, {0xffff, 0xffff, 0xffff, 0, 0, 0, 0, 0}, 3, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_214 = { {0, 1, 4, 0, 0, 0, 0, 0}, {0xff, 0xffffff, 0xffff, 0, 0, 0, 0, 0}, 3, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_215 = { {0, 4, 0, 0, 0, 0, 0, 0}, {0xffffffff, 0xffff, 0, 0, 0, 0, 0, 0}, 2, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_216 = { {0, 1, 2, 3, 0, 0, 0, 0}, {0xff, 0xff, 0xff, 0xffffff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_217 = { {0, 2, 3, 0, 0, 0, 0, 0}, {0xffff, 0xff, 0xffffff, 0, 0, 0, 0, 0}, 3, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_218 = { {0, 1, 3, 0, 0, 0, 0, 0}, {0xff, 0xffff, 0xffffff, 0, 0, 0, 0, 0}, 3, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_219 = { {0, 3, 0, 0, 0, 0, 0, 0}, {0xffffff, 0xffffff, 0, 0, 0, 0, 0, 0}, 2, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_220 = { {0, 1, 2, 0, 0, 0, 0, 0}, {0xff, 0xff, 0xffffffff, 0, 0, 0, 0, 0}, 3, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_221 = { {0, 2, 0, 0, 0, 0, 0, 0}, {0xffff, 0xffffffff, 0, 0, 0, 0, 0, 0}, 2, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_222 = { {0, 1, 0, 0, 0, 0, 0, 0}, {0xff, 0, 0, 0, 0, 0, 0, 0}, 2, false };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_223 = { {0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0}, 1, false };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_224 = { {0, 1, 2, 3, 4, 0, 0, 0}, {0xff, 0xff, 0xff, 0xff, 0xff, 0, 0, 0}, 5, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_225 = { {0, 2, 3, 4, 0, 0, 0, 0}, {0xffff, 0xff, 0xff, 0xff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_226 = { {0, 1, 3, 4, 0, 0, 0, 0}, {0xff, 0xffff, 0xff, 0xff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_227 = { {0, 3, 4, 0, 0, 0, 0, 0}, {0xffffff, 0xff, 0xff, 0, 0, 0, 0, 0}, 3, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_228 = { {0, 1, 2, 4, 0, 0, 0, 0}, {0xff, 0xff, 0xffff, 0xff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_229 = { {0, 2, 4, 0, 0, 0, 0, 0}, {0xffff, 0xffff, 0xff, 0, 0, 0, 0, 0}, 3, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_230 = { {0, 1, 4, 0, 0, 0, 0, 0}, {0xff, 0xffffff, 0xff, 0, 0, 0, 0, 0}, 3, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_231 = { {0, 4, 0, 0, 0, 0, 0, 0}, {0xffffffff, 0xff, 0, 0, 0, 0, 0, 0}, 2, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_232 = { {0, 1, 2, 3, 0, 0, 0, 0}, {0xff, 0xff, 0xff, 0xffff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_233 = { {0, 2, 3, 0, 0, 0, 0, 0}, {0xffff, 0xff, 0xffff, 0, 0, 0, 0, 0}, 3, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_234 = { {0, 1, 3, 0, 0, 0, 0, 0}, {0xff, 0xffff, 0xffff, 0, 0, 0, 0, 0}, 3, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_235 = { {0, 3, 0, 0, 0, 0, 0, 0}, {0xffffff, 0xffff, 0, 0, 0, 0, 0, 0}, 2, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_236 = { {0, 1, 2, 0, 0, 0, 0, 0}, {0xff, 0xff, 0xffffff, 0, 0, 0, 0, 0}, 3, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_237 = { {0, 2, 0, 0, 0, 0, 0, 0}, {0xffff, 0xffffff, 0, 0, 0, 0, 0, 0}, 2, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_238 = { {0, 1, 0, 0, 0, 0, 0, 0}, {0xff, 0xffffffff, 0, 0, 0, 0, 0, 0}, 2, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_239 = { {0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0}, 1, false };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_240 = { {0, 1, 2, 3, 0, 0, 0, 0}, {0xff, 0xff, 0xff, 0xff, 0, 0, 0, 0}, 4, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_241 = { {0, 2, 3, 0, 0, 0, 0, 0}, {0xffff, 0xff, 0xff, 0, 0, 0, 0, 0}, 3, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_242 = { {0, 1, 3, 0, 0, 0, 0, 0}, {0xff, 0xffff, 0xff, 0, 0, 0, 0, 0}, 3, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_243 = { {0, 3, 0, 0, 0, 0, 0, 0}, {0xffffff, 0xff, 0, 0, 0, 0, 0, 0}, 2, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_244 = { {0, 1, 2, 0, 0, 0, 0, 0}, {0xff, 0xff, 0xffff, 0, 0, 0, 0, 0}, 3, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_245 = { {0, 2, 0, 0, 0, 0, 0, 0}, {0xffff, 0xffff, 0, 0, 0, 0, 0, 0}, 2, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_246 = { {0, 1, 0, 0, 0, 0, 0, 0}, {0xff, 0xffffff, 0, 0, 0, 0, 0, 0}, 2, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_247 = { {0, 0, 0, 0, 0, 0, 0, 0}, {0xffffffff, 0, 0, 0, 0, 0, 0, 0}, 1, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_248 = { {0, 1, 2, 0, 0, 0, 0, 0}, {0xff, 0xff, 0xff, 0, 0, 0, 0, 0}, 3, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_249 = { {0, 2, 0, 0, 0, 0, 0, 0}, {0xffff, 0xff, 0, 0, 0, 0, 0, 0}, 2, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_250 = { {0, 1, 0, 0, 0, 0, 0, 0}, {0xff, 0xffff, 0, 0, 0, 0, 0, 0}, 2, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_251 = { {0, 0, 0, 0, 0, 0, 0, 0}, {0xffffff, 0, 0, 0, 0, 0, 0, 0}, 1, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_252 = { {0, 1, 0, 0, 0, 0, 0, 0}, {0xff, 0xff, 0, 0, 0, 0, 0, 0}, 2, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_253 = { {0, 0, 0, 0, 0, 0, 0, 0}, {0xffff, 0, 0, 0, 0, 0, 0, 0}, 1, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_254 = { {0, 0, 0, 0, 0, 0, 0, 0}, {0xff, 0, 0, 0, 0, 0, 0, 0}, 1, true };
static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_255 = { {0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0}, 0, false };


static GvintIncompUnaryUnpackInfo incompUnaryUnpackInfoArr[256] = { GvintIncompUnaryUnpackInfo_0,
		GvintIncompUnaryUnpackInfo_1, GvintIncompUnaryUnpackInfo_2, GvintIncompUnaryUnpackInfo_3,
		GvintIncompUnaryUnpackInfo_4, GvintIncompUnaryUnpackInfo_5, GvintIncompUnaryUnpackInfo_6,
		GvintIncompUnaryUnpackInfo_7, GvintIncompUnaryUnpackInfo_8, GvintIncompUnaryUnpackInfo_9,
		GvintIncompUnaryUnpackInfo_10, GvintIncompUnaryUnpackInfo_11, GvintIncompUnaryUnpackInfo_12,
		GvintIncompUnaryUnpackInfo_13, GvintIncompUnaryUnpackInfo_14, GvintIncompUnaryUnpackInfo_15,
		GvintIncompUnaryUnpackInfo_16, GvintIncompUnaryUnpackInfo_17, GvintIncompUnaryUnpackInfo_18,
		GvintIncompUnaryUnpackInfo_19, GvintIncompUnaryUnpackInfo_20, GvintIncompUnaryUnpackInfo_21,
		GvintIncompUnaryUnpackInfo_22, GvintIncompUnaryUnpackInfo_23, GvintIncompUnaryUnpackInfo_24,
		GvintIncompUnaryUnpackInfo_25, GvintIncompUnaryUnpackInfo_26, GvintIncompUnaryUnpackInfo_27,
		GvintIncompUnaryUnpackInfo_28, GvintIncompUnaryUnpackInfo_29, GvintIncompUnaryUnpackInfo_30,
		GvintIncompUnaryUnpackInfo_31, GvintIncompUnaryUnpackInfo_32, GvintIncompUnaryUnpackInfo_33,
		GvintIncompUnaryUnpackInfo_34, GvintIncompUnaryUnpackInfo_35, GvintIncompUnaryUnpackInfo_36,
		GvintIncompUnaryUnpackInfo_37, GvintIncompUnaryUnpackInfo_38, GvintIncompUnaryUnpackInfo_39,
		GvintIncompUnaryUnpackInfo_40, GvintIncompUnaryUnpackInfo_41, GvintIncompUnaryUnpackInfo_42,
		GvintIncompUnaryUnpackInfo_43, GvintIncompUnaryUnpackInfo_44, GvintIncompUnaryUnpackInfo_45,
		GvintIncompUnaryUnpackInfo_46, GvintIncompUnaryUnpackInfo_47, GvintIncompUnaryUnpackInfo_48,
		GvintIncompUnaryUnpackInfo_49, GvintIncompUnaryUnpackInfo_50, GvintIncompUnaryUnpackInfo_51,
		GvintIncompUnaryUnpackInfo_52, GvintIncompUnaryUnpackInfo_53, GvintIncompUnaryUnpackInfo_54,
		GvintIncompUnaryUnpackInfo_55, GvintIncompUnaryUnpackInfo_56, GvintIncompUnaryUnpackInfo_57,
		GvintIncompUnaryUnpackInfo_58, GvintIncompUnaryUnpackInfo_59, GvintIncompUnaryUnpackInfo_60,
		GvintIncompUnaryUnpackInfo_61, GvintIncompUnaryUnpackInfo_62, GvintIncompUnaryUnpackInfo_63,
		GvintIncompUnaryUnpackInfo_64, GvintIncompUnaryUnpackInfo_65, GvintIncompUnaryUnpackInfo_66,
		GvintIncompUnaryUnpackInfo_67, GvintIncompUnaryUnpackInfo_68, GvintIncompUnaryUnpackInfo_69,
		GvintIncompUnaryUnpackInfo_70, GvintIncompUnaryUnpackInfo_71, GvintIncompUnaryUnpackInfo_72,
		GvintIncompUnaryUnpackInfo_73, GvintIncompUnaryUnpackInfo_74, GvintIncompUnaryUnpackInfo_75,
		GvintIncompUnaryUnpackInfo_76, GvintIncompUnaryUnpackInfo_77, GvintIncompUnaryUnpackInfo_78,
		GvintIncompUnaryUnpackInfo_79, GvintIncompUnaryUnpackInfo_80, GvintIncompUnaryUnpackInfo_81,
		GvintIncompUnaryUnpackInfo_82, GvintIncompUnaryUnpackInfo_83, GvintIncompUnaryUnpackInfo_84,
		GvintIncompUnaryUnpackInfo_85, GvintIncompUnaryUnpackInfo_86, GvintIncompUnaryUnpackInfo_87,
		GvintIncompUnaryUnpackInfo_88, GvintIncompUnaryUnpackInfo_89, GvintIncompUnaryUnpackInfo_90,
		GvintIncompUnaryUnpackInfo_91, GvintIncompUnaryUnpackInfo_92, GvintIncompUnaryUnpackInfo_93,
		GvintIncompUnaryUnpackInfo_94, GvintIncompUnaryUnpackInfo_95, GvintIncompUnaryUnpackInfo_96,
		GvintIncompUnaryUnpackInfo_97, GvintIncompUnaryUnpackInfo_98, GvintIncompUnaryUnpackInfo_99,
		GvintIncompUnaryUnpackInfo_100, GvintIncompUnaryUnpackInfo_101, GvintIncompUnaryUnpackInfo_102,
		GvintIncompUnaryUnpackInfo_103, GvintIncompUnaryUnpackInfo_104, GvintIncompUnaryUnpackInfo_105,
		GvintIncompUnaryUnpackInfo_106, GvintIncompUnaryUnpackInfo_107, GvintIncompUnaryUnpackInfo_108,
		GvintIncompUnaryUnpackInfo_109, GvintIncompUnaryUnpackInfo_110, GvintIncompUnaryUnpackInfo_111,
		GvintIncompUnaryUnpackInfo_112, GvintIncompUnaryUnpackInfo_113, GvintIncompUnaryUnpackInfo_114,
		GvintIncompUnaryUnpackInfo_115, GvintIncompUnaryUnpackInfo_116, GvintIncompUnaryUnpackInfo_117,
		GvintIncompUnaryUnpackInfo_118, GvintIncompUnaryUnpackInfo_119, GvintIncompUnaryUnpackInfo_120,
		GvintIncompUnaryUnpackInfo_121, GvintIncompUnaryUnpackInfo_122, GvintIncompUnaryUnpackInfo_123,
		GvintIncompUnaryUnpackInfo_124, GvintIncompUnaryUnpackInfo_125, GvintIncompUnaryUnpackInfo_126,
		GvintIncompUnaryUnpackInfo_127, GvintIncompUnaryUnpackInfo_128, GvintIncompUnaryUnpackInfo_129,
		GvintIncompUnaryUnpackInfo_130, GvintIncompUnaryUnpackInfo_131, GvintIncompUnaryUnpackInfo_132,
		GvintIncompUnaryUnpackInfo_133, GvintIncompUnaryUnpackInfo_134, GvintIncompUnaryUnpackInfo_135,
		GvintIncompUnaryUnpackInfo_136, GvintIncompUnaryUnpackInfo_137, GvintIncompUnaryUnpackInfo_138,
		GvintIncompUnaryUnpackInfo_139, GvintIncompUnaryUnpackInfo_140, GvintIncompUnaryUnpackInfo_141,
		GvintIncompUnaryUnpackInfo_142, GvintIncompUnaryUnpackInfo_143, GvintIncompUnaryUnpackInfo_144,
		GvintIncompUnaryUnpackInfo_145, GvintIncompUnaryUnpackInfo_146, GvintIncompUnaryUnpackInfo_147,
		GvintIncompUnaryUnpackInfo_148, GvintIncompUnaryUnpackInfo_149, GvintIncompUnaryUnpackInfo_150,
		GvintIncompUnaryUnpackInfo_151, GvintIncompUnaryUnpackInfo_152, GvintIncompUnaryUnpackInfo_153,
		GvintIncompUnaryUnpackInfo_154, GvintIncompUnaryUnpackInfo_155, GvintIncompUnaryUnpackInfo_156,
		GvintIncompUnaryUnpackInfo_157, GvintIncompUnaryUnpackInfo_158, GvintIncompUnaryUnpackInfo_159,
		GvintIncompUnaryUnpackInfo_160, GvintIncompUnaryUnpackInfo_161, GvintIncompUnaryUnpackInfo_162,
		GvintIncompUnaryUnpackInfo_163, GvintIncompUnaryUnpackInfo_164, GvintIncompUnaryUnpackInfo_165,
		GvintIncompUnaryUnpackInfo_166, GvintIncompUnaryUnpackInfo_167, GvintIncompUnaryUnpackInfo_168,
		GvintIncompUnaryUnpackInfo_169, GvintIncompUnaryUnpackInfo_170, GvintIncompUnaryUnpackInfo_171,
		GvintIncompUnaryUnpackInfo_172, GvintIncompUnaryUnpackInfo_173, GvintIncompUnaryUnpackInfo_174,
		GvintIncompUnaryUnpackInfo_175, GvintIncompUnaryUnpackInfo_176, GvintIncompUnaryUnpackInfo_177,
		GvintIncompUnaryUnpackInfo_178, GvintIncompUnaryUnpackInfo_179, GvintIncompUnaryUnpackInfo_180,
		GvintIncompUnaryUnpackInfo_181, GvintIncompUnaryUnpackInfo_182, GvintIncompUnaryUnpackInfo_183,
		GvintIncompUnaryUnpackInfo_184, GvintIncompUnaryUnpackInfo_185, GvintIncompUnaryUnpackInfo_186,
		GvintIncompUnaryUnpackInfo_187, GvintIncompUnaryUnpackInfo_188, GvintIncompUnaryUnpackInfo_189,
		GvintIncompUnaryUnpackInfo_190, GvintIncompUnaryUnpackInfo_191, GvintIncompUnaryUnpackInfo_192,
		GvintIncompUnaryUnpackInfo_193, GvintIncompUnaryUnpackInfo_194, GvintIncompUnaryUnpackInfo_195,
		GvintIncompUnaryUnpackInfo_196, GvintIncompUnaryUnpackInfo_197, GvintIncompUnaryUnpackInfo_198,
		GvintIncompUnaryUnpackInfo_199, GvintIncompUnaryUnpackInfo_200, GvintIncompUnaryUnpackInfo_201,
		GvintIncompUnaryUnpackInfo_202, GvintIncompUnaryUnpackInfo_203, GvintIncompUnaryUnpackInfo_204,
		GvintIncompUnaryUnpackInfo_205, GvintIncompUnaryUnpackInfo_206, GvintIncompUnaryUnpackInfo_207,
		GvintIncompUnaryUnpackInfo_208, GvintIncompUnaryUnpackInfo_209, GvintIncompUnaryUnpackInfo_210,
		GvintIncompUnaryUnpackInfo_211, GvintIncompUnaryUnpackInfo_212, GvintIncompUnaryUnpackInfo_213,
		GvintIncompUnaryUnpackInfo_214, GvintIncompUnaryUnpackInfo_215, GvintIncompUnaryUnpackInfo_216,
		GvintIncompUnaryUnpackInfo_217, GvintIncompUnaryUnpackInfo_218, GvintIncompUnaryUnpackInfo_219,
		GvintIncompUnaryUnpackInfo_220, GvintIncompUnaryUnpackInfo_221, GvintIncompUnaryUnpackInfo_222,
		GvintIncompUnaryUnpackInfo_223, GvintIncompUnaryUnpackInfo_224, GvintIncompUnaryUnpackInfo_225,
		GvintIncompUnaryUnpackInfo_226, GvintIncompUnaryUnpackInfo_227, GvintIncompUnaryUnpackInfo_228,
		GvintIncompUnaryUnpackInfo_229, GvintIncompUnaryUnpackInfo_230, GvintIncompUnaryUnpackInfo_231,
		GvintIncompUnaryUnpackInfo_232, GvintIncompUnaryUnpackInfo_233, GvintIncompUnaryUnpackInfo_234,
		GvintIncompUnaryUnpackInfo_235, GvintIncompUnaryUnpackInfo_236, GvintIncompUnaryUnpackInfo_237,
		GvintIncompUnaryUnpackInfo_238, GvintIncompUnaryUnpackInfo_239, GvintIncompUnaryUnpackInfo_240,
		GvintIncompUnaryUnpackInfo_241, GvintIncompUnaryUnpackInfo_242, GvintIncompUnaryUnpackInfo_243,
		GvintIncompUnaryUnpackInfo_244, GvintIncompUnaryUnpackInfo_245, GvintIncompUnaryUnpackInfo_246,
		GvintIncompUnaryUnpackInfo_247, GvintIncompUnaryUnpackInfo_248, GvintIncompUnaryUnpackInfo_249,
		GvintIncompUnaryUnpackInfo_250, GvintIncompUnaryUnpackInfo_251, GvintIncompUnaryUnpackInfo_252,
		GvintIncompUnaryUnpackInfo_253, GvintIncompUnaryUnpackInfo_254, GvintIncompUnaryUnpackInfo_255 };
}
}


#endif /* GVINTINCOMPUNARYUNPACK_HPP_ */


/*
 *  code for generating the unpack info:

#include <iostream>
#include <stdint.h>

using namespace std;

int main() {

	for (uint32_t i=0; i<256; i++) {
		bool validGroup = true;
		uint32_t offsetArr[8] = {0,0,0,0,0,0,0,0};
		uint32_t maskArr[8] = {0,0,0,0,0,0,0,0};
		uint32_t intNum = 0;
		uint32_t mask = i;

		uint32_t curBitIdx = 0;

		while (curBitIdx < 8) {
			uint32_t intBitNum = 0;
			bool validUnary = false;
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

				offsetArr[intNum] = curBitIdx - intBitNum;	//offset starts from 0
				if (intBitNum < 4) {
					maskArr[intNum] = (1L << (intBitNum * 8)) - 1;
				}
				else if (intBitNum == 4) {
					maskArr[intNum] = 0xffffffff;
				}
				intNum ++;
			}
		}

		if (intNum == 0) {
			validGroup = false;	//a valid group should represent at least one integer
		}

		//output
		cout << "static GvintIncompUnaryUnpackInfo GvintIncompUnaryUnpackInfo_" << i << " = { ";
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
		cout << (validGroup ? "true" : "false");
		cout << " };" << endl;
	}
	return 0;
}


 *
 */
