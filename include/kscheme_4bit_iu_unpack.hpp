/*
 * kscheme_4bit_iu_unpack.hpp
 *
 *  Created on: 2013-6-9
 *      Author: zxd
 */

#ifndef KSCHEME_4BIT_IU_UNPACK_HPP_
#define KSCHEME_4BIT_IU_UNPACK_HPP_

namespace paradise {
namespace index {

struct KS4IUUnpackInfo {
		uint8_t offsetArr[8];
		uint32_t maskArr[8];
		uint8_t intNum;
		bool valid;		//true if it's a valid representation of the group
};

static KS4IUUnpackInfo KS4IUUnpackInfo_0 = { {0, 4, 8, 12, 16, 20, 24, 28}, {0xf, 0xf, 0xf, 0xf, 0xf, 0xf, 0xf, 0xf}, 32, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_1 = { {0, 8, 12, 16, 20, 24, 28, 0}, {0xff, 0xf, 0xf, 0xf, 0xf, 0xf, 0xf, 0}, 28, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_2 = { {0, 4, 12, 16, 20, 24, 28, 0}, {0xf, 0xff, 0xf, 0xf, 0xf, 0xf, 0xf, 0}, 28, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_3 = { {0, 12, 16, 20, 24, 28, 0, 0}, {0xfff, 0xf, 0xf, 0xf, 0xf, 0xf, 0, 0}, 24, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_4 = { {0, 4, 8, 16, 20, 24, 28, 0}, {0xf, 0xf, 0xff, 0xf, 0xf, 0xf, 0xf, 0}, 28, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_5 = { {0, 8, 16, 20, 24, 28, 0, 0}, {0xff, 0xff, 0xf, 0xf, 0xf, 0xf, 0, 0}, 24, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_6 = { {0, 4, 16, 20, 24, 28, 0, 0}, {0xf, 0xfff, 0xf, 0xf, 0xf, 0xf, 0, 0}, 24, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_7 = { {0, 16, 20, 24, 28, 0, 0, 0}, {0xffff, 0xf, 0xf, 0xf, 0xf, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_8 = { {0, 4, 8, 12, 20, 24, 28, 0}, {0xf, 0xf, 0xf, 0xff, 0xf, 0xf, 0xf, 0}, 28, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_9 = { {0, 8, 12, 20, 24, 28, 0, 0}, {0xff, 0xf, 0xff, 0xf, 0xf, 0xf, 0, 0}, 24, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_10 = { {0, 4, 12, 20, 24, 28, 0, 0}, {0xf, 0xff, 0xff, 0xf, 0xf, 0xf, 0, 0}, 24, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_11 = { {0, 12, 20, 24, 28, 0, 0, 0}, {0xfff, 0xff, 0xf, 0xf, 0xf, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_12 = { {0, 4, 8, 20, 24, 28, 0, 0}, {0xf, 0xf, 0xfff, 0xf, 0xf, 0xf, 0, 0}, 24, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_13 = { {0, 8, 20, 24, 28, 0, 0, 0}, {0xff, 0xfff, 0xf, 0xf, 0xf, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_14 = { {0, 4, 20, 24, 28, 0, 0, 0}, {0xf, 0xffff, 0xf, 0xf, 0xf, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_15 = { {0, 20, 24, 28, 0, 0, 0, 0}, {0xfffff, 0xf, 0xf, 0xf, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_16 = { {0, 4, 8, 12, 16, 24, 28, 0}, {0xf, 0xf, 0xf, 0xf, 0xff, 0xf, 0xf, 0}, 28, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_17 = { {0, 8, 12, 16, 24, 28, 0, 0}, {0xff, 0xf, 0xf, 0xff, 0xf, 0xf, 0, 0}, 24, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_18 = { {0, 4, 12, 16, 24, 28, 0, 0}, {0xf, 0xff, 0xf, 0xff, 0xf, 0xf, 0, 0}, 24, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_19 = { {0, 12, 16, 24, 28, 0, 0, 0}, {0xfff, 0xf, 0xff, 0xf, 0xf, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_20 = { {0, 4, 8, 16, 24, 28, 0, 0}, {0xf, 0xf, 0xff, 0xff, 0xf, 0xf, 0, 0}, 24, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_21 = { {0, 8, 16, 24, 28, 0, 0, 0}, {0xff, 0xff, 0xff, 0xf, 0xf, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_22 = { {0, 4, 16, 24, 28, 0, 0, 0}, {0xf, 0xfff, 0xff, 0xf, 0xf, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_23 = { {0, 16, 24, 28, 0, 0, 0, 0}, {0xffff, 0xff, 0xf, 0xf, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_24 = { {0, 4, 8, 12, 24, 28, 0, 0}, {0xf, 0xf, 0xf, 0xfff, 0xf, 0xf, 0, 0}, 24, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_25 = { {0, 8, 12, 24, 28, 0, 0, 0}, {0xff, 0xf, 0xfff, 0xf, 0xf, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_26 = { {0, 4, 12, 24, 28, 0, 0, 0}, {0xf, 0xff, 0xfff, 0xf, 0xf, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_27 = { {0, 12, 24, 28, 0, 0, 0, 0}, {0xfff, 0xfff, 0xf, 0xf, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_28 = { {0, 4, 8, 24, 28, 0, 0, 0}, {0xf, 0xf, 0xffff, 0xf, 0xf, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_29 = { {0, 8, 24, 28, 0, 0, 0, 0}, {0xff, 0xffff, 0xf, 0xf, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_30 = { {0, 4, 24, 28, 0, 0, 0, 0}, {0xf, 0xfffff, 0xf, 0xf, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_31 = { {0, 24, 28, 0, 0, 0, 0, 0}, {0xffffff, 0xf, 0xf, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_32 = { {0, 4, 8, 12, 16, 20, 28, 0}, {0xf, 0xf, 0xf, 0xf, 0xf, 0xff, 0xf, 0}, 28, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_33 = { {0, 8, 12, 16, 20, 28, 0, 0}, {0xff, 0xf, 0xf, 0xf, 0xff, 0xf, 0, 0}, 24, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_34 = { {0, 4, 12, 16, 20, 28, 0, 0}, {0xf, 0xff, 0xf, 0xf, 0xff, 0xf, 0, 0}, 24, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_35 = { {0, 12, 16, 20, 28, 0, 0, 0}, {0xfff, 0xf, 0xf, 0xff, 0xf, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_36 = { {0, 4, 8, 16, 20, 28, 0, 0}, {0xf, 0xf, 0xff, 0xf, 0xff, 0xf, 0, 0}, 24, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_37 = { {0, 8, 16, 20, 28, 0, 0, 0}, {0xff, 0xff, 0xf, 0xff, 0xf, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_38 = { {0, 4, 16, 20, 28, 0, 0, 0}, {0xf, 0xfff, 0xf, 0xff, 0xf, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_39 = { {0, 16, 20, 28, 0, 0, 0, 0}, {0xffff, 0xf, 0xff, 0xf, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_40 = { {0, 4, 8, 12, 20, 28, 0, 0}, {0xf, 0xf, 0xf, 0xff, 0xff, 0xf, 0, 0}, 24, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_41 = { {0, 8, 12, 20, 28, 0, 0, 0}, {0xff, 0xf, 0xff, 0xff, 0xf, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_42 = { {0, 4, 12, 20, 28, 0, 0, 0}, {0xf, 0xff, 0xff, 0xff, 0xf, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_43 = { {0, 12, 20, 28, 0, 0, 0, 0}, {0xfff, 0xff, 0xff, 0xf, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_44 = { {0, 4, 8, 20, 28, 0, 0, 0}, {0xf, 0xf, 0xfff, 0xff, 0xf, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_45 = { {0, 8, 20, 28, 0, 0, 0, 0}, {0xff, 0xfff, 0xff, 0xf, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_46 = { {0, 4, 20, 28, 0, 0, 0, 0}, {0xf, 0xffff, 0xff, 0xf, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_47 = { {0, 20, 28, 0, 0, 0, 0, 0}, {0xfffff, 0xff, 0xf, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_48 = { {0, 4, 8, 12, 16, 28, 0, 0}, {0xf, 0xf, 0xf, 0xf, 0xfff, 0xf, 0, 0}, 24, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_49 = { {0, 8, 12, 16, 28, 0, 0, 0}, {0xff, 0xf, 0xf, 0xfff, 0xf, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_50 = { {0, 4, 12, 16, 28, 0, 0, 0}, {0xf, 0xff, 0xf, 0xfff, 0xf, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_51 = { {0, 12, 16, 28, 0, 0, 0, 0}, {0xfff, 0xf, 0xfff, 0xf, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_52 = { {0, 4, 8, 16, 28, 0, 0, 0}, {0xf, 0xf, 0xff, 0xfff, 0xf, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_53 = { {0, 8, 16, 28, 0, 0, 0, 0}, {0xff, 0xff, 0xfff, 0xf, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_54 = { {0, 4, 16, 28, 0, 0, 0, 0}, {0xf, 0xfff, 0xfff, 0xf, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_55 = { {0, 16, 28, 0, 0, 0, 0, 0}, {0xffff, 0xfff, 0xf, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_56 = { {0, 4, 8, 12, 28, 0, 0, 0}, {0xf, 0xf, 0xf, 0xffff, 0xf, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_57 = { {0, 8, 12, 28, 0, 0, 0, 0}, {0xff, 0xf, 0xffff, 0xf, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_58 = { {0, 4, 12, 28, 0, 0, 0, 0}, {0xf, 0xff, 0xffff, 0xf, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_59 = { {0, 12, 28, 0, 0, 0, 0, 0}, {0xfff, 0xffff, 0xf, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_60 = { {0, 4, 8, 28, 0, 0, 0, 0}, {0xf, 0xf, 0xfffff, 0xf, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_61 = { {0, 8, 28, 0, 0, 0, 0, 0}, {0xff, 0xfffff, 0xf, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_62 = { {0, 4, 28, 0, 0, 0, 0, 0}, {0xf, 0xffffff, 0xf, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_63 = { {0, 28, 0, 0, 0, 0, 0, 0}, {0xfffffff, 0xf, 0, 0, 0, 0, 0, 0}, 8, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_64 = { {0, 4, 8, 12, 16, 20, 24, 0}, {0xf, 0xf, 0xf, 0xf, 0xf, 0xf, 0xff, 0}, 28, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_65 = { {0, 8, 12, 16, 20, 24, 0, 0}, {0xff, 0xf, 0xf, 0xf, 0xf, 0xff, 0, 0}, 24, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_66 = { {0, 4, 12, 16, 20, 24, 0, 0}, {0xf, 0xff, 0xf, 0xf, 0xf, 0xff, 0, 0}, 24, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_67 = { {0, 12, 16, 20, 24, 0, 0, 0}, {0xfff, 0xf, 0xf, 0xf, 0xff, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_68 = { {0, 4, 8, 16, 20, 24, 0, 0}, {0xf, 0xf, 0xff, 0xf, 0xf, 0xff, 0, 0}, 24, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_69 = { {0, 8, 16, 20, 24, 0, 0, 0}, {0xff, 0xff, 0xf, 0xf, 0xff, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_70 = { {0, 4, 16, 20, 24, 0, 0, 0}, {0xf, 0xfff, 0xf, 0xf, 0xff, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_71 = { {0, 16, 20, 24, 0, 0, 0, 0}, {0xffff, 0xf, 0xf, 0xff, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_72 = { {0, 4, 8, 12, 20, 24, 0, 0}, {0xf, 0xf, 0xf, 0xff, 0xf, 0xff, 0, 0}, 24, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_73 = { {0, 8, 12, 20, 24, 0, 0, 0}, {0xff, 0xf, 0xff, 0xf, 0xff, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_74 = { {0, 4, 12, 20, 24, 0, 0, 0}, {0xf, 0xff, 0xff, 0xf, 0xff, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_75 = { {0, 12, 20, 24, 0, 0, 0, 0}, {0xfff, 0xff, 0xf, 0xff, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_76 = { {0, 4, 8, 20, 24, 0, 0, 0}, {0xf, 0xf, 0xfff, 0xf, 0xff, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_77 = { {0, 8, 20, 24, 0, 0, 0, 0}, {0xff, 0xfff, 0xf, 0xff, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_78 = { {0, 4, 20, 24, 0, 0, 0, 0}, {0xf, 0xffff, 0xf, 0xff, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_79 = { {0, 20, 24, 0, 0, 0, 0, 0}, {0xfffff, 0xf, 0xff, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_80 = { {0, 4, 8, 12, 16, 24, 0, 0}, {0xf, 0xf, 0xf, 0xf, 0xff, 0xff, 0, 0}, 24, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_81 = { {0, 8, 12, 16, 24, 0, 0, 0}, {0xff, 0xf, 0xf, 0xff, 0xff, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_82 = { {0, 4, 12, 16, 24, 0, 0, 0}, {0xf, 0xff, 0xf, 0xff, 0xff, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_83 = { {0, 12, 16, 24, 0, 0, 0, 0}, {0xfff, 0xf, 0xff, 0xff, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_84 = { {0, 4, 8, 16, 24, 0, 0, 0}, {0xf, 0xf, 0xff, 0xff, 0xff, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_85 = { {0, 8, 16, 24, 0, 0, 0, 0}, {0xff, 0xff, 0xff, 0xff, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_86 = { {0, 4, 16, 24, 0, 0, 0, 0}, {0xf, 0xfff, 0xff, 0xff, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_87 = { {0, 16, 24, 0, 0, 0, 0, 0}, {0xffff, 0xff, 0xff, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_88 = { {0, 4, 8, 12, 24, 0, 0, 0}, {0xf, 0xf, 0xf, 0xfff, 0xff, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_89 = { {0, 8, 12, 24, 0, 0, 0, 0}, {0xff, 0xf, 0xfff, 0xff, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_90 = { {0, 4, 12, 24, 0, 0, 0, 0}, {0xf, 0xff, 0xfff, 0xff, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_91 = { {0, 12, 24, 0, 0, 0, 0, 0}, {0xfff, 0xfff, 0xff, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_92 = { {0, 4, 8, 24, 0, 0, 0, 0}, {0xf, 0xf, 0xffff, 0xff, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_93 = { {0, 8, 24, 0, 0, 0, 0, 0}, {0xff, 0xffff, 0xff, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_94 = { {0, 4, 24, 0, 0, 0, 0, 0}, {0xf, 0xfffff, 0xff, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_95 = { {0, 24, 0, 0, 0, 0, 0, 0}, {0xffffff, 0xff, 0, 0, 0, 0, 0, 0}, 8, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_96 = { {0, 4, 8, 12, 16, 20, 0, 0}, {0xf, 0xf, 0xf, 0xf, 0xf, 0xfff, 0, 0}, 24, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_97 = { {0, 8, 12, 16, 20, 0, 0, 0}, {0xff, 0xf, 0xf, 0xf, 0xfff, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_98 = { {0, 4, 12, 16, 20, 0, 0, 0}, {0xf, 0xff, 0xf, 0xf, 0xfff, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_99 = { {0, 12, 16, 20, 0, 0, 0, 0}, {0xfff, 0xf, 0xf, 0xfff, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_100 = { {0, 4, 8, 16, 20, 0, 0, 0}, {0xf, 0xf, 0xff, 0xf, 0xfff, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_101 = { {0, 8, 16, 20, 0, 0, 0, 0}, {0xff, 0xff, 0xf, 0xfff, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_102 = { {0, 4, 16, 20, 0, 0, 0, 0}, {0xf, 0xfff, 0xf, 0xfff, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_103 = { {0, 16, 20, 0, 0, 0, 0, 0}, {0xffff, 0xf, 0xfff, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_104 = { {0, 4, 8, 12, 20, 0, 0, 0}, {0xf, 0xf, 0xf, 0xff, 0xfff, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_105 = { {0, 8, 12, 20, 0, 0, 0, 0}, {0xff, 0xf, 0xff, 0xfff, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_106 = { {0, 4, 12, 20, 0, 0, 0, 0}, {0xf, 0xff, 0xff, 0xfff, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_107 = { {0, 12, 20, 0, 0, 0, 0, 0}, {0xfff, 0xff, 0xfff, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_108 = { {0, 4, 8, 20, 0, 0, 0, 0}, {0xf, 0xf, 0xfff, 0xfff, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_109 = { {0, 8, 20, 0, 0, 0, 0, 0}, {0xff, 0xfff, 0xfff, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_110 = { {0, 4, 20, 0, 0, 0, 0, 0}, {0xf, 0xffff, 0xfff, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_111 = { {0, 20, 0, 0, 0, 0, 0, 0}, {0xfffff, 0xfff, 0, 0, 0, 0, 0, 0}, 8, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_112 = { {0, 4, 8, 12, 16, 0, 0, 0}, {0xf, 0xf, 0xf, 0xf, 0xffff, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_113 = { {0, 8, 12, 16, 0, 0, 0, 0}, {0xff, 0xf, 0xf, 0xffff, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_114 = { {0, 4, 12, 16, 0, 0, 0, 0}, {0xf, 0xff, 0xf, 0xffff, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_115 = { {0, 12, 16, 0, 0, 0, 0, 0}, {0xfff, 0xf, 0xffff, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_116 = { {0, 4, 8, 16, 0, 0, 0, 0}, {0xf, 0xf, 0xff, 0xffff, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_117 = { {0, 8, 16, 0, 0, 0, 0, 0}, {0xff, 0xff, 0xffff, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_118 = { {0, 4, 16, 0, 0, 0, 0, 0}, {0xf, 0xfff, 0xffff, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_119 = { {0, 16, 0, 0, 0, 0, 0, 0}, {0xffff, 0xffff, 0, 0, 0, 0, 0, 0}, 8, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_120 = { {0, 4, 8, 12, 0, 0, 0, 0}, {0xf, 0xf, 0xf, 0xfffff, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_121 = { {0, 8, 12, 0, 0, 0, 0, 0}, {0xff, 0xf, 0xfffff, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_122 = { {0, 4, 12, 0, 0, 0, 0, 0}, {0xf, 0xff, 0xfffff, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_123 = { {0, 12, 0, 0, 0, 0, 0, 0}, {0xfff, 0xfffff, 0, 0, 0, 0, 0, 0}, 8, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_124 = { {0, 4, 8, 0, 0, 0, 0, 0}, {0xf, 0xf, 0xffffff, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_125 = { {0, 8, 0, 0, 0, 0, 0, 0}, {0xff, 0xffffff, 0, 0, 0, 0, 0, 0}, 8, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_126 = { {0, 4, 0, 0, 0, 0, 0, 0}, {0xf, 0xfffffff, 0, 0, 0, 0, 0, 0}, 8, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_127 = { {0, 0, 0, 0, 0, 0, 0, 0}, {0xffffffff, 0, 0, 0, 0, 0, 0, 0}, 4, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_128 = { {0, 4, 8, 12, 16, 20, 24, 0}, {0xf, 0xf, 0xf, 0xf, 0xf, 0xf, 0xf, 0}, 28, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_129 = { {0, 8, 12, 16, 20, 24, 0, 0}, {0xff, 0xf, 0xf, 0xf, 0xf, 0xf, 0, 0}, 24, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_130 = { {0, 4, 12, 16, 20, 24, 0, 0}, {0xf, 0xff, 0xf, 0xf, 0xf, 0xf, 0, 0}, 24, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_131 = { {0, 12, 16, 20, 24, 0, 0, 0}, {0xfff, 0xf, 0xf, 0xf, 0xf, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_132 = { {0, 4, 8, 16, 20, 24, 0, 0}, {0xf, 0xf, 0xff, 0xf, 0xf, 0xf, 0, 0}, 24, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_133 = { {0, 8, 16, 20, 24, 0, 0, 0}, {0xff, 0xff, 0xf, 0xf, 0xf, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_134 = { {0, 4, 16, 20, 24, 0, 0, 0}, {0xf, 0xfff, 0xf, 0xf, 0xf, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_135 = { {0, 16, 20, 24, 0, 0, 0, 0}, {0xffff, 0xf, 0xf, 0xf, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_136 = { {0, 4, 8, 12, 20, 24, 0, 0}, {0xf, 0xf, 0xf, 0xff, 0xf, 0xf, 0, 0}, 24, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_137 = { {0, 8, 12, 20, 24, 0, 0, 0}, {0xff, 0xf, 0xff, 0xf, 0xf, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_138 = { {0, 4, 12, 20, 24, 0, 0, 0}, {0xf, 0xff, 0xff, 0xf, 0xf, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_139 = { {0, 12, 20, 24, 0, 0, 0, 0}, {0xfff, 0xff, 0xf, 0xf, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_140 = { {0, 4, 8, 20, 24, 0, 0, 0}, {0xf, 0xf, 0xfff, 0xf, 0xf, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_141 = { {0, 8, 20, 24, 0, 0, 0, 0}, {0xff, 0xfff, 0xf, 0xf, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_142 = { {0, 4, 20, 24, 0, 0, 0, 0}, {0xf, 0xffff, 0xf, 0xf, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_143 = { {0, 20, 24, 0, 0, 0, 0, 0}, {0xfffff, 0xf, 0xf, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_144 = { {0, 4, 8, 12, 16, 24, 0, 0}, {0xf, 0xf, 0xf, 0xf, 0xff, 0xf, 0, 0}, 24, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_145 = { {0, 8, 12, 16, 24, 0, 0, 0}, {0xff, 0xf, 0xf, 0xff, 0xf, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_146 = { {0, 4, 12, 16, 24, 0, 0, 0}, {0xf, 0xff, 0xf, 0xff, 0xf, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_147 = { {0, 12, 16, 24, 0, 0, 0, 0}, {0xfff, 0xf, 0xff, 0xf, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_148 = { {0, 4, 8, 16, 24, 0, 0, 0}, {0xf, 0xf, 0xff, 0xff, 0xf, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_149 = { {0, 8, 16, 24, 0, 0, 0, 0}, {0xff, 0xff, 0xff, 0xf, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_150 = { {0, 4, 16, 24, 0, 0, 0, 0}, {0xf, 0xfff, 0xff, 0xf, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_151 = { {0, 16, 24, 0, 0, 0, 0, 0}, {0xffff, 0xff, 0xf, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_152 = { {0, 4, 8, 12, 24, 0, 0, 0}, {0xf, 0xf, 0xf, 0xfff, 0xf, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_153 = { {0, 8, 12, 24, 0, 0, 0, 0}, {0xff, 0xf, 0xfff, 0xf, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_154 = { {0, 4, 12, 24, 0, 0, 0, 0}, {0xf, 0xff, 0xfff, 0xf, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_155 = { {0, 12, 24, 0, 0, 0, 0, 0}, {0xfff, 0xfff, 0xf, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_156 = { {0, 4, 8, 24, 0, 0, 0, 0}, {0xf, 0xf, 0xffff, 0xf, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_157 = { {0, 8, 24, 0, 0, 0, 0, 0}, {0xff, 0xffff, 0xf, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_158 = { {0, 4, 24, 0, 0, 0, 0, 0}, {0xf, 0xfffff, 0xf, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_159 = { {0, 24, 0, 0, 0, 0, 0, 0}, {0xffffff, 0xf, 0, 0, 0, 0, 0, 0}, 8, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_160 = { {0, 4, 8, 12, 16, 20, 0, 0}, {0xf, 0xf, 0xf, 0xf, 0xf, 0xff, 0, 0}, 24, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_161 = { {0, 8, 12, 16, 20, 0, 0, 0}, {0xff, 0xf, 0xf, 0xf, 0xff, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_162 = { {0, 4, 12, 16, 20, 0, 0, 0}, {0xf, 0xff, 0xf, 0xf, 0xff, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_163 = { {0, 12, 16, 20, 0, 0, 0, 0}, {0xfff, 0xf, 0xf, 0xff, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_164 = { {0, 4, 8, 16, 20, 0, 0, 0}, {0xf, 0xf, 0xff, 0xf, 0xff, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_165 = { {0, 8, 16, 20, 0, 0, 0, 0}, {0xff, 0xff, 0xf, 0xff, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_166 = { {0, 4, 16, 20, 0, 0, 0, 0}, {0xf, 0xfff, 0xf, 0xff, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_167 = { {0, 16, 20, 0, 0, 0, 0, 0}, {0xffff, 0xf, 0xff, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_168 = { {0, 4, 8, 12, 20, 0, 0, 0}, {0xf, 0xf, 0xf, 0xff, 0xff, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_169 = { {0, 8, 12, 20, 0, 0, 0, 0}, {0xff, 0xf, 0xff, 0xff, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_170 = { {0, 4, 12, 20, 0, 0, 0, 0}, {0xf, 0xff, 0xff, 0xff, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_171 = { {0, 12, 20, 0, 0, 0, 0, 0}, {0xfff, 0xff, 0xff, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_172 = { {0, 4, 8, 20, 0, 0, 0, 0}, {0xf, 0xf, 0xfff, 0xff, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_173 = { {0, 8, 20, 0, 0, 0, 0, 0}, {0xff, 0xfff, 0xff, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_174 = { {0, 4, 20, 0, 0, 0, 0, 0}, {0xf, 0xffff, 0xff, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_175 = { {0, 20, 0, 0, 0, 0, 0, 0}, {0xfffff, 0xff, 0, 0, 0, 0, 0, 0}, 8, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_176 = { {0, 4, 8, 12, 16, 0, 0, 0}, {0xf, 0xf, 0xf, 0xf, 0xfff, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_177 = { {0, 8, 12, 16, 0, 0, 0, 0}, {0xff, 0xf, 0xf, 0xfff, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_178 = { {0, 4, 12, 16, 0, 0, 0, 0}, {0xf, 0xff, 0xf, 0xfff, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_179 = { {0, 12, 16, 0, 0, 0, 0, 0}, {0xfff, 0xf, 0xfff, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_180 = { {0, 4, 8, 16, 0, 0, 0, 0}, {0xf, 0xf, 0xff, 0xfff, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_181 = { {0, 8, 16, 0, 0, 0, 0, 0}, {0xff, 0xff, 0xfff, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_182 = { {0, 4, 16, 0, 0, 0, 0, 0}, {0xf, 0xfff, 0xfff, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_183 = { {0, 16, 0, 0, 0, 0, 0, 0}, {0xffff, 0xfff, 0, 0, 0, 0, 0, 0}, 8, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_184 = { {0, 4, 8, 12, 0, 0, 0, 0}, {0xf, 0xf, 0xf, 0xffff, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_185 = { {0, 8, 12, 0, 0, 0, 0, 0}, {0xff, 0xf, 0xffff, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_186 = { {0, 4, 12, 0, 0, 0, 0, 0}, {0xf, 0xff, 0xffff, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_187 = { {0, 12, 0, 0, 0, 0, 0, 0}, {0xfff, 0xffff, 0, 0, 0, 0, 0, 0}, 8, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_188 = { {0, 4, 8, 0, 0, 0, 0, 0}, {0xf, 0xf, 0xfffff, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_189 = { {0, 8, 0, 0, 0, 0, 0, 0}, {0xff, 0xfffff, 0, 0, 0, 0, 0, 0}, 8, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_190 = { {0, 4, 0, 0, 0, 0, 0, 0}, {0xf, 0xffffff, 0, 0, 0, 0, 0, 0}, 8, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_191 = { {0, 0, 0, 0, 0, 0, 0, 0}, {0xfffffff, 0, 0, 0, 0, 0, 0, 0}, 4, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_192 = { {0, 4, 8, 12, 16, 20, 0, 0}, {0xf, 0xf, 0xf, 0xf, 0xf, 0xf, 0, 0}, 24, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_193 = { {0, 8, 12, 16, 20, 0, 0, 0}, {0xff, 0xf, 0xf, 0xf, 0xf, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_194 = { {0, 4, 12, 16, 20, 0, 0, 0}, {0xf, 0xff, 0xf, 0xf, 0xf, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_195 = { {0, 12, 16, 20, 0, 0, 0, 0}, {0xfff, 0xf, 0xf, 0xf, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_196 = { {0, 4, 8, 16, 20, 0, 0, 0}, {0xf, 0xf, 0xff, 0xf, 0xf, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_197 = { {0, 8, 16, 20, 0, 0, 0, 0}, {0xff, 0xff, 0xf, 0xf, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_198 = { {0, 4, 16, 20, 0, 0, 0, 0}, {0xf, 0xfff, 0xf, 0xf, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_199 = { {0, 16, 20, 0, 0, 0, 0, 0}, {0xffff, 0xf, 0xf, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_200 = { {0, 4, 8, 12, 20, 0, 0, 0}, {0xf, 0xf, 0xf, 0xff, 0xf, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_201 = { {0, 8, 12, 20, 0, 0, 0, 0}, {0xff, 0xf, 0xff, 0xf, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_202 = { {0, 4, 12, 20, 0, 0, 0, 0}, {0xf, 0xff, 0xff, 0xf, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_203 = { {0, 12, 20, 0, 0, 0, 0, 0}, {0xfff, 0xff, 0xf, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_204 = { {0, 4, 8, 20, 0, 0, 0, 0}, {0xf, 0xf, 0xfff, 0xf, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_205 = { {0, 8, 20, 0, 0, 0, 0, 0}, {0xff, 0xfff, 0xf, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_206 = { {0, 4, 20, 0, 0, 0, 0, 0}, {0xf, 0xffff, 0xf, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_207 = { {0, 20, 0, 0, 0, 0, 0, 0}, {0xfffff, 0xf, 0, 0, 0, 0, 0, 0}, 8, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_208 = { {0, 4, 8, 12, 16, 0, 0, 0}, {0xf, 0xf, 0xf, 0xf, 0xff, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_209 = { {0, 8, 12, 16, 0, 0, 0, 0}, {0xff, 0xf, 0xf, 0xff, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_210 = { {0, 4, 12, 16, 0, 0, 0, 0}, {0xf, 0xff, 0xf, 0xff, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_211 = { {0, 12, 16, 0, 0, 0, 0, 0}, {0xfff, 0xf, 0xff, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_212 = { {0, 4, 8, 16, 0, 0, 0, 0}, {0xf, 0xf, 0xff, 0xff, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_213 = { {0, 8, 16, 0, 0, 0, 0, 0}, {0xff, 0xff, 0xff, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_214 = { {0, 4, 16, 0, 0, 0, 0, 0}, {0xf, 0xfff, 0xff, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_215 = { {0, 16, 0, 0, 0, 0, 0, 0}, {0xffff, 0xff, 0, 0, 0, 0, 0, 0}, 8, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_216 = { {0, 4, 8, 12, 0, 0, 0, 0}, {0xf, 0xf, 0xf, 0xfff, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_217 = { {0, 8, 12, 0, 0, 0, 0, 0}, {0xff, 0xf, 0xfff, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_218 = { {0, 4, 12, 0, 0, 0, 0, 0}, {0xf, 0xff, 0xfff, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_219 = { {0, 12, 0, 0, 0, 0, 0, 0}, {0xfff, 0xfff, 0, 0, 0, 0, 0, 0}, 8, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_220 = { {0, 4, 8, 0, 0, 0, 0, 0}, {0xf, 0xf, 0xffff, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_221 = { {0, 8, 0, 0, 0, 0, 0, 0}, {0xff, 0xffff, 0, 0, 0, 0, 0, 0}, 8, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_222 = { {0, 4, 0, 0, 0, 0, 0, 0}, {0xf, 0xfffff, 0, 0, 0, 0, 0, 0}, 8, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_223 = { {0, 0, 0, 0, 0, 0, 0, 0}, {0xffffff, 0, 0, 0, 0, 0, 0, 0}, 4, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_224 = { {0, 4, 8, 12, 16, 0, 0, 0}, {0xf, 0xf, 0xf, 0xf, 0xf, 0, 0, 0}, 20, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_225 = { {0, 8, 12, 16, 0, 0, 0, 0}, {0xff, 0xf, 0xf, 0xf, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_226 = { {0, 4, 12, 16, 0, 0, 0, 0}, {0xf, 0xff, 0xf, 0xf, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_227 = { {0, 12, 16, 0, 0, 0, 0, 0}, {0xfff, 0xf, 0xf, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_228 = { {0, 4, 8, 16, 0, 0, 0, 0}, {0xf, 0xf, 0xff, 0xf, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_229 = { {0, 8, 16, 0, 0, 0, 0, 0}, {0xff, 0xff, 0xf, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_230 = { {0, 4, 16, 0, 0, 0, 0, 0}, {0xf, 0xfff, 0xf, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_231 = { {0, 16, 0, 0, 0, 0, 0, 0}, {0xffff, 0xf, 0, 0, 0, 0, 0, 0}, 8, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_232 = { {0, 4, 8, 12, 0, 0, 0, 0}, {0xf, 0xf, 0xf, 0xff, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_233 = { {0, 8, 12, 0, 0, 0, 0, 0}, {0xff, 0xf, 0xff, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_234 = { {0, 4, 12, 0, 0, 0, 0, 0}, {0xf, 0xff, 0xff, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_235 = { {0, 12, 0, 0, 0, 0, 0, 0}, {0xfff, 0xff, 0, 0, 0, 0, 0, 0}, 8, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_236 = { {0, 4, 8, 0, 0, 0, 0, 0}, {0xf, 0xf, 0xfff, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_237 = { {0, 8, 0, 0, 0, 0, 0, 0}, {0xff, 0xfff, 0, 0, 0, 0, 0, 0}, 8, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_238 = { {0, 4, 0, 0, 0, 0, 0, 0}, {0xf, 0xffff, 0, 0, 0, 0, 0, 0}, 8, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_239 = { {0, 0, 0, 0, 0, 0, 0, 0}, {0xfffff, 0, 0, 0, 0, 0, 0, 0}, 4, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_240 = { {0, 4, 8, 12, 0, 0, 0, 0}, {0xf, 0xf, 0xf, 0xf, 0, 0, 0, 0}, 16, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_241 = { {0, 8, 12, 0, 0, 0, 0, 0}, {0xff, 0xf, 0xf, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_242 = { {0, 4, 12, 0, 0, 0, 0, 0}, {0xf, 0xff, 0xf, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_243 = { {0, 12, 0, 0, 0, 0, 0, 0}, {0xfff, 0xf, 0, 0, 0, 0, 0, 0}, 8, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_244 = { {0, 4, 8, 0, 0, 0, 0, 0}, {0xf, 0xf, 0xff, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_245 = { {0, 8, 0, 0, 0, 0, 0, 0}, {0xff, 0xff, 0, 0, 0, 0, 0, 0}, 8, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_246 = { {0, 4, 0, 0, 0, 0, 0, 0}, {0xf, 0xfff, 0, 0, 0, 0, 0, 0}, 8, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_247 = { {0, 0, 0, 0, 0, 0, 0, 0}, {0xffff, 0, 0, 0, 0, 0, 0, 0}, 4, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_248 = { {0, 4, 8, 0, 0, 0, 0, 0}, {0xf, 0xf, 0xf, 0, 0, 0, 0, 0}, 12, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_249 = { {0, 8, 0, 0, 0, 0, 0, 0}, {0xff, 0xf, 0, 0, 0, 0, 0, 0}, 8, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_250 = { {0, 4, 0, 0, 0, 0, 0, 0}, {0xf, 0xff, 0, 0, 0, 0, 0, 0}, 8, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_251 = { {0, 0, 0, 0, 0, 0, 0, 0}, {0xfff, 0, 0, 0, 0, 0, 0, 0}, 4, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_252 = { {0, 4, 0, 0, 0, 0, 0, 0}, {0xf, 0xf, 0, 0, 0, 0, 0, 0}, 8, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_253 = { {0, 0, 0, 0, 0, 0, 0, 0}, {0xff, 0, 0, 0, 0, 0, 0, 0}, 4, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_254 = { {0, 0, 0, 0, 0, 0, 0, 0}, {0xf, 0, 0, 0, 0, 0, 0, 0}, 4, true };
static KS4IUUnpackInfo KS4IUUnpackInfo_255 = { {0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0}, 0, false };
static KS4IUUnpackInfo KS4IUUnpackInfoArr[256] = {
			KS4IUUnpackInfo_0, KS4IUUnpackInfo_1, KS4IUUnpackInfo_2, KS4IUUnpackInfo_3,
			KS4IUUnpackInfo_4, KS4IUUnpackInfo_5, KS4IUUnpackInfo_6, KS4IUUnpackInfo_7,
			KS4IUUnpackInfo_8, KS4IUUnpackInfo_9, KS4IUUnpackInfo_10, KS4IUUnpackInfo_11,
			KS4IUUnpackInfo_12, KS4IUUnpackInfo_13, KS4IUUnpackInfo_14, KS4IUUnpackInfo_15,
			KS4IUUnpackInfo_16, KS4IUUnpackInfo_17, KS4IUUnpackInfo_18, KS4IUUnpackInfo_19,
			KS4IUUnpackInfo_20, KS4IUUnpackInfo_21, KS4IUUnpackInfo_22, KS4IUUnpackInfo_23,
			KS4IUUnpackInfo_24, KS4IUUnpackInfo_25, KS4IUUnpackInfo_26, KS4IUUnpackInfo_27,
			KS4IUUnpackInfo_28, KS4IUUnpackInfo_29, KS4IUUnpackInfo_30, KS4IUUnpackInfo_31,
			KS4IUUnpackInfo_32, KS4IUUnpackInfo_33, KS4IUUnpackInfo_34, KS4IUUnpackInfo_35,
			KS4IUUnpackInfo_36, KS4IUUnpackInfo_37, KS4IUUnpackInfo_38, KS4IUUnpackInfo_39,
			KS4IUUnpackInfo_40, KS4IUUnpackInfo_41, KS4IUUnpackInfo_42, KS4IUUnpackInfo_43,
			KS4IUUnpackInfo_44, KS4IUUnpackInfo_45, KS4IUUnpackInfo_46, KS4IUUnpackInfo_47,
			KS4IUUnpackInfo_48, KS4IUUnpackInfo_49, KS4IUUnpackInfo_50, KS4IUUnpackInfo_51,
			KS4IUUnpackInfo_52, KS4IUUnpackInfo_53, KS4IUUnpackInfo_54, KS4IUUnpackInfo_55,
			KS4IUUnpackInfo_56, KS4IUUnpackInfo_57, KS4IUUnpackInfo_58, KS4IUUnpackInfo_59,
			KS4IUUnpackInfo_60, KS4IUUnpackInfo_61, KS4IUUnpackInfo_62, KS4IUUnpackInfo_63,
			KS4IUUnpackInfo_64, KS4IUUnpackInfo_65, KS4IUUnpackInfo_66, KS4IUUnpackInfo_67,
			KS4IUUnpackInfo_68, KS4IUUnpackInfo_69, KS4IUUnpackInfo_70, KS4IUUnpackInfo_71,
			KS4IUUnpackInfo_72, KS4IUUnpackInfo_73, KS4IUUnpackInfo_74, KS4IUUnpackInfo_75,
			KS4IUUnpackInfo_76, KS4IUUnpackInfo_77, KS4IUUnpackInfo_78, KS4IUUnpackInfo_79,
			KS4IUUnpackInfo_80, KS4IUUnpackInfo_81, KS4IUUnpackInfo_82, KS4IUUnpackInfo_83,
			KS4IUUnpackInfo_84, KS4IUUnpackInfo_85, KS4IUUnpackInfo_86, KS4IUUnpackInfo_87,
			KS4IUUnpackInfo_88, KS4IUUnpackInfo_89, KS4IUUnpackInfo_90, KS4IUUnpackInfo_91,
			KS4IUUnpackInfo_92, KS4IUUnpackInfo_93, KS4IUUnpackInfo_94, KS4IUUnpackInfo_95,
			KS4IUUnpackInfo_96, KS4IUUnpackInfo_97, KS4IUUnpackInfo_98, KS4IUUnpackInfo_99,
			KS4IUUnpackInfo_100, KS4IUUnpackInfo_101, KS4IUUnpackInfo_102, KS4IUUnpackInfo_103,
			KS4IUUnpackInfo_104, KS4IUUnpackInfo_105, KS4IUUnpackInfo_106, KS4IUUnpackInfo_107,
			KS4IUUnpackInfo_108, KS4IUUnpackInfo_109, KS4IUUnpackInfo_110, KS4IUUnpackInfo_111,
			KS4IUUnpackInfo_112, KS4IUUnpackInfo_113, KS4IUUnpackInfo_114, KS4IUUnpackInfo_115,
			KS4IUUnpackInfo_116, KS4IUUnpackInfo_117, KS4IUUnpackInfo_118, KS4IUUnpackInfo_119,
			KS4IUUnpackInfo_120, KS4IUUnpackInfo_121, KS4IUUnpackInfo_122, KS4IUUnpackInfo_123,
			KS4IUUnpackInfo_124, KS4IUUnpackInfo_125, KS4IUUnpackInfo_126, KS4IUUnpackInfo_127,
			KS4IUUnpackInfo_128, KS4IUUnpackInfo_129, KS4IUUnpackInfo_130, KS4IUUnpackInfo_131,
			KS4IUUnpackInfo_132, KS4IUUnpackInfo_133, KS4IUUnpackInfo_134, KS4IUUnpackInfo_135,
			KS4IUUnpackInfo_136, KS4IUUnpackInfo_137, KS4IUUnpackInfo_138, KS4IUUnpackInfo_139,
			KS4IUUnpackInfo_140, KS4IUUnpackInfo_141, KS4IUUnpackInfo_142, KS4IUUnpackInfo_143,
			KS4IUUnpackInfo_144, KS4IUUnpackInfo_145, KS4IUUnpackInfo_146, KS4IUUnpackInfo_147,
			KS4IUUnpackInfo_148, KS4IUUnpackInfo_149, KS4IUUnpackInfo_150, KS4IUUnpackInfo_151,
			KS4IUUnpackInfo_152, KS4IUUnpackInfo_153, KS4IUUnpackInfo_154, KS4IUUnpackInfo_155,
			KS4IUUnpackInfo_156, KS4IUUnpackInfo_157, KS4IUUnpackInfo_158, KS4IUUnpackInfo_159,
			KS4IUUnpackInfo_160, KS4IUUnpackInfo_161, KS4IUUnpackInfo_162, KS4IUUnpackInfo_163,
			KS4IUUnpackInfo_164, KS4IUUnpackInfo_165, KS4IUUnpackInfo_166, KS4IUUnpackInfo_167,
			KS4IUUnpackInfo_168, KS4IUUnpackInfo_169, KS4IUUnpackInfo_170, KS4IUUnpackInfo_171,
			KS4IUUnpackInfo_172, KS4IUUnpackInfo_173, KS4IUUnpackInfo_174, KS4IUUnpackInfo_175,
			KS4IUUnpackInfo_176, KS4IUUnpackInfo_177, KS4IUUnpackInfo_178, KS4IUUnpackInfo_179,
			KS4IUUnpackInfo_180, KS4IUUnpackInfo_181, KS4IUUnpackInfo_182, KS4IUUnpackInfo_183,
			KS4IUUnpackInfo_184, KS4IUUnpackInfo_185, KS4IUUnpackInfo_186, KS4IUUnpackInfo_187,
			KS4IUUnpackInfo_188, KS4IUUnpackInfo_189, KS4IUUnpackInfo_190, KS4IUUnpackInfo_191,
			KS4IUUnpackInfo_192, KS4IUUnpackInfo_193, KS4IUUnpackInfo_194, KS4IUUnpackInfo_195,
			KS4IUUnpackInfo_196, KS4IUUnpackInfo_197, KS4IUUnpackInfo_198, KS4IUUnpackInfo_199,
			KS4IUUnpackInfo_200, KS4IUUnpackInfo_201, KS4IUUnpackInfo_202, KS4IUUnpackInfo_203,
			KS4IUUnpackInfo_204, KS4IUUnpackInfo_205, KS4IUUnpackInfo_206, KS4IUUnpackInfo_207,
			KS4IUUnpackInfo_208, KS4IUUnpackInfo_209, KS4IUUnpackInfo_210, KS4IUUnpackInfo_211,
			KS4IUUnpackInfo_212, KS4IUUnpackInfo_213, KS4IUUnpackInfo_214, KS4IUUnpackInfo_215,
			KS4IUUnpackInfo_216, KS4IUUnpackInfo_217, KS4IUUnpackInfo_218, KS4IUUnpackInfo_219,
			KS4IUUnpackInfo_220, KS4IUUnpackInfo_221, KS4IUUnpackInfo_222, KS4IUUnpackInfo_223,
			KS4IUUnpackInfo_224, KS4IUUnpackInfo_225, KS4IUUnpackInfo_226, KS4IUUnpackInfo_227,
			KS4IUUnpackInfo_228, KS4IUUnpackInfo_229, KS4IUUnpackInfo_230, KS4IUUnpackInfo_231,
			KS4IUUnpackInfo_232, KS4IUUnpackInfo_233, KS4IUUnpackInfo_234, KS4IUUnpackInfo_235,
			KS4IUUnpackInfo_236, KS4IUUnpackInfo_237, KS4IUUnpackInfo_238, KS4IUUnpackInfo_239,
			KS4IUUnpackInfo_240, KS4IUUnpackInfo_241, KS4IUUnpackInfo_242, KS4IUUnpackInfo_243,
			KS4IUUnpackInfo_244, KS4IUUnpackInfo_245, KS4IUUnpackInfo_246, KS4IUUnpackInfo_247,
			KS4IUUnpackInfo_248, KS4IUUnpackInfo_249, KS4IUUnpackInfo_250, KS4IUUnpackInfo_251,
			KS4IUUnpackInfo_252, KS4IUUnpackInfo_253, KS4IUUnpackInfo_254, KS4IUUnpackInfo_255
};

}
}


#endif /* KSCHEME_4BIT_IU_UNPACK_HPP_ */

/*

// metacode:

#include <iostream>
#include <sstream>
#include <stdint.h>

using namespace std;

string INFO_NAME = "KS4IUUnpackInfo";
string TRIPLE_TAB = "\t\t\t";

string Int2Str(int n) {
	ostringstream oss;
	oss << n;
	return oss.str();
}

void printInfoArr() {
	string unpackInfoArrStr = "";
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
	cout << unpackInfoArrStr;
}


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
				if (intBitNum > 8) {
					validGroup = false;
				}

				offsetArr[intNum] = (curBitIdx - intBitNum) << 2;	//offset starts from 0
				maskArr[intNum] = (1LL << (intBitNum * 4)) - 1;
				intNum ++;
			}
		}

		if (!validGroup) {
			intNum = 0;
		}

		if (intNum == 0) {
			validGroup = false;	//a valid group should represent at least one integer
		}

		//output
		cout << "static " + INFO_NAME + " " + INFO_NAME + "_" << i << " = { ";
		cout << "{";
		for (int j=0; j<7; j++) {
			cout << offsetArr[j] << ", ";
		}
		cout << offsetArr[7] << "}, {";
		for (int j=0; j<7; j++) {
			cout << showbase << hex << maskArr[j] << dec << ", ";
		}
		cout << showbase << hex << maskArr[7] << dec << "}, ";
		cout << (intNum<<2) << ", ";
		cout << (validGroup ? "true" : "false");
		cout << " };" << endl;
	}

	printInfoArr();

	return 0;
}

 *
 */
