/*
 * kscheme_8bit_iu_unpack.hpp
 *
 *  Created on: 2013-6-9
 *      Author: zxd
 */

#ifndef KSCHEME_8BIT_IU_UNPACK_HPP_
#define KSCHEME_8BIT_IU_UNPACK_HPP_

namespace paradise {
namespace index {

struct KS8IUUnpackInfo {
		uint8_t m_byteCountArr[8];
		uint32_t m_maskArr[8];
		uint8_t m_codewordSkipped;
		uint8_t m_intNum;
		bool m_valid;		//true if it's a valid representation of the group
};

static KS8IUUnpackInfo KS8IUUnpackInfo_0 = { {1, 1, 1, 1, 1, 1, 1, 1}, {0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff}, 8, 32, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_1 = { {2, 1, 1, 1, 1, 1, 1, 0}, {0xffff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0}, 8, 28, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_2 = { {1, 2, 1, 1, 1, 1, 1, 0}, {0xff, 0xffff, 0xff, 0xff, 0xff, 0xff, 0xff, 0}, 8, 28, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_3 = { {3, 1, 1, 1, 1, 1, 0, 0}, {0xffffff, 0xff, 0xff, 0xff, 0xff, 0xff, 0, 0}, 8, 24, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_4 = { {1, 1, 2, 1, 1, 1, 1, 0}, {0xff, 0xff, 0xffff, 0xff, 0xff, 0xff, 0xff, 0}, 8, 28, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_5 = { {2, 2, 1, 1, 1, 1, 0, 0}, {0xffff, 0xffff, 0xff, 0xff, 0xff, 0xff, 0, 0}, 8, 24, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_6 = { {1, 3, 1, 1, 1, 1, 0, 0}, {0xff, 0xffffff, 0xff, 0xff, 0xff, 0xff, 0, 0}, 8, 24, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_7 = { {4, 1, 1, 1, 1, 0, 0, 0}, {0xffffffff, 0xff, 0xff, 0xff, 0xff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_8 = { {1, 1, 1, 2, 1, 1, 1, 0}, {0xff, 0xff, 0xff, 0xffff, 0xff, 0xff, 0xff, 0}, 8, 28, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_9 = { {2, 1, 2, 1, 1, 1, 0, 0}, {0xffff, 0xff, 0xffff, 0xff, 0xff, 0xff, 0, 0}, 8, 24, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_10 = { {1, 2, 2, 1, 1, 1, 0, 0}, {0xff, 0xffff, 0xffff, 0xff, 0xff, 0xff, 0, 0}, 8, 24, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_11 = { {3, 2, 1, 1, 1, 0, 0, 0}, {0xffffff, 0xffff, 0xff, 0xff, 0xff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_12 = { {1, 1, 3, 1, 1, 1, 0, 0}, {0xff, 0xff, 0xffffff, 0xff, 0xff, 0xff, 0, 0}, 8, 24, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_13 = { {2, 3, 1, 1, 1, 0, 0, 0}, {0xffff, 0xffffff, 0xff, 0xff, 0xff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_14 = { {1, 4, 1, 1, 1, 0, 0, 0}, {0xff, 0xffffffff, 0xff, 0xff, 0xff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_15 = { {5, 1, 1, 1, 0, 0, 0, 0}, {0xffffffff, 0xff, 0xff, 0xff, 0, 0, 0, 0}, 0, 0, false };
static KS8IUUnpackInfo KS8IUUnpackInfo_16 = { {1, 1, 1, 1, 2, 1, 1, 0}, {0xff, 0xff, 0xff, 0xff, 0xffff, 0xff, 0xff, 0}, 8, 28, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_17 = { {2, 1, 1, 2, 1, 1, 0, 0}, {0xffff, 0xff, 0xff, 0xffff, 0xff, 0xff, 0, 0}, 8, 24, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_18 = { {1, 2, 1, 2, 1, 1, 0, 0}, {0xff, 0xffff, 0xff, 0xffff, 0xff, 0xff, 0, 0}, 8, 24, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_19 = { {3, 1, 2, 1, 1, 0, 0, 0}, {0xffffff, 0xff, 0xffff, 0xff, 0xff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_20 = { {1, 1, 2, 2, 1, 1, 0, 0}, {0xff, 0xff, 0xffff, 0xffff, 0xff, 0xff, 0, 0}, 8, 24, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_21 = { {2, 2, 2, 1, 1, 0, 0, 0}, {0xffff, 0xffff, 0xffff, 0xff, 0xff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_22 = { {1, 3, 2, 1, 1, 0, 0, 0}, {0xff, 0xffffff, 0xffff, 0xff, 0xff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_23 = { {4, 2, 1, 1, 0, 0, 0, 0}, {0xffffffff, 0xffff, 0xff, 0xff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_24 = { {1, 1, 1, 3, 1, 1, 0, 0}, {0xff, 0xff, 0xff, 0xffffff, 0xff, 0xff, 0, 0}, 8, 24, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_25 = { {2, 1, 3, 1, 1, 0, 0, 0}, {0xffff, 0xff, 0xffffff, 0xff, 0xff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_26 = { {1, 2, 3, 1, 1, 0, 0, 0}, {0xff, 0xffff, 0xffffff, 0xff, 0xff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_27 = { {3, 3, 1, 1, 0, 0, 0, 0}, {0xffffff, 0xffffff, 0xff, 0xff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_28 = { {1, 1, 4, 1, 1, 0, 0, 0}, {0xff, 0xff, 0xffffffff, 0xff, 0xff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_29 = { {2, 4, 1, 1, 0, 0, 0, 0}, {0xffff, 0xffffffff, 0xff, 0xff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_30 = { {1, 5, 1, 1, 0, 0, 0, 0}, {0xff, 0xffffffff, 0xff, 0xff, 0, 0, 0, 0}, 0, 0, false };
static KS8IUUnpackInfo KS8IUUnpackInfo_31 = { {6, 1, 1, 0, 0, 0, 0, 0}, {0xffffffff, 0xff, 0xff, 0, 0, 0, 0, 0}, 0, 0, false };
static KS8IUUnpackInfo KS8IUUnpackInfo_32 = { {1, 1, 1, 1, 1, 2, 1, 0}, {0xff, 0xff, 0xff, 0xff, 0xff, 0xffff, 0xff, 0}, 8, 28, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_33 = { {2, 1, 1, 1, 2, 1, 0, 0}, {0xffff, 0xff, 0xff, 0xff, 0xffff, 0xff, 0, 0}, 8, 24, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_34 = { {1, 2, 1, 1, 2, 1, 0, 0}, {0xff, 0xffff, 0xff, 0xff, 0xffff, 0xff, 0, 0}, 8, 24, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_35 = { {3, 1, 1, 2, 1, 0, 0, 0}, {0xffffff, 0xff, 0xff, 0xffff, 0xff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_36 = { {1, 1, 2, 1, 2, 1, 0, 0}, {0xff, 0xff, 0xffff, 0xff, 0xffff, 0xff, 0, 0}, 8, 24, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_37 = { {2, 2, 1, 2, 1, 0, 0, 0}, {0xffff, 0xffff, 0xff, 0xffff, 0xff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_38 = { {1, 3, 1, 2, 1, 0, 0, 0}, {0xff, 0xffffff, 0xff, 0xffff, 0xff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_39 = { {4, 1, 2, 1, 0, 0, 0, 0}, {0xffffffff, 0xff, 0xffff, 0xff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_40 = { {1, 1, 1, 2, 2, 1, 0, 0}, {0xff, 0xff, 0xff, 0xffff, 0xffff, 0xff, 0, 0}, 8, 24, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_41 = { {2, 1, 2, 2, 1, 0, 0, 0}, {0xffff, 0xff, 0xffff, 0xffff, 0xff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_42 = { {1, 2, 2, 2, 1, 0, 0, 0}, {0xff, 0xffff, 0xffff, 0xffff, 0xff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_43 = { {3, 2, 2, 1, 0, 0, 0, 0}, {0xffffff, 0xffff, 0xffff, 0xff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_44 = { {1, 1, 3, 2, 1, 0, 0, 0}, {0xff, 0xff, 0xffffff, 0xffff, 0xff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_45 = { {2, 3, 2, 1, 0, 0, 0, 0}, {0xffff, 0xffffff, 0xffff, 0xff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_46 = { {1, 4, 2, 1, 0, 0, 0, 0}, {0xff, 0xffffffff, 0xffff, 0xff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_47 = { {5, 2, 1, 0, 0, 0, 0, 0}, {0xffffffff, 0xffff, 0xff, 0, 0, 0, 0, 0}, 0, 0, false };
static KS8IUUnpackInfo KS8IUUnpackInfo_48 = { {1, 1, 1, 1, 3, 1, 0, 0}, {0xff, 0xff, 0xff, 0xff, 0xffffff, 0xff, 0, 0}, 8, 24, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_49 = { {2, 1, 1, 3, 1, 0, 0, 0}, {0xffff, 0xff, 0xff, 0xffffff, 0xff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_50 = { {1, 2, 1, 3, 1, 0, 0, 0}, {0xff, 0xffff, 0xff, 0xffffff, 0xff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_51 = { {3, 1, 3, 1, 0, 0, 0, 0}, {0xffffff, 0xff, 0xffffff, 0xff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_52 = { {1, 1, 2, 3, 1, 0, 0, 0}, {0xff, 0xff, 0xffff, 0xffffff, 0xff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_53 = { {2, 2, 3, 1, 0, 0, 0, 0}, {0xffff, 0xffff, 0xffffff, 0xff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_54 = { {1, 3, 3, 1, 0, 0, 0, 0}, {0xff, 0xffffff, 0xffffff, 0xff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_55 = { {4, 3, 1, 0, 0, 0, 0, 0}, {0xffffffff, 0xffffff, 0xff, 0, 0, 0, 0, 0}, 8, 12, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_56 = { {1, 1, 1, 4, 1, 0, 0, 0}, {0xff, 0xff, 0xff, 0xffffffff, 0xff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_57 = { {2, 1, 4, 1, 0, 0, 0, 0}, {0xffff, 0xff, 0xffffffff, 0xff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_58 = { {1, 2, 4, 1, 0, 0, 0, 0}, {0xff, 0xffff, 0xffffffff, 0xff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_59 = { {3, 4, 1, 0, 0, 0, 0, 0}, {0xffffff, 0xffffffff, 0xff, 0, 0, 0, 0, 0}, 8, 12, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_60 = { {1, 1, 5, 1, 0, 0, 0, 0}, {0xff, 0xff, 0xffffffff, 0xff, 0, 0, 0, 0}, 0, 0, false };
static KS8IUUnpackInfo KS8IUUnpackInfo_61 = { {2, 5, 1, 0, 0, 0, 0, 0}, {0xffff, 0xffffffff, 0xff, 0, 0, 0, 0, 0}, 0, 0, false };
static KS8IUUnpackInfo KS8IUUnpackInfo_62 = { {1, 6, 1, 0, 0, 0, 0, 0}, {0xff, 0xffffffff, 0xff, 0, 0, 0, 0, 0}, 0, 0, false };
static KS8IUUnpackInfo KS8IUUnpackInfo_63 = { {7, 1, 0, 0, 0, 0, 0, 0}, {0xffffffff, 0xff, 0, 0, 0, 0, 0, 0}, 0, 0, false };
static KS8IUUnpackInfo KS8IUUnpackInfo_64 = { {1, 1, 1, 1, 1, 1, 2, 0}, {0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xffff, 0}, 8, 28, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_65 = { {2, 1, 1, 1, 1, 2, 0, 0}, {0xffff, 0xff, 0xff, 0xff, 0xff, 0xffff, 0, 0}, 8, 24, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_66 = { {1, 2, 1, 1, 1, 2, 0, 0}, {0xff, 0xffff, 0xff, 0xff, 0xff, 0xffff, 0, 0}, 8, 24, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_67 = { {3, 1, 1, 1, 2, 0, 0, 0}, {0xffffff, 0xff, 0xff, 0xff, 0xffff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_68 = { {1, 1, 2, 1, 1, 2, 0, 0}, {0xff, 0xff, 0xffff, 0xff, 0xff, 0xffff, 0, 0}, 8, 24, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_69 = { {2, 2, 1, 1, 2, 0, 0, 0}, {0xffff, 0xffff, 0xff, 0xff, 0xffff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_70 = { {1, 3, 1, 1, 2, 0, 0, 0}, {0xff, 0xffffff, 0xff, 0xff, 0xffff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_71 = { {4, 1, 1, 2, 0, 0, 0, 0}, {0xffffffff, 0xff, 0xff, 0xffff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_72 = { {1, 1, 1, 2, 1, 2, 0, 0}, {0xff, 0xff, 0xff, 0xffff, 0xff, 0xffff, 0, 0}, 8, 24, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_73 = { {2, 1, 2, 1, 2, 0, 0, 0}, {0xffff, 0xff, 0xffff, 0xff, 0xffff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_74 = { {1, 2, 2, 1, 2, 0, 0, 0}, {0xff, 0xffff, 0xffff, 0xff, 0xffff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_75 = { {3, 2, 1, 2, 0, 0, 0, 0}, {0xffffff, 0xffff, 0xff, 0xffff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_76 = { {1, 1, 3, 1, 2, 0, 0, 0}, {0xff, 0xff, 0xffffff, 0xff, 0xffff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_77 = { {2, 3, 1, 2, 0, 0, 0, 0}, {0xffff, 0xffffff, 0xff, 0xffff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_78 = { {1, 4, 1, 2, 0, 0, 0, 0}, {0xff, 0xffffffff, 0xff, 0xffff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_79 = { {5, 1, 2, 0, 0, 0, 0, 0}, {0xffffffff, 0xff, 0xffff, 0, 0, 0, 0, 0}, 0, 0, false };
static KS8IUUnpackInfo KS8IUUnpackInfo_80 = { {1, 1, 1, 1, 2, 2, 0, 0}, {0xff, 0xff, 0xff, 0xff, 0xffff, 0xffff, 0, 0}, 8, 24, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_81 = { {2, 1, 1, 2, 2, 0, 0, 0}, {0xffff, 0xff, 0xff, 0xffff, 0xffff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_82 = { {1, 2, 1, 2, 2, 0, 0, 0}, {0xff, 0xffff, 0xff, 0xffff, 0xffff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_83 = { {3, 1, 2, 2, 0, 0, 0, 0}, {0xffffff, 0xff, 0xffff, 0xffff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_84 = { {1, 1, 2, 2, 2, 0, 0, 0}, {0xff, 0xff, 0xffff, 0xffff, 0xffff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_85 = { {2, 2, 2, 2, 0, 0, 0, 0}, {0xffff, 0xffff, 0xffff, 0xffff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_86 = { {1, 3, 2, 2, 0, 0, 0, 0}, {0xff, 0xffffff, 0xffff, 0xffff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_87 = { {4, 2, 2, 0, 0, 0, 0, 0}, {0xffffffff, 0xffff, 0xffff, 0, 0, 0, 0, 0}, 8, 12, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_88 = { {1, 1, 1, 3, 2, 0, 0, 0}, {0xff, 0xff, 0xff, 0xffffff, 0xffff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_89 = { {2, 1, 3, 2, 0, 0, 0, 0}, {0xffff, 0xff, 0xffffff, 0xffff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_90 = { {1, 2, 3, 2, 0, 0, 0, 0}, {0xff, 0xffff, 0xffffff, 0xffff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_91 = { {3, 3, 2, 0, 0, 0, 0, 0}, {0xffffff, 0xffffff, 0xffff, 0, 0, 0, 0, 0}, 8, 12, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_92 = { {1, 1, 4, 2, 0, 0, 0, 0}, {0xff, 0xff, 0xffffffff, 0xffff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_93 = { {2, 4, 2, 0, 0, 0, 0, 0}, {0xffff, 0xffffffff, 0xffff, 0, 0, 0, 0, 0}, 8, 12, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_94 = { {1, 5, 2, 0, 0, 0, 0, 0}, {0xff, 0xffffffff, 0xffff, 0, 0, 0, 0, 0}, 0, 0, false };
static KS8IUUnpackInfo KS8IUUnpackInfo_95 = { {6, 2, 0, 0, 0, 0, 0, 0}, {0xffffffff, 0xffff, 0, 0, 0, 0, 0, 0}, 0, 0, false };
static KS8IUUnpackInfo KS8IUUnpackInfo_96 = { {1, 1, 1, 1, 1, 3, 0, 0}, {0xff, 0xff, 0xff, 0xff, 0xff, 0xffffff, 0, 0}, 8, 24, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_97 = { {2, 1, 1, 1, 3, 0, 0, 0}, {0xffff, 0xff, 0xff, 0xff, 0xffffff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_98 = { {1, 2, 1, 1, 3, 0, 0, 0}, {0xff, 0xffff, 0xff, 0xff, 0xffffff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_99 = { {3, 1, 1, 3, 0, 0, 0, 0}, {0xffffff, 0xff, 0xff, 0xffffff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_100 = { {1, 1, 2, 1, 3, 0, 0, 0}, {0xff, 0xff, 0xffff, 0xff, 0xffffff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_101 = { {2, 2, 1, 3, 0, 0, 0, 0}, {0xffff, 0xffff, 0xff, 0xffffff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_102 = { {1, 3, 1, 3, 0, 0, 0, 0}, {0xff, 0xffffff, 0xff, 0xffffff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_103 = { {4, 1, 3, 0, 0, 0, 0, 0}, {0xffffffff, 0xff, 0xffffff, 0, 0, 0, 0, 0}, 8, 12, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_104 = { {1, 1, 1, 2, 3, 0, 0, 0}, {0xff, 0xff, 0xff, 0xffff, 0xffffff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_105 = { {2, 1, 2, 3, 0, 0, 0, 0}, {0xffff, 0xff, 0xffff, 0xffffff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_106 = { {1, 2, 2, 3, 0, 0, 0, 0}, {0xff, 0xffff, 0xffff, 0xffffff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_107 = { {3, 2, 3, 0, 0, 0, 0, 0}, {0xffffff, 0xffff, 0xffffff, 0, 0, 0, 0, 0}, 8, 12, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_108 = { {1, 1, 3, 3, 0, 0, 0, 0}, {0xff, 0xff, 0xffffff, 0xffffff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_109 = { {2, 3, 3, 0, 0, 0, 0, 0}, {0xffff, 0xffffff, 0xffffff, 0, 0, 0, 0, 0}, 8, 12, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_110 = { {1, 4, 3, 0, 0, 0, 0, 0}, {0xff, 0xffffffff, 0xffffff, 0, 0, 0, 0, 0}, 8, 12, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_111 = { {5, 3, 0, 0, 0, 0, 0, 0}, {0xffffffff, 0xffffff, 0, 0, 0, 0, 0, 0}, 0, 0, false };
static KS8IUUnpackInfo KS8IUUnpackInfo_112 = { {1, 1, 1, 1, 4, 0, 0, 0}, {0xff, 0xff, 0xff, 0xff, 0xffffffff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_113 = { {2, 1, 1, 4, 0, 0, 0, 0}, {0xffff, 0xff, 0xff, 0xffffffff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_114 = { {1, 2, 1, 4, 0, 0, 0, 0}, {0xff, 0xffff, 0xff, 0xffffffff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_115 = { {3, 1, 4, 0, 0, 0, 0, 0}, {0xffffff, 0xff, 0xffffffff, 0, 0, 0, 0, 0}, 8, 12, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_116 = { {1, 1, 2, 4, 0, 0, 0, 0}, {0xff, 0xff, 0xffff, 0xffffffff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_117 = { {2, 2, 4, 0, 0, 0, 0, 0}, {0xffff, 0xffff, 0xffffffff, 0, 0, 0, 0, 0}, 8, 12, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_118 = { {1, 3, 4, 0, 0, 0, 0, 0}, {0xff, 0xffffff, 0xffffffff, 0, 0, 0, 0, 0}, 8, 12, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_119 = { {4, 4, 0, 0, 0, 0, 0, 0}, {0xffffffff, 0xffffffff, 0, 0, 0, 0, 0, 0}, 8, 8, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_120 = { {1, 1, 1, 5, 0, 0, 0, 0}, {0xff, 0xff, 0xff, 0xffffffff, 0, 0, 0, 0}, 0, 0, false };
static KS8IUUnpackInfo KS8IUUnpackInfo_121 = { {2, 1, 5, 0, 0, 0, 0, 0}, {0xffff, 0xff, 0xffffffff, 0, 0, 0, 0, 0}, 0, 0, false };
static KS8IUUnpackInfo KS8IUUnpackInfo_122 = { {1, 2, 5, 0, 0, 0, 0, 0}, {0xff, 0xffff, 0xffffffff, 0, 0, 0, 0, 0}, 0, 0, false };
static KS8IUUnpackInfo KS8IUUnpackInfo_123 = { {3, 5, 0, 0, 0, 0, 0, 0}, {0xffffff, 0xffffffff, 0, 0, 0, 0, 0, 0}, 0, 0, false };
static KS8IUUnpackInfo KS8IUUnpackInfo_124 = { {1, 1, 6, 0, 0, 0, 0, 0}, {0xff, 0xff, 0xffffffff, 0, 0, 0, 0, 0}, 0, 0, false };
static KS8IUUnpackInfo KS8IUUnpackInfo_125 = { {2, 6, 0, 0, 0, 0, 0, 0}, {0xffff, 0xffffffff, 0, 0, 0, 0, 0, 0}, 0, 0, false };
static KS8IUUnpackInfo KS8IUUnpackInfo_126 = { {1, 7, 0, 0, 0, 0, 0, 0}, {0xff, 0xffffffff, 0, 0, 0, 0, 0, 0}, 0, 0, false };
static KS8IUUnpackInfo KS8IUUnpackInfo_127 = { {8, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0}, 0, 0, false };
static KS8IUUnpackInfo KS8IUUnpackInfo_128 = { {1, 1, 1, 1, 1, 1, 1, 0}, {0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0}, 8, 28, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_129 = { {2, 1, 1, 1, 1, 1, 0, 0}, {0xffff, 0xff, 0xff, 0xff, 0xff, 0xff, 0, 0}, 8, 24, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_130 = { {1, 2, 1, 1, 1, 1, 0, 0}, {0xff, 0xffff, 0xff, 0xff, 0xff, 0xff, 0, 0}, 8, 24, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_131 = { {3, 1, 1, 1, 1, 0, 0, 0}, {0xffffff, 0xff, 0xff, 0xff, 0xff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_132 = { {1, 1, 2, 1, 1, 1, 0, 0}, {0xff, 0xff, 0xffff, 0xff, 0xff, 0xff, 0, 0}, 8, 24, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_133 = { {2, 2, 1, 1, 1, 0, 0, 0}, {0xffff, 0xffff, 0xff, 0xff, 0xff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_134 = { {1, 3, 1, 1, 1, 0, 0, 0}, {0xff, 0xffffff, 0xff, 0xff, 0xff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_135 = { {4, 1, 1, 1, 0, 0, 0, 0}, {0xffffffff, 0xff, 0xff, 0xff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_136 = { {1, 1, 1, 2, 1, 1, 0, 0}, {0xff, 0xff, 0xff, 0xffff, 0xff, 0xff, 0, 0}, 8, 24, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_137 = { {2, 1, 2, 1, 1, 0, 0, 0}, {0xffff, 0xff, 0xffff, 0xff, 0xff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_138 = { {1, 2, 2, 1, 1, 0, 0, 0}, {0xff, 0xffff, 0xffff, 0xff, 0xff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_139 = { {3, 2, 1, 1, 0, 0, 0, 0}, {0xffffff, 0xffff, 0xff, 0xff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_140 = { {1, 1, 3, 1, 1, 0, 0, 0}, {0xff, 0xff, 0xffffff, 0xff, 0xff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_141 = { {2, 3, 1, 1, 0, 0, 0, 0}, {0xffff, 0xffffff, 0xff, 0xff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_142 = { {1, 4, 1, 1, 0, 0, 0, 0}, {0xff, 0xffffffff, 0xff, 0xff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_143 = { {5, 1, 1, 0, 0, 0, 0, 0}, {0xffffffff, 0xff, 0xff, 0, 0, 0, 0, 0}, 0, 0, false };
static KS8IUUnpackInfo KS8IUUnpackInfo_144 = { {1, 1, 1, 1, 2, 1, 0, 0}, {0xff, 0xff, 0xff, 0xff, 0xffff, 0xff, 0, 0}, 8, 24, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_145 = { {2, 1, 1, 2, 1, 0, 0, 0}, {0xffff, 0xff, 0xff, 0xffff, 0xff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_146 = { {1, 2, 1, 2, 1, 0, 0, 0}, {0xff, 0xffff, 0xff, 0xffff, 0xff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_147 = { {3, 1, 2, 1, 0, 0, 0, 0}, {0xffffff, 0xff, 0xffff, 0xff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_148 = { {1, 1, 2, 2, 1, 0, 0, 0}, {0xff, 0xff, 0xffff, 0xffff, 0xff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_149 = { {2, 2, 2, 1, 0, 0, 0, 0}, {0xffff, 0xffff, 0xffff, 0xff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_150 = { {1, 3, 2, 1, 0, 0, 0, 0}, {0xff, 0xffffff, 0xffff, 0xff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_151 = { {4, 2, 1, 0, 0, 0, 0, 0}, {0xffffffff, 0xffff, 0xff, 0, 0, 0, 0, 0}, 8, 12, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_152 = { {1, 1, 1, 3, 1, 0, 0, 0}, {0xff, 0xff, 0xff, 0xffffff, 0xff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_153 = { {2, 1, 3, 1, 0, 0, 0, 0}, {0xffff, 0xff, 0xffffff, 0xff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_154 = { {1, 2, 3, 1, 0, 0, 0, 0}, {0xff, 0xffff, 0xffffff, 0xff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_155 = { {3, 3, 1, 0, 0, 0, 0, 0}, {0xffffff, 0xffffff, 0xff, 0, 0, 0, 0, 0}, 8, 12, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_156 = { {1, 1, 4, 1, 0, 0, 0, 0}, {0xff, 0xff, 0xffffffff, 0xff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_157 = { {2, 4, 1, 0, 0, 0, 0, 0}, {0xffff, 0xffffffff, 0xff, 0, 0, 0, 0, 0}, 8, 12, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_158 = { {1, 5, 1, 0, 0, 0, 0, 0}, {0xff, 0xffffffff, 0xff, 0, 0, 0, 0, 0}, 0, 0, false };
static KS8IUUnpackInfo KS8IUUnpackInfo_159 = { {6, 1, 0, 0, 0, 0, 0, 0}, {0xffffffff, 0xff, 0, 0, 0, 0, 0, 0}, 0, 0, false };
static KS8IUUnpackInfo KS8IUUnpackInfo_160 = { {1, 1, 1, 1, 1, 2, 0, 0}, {0xff, 0xff, 0xff, 0xff, 0xff, 0xffff, 0, 0}, 8, 24, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_161 = { {2, 1, 1, 1, 2, 0, 0, 0}, {0xffff, 0xff, 0xff, 0xff, 0xffff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_162 = { {1, 2, 1, 1, 2, 0, 0, 0}, {0xff, 0xffff, 0xff, 0xff, 0xffff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_163 = { {3, 1, 1, 2, 0, 0, 0, 0}, {0xffffff, 0xff, 0xff, 0xffff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_164 = { {1, 1, 2, 1, 2, 0, 0, 0}, {0xff, 0xff, 0xffff, 0xff, 0xffff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_165 = { {2, 2, 1, 2, 0, 0, 0, 0}, {0xffff, 0xffff, 0xff, 0xffff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_166 = { {1, 3, 1, 2, 0, 0, 0, 0}, {0xff, 0xffffff, 0xff, 0xffff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_167 = { {4, 1, 2, 0, 0, 0, 0, 0}, {0xffffffff, 0xff, 0xffff, 0, 0, 0, 0, 0}, 8, 12, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_168 = { {1, 1, 1, 2, 2, 0, 0, 0}, {0xff, 0xff, 0xff, 0xffff, 0xffff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_169 = { {2, 1, 2, 2, 0, 0, 0, 0}, {0xffff, 0xff, 0xffff, 0xffff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_170 = { {1, 2, 2, 2, 0, 0, 0, 0}, {0xff, 0xffff, 0xffff, 0xffff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_171 = { {3, 2, 2, 0, 0, 0, 0, 0}, {0xffffff, 0xffff, 0xffff, 0, 0, 0, 0, 0}, 8, 12, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_172 = { {1, 1, 3, 2, 0, 0, 0, 0}, {0xff, 0xff, 0xffffff, 0xffff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_173 = { {2, 3, 2, 0, 0, 0, 0, 0}, {0xffff, 0xffffff, 0xffff, 0, 0, 0, 0, 0}, 8, 12, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_174 = { {1, 4, 2, 0, 0, 0, 0, 0}, {0xff, 0xffffffff, 0xffff, 0, 0, 0, 0, 0}, 8, 12, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_175 = { {5, 2, 0, 0, 0, 0, 0, 0}, {0xffffffff, 0xffff, 0, 0, 0, 0, 0, 0}, 0, 0, false };
static KS8IUUnpackInfo KS8IUUnpackInfo_176 = { {1, 1, 1, 1, 3, 0, 0, 0}, {0xff, 0xff, 0xff, 0xff, 0xffffff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_177 = { {2, 1, 1, 3, 0, 0, 0, 0}, {0xffff, 0xff, 0xff, 0xffffff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_178 = { {1, 2, 1, 3, 0, 0, 0, 0}, {0xff, 0xffff, 0xff, 0xffffff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_179 = { {3, 1, 3, 0, 0, 0, 0, 0}, {0xffffff, 0xff, 0xffffff, 0, 0, 0, 0, 0}, 8, 12, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_180 = { {1, 1, 2, 3, 0, 0, 0, 0}, {0xff, 0xff, 0xffff, 0xffffff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_181 = { {2, 2, 3, 0, 0, 0, 0, 0}, {0xffff, 0xffff, 0xffffff, 0, 0, 0, 0, 0}, 8, 12, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_182 = { {1, 3, 3, 0, 0, 0, 0, 0}, {0xff, 0xffffff, 0xffffff, 0, 0, 0, 0, 0}, 8, 12, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_183 = { {4, 3, 0, 0, 0, 0, 0, 0}, {0xffffffff, 0xffffff, 0, 0, 0, 0, 0, 0}, 8, 8, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_184 = { {1, 1, 1, 4, 0, 0, 0, 0}, {0xff, 0xff, 0xff, 0xffffffff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_185 = { {2, 1, 4, 0, 0, 0, 0, 0}, {0xffff, 0xff, 0xffffffff, 0, 0, 0, 0, 0}, 8, 12, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_186 = { {1, 2, 4, 0, 0, 0, 0, 0}, {0xff, 0xffff, 0xffffffff, 0, 0, 0, 0, 0}, 8, 12, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_187 = { {3, 4, 0, 0, 0, 0, 0, 0}, {0xffffff, 0xffffffff, 0, 0, 0, 0, 0, 0}, 8, 8, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_188 = { {1, 1, 5, 0, 0, 0, 0, 0}, {0xff, 0xff, 0xffffffff, 0, 0, 0, 0, 0}, 0, 0, false };
static KS8IUUnpackInfo KS8IUUnpackInfo_189 = { {2, 5, 0, 0, 0, 0, 0, 0}, {0xffff, 0xffffffff, 0, 0, 0, 0, 0, 0}, 0, 0, false };
static KS8IUUnpackInfo KS8IUUnpackInfo_190 = { {1, 6, 0, 0, 0, 0, 0, 0}, {0xff, 0xffffffff, 0, 0, 0, 0, 0, 0}, 0, 0, false };
static KS8IUUnpackInfo KS8IUUnpackInfo_191 = { {7, 0, 0, 0, 0, 0, 0, 0}, {0xffffffff, 0, 0, 0, 0, 0, 0, 0}, 0, 0, false };
static KS8IUUnpackInfo KS8IUUnpackInfo_192 = { {1, 1, 1, 1, 1, 1, 0, 0}, {0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0, 0}, 8, 24, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_193 = { {2, 1, 1, 1, 1, 0, 0, 0}, {0xffff, 0xff, 0xff, 0xff, 0xff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_194 = { {1, 2, 1, 1, 1, 0, 0, 0}, {0xff, 0xffff, 0xff, 0xff, 0xff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_195 = { {3, 1, 1, 1, 0, 0, 0, 0}, {0xffffff, 0xff, 0xff, 0xff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_196 = { {1, 1, 2, 1, 1, 0, 0, 0}, {0xff, 0xff, 0xffff, 0xff, 0xff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_197 = { {2, 2, 1, 1, 0, 0, 0, 0}, {0xffff, 0xffff, 0xff, 0xff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_198 = { {1, 3, 1, 1, 0, 0, 0, 0}, {0xff, 0xffffff, 0xff, 0xff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_199 = { {4, 1, 1, 0, 0, 0, 0, 0}, {0xffffffff, 0xff, 0xff, 0, 0, 0, 0, 0}, 8, 12, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_200 = { {1, 1, 1, 2, 1, 0, 0, 0}, {0xff, 0xff, 0xff, 0xffff, 0xff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_201 = { {2, 1, 2, 1, 0, 0, 0, 0}, {0xffff, 0xff, 0xffff, 0xff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_202 = { {1, 2, 2, 1, 0, 0, 0, 0}, {0xff, 0xffff, 0xffff, 0xff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_203 = { {3, 2, 1, 0, 0, 0, 0, 0}, {0xffffff, 0xffff, 0xff, 0, 0, 0, 0, 0}, 8, 12, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_204 = { {1, 1, 3, 1, 0, 0, 0, 0}, {0xff, 0xff, 0xffffff, 0xff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_205 = { {2, 3, 1, 0, 0, 0, 0, 0}, {0xffff, 0xffffff, 0xff, 0, 0, 0, 0, 0}, 8, 12, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_206 = { {1, 4, 1, 0, 0, 0, 0, 0}, {0xff, 0xffffffff, 0xff, 0, 0, 0, 0, 0}, 8, 12, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_207 = { {5, 1, 0, 0, 0, 0, 0, 0}, {0xffffffff, 0xff, 0, 0, 0, 0, 0, 0}, 0, 0, false };
static KS8IUUnpackInfo KS8IUUnpackInfo_208 = { {1, 1, 1, 1, 2, 0, 0, 0}, {0xff, 0xff, 0xff, 0xff, 0xffff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_209 = { {2, 1, 1, 2, 0, 0, 0, 0}, {0xffff, 0xff, 0xff, 0xffff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_210 = { {1, 2, 1, 2, 0, 0, 0, 0}, {0xff, 0xffff, 0xff, 0xffff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_211 = { {3, 1, 2, 0, 0, 0, 0, 0}, {0xffffff, 0xff, 0xffff, 0, 0, 0, 0, 0}, 8, 12, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_212 = { {1, 1, 2, 2, 0, 0, 0, 0}, {0xff, 0xff, 0xffff, 0xffff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_213 = { {2, 2, 2, 0, 0, 0, 0, 0}, {0xffff, 0xffff, 0xffff, 0, 0, 0, 0, 0}, 8, 12, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_214 = { {1, 3, 2, 0, 0, 0, 0, 0}, {0xff, 0xffffff, 0xffff, 0, 0, 0, 0, 0}, 8, 12, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_215 = { {4, 2, 0, 0, 0, 0, 0, 0}, {0xffffffff, 0xffff, 0, 0, 0, 0, 0, 0}, 8, 8, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_216 = { {1, 1, 1, 3, 0, 0, 0, 0}, {0xff, 0xff, 0xff, 0xffffff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_217 = { {2, 1, 3, 0, 0, 0, 0, 0}, {0xffff, 0xff, 0xffffff, 0, 0, 0, 0, 0}, 8, 12, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_218 = { {1, 2, 3, 0, 0, 0, 0, 0}, {0xff, 0xffff, 0xffffff, 0, 0, 0, 0, 0}, 8, 12, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_219 = { {3, 3, 0, 0, 0, 0, 0, 0}, {0xffffff, 0xffffff, 0, 0, 0, 0, 0, 0}, 8, 8, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_220 = { {1, 1, 4, 0, 0, 0, 0, 0}, {0xff, 0xff, 0xffffffff, 0, 0, 0, 0, 0}, 8, 12, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_221 = { {2, 4, 0, 0, 0, 0, 0, 0}, {0xffff, 0xffffffff, 0, 0, 0, 0, 0, 0}, 8, 8, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_222 = { {1, 5, 0, 0, 0, 0, 0, 0}, {0xff, 0xffffffff, 0, 0, 0, 0, 0, 0}, 0, 0, false };
static KS8IUUnpackInfo KS8IUUnpackInfo_223 = { {6, 0, 0, 0, 0, 0, 0, 0}, {0xffffffff, 0, 0, 0, 0, 0, 0, 0}, 0, 0, false };
static KS8IUUnpackInfo KS8IUUnpackInfo_224 = { {1, 1, 1, 1, 1, 0, 0, 0}, {0xff, 0xff, 0xff, 0xff, 0xff, 0, 0, 0}, 8, 20, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_225 = { {2, 1, 1, 1, 0, 0, 0, 0}, {0xffff, 0xff, 0xff, 0xff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_226 = { {1, 2, 1, 1, 0, 0, 0, 0}, {0xff, 0xffff, 0xff, 0xff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_227 = { {3, 1, 1, 0, 0, 0, 0, 0}, {0xffffff, 0xff, 0xff, 0, 0, 0, 0, 0}, 8, 12, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_228 = { {1, 1, 2, 1, 0, 0, 0, 0}, {0xff, 0xff, 0xffff, 0xff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_229 = { {2, 2, 1, 0, 0, 0, 0, 0}, {0xffff, 0xffff, 0xff, 0, 0, 0, 0, 0}, 8, 12, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_230 = { {1, 3, 1, 0, 0, 0, 0, 0}, {0xff, 0xffffff, 0xff, 0, 0, 0, 0, 0}, 8, 12, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_231 = { {4, 1, 0, 0, 0, 0, 0, 0}, {0xffffffff, 0xff, 0, 0, 0, 0, 0, 0}, 8, 8, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_232 = { {1, 1, 1, 2, 0, 0, 0, 0}, {0xff, 0xff, 0xff, 0xffff, 0, 0, 0, 0}, 8, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_233 = { {2, 1, 2, 0, 0, 0, 0, 0}, {0xffff, 0xff, 0xffff, 0, 0, 0, 0, 0}, 8, 12, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_234 = { {1, 2, 2, 0, 0, 0, 0, 0}, {0xff, 0xffff, 0xffff, 0, 0, 0, 0, 0}, 8, 12, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_235 = { {3, 2, 0, 0, 0, 0, 0, 0}, {0xffffff, 0xffff, 0, 0, 0, 0, 0, 0}, 8, 8, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_236 = { {1, 1, 3, 0, 0, 0, 0, 0}, {0xff, 0xff, 0xffffff, 0, 0, 0, 0, 0}, 8, 12, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_237 = { {2, 3, 0, 0, 0, 0, 0, 0}, {0xffff, 0xffffff, 0, 0, 0, 0, 0, 0}, 8, 8, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_238 = { {1, 4, 0, 0, 0, 0, 0, 0}, {0xff, 0xffffffff, 0, 0, 0, 0, 0, 0}, 8, 8, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_239 = { {5, 0, 0, 0, 0, 0, 0, 0}, {0xffffffff, 0, 0, 0, 0, 0, 0, 0}, 0, 0, false };
static KS8IUUnpackInfo KS8IUUnpackInfo_240 = { {1, 1, 1, 1, 0, 0, 0, 0}, {0xff, 0xff, 0xff, 0xff, 0, 0, 0, 0}, 4, 16, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_241 = { {2, 1, 1, 0, 0, 0, 0, 0}, {0xffff, 0xff, 0xff, 0, 0, 0, 0, 0}, 4, 12, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_242 = { {1, 2, 1, 0, 0, 0, 0, 0}, {0xff, 0xffff, 0xff, 0, 0, 0, 0, 0}, 4, 12, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_243 = { {3, 1, 0, 0, 0, 0, 0, 0}, {0xffffff, 0xff, 0, 0, 0, 0, 0, 0}, 4, 8, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_244 = { {1, 1, 2, 0, 0, 0, 0, 0}, {0xff, 0xff, 0xffff, 0, 0, 0, 0, 0}, 4, 12, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_245 = { {2, 2, 0, 0, 0, 0, 0, 0}, {0xffff, 0xffff, 0, 0, 0, 0, 0, 0}, 4, 8, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_246 = { {1, 3, 0, 0, 0, 0, 0, 0}, {0xff, 0xffffff, 0, 0, 0, 0, 0, 0}, 4, 8, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_247 = { {4, 0, 0, 0, 0, 0, 0, 0}, {0xffffffff, 0, 0, 0, 0, 0, 0, 0}, 4, 4, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_248 = { {1, 1, 1, 0, 0, 0, 0, 0}, {0xff, 0xff, 0xff, 0, 0, 0, 0, 0}, 4, 12, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_249 = { {2, 1, 0, 0, 0, 0, 0, 0}, {0xffff, 0xff, 0, 0, 0, 0, 0, 0}, 4, 8, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_250 = { {1, 2, 0, 0, 0, 0, 0, 0}, {0xff, 0xffff, 0, 0, 0, 0, 0, 0}, 4, 8, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_251 = { {3, 0, 0, 0, 0, 0, 0, 0}, {0xffffff, 0, 0, 0, 0, 0, 0, 0}, 4, 4, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_252 = { {1, 1, 0, 0, 0, 0, 0, 0}, {0xff, 0xff, 0, 0, 0, 0, 0, 0}, 4, 8, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_253 = { {2, 0, 0, 0, 0, 0, 0, 0}, {0xffff, 0, 0, 0, 0, 0, 0, 0}, 4, 4, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_254 = { {1, 0, 0, 0, 0, 0, 0, 0}, {0xff, 0, 0, 0, 0, 0, 0, 0}, 4, 4, true };
static KS8IUUnpackInfo KS8IUUnpackInfo_255 = { {0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0}, 0, 0, false };
static KS8IUUnpackInfo KS8IUUnpackInfoArr[256] = {
			KS8IUUnpackInfo_0, KS8IUUnpackInfo_1, KS8IUUnpackInfo_2, KS8IUUnpackInfo_3,
			KS8IUUnpackInfo_4, KS8IUUnpackInfo_5, KS8IUUnpackInfo_6, KS8IUUnpackInfo_7,
			KS8IUUnpackInfo_8, KS8IUUnpackInfo_9, KS8IUUnpackInfo_10, KS8IUUnpackInfo_11,
			KS8IUUnpackInfo_12, KS8IUUnpackInfo_13, KS8IUUnpackInfo_14, KS8IUUnpackInfo_15,
			KS8IUUnpackInfo_16, KS8IUUnpackInfo_17, KS8IUUnpackInfo_18, KS8IUUnpackInfo_19,
			KS8IUUnpackInfo_20, KS8IUUnpackInfo_21, KS8IUUnpackInfo_22, KS8IUUnpackInfo_23,
			KS8IUUnpackInfo_24, KS8IUUnpackInfo_25, KS8IUUnpackInfo_26, KS8IUUnpackInfo_27,
			KS8IUUnpackInfo_28, KS8IUUnpackInfo_29, KS8IUUnpackInfo_30, KS8IUUnpackInfo_31,
			KS8IUUnpackInfo_32, KS8IUUnpackInfo_33, KS8IUUnpackInfo_34, KS8IUUnpackInfo_35,
			KS8IUUnpackInfo_36, KS8IUUnpackInfo_37, KS8IUUnpackInfo_38, KS8IUUnpackInfo_39,
			KS8IUUnpackInfo_40, KS8IUUnpackInfo_41, KS8IUUnpackInfo_42, KS8IUUnpackInfo_43,
			KS8IUUnpackInfo_44, KS8IUUnpackInfo_45, KS8IUUnpackInfo_46, KS8IUUnpackInfo_47,
			KS8IUUnpackInfo_48, KS8IUUnpackInfo_49, KS8IUUnpackInfo_50, KS8IUUnpackInfo_51,
			KS8IUUnpackInfo_52, KS8IUUnpackInfo_53, KS8IUUnpackInfo_54, KS8IUUnpackInfo_55,
			KS8IUUnpackInfo_56, KS8IUUnpackInfo_57, KS8IUUnpackInfo_58, KS8IUUnpackInfo_59,
			KS8IUUnpackInfo_60, KS8IUUnpackInfo_61, KS8IUUnpackInfo_62, KS8IUUnpackInfo_63,
			KS8IUUnpackInfo_64, KS8IUUnpackInfo_65, KS8IUUnpackInfo_66, KS8IUUnpackInfo_67,
			KS8IUUnpackInfo_68, KS8IUUnpackInfo_69, KS8IUUnpackInfo_70, KS8IUUnpackInfo_71,
			KS8IUUnpackInfo_72, KS8IUUnpackInfo_73, KS8IUUnpackInfo_74, KS8IUUnpackInfo_75,
			KS8IUUnpackInfo_76, KS8IUUnpackInfo_77, KS8IUUnpackInfo_78, KS8IUUnpackInfo_79,
			KS8IUUnpackInfo_80, KS8IUUnpackInfo_81, KS8IUUnpackInfo_82, KS8IUUnpackInfo_83,
			KS8IUUnpackInfo_84, KS8IUUnpackInfo_85, KS8IUUnpackInfo_86, KS8IUUnpackInfo_87,
			KS8IUUnpackInfo_88, KS8IUUnpackInfo_89, KS8IUUnpackInfo_90, KS8IUUnpackInfo_91,
			KS8IUUnpackInfo_92, KS8IUUnpackInfo_93, KS8IUUnpackInfo_94, KS8IUUnpackInfo_95,
			KS8IUUnpackInfo_96, KS8IUUnpackInfo_97, KS8IUUnpackInfo_98, KS8IUUnpackInfo_99,
			KS8IUUnpackInfo_100, KS8IUUnpackInfo_101, KS8IUUnpackInfo_102, KS8IUUnpackInfo_103,
			KS8IUUnpackInfo_104, KS8IUUnpackInfo_105, KS8IUUnpackInfo_106, KS8IUUnpackInfo_107,
			KS8IUUnpackInfo_108, KS8IUUnpackInfo_109, KS8IUUnpackInfo_110, KS8IUUnpackInfo_111,
			KS8IUUnpackInfo_112, KS8IUUnpackInfo_113, KS8IUUnpackInfo_114, KS8IUUnpackInfo_115,
			KS8IUUnpackInfo_116, KS8IUUnpackInfo_117, KS8IUUnpackInfo_118, KS8IUUnpackInfo_119,
			KS8IUUnpackInfo_120, KS8IUUnpackInfo_121, KS8IUUnpackInfo_122, KS8IUUnpackInfo_123,
			KS8IUUnpackInfo_124, KS8IUUnpackInfo_125, KS8IUUnpackInfo_126, KS8IUUnpackInfo_127,
			KS8IUUnpackInfo_128, KS8IUUnpackInfo_129, KS8IUUnpackInfo_130, KS8IUUnpackInfo_131,
			KS8IUUnpackInfo_132, KS8IUUnpackInfo_133, KS8IUUnpackInfo_134, KS8IUUnpackInfo_135,
			KS8IUUnpackInfo_136, KS8IUUnpackInfo_137, KS8IUUnpackInfo_138, KS8IUUnpackInfo_139,
			KS8IUUnpackInfo_140, KS8IUUnpackInfo_141, KS8IUUnpackInfo_142, KS8IUUnpackInfo_143,
			KS8IUUnpackInfo_144, KS8IUUnpackInfo_145, KS8IUUnpackInfo_146, KS8IUUnpackInfo_147,
			KS8IUUnpackInfo_148, KS8IUUnpackInfo_149, KS8IUUnpackInfo_150, KS8IUUnpackInfo_151,
			KS8IUUnpackInfo_152, KS8IUUnpackInfo_153, KS8IUUnpackInfo_154, KS8IUUnpackInfo_155,
			KS8IUUnpackInfo_156, KS8IUUnpackInfo_157, KS8IUUnpackInfo_158, KS8IUUnpackInfo_159,
			KS8IUUnpackInfo_160, KS8IUUnpackInfo_161, KS8IUUnpackInfo_162, KS8IUUnpackInfo_163,
			KS8IUUnpackInfo_164, KS8IUUnpackInfo_165, KS8IUUnpackInfo_166, KS8IUUnpackInfo_167,
			KS8IUUnpackInfo_168, KS8IUUnpackInfo_169, KS8IUUnpackInfo_170, KS8IUUnpackInfo_171,
			KS8IUUnpackInfo_172, KS8IUUnpackInfo_173, KS8IUUnpackInfo_174, KS8IUUnpackInfo_175,
			KS8IUUnpackInfo_176, KS8IUUnpackInfo_177, KS8IUUnpackInfo_178, KS8IUUnpackInfo_179,
			KS8IUUnpackInfo_180, KS8IUUnpackInfo_181, KS8IUUnpackInfo_182, KS8IUUnpackInfo_183,
			KS8IUUnpackInfo_184, KS8IUUnpackInfo_185, KS8IUUnpackInfo_186, KS8IUUnpackInfo_187,
			KS8IUUnpackInfo_188, KS8IUUnpackInfo_189, KS8IUUnpackInfo_190, KS8IUUnpackInfo_191,
			KS8IUUnpackInfo_192, KS8IUUnpackInfo_193, KS8IUUnpackInfo_194, KS8IUUnpackInfo_195,
			KS8IUUnpackInfo_196, KS8IUUnpackInfo_197, KS8IUUnpackInfo_198, KS8IUUnpackInfo_199,
			KS8IUUnpackInfo_200, KS8IUUnpackInfo_201, KS8IUUnpackInfo_202, KS8IUUnpackInfo_203,
			KS8IUUnpackInfo_204, KS8IUUnpackInfo_205, KS8IUUnpackInfo_206, KS8IUUnpackInfo_207,
			KS8IUUnpackInfo_208, KS8IUUnpackInfo_209, KS8IUUnpackInfo_210, KS8IUUnpackInfo_211,
			KS8IUUnpackInfo_212, KS8IUUnpackInfo_213, KS8IUUnpackInfo_214, KS8IUUnpackInfo_215,
			KS8IUUnpackInfo_216, KS8IUUnpackInfo_217, KS8IUUnpackInfo_218, KS8IUUnpackInfo_219,
			KS8IUUnpackInfo_220, KS8IUUnpackInfo_221, KS8IUUnpackInfo_222, KS8IUUnpackInfo_223,
			KS8IUUnpackInfo_224, KS8IUUnpackInfo_225, KS8IUUnpackInfo_226, KS8IUUnpackInfo_227,
			KS8IUUnpackInfo_228, KS8IUUnpackInfo_229, KS8IUUnpackInfo_230, KS8IUUnpackInfo_231,
			KS8IUUnpackInfo_232, KS8IUUnpackInfo_233, KS8IUUnpackInfo_234, KS8IUUnpackInfo_235,
			KS8IUUnpackInfo_236, KS8IUUnpackInfo_237, KS8IUUnpackInfo_238, KS8IUUnpackInfo_239,
			KS8IUUnpackInfo_240, KS8IUUnpackInfo_241, KS8IUUnpackInfo_242, KS8IUUnpackInfo_243,
			KS8IUUnpackInfo_244, KS8IUUnpackInfo_245, KS8IUUnpackInfo_246, KS8IUUnpackInfo_247,
			KS8IUUnpackInfo_248, KS8IUUnpackInfo_249, KS8IUUnpackInfo_250, KS8IUUnpackInfo_251,
			KS8IUUnpackInfo_252, KS8IUUnpackInfo_253, KS8IUUnpackInfo_254, KS8IUUnpackInfo_255
};

}
}


#endif /* KSCHEME_8BIT_IU_UNPACK_HPP_ */


/*

#include <iostream>
#include <sstream>
#include <stdint.h>

using namespace std;

string INFO_NAME = "KS8IUUnpackInfo";
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
		uint32_t lenArr[8] = {0,0,0,0,0,0,0,0};
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
					validGroup = false;
				}
				lenArr[intNum] = intBitNum;
				offsetArr[intNum] = (curBitIdx - intBitNum) << 3;	//offset starts from 0
				maskArr[intNum] = (1LL << (intBitNum * 8)) - 1;
				intNum ++;
			}
		}

		if (!validGroup) {
			intNum = 0;
		}

		if (intNum == 0) {
			validGroup = false;	//a valid group should represent at least one integer
		}

		int totalByte = 0;
		for (int t=0; t<intNum; t++) {
			totalByte += lenArr[t];
		}

		//output
		cout << "static " + INFO_NAME + " " + INFO_NAME + "_" << i << " = { ";
		cout << "{";
		for (int j=0; j<7; j++) {
			cout << lenArr[j] << ", ";
		}
		cout << lenArr[7] << "}, {";
		for (int j=0; j<7; j++) {
			cout << showbase << hex << maskArr[j] << dec << ", ";
		}
		cout << showbase << hex << maskArr[7] << dec << "}, ";
		cout << ((totalByte+3)/4 * 4) << ", ";
		cout << (intNum<<2) << ", ";
		cout << (validGroup ? "true" : "false");
		cout << " };" << endl;
	}

	printInfoArr();

	return 0;
}

 */
